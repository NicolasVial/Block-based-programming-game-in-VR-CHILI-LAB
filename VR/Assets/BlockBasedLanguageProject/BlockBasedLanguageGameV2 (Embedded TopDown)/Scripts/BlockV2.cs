using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BlockV2 : MonoBehaviour
{
    [SerializeField]
    public Type type;

    [SerializeField]
    public Group group;

    public BlockV2 blockBelow;

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

        if (other.gameObject.name == "Right Base Controller")
        {
            handInCube = true;
        }

    }

    protected void OnTriggerExit(Collider other)
    {
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV2>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false)
        {
            this.gameObject.transform.parent = null;
            other.gameObject.GetComponent<BlockV2>().blockBelow = null;
            firstBlock = this;
        }

        if (other.gameObject.name == "Right Base Controller")
        {
            handInCube = false;
        }
    }

    /*
    protected void OnTriggerStay(Collider other)
    {     
        if (other.gameObject.name == "Right Base Controller")
        {
            handInCube = true;
        }
    }

    protected void OnTriggerExit(Collider other)
    {
        if (other.gameObject.name == "Right Base Controller")
        {
            handInCube = false;
        }
    }
    */
    /*
    private void OnTriggerStay(Collider other)
    {
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider")  && other.gameObject.GetComponent<BlockV2>() != null && other.gameObject.GetComponent<BlocksInventoryItemV2>().inSlot == false && this.GetComponent<BlocksInventoryItemV2>().inSlot == false && other.gameObject.GetComponent<BlockV2>().handInCube == false)
        {
            other.gameObject.transform.parent = this.gameObject.transform;
            other.gameObject.transform.localPosition = new Vector3(0, -1f, 0);
            blockBelow = other.gameObject.GetComponent<BlockV2>();
        }

        if(other.gameObject.name == "Right Base Controller")
        {
            handInCube = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {   
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV2>() != null && other.gameObject.GetComponent<BlocksInventoryItemV2>().inSlot == false && this.GetComponent<BlocksInventoryItemV2>().inSlot == false)
        {
            other.gameObject.transform.parent = null;
            blockBelow = null;
        }

        if (other.gameObject.name == "Right Base Controller")
        {
            handInCube = false;
        }
    }
    */
    public enum Group
    {
        Motion,
        Control,
        Event,
    }

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
