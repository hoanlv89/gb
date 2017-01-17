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

public class PlayerInfoPacket : ProtocolObject {
    public const int CLASSID = 13;

    public byte classId() {
        return CLASSID;
    }

    public int pid;
    public string nick;
    public List<Param> details = new List<Param>();

    /**
     * Default constructor.
     *
     */
    public PlayerInfoPacket() {
        // Nothing here
    }

    public PlayerInfoPacket(int pid, string nick, List<Param> details) {
        this.pid = pid;
        this.nick = nick;
        this.details = details;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(pid);
        ps.saveString(nick);
        if (details == null) {
            ps.saveInt(0);
        } else {
            Param[] paramArray = details.ToArray();
            ps.saveInt(paramArray.Length);
            foreach(Param paramObject in paramArray) {
                paramObject.save(ps);
            }
        }
    }

    public void load(PacketInputStream ps) {
        pid = ps.loadInt();
        nick = ps.loadString();
        int detailsCount = ps.loadInt();
        details = new List<Param>(detailsCount);
        for(int i = 0; i != detailsCount; ++i) {
            Param _tmp = new Param();
            _tmp.load(ps);
            details.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("PlayerInfoPacket :");
        result.Append(" pid["+pid+"]");
        result.Append(" nick["+nick+"]");
        result.Append(" details["+details+"]");
        return result.ToString();
    }

}
}