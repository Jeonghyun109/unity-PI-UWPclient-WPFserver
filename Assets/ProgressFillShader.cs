using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProgressFillShader : MonoBehaviour
{
    [SerializeField]
    public float progressBorder;
    Color c;
    Material objectMaterial;
    Vector3 IndexTip;
    Vector3 p1;
    Vector3 p2;
    Vector3 p3;

    // Start is called before the first frame update
    void Start()
    {
        objectMaterial = GetComponent<Renderer>().material;
        progressBorder = GetComponent<MeshFilter>().mesh.bounds.size.z / 2f;
        objectMaterial.SetFloat(name: "_ProgressBorder", progressBorder);
    }
    private void Update()
    {
        IndexTip = HandTracking.indextip;
        p1 = HandTracking.point_1;
        p2 = HandTracking.point_2;
        p3 = HandTracking.point_3;

        //Debug.Log(HandTracking.indextip);
        if ((IndexTip.z >= 0.6 && IndexTip.z <= 0.8) && (IndexTip.x >= 0.1 && IndexTip.x <= 0.3 && IndexTip.y >= -0.1 && IndexTip.y <= 0.1))
        {
            if ((p1.z >= 0.6 && p1.z <= 0.62) && (p1.x >= 0.1 && p1.x <= 0.3 && p1.y >= -0.1 && p1.y <= 0.1)) // 첫째 마디 들어옴
            {
                c = Color.red;   // one click
            }
            else if ((p2.z >= 0.6 && p2.z <= 0.62) && (p2.x >= 0.1 && p2.x <= 0.3 && p2.y >= -0.1 && p2.y <= 0.1))
            {
                c = Color.green;
            }
            else if ((p3.z >= 0.6 && p3.z <= 0.62) && (p3.x >= 0.1 && p3.x <= 0.3 && p3.y >= -0.1 && p3.y <= 0.1))
            {
                c = Color.blue;
            }
            else if (p3.z > 0.62 && (p3.x >= 0.1 && p3.x <= 0.3 && p3.y >= -0.1 && p3.y <= 0.1))
            {
                c = Color.black;
            }
            progressBorder = (float)((IndexTip.z - 0.6) / 0.2 - 0.5);
        }
        else
        {
            progressBorder = (float)-0.6;
        }
        objectMaterial.SetFloat(name: "_ProgressBorder", progressBorder);
        objectMaterial.SetColor(name: "_FillColor", c);


    }
}
