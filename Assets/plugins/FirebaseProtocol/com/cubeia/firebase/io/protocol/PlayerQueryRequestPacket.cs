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

public class PlayerQueryRequestPacket : ProtocolObject {
    public const int CLASSID = 16;

    public byte classId() {
        return CLASSID;
    }

    public int pid;

    /**
     * Default constructor.
     *
     */
    public PlayerQueryRequestPacket() {
        // Nothing here
    }

    public PlayerQueryRequestPacket(int pid) {
        this.pid = pid;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(pid);
    }

    public void load(PacketInputStream ps) {
        pid = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("PlayerQueryRequestPacket :");
        result.Append(" pid["+pid+"]");
        return result.ToString();
    }

}
}