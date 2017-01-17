using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class RoomGame
{
	public static List<int> visibleList = new List<int>();

	public int id;
	public string name;
	public int maxTable;
	public int curPlay;
	public int maxPlay;
	public int curTable;
	public bool isFree;


	public RoomGame(int id, string name, int maxTable, int curPlay, int maxPlay, int curTable, bool isFree)
	{
		this.id = id;
		this.name = name;
		this.maxTable = maxTable;
		this.curPlay = curPlay;
		this.maxPlay = maxPlay;
		this.curTable = curTable;
		this.isFree = isFree;
	}

	public string toString()
	{
		return "Table:id=" + id + ", name=" + name + ", MaxTable=" + maxTable + ", CurPlay=" + curPlay + ", MaxPlay=" + maxPlay + ", CurTable=" + curTable;
	}
}

