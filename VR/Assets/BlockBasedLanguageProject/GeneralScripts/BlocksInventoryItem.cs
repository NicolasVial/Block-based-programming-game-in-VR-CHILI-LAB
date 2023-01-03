using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlocksInventoryItem : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class represents an item which can be in the inventory of the player.
    */

    public bool inSlot;
    public Vector3 slotRotation = Vector3.zero;
    public BlocksInventorySlot currentSlot;

}
