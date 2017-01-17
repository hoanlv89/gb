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

public class ServiceTransportPacket : ProtocolObject {
    public const int CLASSID = 101;

    public byte classId() {
        return CLASSID;
    }

    public int pid;
    public int seq;
    public string service;
    public byte idtype;
    public byte[] servicedata = new byte[0];
	public int fixed_miss;

    

    /**
     * Default constructor.
     *
     */
    public ServiceTransportPacket() {
        // Nothing here
    }

    public ServiceTransportPacket(int pid, int seq, string service, byte idtype, byte[] servicedata)
    {
        this.pid = pid;
        this.seq = seq;
        this.service = service;
        this.idtype = idtype;
        this.servicedata = servicedata;
		this.fixed_miss = 0;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(pid);
        ps.saveInt(seq);
        ps.saveString(service);
        ps.saveByte(idtype);
        ps.saveInt(servicedata.Length);
        //ps.saveString(servicedata);
        ps.saveArray(servicedata);
		ps.saveInt(fixed_miss);
    }

    public void load(PacketInputStream ps) {
        pid = ps.loadInt();
        seq = ps.loadInt();
        service = ps.loadString();
        idtype = ps.loadByte();
        int servicedataCount = ps.loadInt();
        servicedata = new byte[servicedataCount];
        if ( servicedataCount > 0 ) {
            ps.loadByteArray(servicedata);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("ServiceTransportPacket :");
        result.Append(" pid["+pid+"]");
        result.Append(" seq["+seq+"]");
        result.Append(" service["+service+"]");
        result.Append(" idtype["+idtype+"]");
        result.Append(" servicedata["+servicedata+"]");
        return result.ToString();
    }

}
}