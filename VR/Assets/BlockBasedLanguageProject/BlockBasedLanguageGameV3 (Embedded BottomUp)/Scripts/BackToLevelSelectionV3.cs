using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackToLevelSelectionV3 : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class is used to teleport the player to the level selection and to reset the level.
    */

    [SerializeField]
    private Transform LevelSelectionAnchor;

    [SerializeField]
    private StartLevelV3 startLevel;

    [SerializeField]
    private List<Door> doors;

    [SerializeField]
    private List<Vector3> doorsInitState;

    [SerializeField]
    private GameObject chestToClose;

    [SerializeField]
    private GameObject toDisable;

    [SerializeField]
    private GameObject player;

    [SerializeField]
    private SoundEffectsGestion sounds;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "Right Base Controller")
        {
            player.transform.position = LevelSelectionAnchor.position;
            sounds.playlevelSelectionMusic(true);

            startLevel.done = false;

            for(int i = 0; i < doors.Count; ++i)
            {
                doors[i].start = false;
                doors[i].gameObject.transform.eulerAngles = doorsInitState[i];
                doors[i].inMovement = false;
            }

            chestToClose.transform.eulerAngles = new Vector3(-90f, 0f, 0f);
            toDisable.SetActive(false);
        }
    }
}
