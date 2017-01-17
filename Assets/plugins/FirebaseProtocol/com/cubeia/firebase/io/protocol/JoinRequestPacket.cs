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

public class JoinRequestPacket : ProtocolObject {
    public const int CLASSID = 30;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public byte seat;
    public List<Param> parameters = new List<Param>();

    /**
     * Default constructor.
     *
     */
    public JoinRequestPacket() {
        // Nothing here
    }

    public JoinRequestPacket(int tableid, byte seat, List<Param> parameters) {
        this.tableid = tableid;
        this.seat = seat;
        this.parameters = parameters;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveByte(seat);
        if (parameters == null) {
            ps.saveInt(0);
        } else {
            Param[] paramArray = parameters.ToArray();
            ps.saveInt(paramArray.Length);
            foreach(Param paramObject in paramArray) {
                paramObject.save(ps);
            }
        }
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        seat = ps.loadByte();
        int parametersCount = ps.loadInt();
        parameters = new List<Param>(parametersCount);
        for(int i = 0; i != parametersCount; ++i) {
            Param _tmp = new Param();
            _tmp.load(ps);
            parameters.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("JoinRequestPacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" seat["+seat+"]");
        result.Append(" parameters["+parameters+"]");
        return result.ToString();
    }

}
}