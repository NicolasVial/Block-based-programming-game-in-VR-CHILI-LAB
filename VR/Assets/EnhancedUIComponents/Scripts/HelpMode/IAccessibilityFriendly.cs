using UnityEngine;
using Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    /// <summary>
    /// A control action is a placeholder for any object/input/action that can have an effect and
    /// require knowledge to be done. This middleware object helps 
    /// </summary>
    public interface IAccessibilityFriendly
    {
        /// <returns>The text indicating how to perform the linked action</returns>
        public HelpText GetHelpText();
        
        ///<returns>The transform anchor where the tooltip should be displayed from</returns>
        public Optional<Transform> GetHelpTooltipAnchor();
    }
}