using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class represents a door in the game and is used to simulate the opening of the door.
    */

    [SerializeField]
    private Vector3 startAngle;

    [SerializeField]
    private BoxCollider entranceCollider;

    [SerializeField]
    private Vector3 endAngle;

    [SerializeField]
    public bool start;

    [SerializeField]
    private int rotationSpeed;

    [SerializeField]
    private SoundEffectsGestion sounds;

    public bool inMovement;
    private float startTime;
    private float distanceBetweenRot;
    private Vector3 startRot;
    private Vector3 endRot;

    // Start is called before the first frame update
    void Start()
    {
        this.gameObject.transform.eulerAngles = startAngle;
        inMovement = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (start)
        {
            //whenever inMovement is set to true, starts to open the door
            if (!inMovement)
            {
                sounds.playDoorOpenSound();
                inMovement = true;
                startTime = Time.time;
                distanceBetweenRot = Vector3.Distance(startAngle, endAngle);
                entranceCollider.enabled = false;
            }
            else
            {
                float distanceTimeRot = (Time.time - startTime) * rotationSpeed;
                float relativeTimeRot = distanceTimeRot / distanceBetweenRot;
                this.gameObject.transform.rotation = Quaternion.Lerp(Quaternion.Euler(startAngle), Quaternion.Euler(endAngle), relativeTimeRot);
            }
            
        }
    }
}
