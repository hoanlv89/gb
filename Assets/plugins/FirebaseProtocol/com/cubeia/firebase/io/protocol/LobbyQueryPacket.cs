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

public class LobbyQueryPacket : ProtocolObject {
    public const int CLASSID = 142;

    public byte classId() {
        return CLASSID;
    }

    public int gameid;
    public string address;
    public Enums.LobbyType type = Enums.makeLobbyType(0);

    /**
     * Default constructor.
     *
     */
    public LobbyQueryPacket() {
        // Nothing here
    }

    public LobbyQueryPacket(int gameid, string address, Enums.LobbyType type) {
        this.gameid = gameid;
        this.address = address;
        this.type = type;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(gameid);
        ps.saveString(address);
        ps.saveUnsignedByte((byte)type);
    }

    public void load(PacketInputStream ps) {
        gameid = ps.loadInt();
        address = ps.loadString();
        type = Enums.makeLobbyType(ps.loadUnsignedByte());
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("LobbyQueryPacket :");
        result.Append(" gameid["+gameid+"]");
        result.Append(" address["+address+"]");
        result.Append(" type["+type+"]");
        return result.ToString();
    }

}
}