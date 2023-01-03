using UnityEngine;
using UnityEngine.InputSystem;

public class HandAnimation : MonoBehaviour
{
    [SerializeField] private InputActionReference gripButton;
    [SerializeField] private InputActionReference triggerButton;
    [SerializeField] private HandPose poseOnGrip = HandPose.Grip;
    [SerializeField] private HandPose poseOnTrigger = HandPose.Point;

    private Animator _animator;

    private int _pointingHash;
    private int _grabbingHash;

    public bool CanGrab { get; set; } = true;
    public bool CanPoint { get; set; } = true;

    private void Awake()
    {
        _pointingHash = Animator.StringToHash("Pointing");
        _grabbingHash = Animator.StringToHash("Grabbing");

        _animator = GetComponent<Animator>();
    }

    private void OnEnable()
    {
        gripButton.action.started += SetGripPose;
        gripButton.action.performed += SetGripPose;
        gripButton.action.canceled += SetGripPose;

        triggerButton.action.started += SetTriggerPose;
        triggerButton.action.performed += SetTriggerPose;
        triggerButton.action.canceled += SetTriggerPose;
    }

    private void OnDisable()
    {
        gripButton.action.started -= SetGripPose;
        gripButton.action.performed -= SetGripPose;
        gripButton.action.canceled -= SetGripPose;

        triggerButton.action.started -= SetTriggerPose;
        triggerButton.action.performed -= SetTriggerPose;
        triggerButton.action.canceled -= SetTriggerPose;
    }

    private void SetGripPose(InputAction.CallbackContext ctx)
    {
        SetPose(ctx, poseOnGrip);
    }

    private void SetTriggerPose(InputAction.CallbackContext ctx)
    {
        SetPose(ctx, poseOnTrigger);
    }

    private void SetPose(InputAction.CallbackContext ctx, HandPose pose)
    {
        if (ctx.started || ctx.performed)
        {
            EnablePose(pose);
        }
        
        if (ctx.canceled)
        {
            DisablePose(pose);
        }
    }

    private void EnablePose(HandPose pose)
    {
        switch (pose)
        {
            case HandPose.Grip:
                SetGrabbing(true);
                break;
            case HandPose.Point:
                SetPointing(true);
                break;
            case HandPose.Idle:
                SetPointing(false);
                SetGrabbing(false);
                break;
            default:
                break;
        }
    }

    private void DisablePose(HandPose pose)
    {
        switch (pose)
        {
            case HandPose.Grip:
                SetGrabbing(false);
                break;
            case HandPose.Point:
                SetPointing(false);
                break;
            default:
                break;
        }
    }

    public void SetPointing(bool enable)
    {
        if (enable)
        {
            if(!CanPoint) return;
            
            SetGrabbing(false);
        }
        
        _animator.SetBool(_pointingHash, enable);
    }
    
    public void SetGrabbing(bool enable)
    {
        if (enable)
        {
            if(!CanGrab) return;
            
            SetPointing(false);
        }
        
        _animator.SetBool(_grabbingHash, enable);
    }

    private enum HandPose { Idle, Grip, Point }
}
