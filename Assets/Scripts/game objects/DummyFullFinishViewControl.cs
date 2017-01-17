using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DummyFullFinishViewControl : MonoBehaviour {

	public PlayerDumyFullFinishViewControl view1, view2, view3, view0;
	public Button Close;
	public Image curtain;
	public Sprite[] finishimgs;
	public RectTransform PF_FinishTypeImage;

	// Use this for initialization
	void Start () {
		Close.onClick.AddListener (delegate() {
			curtain.enabled = false;
		});
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
