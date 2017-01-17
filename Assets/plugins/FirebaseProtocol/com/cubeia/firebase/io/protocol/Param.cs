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

public class Param : ProtocolObject {
    public const int CLASSID = 5;

    public byte classId() {
        return CLASSID;
    }

    public string key;
    public byte type;
    public byte[] value = new byte[0];

    /**
     * Default constructor.
     *
     */
    public Param() {
        // Nothing here
    }

    public Param(string key, byte type, byte[] value) {
        this.key = key;
        this.type = type;
        this.value = value;
    }

    public void save(PacketOutputStream ps) {
        ps.saveString(key);
        ps.saveByte(type);
        ps.saveInt(value.Length);
        ps.saveArray(value);
    }

    public void load(PacketInputStream ps) {
        key = ps.loadString();
        type = ps.loadByte();
        int valueCount = ps.loadInt();
        value = new byte[valueCount];
        if ( valueCount > 0 ) {
            ps.loadByteArray(value);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("Param :");
        result.Append(" key["+key+"]");
        result.Append(" type["+type+"]");
        result.Append(" value["+value+"]");
        return result.ToString();
    }

}
}