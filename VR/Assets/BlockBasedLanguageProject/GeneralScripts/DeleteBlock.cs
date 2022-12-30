using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeleteBlock : MonoBehaviour
{
    public GameObject hand;

    private void OnTriggerStay(Collider other)
    {
        GameObject obj = other.gameObject;

        if (isItem(obj) && obj.transform.position != hand.transform.position)
        {
            Destroy(obj);
        }
    }

    private bool isItem(GameObject obj)
    {
        return obj.GetComponent<BlocksInventoryItem>();
    }
}
