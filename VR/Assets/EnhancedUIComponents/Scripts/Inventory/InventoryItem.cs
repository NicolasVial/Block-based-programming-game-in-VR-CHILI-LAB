using System;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class InventoryItem : AnchoredGrabInteractable
    {
        [field:Header("Inventory Item")]
        [field:SerializeField] public string itemName { private set; get; }
    }
}