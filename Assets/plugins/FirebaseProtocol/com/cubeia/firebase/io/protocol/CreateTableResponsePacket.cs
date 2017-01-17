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

public class CreateTableResponsePacket : ProtocolObject {
    public const int CLASSID = 41;

    public byte classId() {
        return CLASSID;
    }

    public int seq;
    public int tableid;
    public byte seat;
    public Enums.ResponseStatus status = Enums.makeResponseStatus(0);
    public int code;

    /**
     * Default constructor.
     *
     */
    public CreateTableResponsePacket() {
        // Nothing here
    }

    public CreateTableResponsePacket(int seq, int tableid, byte seat, Enums.ResponseStatus status, int code) {
        this.seq = seq;
        this.tableid = tableid;
        this.seat = seat;
        this.status = status;
        this.code = code;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(seq);
        ps.saveInt(tableid);
        ps.saveByte(seat);
        ps.saveUnsignedByte((byte)status);
        ps.saveInt(code);
    }

    public void load(PacketInputStream ps) {
        seq = ps.loadInt();
        tableid = ps.loadInt();
        seat = ps.loadByte();
        status = Enums.makeResponseStatus(ps.loadUnsignedByte());
        code = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("CreateTableResponsePacket :");
        result.Append(" seq["+seq+"]");
        result.Append(" tableid["+tableid+"]");
        result.Append(" seat["+seat+"]");
        result.Append(" status["+status+"]");
        result.Append(" code["+code+"]");
        return result.ToString();
    }

}
}