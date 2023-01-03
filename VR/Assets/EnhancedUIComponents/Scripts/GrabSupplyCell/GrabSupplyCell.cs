using System;
using System.Collections;
using MyBox;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngineInternal;

namespace VRAppBase.EnhancedUIComponents.Scripts
{
    [RequireComponent(typeof(GrabSupplyCellMoveAnimation), typeof(GrabSupplyCellRotationAnimation))]
    public class GrabSupplyCell : MonoBehaviour
    {
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       PROPERTIES                                     ||
// ||                                                                                      ||
// \\======================================================================================//
        
        [SerializeField, Tooltip("When set to false, the SpawnItem method will need to be called")] protected bool spawnAtStart;
        [SerializeField, Tooltip("The scale the item has while being in the cell")] protected Vector3 inCellScale;
        [SerializeField, Tooltip("The scale the item has while being out of the cell")] protected Vector3 outCellScale;
        [SerializeField, Tooltip("True if the item should have its gravity enabled on unbound")] protected bool enableGravityOnLeave;
        [SerializeField, Tooltip("If a new item appears when the first is collected")] protected bool autoResupply;
        [SerializeField, Tooltip("If the capacity should be infinite"), ConditionalField("autoResupply")] protected bool infiniteCapacity;
        [SerializeField, Tooltip("After the <capacity> items are collected, no more will be supplied"), ConditionalField("infiniteCapacity", true)] protected int capacity = 10;
        [SerializeField, Tooltip("Destroy the object once it is empty")] protected bool destroyOnEmpty;
        [SerializeField, Tooltip("The actual object to spawn")] protected AnchoredGrabInteractable grabInteractablePrefab;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        protected virtual void OnValidate() => RecomputeGraphics();

        protected int _currentCount { get; set; } = 0;
        private Transform _cachedTransform;
        private Image _image;

        private GrabSupplyCellMoveAnimation _cellMoveAnimation;
        private GrabSupplyCellRotationAnimation _cellRotationAnimation;
        private ParticleSystem _particleSystem;
        
        protected AnchoredGrabInteractable _lastSpawned { get; private set; }
        protected bool lastSpawnedBoundToAnchor;

        public event Action CellEmptied;
        public bool IsEmpty => _currentCount == 0;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        protected virtual void Awake()
        {
            _cachedTransform = transform;
            
            _cellMoveAnimation = GetComponent<GrabSupplyCellMoveAnimation>();
            _cellMoveAnimation.InCellScale = inCellScale;

            _cellRotationAnimation = GetComponent<GrabSupplyCellRotationAnimation>();

            _particleSystem = GetComponentInChildren<ParticleSystem>();
            
            RecomputeGraphics();
        }

        ///<summary>Spawn an item at start if needed</summary>
        protected virtual void Start()
        {
            _currentCount = capacity;
            
            if (spawnAtStart) { SpawnItem(); }
            else { ToggleParticleSystem(false); }
        }
        
        private void RecomputeGraphics()
        {
            _image = GetComponentInChildren<Image>(true);
        }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       SPAWN                                          ||
// ||                                                                                      ||
// \\======================================================================================//

        ///<summary>Spawns an item in the cell</summary>
        public void SpawnItem()
        {
            if (!lastSpawnedBoundToAnchor)
            {
                Transform cachedTransform = transform;
                _lastSpawned = Instantiate(
                    grabInteractablePrefab, 
                    cachedTransform.position,
                    Quaternion.LookRotation(cachedTransform.forward),
                    _cachedTransform
                );
                _lastSpawned.transform.localScale = inCellScale;
                
                _lastSpawned.AnchorUnbound += OnItemUnbound;
                _lastSpawned.AnchorLeft += OnItemLeave;
                _lastSpawned.AnchorEnter += OnItemReEnter;
                lastSpawnedBoundToAnchor = true;

                ToggleParticleSystem(true);
                ToggleGravityOnLastSpawned(false);
                
                _cellRotationAnimation.Animate(_lastSpawned.transform);
            }
            else { Debug.LogWarning("Tried to spawn an item when the last one is still linked to the anchor"); }
        }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       EVENTS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        ///<summary>The last spawned item leaving the cell</summary>
        private void OnItemLeave(AnchoredGrabInteractable interactable)
        {
            ToggleGravityOnLastSpawned(enableGravityOnLeave);
            ToggleParticleSystem(false);
            
            // Reset parent so it doesn't move along with the inventory
            _lastSpawned.transform.SetParent(_lastSpawned.GetParentOnceDetached());
            
            _cellRotationAnimation.StopAnimation();
            _lastSpawned.transform.localScale = outCellScale;
        }

