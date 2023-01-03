using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BlockV1 : MonoBehaviour
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
    public BlockV1 blockBelow;

    //remember if this block is the first block to execute or not
    public bool firstBlock;

    public bool handInCube;


    // Start is called before the first frame update
    public void Start()
    {
        blockBelow = null;
        handInCube = false;
        firstBlock = true;
    }

    // Update is called once per frame
    public void Update()
    {

    }

    private void OnTriggerStay(Collider other)
    {
        //when this block is below another one, link to it and become it's child
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider")  && other.gameObject.GetComponent<BlockV1>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false && this.gameObject.GetComponent<BlockV1>().handInCube == false && other.gameObject.tag != "Repeat" && this.gameObject.tag != "StartingBlock" && other.gameObject.GetComponent<BlockV1>().blockBelow == null && this.firstBlock == true)
        {
            this.gameObject.transform.parent = other.gameObject.transform;
            this.gameObject.transform.localPosition = new Vector3(0, -1f, 0);
            other.gameObject.GetComponent<BlockV1>().blockBelow = this;
            this.firstBlock = false;
        }

        //This is used to know if the hand is inside the block
        if(other.gameObject.name == "Right Base Controller")
        {
            handInCube = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        //when this block is leaves it's parent, unlink it from the block above
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV1>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false && other.gameObject.tag != "Repeat" && this.gameObject.tag != "StartingBlock")
        {
            this.gameObject.transform.parent = null;
            other.gameObject.GetComponent<BlockV1>().blockBelow = null;
            this.firstBlock = true;
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
        Event
    }

    /*
     * The existing types of blocks
    */
    public enum Type
    {
        MoveForward,
        TurnRight,
        TurnLeft,
        Repeat,
        None
    }
}
