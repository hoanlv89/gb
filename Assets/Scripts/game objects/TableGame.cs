using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Styx;
using UnityEngine;
using com.cubeia.firebase.io.protocol;

class ParamUtil
{
	public static int readIntParam(List<Param> parameters, string key)
	{
		foreach (Param param in parameters) {
			if (param.key == key) {
				MemoryStream memStream = new MemoryStream(param.value);
				BinaryReader reader = new BinaryReader(memStream);
				PacketInputStream packetInputStream = new PacketInputStream(reader);
				
				if (param.type == (byte)Enums.ParameterType.INT) {
					return packetInputStream.loadInt();
				}
			}
		}
		return -1;
	}

	public static string readStringParam(List<Param> parameters, string key)
	{
		foreach (Param param in parameters) {
			if (param.key == key) {
				MemoryStream memStream = new MemoryStream(param.value);
				BinaryReader reader = new BinaryReader(memStream);
				PacketInputStream packetInputStream = new PacketInputStream(reader);
				
				if (param.type == (byte)Enums.ParameterType.STRING) {
					return packetInputStream.loadString();
				}
			}
		}
		return "";
	}
	
}

public class TableGame
{
	public static List<TableOptionItem> tableOptionList = new List<TableOptionItem>();

	public string name;
	public int mark;
	public int id;
	public int type;
	public short capacity;
	public short seated;
	public string address;
	public int agmin;
	public ArrayList plNames;
	public RectTransform view;
	public bool disable;


	public TableGame(string name, int mark, int id, int type, short capacity, short seated, string address, string arrN, int agmin)
	{
		this.name = name;
		this.mark = mark;
		this.id = id;
		this.type = type;
		this.capacity = capacity;
		this.seated = seated;
		this.address = address;
		this.agmin = agmin;
		this.setPlayers(arrN);
	}
	
	public TableGame(string name, int mark, int id, int type)
	{
		this.name = name;
		this.mark = mark;
		this.id = id;
		this.type = type;
		this.capacity = 8;
		this.seated = 1;
		this.address = "unknown";
	}

	public TableGame(TableSnapshotPacket tableSnapshot)
	{
		this.name = ParamUtil.readStringParam(tableSnapshot.parameters, "N");
		this.setPlayers(ParamUtil.readStringParam(tableSnapshot.parameters, "ArrN"));
		this.mark = ParamUtil.readIntParam(tableSnapshot.parameters, "M");
		this.type = ParamUtil.readIntParam(tableSnapshot.parameters, "T");
		this.agmin = ParamUtil.readIntParam(tableSnapshot.parameters, "AG");
		this.id = tableSnapshot.tableid;
		this.capacity = tableSnapshot.capacity;
		this.seated = tableSnapshot.seated;
		this.address = tableSnapshot.address;

		disable = false;

		if(seated >= capacity)
			disable = true;

		if (GameApplication.user.vip == 0) {
			if(mark > RoomGame.visibleList[1]) {
				disable = true;
			} 
		}

		if(GameApplication.cubeia.gameId == GameType.DUMMY){
			if(GameApplication.user.ag < mark * 200)
				disable = true;
		} else if(GameApplication.user.ag < mark * 10) {
			disable = true;
		}
	}

	public string tostring()
	{
		return "name = " + name + "| mark = " + mark + "| id = " + id + "| type = " + type + "| " + seated + "/" + capacity + " | add = " + address;
	}

	public void setPlayers(string arrN)
	{
		plNames = new ArrayList();
		// xét length >0 tránh trường hợp phòng không
		// có người nhưng server chưa xóa
		
		string str = arrN.Substring(arrN.IndexOf('[') + 1, arrN.Length - 1);
		if (str.Length > 0) {
			string[] nameList = str.Split(',');
			foreach (string namex in nameList) {
				plNames.Add(namex.Substring(1, namex.Length - 1));
			}
		}
	}
}


