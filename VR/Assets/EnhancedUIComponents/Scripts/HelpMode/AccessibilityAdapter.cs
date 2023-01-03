using UnityEngine;
using Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class AccessibilityAdapter : MonoBehaviour, IAccessibilityFriendly
    {
        [Header("Accessibility")]
        [SerializeField] private HelpText helpText;
        [SerializeField] private Transform helpTextAnchor;

        public HelpText GetHelpText() => helpText;
        public Optional<Transform> GetHelpTooltipAnchor() => Optional<Transform>.Of(helpTextAnchor);
    }
}