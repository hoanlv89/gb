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

public class GameVersionPacket : ProtocolObject {
    public const int CLASSID = 1;

    public byte classId() {
        return CLASSID;
    }

    public int game;
    public int operatorid;
    public string version;

    /**
     * Default constructor.
     *
     */
    public GameVersionPacket() {
        // Nothing here
    }

    public GameVersionPacket(int game, int operatorid, string version) {
        this.game = game;
        this.operatorid = operatorid;
        this.version = version;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(game);
        ps.saveInt(operatorid);
        ps.saveString(version);
    }

    public void load(PacketInputStream ps) {
        game = ps.loadInt();
        operatorid = ps.loadInt();
        version = ps.loadString();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("GameVersionPacket :");
        result.Append(" game["+game+"]");
        result.Append(" operatorid["+operatorid+"]");
        result.Append(" version["+version+"]");
        return result.ToString();
    }

}
}