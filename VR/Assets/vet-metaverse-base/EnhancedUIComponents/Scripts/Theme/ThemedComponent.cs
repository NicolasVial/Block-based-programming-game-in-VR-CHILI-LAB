using System;
using System.Collections.Generic;
using System.Linq;
using MyBox;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using VRAppBase.EnhancedUIComponents.Scripts.Modifiers;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class ThemedComponent : MonoBehaviour
    {
        [SerializeField] public ThemeCategory uiCategory = ThemeCategory.Primary;
        [SerializeField] public ThemeShade uiShade = ThemeShade.Default;
        [SerializeField] public ThemeState uiState = ThemeState.Default;
        [SerializeField, HideInInspector] private List<IThemedObject> themedObjects;

        private void OnEnable() => RecomputeGraphics();
        private void OnDisable() => RecomputeGraphics();
        private void OnValidate() => RecomputeGraphics();

        private void TryAddThemedMaterials()
        {
            if (themedObjects != null && themedObjects.Count > 0) { return; }
            
            themedObjects = new List<IThemedObject>();
            themedObjects.AddRange(ThemedMaterial.CollectAllFrom <ThemedMaterial> (this));
            themedObjects.AddRange(ThemeColoredImage.CollectAllFrom <ThemeColoredImage> (this));
        }

        private void RecomputeGraphics()
        {
            TryAddThemedMaterials();

            themedObjects
                .Where(_ => _ != null)
                .ForEach(obj =>
                {
                    obj.Category = uiCategory;
                    obj.Shade = uiShade;
                    obj.State = uiState;
                });
        }
        
        public void SetState(ThemeState state)
        {
            uiState = state;
            RecomputeGraphics();
        }
    }
}