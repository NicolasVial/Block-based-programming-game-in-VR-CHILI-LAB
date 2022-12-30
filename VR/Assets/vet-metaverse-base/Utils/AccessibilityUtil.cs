using UnityEngine;

namespace VRAppBase.Utils
{
    public static class AccessibilityUtil
    {
        public static float MinLighterToDarkerLuminosityRatioConvention = 7;
        
        public static float GetRelativeRed(this Color color) => GetRelativeColor(color.r);
        public static float GetRelativeGreen(this Color color) => GetRelativeColor(color.g);
        public static float GetRelativeBlue(this Color color) => GetRelativeColor(color.b);

        /// <summary>
        /// https://www.w3.org/TR/WCAG20/#relativeluminancedef
        /// </summary>
        /// <param name="color"></param>
        /// <returns></returns>
        public static float GetRelativeLuminosity(this Color color) =>
            0.2126f * color.GetRelativeRed() +
            0.7152f * color.GetRelativeGreen() +
            0.0722f * color.GetRelativeBlue();

        private static float GetRelativeColor(float colorValue)
        {
            return colorValue <= 0.03928f ? colorValue / 12.92f : Mathf.Pow((colorValue + 0.055f) / 1.055f, 2.4f);
        }

        public static float GetContrastRatioWith(this Color thisColor, Color thatColor)
        {
            float l1 = thisColor.GetRelativeLuminosity();
            float l2 = thatColor.GetRelativeLuminosity();

            return l1 > l2 ? (l1 + 0.05f) / (l2 + 0.05f) : (l2 + 0.05f) / (l1 + 0.05f);
        }

        public static bool HasLargeEnoughContrastRatioComparedTo(this Color thisColor, Color thatColor)
        {
            return thisColor.GetContrastRatioWith(thatColor) > MinLighterToDarkerLuminosityRatioConvention;
        }
    }
}