using System;
using System.Collections.Generic;
using UnityEngine;

namespace InitializationSequence
{
    public class TableEdgeSpawner : MonoBehaviour
    {

        [SerializeField] private BoxCollider prefabToSpawn;
        // Omg please don't kill me, laziness already did
        [SerializeField] private bool prefabIsFacingBackward;
        [SerializeField] private float spacing;
        [SerializeField] private int countToSpawn;

        private float minLength;
        private float depth;
        private float width;

        private Transform cachedTransform;

        private void OnValidate()
        {
            if (!(prefabToSpawn != null)) { return; }

            Transform prefabTransform = prefabToSpawn.transform;
            Vector3 bounds = prefabToSpawn.size;
            Vector3 scale = prefabTransform.lossyScale;
            width = bounds.x * scale.x;
            depth = bounds.z * scale.z;
            minLength = countToSpawn * (width + spacing) - spacing;
        }

        private void Awake()
        {
            cachedTransform ??= transform;
        }

        public bool SpawnOn(SynchronizedTable table)
        {
            Debug.Log($"Width = {width}");
            List<ReferencePoint> convexHull = table.ConvexHull;
            float minEdgeLength = -1.0f;
            ReferencePoint minP1 = null;
            ReferencePoint minP2 = null;
            
            for (int i = 0; i < convexHull.Count; i++)
            {
                // Distance between two consecutive points
                ReferencePoint p1 = convexHull[i];
                ReferencePoint p2 = convexHull[(i + 1) % convexHull.Count];
                float edgeLength = Vector3.Distance(p1.Position, p2.Position);
                if ((minEdgeLength < 0 || edgeLength < minEdgeLength) && edgeLength > minLength)
                {
                    Debug.Log($"{edgeLength} is smaller than {minEdgeLength} and still greater than {minLength}");
                    minP1 = p1;
                    minP2 = p2;
                    minEdgeLength = edgeLength;
                }
            }

            if (minEdgeLength > 0)
            {
                Debug.Log("Solution found among the edges");
                SpawnBetween(minP1, minP2, GetInsideDirection(minP1, minP2)); // TODO GIVE INSIDE DIRECTION TOO
                return true;
            }
            // No edge is big enough, look inside
            minP1 = convexHull[0];
            
            for (int i = 1; i < convexHull.Count; i++)
            {
                ReferencePoint p2 = convexHull[i];
                float edgeLength = Vector3.Distance(minP1.Position, p2.Position);

                if ((minEdgeLength < 0 || edgeLength < minEdgeLength) && edgeLength > minLength)
                {
                    minEdgeLength = edgeLength;
                    minP2 = p2;
                }
            }

            if (minEdgeLength > 0)
            {
                Debug.Log("Solution found among the edges");
                SpawnBetween(minP1, minP2, GetInsideDirection(minP1, minP2)); // TODO GIVE INSIDE DIRECTION TOO
                return true;
            }

            return false;
        }

        private void SpawnBetween(ReferencePoint p1, ReferencePoint p2, Vector3 insideDirection)
        {
            p1.isForkliftSource = true;
            p2.isForkliftSource = true;

            Vector3 localXDirection = (p2.Position - p1.Position).normalized;
            Vector3 midPoint = (p2.Position + p1.Position) / 2.0f;
            Vector3 centerSpawnPoint = midPoint + insideDirection * depth / 2.0f;
            Debug.DrawLine(centerSpawnPoint - new Vector3(0, 0.5f, 0), centerSpawnPoint + new Vector3(0, 0.5f, 0), new Color(0, 0, 1), 200, false);
            
            Vector3 rightSpawnPoint = centerSpawnPoint - (minLength/2.0f) * localXDirection;
            Debug.DrawLine(rightSpawnPoint - new Vector3(0, 0.5f, 0), rightSpawnPoint + new Vector3(0, 0.5f, 0), new Color(0, 1, 0), 200, false);
            
            Quaternion spawnOrientation = Quaternion.LookRotation((prefabIsFacingBackward ? -1 : 1) * insideDirection);

            for (int i = 0; i < countToSpawn; i++)
            {
                float offset = i * (width + spacing) + width / 2.0f;
                Vector3 spawnPoint = rightSpawnPoint + localXDirection * offset;
                Instantiate(prefabToSpawn, spawnPoint, spawnOrientation, cachedTransform);
                Debug.Log($"Spawned at {spawnPoint}");
            }
        }

        private void OnDrawGizmos()
        {
            if (ReferenceEquals(null, prefabToSpawn)) { return; }

            cachedTransform ??= transform;
            
            Gizmos.color = Color.yellow;
            Vector3 position = cachedTransform.position;
            Gizmos.DrawLine(
                position - new Vector3(minLength/2.0f, 0, 0),
                position + new Vector3(minLength/2.0f, 0, 0)
            );
            Gizmos.DrawLine(
                position - new Vector3(minLength/2.0f, 0, 0),
                position - new Vector3(minLength/2.0f, 0, 0) + new Vector3(0, 0, depth));

        }

        private Vector3 GetInsideDirection(ReferencePoint p1, ReferencePoint p2)
        {
            Vector3 consecutiveVector = p2.Position - p1.Position;
            // The inside direction is to the "right" of the vector between two consecutive points
            return -Vector3.Cross(consecutiveVector, Vector3.up).normalized;
        }
    }
}