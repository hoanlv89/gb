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

public class InvitePlayersRequestPacket : ProtocolObject {
    public const int CLASSID = 42;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public int[] invitees = new int[0];

    /**
     * Default constructor.
     *
     */
    public InvitePlayersRequestPacket() {
        // Nothing here
    }

    public InvitePlayersRequestPacket(int tableid, int[] invitees) {
        this.tableid = tableid;
        this.invitees = invitees;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveInt(invitees.Length);
        ps.saveArray(invitees);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        int inviteesCount = ps.loadInt();
        invitees = new int[inviteesCount];
        ps.loadIntArray(invitees);
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("InvitePlayersRequestPacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" invitees["+invitees+"]");
        return result.ToString();
    }

}
}