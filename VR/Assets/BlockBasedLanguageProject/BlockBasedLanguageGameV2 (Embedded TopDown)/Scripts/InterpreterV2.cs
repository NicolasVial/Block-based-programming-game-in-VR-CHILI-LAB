using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InterpreterV2 : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class interprets the blocks and execute the correct Bobi movements when the player starts the code.
    */

    [SerializeField]
    private GameObject robot;

    [SerializeField]
    private RobotV2 robotScript;

    [SerializeField]
    private Animator robotAnimator;

    [SerializeField]
    private int movementSpeed;

    [SerializeField]
    private int rotationSpeed;

    [SerializeField]
    private GameStartListenerV2 gameStartListener;

    [SerializeField]
    private Color activeColor;

    [SerializeField]
    private Color initialColor;

    public bool inMovement;
    private bool startedMovement;
    private float startTime;
    private float distanceBetweenPos;
    private float distanceBetweenRot;
    private Vector3 startPos;
    private Vector3 endPos;
    private Vector3 startRot;
    private Vector3 endRot;

    public List<BlockV2> movements;
    public List<int> movementValues;

    // Start is called before the first frame update
    void Start()
    {
        movements = new List<BlockV2>();
        movementValues = new List<int>();
        inMovement = false;
        startedMovement = false;
        startTime = 0f;
        distanceBetweenPos = 0f;
        distanceBetweenRot = 0f;
        startPos = Vector3.zero;
        endPos = Vector3.zero;
    }

    // Update is called once per frame
    void Update()
    {
        //check if the player asked to start the code, if so start executing the movements.
        if (!inMovement)
        {
            robotAnimator.ResetTrigger("Run2");
            robotAnimator.SetTrigger("Stop");
            if (gameStartListener.start == true && movements.Count != 0)
            {
                gameStartListener.start = false;
                inMovement = true;
            }
            
        }
        else
        //execute the movements following the list of moves
        {
            robotAnimator.ResetTrigger("Stop");
            robotAnimator.SetTrigger("Run2");
            BlockV2 b = movements[0];
            BlockV2.Type movementType = b.type;
            Renderer blockRenderer = b.gameObject.GetComponent<Renderer>();

            if (!startedMovement)
            {
                if(movementType != BlockV2.Type.Function && movementType != BlockV2.Type.Repeat)
                {
                    blockRenderer.material.color = activeColor;
                }

                startedMovement = true;
                startTime = Time.time;

                startRot = robot.transform.eulerAngles;
                if (startRot.y < 0f)
                {
                    startRot.y += 360f;
                }

                //Prepare the movement
                switch (movementType)
                {
                    case BlockV2.Type.MoveForward:
                        startPos = robot.transform.position;
                        endPos = robot.GetComponent<RobotV2>().moveForward(2*movementValues[0]);
                        endRot = robot.transform.eulerAngles;
                        distanceBetweenPos = Vector3.Distance(startPos, endPos);
                        distanceBetweenRot = Vector3.Distance(startRot, endRot);
                        break;
                    case BlockV2.Type.TurnRight:
                        startPos = robot.transform.position;
                        endPos = robot.transform.position;
                        endRot = new Vector3(startRot.x, startRot.y + 90f, startRot.z);
                        robot.GetComponent<RobotV2>().turnRight();
                        distanceBetweenPos = Vector3.Distance(startPos, endPos);
                        distanceBetweenRot = Vector3.Distance(startRot, endRot);
                        break;
                    case BlockV2.Type.TurnLeft:
                        startPos = robot.transform.position;
                        endPos = robot.transform.position;
                        endRot = new Vector3(startRot.x, startRot.y - 90f, startRot.z);
                        robot.GetComponent<RobotV2>().turnLeft();
                        distanceBetweenPos = Vector3.Distance(startPos, endPos);
                        distanceBetweenRot = Vector3.Distance(startRot, endRot);
                        break;
                    case BlockV2.Type.Function:
                        FunctionBlockV2 fBlock = (FunctionBlockV2)b;
                        movements.RemoveAt(0);
                        startedMovement = false;
                        for (var i = fBlock.functionMouvements.Count - 1; i >= 0; i--)
                        {
                            if(fBlock.functionMouvements[i].type == BlockV2.Type.MoveForward)
                            {
                                MotionBlockV2 mBlock = (MotionBlockV2)fBlock.functionMouvements[i];
                                movementValues.Insert(0, mBlock.motionValue);
                            }
                            movements.Insert(0, fBlock.functionMouvements[i]);
                        }                     
                        break;
                    case BlockV2.Type.Repeat:
                        if (robotScript.finished)
                        {
                            inMovement = false;
                            movements.Clear();
                            movementValues.Clear();
                            startedMovement = false;
                            robotScript.finished = false;
                        }
                        else
                        {
                            RepeatBlockV2 rBlock = (RepeatBlockV2)b;
                            startedMovement = false;
                            for (var i = rBlock.functionMouvements.Count - 1; i >= 0; i--)
                            {
                                if (rBlock.functionMouvements[i].type == BlockV2.Type.MoveForward)
                                {
                                    MotionBlockV2 mBlock = (MotionBlockV2)rBlock.functionMouvements[i];
                                    movementValues.Insert(0, mBlock.motionValue);
                                }
                                movements.Insert(0, rBlock.functionMouvements[i]);
                                rBlock.functionMouvements[i].blockBelow = null;
                            }
                        }
                        break;

                    default:
                        break;
                }

            }
            else
            {
                //make the movement smooth with linear interpolation
                if (endRot.y < 0f)
                {
                    endRot.y += 360f;
                }
                if (endRot.y >= 360f)
                {
                    endRot.y -= 360f;
                }

                float distanceTimePos = (Time.time - startTime) * movementSpeed;
                float distanceTimeRot = (Time.time - startTime) * rotationSpeed;
                float relativeTimePos = distanceTimePos / distanceBetweenPos;
                float relativeTimeRot = distanceTimeRot / distanceBetweenRot;
                robot.transform.position = Vector3.Lerp(startPos, endPos, relativeTimePos);
                robot.transform.rotation = Quaternion.Lerp(Quaternion.Euler(startRot), Quaternion.Euler(endRot), relativeTimeRot);

                Vector3 robotRot = robot.transform.eulerAngles;
                if (robotRot.y < 0f)
                {
                    robotRot.y += 360f;
                }
                if (robotRot.y >= 360f)
                {
                    robotRot.y -= 360f;
                }

                if (robot.transform.position == endPos && robot.transform.eulerAngles == endRot)
                {
                    startedMovement = false;
                    if (movementType != BlockV2.Type.Function && movementType != BlockV2.Type.Repeat)
                    {
                        blockRenderer.material.color = initialColor;
                    }
                    bool blockBelowExists = false;
                    BlockV2 nextBlock = null;

                    if (movements[0].blockBelow != null)
                    {
                        blockBelowExists = true;
                        nextBlock = movements[0].blockBelow;
                    }

                    movements.RemoveAt(0);

                    if(movementType == BlockV2.Type.MoveForward)
                    {
                        movementValues.RemoveAt(0);
                    }

                    if (blockBelowExists)
                    {
                        movements.Insert(0, nextBlock);
                        if (movements[0].type == BlockV2.Type.MoveForward)
                        {
                            MotionBlockV2 mBlock = (MotionBlockV2)movements[0];
                            movementValues.Insert(0, mBlock.motionValue);
                        }
                    }

                    if (movements.Count == 0)
                    {
                        inMovement = false;
                    }
                }
            }
            
        }
        
    }
 
}
