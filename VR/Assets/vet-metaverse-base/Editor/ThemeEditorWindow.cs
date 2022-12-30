using System;
using System.IO;
using UnityEditor;
using UnityEngine;
using VRAppBase.EnhancedUIComponents.Scripts;

namespace VRAppBase.Editor
{
    public class ThemeEditorWindow : EditorWindow
    {

        private Theme _theme;
        private Material _material;
        
        // TODO Find an alternative if time permits
        private const string ThemeResourcePath = "Assets/Resources/Theme";

        [MenuItem("UITheme/Theme Editor")]
        public static void ShowWindow()
        {
            GetWindow(typeof(ThemeEditorWindow), true, "Theme Editor");
        }

        private void OnBecameVisible()
        {
            _theme = ThemeManager.Instance.theme;
            _material = ThemeManager.Instance.baseMaterial;
        }

        private void OnGUI()
        {
            GUILayout.Label("Set a new Theme for the Project");
            _theme = (Theme)EditorGUILayout.ObjectField("Theme", _theme, typeof(Theme), true);
            _material = (Material)EditorGUILayout.ObjectField("Base Material", _material, typeof(Material), true);

            bool pressed = GUILayout.Button("Confirm");

            if (pressed)
            {

                if (!Directory.CreateDirectory(ThemeResourcePath).Exists) { Debug.LogError($"Failed to create \"{ThemeResourcePath}\" directory !"); }

                string themePath = ThemeResourcePath + "/CurrentThemeObject.asset";
                string materialPath = ThemeResourcePath + "/CurrentThemeMaterial.mat";
                
                if (!AssetDatabase.CopyAsset(AssetDatabase.GetAssetPath(_material), materialPath))
                {
                    Debug.LogError($"The save of the base material failed");
                }

                if (!AssetDatabase.CopyAsset(AssetDatabase.GetAssetPath(_theme), themePath))
                {
                    Debug.LogError($"The save of the theme failed");
                }
                
                ThemeManager.SetTheme(themePath, materialPath);
            }
        }
    }
}
