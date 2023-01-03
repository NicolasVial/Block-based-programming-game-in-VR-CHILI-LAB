using System;
using System.Collections.Generic;
using System.Linq;
using MyBox;
using UnityEngine;
using UnityEngine.Serialization;
using VRAppBase.Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    /// <summary>
    /// A group of buttons which act together. There can be either multiple or single selection in which case
    /// only one button can be down at a time. The latter function should be used when being a <see cref="MenuToggleGroup"/>
    /// </summary>
    public class ButtonSelectionGroup : MonoBehaviour
    {
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       EVENT DECLARATION                              ||
// ||                                                                                      ||
// \\======================================================================================//

        ///<summary>Called whenever the selection of button has changed. The event args' are
        /// the button which's state just changed and whether the button is now down/pressed or not</summary>
        public event Action<PressButtonInteractable, bool> SelectionChanged ;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        ///<summary>The list of selected buttons at the moment</summary>
        public bool[] SelectedButtons => buttonsSelection.ToList().Select(_ => _.Value).ToArray();
        
        protected Dictionary<PressButtonInteractable, bool> buttonsSelection = new ();

        [FormerlySerializedAs("buttonType")] [SerializeField] private ThemeCategory buttonCategory;
        [SerializeField] private bool autoRelease;
        [SerializeField] private bool multipleSelection;
        [SerializeField, ConditionalField("multipleSelection", inverse: true)] private bool allowNoSelection;
        [SerializeField, Tooltip("True if a button should be selected by default")] public bool defaultSelected;
        [SerializeField, ConditionalField("defaultSelected")] public PressButtonInteractable defaultSelection;
        private int[] selectedButtonIndex;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        private void OnValidate() { InitButtons(); }

        public void InitButtons()
        {
            // Fetch all buttons which are children of this object

            buttonsSelection = new Dictionary<PressButtonInteractable, bool>(
                this.GetComponentsInFirstLevelChildren<PressButtonInteractable>()
                    .Select(_ => new KeyValuePair<PressButtonInteractable, bool>(_, false)));

            foreach (var (button, selected) in buttonsSelection)
            {
                // Subscribe to all the button's events
                button.Pressed += isDown => OnButtonPressed(button, isDown);
                // Propagate the properties to the child buttons
                button.autoRelease = autoRelease;
                button.buttonCategory = buttonCategory;
                button.isToggle = multipleSelection || allowNoSelection;
                button.RecomputeColor();
            }
            
            // For other classes such as MenuToggleGroup
            OnButtonsInitCompleted();
            if (defaultSelected && Application.isPlaying) { defaultSelection.ManualPress(); }
        }
        
        protected virtual void OnButtonsInitCompleted() {}

        protected virtual void Awake() { InitButtons(); }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       EVENT                                          ||
// ||                                                                                      ||
// \\======================================================================================//

        protected virtual void OnButtonPressed(PressButtonInteractable triggeredButton, bool isDown)
        {
            // Release previous selection
            if (!multipleSelection) {
                foreach (var (button, selected) in buttonsSelection)
                {
                    if (selected && button != triggeredButton) { button.BounceBack(); }
                } 
            }

            // Change internal state and call event
            buttonsSelection[triggeredButton] = isDown;
            SelectionChanged?.Invoke(triggeredButton, isDown);
        }
    }
}