using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using MyBox;
#if UNITY_EDITOR
    using UnityEditor;
#endif
using UnityEngine;
using VRAppBase.EnhancedUIComponents.Scripts.Serialization;
using VRAppBase.Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    /// <summary>
    ///
    /// TODO Introduce a new class deriving from COLOR which is specific to the theme object and should
    /// TODO be obtainable only specifying theme attribute and which would derive to other colors in the theme too
    /// 
    /// The goal of the theme is to keep the range of colors used in materials as small as possible so that
    /// it creates a uniformity in the visual identity of the application. Of course you can abuse the methods available
    /// to create colors outside of the scope of the theme but it is not best practice and how the theme should
    /// be used.
    /// 
    /// </summary>
    [ExecuteAlways, Serializable, CreateAssetMenu(menuName = "UI/Theme Manager Singleton", fileName = "ThemeManagerSingleton", order = 0)]
    public  class ThemeManager : Utils.ScriptableSingleton<ThemeManager>
    {
        
        [Header("General")]
        [SerializeField] public Theme theme;
        [SerializeField] public Material baseMaterial;
        [SerializeField] public string materialPath;
        [SerializeField] public string themePath;

        private static Color PrimaryColor => Instance.theme.primaryColor;
        private static Color SecondaryColor => Instance.theme.secondaryColor;
        private static Color AccentColor => Instance.theme.accentColor;
        private static Color BackgroundColor => Instance.theme.backgroundColor;
        private static Color WhiteColor => Instance.theme.whiteColor;

        private Dictionary<(ThemeCategory, ThemeShade, ThemeState), Material> _createdMaterials = new();

        public static event Action RecomputeGraphics;
        
        /// <summary>
        /// Sets the current theme for the application
        /// </summary>
        /// <param name="save">True if the modifications should be persisted into memory</param>
        /// <param name="materialPath">Path of the base material which will give the textures and from which the
        /// other materials from the theme will derive</param>
        /// <param name="themePath">The path of the theme</param>
        public static void SetTheme(string themePath, string materialPath, bool save = true)
        {
            Theme newTheme = Resources.Load<Theme>(themePath
                .Replace("Assets/Resources/", "")
                .Replace(".asset", ""));
            Material newBaseMaterial = Resources.Load<Material>(materialPath
                .Replace("Assets/Resources/", "")
                .Replace(".mat", ""));
            
            Debug.Log($"Theme = {newTheme} and Material = {newBaseMaterial}, materialPath = {materialPath}, pathUnStripped = {themePath}, path = {themePath.Replace("Assets/Resources/", "")}");
            
            if (newTheme == null || newBaseMaterial == null) { return; }
            if (Instance.theme == newTheme) { return; }
            if (Instance.theme != null) { Instance.theme.ThemeChanged -= OnThemeColorChange; }

            Instance.themePath = themePath;
            Instance.materialPath = materialPath;
            Instance.baseMaterial = newBaseMaterial;
            Instance.theme = newTheme;
            Instance.theme.ThemeChanged += OnThemeColorChange;

            if (save) { Instance.Save(); }

            Instance._createdMaterials = new();
            OnThemeColorChange();
        }

        private void Save()
        {
            string filePath = Path.Combine(Application.persistentDataPath, "Theme", "ThemeManager.dat");
            string directoryPath = Path.Combine(Application.persistentDataPath, "Theme");
            Debug.Log($"Saving modifications of the ThemeManager to \"{filePath}\"");

            SurrogateSelector ss = new SurrogateSelector();
            ss.AddSurrogate(typeof(Color), new StreamingContext(StreamingContextStates.All), new ColorSerializationSurrogate());
            ss.AddSurrogate(typeof(Theme), new StreamingContext(StreamingContextStates.All), new ThemeSerializationSurrogate());
            ss.AddSurrogate(typeof(ThemeManager), new StreamingContext(StreamingContextStates.All), new ThemeManagerSerializationSurrogate());
            
            BinaryFormatter bf = new BinaryFormatter();
            bf.SurrogateSelector = ss;
            
            Directory.CreateDirectory(directoryPath);
            FileStream file = File.Create(filePath);
            bf.Serialize(file, this);
            file.Close();
        }

        private bool Load()
        {
            string path = Path.Combine(Application.persistentDataPath, "Theme", "ThemeManager.dat");
            Debug.Log($"Loading ThemeManager from \"{path}\"...");
            if (File.Exists(path))
            {
                SurrogateSelector ss = new SurrogateSelector();
                ss.AddSurrogate(typeof(Color), new StreamingContext(StreamingContextStates.All), new ColorSerializationSurrogate());
                ss.AddSurrogate(typeof(Theme), new StreamingContext(StreamingContextStates.All), new ThemeSerializationSurrogate());
                ss.AddSurrogate(typeof(ThemeManager), new StreamingContext(StreamingContextStates.All), new ThemeManagerSerializationSurrogate());

                BinaryFormatter bf = new BinaryFormatter();
                bf.SurrogateSelector = ss;
                
                FileStream file = File.Open(path, FileMode.Open);
                ThemeManager data = (ThemeManager)bf.Deserialize(file);

                file.Close();
                SetTheme(data.themePath, data.materialPath, false);
                DestroyImmediate(data);
                
                return true;
            }
            Debug.LogWarning("No ThemeManager found, please create one via \"UITheme > ThemeEditor\"");
            return false;
        }


        private void OnEnable()
        {
            if (Instance.theme == null)
            {
                if (Load()) { Instance.theme.ThemeChanged += OnThemeColorChange; }
            }
            else
            {
                Instance.theme.ThemeChanged += OnThemeColorChange;
            }
            
            
            
#if UNITY_EDITOR
            EditorApplication.playModeStateChanged += OnPlayStateChange;
#endif
        }

#if UNITY_EDITOR
        private void OnPlayStateChange(PlayModeStateChange state)
        {
            if (state == PlayModeStateChange.EnteredEditMode) { RecomputeAll(); }
        }
#endif

        private void OnDisable()
        {
            if (Instance.theme != null) { Instance.theme.ThemeChanged -= OnThemeColorChange; }
#if UNITY_EDITOR
            EditorApplication.playModeStateChanged -= OnPlayStateChange;
#endif
        }

        /// <summary>
        /// Update all the materials in the application so that realtime update is possible. Use the
        /// cache "CreatedMaterials" to avoid expensive re-computation at each frame of all
        /// individual materials
        /// </summary>
        private static void OnThemeColorChange()
        {
            foreach (((ThemeCategory category, ThemeShade shade, ThemeState state), Material material)
                     in Instance._createdMaterials) {
                material.color = GetColorFrom(category, shade, state);
            }
            
            RecomputeGraphics?.Invoke();
        }

        /// <summary>
        /// Clears all cached materials and graphics and order a re-computation of all graphics for subscribed components
        /// </summary>
        private static void RecomputeAll()
        {
            Debug.Log("Recomputed all");
            Instance._createdMaterials = new();
            RecomputeGraphics?.Invoke();
        }

        /// <summary>
        /// Returns the default color both in shade and state given a <see cref="ThemeCategory"/>
        /// </summary>
        /// <param name="category">The theme category from which the color should be computed</param>
        /// <returns>A color retrieved directly from the specifications of the theme</returns>
        /// <exception cref="ArgumentException">If the given category has not been implemented yet</exception>
        public static Color GetColorFrom(ThemeCategory category)
        {
            switch (category)
            {
                case ThemeCategory.Primary: return PrimaryColor;
                case ThemeCategory.Secondary: return SecondaryColor;
                case ThemeCategory.Accent: return AccentColor;
                case ThemeCategory.Background: return BackgroundColor;
                case ThemeCategory.White: return WhiteColor;
            }

            throw new ArgumentException($"The given type ({category}) is not valid");
        }

        /// <summary>
        /// Given a base color from the theme, compute its Disabled variant
        /// </summary>
        /// <param name="color">A base color which should in principle be extracted from the theme</param>
        /// <returns>A new color which represents the disabled version of the theme</returns>
        public static Color GetDisabledColorFrom(Color color)
        {
            float f = Instance.theme.disabledComponentSaturationReduction; // desaturate by 20%
            float l = 0.3f*color.r + 0.6f*color.g + 0.1f*color.b;
            float r = color.r + f * (l - color.r);
            float g = color.g + f * (l - color.g);
            float b = color.b + f * (l - color.b);
            return GetLightShadeColorFrom(new Color(r, g, b));
        }
        
        /// <param name="backgroundColor">A background color on which the new color should be overlayed and readable</param>
        /// <returns>A new color, which uses accessibility specifications and should be applied to a text
        /// over the given background in order to be readable</returns>
        public static Color GetDefaultTextColorFrom(Color backgroundColor) =>
            Color.white.HasLargeEnoughContrastRatioComparedTo(backgroundColor)
                ? Color.white
                : Color.black;

        /// <summary>
        /// Same as <see cref="GetDefaultTextColorFrom"/> with the Selected <see cref="ThemeState"/>
        /// </summary>
        public static Color GetSelectedTextColorFrom(Color backgroundColor) =>
            Color.white.HasLargeEnoughContrastRatioComparedTo(backgroundColor.MuchDarker())
                ? Color.white.MuchDarker()
                : Color.black.MuchLighter();

        /// <returns>
        /// The color offset of a color with the specified shade compared to a default color
        /// </returns>
        private static float GetShadeRatioFrom(ThemeShade shade)
        {
            switch (shade)
            {
                case ThemeShade.Light : return +Instance.theme.lightShadeRatio;
                case ThemeShade.Default: throw new ArgumentException($"This method should not be use with default shade !");
                case ThemeShade.MidDark: return Instance.theme.midDarkShadeRatio;
                case ThemeShade.LowDark: return Instance.theme.lowDarkShadeRatio;
            }
            throw new ArgumentException($"No shade configuration found with type \"{shade}\"");
        }

        ///<summary>Same as <see cref="GetColorFrom(VRAppBase.EnhancedUIComponents.Scripts.ThemeCategory)"/>
        ///  but allows to specify a shade variant</summary>
        public static Color GetColorFrom(ThemeCategory category, ThemeShade shade) =>
            shade == ThemeShade.Default ? GetColorFrom(category) : 
            GetColorFrom(category).WithLuminosity(GetShadeRatioFrom(shade));

        ///<summary>Same as <see cref="GetColorFrom(VRAppBase.EnhancedUIComponents.Scripts.ThemeCategory)"/>
        /// but allows to specify a state variant too</summary>
        public static Color GetColorFrom(Color baseColor, ThemeState state)
        {
            switch (state)
            {
                case ThemeState.Default: return baseColor;
                case ThemeState.Disabled: return GetDisabledColorFrom(baseColor);
                case ThemeState.Hovered: return baseColor.MuchLighter(); // TODO
                case ThemeState.Selected: return baseColor.MuchDarker();
            }
            throw new ArgumentException($"No shade configuration found with type \"{state}\"");
        }

        ///<summary>Same as <see cref="GetColorFrom(VRAppBase.EnhancedUIComponents.Scripts.ThemeCategory)"/>
        /// but allows to specify all parameters of the color variant</summary>
        public static Color GetColorFrom(ThemeCategory category, ThemeShade shade, ThemeState state) =>
            GetColorFrom(GetColorFrom(category, shade), state);

        ///<summary>Returns a material corresponding to the specified <see cref="ThemeCategory"/>,
        /// <see cref="ThemeShade"/> and <see cref="ThemeState"/></summary>
        public static Material GetShadedMaterialFrom(ThemeCategory category, ThemeShade shade,
            ThemeState state)
        {
            if (Instance._createdMaterials.ContainsKey((category, shade, state))) { return Instance._createdMaterials[(category, shade, state)]; }

            Color color = GetColorFrom(category, shade, state);
            Material newMaterial = new Material(Instance.baseMaterial);
            newMaterial.color = color;
            
            Instance._createdMaterials.Add((category, shade, state), newMaterial);
            return newMaterial;
        }

        public static Color GetLightShadeColorFrom(Color baseColor) => baseColor.BrightnessOffset(+Instance.theme.lightShadeRatio);
        public static Color GetMidDarkShadeColorFrom(Color baseColor) => baseColor.BrightnessOffset(-Instance.theme.midDarkShadeRatio);
        public static Color GetLowDarkShadeColorFrom(Color baseColor) => baseColor.BrightnessOffset(-Instance.theme.lowDarkShadeRatio);
    }

    public enum ThemeCategory
    {
        Primary,
        Secondary,
        Accent,
        Background,
        White
    }

    public enum ThemeShade
    {
        Light,
        Default,
        MidDark,
        LowDark
    }

    public enum ThemeState
    {
        Default,
        Disabled,
        Hovered,
        Selected,
    }
}