using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class OpenCloseInventory : MonoBehaviour
{

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
