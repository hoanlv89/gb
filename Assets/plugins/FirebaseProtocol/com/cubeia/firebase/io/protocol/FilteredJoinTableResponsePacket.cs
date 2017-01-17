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

public class FilteredJoinTableResponsePacket : ProtocolObject {
    public const int CLASSID = 171;

    public byte classId() {
        return CLASSID;
    }

    public int seq;
    public int gameid;
    public string address;
    public Enums.FilteredJoinResponseStatus status = Enums.makeFilteredJoinResponseStatus(0);

    /**
     * Default constructor.
     *
     */
    public FilteredJoinTableResponsePacket() {
        // Nothing here
    }

    public FilteredJoinTableResponsePacket(int seq, int gameid, string address, Enums.FilteredJoinResponseStatus status) {
        this.seq = seq;
        this.gameid = gameid;
        this.address = address;
        this.status = status;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(seq);
        ps.saveInt(gameid);
        ps.saveString(address);
        ps.saveUnsignedByte((byte)status);
    }

    public void load(PacketInputStream ps) {
        seq = ps.loadInt();
        gameid = ps.loadInt();
        address = ps.loadString();
        status = Enums.makeFilteredJoinResponseStatus(ps.loadUnsignedByte());
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("FilteredJoinTableResponsePacket :");
        result.Append(" seq["+seq+"]");
        result.Append(" gameid["+gameid+"]");
        result.Append(" address["+address+"]");
        result.Append(" status["+status+"]");
        return result.ToString();
    }

}
}