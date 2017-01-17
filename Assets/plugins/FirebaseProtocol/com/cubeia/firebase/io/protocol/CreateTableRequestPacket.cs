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

public class CreateTableRequestPacket : ProtocolObject {
    public const int CLASSID = 40;

    public byte classId() {
        return CLASSID;
    }

    public int seq;
    public int gameid;
    public byte seats;
    public List<Param> parameters = new List<Param>();
    public int[] invitees = new int[0];

    /**
     * Default constructor.
     *
     */
    public CreateTableRequestPacket() {
        // Nothing here
    }

    public CreateTableRequestPacket(int seq, int gameid, byte seats, List<Param> parameters, int[] invitees) {
        this.seq = seq;
        this.gameid = gameid;
        this.seats = seats;
        this.parameters = parameters;
        this.invitees = invitees;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(seq);
        ps.saveInt(gameid);
        ps.saveByte(seats);
        if (parameters == null) {
            ps.saveInt(0);
        } else {
            Param[] paramArray = parameters.ToArray();
            ps.saveInt(paramArray.Length);
            foreach(Param paramObject in paramArray) {
                paramObject.save(ps);
            }
        }
        ps.saveInt(invitees.Length);
        ps.saveArray(invitees);
    }

    public void load(PacketInputStream ps) {
        seq = ps.loadInt();
        gameid = ps.loadInt();
        seats = ps.loadByte();
        int parametersCount = ps.loadInt();
        parameters = new List<Param>(parametersCount);
        for(int i = 0; i != parametersCount; ++i) {
            Param _tmp = new Param();
            _tmp.load(ps);
            parameters.Add(_tmp);
        }
        int inviteesCount = ps.loadInt();
        invitees = new int[inviteesCount];
        ps.loadIntArray(invitees);
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("CreateTableRequestPacket :");
        result.Append(" seq["+seq+"]");
        result.Append(" gameid["+gameid+"]");
        result.Append(" seats["+seats+"]");
        result.Append(" parameters["+parameters+"]");
        result.Append(" invitees["+invitees+"]");
        return result.ToString();
    }

}
}