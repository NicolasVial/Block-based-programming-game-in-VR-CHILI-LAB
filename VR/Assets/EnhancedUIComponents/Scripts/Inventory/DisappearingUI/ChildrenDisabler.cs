using System;
using System.Linq;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class ChildrenDisabler : DisappearingUI
    {
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        private bool _isVisible;
        public override bool IsVisible { get => _isVisible; protected set => _isVisible = value; }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       CONTROLS                                       ||
// ||                                                                                      ||
// \\======================================================================================//

        public override void Hide()
        {
            foreach (Transform foundChild in transform) { foundChild.gameObject.SetActive(false); }
            IsVisible = false;
        }

        public override void Show()
        {
            foreach (Transform foundChild in transform) { foundChild.gameObject.SetActive(true); }

            IsVisible = true;
        }
    }
}