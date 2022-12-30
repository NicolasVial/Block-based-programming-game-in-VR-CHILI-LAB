using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BlockV1 : MonoBehaviour
{
    [SerializeField]
    public Type type;

    [SerializeField]
    public Group group;

    public BlockV1 blockBelow;

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
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider")  && other.gameObject.GetComponent<BlockV1>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false && this.gameObject.GetComponent<BlockV1>().handInCube == false && other.gameObject.tag != "Repeat" && this.gameObject.tag != "StartingBlock" && other.gameObject.GetComponent<BlockV1>().blockBelow == null && this.firstBlock == true)
        {
            this.gameObject.transform.parent = other.gameObject.transform;
            this.gameObject.transform.localPosition = new Vector3(0, -1f, 0);
            other.gameObject.GetComponent<BlockV1>().blockBelow = this;
            this.firstBlock = false;
        }

        if(other.gameObject.name == "Right Base Controller")
        {
            handInCube = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {   
        if (other.GetType().ToString().Equals("UnityEngine.CapsuleCollider") && other.gameObject.GetComponent<BlockV1>() != null && other.gameObject.GetComponent<BlocksInventoryItem>().inSlot == false && this.GetComponent<BlocksInventoryItem>().inSlot == false && other.gameObject.tag != "Repeat" && this.gameObject.tag != "StartingBlock")
        {
            this.gameObject.transform.parent = null;
            other.gameObject.GetComponent<BlockV1>().blockBelow = null;
            this.firstBlock = true;
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
        Event
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
