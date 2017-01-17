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

public class PlayerQueryResponsePacket : ProtocolObject {
    public const int CLASSID = 17;

    public byte classId() {
        return CLASSID;
    }

    public int pid;
    public string nick;
    public Enums.ResponseStatus status = Enums.makeResponseStatus(0);
    public byte[] data = new byte[0];

    /**
     * Default constructor.
     *
     */
    public PlayerQueryResponsePacket() {
        // Nothing here
    }

    public PlayerQueryResponsePacket(int pid, string nick, Enums.ResponseStatus status, byte[] data) {
        this.pid = pid;
        this.nick = nick;
        this.status = status;
        this.data = data;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(pid);
        ps.saveString(nick);
        ps.saveUnsignedByte((byte)status);
        ps.saveInt(data.Length);
        ps.saveArray(data);
    }

    public void load(PacketInputStream ps) {
        pid = ps.loadInt();
        nick = ps.loadString();
        status = Enums.makeResponseStatus(ps.loadUnsignedByte());
        int dataCount = ps.loadInt();
        data = new byte[dataCount];
        if ( dataCount > 0 ) {
            ps.loadByteArray(data);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("PlayerQueryResponsePacket :");
        result.Append(" pid["+pid+"]");
        result.Append(" nick["+nick+"]");
        result.Append(" status["+status+"]");
        result.Append(" data["+data+"]");
        return result.ToString();
    }

}
}