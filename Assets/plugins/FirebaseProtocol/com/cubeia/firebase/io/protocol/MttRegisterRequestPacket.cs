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

public class MttRegisterRequestPacket : ProtocolObject {
    public const int CLASSID = 205;

    public byte classId() {
        return CLASSID;
    }

    public int mttid;
    public List<Param> parameters = new List<Param>();

    /**
     * Default constructor.
     *
     */
    public MttRegisterRequestPacket() {
        // Nothing here
    }

    public MttRegisterRequestPacket(int mttid, List<Param> parameters) {
        this.mttid = mttid;
        this.parameters = parameters;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(mttid);
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
        mttid = ps.loadInt();
        int parametersCount = ps.loadInt();
        parameters = new List<Param>(parametersCount);
        for(int i = 0; i != parametersCount; ++i) {
            Param _tmp = new Param();
            _tmp.load(ps);
            parameters.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("MttRegisterRequestPacket :");
        result.Append(" mttid["+mttid+"]");
        result.Append(" parameters["+parameters+"]");
        return result.ToString();
    }

}
}