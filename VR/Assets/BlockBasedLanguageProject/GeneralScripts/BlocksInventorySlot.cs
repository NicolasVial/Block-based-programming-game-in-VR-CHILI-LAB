using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BlocksInventorySlot : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class represents a slot of the inventory of the player.
    */

    public GameObject prefab;
    public Image slotImage;
    public Color originalColor;
    public GameObject hand;
    private GameObject itemInSlot;
    private int nbObj;

    [SerializeField]
    public int nbMax;

    [SerializeField]
    private string tag;

    [SerializeField]
    public TextMeshProUGUI nbAvailableText;

    // Start is called before the first frame update
    void Start()
    {
        itemInSlot = Instantiate(prefab, this.transform);
        itemInSlot.transform.localPosition = Vector3.zero;
        itemInSlot.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
        itemInSlot.GetComponent<BlocksInventoryItem>().inSlot = true;
        itemInSlot.GetComponent<BlocksInventoryItem>().currentSlot = this;

        //item in slot shouldn't react to anything but grab
        foreach (Collider c in itemInSlot.GetComponentsInChildren<Collider>())
        {
            if (!c.GetType().ToString().Equals("UnityEngine.BoxCollider") || c.gameObject.name == "mini cube")
            {
                c.enabled = false;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        //A new object should appear in inventory if the slot is empty and that the nb of available objects is larger than 0
        nbObj = GameObject.FindGameObjectsWithTag(tag).Length;
        if (nbObj < nbMax && itemInSlot == null)
        {
            addBlockToInventorySlot();
        }

        if(nbMax < 1000)
        {
            if(itemInSlot == null)
            {
                nbAvailableText.text = (nbMax - nbObj).ToString();
            }
            else
            {
                nbAvailableText.text = (nbMax - nbObj + 1).ToString();
            }    
        }
        else
        {
            nbAvailableText.text = "Infinity";
        }
        
    }

    private void OnTriggerExit(Collider other)
    {
        //Whenever the object in inventory is grabbed, replace it by a new one if enough available
        GameObject obj = other.gameObject;
        if (isItem(obj) && obj.GetComponent<BlocksInventoryItem>().inSlot == true)
        {
            obj.transform.localScale = new Vector3(1f, 1f, 1f);
            obj.transform.position = hand.transform.position;
            obj.transform.eulerAngles = new Vector3(0f, 0f, 0f);
            obj.GetComponent<BlocksInventoryItem>().inSlot = false;
            obj.GetComponent<BlocksInventoryItem>().currentSlot = null;


            foreach (Collider c in obj.GetComponentsInChildren<Collider>())
            {
                c.enabled = true;
            }

            if (nbObj < nbMax)
            {
                addBlockToInventorySlot();
            }
            else
            {
                itemInSlot = null;
            }

        }
    }

    private bool isItem(GameObject obj)
    {
        return obj.GetComponent<BlocksInventoryItem>();
    }

    private void resetColor()
    {
        slotImage.color = originalColor;
    }

    //This function adds a new item in the slot
    public void addBlockToInventorySlot()
    {
        itemInSlot = Instantiate(prefab, this.transform);
        itemInSlot.transform.localPosition = Vector3.zero;
        itemInSlot.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
        itemInSlot.GetComponent<BlocksInventoryItem>().inSlot = true;
        itemInSlot.GetComponent<BlocksInventoryItem>().currentSlot = this;

        foreach (Collider c in itemInSlot.GetComponentsInChildren<Collider>())
        {
            if (!c.GetType().ToString().Equals("UnityEngine.BoxCollider") || c.gameObject.name == "mini cube")
            {
                c.enabled = false;
            }
        }
    }
}
