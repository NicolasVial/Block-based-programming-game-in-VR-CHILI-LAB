using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public abstract class DisappearingUI : MonoBehaviour
    {
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       CONTROLS                                       ||
// ||                                                                                      ||
// \\======================================================================================//

        public abstract void Hide();
        public abstract void Show();

        public abstract bool IsVisible { protected set; get;}
    }
}