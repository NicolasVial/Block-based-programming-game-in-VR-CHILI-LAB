using System;
using System.Collections.Generic;
using System.Linq;
using Utils;
using VRAppBase.Utils;

namespace InitializationSequence
{
    public static class DelaunayTriangulationAlgorithm
    {

        /// <summary>
        /// Given a array of 2D points, which are themselves arrays, we can create a Delaunay object.
        /// <code>
        ///     var points = [
        ///     [-1.5, 0],
        ///     [0, 1],
        ///     [0, 10],
        ///     [1.5, 0]
        ///     ];
        ///
        ///     var delaunay = DelaunayTriangulationAlgorithm.apply(points);
        ///</code>
        ///The triangulation is an array points: every triplet denotes the vertices of a triangle in the Delaunay triangulation.
        /// <code>triangles = [[-1.5,0], [1.5,0], [0,1], [0,10], [-1.5,0], [0,1], [1.5,0], [0,10], [0,1]]</code>
        /// <code>
        ///     In this example, the triangles are 
        ///     #1: [-1.5,0], [1.5,0], [0,1]
        ///     #2: [0,10], [-1.5,0], [0,1]
        ///     #3: [1.5,0], [0,10], [0,1]
        /// </code>
        /// </summary>
        /// <remarks>Credits : https://github.com/Bathlamos/delaunay-triangulation/blob/master/delaunay.js</remarks>
        /// <param name="points">The convex hull of points to triangulate from</param>
        /// <returns>A triangulation</returns>
        public static Optional<List<ReferencePoint>> Apply(List<ReferencePoint> points)
        {
            // Initial sorting of the points
            points.Sort((p1, p2) =>
            {
                if (Util.DoubleEquals(p1.x, p2.x)) { return p1.z.CompareTo(p2.z); }
                return (p1.x > p2.x ? 1 : -1);
            });

            // If less than or equal to 2 then we cannot triangulate 
            if (points.Count <= 2) { return Optional<List<ReferencePoint>>.Empty(); }

            var quadEdge = Delaunay(points).le;
            
            // All edges first marked false
            var faces = new List<ReferencePoint>();
            var queueIndex = 0;
            var queue = new List<QuadEdge>();
            queue.Add(quadEdge);
            
            // Mark all outer edges as visited
            while (LeftOf(quadEdge.Onext.Dest, quadEdge)) { quadEdge = quadEdge.Onext; }

            var curr = quadEdge;
            do
            {
                queue.Add(curr.Sym);
                curr.Mark = true;
                curr = curr.LNext;
            } while (curr != quadEdge);

            do
            {
                var edge = queue[queueIndex];
                queueIndex++;
                if (!edge.Mark)
                {
                    // Stores the edges for a visited triangle. Also pushes sym (neighbour) edges on stack to visit later
                    curr = edge;
                    do
                    {
                        faces.Add( curr.Orig );
                        if (!curr.Sym.Mark)
                        {
                            queue.Add(curr.Sym);
                        }

                        curr.Mark = true;
                        curr = curr.LNext;
                    } while (curr != edge);
                }
            } while (queueIndex < queue.Count);

            return Optional<List<ReferencePoint>>.Of(faces);
        }

