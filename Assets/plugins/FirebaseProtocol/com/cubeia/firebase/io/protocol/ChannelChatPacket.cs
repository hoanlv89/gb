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

public class ChannelChatPacket : ProtocolObject {
    public const int CLASSID = 124;

    public byte classId() {
        return CLASSID;
    }

    public int channelid;
    public int targetid;
    public string message;

    /**
     * Default constructor.
     *
     */
    public ChannelChatPacket() {
        // Nothing here
    }

    public ChannelChatPacket(int channelid, int targetid, string message) {
        this.channelid = channelid;
        this.targetid = targetid;
        this.message = message;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(channelid);
        ps.saveInt(targetid);
        ps.saveString(message);
    }

    public void load(PacketInputStream ps) {
        channelid = ps.loadInt();
        targetid = ps.loadInt();
        message = ps.loadString();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("ChannelChatPacket :");
        result.Append(" channelid["+channelid+"]");
        result.Append(" targetid["+targetid+"]");
        result.Append(" message["+message+"]");
        return result.ToString();
    }

}
}