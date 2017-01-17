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

public class VersionPacket : ProtocolObject {
    public const int CLASSID = 0;

    public byte classId() {
        return CLASSID;
    }

    public int game;
    public int operatorid;
    public int protocol;

    /**
     * Default constructor.
     *
     */
    public VersionPacket() {
        // Nothing here
    }

    public VersionPacket(int game, int operatorid, int protocol) {
        this.game = game;
        this.operatorid = operatorid;
        this.protocol = protocol;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(game);
        ps.saveInt(operatorid);
        ps.saveInt(protocol);
    }

    public void load(PacketInputStream ps) {
        game = ps.loadInt();
        operatorid = ps.loadInt();
        protocol = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("VersionPacket :");
        result.Append(" game["+game+"]");
        result.Append(" operatorid["+operatorid+"]");
        result.Append(" protocol["+protocol+"]");
        return result.ToString();
    }

}
}