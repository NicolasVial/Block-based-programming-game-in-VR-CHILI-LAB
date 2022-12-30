using System;
using TMPro;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts.Example
{
    public class PushSliderValueDisplay : MonoBehaviour
    {
        [SerializeField] private PushSlider slider;
        private TextMeshProUGUI _text;
        
        private void Awake()
        {
            _text = GetComponentInChildren<TextMeshProUGUI>();
            slider.ValueChanged += OnValueChanged;
        }

        private void OnValueChanged(int newValue) { _text.text = $"Value = {newValue}"; }
    }
}