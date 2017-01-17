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

public class ProbeStamp : ProtocolObject {
    public const int CLASSID = 200;

    public byte classId() {
        return CLASSID;
    }

    public string clazz;
    public long timestamp;

    /**
     * Default constructor.
     *
     */
    public ProbeStamp() {
        // Nothing here
    }

    public ProbeStamp(string clazz, long timestamp) {
        this.clazz = clazz;
        this.timestamp = timestamp;
    }

    public void save(PacketOutputStream ps) {
        ps.saveString(clazz);
        ps.saveLong(timestamp);
    }

    public void load(PacketInputStream ps) {
        clazz = ps.loadString();
        timestamp = ps.loadLong();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("ProbeStamp :");
        result.Append(" clazz["+clazz+"]");
        result.Append(" timestamp["+timestamp+"]");
        return result.ToString();
    }

}
}