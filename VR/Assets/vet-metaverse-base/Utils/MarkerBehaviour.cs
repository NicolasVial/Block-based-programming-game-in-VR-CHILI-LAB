using UnityEngine;

namespace VRAppBase.Utils
{
    public abstract class MarkerBehaviour : MonoBehaviour
    {
        private Transform _transform;

        public Transform Transform {
            get {
                if (_transform == null) { _transform = transform; }
                return _transform;
            }
        }
    }
}