using System;
using System.Linq;
using System.Reflection;
using UnityEngine;
using vet_metaverse_base.EnhancedUIComponents.Scripts.Theme.Modifiers;

namespace VRAppBase.EnhancedUIComponents.Scripts.Modifiers
{
    [ExecuteAlways]
    public abstract class ThemeModifier : MonoBehaviour
    {
        [SerializeField] public int priority;
        private IModifiable[] _modifiedObjects;

        public virtual ThemeShade Apply(ThemeShade baseShade) => baseShade;
        public virtual ThemeCategory Apply(ThemeCategory baseCategory) => baseCategory;
        public virtual ThemeState Apply(ThemeState baseState) => baseState;

        protected void OnEnable()
        {
            FetchComponents();
            foreach (var modifiedObject in _modifiedObjects) { modifiedObject.AddModifier(this); }
        }

        protected void OnDisable()
        {
            FetchComponents();
            foreach (var modifiedObject in _modifiedObjects) { modifiedObject.RemoveModifier(this); }
        }

        private void FetchComponents()
        {
            if (_modifiedObjects == null) { _modifiedObjects = GetComponents<IModifiable>(); }
        }
    }
}