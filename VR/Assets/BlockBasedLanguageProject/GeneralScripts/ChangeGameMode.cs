using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class ChangeGameMode : MonoBehaviour
{

    [SerializeField]
    private InputActionReference gameModeChange = null;

    [SerializeField]
    private GameObject gamemodeInterface;

    public void Start()
    {
        gamemodeInterface.SetActive(true);
    }


    private void Awake()
    {
        gameModeChange.action.started += ChangeGameModeAction;
        gamemodeInterface.SetActive(false);
    }

    private void OnDestroy()
    {
        gameModeChange.action.started -= ChangeGameModeAction;
    }

    private void ChangeGameModeAction(InputAction.CallbackContext context)
    {
        if (gamemodeInterface.activeInHierarchy)
        {
            gamemodeInterface.SetActive(false);
        }
        else
        {
            gamemodeInterface.SetActive(true);
        }
    }
}
