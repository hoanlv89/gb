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

public class TableSnapshotPacket : ProtocolObject {
    public const int CLASSID = 143;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public string address;
    public string name;
    public short capacity;
    public short seated;
    public List<Param> parameters = new List<Param>();

    /**
     * Default constructor.
     *
     */
    public TableSnapshotPacket() {
        // Nothing here
    }

    public TableSnapshotPacket(int tableid, string address, string name, short capacity, short seated, List<Param> parameters) {
        this.tableid = tableid;
        this.address = address;
        this.name = name;
        this.capacity = capacity;
        this.seated = seated;
        this.parameters = parameters;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveString(address);
        ps.saveString(name);
        ps.saveShort(capacity);
        ps.saveShort(seated);
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
        address = ps.loadString();
        name = ps.loadString();
        capacity = ps.loadShort();
        seated = ps.loadShort();
        int parametersCount = ps.loadInt();
        parameters = new List<Param>(parametersCount);
        for(int i = 0; i != parametersCount; ++i) {
            Param _tmp = new Param();
            _tmp.load(ps);
            parameters.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("TableSnapshotPacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" address["+address+"]");
        result.Append(" name["+name+"]");
        result.Append(" capacity["+capacity+"]");
        result.Append(" seated["+seated+"]");
        result.Append(" parameters["+parameters+"]");
        return result.ToString();
    }

}
}