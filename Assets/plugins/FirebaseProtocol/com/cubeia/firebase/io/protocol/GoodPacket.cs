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

public class GoodPacket : ProtocolObject {
    public const int CLASSID = 2;

    public byte classId() {
        return CLASSID;
    }

    public byte cmd;
    public int extra;

    /**
     * Default constructor.
     *
     */
    public GoodPacket() {
        // Nothing here
    }

    public GoodPacket(byte cmd, int extra) {
        this.cmd = cmd;
        this.extra = extra;
    }

    public void save(PacketOutputStream ps) {
        ps.saveByte(cmd);
        ps.saveInt(extra);
    }

    public void load(PacketInputStream ps) {
        cmd = ps.loadByte();
        extra = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("GoodPacket :");
        result.Append(" cmd["+cmd+"]");
        result.Append(" extra["+extra+"]");
        return result.ToString();
    }

}
}