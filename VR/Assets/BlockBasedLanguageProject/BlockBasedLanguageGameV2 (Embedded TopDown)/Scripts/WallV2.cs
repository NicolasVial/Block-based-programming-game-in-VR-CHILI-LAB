using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallV2 : MonoBehaviour
{
    [SerializeField]
    private Collider robotCollider;

    [SerializeField]
    private RobotV2 robot;

    [SerializeField]
    public Transform startTransform;

    [SerializeField]
    public InterpreterV2 interpreter;

    private void OnTriggerEnter(Collider other)
    {
        if (other == robotCollider)
        {
            robotCollider.enabled = false;
            robot.gameObject.transform.position = startTransform.position;
            robot.gameObject.transform.eulerAngles = startTransform.eulerAngles;
            robot.direction = RobotV2.DIRECTION.ZPOS;
            interpreter.movements.Clear();
            interpreter.movementValues.Clear();
            interpreter.inMovement = false;
        }
    }
}
