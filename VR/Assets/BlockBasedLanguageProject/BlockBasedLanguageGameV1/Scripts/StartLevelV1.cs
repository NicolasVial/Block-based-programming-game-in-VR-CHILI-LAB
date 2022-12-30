using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartLevelV1 : MonoBehaviour
{
    [SerializeField]
    private Door door;

    [SerializeField]
    private Transform startAnchor;

    [SerializeField]
    private GameObject robot;

    [SerializeField]
    private GameStartListenerV1 startListener;

    [SerializeField]
    private SoundEffectsGestion sounds;

    [SerializeField]
    private bool inTuto;

    [SerializeField]
    private List<BlocksInventorySlot> slotsToEnableOnStart;

    [SerializeField]
    private List<int> nbMaxBlocks;

    public bool done;

    void Start()
    {
        done = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "Right Base Controller" && !done)
        {

            if (!inTuto)
            {

                sounds.playinLevelMusic(true);
            }
            startListener.startTransform = startAnchor;
            robot.transform.position = startAnchor.position;
            robot.transform.eulerAngles = startAnchor.eulerAngles;
            door.start = true;
            done = true;

        }

        for (int i = 0; i < nbMaxBlocks.Count; ++i)
        {
            slotsToEnableOnStart[i].gameObject.SetActive(true);
            slotsToEnableOnStart[i].nbMax = nbMaxBlocks[i];
            if (slotsToEnableOnStart[i].nbMax == 0)
            {
                slotsToEnableOnStart[i].gameObject.SetActive(false);
            }
        }
    }
}
