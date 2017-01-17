using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Mail
{
	public int id;
	public int t;
	public int vip;
	public string from;
	public string to;
	public int gold;
	public int i;
	public string msg;
	public long time;
	public bool s;
	public bool d;

	public static List<Mail> mails20  = new List<Mail>();
	public static List<Mail> mails21  = new List<Mail>();
	public static List<Mail> mails22  = new List<Mail>();

	public Mail(int id, int t, int vip, string from, string to, int gold, int i, string msg, long time, bool s, bool d){
		this.id = id;
		this.t = t;
		this.vip = vip;
		this.from = from;
		this.to = to;
		this.gold = gold;
		this.i = i;
		this.msg = msg;
		this.time = time;
		this.s = s;
		this.d = d;
	}

//	{
//		"Id": 2577877,
//		"T": 0,
//		"Vip": 0,
//		"From": "Dautruong",
//		"To": "ann2005",
//		"AG": 0,
//		"I": -1,
//		"Msg": "Bạn được tặng 1 thẻ x2.5, thẻ có hiệu lực đến 23h59 ngày 15/02/2015. Chúc bạn may mắn :)",
//		"Time": 1423760400000,
//		"S": false,
//		"D": false
//	}
}

