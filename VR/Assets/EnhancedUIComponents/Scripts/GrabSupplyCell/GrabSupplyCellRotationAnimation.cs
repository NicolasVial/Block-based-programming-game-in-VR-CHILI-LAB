using System;
using UnityEngine;
using Utils;
using Random = UnityEngine.Random;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class GrabSupplyCellRotationAnimation : MonoBehaviour
    {
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       PROPERTIES                                     ||
// ||                                                                                      ||
// \\======================================================================================//

        [SerializeField] private Vector3 maxSpeed;
        [SerializeField, Range(0, 1)] private float randomnessRange;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        private Optional<Transform> _target = Optional<Transform>.Empty();
        private Vector3 _rotatingFactor;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       CONTROLS                                       ||
// ||                                                                                      ||
// \\======================================================================================//

        public void Animate(Transform target)
        {
            _target = Optional<Transform>.Of(target);
            _rotatingFactor = new Vector3(
                Random.Range(1-randomnessRange, 1),
                Random.Range(1-randomnessRange, 1),
                Random.Range(1-randomnessRange, 1));
        }
        public void StopAnimation() =>  _target = Optional<Transform>.Empty();
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        private void Update()
        {
            _target.IfPresentThen(target =>
            {
                target.Rotate(
                    maxSpeed.x * _rotatingFactor.x * Time.deltaTime, 
                    maxSpeed.y * _rotatingFactor.y * Time.deltaTime, 
                    maxSpeed.z * _rotatingFactor.z * Time.deltaTime);
            });
        }
        
    }
}