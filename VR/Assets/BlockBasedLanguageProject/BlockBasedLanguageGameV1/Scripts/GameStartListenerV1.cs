using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class GameStartListenerV1 : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class is used to reset Bobi's movements and position and start it whenever a certain button is pressed.
    */

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

    //resets the position of Bobi and clear it's movement lists
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
