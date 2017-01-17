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

public class JoinChatChannelResponsePacket : ProtocolObject {
    public const int CLASSID = 121;

    public byte classId() {
        return CLASSID;
    }

    public int channelid;
    public Enums.ResponseStatus status = Enums.makeResponseStatus(0);

    /**
     * Default constructor.
     *
     */
    public JoinChatChannelResponsePacket() {
        // Nothing here
    }

    public JoinChatChannelResponsePacket(int channelid, Enums.ResponseStatus status) {
        this.channelid = channelid;
        this.status = status;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(channelid);
        ps.saveUnsignedByte((byte)status);
    }

    public void load(PacketInputStream ps) {
        channelid = ps.loadInt();
        status = Enums.makeResponseStatus(ps.loadUnsignedByte());
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("JoinChatChannelResponsePacket :");
        result.Append(" channelid["+channelid+"]");
        result.Append(" status["+status+"]");
        return result.ToString();
    }

}
}