using UnityEngine;
using System.Collections;
using com.dst.Roulette;

public class ClickSystem : MonoBehaviour {

	public void PointDown(GameObject go){
		EventSink.onCellPointDown (go);
	}

	public void PointUp(GameObject go){
		EventSink.onCellPointUp (go);
	}

	public void bet (GameObject go){
		EventSink.onCellClick (go);
	}

	public void changeUnitBet(int u){
		EventSink.onChangeUnitBet (u);
	}

	public void spin(){
		EventSink.onSendSpin ();
	}

	public void rebetAndspin (){
		EventSink.onRebetAndSpin ();
	}
	public void doubleBet(){
		EventSink.onDoubleBet ();
	}

	public void doubleRebet(){
		EventSink.onDoubleRebet ();
	}
	public void undo(){
		EventSink.onUndo ();
	}

	public void rebet(){
		EventSink.onRebet ();
	}

	public void clear(){
		EventSink.onClear ();
	}

	public void back(){
		EventSink.onExit ();
	}

	public void settings(){

	}
}
