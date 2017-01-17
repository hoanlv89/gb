using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Net;
using Styx;

namespace com.cubeia.firebase.io.protocol
{
	public class GameTransportPacket : ProtocolObject
	{
		public const int CLASSID = 100;
		
		public byte classId()
		{
			return CLASSID;
		}
		
		public int tableid;
		public int pid;
		public byte[] gamedata = new byte[0];
		public int fixed_miss;

		public GameTransportPacket()
		{
			// Nothing here
		}
		
		public GameTransportPacket(int tableid, int pid, byte[] gamedata)
		{
			this.tableid = tableid;
			this.pid = pid;
			this.gamedata = gamedata;
			this.fixed_miss = 0;
		}
		
		public void save(PacketOutputStream ps)
		{
			ps.saveInt(tableid);
			ps.saveInt(pid);
			ps.saveInt(gamedata.Length);
			ps.saveArray(gamedata);
			ps.saveInt(fixed_miss);
		}
		
		public void load(PacketInputStream ps)
		{
			tableid = ps.loadInt();
			pid = ps.loadInt();
			int gamedataCount = ps.loadInt();
			gamedata = new byte[gamedataCount];
			if (gamedataCount > 0) {
				ps.loadByteArray(gamedata);
			}
		}
		
		override public String ToString()
		{
			StringBuilder result = new StringBuilder("GameTransportPacket :");
			result.Append(" tableid[" + tableid + "]");
			result.Append(" pid[" + pid + "]");
			result.Append(" gamedata[" + gamedata + "]");
			return result.ToString();
		}
		
	}
}