        ///<summary>The last spawned item or an item spawned earlier re-entering the cell</summary>
        private void OnItemReEnter(AnchoredGrabInteractable interactable)
        {
            ToggleGravityOnLastSpawned(false);

            if (interactable != _lastSpawned)
            {
                bool wasEmpty = IsEmpty;
                // Such a situation means that the item must have been unbound
                
                // If an item re-enters then add the count
                _currentCount++;

                if (!wasEmpty || !ShouldRespawnItem())
                {
                    interactable.AnchorUnbound -= OnItemUnbound;
                    interactable.AnchorLeft -= OnItemLeave;
                    interactable.AnchorEnter -= OnItemReEnter;
                    
                    if (gameObject.activeSelf) { _cellMoveAnimation.Animate(interactable.transform, true); }
                    else { DestroyImmediate(interactable.gameObject); }

                    return;
                }
                
                // TODO DOUBLE-CHECK THIS CODE WHICH WAS WRITTEN IN A HURRY
                _lastSpawned = interactable;
                lastSpawnedBoundToAnchor = true;
                interactable.AnchorUnbound += OnItemUnbound;
                interactable.AnchorLeft += OnItemLeave;

                _lastSpawned.transform.SetParent(_cachedTransform);
                
                _cellMoveAnimation.Animate(interactable.transform, false);
                StartCoroutine(AnimateReEnter());
            }
            else
            {
                // Do this because lastSpawned may have been unbound and thus
                // not its events aren't listened to anymore
                if (!lastSpawnedBoundToAnchor)
                {
                    interactable.AnchorUnbound += OnItemUnbound;
                    interactable.AnchorLeft += OnItemLeave;
                    _currentCount++;
                    // The last spawned is now bound to the anchor again
                    lastSpawnedBoundToAnchor = true;
                }
                
                // Reset parent to this object so it moves with the inventory
                _lastSpawned.transform.SetParent(_cachedTransform);

                if (gameObject.activeSelf)
                {
                    _cellMoveAnimation.Animate(interactable.transform, false);
                    StartCoroutine(AnimateReEnter());
                }
                else
                {
                    // The game object is disabled and hence we cannot animate
                    Transform interactableTransform = interactable.transform;
                    
                    interactableTransform.position = _cachedTransform.position;
                    interactableTransform.localScale = inCellScale;
                    
                    // Activates particles back
                    ToggleParticleSystem(true);
                
                    _cellRotationAnimation.Animate(_lastSpawned.transform);
                }
            }
        }

        ///<summary>Animate the last spawned item re-entering the cell</summary>
        private IEnumerator AnimateReEnter()
        {
            // Wait for move animation to finish
            yield return new WaitForSeconds(_cellMoveAnimation.animationTimeSec);

            // Activates particles back
            ToggleParticleSystem(true);
                
            _cellRotationAnimation.Animate(_lastSpawned.transform);
        }
        
        ///<summary>When the lastSpawned item is unbound from the anchor</summary>
        private void OnItemUnbound(AnchoredGrabInteractable interactable)
        {
            // Do not unregister the anchor enter because it could re-register
            _lastSpawned.AnchorUnbound -= OnItemUnbound;
            _lastSpawned.AnchorLeft -= OnItemLeave;

            lastSpawnedBoundToAnchor = false;

            // An item just left the cell (was consumed), decrease the count
            _currentCount--;
            // Check if the cell is now empty
            CheckEmpty();

            // Check if the item should be respawned immediately
            if (ShouldRespawnItem()) { SpawnItem(); }
        }
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       UTILITY FUNCTIONS                              ||
// ||                                                                                      ||
// \\======================================================================================//

        ///<summary>If the cell becomes empty</summary>
        protected void CheckEmpty()
        {
            if (_currentCount > 0) { return; }
        
            CellEmptied?.Invoke();
            if (destroyOnEmpty) { DestroyImmediate(gameObject); }
        }

        ///<summary>Activate/Deactivate the attached particle system</summary>
        private void ToggleParticleSystem(bool activate)
        {
            if (!_particleSystem.isStopped && !activate) { _particleSystem.Stop(); }
            if (!_particleSystem.isPlaying && activate) { _particleSystem.Play(); }
            
            _particleSystem.gameObject.SetActive(activate);
        }
        
        ///<summary>Activate/Deactivate the gravity on the object</summary>
        private void ToggleGravityOnLastSpawned(bool useGravity)
        {
            Rigidbody lastSpawnedRigidBody = _lastSpawned.GetComponent<Rigidbody>();
            lastSpawnedRigidBody.useGravity = useGravity;
            lastSpawnedRigidBody.isKinematic = !useGravity;
        }
        
        ///<summary>True if the cell should respawn an item given its specifications</summary>
        private bool ShouldRespawnItem()
        {
            if (!autoResupply) { return false; }
            if (infiniteCapacity) { return true; }
            if (_currentCount <= 0) { return false; }

            return true;
        }
    }
}