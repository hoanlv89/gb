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

public class KickPlayerPacket : ProtocolObject {
    public const int CLASSID = 64;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public short reasonCode;

    /**
     * Default constructor.
     *
     */
    public KickPlayerPacket() {
        // Nothing here
    }

    public KickPlayerPacket(int tableid, short reasonCode) {
        this.tableid = tableid;
        this.reasonCode = reasonCode;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveShort(reasonCode);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        reasonCode = ps.loadShort();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("KickPlayerPacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" reasonCode["+reasonCode+"]");
        return result.ToString();
    }

}
}