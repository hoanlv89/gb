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

public class MttSeatedPacket : ProtocolObject {
    public const int CLASSID = 209;

    public byte classId() {
        return CLASSID;
    }

    public int mttid;
    public int tableid;
    public byte seat;

    /**
     * Default constructor.
     *
     */
    public MttSeatedPacket() {
        // Nothing here
    }

    public MttSeatedPacket(int mttid, int tableid, byte seat) {
        this.mttid = mttid;
        this.tableid = tableid;
        this.seat = seat;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(mttid);
        ps.saveInt(tableid);
        ps.saveByte(seat);
    }

    public void load(PacketInputStream ps) {
        mttid = ps.loadInt();
        tableid = ps.loadInt();
        seat = ps.loadByte();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("MttSeatedPacket :");
        result.Append(" mttid["+mttid+"]");
        result.Append(" tableid["+tableid+"]");
        result.Append(" seat["+seat+"]");
        return result.ToString();
    }

}
}