using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using Utils;

namespace InitializationSequence
{
    public class FocusedTeleportationArea : BaseTeleportationInteractable
    {
        private Optional<SynchronizedTable> table = Optional<SynchronizedTable>.Empty();
        
        protected override void Awake()
        {
            base.Awake();
            table = Optional<SynchronizedTable>.OfNullable(FindObjectOfType<SynchronizedTable>());
        }

        /// <inheritdoc />
        protected override bool GenerateTeleportRequest(IXRInteractor interactor, RaycastHit raycastHit, ref TeleportRequest teleportRequest)
        {
            if (raycastHit.collider == null)
                return false;

            if (table.IsPresent)
            {
                Vector3 position = transform.position;
                teleportRequest.destinationPosition = raycastHit.point;
                teleportRequest.destinationRotation = Quaternion.LookRotation(table.Get.centerOfGravity - position);
            }
            return true;
        }
    }
}