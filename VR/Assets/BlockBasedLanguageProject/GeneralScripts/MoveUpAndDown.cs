using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveUpAndDown : MonoBehaviour
{

    /*
     * Author: Nicolas Vial
     * Date: 01.01.2023
     * Summary: This class is used to move objects up and down to simulate floating.
    */

    [SerializeField]
    private Vector3 startPos;

    [SerializeField]
    private Vector3 endPos;

    [SerializeField]
    private float speed;

    private bool up;

    // Start is called before the first frame update
    void Start()
    {
        up = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (up)
        {
            this.gameObject.transform.position = new Vector3(this.gameObject.transform.position.x, this.gameObject.transform.position.y + speed * 0.01f, this.gameObject.transform.position.z);
        }
        else
        {
            this.gameObject.transform.position = new Vector3(this.gameObject.transform.position.x, this.gameObject.transform.position.y - speed * 0.01f, this.gameObject.transform.position.z);
        }

        if(this.gameObject.transform.position.y < startPos.y)
        {
            up = true;
        }
        if(endPos.y < this.gameObject.transform.position.y)
        {
            up = false;
        }
    }
}
