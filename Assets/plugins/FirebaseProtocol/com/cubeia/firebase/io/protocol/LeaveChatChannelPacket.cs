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

public class LeaveChatChannelPacket : ProtocolObject {
    public const int CLASSID = 122;

    public byte classId() {
        return CLASSID;
    }

    public int channelid;

    /**
     * Default constructor.
     *
     */
    public LeaveChatChannelPacket() {
        // Nothing here
    }

    public LeaveChatChannelPacket(int channelid) {
        this.channelid = channelid;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(channelid);
    }

    public void load(PacketInputStream ps) {
        channelid = ps.loadInt();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("LeaveChatChannelPacket :");
        result.Append(" channelid["+channelid+"]");
        return result.ToString();
    }

}
}