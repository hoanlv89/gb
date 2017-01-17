using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;
using System.Collections.Generic;
using System;
using System.Threading;

public class CTInboxAdmin : CTInbox
{
	public override void Start() {

		base.Start ();
		is_admin_inbox = true;
	}

}

