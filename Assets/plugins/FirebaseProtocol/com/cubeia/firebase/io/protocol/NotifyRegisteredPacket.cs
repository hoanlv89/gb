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

public class NotifyRegisteredPacket : ProtocolObject {
    public const int CLASSID = 211;

    public byte classId() {
        return CLASSID;
    }

    public int[] tournaments = new int[0];

    /**
     * Default constructor.
     *
     */
    public NotifyRegisteredPacket() {
        // Nothing here
    }

    public NotifyRegisteredPacket(int[] tournaments) {
        this.tournaments = tournaments;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tournaments.Length);
        ps.saveArray(tournaments);
    }

    public void load(PacketInputStream ps) {
        int tournamentsCount = ps.loadInt();
        tournaments = new int[tournamentsCount];
        ps.loadIntArray(tournaments);
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("NotifyRegisteredPacket :");
        result.Append(" tournaments["+tournaments+"]");
        return result.ToString();
    }

}
}