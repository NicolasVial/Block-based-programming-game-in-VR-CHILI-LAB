using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishV1 : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class is used to activate the "finish" actions whenever Bobi reaches the chest and then clean the blocks in the scenes.
    */

    [SerializeField]
    private InterpreterV1 interpreter;

    [SerializeField]
    private Animator animator;

    [SerializeField]
    private List<GameObject> toEnableOnFinish;

    [SerializeField]
    private SoundEffectsGestion sounds;

    private bool done;

    // Start is called before the first frame update
    void Start()
    {
        done = false;
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnTriggerStay(Collider other)
    {

        if (other.gameObject.name == "ROBOT" && !done && !interpreter.inMovement)
        {
            GameObject animation = this.transform.Find("enableWhenFinished").gameObject;
            animation.SetActive(true);
            done = true;
            animator.SetTrigger("openChest");

            for (int i = 0; i < toEnableOnFinish.Count; i++)
            {
                toEnableOnFinish[i].SetActive(true);
            }
            sounds.playOpenChestSound();

            //clean the scene by deleting all the blocks in the scene
            BlocksInventoryItem[] allBlocks = GameObject.FindObjectsOfType<BlocksInventoryItem>();
            foreach (BlocksInventoryItem b in allBlocks)
            {
                if (!b.inSlot)
                {
                    Destroy(b.gameObject);
                }
            }
        }
    }
}
