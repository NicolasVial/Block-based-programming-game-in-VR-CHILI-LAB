using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    
    //TEST
    public abstract class BaseVRUI : XRBaseInteractable, IAccessibilityFriendly
    {
        public abstract HelpText GetHelpText();
        public abstract Optional<Transform> GetHelpTooltipAnchor();
        public abstract bool ShouldEnableUIController();
        
    }
}