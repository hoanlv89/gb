using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using com.cubeia.firebase.io.protocol;

public class JoinTableDialog : MonoBehaviour
{

	public InputField input;
	public Text placeHolder, textButtonjoin;
	public Button btnJoin, close;

	// Use this for initialization
	// tesst cai nao
	void Start ()
	{
		placeHolder.text = Strings.instance.lobby_dialog_join_table_placeholder;
		textButtonjoin.text = Strings.instance.lobby_dialog_join_table_join;

		close.onClick.AddListener (delegate {
			gameObject.SetActive (false);
		});

		btnJoin.onClick.AddListener (delegate {
			sendJoinTable ();
		});
	}

	public void sendJoinTable ()
	{
		string strin = input.text;
		if (strin.Length < 1 || strin.Length > 7) {
			gameObject.SetActive (false);
			return;
		}
		int id = 0;
		if (int.TryParse (strin, out id)) {
			if (id > 0) {
				GameApplication.cubeia.sendJoinTable (id);
				DSTFBEvent.LogAppEvent(DSTFBEvent.UnityGameTableClick, (float)1f, DSTFBEvent.defaultParams);
			}
		}

	}
}
