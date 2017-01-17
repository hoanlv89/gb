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

public class MttTransportPacket : ProtocolObject {
    public const int CLASSID = 104;

    public byte classId() {
        return CLASSID;
    }

    public int mttid;
    public int pid;
    public byte[] mttdata = new byte[0];

    /**
     * Default constructor.
     *
     */
    public MttTransportPacket() {
        // Nothing here
    }

    public MttTransportPacket(int mttid, int pid, byte[] mttdata) {
        this.mttid = mttid;
        this.pid = pid;
        this.mttdata = mttdata;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(mttid);
        ps.saveInt(pid);
        ps.saveInt(mttdata.Length);
        ps.saveArray(mttdata);
    }

    public void load(PacketInputStream ps) {
        mttid = ps.loadInt();
        pid = ps.loadInt();
        int mttdataCount = ps.loadInt();
        mttdata = new byte[mttdataCount];
        if ( mttdataCount > 0 ) {
            ps.loadByteArray(mttdata);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("MttTransportPacket :");
        result.Append(" mttid["+mttid+"]");
        result.Append(" pid["+pid+"]");
        result.Append(" mttdata["+mttdata+"]");
        return result.ToString();
    }

}
}