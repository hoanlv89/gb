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

public class NotifyInvitedPacket : ProtocolObject {
    public const int CLASSID = 43;

    public byte classId() {
        return CLASSID;
    }

    public int inviter;
    public string screenname;
    public int tableid;
    public byte seat;

    /**
     * Default constructor.
     *
     */
    public NotifyInvitedPacket() {
        // Nothing here
    }

    public NotifyInvitedPacket(int inviter, string screenname, int tableid, byte seat) {
        this.inviter = inviter;
        this.screenname = screenname;
        this.tableid = tableid;
        this.seat = seat;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(inviter);
        ps.saveString(screenname);
        ps.saveInt(tableid);
        ps.saveByte(seat);
    }

    public void load(PacketInputStream ps) {
        inviter = ps.loadInt();
        screenname = ps.loadString();
        tableid = ps.loadInt();
        seat = ps.loadByte();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("NotifyInvitedPacket :");
        result.Append(" inviter["+inviter+"]");
        result.Append(" screenname["+screenname+"]");
        result.Append(" tableid["+tableid+"]");
        result.Append(" seat["+seat+"]");
        return result.ToString();
    }

}
}