using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SpriteLobbyTL : MonoBehaviour
{
	public Image header;
	public Image header_one;
	public Image back;
	public Image bg_money;
	public Image napgold;
	public Image header_two;
	public Image bank;
	public Image rank;
	public Image setting;
	
	public Image footer;
	public Image footer_one;
	public Image doithuong;
	public Image chat;
	public Image listRoom;
	public Image footer_two;
	public Image taoban;
	public Image choingay;
	
	public Sprite s_header;
	public Sprite s_header_one;
	public Sprite s_back;
	public Sprite s_bg_money;
	public Sprite s_napgold;
	public Sprite s_header_two;
	public Sprite s_bank;
	public Sprite s_rank;
	public Sprite s_setting;
	
	public Sprite s_footer;
	public Sprite s_footer_one;
	public Sprite s_doithuong;
	public Sprite s_chat;
	public Sprite s_listRoom;
	public Sprite s_footer_two;
	public Sprite s_taoban;
	public Sprite s_choingay;
	
	public Sprite s_header_xd;
	public Sprite s_header_one_xd;
	public Sprite s_back_xd;
	public Sprite s_bg_money_xd;
	public Sprite s_napgold_xd;
	public Sprite s_header_two_xd;
	public Sprite s_bank_xd;
	public Sprite s_rank_xd;
	public Sprite s_setting_xd;
	
	public Sprite s_footer_xd;
	public Sprite s_footer_one_xd;
	public Sprite s_doithuong_xd;
	public Sprite s_chat_xd;
	public Sprite s_listRoom_xd;
	public Sprite s_footer_two_xd;
	public Sprite s_taoban_xd;
	public Sprite s_choingay_xd;
	// Use this for initialization
	
	public Sprite s_bg_moneyTL;
	public Sprite s_bg_napGoldTL;
	// Use this for initialization
	void Start ()
	{
		init ();
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void init(){
		if(GameApplication.cubeia == null)
			return;
		bg_money.GetComponent<Image>().sprite=s_bg_moneyTL;
		napgold.GetComponent<Image>().sprite=s_bg_napGoldTL;
	}
}

