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

public class LobbyObjectSubscribePacket : ProtocolObject {
    public const int CLASSID = 151;

    public byte classId() {
        return CLASSID;
    }

    public Enums.LobbyType type = Enums.makeLobbyType(0);
    public int gameid;
    public string address;
    public int objectid;

    /**
     * Default constructor.
     *
     */
    public LobbyObjectSubscribePacket() {
        // Nothing here
    }

    public LobbyObjectSubscribePacket(Enums.LobbyType type, int gameid, string address, int objectid) {
        this.type = type;
        this.gameid = gameid;
        this.address = address;
        this.objectid = objectid;
    }

    public void save(PacketOutputStream ps) {
        ps.saveUnsignedByte((byte)type);
        ps.saveInt(gameid);
        ps.saveString(address);
        ps.saveInt(objectid);
    }

    public void load(PacketInputStream ps) {
        type = Enums.makeLobbyType(ps.loadUnsignedByte());
        gameid = ps.loadInt();
        address = ps.loadString();
        objectid = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("LobbyObjectSubscribePacket :");
        result.Append(" type["+type+"]");
        result.Append(" gameid["+gameid+"]");
        result.Append(" address["+address+"]");
        result.Append(" objectid["+objectid+"]");
        return result.ToString();
    }

}
}