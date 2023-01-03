using System;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class SetActiveButton : MonoBehaviour
    {
        [SerializeField] private PressButtonInteractable pressButtonInteractable;
        [SerializeField] private GameObject toEnable;


        private void OnEnable()
        {
            pressButtonInteractable.Pressed += OnButtonPressed;
        }

        private void OnDisable()
        {
            pressButtonInteractable.Pressed -= OnButtonPressed;
        }

        private void OnButtonPressed(bool isPressed) { toEnable.SetActive(isPressed); }
    }
}