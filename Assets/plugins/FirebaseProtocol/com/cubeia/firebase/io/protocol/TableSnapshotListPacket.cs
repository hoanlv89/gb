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

public class TableSnapshotListPacket : ProtocolObject {
    public const int CLASSID = 153;

    public byte classId() {
        return CLASSID;
    }

    public List<TableSnapshotPacket> snapshots = new List<TableSnapshotPacket>();

    /**
     * Default constructor.
     *
     */
    public TableSnapshotListPacket() {
        // Nothing here
    }

    public TableSnapshotListPacket(List<TableSnapshotPacket> snapshots) {
        this.snapshots = snapshots;
    }

    public void save(PacketOutputStream ps) {
        if (snapshots == null) {
            ps.saveInt(0);
        } else {
            TableSnapshotPacket[] tableSnapshotPacketArray = snapshots.ToArray();
            ps.saveInt(tableSnapshotPacketArray.Length);
            foreach(TableSnapshotPacket tableSnapshotPacketObject in tableSnapshotPacketArray) {
                tableSnapshotPacketObject.save(ps);
            }
        }
    }

    public void load(PacketInputStream ps) {
        int snapshotsCount = ps.loadInt();
        snapshots = new List<TableSnapshotPacket>(snapshotsCount);
        for(int i = 0; i != snapshotsCount; ++i) {
            TableSnapshotPacket _tmp = new TableSnapshotPacket();
            _tmp.load(ps);
            snapshots.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("TableSnapshotListPacket :");
        result.Append(" snapshots["+snapshots+"]");
        return result.ToString();
    }

}
}