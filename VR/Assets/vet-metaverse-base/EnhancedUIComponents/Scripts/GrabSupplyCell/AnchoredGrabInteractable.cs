using System;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class AnchoredGrabInteractable : XRGrabInteractable
    {
        ///<summary>Invokes when the item re-enters its anchor</summary>
        public event Action<AnchoredGrabInteractable> AnchorEnter;
        ///<summary>Invokes when the item quit its anchor</summary>
        public event Action<AnchoredGrabInteractable> AnchorLeft;
        ///<summary>Invoked when the item should not be linked to the anchor</summary>
        public event Action<AnchoredGrabInteractable> AnchorUnbound;

        protected void EnterAnchor() => AnchorEnter?.Invoke(this);
        protected void LeaveAnchor() => AnchorLeft?.Invoke(this);
        protected void UnbindAnchor() => AnchorUnbound?.Invoke(this);

        ///<summary>The parent of the object when it is detached from its anchor</summary>
        public virtual Transform GetParentOnceDetached() => SnappedObjectsParent.GetTransform;
        
        
    }
}