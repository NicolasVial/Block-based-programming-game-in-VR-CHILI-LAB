using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.AI;
using VRAppBase.Utils;

namespace InitializationSequence
{
    /// <summary>
    /// A table synchronized between the VR world and the Real World
    /// </summary>
    [RequireComponent(typeof(MeshRenderer))]
    [RequireComponent(typeof(MeshFilter))]
    [RequireComponent(typeof(MeshCollider))]
    // [RequireComponent(typeof(NavMeshSurface))]
    public class SynchronizedTable : Singleton<SynchronizedTable>
    {

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        ///<summary>Base points are points created for delimiting the table</summary>
        private List<ReferencePoint> basePoints = new ();
        ///<summary>Accessor for the points part of the border of the table</summary>
        public List<ReferencePoint> ConvexHull => new (basePoints);
        ///<summary>Shadow points are points created for the thickness of the table</summary>
        private List<ReferencePoint> shadowPoints = new();
        private int[] triangles = Array.Empty<int>();
        
        private Mesh previewMesh;
        private MeshFilter meshFilter;
        private MeshRenderer meshRenderer;
        private MeshCollider meshCollider;
        // private NavMeshSurface navMeshSurface;
        private Transform cachedTransform;
        public Vector3 centerOfGravity;
        
        ///<summary>The height by which the second layer of the table mesh is offseted</summary>
        [Header("Table Construction Settings")]
        [SerializeField] private float secondLayerHeightOffset;
        ///<summary>
        /// The surface ratio between the first and second layer.
        /// </summary>
        /// <list type="bullet">
        ///     <item>1 -> The first and second layer will be the same size</item>
        ///     <item>0.5 -> The second layer will be two times smaller in surface than the first</item>
        /// </list>
        [SerializeField][Range(0.0f, 1.0f)] private float secondLayerSizeRatio;
        [SerializeField] private float minimalAreaToRespect;

        [Header("Table Visuals Settings")]
        [SerializeField] private Material tablePreviewMaterial;
        [SerializeField] private Material tableCompletedMaterial;

        [Header("Companion Objects")]
        [SerializeField] private TableEdgeSpawner spawner;
        [SerializeField] private InvisibleWalls walls;

        private bool constructionCompleted;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        private void Awake()
        {
            cachedTransform = transform;
            
            // Keep the tables throughout the scenes
            previewMesh = new Mesh();
            previewMesh.name = "Table mesh";

            meshCollider = GetComponent<MeshCollider>();
            meshFilter = GetComponent<MeshFilter>();
            meshRenderer = GetComponent<MeshRenderer>();
            // navMeshSurface = GetComponent<NavMeshSurface>();
            
            meshCollider.sharedMesh = previewMesh;

            meshFilter.mesh = previewMesh;

            meshRenderer.material = tablePreviewMaterial;
        }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       CONTROLS                                       ||
// ||                                                                                      ||
// \\======================================================================================//

        /// <summary>
        /// Clears all the mesh of the table to restart its construction
        /// </summary>
        /// <exception cref="InvalidOperationException">If the method is called whereas the table shouldn't be edited</exception>
        public void Clear()
        {
            CheckTableIsEditable();

            foreach (ReferencePoint point in basePoints) {
                if (!ReferenceEquals(point, null) && !point.IsDestroyed()) { DestroyImmediate(point.gameObject); }
            }
            foreach (ReferencePoint point in shadowPoints) {
                if (!ReferenceEquals(point, null) && !point.IsDestroyed()) { DestroyImmediate(point.gameObject); }
            }
            
            // Clear all lists
            basePoints.Clear();
            shadowPoints.Clear();
            
            // And clear the mesh
            previewMesh.vertices = Array.Empty<Vector3>();
            previewMesh.triangles = Array.Empty<int>();
        }

