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

public class FilteredJoinCancelRequestPacket : ProtocolObject {
    public const int CLASSID = 172;

    public byte classId() {
        return CLASSID;
    }

    public int seq;

    /**
     * Default constructor.
     *
     */
    public FilteredJoinCancelRequestPacket() {
        // Nothing here
    }

    public FilteredJoinCancelRequestPacket(int seq) {
        this.seq = seq;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(seq);
    }

    public void load(PacketInputStream ps) {
        seq = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("FilteredJoinCancelRequestPacket :");
        result.Append(" seq["+seq+"]");
        return result.ToString();
    }

}
}