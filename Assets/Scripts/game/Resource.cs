using UnityEngine;
using System.Collections;
using System;
using System.IO;

public class Resource : MonoBehaviour
{
	static Resource _instance;
	public static Resource instance{
		get{
			return _instance;
		}
	}

	public Sprite[] card_textures;
	public Sprite[] card_chan_textures;

	void Start () {
		_instance = this;
	}


	public Sprite getCardSprite(int code)
	{
		if(code <= 0)
			code = 0;
		return card_textures[code];
	}

	public Sprite getCardChanSprite(int code)
	{
		if(code <= 0)
			return card_chan_textures [0];

		code = (code - 1) / 4 + 1;
		return card_chan_textures [code];
	}


	public Sprite getCardBackSprite()
	{
		return card_textures[0];
	}

	public Sprite getSpriteByPath(String path)
	{
		return Resources.Load<Sprite>(path);
	}

	public Resource()
	{
		Debug.LogWarning("Loading Resource");

//		card_chan_textures = Resources.LoadAll<Sprite>("Textures/cards_chan");
//		names_chan = new string[card_chan_textures.Length];
//		for (int ii=0; ii< names_chan.Length; ii++) {
//			names_chan [ii] = card_chan_textures [ii].name;
//		}
	}
}

