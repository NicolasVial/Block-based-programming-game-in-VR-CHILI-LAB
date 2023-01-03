using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BlockV2 : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class represents a generic block in the game.
    */

    [SerializeField]
    public Type type;

    [SerializeField]
    public Group group;

    //remember what is the block below since it's a topdown execution
    public BlockV2 blockBelow;

    //remember what is the first block to know where to start the execution
    public BlockV2 firstBlock;

    public bool handInCube;


    // Start is called before the first frame update
    public void Start()
    {
        blockBelow = null;
        handInCube = false;
        firstBlock = this;
    }

    // Update is called once per frame
    public void Update()
    {

    }

    protected void OnTriggerStay(Collider other)
    {
        //when this block is below another one, link to it and become it's child
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV2>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false && other.gameObject.GetComponent<BlockV2>().handInCube == false && this.gameObject.GetComponent<BlockV2>().handInCube == false)
        {
            if (other.gameObject.GetComponent<RepeatBlockV2>() == null && other.gameObject.GetComponent<BlockV2>().blockBelow == null && this.firstBlock == this)
            {
                this.gameObject.transform.parent = other.gameObject.transform;
                this.gameObject.transform.localPosition = new Vector3(0, -1f, 0);
                firstBlock = other.gameObject.GetComponent<BlockV2>().firstBlock;
                other.gameObject.GetComponent<BlockV2>().blockBelow = this;
            }
        }

        //This is used to know if the hand is inside the block
        if (other.gameObject.name == "Right Base Controller")
        {
            handInCube = true;
        }

    }

    protected void OnTriggerExit(Collider other)
    {
        //when this block is leaves it's parent, unlink it from the block above
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV2>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false)
        {
            this.gameObject.transform.parent = null;
            other.gameObject.GetComponent<BlockV2>().blockBelow = null;
            firstBlock = this;
        }

        //This is used to know if the hand is inside the block
        if (other.gameObject.name == "Right Base Controller")
        {
            handInCube = false;
        }
    }

    /*
     * The existing groups of blocks
    */
    public enum Group
    {
        Motion,
        Control,
        Event,
    }

    /*
     * The existing types of blocks
    */
    public enum Type
    {
        MoveForward,
        TurnRight,
        TurnLeft,
        Function,
        Repeat,
        None
    }
}
