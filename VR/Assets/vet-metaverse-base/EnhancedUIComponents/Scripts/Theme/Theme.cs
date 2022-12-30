using System;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    [Serializable, CreateAssetMenu(fileName = "Theme", menuName = "UI/Theme")]
    public class Theme : ScriptableObject
    {
        [Header("General")]
        public Color primaryColor;
        public Color secondaryColor;
        public Color accentColor;
        public Color backgroundColor;
        public Color whiteColor = Color.white;
        [Header("Variations")]
        [SerializeField, Range(0.001f, 1f)] public float disabledComponentSaturationReduction;

        [Header("Shades")] 
        [SerializeField, Range(0.001f, 1), Tooltip("How much lighter is the light shade")] public float lightShadeRatio;
        [SerializeField, Range(0.001f, 1), Tooltip("How much darker is the dark shade")] public float midDarkShadeRatio;
        [SerializeField, Range(0.0f, 1), Tooltip("How much darker is the darkest shade")] public float lowDarkShadeRatio;
        
        public event Action ThemeChanged;

        private void OnValidate() =>  ThemeChanged?.Invoke();
    }
}