        /// <summary>
        /// Edit the table's mesh from the base points composing a convex hull and their shadow points
        /// which will be part of the bottom surface of the table
        /// </summary>
        /// <param name="newBasePoints">The base points, being part of the top surface of the table</param>
        /// <param name="newShadowPoints">The shadow points, one for each base point, being part of the bottom
        /// surface of the table</param>
        /// <exception cref="InvalidOperationException">If the method is called whereas the table shouldn't be edited</exception>
        /// <exception cref="ArgumentException">If there is a discrepancy between the shadow points and base points</exception>
        /// <remarks>The points given to this method should be part of a convex hull and there should be as
        /// many shadow points as there is base points</remarks>
        public void EditMesh(List<ReferencePoint> newBasePoints, List<ReferencePoint> newShadowPoints)
        {
            CheckTableIsEditable();
            if (newBasePoints.Count != newShadowPoints.Count)
            {
                throw new ArgumentException("There isn't the same number of base points and shadow" +
                                                    $" points (base = {newBasePoints.Count} != shadow = {newShadowPoints.Count}!");
            }
            
            // Destroys all shadow points created until then
            shadowPoints = new List<ReferencePoint>(newShadowPoints);
            basePoints = new List<ReferencePoint>(newBasePoints);
            for (int i = 0; i < basePoints.Count; i++) { basePoints[i].Index = i; }


            // Triangulates the convex hull to create the mesh's triangles for the top surface
            // of the table
            var optTriplets = DelaunayTriangulationAlgorithm.Apply(basePoints);
            // Return if the mesh can't be created (not enough vertices yet)
            if (optTriplets.IsEmpty) { return; }
            var triplets = optTriplets.Get;
            // Triangles are the indices of the vertices
            triangles = triplets.Select(_ => _.Index).ToArray();
            
            // Log for debug
            Debug.Log("Result");
            TableMeshBuilder.LogTriangleIndices(triangles);
            TableMeshBuilder.LogVertices(basePoints.ToArray());

            // The original points are the points which were the convex hull, which represents the 
            // edges of the TOP of the table
            int hullSize = basePoints.Count;
            

            // Computes the center of gravity of the polygon
            float averageX = basePoints.Sum(_ => _.x) / hullSize;
            float averageY = basePoints.Sum(_ => _.y) / hullSize;
            float averageZ = basePoints.Sum(_ => _.z) / hullSize;

            centerOfGravity = new(averageX, averageY, averageZ);

            // Log for debug
            Debug.Log("Geometry Duplicated");
            TableMeshBuilder.LogTriangleIndices(triangles);
            TableMeshBuilder.LogVertices(basePoints.ToArray());
            
            // Duplicate the first surface to a second smaller and lower in height
            // The shadow points are the points created as a shadow of the original points, and are part
            // of the duplicate of the original surface
            triangles = TableMeshBuilder.DuplicateSurfaceAndOffsetBy(
                    secondLayerSizeRatio, secondLayerHeightOffset, 
                    basePoints, shadowPoints, 
                    triangles, centerOfGravity);

            // Link the two surfaces (original and copy)
            triangles = TableMeshBuilder.LinkSurfaces(basePoints, shadowPoints, triangles, hullSize, centerOfGravity);
            
            // Log for debug
            Debug.Log("Surface linked");
            TableMeshBuilder.LogTriangleIndices(triangles);
            TableMeshBuilder.LogVertices(basePoints.ToArray());
            
            // See surfaces both sides
            triangles = TableMeshBuilder.DoubleTriangleGeometry(triangles);
            
            // Log for debug
            TableMeshBuilder.LogTriangleIndices(triangles);
            TableMeshBuilder.LogVertices(basePoints.ToArray());

            // All vertices are both the original and the shadow points
            List<ReferencePoint> allPoints = new List<ReferencePoint>(basePoints);
            allPoints.AddRange(shadowPoints);
            allPoints.Sort((p1, p2) => p1.Index.CompareTo(p2.Index));
            
            // Setup all vertices and triangles in the mesh
            previewMesh.vertices = allPoints.Select(_ => _.Position).ToArray();
            previewMesh.triangles = triangles;

            // Optimize the mesh
            previewMesh.Optimize();
            
        }

        /// <summary>
        /// Confirms the construction of the table, making it non-editable
        /// Empty if the table is valid, 
        /// </summary>
        public void ConfirmMesh()
        {
            if (GetArea() < minimalAreaToRespect)
            {
                throw new InvalidOperationException("The area of the table is not large enough");
            }

            // First bake the navmesh and then spawn the agents
            // navMeshSurface.BuildNavMesh();

            if (!spawner.SpawnOn(this))
            {
                throw new InvalidOperationException("There is no space to spawn the forklifts !");
            }
            
            walls.InitializeWith(this);
            constructionCompleted = true;
            meshRenderer.material = tableCompletedMaterial;
            // WarehouseConstants.hasSetupSynchronizedTable = true;
        }

        private float GetArea()
        {
            int[] indices = previewMesh.triangles;
            float area = 0;
            for (int i = 0; i < indices.Length/3; i++)
            {
                int i1 = indices[3*i];
                int i2 = indices[3*i+1];
                int i3 = indices[3*i+2];

                ReferencePoint p1 = GetByIndex(i1);
                ReferencePoint p2 = GetByIndex(i2);
                ReferencePoint p3 = GetByIndex(i3);

                // If the triangle is part of the hull
                if (!ReferenceEquals(p1, null) && !ReferenceEquals(p2, null) && !ReferenceEquals(p3, null))
                {
                    area += 0.5f * Mathf.Abs(
                        p1.x * (p2.z - p3.z) +
                        p2.x * (p3.z - p1.z) +
                        p3.x * (p1.z - p2.z)
                    );
                }
            }
            return area;
        }

        private ReferencePoint GetByIndex(int index) =>  basePoints.FirstOrDefault(_ => _.Index == index);

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       UTIL METHODS                                   ||
// ||                                                                                      ||
// \\======================================================================================//
        
        private void CheckTableIsEditable()
        {
            if (constructionCompleted) { throw new InvalidOperationException("The construction of" +
                         " the table has been completed and the table shouldn't be edited anymore"); }
            
        }
    }
}