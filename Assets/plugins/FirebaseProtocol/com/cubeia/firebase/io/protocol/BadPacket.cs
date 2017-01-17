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

public class BadPacket : ProtocolObject {
    public const int CLASSID = 3;

    public byte classId() {
        return CLASSID;
    }

    public byte cmd;
    public byte error;

    /**
     * Default constructor.
     *
     */
    public BadPacket() {
        // Nothing here
    }

    public BadPacket(byte cmd, byte error) {
        this.cmd = cmd;
        this.error = error;
    }

    public void save(PacketOutputStream ps) {
        ps.saveByte(cmd);
        ps.saveByte(error);
    }

    public void load(PacketInputStream ps) {
        cmd = ps.loadByte();
        error = ps.loadByte();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("BadPacket :");
        result.Append(" cmd["+cmd+"]");
        result.Append(" error["+error+"]");
        return result.ToString();
    }

}
}