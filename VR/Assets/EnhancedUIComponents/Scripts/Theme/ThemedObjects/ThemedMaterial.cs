using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using VRAppBase.EnhancedUIComponents.Scripts.Modifiers;
using VRAppBase.Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    
    [RequireComponent(typeof(MeshRenderer))]
    public class ThemedMaterial : ThemedObject<MeshRenderer>
    {
        
        [SerializeField, HideInInspector] private Renderer attachedRenderer;
        [SerializeField, HideInInspector] private Material material;


        protected override void Apply(ThemeCategory category, ThemeShade shade, ThemeState state)
        {
            if (attachedRenderer == null) { attachedRenderer = GetComponent<Renderer>(); }
            
            material = ThemeManager.GetShadedMaterialFrom(category, shade, state);
            attachedRenderer.sharedMaterial = material;
        }
    }
}