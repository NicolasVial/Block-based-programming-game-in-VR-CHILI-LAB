using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishV3 : MonoBehaviour
{
    [SerializeField]
    private InterpreterV3 interpreter;

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
