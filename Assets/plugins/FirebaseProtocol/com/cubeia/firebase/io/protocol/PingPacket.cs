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

public class PingPacket : ProtocolObject {
    public const int CLASSID = 7;

    public byte classId() {
        return CLASSID;
    }

    public int id;

    /**
     * Default constructor.
     *
     */
    public PingPacket() {
        // Nothing here
    }

    public PingPacket(int id) {
        this.id = id;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(id);
    }

    public void load(PacketInputStream ps) {
        id = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("PingPacket :");
        result.Append(" id["+id+"]");
        return result.ToString();
    }

}
}