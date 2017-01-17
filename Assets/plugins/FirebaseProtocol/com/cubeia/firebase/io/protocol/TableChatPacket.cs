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

public class TableChatPacket : ProtocolObject {
    public const int CLASSID = 80;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public int pid;
    public string message;

    /**
     * Default constructor.
     *
     */
    public TableChatPacket() {
        // Nothing here
    }

    public TableChatPacket(int tableid, int pid, string message) {
        this.tableid = tableid;
        this.pid = pid;
        this.message = message;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveInt(pid);
        ps.saveString(message);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        pid = ps.loadInt();
        message = ps.loadString();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("TableChatPacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" pid["+pid+"]");
        result.Append(" message["+message+"]");
        return result.ToString();
    }

}
}