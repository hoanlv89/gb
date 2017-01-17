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

public class TableUpdatePacket : ProtocolObject {
    public const int CLASSID = 144;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public short seated;
    public List<Param> parameters = new List<Param>();
    public string[] removedParams = new string[0];

    /**
     * Default constructor.
     *
     */
    public TableUpdatePacket() {
        // Nothing here
    }

    public TableUpdatePacket(int tableid, short seated, List<Param> parameters, string[] removedParams) {
        this.tableid = tableid;
        this.seated = seated;
        this.parameters = parameters;
        this.removedParams = removedParams;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
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
        ps.saveInt(removedParams.Length);
        ps.saveArray(removedParams);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        seated = ps.loadShort();
        int parametersCount = ps.loadInt();
        parameters = new List<Param>(parametersCount);
        for(int i = 0; i != parametersCount; ++i) {
            Param _tmp = new Param();
            _tmp.load(ps);
            parameters.Add(_tmp);
        }
        int removedParamsCount = ps.loadInt();
        removedParams = new string[removedParamsCount];
        ps.loadStringArray(removedParams);
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("TableUpdatePacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" seated["+seated+"]");
        result.Append(" parameters["+parameters+"]");
        result.Append(" removed_params["+removedParams+"]");
        return result.ToString();
    }

}
}