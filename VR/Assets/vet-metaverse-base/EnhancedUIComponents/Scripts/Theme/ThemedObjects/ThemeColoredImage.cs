using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    [ExecuteAlways]
    [RequireComponent(typeof(Image))]
    public class ThemeColoredImage : ThemedObject<Image>
    {
        [SerializeField, HideInInspector] private Image image;

        protected override void Apply(ThemeCategory category, ThemeShade shade, ThemeState state)
        {
            if (image == null) { image = GetComponent<Image>(); }

            image.color = ThemeManager.GetColorFrom(category, shade, state);
        }
    }
}