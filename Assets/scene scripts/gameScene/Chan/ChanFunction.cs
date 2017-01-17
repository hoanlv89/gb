using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class ChanFunction : MonoBehaviour {

	public RectTransform dealingPanel;
	public Button btnBoc, btnAn, btnDanh, btnDuoi, btnChiu, btnHuyChiu;

	public GameObject xuongu_panel;
	public GameObject xuongu_dialog;
	public RectTransform cuoc_content;
	public RectTransform pfCuocUItem;
	public Button btntdxuong, btnxuong;
	public Text tvcuoc;

	private CardChan _selectedCard;
	public CardChan selectedCard {
		get {
			return _selectedCard;
		}
		set {
			_selectedCard = value;
		}
	}
	public JSONClass chiuObject;

	// Use this for initialization
	void Start () {
		btnBoc.onClick.AddListener(delegate {
			JSONClass obj = new JSONClass();
			obj["evt"] = "bc";
			GameApplication.cubeia.sendDataGame(obj);
		});
		btnAn.onClick.AddListener(delegate {
			if (selectedCard != null){
				JSONClass obj = new JSONClass();
				obj["evt"] = "ac";
				obj["C"].AsInt = selectedCard.code;
				GameApplication.cubeia.sendDataGame(obj);
			} else {
				((GameScene)SuperScene.instance).showServerNotification("Hãy chọn một cây bài trên bộ bài của bạn.");
			}

		});
		btnDanh.onClick.AddListener(delegate {
			if (selectedCard != null){
				JSONClass obj = new JSONClass();
				obj["evt"] = "dc";
				obj["C"].AsInt = selectedCard.code;
				GameApplication.cubeia.sendDataGame(obj);
			}
		});
		btnDuoi.onClick.AddListener(delegate {
			JSONClass obj = new JSONClass();
			obj["evt"] = "np";
			GameApplication.cubeia.sendDataGame(obj);
		});
		btnChiu.onClick.AddListener(delegate {
			if(chiuObject != null)
				GameApplication.cubeia.sendDataGame(chiuObject);
			chiuObject = null;
		});
		btnHuyChiu.onClick.AddListener(delegate {
			JSONClass obj = new JSONClass();
			obj["evt"] = "ccc";
			GameApplication.cubeia.sendDataGame(obj);
		});

	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void showChanFuntionsOnTurn(int type)
	{
		btnBoc.gameObject.SetActive(false);
		btnAn.gameObject.SetActive(false);
		btnDanh.gameObject.SetActive(false);
		btnDuoi.gameObject.SetActive(false);
		btnChiu.gameObject.SetActive(false);
		btnHuyChiu.gameObject.SetActive(false);

		if(GameApplication.game.state.Equals(Game.State.VIEWING)){
			return;
		}

		//type == 1: show 1 chuc nang danh bai
		gameObject.SetActive(true);

//		Debug.LogError("showChanFuntionsOnTurn type: " + type);

		if(type == 1){
			btnBoc.gameObject.SetActive(true);
			btnAn.gameObject.SetActive(true);
		}
		if(type == 2){
			btnDanh.gameObject.SetActive(true);
		}
		if(type == 3){
			btnAn.gameObject.SetActive(true);
			btnDuoi.gameObject.SetActive(true);
		}
		if(type == 4){
			btnChiu.gameObject.SetActive(true);
			btnHuyChiu.gameObject.SetActive(true);
		}
		
	}
	
	public void hideTaLaOnTurnFuntions(bool onFinish = false)
	{
		btnBoc.gameObject.SetActive(false);
		btnAn.gameObject.SetActive(false);
		btnDanh.gameObject.SetActive(false);
		btnDuoi.gameObject.SetActive(false);
		btnChiu.gameObject.SetActive(false);
		btnHuyChiu.gameObject.SetActive(false);
	}
}
