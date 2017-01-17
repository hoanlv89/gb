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

public class FilteredJoinTableAvailablePacket : ProtocolObject {
    public const int CLASSID = 174;

    public byte classId() {
        return CLASSID;
    }

    public int seq;
    public int tableid;
    public byte seat;

    /**
     * Default constructor.
     *
     */
    public FilteredJoinTableAvailablePacket() {
        // Nothing here
    }

    public FilteredJoinTableAvailablePacket(int seq, int tableid, byte seat) {
        this.seq = seq;
        this.tableid = tableid;
        this.seat = seat;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(seq);
        ps.saveInt(tableid);
        ps.saveByte(seat);
    }

    public void load(PacketInputStream ps) {
        seq = ps.loadInt();
        tableid = ps.loadInt();
        seat = ps.loadByte();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("FilteredJoinTableAvailablePacket :");
        result.Append(" seq["+seq+"]");
        result.Append(" tableid["+tableid+"]");
        result.Append(" seat["+seat+"]");
        return result.ToString();
    }

}
}