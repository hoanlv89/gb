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

public class MttUnregisterRequestPacket : ProtocolObject {
    public const int CLASSID = 207;

    public byte classId() {
        return CLASSID;
    }

    public int mttid;

    /**
     * Default constructor.
     *
     */
    public MttUnregisterRequestPacket() {
        // Nothing here
    }

    public MttUnregisterRequestPacket(int mttid) {
        this.mttid = mttid;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(mttid);
    }

    public void load(PacketInputStream ps) {
        mttid = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("MttUnregisterRequestPacket :");
        result.Append(" mttid["+mttid+"]");
        return result.ToString();
    }

}
}