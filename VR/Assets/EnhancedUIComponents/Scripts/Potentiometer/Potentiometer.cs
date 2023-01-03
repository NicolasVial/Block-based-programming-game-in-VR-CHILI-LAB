using System;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.XR.Interaction.Toolkit;
using Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts.Potentiometer
{
    [RequireComponent(typeof(AccessibilityAdapter))]
    public class Potentiometer : BaseVRUI
    {
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       EVENTS                                         ||
// ||                                                                                      ||
// \\======================================================================================//
        
        public event Action<int> ValueChanged;
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        [Header("Potentiometer Settings")]
        [SerializeField] private int minValue;
        [SerializeField] private int maxValue;
        [SerializeField] private int defaultValue;
        [SerializeField] private int step;

        [Header("Rotation Settings")] 
        [SerializeField] private float minRotDeg;
        [SerializeField, Tooltip("Can correspond to multiple rotations")] private float maxRotDeg;

        [SerializeField, Tooltip("A linear mapping will be computed from the range of value to the rotation")]
        private int totalRotationDeg;

        private Transform _transform;

        private Optional<Transform> _interactorTransformOpt = Optional<Transform>.Empty();
        private float _initialInteractorAngle;
        private float _interactorDeltaAngle;
        
        private float _initialAngle;
        private float _currentAngle;

        private int _currentVal;

        public bool IsSelected => _interactorTransformOpt.IsPresent;
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       VALIDATION                                     ||
// ||                                                                                      ||
// \\======================================================================================//

        private void OnValidate()
        {
            if ((maxValue - minValue) % step != 0) { step = 0; Debug.LogWarning("Step must divide the range of values"); }
            if (step < 0) { step = 0; Debug.LogWarning("Step must be > 0"); }
            
            
        }

        protected override void Awake()
        {
            base.Awake();
            _transform = transform;
            Vector3 localEuler = _transform.localRotation.eulerAngles;
            _transform.localRotation = Quaternion.Euler(localEuler.x, ToRotation(defaultValue), localEuler.z);
        }

        private float ToRotation(int value)
        {
            var rangeDeg = Mathf.Abs(maxRotDeg - minRotDeg);
            var rangeVal = Mathf.Abs(maxValue - minValue);

            var norm = (value - minValue) / rangeVal;
            return norm * rangeDeg + minRotDeg;
        }

        private int ToValue(float rotDeg)
        {
            // No modulo because we want to allow multiple turns
            var rangeDeg = Mathf.Abs(maxRotDeg - minRotDeg);
            var rangeNormalizedVal = Mathf.Abs(maxValue - minValue) / step;

            var norm = (rotDeg - minRotDeg) / rangeDeg;
            return Mathf.RoundToInt(norm * rangeNormalizedVal) * step + minValue;
        }

        protected override void OnSelectEntering(SelectEnterEventArgs args)
        {
            base.OnSelectEntering(args);
            _initialAngle = _transform.localRotation.z;
            
            _initialInteractorAngle = args.interactorObject.transform.rotation.z;
            _interactorDeltaAngle = _initialInteractorAngle;
            
            _interactorTransformOpt = Optional<Transform>.Of(args.interactorObject.transform);
        }

        protected override void OnSelectExited(SelectExitEventArgs args)
        {
            base.OnSelectExited(args);
            _interactorTransformOpt = Optional<Transform>.Empty();
        }

        public override void ProcessInteractable(XRInteractionUpdateOrder.UpdatePhase updatePhase)
        {
            base.ProcessInteractable(updatePhase);

            if (!IsSelected) { return; }
            
            Transform interactorTransform = _interactorTransformOpt.Get;

            // TODO FIGURE OUT THE ANGLE : Z MEANS POTENTIOMETER CAN ONLY BE ON WALLS BUT Y MEANS THE HANDS IS BADLY PLACED IF ROTATION
            _interactorDeltaAngle = Mathf.Clamp(interactorTransform.rotation.y, minRotDeg, maxRotDeg)
                                    - _initialInteractorAngle;

            var nextAngle = _initialAngle + _interactorDeltaAngle;
            var nextVal = ToValue(nextAngle);

            // If the value snapped is different, then update all
            if (nextVal != _currentVal) { return; }
            
            _currentAngle = nextAngle;
            _currentVal = nextVal;
            ValueChanged?.Invoke(_currentVal);

            UpdateRotation();
        }

        private void UpdateRotation()
        {
            Vector3 currentRot = _transform.localRotation.eulerAngles;
            _transform.localRotation = Quaternion.Euler(currentRot.x, _currentAngle, currentRot.z);
        }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       BASE METHODS                                   ||
// ||                                                                                      ||
// \\======================================================================================//
        
        public override HelpText GetHelpText() => GetComponent<AccessibilityAdapter>().GetHelpText();
        public override Optional<Transform> GetHelpTooltipAnchor() => GetComponent<AccessibilityAdapter>().GetHelpTooltipAnchor();

        public override bool ShouldEnableUIController() => false;
    }
}