using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ToEmbeddedBottomUpCodeGameMode : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class changes the scene to go to the embedded bottomup gamemode.
    */

    [SerializeField]
    private GameObject gamemodeInterface;

    public void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "Right Base Controller" || other.gameObject.name == "Left Base Controller")
        {
            LoadScene("BlockBasedLanguageEmbeddedBottomUp");
            gamemodeInterface.SetActive(false);
        }
    }
}
