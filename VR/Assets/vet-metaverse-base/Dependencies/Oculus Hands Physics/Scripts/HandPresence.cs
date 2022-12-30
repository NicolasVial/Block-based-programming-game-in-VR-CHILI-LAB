using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit.Inputs;
using CommonUsages = UnityEngine.XR.CommonUsages;
using InputDevice = UnityEngine.XR.InputDevice;

public class HandPresence : MonoBehaviour
{
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

    [SerializeField] InputActionProperty mGripInput;
    [SerializeField] private InputActionProperty gripInput
    {
        get => mGripInput;
        set => SetInputActionProperty(ref mGripInput, value);
    }
    
    [SerializeField] InputActionProperty mTriggerInput;
    [SerializeField] private InputActionProperty triggerInput
    {
        get => mTriggerInput;
        set => SetInputActionProperty(ref mTriggerInput, value);
    }

    /// <inheritdoc cref="SetInputActionProperty"/>
    void SetInputActionProperty(ref InputActionProperty property, InputActionProperty value)
    {
        if (Application.isPlaying) { property.DisableDirectAction(); }

        property = value;

        if (Application.isPlaying && isActiveAndEnabled) { property.EnableDirectAction(); }
    }
    
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//


    public Animator handAnimator;

    void UpdateHandAnimation()
    {
        float triggerValue = triggerInput.action.ReadValue<float>();
        float gripValue = gripInput.action.ReadValue<float>();

        handAnimator.SetFloat(Animator.StringToHash("Trigger"), triggerValue);
        handAnimator.SetFloat(Animator.StringToHash("Grip"), gripValue);
    }

    private void Update()
    {
        UpdateHandAnimation();
    }
}
