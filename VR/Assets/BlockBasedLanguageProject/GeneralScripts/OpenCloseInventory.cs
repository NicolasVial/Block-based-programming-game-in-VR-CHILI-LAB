using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class OpenCloseInventory : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class is used to open and close inventory whenever a specific button is pressed.
    */

    [SerializeField]
    private InputActionReference inventoryAction = null;

    [SerializeField]
    private GameObject inventoryInterface;

    public void Start()
    {
        inventoryInterface.SetActive(false);
    }


    private void Awake()
    {
        inventoryAction.action.started += InventoryOpenCloseAction;
        inventoryInterface.SetActive(false);
    }

    private void OnDestroy()
    {
        inventoryAction.action.started -= InventoryOpenCloseAction;
    }

    private void InventoryOpenCloseAction(InputAction.CallbackContext context)
    {
        if (inventoryInterface.activeInHierarchy)
        {
            inventoryInterface.SetActive(false);
        }
        else
        {
            inventoryInterface.SetActive(true);
        }
    }
}
