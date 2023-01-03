using System;
using System.Collections.Generic;
using System.Linq;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit.Inputs;
using VRAppBase.Utils;
using Application = UnityEngine.Application;

namespace InitializationSequence
{
    //TODO: fix errors related to OVR when cloning in a blank project
    [RequireComponent(typeof(MeshRenderer))]
    [RequireComponent(typeof(MeshFilter))]
    public class InitializationSequenceHandler : Singleton<InitializationSequenceHandler>
    {
// //======================================================================================\\
// ||                                                                                      ||
// ||                                       FIELDS                                         ||
// ||                                                                                      ||
// \\======================================================================================//

        [Header("Reference points")]
        private readonly List<ReferencePoint> initializedReferencePoints = new ();
        private readonly List<ReferencePoint> initializedShadowPoints = new ();
        [SerializeField][Tooltip("The prefab for a reference point")] private ReferencePoint referencePointPrefab;

        [SerializeField]
        [Tooltip("The height offset at which the reference point will spawn compared to the " +
                 "controller's position")]
        private float heightOffset;
        
        [Header("Controller")]
        [SerializeField]
        InputActionProperty mTriggerInput;
        [SerializeField] private InputActionProperty triggerInput
        {
            get => mTriggerInput;
            set => SetInputActionProperty(ref mTriggerInput, value);
        }
        
        [SerializeField]
        InputActionProperty mClearInput;
        [SerializeField] private InputActionProperty clearInput
        {
            get => mClearInput;
            set => SetInputActionProperty(ref mClearInput, value);
        }
        
        [SerializeField]
        InputActionProperty mConfirmInput;
        [SerializeField] private InputActionProperty confirmInput
        {
            get => mConfirmInput;
            set => SetInputActionProperty(ref mConfirmInput, value);
        }
        [SerializeField][Tooltip("The transform of the same controller")] private Transform defaultControllerTransform;

        ///<summary>The trigger input will create a point for the table</summary>
        [Header("OVR Controller")]
        [SerializeField] private OVRInput.RawButton triggerControl;
        ///<summary>The clear input will clear all points created until now</summary>
        [SerializeField] private OVRInput.RawButton clearControl;
        ///<summary>Confirm all points created until now</summary>
        [SerializeField] private OVRInput.RawButton confirmControl;
        ///<summary>The transform of the right hand controller</summary>
        [SerializeField] private Transform ovrControllerTransform;
        
#if UNITY_EDITOR
        ///<summary>The scene which will get load once the mesh is confirmed</summary>
        [Header("Scene Management")]
        [SerializeField] private UnityEditor.SceneAsset nextScene;

        private void OnValidate()
        {
            if (nextScene != null) { nextSceneName = nextScene.name; }
        }
#endif
        [SerializeField] private string nextSceneName;

        private Transform cachedTransform;
        private Transform controllerTransform;

        private const float BtnDebounceTimeSec = 0.5f;

        private bool ovrTriggerWasPressed;
        private float lastTriggerPress;
        private bool ovrClearWasPressed;
        private float lastClearPress;
        private bool ovrConfirmWasPressed;
        private float lastConfirmPress;

        ///<summary>The last point of the mesh which was spawned, used to keep control of it</summary>
        private ReferencePoint lastSpawnedPoint;
        private SynchronizedTable synchronizedTable;

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       LIFECYCLE                                      ||
// ||                                                                                      ||
// \\======================================================================================//

        private void Awake()
        {
            DontDestroyOnLoad(transform.root);
            synchronizedTable = FindObjectOfType<SynchronizedTable>();
            cachedTransform = transform;

            // The XR controls for the interaction toolkit and the oculus headset
            XROrigin xrOrigin = FindObjectOfType<XROrigin>();
            OVRCameraRig ovrCameraRig = FindObjectOfType<OVRCameraRig>();
            
            // Disable the controllers which are irrelevant
            if (Util.IsOculusQuest2Headset()) { xrOrigin.gameObject.SetActive(false); }
            else { ovrCameraRig.gameObject.SetActive(false); }
            
            controllerTransform = Util.IsOculusQuest2Headset() ? ovrControllerTransform : defaultControllerTransform;
        }

