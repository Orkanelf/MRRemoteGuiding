using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class keepInView : MonoBehaviour
{
    public Transform VRCamera;

    // Update is called once per frame
    void Update()
    {
        this.transform.position = VRCamera.transform.position;
    }
}
