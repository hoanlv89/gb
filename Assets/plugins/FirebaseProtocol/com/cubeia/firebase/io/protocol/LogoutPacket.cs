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

public class LogoutPacket : ProtocolObject {
    public const int CLASSID = 12;

    public byte classId() {
        return CLASSID;
    }

    public bool leaveTables;

    /**
     * Default constructor.
     *
     */
    public LogoutPacket() {
        // Nothing here
    }

    public LogoutPacket(bool leaveTables) {
        this.leaveTables = leaveTables;
    }

    public void save(PacketOutputStream ps) {
        ps.saveBool(leaveTables);
    }

    public void load(PacketInputStream ps) {
        leaveTables = ps.loadBool();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("LogoutPacket :");
        result.Append(" leave_tables["+leaveTables+"]");
        return result.ToString();
    }

}
}