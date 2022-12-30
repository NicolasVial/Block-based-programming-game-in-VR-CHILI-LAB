using System;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts.Controller
{
    /// <summary>
    /// When the controller decorated with this behaviour gets close to a <see cref="BaseVRUI"/> Element which has its
    /// <see cref="BaseVRUI.ShouldEnableUIController"/> set to true, shows a smaller interactor (for now a pencil)
    /// which ables to select UI more precisely
    /// </summary>
    [RequireComponent(typeof(SphereCollider))]
    public class ControllerUIMode : MonoBehaviour
    {
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        [SerializeField, Tooltip("The object to enable when the controller is in UI Mode")] private GameObject uiInteractorVisual;
        [SerializeField, Tooltip("One of the game objects parent of the animated hand")] private GameObject handBaseModelParent;
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        private void Awake() => uiInteractorVisual.SetActive(false);

        private void OnTriggerStay(Collider other)
        {
            if (other.TryGetComponent(out BaseVRUI uiElement) && uiElement.ShouldEnableUIController()) { InUI = true; }
        }

        private void OnTriggerExit(Collider other)
        {
            if (other.TryGetComponent(out BaseVRUI uiElement) && uiElement.ShouldEnableUIController()) { InUI = false; }
        }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LOGIC                                          ||
// ||                                                                                      ||
// \\======================================================================================//
        
        private bool _inUI;
        public bool InUI
        {
            private set
            {
                if (_inUI == value) { return; }
                
                _inUI = value;
                // Make the pencil appear or not
                uiInteractorVisual.SetActive(value);
                // Animate the hand to hold the pencil or not
                handBaseModelParent
                    .GetComponentInChildren<Animator>()
                    .SetBool(Animator.StringToHash("UI Mode"), value);
            }
            get => _inUI;
        }

    }
}