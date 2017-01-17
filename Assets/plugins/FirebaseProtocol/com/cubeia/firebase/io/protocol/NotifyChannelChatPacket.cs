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

public class NotifyChannelChatPacket : ProtocolObject {
    public const int CLASSID = 123;

    public byte classId() {
        return CLASSID;
    }

    public int pid;
    public int channelid;
    public int targetid;
    public string nick;
    public string message;

    /**
     * Default constructor.
     *
     */
    public NotifyChannelChatPacket() {
        // Nothing here
    }

    public NotifyChannelChatPacket(int pid, int channelid, int targetid, string nick, string message) {
        this.pid = pid;
        this.channelid = channelid;
        this.targetid = targetid;
        this.nick = nick;
        this.message = message;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(pid);
        ps.saveInt(channelid);
        ps.saveInt(targetid);
        ps.saveString(nick);
        ps.saveString(message);
    }

    public void load(PacketInputStream ps) {
        pid = ps.loadInt();
        channelid = ps.loadInt();
        targetid = ps.loadInt();
        nick = ps.loadString();
        message = ps.loadString();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("NotifyChannelChatPacket :");
        result.Append(" pid["+pid+"]");
        result.Append(" channelid["+channelid+"]");
        result.Append(" targetid["+targetid+"]");
        result.Append(" nick["+nick+"]");
        result.Append(" message["+message+"]");
        return result.ToString();
    }

}
}