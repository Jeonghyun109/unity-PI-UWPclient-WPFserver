using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PokingInteraction : MonoBehaviour
{
    private Transform camTr;
    private Transform tr;

    // Start is called before the first frame update
    void Start()
    {
        camTr = Camera.main.transform;
        tr = transform;
    }

    // Update is called once per frame
    void LateUpdate()
    {
        tr.LookAt(camTr.position);
    }
}
