using System.Collections.Generic;
using UnityEngine;
using VRAppBase.Utils;

namespace InitializationSequence
{
    public class InvisibleWalls : Singleton<InvisibleWalls>
    {
        [SerializeField] private float wallsHeight;
        [SerializeField] private float wallsThickness;

        private List<GameObject> spawnedWalls = new();
        
        /// <summary>
        /// Initialize the walls given a <see cref="SynchronizedTable"/>
        /// </summary>
        /// <param name="table">The table</param>
        public void InitializeWith(SynchronizedTable table)
        {
            List<ReferencePoint> convexHull = table.ConvexHull;
            for (int i = 0; i < convexHull.Count; i++)
            {
                CreateWallBetween(convexHull[i].Position, convexHull[(i + 1) % convexHull.Count].Position);
            }
        }

        /// <summary>
        /// Destroys all the walls created until now
        /// </summary>
        public void ClearWalls()
        {
            spawnedWalls.ForEach(DestroyImmediate);
            spawnedWalls.Clear();
        }
        
        /// <summary>
        /// Creates an invisible wall which will inherit this object's layer and have a collider
        /// </summary>
        /// <param name="p1">The first end of the wall</param>
        /// <param name="p2">The second end of the wall</param>
        private void CreateWallBetween(Vector3 p1, Vector3 p2)
        {
            GameObject wallObj = new GameObject("InvisibleWall");
            spawnedWalls.Add(wallObj);
            
            wallObj.transform.SetParent(transform);
            wallObj.transform.position = (p1 + p2) / 2.0f;
            wallObj.transform.rotation = Quaternion.LookRotation(Vector3.Cross(p1-p2, Vector3.up));
            wallObj.layer = gameObject.layer;
            
            BoxCollider wallCollider = wallObj.AddComponent<BoxCollider>();
            wallCollider.center = new Vector3(0, wallsHeight/2.0f,0);
            wallCollider.size = new Vector3(
                (p1 - p2).magnitude, 
                wallsHeight, 
                wallsThickness);
        }
    }
}