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

public class TableUpdateListPacket : ProtocolObject {
    public const int CLASSID = 154;

    public byte classId() {
        return CLASSID;
    }

    public List<TableUpdatePacket> updates = new List<TableUpdatePacket>();

    /**
     * Default constructor.
     *
     */
    public TableUpdateListPacket() {
        // Nothing here
    }

    public TableUpdateListPacket(List<TableUpdatePacket> updates) {
        this.updates = updates;
    }

    public void save(PacketOutputStream ps) {
        if (updates == null) {
            ps.saveInt(0);
        } else {
            TableUpdatePacket[] tableUpdatePacketArray = updates.ToArray();
            ps.saveInt(tableUpdatePacketArray.Length);
            foreach(TableUpdatePacket tableUpdatePacketObject in tableUpdatePacketArray) {
                tableUpdatePacketObject.save(ps);
            }
        }
    }

    public void load(PacketInputStream ps) {
        int updatesCount = ps.loadInt();
        updates = new List<TableUpdatePacket>(updatesCount);
        for(int i = 0; i != updatesCount; ++i) {
            TableUpdatePacket _tmp = new TableUpdatePacket();
            _tmp.load(ps);
            updates.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("TableUpdateListPacket :");
        result.Append(" updates["+updates+"]");
        return result.ToString();
    }

}
}