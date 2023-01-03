using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FunctionBlockV2 : BlockV2
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class represents a function block. It is used to concatenate movement blocks in one function. (This class is not used anymore but can be a good start to build real functions)
    */

    public List<BlockV2> functionMouvements;
    public List<int> functionValues;

    private int nbBlocks;

    [SerializeField]
    private BoxCollider b_collider;

    // Start is called before the first frame update
    void Start()
    {
        base.Start();
        functionMouvements = new List<BlockV2>();
        functionValues = new List<int>();
        nbBlocks = 0;
    }

    // Update is called once per frame
    void Update()
    {
        base.Update();
    }

    protected void OnTriggerStay(Collider other)
    {
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV2>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false && other.gameObject.GetComponent<BlockV2>().handInCube == false)
        {
            other.enabled = false;
            nbBlocks += 1;
            other.gameObject.transform.parent = this.gameObject.transform;
            other.gameObject.transform.localPosition = new Vector3(0, -nbBlocks, 0);
            b_collider.size = new Vector3(b_collider.size.x, b_collider.size.y + 1f, b_collider.size.z);
            b_collider.center = new Vector3(b_collider.center.x, b_collider.center.y - 0.5f, b_collider.center.z);

            //Add the block to the list of movements
            BlockV2 block = other.gameObject.GetComponent<BlockV2>();
            BlockV2.Type type = block.type;
            switch (type)
            {
                case BlockV2.Type.MoveForward:
                    MotionBlockV2 mBlock = (MotionBlockV2)block;
                    functionValues.Add(mBlock.motionValue);
                    functionMouvements.Add(block);
                    break;
                case BlockV2.Type.TurnRight:
                    mBlock = (MotionBlockV2)block;
                    functionMouvements.Add(block);
                    break;
                case BlockV2.Type.TurnLeft:
                    mBlock = (MotionBlockV2)block;
                    functionMouvements.Add(block);
                    break;

                default:
                    break;
            }

            
            
        }

        base.OnTriggerStay(other);
    }

    protected void OnTriggerExit(Collider other)
    {
        base.OnTriggerExit(other);
    }
}
