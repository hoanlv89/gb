using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class VipView : MonoBehaviour {

	public Sprite s_0, s_1, s_2;

	Image[] imgs = new Image[5];

	// Use this for initialization
	void Start () {
		int vip = GameApplication.user.vip;
		for(int i = 0; i < 5; i++) {
			imgs[0] = transform.FindChild("Star " + i).GetComponent<Image>();
			if(2 * i + 1 < vip)
				imgs[0].sprite = s_2;
			if(2 * i + 1 == vip)
				imgs[0].sprite = s_1;
			if(2 * i + 1 > vip)
				imgs[0].sprite = s_0;
		}

	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
