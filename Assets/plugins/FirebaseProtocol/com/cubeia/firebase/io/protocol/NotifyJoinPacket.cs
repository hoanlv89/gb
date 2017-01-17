// I AM AUTO-GENERATED, DON'T CHECK ME INTO SUBVERSION (or else...)

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Net;
using Styx;

namespace com.cubeia.firebase.io.protocol
{

public class NotifyJoinPacket : ProtocolObject {
    public const int CLASSID = 60;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public int pid;
    public string nick;
    public byte seat;

    /**
     * Default constructor.
     *
     */
    public NotifyJoinPacket() {
        // Nothing here
    }

    public NotifyJoinPacket(int tableid, int pid, string nick, byte seat) {
        this.tableid = tableid;
        this.pid = pid;
        this.nick = nick;
        this.seat = seat;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveInt(pid);
        ps.saveString(nick);
        ps.saveByte(seat);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        pid = ps.loadInt();
        nick = ps.loadString();
        seat = ps.loadByte();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("NotifyJoinPacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" pid["+pid+"]");
        result.Append(" nick["+nick+"]");
        result.Append(" seat["+seat+"]");
        return result.ToString();
    }

}
}