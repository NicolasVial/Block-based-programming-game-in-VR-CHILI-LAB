
using System;
using UnityEngine;

namespace VRAppBase.Utils
{
    class ColorInterpolator {
        delegate float ComponentSelector(Color color);

        private static ComponentSelector _redSelector = color => color.r;
        static ComponentSelector _greenSelector = color => color.g;
        static ComponentSelector _blueSelector = color => color.b;

        public static Color InterpolateBetween(
            Color endPoint1,
            Color endPoint2,
            Color endPoint3,
            float lambda) {
            if (lambda < 0 || lambda > 1) {
                throw new ArgumentOutOfRangeException($"0 <= {lambda} <= 1");
            }

            Color color;
            if (lambda < 0.5f)
            {
                lambda *= 2f;
                color = new Color(
                    InterpolateComponent(endPoint1, endPoint2, lambda, _redSelector),
                    InterpolateComponent(endPoint1, endPoint2, lambda, _greenSelector),
                    InterpolateComponent(endPoint1, endPoint2, lambda, _blueSelector)
                );
            }
            else
            {
                lambda = (lambda - 0.5f) * 2;
                color = new Color(
                    InterpolateComponent(endPoint2, endPoint3, lambda, _redSelector),
                    InterpolateComponent(endPoint2, endPoint3, lambda, _greenSelector),
                    InterpolateComponent(endPoint2, endPoint3, lambda, _blueSelector)
                );
            }

            return color;
        }

        static float InterpolateComponent(Color endPoint1, Color endPoint2, float lambda, ComponentSelector selector) 
        {
            return (selector(endPoint1) + (selector(endPoint2) - selector(endPoint1)) * lambda);
        }
    }
}