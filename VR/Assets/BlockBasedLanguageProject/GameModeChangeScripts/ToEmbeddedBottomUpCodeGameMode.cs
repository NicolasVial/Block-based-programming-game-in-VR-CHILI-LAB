using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ToEmbeddedBottomUpCodeGameMode : MonoBehaviour
{
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
