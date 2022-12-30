using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InterpreterV1 : MonoBehaviour
{

    [SerializeField]
    private GameObject robot;

    [SerializeField]
    private RobotV1 robotScript;

    [SerializeField]
    private Animator robotAnimator;

    [SerializeField]
    private int movementSpeed;

    [SerializeField]
    private int rotationSpeed;

    [SerializeField]
    private GameStartListenerV1 gameStartListener;

    [SerializeField]
    private Color activeColor;

    [SerializeField]
    private Color initialColor;

    private StartBlockV1 startBlock;
    public bool inMovement;
    private bool startedMovement;
    private float startTime;
    private float distanceBetweenPos;
    private float distanceBetweenRot;
    private Vector3 startPos;
    private Vector3 endPos;
    private Vector3 startRot;
    private Vector3 endRot;

    public List<BlockV1> movements;
    public List<int> movementValues;

    // Start is called before the first frame update
    void Start()
    {
        startBlock = null;
        movements = new List<BlockV1>();
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
            StartBlockV1[] startCheck = GameObject.FindObjectsOfType<StartBlockV1>();
            if (startCheck.Length != 0)
            {
                startBlock = startCheck[0];
            }

            if (startBlock != null)
            {
                if (gameStartListener.start == true)
                {
                    if (startBlock.blockBelow != null)
                    {
                        BlockV1 nextBlock = startBlock.blockBelow;
                        if (nextBlock != null)
                        {
                            //interpret(nextBlock);
                            while (nextBlock != null)
                            {
                                if(nextBlock.type == BlockV1.Type.MoveForward)
                                {
                                    MotionBlockV1 mBlock = (MotionBlockV1)nextBlock;
                                    movementValues.Add(mBlock.motionValue);
                                }
                                movements.Add(nextBlock);
                                nextBlock = nextBlock.blockBelow;
                            }
                        }
                        gameStartListener.start = false;
                        inMovement = true;
                    }
                }
            }
        }
        else
        {
            robotAnimator.ResetTrigger("Stop");
            robotAnimator.SetTrigger("Run2");
            BlockV1 b = movements[0];
            BlockV1.Type movementType = b.type;
            Renderer blockRenderer = b.gameObject.GetComponent<Renderer>();

            if (!startedMovement)
            {
                if (movementType != BlockV1.Type.Repeat)
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
                    case BlockV1.Type.MoveForward:
                        startPos = robot.transform.position;
                        endPos = robot.GetComponent<RobotV1>().moveForward(2*movementValues[0]);
                        endRot = robot.transform.eulerAngles;
                        distanceBetweenPos = Vector3.Distance(startPos, endPos);
                        distanceBetweenRot = Vector3.Distance(startRot, endRot);
                        break;
                    case BlockV1.Type.TurnRight:
                        startPos = robot.transform.position;
                        endPos = robot.transform.position;
                        endRot = new Vector3(startRot.x, startRot.y + 90f, startRot.z);
                        robot.GetComponent<RobotV1>().turnRight();
                        distanceBetweenPos = Vector3.Distance(startPos, endPos);
                        distanceBetweenRot = Vector3.Distance(startRot, endRot);
                        break;
                    case BlockV1.Type.TurnLeft:
                        startPos = robot.transform.position;
                        endPos = robot.transform.position;
                        endRot = new Vector3(startRot.x, startRot.y - 90f, startRot.z);
                        robot.GetComponent<RobotV1>().turnLeft();
                        distanceBetweenPos = Vector3.Distance(startPos, endPos);
                        distanceBetweenRot = Vector3.Distance(startRot, endRot);
                        break;
                    case BlockV1.Type.Repeat:
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
                            RepeatBlockV1 rBlock = (RepeatBlockV1)b;
                            startedMovement = false;
                            for (var i = rBlock.functionMouvements.Count - 1; i >= 0; i--)
                            {
                                
                                if (rBlock.functionMouvements[i].type == BlockV1.Type.MoveForward)
                                {
                                    MotionBlockV1 mBlock = (MotionBlockV1)rBlock.functionMouvements[i];
                                    movementValues.Insert(0, mBlock.motionValue);
                                }
                                movements.Insert(0, rBlock.functionMouvements[i]);
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
                    if (movementType != BlockV1.Type.Repeat)
                    {
                        blockRenderer.material.color = initialColor;
                    }
                    movements.RemoveAt(0);

                    if(movementType == BlockV1.Type.MoveForward)
                    {
                        movementValues.RemoveAt(0);
                    }

                    if(movements.Count == 0)
                    {
                        inMovement = false;
                    }
                }
            }
        }
        
    }

    private void interpret(BlockV1 block)
    {
        BlockV1.Type type = block.type;
        switch (type)
        {
            case BlockV1.Type.MoveForward:
                MotionBlockV1 mBlock = (MotionBlockV1)block;
                movementValues.Add(mBlock.motionValue);
                movements.Add(mBlock);
                if (mBlock.blockBelow != null)
                {
                    interpret(mBlock.blockBelow);
                }
                break;
            case BlockV1.Type.TurnRight:
                mBlock = (MotionBlockV1)block;
                movements.Add(mBlock);
                if (mBlock.blockBelow != null)
                {
                    interpret(mBlock.blockBelow);
                }
                break;
            case BlockV1.Type.TurnLeft:
                mBlock = (MotionBlockV1)block;
                movements.Add(mBlock);
                if (mBlock.blockBelow != null)
                {
                    interpret(mBlock.blockBelow);
                }
                break;
            
            default:
                
                break;
        }
    }

}
