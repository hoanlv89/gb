using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BindCircle : MonoBehaviour 
{
    [SerializeField]
    Color start;
    [SerializeField]
    Color end;

    [SerializeField]
    Image Circle;

    Scrollbar scrollbar { get { return GetComponent<Scrollbar>(); } }

	void Start(){
		Shader shader = Shader.Find("Custom/CircleShader");
		Circle.material = new Material(shader);
	}

	// Update is called once per frame
	void Update () 
    {
        Circle.material.SetFloat("_Angle", Mathf.Lerp(-3.14f, 3.14f, scrollbar.value));
        Circle.material.SetColor("_Color", Color.Lerp(start, end, scrollbar.value));
	}
}
