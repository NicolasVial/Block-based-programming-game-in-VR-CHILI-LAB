using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundEffectsGestion : MonoBehaviour
{

    [SerializeField]
    private AudioSource tutoMusic;

    [SerializeField]
    private AudioSource inLevelMusic;

    [SerializeField]
    private AudioSource levelSelectionMusic;

    [SerializeField]
    private AudioSource doorOpenSound;

    [SerializeField]
    private AudioSource openChestSound;

    [SerializeField]
    public AudioSource actualMusic;



    void Start()
    {
        playTutoMusic(true);
    }

    public void playTutoMusic(bool play)
    {
        if (play)
        {
            actualMusic.Stop();
            tutoMusic.Play(0);
            actualMusic = tutoMusic;
        }
        else
        {
            tutoMusic.Stop();
        }
    }

    public void playinLevelMusic(bool play)
    {
        if (play)
        {
            actualMusic.Stop();
            inLevelMusic.Play(0);
            actualMusic = inLevelMusic;
        }
        else
        {
            inLevelMusic.Stop();
        }
    }

    public void playlevelSelectionMusic(bool play)
    {
        if (play)
        {
            actualMusic.Stop();
            levelSelectionMusic.Play(0);
            actualMusic = levelSelectionMusic;
        }
        else
        {
            levelSelectionMusic.Stop();
        }
    }

    public void playDoorOpenSound()
    {
        doorOpenSound.Play(0);
    }

    public void playOpenChestSound()
    {
        openChestSound.Play(0);
    }

}
