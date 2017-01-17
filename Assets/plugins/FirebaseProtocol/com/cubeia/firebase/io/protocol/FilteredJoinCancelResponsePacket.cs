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

public class FilteredJoinCancelResponsePacket : ProtocolObject {
    public const int CLASSID = 173;

    public byte classId() {
        return CLASSID;
    }

    public int seq;
    public Enums.ResponseStatus status = Enums.makeResponseStatus(0);

    /**
     * Default constructor.
     *
     */
    public FilteredJoinCancelResponsePacket() {
        // Nothing here
    }

    public FilteredJoinCancelResponsePacket(int seq, Enums.ResponseStatus status) {
        this.seq = seq;
        this.status = status;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(seq);
        ps.saveUnsignedByte((byte)status);
    }

    public void load(PacketInputStream ps) {
        seq = ps.loadInt();
        status = Enums.makeResponseStatus(ps.loadUnsignedByte());
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("FilteredJoinCancelResponsePacket :");
        result.Append(" seq["+seq+"]");
        result.Append(" status["+status+"]");
        return result.ToString();
    }

}
}