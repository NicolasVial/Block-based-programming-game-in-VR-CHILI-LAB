using System;
using UnityEngine;
using Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class GrabSupplyCellMoveAnimation : MonoBehaviour
    {
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       PROPERTIES                                     ||
// ||                                                                                      ||
// \\======================================================================================//
        
        [field:SerializeField] public float animationTimeSec { private set; get; }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        private float _animationStartSec;

        private Transform _transform;
        private Optional<Transform> _target = Optional<Transform>.Empty();
        private bool _destroyOnFinish;

        public Vector3 InCellScale { set; get; }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        private void Awake() { _transform = transform; }

        private void Update()
        {
            if (_target.IsEmpty) { return; }

            Transform target = _target.Get;
            
            float interpolationValue = (Time.time - _animationStartSec) / animationTimeSec;

            target.localScale = Vector3.Lerp(
                target.localScale,
                InCellScale,
                interpolationValue);
            
            target.position = Vector3.Lerp(
                target.position, 
                _transform.position,
                interpolationValue);
            
            target.rotation = Quaternion.Lerp(
                target.rotation, 
                Quaternion.LookRotation(_transform.forward), 
                interpolationValue);
            
            if (interpolationValue >= 1) { FinishAnimation(); }
        }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       CONTROLS                                       ||
// ||                                                                                      ||
// \\======================================================================================//

        private void FinishAnimation()
        {
            Transform target = _target.Get;
            target.localScale = InCellScale;
            target.position = _transform.position;
            target.rotation = Quaternion.LookRotation(_transform.forward);
            if (_destroyOnFinish) { DestroyImmediate(target.gameObject); }
            _target = Optional<Transform>.Empty();
        }

        public void Animate(Transform toAnimate, bool destroyOnFinish)
        {
            // We can't animate multiple at a time
            if (_target.IsPresent) { FinishAnimation(); }
            
            _target = Optional<Transform>.OfNullable(toAnimate);
            _animationStartSec = Time.time;
            _destroyOnFinish = destroyOnFinish;
        }
    }
}