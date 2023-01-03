using System;
using System.Security;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngineInternal;
using Utils;
using VRAppBase.EnhancedUIComponents.Scripts.Example;
using VRAppBase.Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    [RequireComponent(typeof(ThemedComponent))]
    public class PushSlider : BaseVRUI
    {

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       EVENTS                                         ||
// ||                                                                                      ||
// \\======================================================================================//
        
        public event Action<int> ValueChanged;
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       EDITOR FIELDS                                  ||
// ||                                                                                      ||
// \\======================================================================================//

        [Header("Slider Settings")] 
        [SerializeField] public bool isDisabled;
        [SerializeField] private int minValue;
        [SerializeField] private int maxValue;
        [SerializeField] private int defaultValue;
        [SerializeField] private int step;

        [Header("Sliding Settings")] 
        [SerializeField, Tooltip("Basically the length of the slider")] private float slidingLength;
        [SerializeField, Tooltip("The speed at which the slider will clip to its value")] private float clipSpeed = 4f;
        [SerializeField, Tooltip("Inverse the direction of value increase")] private bool inverseSlidingDirection;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//
        private Transform _transform;

        private Optional<IXRInteractor> _interactorOpt = Optional<IXRInteractor>.Empty();
        private Transform _interactorTransform;
        private float _previousHandLen;
        private float _deltaHandLen;
        
        private float _initialLen;
        private float _currentLen;

        private int _currentVal;

        public bool IsSelected => _interactorOpt.IsPresent;

        private PushSliderSupport _support;
        private PushSliderHandle _handle;
        private Transform _handleTransform;

        private float _minZ, _maxZ;
        private bool _isClipping;

        private Direction _lastDirection = Direction.None;

        private enum Direction {
            Left,
            None,
            Right
        }

        public int MinValue => minValue;
        public int MaxValue => maxValue;
     
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FETCH COMPONENTS                               ||
// ||                                                                                      ||
// \\======================================================================================//

        private void FetchComponents()
        {
            if (_support == null) { _support = GetComponentInChildren<PushSliderSupport>(); }

            if (_handle == null)
            {
                _handle = GetComponentInChildren<PushSliderHandle>();
                _handleTransform = _handle.Transform;
            }
            if (_transform == null) { _transform = transform; }

        }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       VALIDATE                                       ||
// ||                                                                                      ||
// \\======================================================================================//
        
        private void OnValidate()
        {
            FetchComponents();

            // Length is positive
            slidingLength = Mathf.Abs(slidingLength);
            SetMinMax();
            
            Vector3 currentScale = _support.Transform.localScale;
            _support.Transform.localScale = new Vector3(currentScale.x, currentScale.y, slidingLength);

            if (defaultValue % step == 0) {
                SetLocalZPosition(ToLength(defaultValue));
            } else {
                Debug.LogWarning($"The default value should be a multiple of step ({step})!");
            }
        }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                 VALUE ADAPTER METHODS                                ||
// ||                                                                                      ||
// \\======================================================================================//

        private float ToLength(int value)
        {
            var rangeLen = slidingLength;
            var rangeVal = Mathf.Abs(maxValue - minValue);

            var norm = (value - minValue) / (float)rangeVal;
            float len = norm * rangeLen + _minZ;
            return inverseSlidingDirection ? (_maxZ + _minZ) - len : len;
        }

        private int ToValue(float length)
        {
            // No modulo because we want to allow multiple turns
            var rangeLen = slidingLength;
            var rangeNormalizedVal = Mathf.Abs(maxValue - minValue) / step;

            float correctedLength = inverseSlidingDirection ? (_maxZ + _minZ) - length : length;
            var norm = (correctedLength - _minZ) / rangeLen;
            return Mathf.RoundToInt(norm * rangeNormalizedVal) * step + minValue;
        }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                     POSITION ADAPTER                                 ||
// ||                                                                                      ||
// \\======================================================================================//

        /// <param name="position">The global position</param>
        /// <returns>The local y position</returns>
        private float GetLocalZPosition(Vector3 position)
        {
            Vector3 localPosition = _handleTransform.parent.InverseTransformPoint(position);
            return localPosition.z;
        }
        
        /// <param name="position">The local y position</param>
        private void SetLocalZPosition(float position)
        {
            Vector3 newPosition = _handleTransform.localPosition;
            newPosition.z = Mathf.Clamp(position, _minZ, _maxZ);
            _handleTransform.localPosition = newPosition;
        }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        private void SetMinMax()
        {
            _minZ = -slidingLength / 2.0f;
            _maxZ = +slidingLength / 2.0f;
        }

        protected override void Awake()
        {
            base.Awake();
            
            FetchComponents();
            SetMinMax();

            SetLocalZPosition(ToLength(defaultValue));
        }

        public override void ProcessInteractable(XRInteractionUpdateOrder.UpdatePhase updatePhase)
        {
            base.ProcessInteractable(updatePhase);

            if (isDisabled) { return; }
            
            if (_interactorOpt.IsPresent)
            {
                // Follow hand
                float newHandHeight = GetLocalZPosition(_interactorTransform.position);
                float handDifference = _previousHandLen - newHandHeight;
                _previousHandLen = newHandHeight;

                Direction currentDirection = Mathf.Approximately(0, handDifference)
                    ? Direction.None
                    : handDifference > 0 ? Direction.Left : Direction.Right;
                
                Debug.Log($"Current = {currentDirection}, last = {_lastDirection}, diff = {handDifference}");
                // Essentially, when you start PUSHING in a direction, you shouldn't be able to PULL
                // the slider (The interactor must quit the collider) 
                // Set a direction if there is one
                if (_lastDirection == Direction.None && currentDirection != Direction.None) { _lastDirection = currentDirection; }
                // if one is already set and is different, prevent movement
                else if (_lastDirection != currentDirection) { return; }

                float newPosition = _handleTransform.localPosition.z - handDifference;
                SetLocalZPosition(newPosition);

                float newLen = Mathf.Clamp(newPosition, _minZ, _maxZ);
                int newValue = ToValue(newLen);
                
                if (newValue != _currentVal)
                {
                    _currentVal = newValue;
                    StartClipping();
                    ValueChanged?.Invoke(newValue);
                }
            } else if (_isClipping)
            {
                SlideToClip();
            }
        }

        private void SlideToClip()
        {
            float current = _handleTransform.localPosition.z;
            float goalLength = ToLength(_currentVal);
            
            SetLocalZPosition(Mathf.Lerp(current, goalLength, Time.deltaTime * clipSpeed));

            if (Mathf.Approximately(GetLocalZPosition(_handleTransform.position), goalLength)) { StopClipping(); }
        }

        private void StartClipping() { _isClipping = true; }
        private void StopClipping() { _isClipping = false; }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       HOVER                                          ||
// ||                                                                                      ||
// \\======================================================================================//

        protected override void OnHoverEntering(HoverEnterEventArgs args)
        {
            base.OnHoverEntering(args);
            StartPush(args.interactorObject);
        }

        private void StartPush(IXRInteractor interactor)
        {
            if (_interactorOpt.IsPresent) { return; }

            _interactorOpt = Optional<IXRInteractor>.Of(interactor);
            _interactorTransform = interactor.transform;
            _previousHandLen = GetLocalZPosition(_interactorTransform.position);
        }

        protected override void OnHoverExited(HoverExitEventArgs args)
        {
            base.OnHoverExited(args);
            StopPush(args.interactorObject);
        }

        private void StopPush(IXRInteractor interactor)
        {
            // Do not remove if it is another interactor
            if (_interactorOpt.IsEmpty || _interactorOpt.Get != interactor) { return; }
            
            Debug.Log("Stoppped !");
            
            _interactorOpt = Optional<IXRInteractor>.Empty();
            _interactorTransform = null;
            _lastDirection = Direction.None;
        }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       Accessibility                                  ||
// ||                                                                                      ||
// \\======================================================================================//
        
        public override HelpText GetHelpText() => GetComponent<AccessibilityAdapter>().GetHelpText();
        public override Optional<Transform> GetHelpTooltipAnchor() => GetComponent<AccessibilityAdapter>().GetHelpTooltipAnchor();
        public override bool ShouldEnableUIController() => false;
    }
}