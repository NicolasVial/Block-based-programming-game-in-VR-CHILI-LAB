using MyBox;
using UnityEditor;
using UnityEngine;
using UnityEngine.InputSystem;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    /// <summary>
    /// A tooltip to display for a control
    /// </summary>
    /// https://hciedu.atlassian.net/wiki/spaces/CM/pages/24805377/Control+Tooltip
    [CreateAssetMenu(menuName = "UI/HelpText", fileName = "HelpText", order = 0)]
    public class HelpText : ScriptableObject
    {
        [SerializeField] private string englishHelpText;
        [SerializeField] private string frenchHelpText;
    }
    
}