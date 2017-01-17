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

public class MttRegisterResponsePacket : ProtocolObject {
    public const int CLASSID = 206;

    public byte classId() {
        return CLASSID;
    }

    public int mttid;
    public Enums.TournamentRegisterResponseStatus status = Enums.makeTournamentRegisterResponseStatus(0);

    /**
     * Default constructor.
     *
     */
    public MttRegisterResponsePacket() {
        // Nothing here
    }

    public MttRegisterResponsePacket(int mttid, Enums.TournamentRegisterResponseStatus status) {
        this.mttid = mttid;
        this.status = status;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(mttid);
        ps.saveUnsignedByte((byte)status);
    }

    public void load(PacketInputStream ps) {
        mttid = ps.loadInt();
        status = Enums.makeTournamentRegisterResponseStatus(ps.loadUnsignedByte());
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("MttRegisterResponsePacket :");
        result.Append(" mttid["+mttid+"]");
        result.Append(" status["+status+"]");
        return result.ToString();
    }

}
}