        private void OnEnable()
        {
            if (!Util.IsOculusQuest2Headset())
            {
                triggerInput.action.performed += OnTriggerAction;
                clearInput.action.performed += OnClearAction;
                confirmInput.action.performed += OnConfirmAction;
            }
        }

        private void OnDisable()
        {
            if (!Util.IsOculusQuest2Headset())
            {
                triggerInput.action.performed -= OnTriggerAction;
                clearInput.action.performed -= OnClearAction;
                confirmInput.action.performed -= OnConfirmAction;

            }
        }

        private void Update()
        {
            // Check for the oculus controls if the oculus headset is used
            if (!Util.IsOculusQuest2Headset()) { return; }
            
            bool ovrTriggerIsPressed = OVRInput.Get(triggerControl);
            bool ovrClearIsPressed = OVRInput.Get(clearControl);
            bool ovrConfirmIsPressed = OVRInput.Get(confirmControl);
            
            // Test for trigger input
            if (ovrTriggerIsPressed && !ovrTriggerWasPressed && Time.time - lastTriggerPress > BtnDebounceTimeSec)
            {
                lastTriggerPress = Time.time;
                TriggerPressed();
            }

            // Test for clear input
            if (ovrClearIsPressed && !ovrClearWasPressed && Time.time - lastClearPress > BtnDebounceTimeSec)
            {
                lastClearPress = Time.time;
                ClearPressed();
            }
            
            // Test for clear input
            if (ovrConfirmIsPressed && !ovrConfirmWasPressed && Time.time - lastConfirmPress > BtnDebounceTimeSec)
            {
                lastConfirmPress = Time.time;
                ConfirmPressed();
            }
            
            // Once the button is held, move the point along the player's controller movement
            if (ovrTriggerIsPressed && initializedReferencePoints.Count != 0)
            {
                Vector3 controllerPosition = controllerTransform.position;
                lastSpawnedPoint.transform.position = new Vector3(
                    controllerPosition.x,
                    lastSpawnedPoint.y,
                    controllerPosition.z);
            }

            // Once the button is released, confirm the position of the point
            if (!ovrTriggerIsPressed && ovrTriggerWasPressed) { ConfirmLastPoint(); }

            ovrTriggerWasPressed = ovrTriggerIsPressed;
            ovrClearWasPressed = ovrClearIsPressed;
            ovrConfirmWasPressed = ovrConfirmIsPressed;
        }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       CONTROLS                                       ||
// ||                                                                                      ||
// \\======================================================================================//

        ///<summary>Triggered when the clear input is pressed, clears all the mesh created until then</summary>
        private void ClearPressed()
        {
            Debug.Log("Clear");
            // Destroy all created points
            foreach (ReferencePoint point in initializedReferencePoints
                         .Where(_ => !_.isInHull)) { DestroyImmediate(point.gameObject); }
            
            // Clear all lists
            initializedReferencePoints.Clear();
            initializedShadowPoints.Clear();
            
            // Clear the table
            synchronizedTable.Clear();
        }
        
        /// <summary>
        /// Called when the trigger is pressed, spawns a new point
        /// </summary>
        private void TriggerPressed()
        {
            Debug.Log("Point spawn");
            // The position to spawn to the point to, the controller's position if
            // it is the first point spawned or readjusted to the first spawned point's height otherwise
            Vector3 position = new Vector3(
                controllerTransform.position.x,
                initializedReferencePoints.Count == 0
                    ? controllerTransform.position.y - heightOffset
                    : initializedReferencePoints[0].y,
                controllerTransform.position.z);
            
            // Creates the point
            ReferencePoint newPoint = Instantiate(
                referencePointPrefab,
                position,
                Quaternion.Euler(0, 0, 0),
                cachedTransform);
            
            // Add the newly created point to the list of all points created until then,
            // and registers it as the last spawned point
            lastSpawnedPoint = newPoint;
            initializedReferencePoints.Add(newPoint);

            // If the trigger input was pressed and and another headset than the oculus is used, confirm the point immediately
            // since the user cannot see accurately where they are placing the point
            if (!Util.IsOculusQuest2Headset()) { ConfirmLastPoint(); }
        }

