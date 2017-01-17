using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class InvitePlayerBoxControl : MonoBehaviour {

	// prefab
	public RectTransform pfPlayerInviteItem;

	public RectTransform content;
	public WaitingDialog waitingDialog;
	public Button refresh, close;
	public Text status;
//	public Text title;

	// Use this for initialization
	void Start () {
		refresh.onClick.RemoveAllListeners();
		refresh.onClick.AddListener(delegate {
			send_refresh();
		});
//		title.text = Strings.instance.gameplay_invite_player;
//		refresh.GetComponent<Text>().text = Strings.instance.person_info_update;
	}

	void send_refresh ()
	{
		JSONClass data = new JSONClass();
		data["evt"] = "ivp";
		data["T"].AsInt = 0;
		data["AG"].AsInt = GameApplication.game.stake;
		GameApplication.cubeia.sendService(data);

		status.text = "";

		waitingDialog.show("");
		foreach(Transform child in content) {
			Destroy(child.gameObject);
		}
	}

	public void show(){
		send_refresh();
		gameObject.SetActive(true);
	}

	public void showPlayers (JSONArray jarr)
	{
		foreach(Transform child in content) {
			Destroy(child.gameObject);
		}

		for(int i = 0; i<jarr.Count; i++){
			RectTransform rectItem = GameObject.Instantiate(pfPlayerInviteItem) as RectTransform;
			rectItem.SetParent(content, false);

			Text name = rectItem.Find("Name").GetComponent<Text>();
			Text vip = rectItem.Find("Vip").GetComponent<Text>();
			Text gold = rectItem.Find("Gold").GetComponent<Text>();

			name.text = jarr[i]["N"];
//			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
//				vip.text = ((jarr[i]["V"].AsInt + 1) / 2) + " Khiên";
//			} else {
				vip.text = "Vip " + jarr[i]["V"].AsInt;
//			}
			gold.text = Utils.formatCurrency(jarr[i]["AG"].AsInt);

			int id = jarr[i]["Id"].AsInt;

			Button button = rectItem.GetComponent<Button>();
			button.onClick.AddListener(delegate {
				JSONClass data = new JSONClass();
				data["evt"] = "ivp";
				data["T"].AsInt = 1;
				data["OID"].AsInt = id;
				data["AG"].AsInt = GameApplication.game.stake;
				GameApplication.cubeia.sendService(data);

				Destroy(rectItem.gameObject);
			});
		}

		if(waitingDialog != null)
			waitingDialog.dismiss();

		if (jarr.Count < 1)
			status.text = Strings.instance.gameplay_no_find_player;
	}
}
