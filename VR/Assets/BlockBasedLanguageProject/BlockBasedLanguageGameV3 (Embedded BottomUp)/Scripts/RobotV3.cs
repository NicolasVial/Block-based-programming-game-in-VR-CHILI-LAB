using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotV3 : MonoBehaviour
{

    public DIRECTION direction;
    private GameObject robot;

    [SerializeField]
    public Transform startTransform;

    [SerializeField]
    private InterpreterV3 interpreter;

    public bool finished;

    // Start is called before the first frame update
    void Start()
    {
        gameObject.transform.position = startTransform.position;
        direction = DIRECTION.ZPOS;
        robot = this.gameObject;
        finished = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV3>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && other.gameObject.GetComponent<BlockV3>().firstBlock == other.gameObject.GetComponent<BlockV3>())
        {
            BlockV3 block = other.gameObject.GetComponent<BlockV3>();
            BlockV3.Type type = block.type;
            switch (type)
            {
                case BlockV3.Type.MoveForward:
                    MotionBlockV3 mBlock = (MotionBlockV3)block;
                    interpreter.movementValues.Add(mBlock.motionValue);
                    interpreter.movements.Add(block);
                    break;
                case BlockV3.Type.TurnRight:
                    mBlock = (MotionBlockV3)block;
                    interpreter.movements.Add(block);
                    break;
                case BlockV3.Type.TurnLeft:
                    mBlock = (MotionBlockV3)block;
                    interpreter.movements.Add(block);
                    break;
                case BlockV3.Type.Repeat:
                    RepeatBlockV3 rBlock = (RepeatBlockV3)block;
                    interpreter.movements.Add(rBlock);
                    break;

                default:

                    break;
            }
        }

        if (other.gameObject.GetComponent<FinishV3>() != null)
        {
            finished = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.GetComponent<FinishV3>() != null)
        {
            finished = false;
        }
    }

    public enum DIRECTION
    {
        XPOS,
        XNEG,
        ZPOS,
        ZNEG
    }

    public void turnRight()
    {
        switch (direction)
        {
            case DIRECTION.XPOS:
                direction = DIRECTION.ZNEG;
                break;
            case DIRECTION.XNEG:
                direction = DIRECTION.ZPOS;
                break;
            case DIRECTION.ZPOS:
                direction = DIRECTION.XPOS;
                break;
            case DIRECTION.ZNEG:
                direction = DIRECTION.XNEG;
                break;
            default:

                break;
        }
    }

    public void turnLeft()
    {
        switch (direction)
        {
            case DIRECTION.XPOS:
                direction = DIRECTION.ZPOS;
                break;
            case DIRECTION.XNEG:
                direction = DIRECTION.ZNEG;
                break;
            case DIRECTION.ZPOS:
                direction = DIRECTION.XNEG;
                break;
            case DIRECTION.ZNEG:
                direction = DIRECTION.XPOS;
                break;
            default:

                break;
        }
    }

    public Vector3 moveForward(int motionValue)
    {
        switch (direction)
        {
            case DIRECTION.XPOS:
                return robot.transform.position + new Vector3(motionValue, 0, 0);
                break;
            case DIRECTION.XNEG:
                return robot.transform.position + new Vector3(-motionValue, 0, 0);
                break;
            case DIRECTION.ZPOS:
                return robot.transform.position + new Vector3(0, 0, motionValue);
                break;
            case DIRECTION.ZNEG:
                return robot.transform.position + new Vector3(0, 0, -motionValue);
                break;
            default:
                return Vector3.zero;
                break;
        }
    }
}
