using System;
using UnityEngine;
using UnityEngine.InputSystem;
using Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    /// <summary>
    /// Middleware object for the InputActionReference object to support Accessibility and help texts
    /// </summary>
    [Serializable]
    public class ControllerAction : IAccessibilityFriendly
    {
        [SerializeField] private HelpText helpText;
        [SerializeField] private InputActionReference inputAction;

        private bool active;
        public bool Active
        {
            get => active;
            set {
                active = value;
                if (active)
                {
                    // TODO TRANSMIT CALL TO THE CONTROLLER HANDLER WHICH GIVES THE CURRENT ACTIVE ACTION
                }
            }
        }

        public InputActionReference Input
        {
            get {
                if (!active) {
                    Debug.LogError("The input of this object was collected even though the corresponding" +
                                   "action is not active");
                }
                return inputAction;
            }
        }
        
        public HelpText GetHelpText() => helpText;
        public Optional<Transform> GetHelpTooltipAnchor() => Optional<Transform>.Empty();
    }
}