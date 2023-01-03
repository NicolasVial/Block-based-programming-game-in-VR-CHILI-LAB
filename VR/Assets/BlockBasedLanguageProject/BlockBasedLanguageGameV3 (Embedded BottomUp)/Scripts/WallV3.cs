using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallV3 : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class represents a wall in the game. Whenever Bobi hits a wall, his movements are reseted and it's position as well.
    */

    [SerializeField]
    private Collider robotCollider;

    [SerializeField]
    private RobotV3 robot;

    [SerializeField]
    public Transform startTransform;

    [SerializeField]
    public InterpreterV3 interpreter;

    private void OnTriggerEnter(Collider other)
    {
        if(other == robotCollider)
        {
            robotCollider.enabled = false;
            robot.gameObject.transform.position = startTransform.position;
            robot.gameObject.transform.eulerAngles = startTransform.eulerAngles;
            robot.direction = RobotV3.DIRECTION.ZPOS;
            interpreter.movements.Clear();
            interpreter.movementValues.Clear();
            interpreter.inMovement = false;
        }
    }
}
