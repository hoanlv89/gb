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

public class ProbePacket : ProtocolObject {
    public const int CLASSID = 201;

    public byte classId() {
        return CLASSID;
    }

    public int id;
    public int tableid;
    public List<ProbeStamp> stamps = new List<ProbeStamp>();

    /**
     * Default constructor.
     *
     */
    public ProbePacket() {
        // Nothing here
    }

    public ProbePacket(int id, int tableid, List<ProbeStamp> stamps) {
        this.id = id;
        this.tableid = tableid;
        this.stamps = stamps;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(id);
        ps.saveInt(tableid);
        if (stamps == null) {
            ps.saveInt(0);
        } else {
            ProbeStamp[] probeStampArray = stamps.ToArray();
            ps.saveInt(probeStampArray.Length);
            foreach(ProbeStamp probeStampObject in probeStampArray) {
                probeStampObject.save(ps);
            }
        }
    }

    public void load(PacketInputStream ps) {
        id = ps.loadInt();
        tableid = ps.loadInt();
        int stampsCount = ps.loadInt();
        stamps = new List<ProbeStamp>(stampsCount);
        for(int i = 0; i != stampsCount; ++i) {
            ProbeStamp _tmp = new ProbeStamp();
            _tmp.load(ps);
            stamps.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("ProbePacket :");
        result.Append(" id["+id+"]");
        result.Append(" tableid["+tableid+"]");
        result.Append(" stamps["+stamps+"]");
        return result.ToString();
    }

}
}