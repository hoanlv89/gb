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

public class NotifySeatedPacket : ProtocolObject {
    public const int CLASSID = 62;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public byte seat;
    public int mttid;
    public TableSnapshotPacket snapshot;

    /**
     * Default constructor.
     *
     */
    public NotifySeatedPacket() {
        // Nothing here
    }

    public NotifySeatedPacket(int tableid, byte seat, int mttid, TableSnapshotPacket snapshot) {
        this.tableid = tableid;
        this.seat = seat;
        this.mttid = mttid;
        this.snapshot = snapshot;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveByte(seat);
        ps.saveInt(mttid);
        snapshot.save(ps);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        seat = ps.loadByte();
        mttid = ps.loadInt();
        snapshot = new TableSnapshotPacket();
        snapshot.load(ps);
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("NotifySeatedPacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" seat["+seat+"]");
        result.Append(" mttid["+mttid+"]");
        result.Append(" snapshot["+snapshot+"]");
        return result.ToString();
    }

}
}