        private static IDK Delaunay(List<ReferencePoint> s)
        {
            QuadEdge a;
            QuadEdge b;
            QuadEdge c; 
            QuadEdge t;

            if (s.Count == 2)
            {
                a = MakeEdge(s[0], s[1]);
                return new IDK(a, a.Sym);
            } 
            if (s.Count == 3)
            {
                a = MakeEdge(s[0], s[1]);
                b = MakeEdge(s[1], s[2]);
                Splice(a.Sym, b);

                if (Ccw(s[0], s[1], s[2])) { c = Connect(b, a); return new IDK(a, b.Sym); }
                if (Ccw(s[0], s[2], s[1])) { c = Connect(b, a); return new IDK(c.Sym, c); }
                return new IDK(a, b.Sym); // All three points are colinear
            }
            
            var haltLength = (int)Math.Ceiling(s.Count / 2.0f);
            var left = Delaunay(s.Take(haltLength).ToList());
            var right = Delaunay(s.Skip(haltLength).ToList());
            
            // Compute the lower common tangent of L and R
            var ldo = left.le;
            var ldi = left.re;
            var rdi = right.le;
            var rdo = right.re;

            do
            {
                if (LeftOf(rdi.Orig, ldi)) { ldi = ldi.LNext; }
                else if (RightOf(ldi.Orig, rdi)) { rdi = rdi.RPrev; }
                else { break; }
            } while (true);

            var basel = Connect(rdi.Sym, ldi);
            if (ldi.Orig == ldo.Orig) { ldo = basel.Sym; }
            if (rdi.Orig == rdo.Orig) { rdo = basel; }
            
            // This is the merge loop
            do
            {
                // Locate the first L point (lcand.Dest) to be encountered by the rising bubble,
                // and delete L edges out of base1.Dest that fail the circle test.
                var lcand = basel.Sym.Onext;
                if (Valid(lcand, basel))
                {
                    while (InCircle(basel.Dest, basel.Orig, lcand.Dest, lcand.Onext.Dest))
                    {
                        t = lcand.Onext;
                        DeleteEdge(lcand);
                        lcand = t;
                    }
                }

                //Symmetrically, locate the first R point to be hit, and delete R edges
                var rcand = basel.OPrev;
                if (Valid(rcand, basel))
                {
                    while (InCircle(basel.Dest, basel.Orig, rcand.Dest, rcand.OPrev.Dest))
                    {
                        t = rcand.OPrev;
                        DeleteEdge(rcand);
                        rcand = t;
                    }
                }

                // If both lcand and rcand are invalid, then basel is the upper common tangent
                if (!Valid(lcand, basel) && !Valid(rcand, basel)) { break; }

                // The next cross edge is to be connected to either lcand.Dest or rcand.Dest
                // If both are valid, then choose the appropriate one using the InCircle test
                if (!Valid(lcand, basel)
                    || (Valid(rcand, basel)
                        && InCircle(lcand.Dest, lcand.Orig, rcand.Orig, rcand.Dest)))
                {
                    // Add cross edge basel from rcand.Dest to basel.Dest
                    basel = Connect(rcand, basel.Sym);
                }
                // Add cross edge base1 from basel.Org to lcand. Dest
                else
                {
                    basel = Connect(basel.Sym, lcand.Sym);
                }
            } while (true);

            return new IDK(le: ldo, re: rdo);
            
        // TODO CHECK FOR DOUBLE VALUE COMPARISON (This includes vector 3 equality)
        }

        /*
        Computes | a.x  a.y  1 |
                 | b.x  b.y  1 | > 0
                 | c.x  c.y  1 |
         */
        private static bool Ccw(ReferencePoint a, ReferencePoint b, ReferencePoint c) {
            return (b.x - a.x) * (c.z - a.z) - (b.z - a.z) * (c.x - a.x) > 0;
        }

        private static bool RightOf(ReferencePoint x, QuadEdge e) {
            return Ccw(x, e.Dest, e.Orig);
        }

        private static bool LeftOf(ReferencePoint x, QuadEdge e) {
            return Ccw(x, e.Orig, e.Dest);
        }

        private static bool Valid(QuadEdge e, QuadEdge basel) {
            return RightOf(e.Dest, basel);
        }
        
