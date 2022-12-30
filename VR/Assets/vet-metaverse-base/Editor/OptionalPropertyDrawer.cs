using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;
using Utils;

namespace VRAppBase.Editor
{
    /// <summary>
    /// With the help of http://25games.net/custom-property-drawers/
    /// </summary>
    [CustomPropertyDrawer(typeof(Optional<>), true)]
    public class OptionalPropertyDrawer : PropertyDrawer
    {
        private bool _is;
        private SerializedProperty _optionalContent;


        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            SerializedProperty isPresent = property.FindPropertyRelative("isPresent");
            SerializedProperty content = property.FindPropertyRelative("content");

            Rect initialPos = position;
            
            EditorGUI.BeginProperty(position, label, property);
            
            // Draw label and calculate new position
            position = EditorGUI.PrefixLabel(position, GUIUtility.GetControlID(FocusType.Passive), label);
            
            // Don't make child fields be indented
            int indent = EditorGUI.indentLevel;
            EditorGUI.indentLevel = 0;

            bool isList = content.isArray;

            // Calculate positions and dimensions for the GUI elements
            //  - present-field       ... X-pos:  0%, width: 20%  
            //  - content-field ... X-pos: 20%, width: 80%   |> 100% of available width
            Rect presentRect = new Rect(
                position.x, 
                position.y,
                position.width * 0.2f - 5, 
                EditorGUIUtility.singleLineHeight);
            
            Rect contentRect = new Rect(
                isList ? initialPos.x + 5 : position.x + position.width * 0.2f + 5, 
                isList ? position.y + EditorGUIUtility.singleLineHeight : position.y,
                isList ? position.width : position.width * 0.8f - 5, 
                position.height);

            EditorGUI.PropertyField(presentRect, isPresent, GUIContent.none);
            
            GUI.enabled = isPresent.boolValue;
            EditorGUI.PropertyField(contentRect, content, GUIContent.none);
            GUI.enabled = true;
            
            EditorGUI.indentLevel = indent;
            EditorGUI.EndProperty();
        }

        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            var content = property.FindPropertyRelative("content");
            if (!content.isArray) { return EditorGUIUtility.singleLineHeight; }
            
            if (!content.isExpanded)
            {
                return 2 * EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing;
            }
            else
            {
                return (4 + Math.Max(1, content.arraySize)) *
                       (EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing);
            }
        }
    }
}