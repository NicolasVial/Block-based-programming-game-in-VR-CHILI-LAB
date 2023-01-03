using System;
using MyBox;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Serialization;
using UnityEngine.UI;
using UnityEngine.XR.Interaction.Toolkit;
using Utils;
using VRAppBase.Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    /// <summary>
    /// https://www.youtube.com/watch?v=pmRwhE2hQ9g&t=1s
    /// </summary>
    [RequireComponent(typeof(ThemedComponent), typeof(BoxCollider), typeof(AccessibilityAdapter))]
    public class PressButtonInteractable : BaseVRUI
    {

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       EVENT DECLARATION                              ||
// ||                                                                                      ||
// \\======================================================================================//
        
        public event Action<bool> Pressed;
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        [Header("Button")]
        [SerializeField, Tooltip("The movement of the button")] private float distance = 1.0f;
        [Tooltip("The (Unique) value propagated when the button is pressed")]public string value;
        [SerializeField, Tooltip("Relative to the Theme")] public ThemeCategory buttonCategory;
        [SerializeField, Tooltip("The speed at which the button will be released")] private float bounceSpeed = 2.0f;

        [Header("Functionality")]
        [SerializeField, Tooltip("The button will start pressed")] public bool startPressed = false;
        [SerializeField, Tooltip("The button appears grayish and cannot be interacted with until it is reenabled")] private bool isDisabled = false;
        
        [SerializeField, Tooltip("If the button is pressable multiple times automatically, true by default")] public bool autoRelease = true;
        [SerializeField, Tooltip("If the button can be deselected with another pression on it"), ConditionalField("autoRelease", true)] public bool isToggle = false;
        
        [Header("Display")]
        [SerializeField, Tooltip("Display an icon on true, a text on false")] private bool displayIcon;
        [SerializeField, ConditionalField("displayIcon", inverse: false)] private Sprite sprite;
        [SerializeField, ConditionalField("displayIcon", inverse: true)] private string text;

        [Space, SerializeField, Tooltip("If the button is small and the UI Mode should be enabled")] private bool isSmall;
        [SerializeField, HideInInspector] private ThemedComponent themedComponent;
        
        private Color _baseColor;
        private Color _pressedColor;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       THEME RELATED                                  ||
// ||                                                                                      ||
// \\======================================================================================//

        /// <param name="disabled">Whether or not the button is disabled</param>
        public void ToggleDisabled(bool disabled) { isDisabled = disabled; RecomputeColor(); }

        private void OnValidate() => RecomputeColor();

        protected override void OnEnable() { base.OnEnable(); ThemeManager.RecomputeGraphics += RecomputeColor; }
        protected override void OnDisable() { base.OnDisable(); ThemeManager.RecomputeGraphics -= RecomputeColor; }

        /// <summary>
        /// Updates the visual appearance of the component according to the theme and its visual properties
        /// </summary>
        public void RecomputeColor()
        {
            _image ??= GetComponentInChildren<Image>(true);
            _textMeshPro ??= GetComponentInChildren<TextMeshProUGUI>(true);
            
            _baseColor = ThemeManager.GetColorFrom(buttonCategory);
            
            // Propagate Theme info to the ThemedComponent object
            themedComponent ??= GetComponent<ThemedComponent>();
            themedComponent.uiCategory = buttonCategory;
            themedComponent.SetState(isDisabled ? ThemeState.Disabled : ThemeState.Default);

            // Darken the color when pressed 
            _image.color = ThemeManager.GetSelectedTextColorFrom(_baseColor);
            _textMeshPro.color = ThemeManager.GetSelectedTextColorFrom(_baseColor);

            // Whether to display an icon or text
            if (displayIcon)
            {
                _textMeshPro.gameObject.SetActive(false);
                _image.gameObject.SetActive(true);
                _image.sprite = sprite;
            }
            else
            {
                _textMeshPro.gameObject.SetActive(true);
                _image.gameObject.SetActive(false);
                _textMeshPro.text = text;
            }
        }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       PLAY MODE FIELDS                               ||
// ||                                                                                      ||
// \\======================================================================================//

        private Image _image;
        private TextMeshProUGUI _textMeshPro;
        
        private float _minY;
        private float _maxY;
        private bool _previousPress;
        private bool _isStuckDown;
        private bool _isBouncingBack;
        
        private Transform _cachedTransform;

        private float _previousHandHeight;
        private Optional<IXRInteractor> _optInteractor = Optional<IXRInteractor>.Empty();
        private Transform _hoverInteractorTransform;

        private float _lastTimePressedSec;
        private const float DebounceTimeSec = 0.5f;
        public bool IsEnabled => !isDisabled;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        protected override void Awake()
        {
            base.Awake();
            _cachedTransform = transform;
            _lastTimePressedSec = Time.fixedTime;
            SetMinMax();

            themedComponent ??= GetComponent<ThemedComponent>();
            
            _image ??= GetComponentInChildren<Image>(true);
            _image.sprite = sprite;
            _textMeshPro ??= GetComponentInChildren<TextMeshProUGUI>(true);
            _textMeshPro.text = text;
        }

        private void Start() { if (startPressed) { ManualPress(); } }

        protected override void OnHoverEntering(HoverEnterEventArgs args)
        {
            base.OnHoverEntering(args);
            StartPress(args.interactorObject);
        }

        protected override void OnHoverExited(HoverExitEventArgs args)
        {
            base.OnHoverExited(args);
            EndPress(args.interactorObject);
        }

        /// <summary>
        /// The button just started being pressed
        /// </summary>
        /// <param name="interactor">The interactor pressing the button</param>
        private void StartPress(IXRInteractor interactor)
        {
            if (_optInteractor.IsPresent) { return; }
            
            if (!_isStuckDown)
            {
                // Interrupt release
                _isBouncingBack = false;
                
                _optInteractor = Optional<IXRInteractor>.Of(interactor);
                _hoverInteractorTransform = interactor.transform;
                _previousHandHeight = GetLocalYPosition(_hoverInteractorTransform.position);
            }
            else if (!autoRelease && isToggle)
            // If we need to release the button on interactor entering
            {
                // If a sufficient time has passed and the button is repressed in toggle mode, this
                // interaction shouldn't do anything but release the button and reset the time to last pressed
                if (Time.fixedTime - _lastTimePressedSec <= (isSmall ? DebounceTimeSec / 10.0f : DebounceTimeSec)) { return; }
                
                Pressed?.Invoke(false);
                _lastTimePressedSec = Time.fixedTime;
                BounceBack();
            }
        }

        /// <summary>
        /// The button just ended being pressed
        /// </summary>
        /// <param name="interactor">The interactor which was pressing the button</param>
        private void EndPress(IXRInteractor interactor)
        {
            // Do not remove if it is another interactor
            if (_optInteractor.IsEmpty || _optInteractor.Get != interactor) { return; }
            
            _optInteractor = Optional<IXRInteractor>.Empty();
        }

        /// <summary>
        /// Sets the minimal and maximal position of the button
        /// </summary>
        private void SetMinMax()
        {
            Vector3 initialPosition = _cachedTransform.localPosition;
            _minY = initialPosition.y - distance * _cachedTransform.localScale.y;
            _maxY = initialPosition.y;
        }

        public override void ProcessInteractable(XRInteractionUpdateOrder.UpdatePhase updatePhase)
        {
            base.ProcessInteractable(updatePhase);

            if (_isBouncingBack)
            {
                // Allow to transition back to home position even when disabled
                TransitionToHomePosition();
            }
            else if (_optInteractor.IsPresent && !isDisabled && !_isStuckDown)
            {
                // Follow hand
                float newHandHeight = GetLocalYPosition(_hoverInteractorTransform.position);
                float handDifference = _previousHandHeight - newHandHeight;
                _previousHandHeight = newHandHeight;

                float newPosition = _cachedTransform.localPosition.y - handDifference;
                SetLocalYPosition(newPosition);
            }

            CheckPress();
        }

        /// <param name="position">The global position</param>
        /// <returns>The local y position</returns>
        private float GetLocalYPosition(Vector3 position)
        {
            Vector3 localPosition = _cachedTransform.parent.InverseTransformPoint(position);
            return localPosition.y;
        }
        
        /// <param name="position">The local y position</param>
        private void SetLocalYPosition(float position)
        {
            Vector3 newPosition = _cachedTransform.localPosition;
            newPosition.y = Mathf.Clamp(position, _minY, _maxY);
            _cachedTransform.localPosition = newPosition;
        }

        /// <summary>
        /// Transitions back to home position (when released), should be called
        /// repeatedly as it uses Lerp to transition
        /// </summary>
        private void TransitionToHomePosition()
        {
            float current = _cachedTransform.localPosition.y;
            SetLocalYPosition(Mathf.Lerp(current, _maxY, Time.deltaTime * bounceSpeed));

            if (Mathf.Approximately(GetLocalYPosition(_cachedTransform.position), _maxY))
            {
                _isBouncingBack = false;
                _previousHandHeight = 0.0f;
            }
        }

        /// <summary>
        /// Check if the button is pressed
        /// </summary>
        private void CheckPress()
        {
            // Don't check and change appearance if disabled
            if (isDisabled) { return;}
            
            bool inPosition = InPosition();

            if (inPosition && !_previousPress)
            {
                themedComponent.SetState(ThemeState.Selected);
                _image.color = ThemeManager.GetSelectedTextColorFrom(_baseColor);
                _textMeshPro.color = ThemeManager.GetSelectedTextColorFrom(_baseColor);
                _isStuckDown = true;
                Debug.Log($"Pressed, new color = {_pressedColor}");
                _lastTimePressedSec = Time.fixedTime;
                Pressed?.Invoke(true);
            }
            else if (!inPosition && _previousPress)
            {
                themedComponent.SetState(ThemeState.Default);
                _image.color = ThemeManager.GetDefaultTextColorFrom(_baseColor);
                _textMeshPro.color = ThemeManager.GetDefaultTextColorFrom(_baseColor);
            }

            // Release the button automatically if the settings says so
            if (_isStuckDown && autoRelease) { BounceBack(); }

            _previousPress = inPosition;
        }

        /// <summary>
        /// Used when <see cref="autoRelease"/> is set to false
        /// </summary>
        public void BounceBack()
        {
            _isStuckDown = false;
            _isBouncingBack = true;
        }

        /// <summary>
        /// Press the button via a function call, to make it selected by default for example
        /// </summary>
        public void ManualPress()
        {
            if (_cachedTransform == null) { _cachedTransform = transform; }
            SetLocalYPosition(_minY);
            CheckPress();
        }
        
        /// <returns>True if the position of the button corresponds to that of a pressed one</returns>
        private bool InPosition()
        {
            Vector3 position = _cachedTransform.localPosition;
            float inRange = Mathf.Clamp(position.y, _minY, isSmall ? _maxY - Mathf.Abs(_maxY - _minY) * 0.05f : _minY+0.01f);
            return Mathf.Abs(position.y - inRange) < Mathf.Epsilon;
        }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       ACCESSIBILITY                                  ||
// ||                                                                                      ||
// \\======================================================================================//

        public override HelpText GetHelpText() => GetComponent<AccessibilityAdapter>().GetHelpText();
        public override Optional<Transform> GetHelpTooltipAnchor() => GetComponent<AccessibilityAdapter>().GetHelpTooltipAnchor();
        public override bool ShouldEnableUIController() => isSmall;
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       GIZMOS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        private void OnDrawGizmos()
        {
            if (_cachedTransform == null) { _cachedTransform = transform; }

            Vector3 localPos = _cachedTransform.localPosition;
            Gizmos.color = Color.cyan;
            Gizmos.DrawLine(
                _cachedTransform.parent.TransformPoint(localPos + new Vector3(0,  - distance * _cachedTransform.localScale.y, 0)),
                _cachedTransform.parent.TransformPoint(new Vector3(localPos.x, _maxY, localPos.z)));
        }
    }
}