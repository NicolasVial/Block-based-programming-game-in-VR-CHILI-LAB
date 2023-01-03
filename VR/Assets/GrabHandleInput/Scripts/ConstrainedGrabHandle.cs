using System;
using UnityEngine;
using static UnityEngine.Mathf;
using UnityEngine.XR.Interaction.Toolkit;

namespace CHILI.Simulation
{
    ///<summary>Will be use for the door handle, and the two command handles inside
    /// the forklift</summary>
    [RequireComponent(typeof(GrabHandleValueAdapter))]
    public class ConstrainedGrabHandle : XRGrabInteractable
    {
        
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        // Base : https://github.com/Lynoxe/First_XR_Project_Master/blob/main/First%20XR%20Project/Assets/WheelInteractable.cs
        private Transform cachedTransform;
        private Transform attachedTransform;
        
        private bool constrainX;
        private bool constrainY;
        private bool constrainZ;

        [Header("Handle Settings")]
        [SerializeField] private Transform anchor;
        [SerializeField] private bool negateXAxis;
        [SerializeField] [Range(-180f, 0f)] private float minRotationDeg;
        [SerializeField] [Range(0, 180f)] private float maxRotationDeg;
        
        private float initialHandleRotation;
        private float lastFrameInteractorAngle;
        private Vector3 rightDirectionRef;
        private IXRSelectInteractor currentInteractor;
        
        private Vector3 _targetRotation;

        public float MaxRotationDeg => maxRotationDeg;
        public float MinRotationDeg => minRotationDeg;
        public float RotationDeg { private set; get; }
        public Transform Anchor => anchor;

        private Rigidbody cachedRigidBody;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        protected override void Awake()
        {
            base.Awake();
            trackPosition = false;
            trackRotation = true;
            cachedTransform = transform;

            cachedRigidBody = GetComponent<Rigidbody>();
            cachedRigidBody.useGravity = false;
            cachedRigidBody.isKinematic = true;
            
            rightDirectionRef = negateXAxis ? -anchor.right : anchor.right;
            initialHandleRotation = anchor.localEulerAngles.z;
        }

        public override void ProcessInteractable(XRInteractionUpdateOrder.UpdatePhase updatePhase)
        {
            base.ProcessInteractable(updatePhase);
            switch (updatePhase)
            {
                case XRInteractionUpdateOrder.UpdatePhase.Dynamic: 
                {
                    if (!isSelected) { break;}
                    
                    var interactor = interactorsSelecting[0];
                    UpdateTarget(interactor);
                    UpdateRotation();
                    
                    break;
                }

                case XRInteractionUpdateOrder.UpdatePhase.OnBeforeRender:
                {
                    if (!isSelected) { break;}
                    
                    var interactor = interactorsSelecting[0];
                    UpdateTarget(interactor);
                    UpdateRotation();

                    break;
                }
            }
        }

        protected override void OnSelectEntering(SelectEnterEventArgs args)
        {
            base.OnSelectEntering(args);
            
            if (currentInteractor != null) return;

            currentInteractor = args.interactorObject;
            _targetRotation = anchor.localEulerAngles;

            var handPosition = args.interactorObject.transform.position;
            var localHandPos = handPosition - anchor.position;
            var _initialInteractorAngle = Vector3.SignedAngle(rightDirectionRef, localHandPos, anchor.forward);
            lastFrameInteractorAngle = _initialInteractorAngle;
            Debug.Log($"Init Angle = {lastFrameInteractorAngle}");
        }

        /// <inheritdoc />
        protected override void OnSelectExited(SelectExitEventArgs args)
        {
            base.OnSelectExited(args);

            currentInteractor = null;
        }
        
        void UpdateRotation()
        {
            anchor.localRotation = Quaternion.Euler(_targetRotation);
        }

        void UpdateTarget(IXRInteractor interactor)
        {
            var handPosition = interactor.transform.position;
            var localHandPos = handPosition - anchor.position;
            var signedAngle = Vector3.SignedAngle(rightDirectionRef, localHandPos, anchor.forward);

            var angle = signedAngle;
            if(Abs(Sign(angle) - Sign(lastFrameInteractorAngle)) < 0.0001)
            {
                if (lastFrameInteractorAngle < 0) { lastFrameInteractorAngle += 360; }
            }

            float zRotOffset = angle - lastFrameInteractorAngle;

            float nextZRot = _targetRotation.z + zRotOffset;
            float comparisonZRot = nextZRot;
            
            if (nextZRot > 180) { comparisonZRot = nextZRot - 360; }
            else if (nextZRot < -180) { comparisonZRot = nextZRot + 360; }

            if (comparisonZRot >= initialHandleRotation + minRotationDeg &&
                comparisonZRot <= initialHandleRotation + maxRotationDeg)
            {
                Vector3 anchorEulerAngles = anchor.eulerAngles;
                _targetRotation = new Vector3(anchorEulerAngles.x, anchorEulerAngles.y, nextZRot);
                RotationDeg = nextZRot;
            }
            
            lastFrameInteractorAngle = signedAngle;
            Debug.Log($"Angle = {lastFrameInteractorAngle}");

        }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       GIZMOS                                         ||
// ||                                                                                      ||
// \\======================================================================================//
        
        private void OnDrawGizmosSelected()
        {
            if (ReferenceEquals(anchor, null)) { return; }
            
            Gizmos.color = Color.red;

            var maxRotationOffsetRad = maxRotationDeg * Deg2Rad;
            var minRotationOffsetRad = minRotationDeg * Deg2Rad;

            Vector3 anchorPosition = anchor.position;

            Vector3 up = anchor.up;
            Vector3 forward = anchor.forward;
            
            Ray negDir = new Ray(anchorPosition, Quaternion.AngleAxis(minRotationDeg, forward) * up);
            Ray posDir = new Ray(anchorPosition, Quaternion.AngleAxis(maxRotationDeg, forward) * up);

            Gizmos.DrawRay(negDir);
            Gizmos.DrawRay(posDir);
            // Gizmos.DrawRay(anchorPosition, );
        }
    }
}