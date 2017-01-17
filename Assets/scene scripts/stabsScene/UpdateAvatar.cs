using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UpdateAvatar : MonoBehaviour {
	public Image avatar;
	public RectTransform name;
	public RectTransform gold;
	void Start(){
		avatar.sprite = GameApplication.user.avatarSprite;
		name.GetComponent<Text>().text = GameApplication.user.name;
		gold.GetComponent<Text>().text = Utils.formatNumber(GameApplication.user.ag).ToString();
	}	
}
