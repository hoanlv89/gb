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

public class LobbyUnsubscribePacket : ProtocolObject {
    public const int CLASSID = 146;

    public byte classId() {
        return CLASSID;
    }

    public Enums.LobbyType type = Enums.makeLobbyType(0);
    public int gameid;
    public string address;

    /**
     * Default constructor.
     *
     */
    public LobbyUnsubscribePacket() {
        // Nothing here
    }

    public LobbyUnsubscribePacket(Enums.LobbyType type, int gameid, string address) {
        this.type = type;
        this.gameid = gameid;
        this.address = address;
    }

    public void save(PacketOutputStream ps) {
        ps.saveUnsignedByte((byte)type);
        ps.saveInt(gameid);
        ps.saveString(address);
    }

    public void load(PacketInputStream ps) {
        type = Enums.makeLobbyType(ps.loadUnsignedByte());
        gameid = ps.loadInt();
        address = ps.loadString();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("LobbyUnsubscribePacket :");
        result.Append(" type["+type+"]");
        result.Append(" gameid["+gameid+"]");
        result.Append(" address["+address+"]");
        return result.ToString();
    }

}
}