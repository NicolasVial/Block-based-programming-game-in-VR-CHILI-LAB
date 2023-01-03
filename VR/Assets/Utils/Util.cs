using System;
using System.Collections.Generic;
using System.Linq;
using MyBox;
using UnityEngine;
using Object = UnityEngine.Object;

namespace VRAppBase.Utils
{
    public static class Util
    {
        public static bool IsDestroyed(this MonoBehaviour behaviour) => 
            ReferenceEquals(behaviour.transform, null) ||
            ReferenceEquals(behaviour.gameObject, null);

        public static Color MuchDarker(this Color color) => color.BrightnessOffset(-0.2f);
        public static Color MuchLighter(this Color color) => color.BrightnessOffset(0.2f);

        public static Color WithLuminosity(this Color color, float luminosity)
        {
            double[] hsl = color.GetHSL();
            return ToRGB(hsl[0], hsl[1], luminosity);
        }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       COLOR CONVERSION                               ||
// ||                                                                                      ||
// \\======================================================================================//
        
        public static double[] GetHSL(this Color c)
        {
            double r = c.r;
            double g = c.g;
            double b = c.b;
                
            double min = Math.Min(Math.Min(r, g), b);
            double max = Math.Max(Math.Max(r, g), b);
            double delta = max - min;

            double H = 0;
            double S = 0;
            double L = ((max + min) / 2.0f);

            if (delta != 0)
            {
                if (L < 0.5f) { S = delta / (max + min); }
                else { S = delta / (2.0f - max - min); }

                if (Math.Abs(r - max) < 0.0000001) { H = (g - b) / delta; }
                else if (Math.Abs(g - max) < 0.0000001) { H = 2f + (b - r) / delta; }
                else if (Math.Abs(b - max) < 0.0000001) { H = 4f + (r - g) / delta; }
            }

            return new []{H, S, L};
        }
        
        public static Color ToRGB(double h, double s, double l)
        {
            float r, g, b;
            if (s == 0)
            {
                r = (float)l;
                g = (float)l;
                b = (float)l;
            }
            else
            {
                double t1, t2;
                double th = h / 6.0;

                if (l < 0.5) { t2 = l * (1 + s); }
                else { t2 = l + s - l * s; }
                t1 = 2 * l - t2;

                double tr, tg, tb;
                tr = th + (1.0 / 3.0);
                tg = th;
                tb = th - (1.0 / 3.0);

                tr = ColorCalc(tr, t1, t2);
                tg = ColorCalc(tg, t1, t2);
                tb = ColorCalc(tb, t1, t2);
                r = (float)tr;
                g = (float)tg;
                b = (float)tb;
            }
            return new Color(r, g, b);
        }
        private static double ColorCalc(double c, double t1, double t2)
        {

            if (c < 0) c += 1d;
            if (c > 1) c -= 1d;
            if (6.0d * c < 1.0d) return t1 + (t2 - t1) * 6.0d * c;
            if (2.0d * c < 1.0d) return t2;
            if (3.0d * c < 2.0d) return t1 + (t2 - t1) * (2.0d / 3.0d - c) * 6.0d;
            return t1;
        }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       MISCELLANEOUS                                  ||
// ||                                                                                      ||
// \\======================================================================================//
        
        public static bool IsOculusQuest2Headset() => SystemInfo.deviceName == "Oculus Quest 2";
        
        public static void SetGlobalScale (Transform transform, Vector3 globalScale)
        {
            transform.localScale = Vector3.one;
            transform.localScale = new Vector3 (globalScale.x/transform.lossyScale.x, globalScale.y/transform.lossyScale.y, globalScale.z/transform.lossyScale.z);
        }

        public static bool DoubleEquals(double d1, double d2) => Math.Abs(d1 - d2) < 0.000001f;

        public static bool TryGetComponent<TResult>(this GameObject obj, out TResult result)
        {
            result = obj.GetComponent<TResult>();
            return result != null;
        }

        public static TResult CleanInstantiate<TResult>(TResult prefab, Vector3 pos, Quaternion rot, Transform parent = null) where TResult : Object
        {
            if (parent == null) { parent = DefaultInstantiateLocation.Instance.Transform.root; }
            return Object.Instantiate(prefab, pos, rot, parent);
        }

        public static List<Transform> GetFirstLevelChildren(this Component comp)
        {
            List<Transform> result = new List<Transform>();
            foreach (Transform child in comp.transform) { result.Add(child); }
            return result;
        }

        public static TResult[] GetComponentsInFirstLevelChildren<TResult>(this Component comp)
        {
            return comp.GetFirstLevelChildren()
                .Select(_ => _.GetComponent<TResult>())
                .Where(_ => _ != null)
                .ToArray();
        }
    }
}