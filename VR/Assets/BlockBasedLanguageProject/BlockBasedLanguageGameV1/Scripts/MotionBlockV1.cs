using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MotionBlockV1 : BlockV1
{

    [SerializeField]
    public int motionValue;

    [SerializeField]
    public List<TextMeshProUGUI> motionValueText;

    // Start is called before the first frame update
    void Start()
    {
        base.Start();
    }

    // Update is called once per frame
    void Update()
    {
        base.Update();
        foreach(TextMeshProUGUI textm in motionValueText){
            textm.text = motionValue.ToString();
        }    
    }

}