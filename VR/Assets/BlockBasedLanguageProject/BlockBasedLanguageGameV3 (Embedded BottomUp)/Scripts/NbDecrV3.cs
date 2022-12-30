using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class NbDecrV3 : MonoBehaviour
{

    [SerializeField]
    public MotionBlockV3 mBlock;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "Right Base Controller")
        {
            mBlock.motionValue -= 1;
        }
    }
}
