using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using InitializationSequence;
using UnityEngine;
using VRAppBase.Utils;
using Random = UnityEngine.Random;

namespace Tests
{
    public class ConvexHullAlgorithm_test : Singleton<ConvexHullAlgorithm_test>
    {
        [SerializeField] private ReferencePoint pointPrefab;
        [SerializeField] private SynchronizedTable table;
        [SerializeField] private InvisibleWalls walls;
        [SerializeField] private bool Test;
        [Header("Bounds")] 
        [SerializeField] private float xSpread;
        [SerializeField] private float ySpread;
        [SerializeField] private float zSpread;
        [SerializeField] private int nbPoints;
        private bool lastTestValue;
        [Header("Custom")] 
        [SerializeField] private bool useCustom;
        [SerializeField] private Vector3[] customPositions;
        
        private void OnValidate()
        {
            if (Test && !lastTestValue) { TestMax(); }

            lastTestValue = Test;
        }

        public void TestMax()
        {
            Transform t = transform;
            List<ReferencePoint> initialPoints = new List<ReferencePoint>();


            if (useCustom)
            {
                for (int i = 0; i < customPositions.Length; i++)
                {
                    ReferencePoint p = Instantiate(
                        pointPrefab,
                        customPositions[i],
                        Quaternion.Euler(0, 0, 0),
                        t);
                    initialPoints.Add(p);
                }
            }
            else {

                for (int i = 0; i < nbPoints; i++) 
                {
                    ReferencePoint p = Instantiate(
                        pointPrefab,
                        new Vector3(
                            Random.Range(-xSpread, xSpread),
                            Random.Range(0, ySpread),
                            Random.Range(-zSpread, zSpread)),
                        Quaternion.Euler(0, 0, 0),
                        t);
                    initialPoints.Add(p);
                }
            }

            float maxX = initialPoints.Max(_ => _.x);
            float maxZ = initialPoints.Max(_ => _.z);
            float minX = initialPoints.Min(_ => _.x);
            float minZ = initialPoints.Min(_ => _.z);

            ReferencePoint maxXPoint = initialPoints.Find(_ => Util.DoubleEquals(_.x, maxX));
            ReferencePoint maxZPoint = initialPoints.Find(_ => Util.DoubleEquals(_.z, maxZ));
            ReferencePoint minXPoint = initialPoints.Find(_ => Util.DoubleEquals(_.x, minX));
            ReferencePoint minZPoint = initialPoints.Find(_ => Util.DoubleEquals(_.z, minZ));

            List<ReferencePoint> result = ConvexHullAlgorithm.Apply(initialPoints);

            foreach (ReferencePoint point in initialPoints) { point.isInHull = false; }
            foreach (ReferencePoint point in result) { point.isInHull = true; }
            
            Debug.Assert(result.Contains(maxXPoint));
            Debug.Assert(result.Contains(maxZPoint));
            Debug.Assert(result.Contains(minXPoint));
            Debug.Assert(result.Contains(minZPoint));
            
            List<ReferencePoint> initializedShadowPoints = new List<ReferencePoint>();
            for (int i = 0; i < result.Count; i++) { initializedShadowPoints.Add(Instantiate(pointPrefab, transform)); }

            foreach (ReferencePoint point in result)
            {
                Vector3 pos = point.Position;
                point.transform.position = new Vector3(pos.x, result[0].y, point.z);
            }
            
            
            table.EditMesh(result, initializedShadowPoints);
            table.ConfirmMesh();
        }

        
    }
}