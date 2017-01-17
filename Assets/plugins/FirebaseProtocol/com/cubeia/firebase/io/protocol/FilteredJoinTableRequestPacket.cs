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

public class FilteredJoinTableRequestPacket : ProtocolObject {
    public const int CLASSID = 170;

    public byte classId() {
        return CLASSID;
    }

    public int seq;
    public int gameid;
    public string address;
    public List<ParamFilter> parameters = new List<ParamFilter>();

    /**
     * Default constructor.
     *
     */
    public FilteredJoinTableRequestPacket() {
        // Nothing here
    }

    public FilteredJoinTableRequestPacket(int seq, int gameid, string address, List<ParamFilter> parameters) {
        this.seq = seq;
        this.gameid = gameid;
        this.address = address;
        this.parameters = parameters;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(seq);
        ps.saveInt(gameid);
        ps.saveString(address);
        if (parameters == null) {
            ps.saveInt(0);
        } else {
            ParamFilter[] paramFilterArray = parameters.ToArray();
            ps.saveInt(paramFilterArray.Length);
            foreach(ParamFilter paramFilterObject in paramFilterArray) {
                paramFilterObject.save(ps);
            }
        }
    }

    public void load(PacketInputStream ps) {
        seq = ps.loadInt();
        gameid = ps.loadInt();
        address = ps.loadString();
        int parametersCount = ps.loadInt();
        parameters = new List<ParamFilter>(parametersCount);
        for(int i = 0; i != parametersCount; ++i) {
            ParamFilter _tmp = new ParamFilter();
            _tmp.load(ps);
            parameters.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("FilteredJoinTableRequestPacket :");
        result.Append(" seq["+seq+"]");
        result.Append(" gameid["+gameid+"]");
        result.Append(" address["+address+"]");
        result.Append(" parameters["+parameters+"]");
        return result.ToString();
    }

}
}