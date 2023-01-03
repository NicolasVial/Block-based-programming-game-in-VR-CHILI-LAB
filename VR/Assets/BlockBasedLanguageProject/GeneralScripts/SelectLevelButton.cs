using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectLevelButton : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class represent a button to select a specific level in the game.
    */

    [SerializeField]
    private LevelSelected lvlSelected;

    [SerializeField]
    private GameObject myLvl;

    [SerializeField]
    private Transform StartLvlAnchor;

    [SerializeField]
    private GameObject player;


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "Right Base Controller")
        {
            lvlSelected.levelSelected.SetActive(false);
            myLvl.SetActive(true);
            lvlSelected.levelSelected = myLvl;
            player.transform.position = StartLvlAnchor.position;
            player.transform.eulerAngles = StartLvlAnchor.eulerAngles;
        }
            
    }
}
