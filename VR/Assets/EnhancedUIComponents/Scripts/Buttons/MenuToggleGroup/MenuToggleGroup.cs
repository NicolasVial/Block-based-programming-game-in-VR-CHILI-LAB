using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using VRAppBase.Utils;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    /// <summary>
    /// A group of buttons which allow to toggle between different <see cref="MenuToggleElement"/> and
    /// can be used for navigation
    ///
    /// A simple structure such as
    /// <code>
    /// parent
    ///     -- Button 1
    ///     -- Menu 1
    ///         -- Button 3
    ///         -- Menu 3
    ///         -- Button 4
    ///         -- Menu 4
    ///     -- Button 2
    ///     -- Menu 2
    ///         -- Button 5
    ///         -- Menu 5
    ///         -- Button 6
    ///         -- Menu 6
    /// </code>
    /// Allows for example to have a sequence of 4 different menus hidden into two submenus (3 to 6) for each main menu (1 and 2)
    /// </summary>
    public class MenuToggleGroup : ButtonSelectionGroup
    {
        
        private HashSet<MenuToggleElement> _menuToggleElements = new();

        /// <summary>
        /// Once the buttons are setup, search for the Menu Elements children of this object
        /// </summary>
        protected override void OnButtonsInitCompleted()
        {
            base.OnButtonsInitCompleted();
            MenuToggleElement[] foundToggleElements = this.GetComponentsInFirstLevelChildren<MenuToggleElement>();

            if (foundToggleElements.Length != buttonsSelection.Count)
            {
                Debug.LogError($"The amount of toggle buttons ({buttonsSelection.Count}) and toggle" +
                               $"targets ({_menuToggleElements.Count}) is different !");
                _menuToggleElements.Clear();
            }
            else
            {
                _menuToggleElements = new HashSet<MenuToggleElement>(foundToggleElements);
                if (defaultSelected) { Select(defaultSelection.value); }
            }
        }

        /// <summary>
        /// Called when once button is pressed, redirects the button to the menu element and calls <see cref="Select"/>
        /// </summary>
        /// <param name="triggeredButton">The button which was pressed</param>
        /// <param name="isDown">If the button is now down or up</param>
        protected override void OnButtonPressed(PressButtonInteractable triggeredButton, bool isDown)
        {
            base.OnButtonPressed(triggeredButton, isDown);
            // The button should always be down since it autoRelease should be enabled but just in case, only
            // call select when the button is down
            if (isDown) { Select(triggeredButton.value); }
        }

        /// <summary>
        /// Toggles all menu elements off other than that corresponding to the value of
        /// the button which was pressed 
        /// </summary>
        /// <param name="buttonValue">The value of the button which was pressed</param>
        /// <exception cref="InvalidOperationException">If none of the menu elements have the given value</exception>
        private void Select(string buttonValue)
        {
            if (_menuToggleElements.All(_ => _.buttonValue != buttonValue)) { throw new InvalidOperationException($"The button value " +
                $"({buttonValue}) does not match any toggle element"); }
            
            foreach (MenuToggleElement menuElement in _menuToggleElements)
            {
                menuElement.gameObject.SetActive(menuElement.buttonValue == buttonValue);
            }
        }
    }
}