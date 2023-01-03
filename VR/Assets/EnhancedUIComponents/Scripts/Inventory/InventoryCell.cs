using JetBrains.Annotations;
using UnityEngine;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    public class InventoryCell : GrabSupplyCell
    {
        [SerializeField, HideInInspector] private InventoryItem item;
        public string ItemName => item.itemName;
        
        protected override void OnValidate()
        {
            base.OnValidate();
            if (!grabInteractablePrefab.GetType().IsAssignableFrom(typeof(InventoryItem)))
            {
                grabInteractablePrefab = null;
                Debug.LogWarning($"The Inventory Cell Type needs a prefab of type {typeof(InventoryItem)}," +
                                 $" thank your for your comprehension.");
            }
            else if (grabInteractablePrefab != null)
            {
                item = grabInteractablePrefab as InventoryItem;
            }
        }

        private bool _visible;
        public bool visible
        {
            get => _visible;
            set
            {
                _visible = value;
                gameObject.SetActive(_visible);
            }
        }
        
        protected override void Awake()
        {
            base.Awake();
            destroyOnEmpty = false;
            spawnAtStart = false;
            autoResupply = true;
            infiniteCapacity = false;
            spawnAtStart = true;
            _currentCount = capacity;
            visible = false;
        }

        public void SetCapacity(int newCapacity) => capacity = newCapacity;

        public bool AddItem()
        {
            if (_currentCount+1 > capacity) { return false; }
            
            _currentCount++;
            // If the cell will go from empty to filled with an item
            if (_currentCount > 0 && !lastSpawnedBoundToAnchor) { SpawnItem(); }

            return true;
        }

        public int CurrentCount => _currentCount;

        public bool RemoveItem()
        {
            if (IsEmpty) { return false; }
            
            _currentCount--;
            // If the cell should be emptied
            if (lastSpawnedBoundToAnchor && _lastSpawned != null) { DestroyImmediate(_lastSpawned.gameObject); }
            CheckEmpty();
            return true;
        }
    }
}