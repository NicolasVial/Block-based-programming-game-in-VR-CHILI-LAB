using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    [RequireComponent(typeof(Animator))]
    public class PopUpUIAnimation : MonoBehaviour
    {
        private Animator _animator;

        private int _popInHash, _popOutHash;
    
        private void Awake()
        {
            _animator = GetComponent<Animator>();

            _popInHash = Animator.StringToHash("PopIn");
            _popOutHash = Animator.StringToHash("PopOut");
        }

        private void OnEnable() { _animator.SetTrigger(_popInHash); }

        private void OnDisable() { _animator.SetTrigger(_popOutHash); }
    }

}