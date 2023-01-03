using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MotionBlockV3 : BlockV3
{
    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class represents a motion block (either straight, left or right).
    */

    //motion value is used in case of a straight movement
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
        foreach (TextMeshProUGUI textm in motionValueText)
        {
            textm.text = motionValue.ToString();
        }
    }

}