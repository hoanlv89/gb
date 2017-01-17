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

public class LeaveResponsePacket : ProtocolObject {
    public const int CLASSID = 37;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public Enums.ResponseStatus status = Enums.makeResponseStatus(0);
    public int code;

    /**
     * Default constructor.
     *
     */
    public LeaveResponsePacket() {
        // Nothing here
    }

    public LeaveResponsePacket(int tableid, Enums.ResponseStatus status, int code) {
        this.tableid = tableid;
        this.status = status;
        this.code = code;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveUnsignedByte((byte)status);
        ps.saveInt(code);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        status = Enums.makeResponseStatus(ps.loadUnsignedByte());
        code = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("LeaveResponsePacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" status["+status+"]");
        result.Append(" code["+code+"]");
        return result.ToString();
    }

}
}