using MyBox;
using UnityEngine;

namespace VRAppBase.Utils
{
    public class FollowTarget : MonoBehaviour
    {
        [Header("Relative to Move Target")]
        [SerializeField] private Transform positionTarget;
        [SerializeField, Tooltip("If true, keeps its initial offset regarding the target")] private bool keepOffset;
        [SerializeField] public Vector3 additionalConstantLocalOffset;
        
        [Header("Relative to Look Target")]
        [SerializeField] private bool followRotation;
        [SerializeField, ConditionalField("followRotation")] private Transform lookToward;
        [SerializeField, ConditionalField("followRotation")] private float offsetTowardsLookTarget;

        private Transform _transform;
        private Vector3 _offset = Vector3.zero;
        
        private void Awake()
        {
            _transform = transform;
            if(keepOffset) { _offset = _transform.position - positionTarget.position; }
        }

        private void Update()
        {
            Vector3 newPos = positionTarget.position + _offset + additionalConstantLocalOffset;
            
            if (followRotation)
            {
                Vector3 lookDirection = lookToward.position - _transform.position;
                _transform.rotation = Quaternion.LookRotation(lookDirection);
                newPos += lookDirection.normalized * offsetTowardsLookTarget;
            }
            
            _transform.position = newPos;
        }
    }
}