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

public class SystemMessagePacket : ProtocolObject {
    public const int CLASSID = 4;

    public byte classId() {
        return CLASSID;
    }

    public int type;
    public int level;
    public string message;
    public int[] pids = new int[0];

    /**
     * Default constructor.
     *
     */
    public SystemMessagePacket() {
        // Nothing here
    }

    public SystemMessagePacket(int type, int level, string message, int[] pids) {
        this.type = type;
        this.level = level;
        this.message = message;
        this.pids = pids;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(type);
        ps.saveInt(level);
        ps.saveString(message);
        ps.saveInt(pids.Length);
        ps.saveArray(pids);
    }

    public void load(PacketInputStream ps) {
        type = ps.loadInt();
        level = ps.loadInt();
        message = ps.loadString();
        int pidsCount = ps.loadInt();
        pids = new int[pidsCount];
        ps.loadIntArray(pids);
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("SystemMessagePacket :");
        result.Append(" type["+type+"]");
        result.Append(" level["+level+"]");
        result.Append(" message["+message+"]");
        result.Append(" pids["+pids+"]");
        return result.ToString();
    }

}
}