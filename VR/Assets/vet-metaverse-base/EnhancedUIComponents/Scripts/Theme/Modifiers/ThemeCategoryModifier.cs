using UnityEngine;
using VRAppBase.EnhancedUIComponents.Scripts.Modifiers;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class ThemeCategoryModifier : ThemeModifier
    {
        [SerializeField, Tooltip("Uses this category instead of the one provided to the material")] private ThemeCategory category;

        public override ThemeCategory Apply(ThemeCategory baseCategory) => category;
    }
}