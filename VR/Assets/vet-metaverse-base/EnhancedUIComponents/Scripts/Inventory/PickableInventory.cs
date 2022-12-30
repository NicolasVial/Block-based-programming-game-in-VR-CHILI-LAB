using System;
using System.Linq;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class PickableInventory : MonoBehaviour
    {
        [SerializeField, Tooltip("Number of cells displayed at once in the inventory")] private int pageSize;
        [SerializeField, Tooltip("In cells/scroll")] private int scrollSpeed;
        
        private InventoryCell[] _inventoryCells;
        private int _nbCells;
        
        private int _currentMinVisibleCell; // Inclusive
        private int _currentMaxVisibleCell; // Exclusive

        private Transform _transform;
        
        private void Awake()
        {
            _transform = transform;
            
            _inventoryCells = GetComponentsInChildren<InventoryCell>();
            _nbCells = _inventoryCells.Length;

            if (_nbCells < pageSize) { Debug.LogWarning(
                $"The entered number of visible cells ({pageSize}) is more than the actual number of " +
                $"cells ({_inventoryCells.Length})");
                pageSize = _inventoryCells.Length;
            }

            _currentMinVisibleCell = 0;
            _currentMaxVisibleCell = pageSize;
            
            for (var i = 0; i < pageSize; i++) { _inventoryCells[i].visible = true; }
        }

        public void ScrollLeft()
        {
            _currentMinVisibleCell = Math.Max(0, _currentMinVisibleCell - scrollSpeed);
            _currentMaxVisibleCell = _currentMaxVisibleCell - scrollSpeed;
        }

        public void ScrollRight()
        {
            _currentMinVisibleCell += scrollSpeed;
            _currentMaxVisibleCell = Math.Min(_nbCells, _currentMaxVisibleCell + scrollSpeed);
        }

        public bool AddItem(InventoryItem item)
        {
            foreach (InventoryCell cell in _inventoryCells) { if (cell.ItemName == item.itemName) { return cell.AddItem(); } }
            throw new ArgumentException("No cell in inventory storing this item !");
        }

        public bool RemoveItem(InventoryItem item)
        {
            foreach (InventoryCell cell in _inventoryCells) { if (cell.ItemName == item.itemName) { return cell.RemoveItem(); } }
            throw new ArgumentException("No cell in inventory storing this item");
        }


    }
}