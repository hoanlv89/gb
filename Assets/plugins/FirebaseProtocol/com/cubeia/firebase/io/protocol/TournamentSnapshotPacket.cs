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

public class TournamentSnapshotPacket : ProtocolObject {
    public const int CLASSID = 148;

    public byte classId() {
        return CLASSID;
    }

    public int mttid;
    public string address;
    public List<Param> parameters = new List<Param>();

    /**
     * Default constructor.
     *
     */
    public TournamentSnapshotPacket() {
        // Nothing here
    }

    public TournamentSnapshotPacket(int mttid, string address, List<Param> parameters) {
        this.mttid = mttid;
        this.address = address;
        this.parameters = parameters;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(mttid);
        ps.saveString(address);
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
        address = ps.loadString();
        int parametersCount = ps.loadInt();
        parameters = new List<Param>(parametersCount);
        for(int i = 0; i != parametersCount; ++i) {
            Param _tmp = new Param();
            _tmp.load(ps);
            parameters.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("TournamentSnapshotPacket :");
        result.Append(" mttid["+mttid+"]");
        result.Append(" address["+address+"]");
        result.Append(" parameters["+parameters+"]");
        return result.ToString();
    }

}
}