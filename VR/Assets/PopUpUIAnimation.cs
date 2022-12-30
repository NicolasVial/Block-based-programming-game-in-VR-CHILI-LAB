using UnityEngine;

[RequireComponent(typeof(Animator))]
public class PopUpUIAnimation : MonoBehaviour
{
    private Animator animator;

    private int popInHash, popOutHash;
    
    private void Awake()
    {
        animator = GetComponent<Animator>();

        popInHash = Animator.StringToHash("PopIn");
        popOutHash = Animator.StringToHash("PopOut");
    }

    private void OnEnable()
    {
        animator.SetTrigger(popInHash);
    }

    private void OnDisable()
    {
        animator.SetTrigger(popOutHash);
    }
}
