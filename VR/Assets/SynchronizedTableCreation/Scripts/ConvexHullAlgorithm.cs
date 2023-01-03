using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using UnityEngine;
using Utils;
using VRAppBase.Utils;

namespace InitializationSequence
{
    public class ConvexHullAlgorithm
    {

        /// <summary>Computes the convex hull of a polygon, in clockwise order in a Y-up 
        /// coordinate system (counterclockwise in a Y-down coordinate system).</summary>
        /// <remarks>Uses the Monotone Chain algorithm, a.k.a. Andrew's Algorithm.
        /// Credits : http://loyc.net/2014/2d-convex-hull-in-cs.html</remarks>
        public static List<ReferencePoint> Apply(List<ReferencePoint> points, bool sortInPlace = false)
        {
            if (!sortInPlace) { points = new List<ReferencePoint>(points); }
            
            points.Sort((a, b) => Util.DoubleEquals(a.x, b.x) ? a.z.CompareTo(b.z) : (a.x > b.x ? 1 : -1));

            List<ReferencePoint> hull = new List<ReferencePoint>();
            int L = 0, U = 0;

            for (int i = points.Count - 1; i >= 0; i--)
            {
                ReferencePoint p = points[i];
                ReferencePoint p1;
                while (L >= 2 && Cross2DOnXZ(
                           (p1 = hull[^1]).Position - hull[^2].Position, 
                           p.Position - p1.Position
                       ) >= 0)
                {
                    hull.RemoveAt(hull.Count - 1);
                    L--;
                }
                hull.Add(p);
                L++;

                while (U >= 2 && Cross2DOnXZ(
                           (p1 = hull[0]).Position - hull[1].Position,
                           p.Position - p1.Position) <= 0)
                {
                    hull.RemoveAt(0);
                    U--;
                }

                if (U != 0) { hull.Insert(0, p); }
                U++;
                Debug.Assert(U+L == hull.Count+1);
            }
            hull.RemoveAt(hull.Count -1);
            return hull;
        }

        private static double Cross2DOnXZ(Vector3 a, Vector3 b) => a.x * b.z - a.z * b.x;
    }
}