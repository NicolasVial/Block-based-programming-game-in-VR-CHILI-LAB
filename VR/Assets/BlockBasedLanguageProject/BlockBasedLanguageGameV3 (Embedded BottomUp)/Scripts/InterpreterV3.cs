using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InterpreterV3 : MonoBehaviour
{

    [SerializeField]
    private GameObject robot;

    [SerializeField]
    private RobotV3 robotScript;

    [SerializeField]
    private Animator robotAnimator;

    [SerializeField]
    private int movementSpeed;

    [SerializeField]
    private int rotationSpeed;

    [SerializeField]
    private GameStartListenerV3 gameStartListener;

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

    public List<BlockV3> movements;
    public List<int> movementValues;

    // Start is called before the first frame update
    void Start()
    {
        movements = new List<BlockV3>();
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
        {
            robotAnimator.ResetTrigger("Stop");
            robotAnimator.SetTrigger("Run2");
            BlockV3 b = movements[0];
            BlockV3.Type movementType = b.type;
            Renderer blockRenderer = b.gameObject.GetComponent<Renderer>();

            if (!startedMovement)
            {
                if(movementType != BlockV3.Type.Repeat)
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

                switch (movementType)
                {
                    case BlockV3.Type.MoveForward:
                        startPos = robot.transform.position;
                        endPos = robot.GetComponent<RobotV3>().moveForward(2*movementValues[0]);
                        endRot = robot.transform.eulerAngles;
                        distanceBetweenPos = Vector3.Distance(startPos, endPos);
                        distanceBetweenRot = Vector3.Distance(startRot, endRot);
                        break;
                    case BlockV3.Type.TurnRight:
                        startPos = robot.transform.position;
                        endPos = robot.transform.position;
                        endRot = new Vector3(startRot.x, startRot.y + 90f, startRot.z);
                        robot.GetComponent<RobotV3>().turnRight();
                        distanceBetweenPos = Vector3.Distance(startPos, endPos);
                        distanceBetweenRot = Vector3.Distance(startRot, endRot);
                        break;
                    case BlockV3.Type.TurnLeft:
                        startPos = robot.transform.position;
                        endPos = robot.transform.position;
                        endRot = new Vector3(startRot.x, startRot.y - 90f, startRot.z);
                        robot.GetComponent<RobotV3>().turnLeft();
                        distanceBetweenPos = Vector3.Distance(startPos, endPos);
                        distanceBetweenRot = Vector3.Distance(startRot, endRot);
                        break;
                    case BlockV3.Type.Repeat:
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
                            RepeatBlockV3 rBlock = (RepeatBlockV3)b;
                            startedMovement = false;
                            for (var i = rBlock.functionMouvements.Count - 1; i >= 0; i--)
                            {
                                if (rBlock.functionMouvements[i].type == BlockV3.Type.MoveForward)
                                {
                                    MotionBlockV3 mBlock = (MotionBlockV3)rBlock.functionMouvements[i];
                                    movementValues.Insert(0, mBlock.motionValue);
                                }
                                movements.Insert(0, rBlock.functionMouvements[i]);
                                rBlock.functionMouvements[i].blockAbove = null;
                            }
                        }                       
                        break;

                    default:
                        break;
                }

            }
            else
            {
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

                if (robot.transform.position == endPos && robotRot == endRot)
                {
                    startedMovement = false;
                    if (movementType != BlockV3.Type.Repeat)
                    {
                        blockRenderer.material.color = initialColor;
                    }
                    bool blockAboveExists = false;
                    BlockV3 nextBlock = null;
                    
                    if (movements[0].blockAbove != null)
                    {
                        blockAboveExists = true;
                        nextBlock = movements[0].blockAbove;
                    }

                    movements.RemoveAt(0);

                    if (movementType == BlockV3.Type.MoveForward)
                    {
                        movementValues.RemoveAt(0);
                    }

                    if (blockAboveExists)
                    {
                        movements.Insert(0, nextBlock);
                        if(movements[0].type == BlockV3.Type.MoveForward)
                        {
                            MotionBlockV3 mBlock = (MotionBlockV3)movements[0];
                            movementValues.Insert(0, mBlock.motionValue);
                        }
                    }

                    if(movements.Count == 0)
                    {
                        inMovement = false;
                    }
                }
            }

        }
        
    }

}
