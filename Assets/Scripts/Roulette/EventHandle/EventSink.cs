using UnityEngine;
using System.Collections;

namespace com.dst.Roulette{
	public class EventSink {
		public static CellClickHandle onCellClick;
		public static CellPointDownHandle onCellPointDown;
		public static CellPointUpHandle onCellPointUp;
		public static ChangeUnitBet onChangeUnitBet;
		public static SendSpinHandle onSendSpin;
		public static RebetAndSpinHandle onRebetAndSpin;
		public static DoubleBetHandle onDoubleBet;
		public static DoubleRebetHandle onDoubleRebet;
		public static UndoHandle onUndo;
		public static ClearHandle onClear;
		public static RebetHandle onRebet;
		public static ExitHandle onExit;
		public static SendChatHandle onSendChat;
		public static ChangeBetHandle onChangeBet;
		public static CameraDownHandle onCamDown;
		public static CameraForwardHandle onCamForward; 
		public static CameraBackHandle onCamBack; 
		public static SpinResponeHandle onSpin;
		public static FinishReceiverHandle onFinish;
		public static SendFinishHandle onSendFinish;
		public static SendAMHandle onAMFinish;
	}

	public delegate void CellClickHandle(GameObject g);
	public delegate void CellPointDownHandle(GameObject g);
	public delegate void CellPointUpHandle(GameObject g);
	public delegate void ChangeUnitBet(int val); 
	public delegate void SendSpinHandle(); 
	public delegate void RebetAndSpinHandle();
	public delegate void DoubleBetHandle();
	public delegate void DoubleRebetHandle();
	public delegate void UndoHandle();
	public delegate void ClearHandle();
	public delegate void RebetHandle();
	public delegate void ExitHandle();
	public delegate void SendChatHandle();
	public delegate void ChangeBetHandle(int val);
	public delegate void CameraDownHandle();
	public delegate void CameraForwardHandle();
	public delegate void CameraBackHandle();
	public delegate void SpinResponeHandle(int result, int id, int gold);
	public delegate void FinishReceiverHandle(int gold);
	public delegate void SendFinishHandle(int id);
	public delegate void SendAMHandle(int gold);
}
