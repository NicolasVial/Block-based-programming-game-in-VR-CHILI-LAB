using System.Collections.Generic;
using System.Linq;
using MyBox;
using UnityEngine;
using vet_metaverse_base.EnhancedUIComponents.Scripts.Theme.Modifiers;
using VRAppBase.EnhancedUIComponents.Scripts.Modifiers;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    /// <summary>
    /// This class is an attempt to improve DX (Developper Experience) which
    /// nowadays, in our world where the human is forgotten and replaced by the quality of their
    /// work, I find essential
    ///
    /// This class should be derived each time you want a child component (having effect on visuals) to
    /// be modified and affected by the <see cref="Theme"/>
    /// In order to do so, you have to specify the <see cref="Apply"/> method in the derived class and
    /// the type param <see cref="T"/> which the derived class should look for and attach itself to.
    /// The search and attach part is done via the <see cref="ThemedComponent"/> object
    /// </summary>
    /// <typeparam name="T">The component the object will look for and attach too</typeparam>
    [ExecuteAlways]
    public abstract class ThemedObject<T> : MonoBehaviour, IModifiable, IThemedObject where T : Component
    {
        [SerializeField, HideInInspector] private ThemeCategory themeCategory;
        [SerializeField, HideInInspector] private ThemeShade themeShade = ThemeShade.Default;
        [SerializeField, HideInInspector] private ThemeState themeState = ThemeState.Default;
        [SerializeField, HideInInspector] private List<ThemeModifier> modifiers = new ();
        
        private bool _destroyed;
        
        public ThemeCategory Category {
            get => themeCategory;
            set {
                themeCategory = value;
                RecomputeMaterialColor();
            }
        }
        
        public ThemeShade Shade {
            get => themeShade;
            set {
                themeShade = value;
                RecomputeMaterialColor();
            }
        }
        
        public ThemeState State {
            get => themeState;
            set {
                themeState = value;
                RecomputeMaterialColor();
            }
        }

        private void OnEnable()
        {
            ThemeManager.RecomputeGraphics += RecomputeMaterialColor;
            _destroyed = false;
            RecomputeMaterialColor();
        }

        private void OnDisable()
        {
            ThemeManager.RecomputeGraphics -= RecomputeMaterialColor;
            _destroyed = true;
        }
        
        private void OnValidate() { RecomputeMaterialColor(); }

        public void Select() => SetState(ThemeState.Selected);
        public void Default() => SetState(ThemeState.Default);
        public void Disable() => SetState(ThemeState.Disabled);

        private void SetState(ThemeState state)
        {
            themeState = state;
            RecomputeMaterialColor();
        }

        private void RecomputeMaterialColor()
        {
            if (_destroyed) { return; }
            
            ThemeCategory category = themeCategory;
            ThemeShade shade = themeShade;
            ThemeState state = themeState;

            foreach (ThemeModifier modifier in modifiers)
            {
                if (modifier != null)
                {
                    category = modifier.Apply(category);
                    shade = modifier.Apply(shade);
                    state = modifier.Apply(state);
                }
            }
            
            Apply(category, shade, state);
        }

        protected abstract void Apply(ThemeCategory category, ThemeShade shade, ThemeState state);

        public void AddModifier(ThemeModifier themeModifier)
        {
            modifiers.Add(themeModifier);
            modifiers.RemoveAll(_ => _ == null);
            modifiers.Sort((m1, m2) => m2.priority.CompareTo(m1.priority));
            RecomputeMaterialColor();
        }

        public void RemoveModifier(ThemeModifier themeModifier)
        {
            modifiers.Remove(themeModifier);
        }

        private static IEnumerable<T> CollectAllObjsFrom(Component comp)
        {
            return comp.GetComponentsInChildren<T>(true)
                .Append(comp.GetComponent<T>())
                .Where(_ => _ != null);
        }

        /// <summary>
        /// I like magic
        /// </summary>
        /// <param name="comp"></param>
        /// <typeparam name="TResult"></typeparam>
        /// <returns></returns>
        public static IEnumerable<TResult> CollectAllFrom<TResult>(Component comp) where TResult : ThemedObject<T>
        {
            return CollectAllObjsFrom(comp)
                .Select(_ => _.GetOrAddComponent<TResult>())
                .ToList();
        }
    }
}