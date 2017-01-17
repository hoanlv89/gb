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

public class WatchResponsePacket : ProtocolObject {
    public const int CLASSID = 33;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public Enums.WatchResponseStatus status = Enums.makeWatchResponseStatus(0);

    /**
     * Default constructor.
     *
     */
    public WatchResponsePacket() {
        // Nothing here
    }

    public WatchResponsePacket(int tableid, Enums.WatchResponseStatus status) {
        this.tableid = tableid;
        this.status = status;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveUnsignedByte((byte)status);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        status = Enums.makeWatchResponseStatus(ps.loadUnsignedByte());
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("WatchResponsePacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" status["+status+"]");
        return result.ToString();
    }

}
}