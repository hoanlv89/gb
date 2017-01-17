using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class LQMail
{
		public string from, content, date;
		public int money;
		public bool isReaded;

		public LQMail (string from, string content, string date, int money, bool isReaded)
		{
				this.from = from;
				this.content = content;
				this.date = date;
				this.money = money;
				this.isReaded = isReaded;
		}

		public static List<LQMail> getSampleListMail ()
		{
				List<LQMail> listMail = new List<LQMail> ();
				listMail.Add (new LQMail ("system", "content1", "date1", 7, true));
				listMail.Add (new LQMail ("from2", "content2", "date2", 3, true));
				listMail.Add (new LQMail ("system", "content3", "date3", 9, false));
				listMail.Add (new LQMail ("from4", "content4", "date4", 1, true));
				listMail.Add (new LQMail ("from5", "content5", "date5", 0, true));
				listMail.Add (new LQMail ("from6", "content6", "date6", 0, true));
				listMail.Add (new LQMail ("system", "content7", "date7", 0, true));
				listMail.Add (new LQMail ("from7", "content8", "date8", 0, true));
				listMail.Add (new LQMail ("from8", "content9", "date9", 0, true));
				listMail.Add (new LQMail ("system", "content10", "date10", 0, true));
				listMail.Add (new LQMail ("system", "content11", "date1", 7, true));
				listMail.Add (new LQMail ("from9", "content12", "date2", 3, true));
				listMail.Add (new LQMail ("system", "content13", "date3", 9, false));
				listMail.Add (new LQMail ("from10", "content14", "date4", 1, false));
				listMail.Add (new LQMail ("from11", "content15", "date5", 0, true));
				listMail.Add (new LQMail ("from12", "content16", "date6", 0, true));
				listMail.Add (new LQMail ("system", "content17", "date7", 0, true));
				listMail.Add (new LQMail ("from13", "content18", "date8", 0, true));
				listMail.Add (new LQMail ("from14", "content19", "date9", 0, true));
				listMail.Add (new LQMail ("system", "content20", "date10", 0, true));
				return listMail;
		}

		public static List<LQMail> getSystemMail (List<LQMail> listMail)
		{
				List<LQMail> listSystemMail = new List<LQMail> ();
				for (int i=0; i<listMail.Count; i++) {
						if (listMail [i].from.Equals ("system"))
								listSystemMail.Add (listMail [i]);
				}
				return listSystemMail;
		}

		public static List<LQMail> getPlayerMail (List<LQMail> listMail)
		{
				List<LQMail> listPlayerMail = new List<LQMail> ();
				for (int i=0; i<listMail.Count; i++) {
						if (!listMail [i].from.Equals ("system"))
								listPlayerMail.Add (listMail [i]);
				}
				return listPlayerMail;
		}

}
