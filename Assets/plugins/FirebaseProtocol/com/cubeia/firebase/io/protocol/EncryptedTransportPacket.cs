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

public class EncryptedTransportPacket : ProtocolObject {
    public const int CLASSID = 105;

    public byte classId() {
        return CLASSID;
    }

    public byte func;
    public byte[] payload = new byte[0];

    /**
     * Default constructor.
     *
     */
    public EncryptedTransportPacket() {
        // Nothing here
    }

    public EncryptedTransportPacket(byte func, byte[] payload) {
        this.func = func;
        this.payload = payload;
    }

    public void save(PacketOutputStream ps) {
        ps.saveByte(func);
        ps.saveInt(payload.Length);
        ps.saveArray(payload);
    }

    public void load(PacketInputStream ps) {
        func = ps.loadByte();
        int payloadCount = ps.loadInt();
        payload = new byte[payloadCount];
        if ( payloadCount > 0 ) {
            ps.loadByteArray(payload);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("EncryptedTransportPacket :");
        result.Append(" func["+func+"]");
        result.Append(" payload["+payload+"]");
        return result.ToString();
    }

}
}