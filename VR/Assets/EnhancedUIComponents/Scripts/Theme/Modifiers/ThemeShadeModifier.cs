using System;
using MyBox;
using UnityEngine;
using VRAppBase.EnhancedUIComponents.Scripts.Modifiers;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class ThemeShadeModifier : ThemeModifier
    {
        [SerializeField, Tooltip("If false, uses mid dark, if true, uses low dark")] private ThemeShade shade;

        public override ThemeShade Apply(ThemeShade baseShade) => shade;
    }
}