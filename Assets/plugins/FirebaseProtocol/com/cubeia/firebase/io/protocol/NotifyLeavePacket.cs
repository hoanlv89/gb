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

public class NotifyLeavePacket : ProtocolObject {
    public const int CLASSID = 61;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public int pid;

    /**
     * Default constructor.
     *
     */
    public NotifyLeavePacket() {
        // Nothing here
    }

    public NotifyLeavePacket(int tableid, int pid) {
        this.tableid = tableid;
        this.pid = pid;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveInt(pid);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        pid = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("NotifyLeavePacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" pid["+pid+"]");
        return result.ToString();
    }

}
}