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

public class WatchRequestPacket : ProtocolObject {
    public const int CLASSID = 32;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;

    /**
     * Default constructor.
     *
     */
    public WatchRequestPacket() {
        // Nothing here
    }

    public WatchRequestPacket(int tableid) {
        this.tableid = tableid;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("WatchRequestPacket :");
        result.Append(" tableid["+tableid+"]");
        return result.ToString();
    }

}
}