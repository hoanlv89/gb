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

public class MttPickedUpPacket : ProtocolObject {
    public const int CLASSID = 210;

    public byte classId() {
        return CLASSID;
    }

    public int mttid;
    public int tableid;
    public bool keepWatching;

    /**
     * Default constructor.
     *
     */
    public MttPickedUpPacket() {
        // Nothing here
    }

    public MttPickedUpPacket(int mttid, int tableid, bool keepWatching) {
        this.mttid = mttid;
        this.tableid = tableid;
        this.keepWatching = keepWatching;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(mttid);
        ps.saveInt(tableid);
        ps.saveBool(keepWatching);
    }

    public void load(PacketInputStream ps) {
        mttid = ps.loadInt();
        tableid = ps.loadInt();
        keepWatching = ps.loadBool();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("MttPickedUpPacket :");
        result.Append(" mttid["+mttid+"]");
        result.Append(" tableid["+tableid+"]");
        result.Append(" keep_watching["+keepWatching+"]");
        return result.ToString();
    }

}
}