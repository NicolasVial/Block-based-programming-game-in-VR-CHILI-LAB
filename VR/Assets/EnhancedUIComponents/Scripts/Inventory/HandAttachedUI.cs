using System;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class HandAttachedUI : MonoBehaviour
    {
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       PROPERTIES                                     ||
// ||                                                                                      ||
// \\======================================================================================//

        [SerializeField, Tooltip("The GameObject to disable.")] private DisappearingUI toDisable; 
        [SerializeField, Tooltip("The transform from which check the rotation.")] private Transform handTransform;
        [SerializeField, Tooltip("The angles in the different axis between which this UI is displayed.")] private EnableConstraints enableConstraints;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        private void Start()
        {
            toDisable.Hide();
        }

        private void Update() 
        {
            var eulerAngles = handTransform.rotation.eulerAngles;

            foreach (Axis axis in Enum.GetValues(typeof(Axis)))
            {
                var rotationValue = Modulo360(AngleOf(axis, eulerAngles));
                var constraint = enableConstraints.ConstraintOf(axis);

                bool inBounds = rotationValue >= constraint.constraintMin && rotationValue <= constraint.constraintMax;
                if (constraint.constraintMin > constraint.constraintMax)
                {
                    // When min = -20 and max = 10 for example (because 0 <= rotationValue < 360)
                    inBounds = rotationValue >= constraint.constraintMin || rotationValue <= constraint.constraintMax;
                }

                // If we're active, and in a bound of a disabled bound => set inactive
                if (!constraint.ShouldEnable && inBounds)
                {
                    if (toDisable.IsVisible)
                    {
                        toDisable.Hide();
                    } return;
                }
                
                // If we're active and there is one bound of an enabled bound in which we're not => set inactive
                if (constraint.ShouldEnable && !inBounds)
                {
                    if (toDisable.IsVisible)
                    {
                        toDisable.Hide();
                    } return;
                }
            }
            
            if (!toDisable.IsVisible) { toDisable.Show(); }

        }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       UTILITY FUNCTIONS                              ||
// ||                                                                                      ||
// \\======================================================================================//

        private float AngleOf(Axis axis, Vector3 eulerAngles)
        {
            return axis switch
            {
                Axis.X => eulerAngles.x,
                Axis.Y => eulerAngles.y,
                Axis.Z => eulerAngles.z,
                _ => 0f
            };
        }
        private float Modulo360(float input)
        {
            // Force the angles to be between 0 and 360
            switch (input)
            {
                case > 360: { while (input > 360) { input -= 360; } break; }
                case < 0: { while (input < 0) { input += 360; } break; }
            }

            return input;
        }
        
        private void OnValidate()
        {
            enableConstraints = new(
                new EnableConstraint(Modulo360(enableConstraints.XConstraint.constraintMin), Modulo360(enableConstraints.XConstraint.constraintMax), enableConstraints.XConstraint.ShouldEnable),
                new EnableConstraint(Modulo360(enableConstraints.YConstraint.constraintMin), Modulo360(enableConstraints.YConstraint.constraintMax), enableConstraints.YConstraint.ShouldEnable),
                new EnableConstraint(Modulo360(enableConstraints.ZConstraint.constraintMin), Modulo360(enableConstraints.ZConstraint.constraintMax), enableConstraints.ZConstraint.ShouldEnable));
        }
        
        
        private enum Axis { X, Y, Z }
        
        [Serializable]
        private struct EnableConstraints
        { 
            [field: SerializeField]
            public EnableConstraint XConstraint { get; private set; }
            [field: SerializeField]
            public EnableConstraint YConstraint { get; private set; }
            [field: SerializeField]
            public EnableConstraint ZConstraint { get; private set; }

            public EnableConstraint ConstraintOf(Axis axis)
            {
                return axis switch
                {
                    Axis.X => XConstraint,
                    Axis.Y => YConstraint,
                    Axis.Z => ZConstraint,
                    _ => new EnableConstraint(0, 0, true)
                };
            }
            
            public EnableConstraints(EnableConstraint xConstraint, EnableConstraint yConstraint, EnableConstraint zConstraint)
            {
                XConstraint = xConstraint;
                YConstraint = yConstraint;
                ZConstraint = zConstraint;
            }
        }
        
        [Serializable]
        private struct EnableConstraint
        {
            [field: SerializeField] public float constraintMin { get; private set; }
            [field: SerializeField] public float constraintMax { get; private set; }
            [field: SerializeField]
            public bool ShouldEnable { get; private set; }

            public EnableConstraint(float constraintMin, float constraintMax, bool shouldEnable)
            {
                this.constraintMin = constraintMin;
                this.constraintMax = constraintMax;
                ShouldEnable = shouldEnable;
            }
        }
    }
}