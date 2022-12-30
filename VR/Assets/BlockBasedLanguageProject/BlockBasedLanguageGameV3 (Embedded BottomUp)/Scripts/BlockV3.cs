using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BlockV3 : MonoBehaviour
{
    [SerializeField]
    public Type type;

    [SerializeField]
    public Group group;

    public BlockV3 blockAbove;

    public BlockV3 firstBlock;

    public bool handInCube;


    // Start is called before the first frame update
    public void Start()
    {
        blockAbove = null;
        handInCube = false;
        firstBlock = this;
    }

    // Update is called once per frame
    public void Update()
    {

    }

    protected void OnTriggerStay(Collider other)
    {
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV3>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false && other.gameObject.GetComponent<BlockV3>().handInCube == false && this.gameObject.GetComponent<BlockV3>().handInCube == false)
        {
            if(other.gameObject.GetComponent<RepeatBlockV3>() == null && other.gameObject.GetComponent<BlockV3>().blockAbove == null && this.firstBlock == this)
            {
                this.gameObject.transform.parent = other.gameObject.transform;
                this.gameObject.transform.localPosition = new Vector3(0, 1f, 0);
                firstBlock = other.gameObject.GetComponent<BlockV3>().firstBlock;
                other.gameObject.GetComponent<BlockV3>().blockAbove = this;
            }
        }

        if (other.gameObject.name == "Right Base Controller")
        {
            handInCube = true;
        }
        
    }

    protected void OnTriggerExit(Collider other)
    {   
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV3>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false)
        {
            this.gameObject.transform.parent = null;
            other.gameObject.GetComponent<BlockV3>().blockAbove = null;
            firstBlock = this;
        }

        if (other.gameObject.name == "Right Base Controller")
        {
            handInCube = false;
        }
    }
    
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
        Repeat,
        None
    }
}
