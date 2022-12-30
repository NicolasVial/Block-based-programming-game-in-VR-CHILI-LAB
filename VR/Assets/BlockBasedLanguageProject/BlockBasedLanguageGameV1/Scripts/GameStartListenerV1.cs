using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class GameStartListenerV1 : MonoBehaviour
{
    [SerializeField]
    private InputActionReference gameStartReference = null;

    [SerializeField]
    private RobotV1 robot;

    [SerializeField]
    private Collider robotCollider;

    [SerializeField]
    public Transform startTransform;

    [SerializeField]
    public bool start;

    [SerializeField]
    public InterpreterV1 interpreter;

    private void Awake()
    {
        gameStartReference.action.started += GameStart;
    }

    private void OnDestroy()
    {
        gameStartReference.action.started -= GameStart;
    }

    private void GameStart(InputAction.CallbackContext context)
    {
        reset();
        robotCollider.enabled = true;
        start = true;
    }

    private void reset()
    {
        if (!interpreter.inMovement)
        {
            robotCollider.enabled = false;
            robot.gameObject.transform.position = startTransform.position;
            robot.gameObject.transform.eulerAngles = startTransform.eulerAngles;
            robot.direction = RobotV1.DIRECTION.ZPOS;
            interpreter.movements.Clear();
            interpreter.movementValues.Clear();
        }
    }
}