        /*
         Computes | a.x  a.y  a.x²+a.y²  1 |
                  | b.x  b.y  b.x²+b.y²  1 | > 0
                  | c.x  c.y  c.x²+c.y²  1 |
                  | d.x  d.y  d.x²+d.y²  1 |
         * Return true is d is in the circumcircle of a, b, c
         */
        private static bool InCircle(ReferencePoint a, ReferencePoint b, ReferencePoint c, ReferencePoint d)
        {
            if((Util.DoubleEquals(a.x, d.x) && Util.DoubleEquals(a.z, d.z))
               || (Util.DoubleEquals(b.x, d.x) && Util.DoubleEquals(b.z, d.z))
               || (Util.DoubleEquals(c.x, d.x) && Util.DoubleEquals(c.z, d.z)))
                return false;

            var sa = a.x * a.x + a.z * a.z;
            var sb = b.x * b.x + b.z * b.z;
            var sc = c.x * c.x + c.z * c.z;
            var sd = d.x * d.x + d.z * d.z;

            var d1 = sc - sd;
            var d2 = c.z - d.z;
            var d3 = c.z * sd - sc * d.z;
            var d4 = c.x - d.x;
            var d5 = c.x * sd - sc * d.x;
            var d6 = c.x * d.z - c.z * d.x;

            return a.x * (b.z * d1 - sb * d2 + d3)
                - a.z * (b.x * d1 - sb * d4 + d5)
                + sa * (b.x * d2 - b.z * d4 + d6) 
                - b.x * d3 + b.z * d5 - sb * d6 > 1; // We have an issue here with number accuracy
        }

        private static QuadEdge MakeEdge(ReferencePoint orig, ReferencePoint dest)
        {
            var q0 = new QuadEdge(default, default, orig);
            var q1 = new QuadEdge(default, default, default);
            var q2 = new QuadEdge(default, default, dest);
            var q3 = new QuadEdge(default, default, default);

            // create the segment
            q0.Onext = q0; q2.Onext = q2; // lonely segment: no "next" quadedge
            q1.Onext = q3; q3.Onext = q1; // in the dual: 2 communicating facets

            // dual switch
            q0.Rot = q1; q1.Rot = q2;
            q2.Rot = q3; q3.Rot = q0;
            return q0;
        }

        /// <summary>
        /// Attach/detach the two edges - combine/split the two rings in the dual space
        /// </summary>
        /// <param name="a">The first QuadEdge</param>
        /// <param name="b">The second QuadEdge</param>
        private static void Splice(QuadEdge a, QuadEdge b)
        {
            var alpha = a.Onext.Rot;
            var beta = b.Onext.Rot;

            var t2 = a.Onext;
            var t3 = beta.Onext;
            var t4 = alpha.Onext;

            a.Onext = b.Onext;
            b.Onext = t2;
            alpha.Onext = t3;
            beta.Onext = t4;
        }

        /// <summary>
        /// Create a new QuadEdge by connecting 2 QuadEdges
        /// </summary>
        /// <param name="a">the first QuadEdges to connect</param>
        /// <param name="b">the second QuadEdges to connect</param>
        /// <returns>the new QuadEdge</returns>
        private static QuadEdge Connect(QuadEdge a, QuadEdge b)
        {
            var q = MakeEdge(a.Dest, b.Orig);
            Splice(q, a.LNext);
            Splice(q.Sym, b);
            return q;
        }
        
        private static void DeleteEdge(QuadEdge q) {
            Splice(q, q.OPrev);
            Splice(q.Sym, q.Sym.OPrev);
        }

        class QuadEdge
        {
            public QuadEdge Onext;
            public QuadEdge Rot;
            public ReferencePoint Orig;
            public bool Mark;

            public QuadEdge(QuadEdge onext, QuadEdge rot, ReferencePoint orig)
            {
                Onext = onext;
                Rot = rot;
                Orig = orig;
                Mark = false;
            }

            public QuadEdge Sym => Rot.Rot;
            public ReferencePoint Dest => Sym.Orig;
            public QuadEdge RotSym => Rot.Sym;
            public QuadEdge OPrev => Rot.Onext.Rot;
            public QuadEdge DPrev => RotSym.Onext.RotSym;
            public QuadEdge LNext => RotSym.Onext.Rot;
            public QuadEdge LPrev => Onext.Sym;
            public QuadEdge RPrev => Sym.Onext;
        }

        struct IDK
        {
            public QuadEdge le;
            public QuadEdge re;

            public IDK(QuadEdge le, QuadEdge re)
            {
                this.le = le;
                this.re = re;
            }
        }
    }
}