using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;

public class ThreadedJob
{
	private bool m_IsDone = false;
	private object m_Handle = new object ();
	private System.Threading.Thread m_Thread = null;

	public bool IsDone {
		get {
			bool tmp;
			lock (m_Handle) {
				tmp = m_IsDone;
			}
			return tmp;
		}
		set {
			lock (m_Handle) {
				m_IsDone = value;
			}
		}
	}
	
	public virtual void Start ()
	{
		m_Thread = new System.Threading.Thread (Run);
		m_Thread.Start ();
	}

	public virtual void Abort ()
	{
		m_Thread.Abort ();
	}
	
	protected virtual void ThreadFunction ()
	{
	}
	
	protected virtual void OnFinished ()
	{
	}
	
	public virtual bool Update ()
	{
		if (IsDone) {
			OnFinished ();
			return true;
		}
		return false;
	}

	private void Run ()
	{
		// print log o day co the gay exception
//		Debug.Log ("SThread started!");
		ThreadFunction ();
		IsDone = true;
//		Debug.Log ("SThread done!");
	}
}

public class SThread : ThreadedJob
{
	public static List<SThread> threadList = new List<SThread> ();
	private Action action;
	
	public SThread (Action action)
	{
		this.action = action;
		threadList.Add (this);
		if (threadList.Count > 8)
			Debug.LogWarning ("sthread count: " + threadList.Count);
	}
	
	protected override void ThreadFunction ()
	{
		action ();
	}
	
	protected override void OnFinished ()
	{
//		Debug.Log ("SThread OnFinished!");
		threadList.Remove (this);
	}
}
