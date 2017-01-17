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

public class JoinResponsePacket : ProtocolObject {
    public const int CLASSID = 31;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public byte seat;
    public Enums.JoinResponseStatus status = Enums.makeJoinResponseStatus(0);
    public int code;

    /**
     * Default constructor.
     *
     */
    public JoinResponsePacket() {
        // Nothing here
    }

    public JoinResponsePacket(int tableid, byte seat, Enums.JoinResponseStatus status, int code) {
        this.tableid = tableid;
        this.seat = seat;
        this.status = status;
        this.code = code;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveByte(seat);
        ps.saveUnsignedByte((byte)status);
        ps.saveInt(code);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        seat = ps.loadByte();
        status = Enums.makeJoinResponseStatus(ps.loadUnsignedByte());
        code = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("JoinResponsePacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" seat["+seat+"]");
        result.Append(" status["+status+"]");
        result.Append(" code["+code+"]");
        return result.ToString();
    }

}
}