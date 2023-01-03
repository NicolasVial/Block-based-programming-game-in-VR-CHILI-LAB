using System;
using UnityEngine;
using UnityEngine.Events;

namespace CHILI.Simulation
{
    /// <summary>
    /// Given parameters to this mono behavior in the editor, adapts the
    /// <see cref="ConstrainedGrabHandle"/>'s value attached on the same game object
    /// to a value between min and max via the given curve
    /// </summary>
    [RequireComponent(typeof(ConstrainedGrabHandle))]
    public class GrabHandleValueAdapter : MonoBehaviour
    {
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        [Header("Adapter Parameters")]
        [SerializeField] [Tooltip("The value when the handle is at its minimum rotation")] private float minValue;
        [SerializeField] [Tooltip("The value when the handle is at its maximum rotation")] private float maxValue;
        [SerializeField] [Tooltip("The difference in value which will produce an event")] private float deltaValue = 3 * Mathf.Epsilon;
        ///<summary>Allows customization of user's experience</summary>
        [SerializeField] [Tooltip("The way the value gets interpolated between min and max")] private AnimationCurve valueAdapter;

        public event Action<float> OnValueChanged;
        
        private ConstrainedGrabHandle handle;
        private float value;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        private void Awake()
        {
            handle = GetComponent<ConstrainedGrabHandle>();
        }

        private void Update()
        {
            float prevValue = value;
            value = AdaptValue(handle.MinRotationDeg, handle.RotationDeg, handle.MaxRotationDeg);
            
            // Fire an event with the new value if the value difference is big enough
            if (Mathf.Abs(prevValue - value) > deltaValue) { OnValueChanged?.Invoke(value); }
        }

        private float AdaptValue(float minRotDeg, float currentRotDeg, float maxRotDeg)
        {
            float ratio = (currentRotDeg - minRotDeg) / (maxRotDeg - minRotDeg);
            float adaptedRatio = valueAdapter.Evaluate(ratio);
            return minValue + adaptedRatio * (maxValue - minValue);
        }
    }
}