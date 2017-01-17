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

public class SystemInfoResponsePacket : ProtocolObject {
    public const int CLASSID = 19;

    public byte classId() {
        return CLASSID;
    }

    public int players;
    public List<Param> parameters = new List<Param>();

    /**
     * Default constructor.
     *
     */
    public SystemInfoResponsePacket() {
        // Nothing here
    }

    public SystemInfoResponsePacket(int players, List<Param> parameters) {
        this.players = players;
        this.parameters = parameters;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(players);
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
        players = ps.loadInt();
        int parametersCount = ps.loadInt();
        parameters = new List<Param>(parametersCount);
        for(int i = 0; i != parametersCount; ++i) {
            Param _tmp = new Param();
            _tmp.load(ps);
            parameters.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("SystemInfoResponsePacket :");
        result.Append(" players["+players+"]");
        result.Append(" parameters["+parameters+"]");
        return result.ToString();
    }

}
}