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

public class ForcedLogoutPacket : ProtocolObject {
    public const int CLASSID = 14;

    public byte classId() {
        return CLASSID;
    }

    public int code;
    public string message;

    /**
     * Default constructor.
     *
     */
    public ForcedLogoutPacket() {
        // Nothing here
    }

    public ForcedLogoutPacket(int code, string message) {
        this.code = code;
        this.message = message;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(code);
        ps.saveString(message);
    }

    public void load(PacketInputStream ps) {
        code = ps.loadInt();
        message = ps.loadString();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("ForcedLogoutPacket :");
        result.Append(" code["+code+"]");
        result.Append(" message["+message+"]");
        return result.ToString();
    }

}
}