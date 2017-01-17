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

public class TournamentSnapshotListPacket : ProtocolObject {
    public const int CLASSID = 155;

    public byte classId() {
        return CLASSID;
    }

    public List<TournamentSnapshotPacket> snapshots = new List<TournamentSnapshotPacket>();

    /**
     * Default constructor.
     *
     */
    public TournamentSnapshotListPacket() {
        // Nothing here
    }

    public TournamentSnapshotListPacket(List<TournamentSnapshotPacket> snapshots) {
        this.snapshots = snapshots;
    }

    public void save(PacketOutputStream ps) {
        if (snapshots == null) {
            ps.saveInt(0);
        } else {
            TournamentSnapshotPacket[] tournamentSnapshotPacketArray = snapshots.ToArray();
            ps.saveInt(tournamentSnapshotPacketArray.Length);
            foreach(TournamentSnapshotPacket tournamentSnapshotPacketObject in tournamentSnapshotPacketArray) {
                tournamentSnapshotPacketObject.save(ps);
            }
        }
    }

    public void load(PacketInputStream ps) {
        int snapshotsCount = ps.loadInt();
        snapshots = new List<TournamentSnapshotPacket>(snapshotsCount);
        for(int i = 0; i != snapshotsCount; ++i) {
            TournamentSnapshotPacket _tmp = new TournamentSnapshotPacket();
            _tmp.load(ps);
            snapshots.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("TournamentSnapshotListPacket :");
        result.Append(" snapshots["+snapshots+"]");
        return result.ToString();
    }

}
}