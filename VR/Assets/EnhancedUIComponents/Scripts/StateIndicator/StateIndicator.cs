using System;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts.StateIndicator
{
    public class StateIndicator : MonoBehaviour
    {
        [SerializeField] private GameObject onState;
        [SerializeField] private GameObject offState;

        private bool _enabled;
        public bool IsEnabled
        {
            get => _enabled;
            set
            {
                _enabled = value;
                UpdateState(value);
            }
        }

        private void UpdateState(bool newState)
        {
            onState.SetActive(newState);
            offState.SetActive(!newState);
        }
    }
}