using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RepeatBlockV1 : BlockV1
{
    public List<BlockV1> functionMouvements;
    public List<int> functionValues;

    private int nbBlocks;

    [SerializeField]
    private BoxCollider b_collider;

    [SerializeField]
    private CapsuleCollider c_collider;

    [SerializeField]
    private GameObject endOfRepeat;

    void Start()
    {
        base.Start();
        functionMouvements = new List<BlockV1>();
        functionValues = new List<int>();
        nbBlocks = 0;
    }

    void Update()
    {
        base.Update();
    }

    protected void OnTriggerStay(Collider other)
    {

        if (other.gameObject.GetComponent<BlockV1>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false && other.gameObject.GetComponent<BlockV1>().handInCube == false && other.gameObject.tag != "StartingBlock" && other.gameObject.GetComponent<BlockV1>().firstBlock == true)
        {
            foreach (var c in other.gameObject.GetComponentsInChildren<Collider>())
            {
                if (c.gameObject.name != "decr" && c.gameObject.name != "incr"  && c != other)
                {
                    c.enabled = false;
                }
            }

            if (other.gameObject.name != "decr" && other.gameObject.name != "incr")
            {
                other.enabled = false;
            }

            int nbNewBlocks = 1;
            BlockV1 blockBelow = other.gameObject.GetComponent<BlockV1>().blockBelow;
            while(blockBelow != null)
            {
                nbNewBlocks += 1;
                blockBelow = blockBelow.blockBelow;
            }

            other.gameObject.transform.parent = this.gameObject.transform;
            endOfRepeat.transform.localPosition = new Vector3(endOfRepeat.transform.localPosition.x, endOfRepeat.transform.localPosition.y - nbNewBlocks, endOfRepeat.transform.localPosition.z);
            b_collider.size = new Vector3(b_collider.size.x, b_collider.size.y + nbNewBlocks, b_collider.size.z);
            b_collider.center = new Vector3(b_collider.center.x, b_collider.center.y - (0.5f* nbNewBlocks), b_collider.center.z);
            c_collider.height = c_collider.height + nbNewBlocks;
            c_collider.center = new Vector3(c_collider.center.x, c_collider.center.y - (0.5f * nbNewBlocks), c_collider.center.z);
            other.gameObject.transform.localPosition = new Vector3(0, -(nbBlocks+1), 0);
            nbBlocks += nbNewBlocks;

            //Add the blocks to the list of movements
            BlockV1 blockToAdd = other.gameObject.GetComponent<BlockV1>();
            while (blockToAdd != null)
            {
                BlockV1.Type type = blockToAdd.type;
                switch (type)
                {
                    case BlockV1.Type.MoveForward:
                        MotionBlockV1 mBlock = (MotionBlockV1)blockToAdd;
                        functionValues.Add(mBlock.motionValue);
                        functionMouvements.Add(blockToAdd);
                        break;
                    case BlockV1.Type.TurnRight:
                        mBlock = (MotionBlockV1)blockToAdd;
                        functionMouvements.Add(blockToAdd);
                        break;
                    case BlockV1.Type.TurnLeft:
                        mBlock = (MotionBlockV1)blockToAdd;
                        functionMouvements.Add(blockToAdd);
                        break;

                    default:
                        break;
                }

                blockToAdd = blockToAdd.blockBelow;
            }

        }

        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV1>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false && other.gameObject.GetComponent<BlockV1>().handInCube == false && other.gameObject.tag == "StartingBlock")
        {
            this.gameObject.transform.parent = other.gameObject.transform;
            this.gameObject.transform.localPosition = new Vector3(0, -1f, 0);
            other.gameObject.GetComponent<BlockV1>().blockBelow = this;
        }

            if (other.gameObject.name == "Right Base Controller")
        {
            handInCube = true;
        }

    }

    protected void OnTriggerExit(Collider other)
    {
        /*
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV1>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false && other.gameObject.tag != "StartingBlock")
        {
            this.gameObject.transform.parent = null;
            other.gameObject.GetComponent<BlockV1>().blockBelow = null;
            endOfRepeat.transform.localPosition = new Vector3(endOfRepeat.transform.localPosition.x, endOfRepeat.transform.localPosition.y + 1f, endOfRepeat.transform.localPosition.z);
            b_collider.size = new Vector3(b_collider.size.x, b_collider.size.y - 1f, b_collider.size.z);
            b_collider.center = new Vector3(b_collider.center.x, b_collider.center.y + 0.5f, b_collider.center.z);
            c_collider.center = new Vector3(c_collider.center.x, c_collider.center.y + 1f, c_collider.center.z);
        }
        */
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV1>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false && other.gameObject.GetComponent<BlockV1>().handInCube == false && other.gameObject.tag == "StartingBlock")
        {
            this.gameObject.transform.parent = null;
            other.gameObject.GetComponent<BlockV1>().blockBelow = null;
        }


        if (other.gameObject.name == "Right Base Controller")
        {
            handInCube = false;
        }
    }
}
