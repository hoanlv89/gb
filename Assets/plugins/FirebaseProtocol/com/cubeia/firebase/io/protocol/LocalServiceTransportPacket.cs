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

public class LocalServiceTransportPacket : ProtocolObject {
    public const int CLASSID = 103;

    public byte classId() {
        return CLASSID;
    }

    public int seq;
    public byte[] servicedata = new byte[0];

    /**
     * Default constructor.
     *
     */
    public LocalServiceTransportPacket() {
        // Nothing here
    }

    public LocalServiceTransportPacket(int seq, byte[] servicedata) {
        this.seq = seq;
        this.servicedata = servicedata;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(seq);
        ps.saveInt(servicedata.Length);
        ps.saveArray(servicedata);
    }

    public void load(PacketInputStream ps) {
        seq = ps.loadInt();
        int servicedataCount = ps.loadInt();
        servicedata = new byte[servicedataCount];
        if ( servicedataCount > 0 ) {
            ps.loadByteArray(servicedata);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("LocalServiceTransportPacket :");
        result.Append(" seq["+seq+"]");
        result.Append(" servicedata["+servicedata+"]");
        return result.ToString();
    }

}
}