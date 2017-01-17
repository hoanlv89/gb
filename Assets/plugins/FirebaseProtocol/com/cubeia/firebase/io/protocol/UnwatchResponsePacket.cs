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

public class UnwatchResponsePacket : ProtocolObject {
    public const int CLASSID = 35;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public Enums.ResponseStatus status = Enums.makeResponseStatus(0);

    /**
     * Default constructor.
     *
     */
    public UnwatchResponsePacket() {
        // Nothing here
    }

    public UnwatchResponsePacket(int tableid, Enums.ResponseStatus status) {
        this.tableid = tableid;
        this.status = status;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveUnsignedByte((byte)status);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        status = Enums.makeResponseStatus(ps.loadUnsignedByte());
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("UnwatchResponsePacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" status["+status+"]");
        return result.ToString();
    }

}
}