        private void ConfirmPressed() => ConfirmTableConstruction();

        /// <summary>
        /// Confirms the last point placed, which recomputes the table mesh
        /// </summary>
        private void ConfirmLastPoint()
        {
            Debug.Log("Point confirm");
            lastSpawnedPoint.Confirm();
            
            // Computes the convex hull of the cloud of points
            List<ReferencePoint> convexHull = ConvexHullAlgorithm.Apply(initializedReferencePoints);
            // Mark each of the points present in the hull as such and index them in an arbitrary fashion
            initializedReferencePoints.ForEach(_ => _.isInHull = false);
            // Update indices and hull indicator
            for (int i = 0; i < convexHull.Count; i++) { convexHull[i].Index = i; convexHull[i].isInHull = true; }

            // Destroy all shadow points
            foreach (ReferencePoint point in initializedShadowPoints) { DestroyImmediate(point.gameObject); }
            initializedShadowPoints.Clear();
            // Instantiate as mush shadow points as there is in the convex hull
            for (int i = 0; i < convexHull.Count; i++) { initializedShadowPoints.Add(Instantiate(referencePointPrefab, cachedTransform)); }
            
            // Edit the mesh fo the table
            synchronizedTable.EditMesh(newBasePoints: convexHull, newShadowPoints: initializedShadowPoints);
        }

        /// <summary>
        /// Confirms the construction of the table, making it non-editable
        /// </summary>
        private void ConfirmTableConstruction()
        {
            bool tableConfirmed;
            string errorMessage;
            try
            {
                // Can throw exception
                synchronizedTable.ConfirmMesh();
                tableConfirmed = true;
            }
            catch (InvalidOperationException e)
            {
                tableConfirmed = false;
                errorMessage = e.Message;
            }

            if (tableConfirmed)
            {
                foreach (ReferencePoint point in initializedShadowPoints) { point.Visible = false; }
                foreach (ReferencePoint point in initializedReferencePoints) { point.Visible = false; }
                // Disables the gameobject
                gameObject.SetActive(false);
            
                // Go to next scene
                // TODO REPLACE BY INDEPENDENT SCENE LOADER INTERFACE
                // SceneLoader.Instance.StartUnloadAndThenLoadScene(SceneManager.GetActiveScene(), nextSceneName);
            }
            else
            {
                ClearPressed();
                // TODO DISPLAY ERROR MESSAGE
            }

        }

// //======================================================================================\\
// ||                                                                                      ||
// ||                                       EVENT HANDLERS                                 ||
// ||                                                                                      ||
// \\======================================================================================//

        ///<summary>Called when an action from the clear input has been detected</summary>
        void OnClearAction(InputAction.CallbackContext ctx)
        {
            if (ctx.performed) { ClearPressed(); }
        }

        ///<summary>Called when an action from the trigger input has been detected</summary>
        void OnTriggerAction(InputAction.CallbackContext ctx)
        {
            if (ctx.performed) { TriggerPressed(); }
        }
        
        ///<summary>Called when an action from the trigger input has been detected</summary>
        void OnConfirmAction(InputAction.CallbackContext ctx)
        {
            if (ctx.performed) { ConfirmPressed(); }
        }

        
        /// <inheritdoc cref="SetInputActionProperty"/>
        void SetInputActionProperty(ref InputActionProperty property, InputActionProperty value)
        {
            if (Application.isPlaying) { property.DisableDirectAction(); }

            property = value;

            if (Application.isPlaying && isActiveAndEnabled) { property.EnableDirectAction(); }
        }
    }
}