using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace InitializationSequence
{
    /// <summary>
    /// Util methods to build a mesh for the <see cref="SynchronizedTable"/>'s mesh
    /// </summary>
    public static class TableMeshBuilder
    {
        
        /// <summary>
        /// Computes the angle between the x axis and the point from the specified center
        /// </summary>
        /// <param name="point">The point to calculate the angle to</param>
        /// <param name="center">The center (here of the polygon)</param>
        /// <returns>The angle in radians between ]-pi, pi]</returns>
        public static float Angle(Vector3 point, Vector3 center)
        {
            Vector3 centeredPoint = point - center;
            return Mathf.Atan2(centeredPoint.x, centeredPoint.z);
        }

        /// <summary>
        /// When the two surfaces, one above the other, have been created, link them to create the sides of the mesh (
        /// link all edges which are above another)
        /// </summary>
        /// <param name="original">The points of the top surface of the table</param>
        /// <param name="shadow">The points of the bottom surface of the table</param>
        /// <param name="triangles">The existing triangles</param>
        /// <param name="hullSize">The size of the convex hull</param>
        /// <param name="center">The center of the top polygon</param>
        /// <returns>
        /// The newly created triangles, sides of the volume
        /// </returns>
        public static int[] LinkSurfaces(List<ReferencePoint> original, List<ReferencePoint> shadow, int[] triangles, int hullSize, Vector3 center)
        {
            // Sort vertices in clockwise order
            original.Sort((p1, p2) =>Angle(p1.Position, center).CompareTo(Angle(p2.Position,center)));
            shadow.Sort((p1, p2) => Angle(p1.Position, center).CompareTo(Angle(p2.Position,center)));
            var result = new List<int>(triangles);
            
            for (int i = 0; i < hullSize; i++)
            {
                // First triangle
                result.Add(original[i].Index);                  // Upper pair
                result.Add(shadow[i].Index);                    // Lower Pair
                result.Add(original[(i+1) % hullSize].Index);   // Next Upper
                // Second triangle
                result.Add(original[(i+1) % hullSize].Index);   // Next Upper
                result.Add(shadow[i].Index);                    // Lower Pair
                result.Add(shadow[(i+1) % hullSize].Index);     // Next Lower
            }

            return result.ToArray();
        }

        /// <summary>
        /// Doubles the triangles, the other half being the inverse of the first,
        /// such that the player sees both sides of the triangles (In unity, the ordering of the triangles
        /// relative to their normal is relevant)
        /// </summary>
        /// <param name="triangles">The original triangles</param>
        /// <returns>Both original and inversed triangles</returns>
        public static int[] DoubleTriangleGeometry(int[] triangles)
        {
            int offset = triangles.Length;
            int[] result = new int[triangles.Length * 2];
            
            for (int i = 0; i < triangles.Length; i++)
            {
                result[i] = triangles[i];
                // Rotate the order of the triangles
                if (i % 3 == 0) { result[offset + i] = triangles[i]; }
                else if (i % 3 == 1) { result[offset + i] = triangles[i + 1]; }
                else if (i % 3 == 2) { result[offset + i] = triangles[i - 1]; }
            }

            return result;
        }

        /// <summary>
        /// Creates a surface shadowing the top of the table, smaller in surface by <see cref="amount"/>
        /// and lower in height by <see cref="height"/>
        /// </summary>
        /// <param name="amount">The ratio between the top surface of the table and the bottom one</param>
        /// <param name="height">The height by which to lower the bottom half of the table</param>
        /// <param name="basePoints">The original points, of the top surface of the table</param>
        /// <param name="shadowPoints">The shadow points, of the bottom surface of the table</param>
        /// <param name="triangles">The triangles created until now</param>
        /// <param name="gravityCenter">The center of gravity of the polygon</param>
        /// <returns>
        /// <list type="bullet">
        ///     <item>List[ReferencePoint] shadowPoints : the newly created points of the bottom surface of the tables</item>
        ///     <item>int[] triangles : All of the triangles created until now, including the newly created ones</item>
        /// </list>
        /// </returns>
        public static int[] DuplicateSurfaceAndOffsetBy(
            float amount, float height, List<ReferencePoint> basePoints, List<ReferencePoint> shadowPoints,
            int[] triangles, Vector3 gravityCenter
        ) {
            int[] resultTriangles = new int[2 * triangles.Length];
            int nbPoints = basePoints.Count;
            int nbTriangles = triangles.Length;

            for (int i = 0; i < basePoints.Count; i++)
            {
                ReferencePoint shadowCopy = shadowPoints[i];
                ReferencePoint originalPoint = basePoints[i];
                
                // Correct the index
                shadowCopy.Index = originalPoint.Index + nbPoints;
                // Offsets all shadow Points towards the center of gravity
                shadowCopy.transform.position = new Vector3(
                    amount * originalPoint.x + (1-amount) * gravityCenter.x,
                    originalPoint.y - height,
                    amount * originalPoint.z + (1-amount) * gravityCenter.z);
            }

            // Correct the triangles
            for (int i = 0; i < nbTriangles; i++)
            {
                resultTriangles[i] = triangles[i];
                // Take into account the index offset
                resultTriangles[i + nbTriangles] = triangles[i] + nbPoints;
            }
            
            return resultTriangles;
        }

        ///<summary>Log the given vertices</summary>
        public static void LogVertices(ReferencePoint[] points)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("Vertices = ");
            for (int i = 0; i < points.Length; i++)
            {
                sb.Append($"\n\t - {i} - {points[i]}");
            }
            Debug.Log(sb.ToString());
        }
        
        ///<summary>Log the given triangles</summary>
        public static void LogTriangleIndices(int[] indices)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("Triangles indices = ");
            for (int i = 0; i < indices.Length; i++)
            {
                if (i % 3 == 0) { sb.Append($"\n\t - "); }
                else { sb.Append(", "); }

                sb.Append($"{indices[i]}");
            }
            Debug.Log(sb.ToString());
        }
        
    }
}