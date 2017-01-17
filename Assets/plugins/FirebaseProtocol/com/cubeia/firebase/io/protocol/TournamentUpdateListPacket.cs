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

public class TournamentUpdateListPacket : ProtocolObject {
    public const int CLASSID = 156;

    public byte classId() {
        return CLASSID;
    }

    public List<TournamentUpdatePacket> updates = new List<TournamentUpdatePacket>();

    /**
     * Default constructor.
     *
     */
    public TournamentUpdateListPacket() {
        // Nothing here
    }

    public TournamentUpdateListPacket(List<TournamentUpdatePacket> updates) {
        this.updates = updates;
    }

    public void save(PacketOutputStream ps) {
        if (updates == null) {
            ps.saveInt(0);
        } else {
            TournamentUpdatePacket[] tournamentUpdatePacketArray = updates.ToArray();
            ps.saveInt(tournamentUpdatePacketArray.Length);
            foreach(TournamentUpdatePacket tournamentUpdatePacketObject in tournamentUpdatePacketArray) {
                tournamentUpdatePacketObject.save(ps);
            }
        }
    }

    public void load(PacketInputStream ps) {
        int updatesCount = ps.loadInt();
        updates = new List<TournamentUpdatePacket>(updatesCount);
        for(int i = 0; i != updatesCount; ++i) {
            TournamentUpdatePacket _tmp = new TournamentUpdatePacket();
            _tmp.load(ps);
            updates.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("TournamentUpdateListPacket :");
        result.Append(" updates["+updates+"]");
        return result.ToString();
    }

}
}