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

public class TableQueryResponsePacket : ProtocolObject {
    public const int CLASSID = 39;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public Enums.ResponseStatus status = Enums.makeResponseStatus(0);
    public List<SeatInfoPacket> seats = new List<SeatInfoPacket>();

    /**
     * Default constructor.
     *
     */
    public TableQueryResponsePacket() {
        // Nothing here
    }

    public TableQueryResponsePacket(int tableid, Enums.ResponseStatus status, List<SeatInfoPacket> seats) {
        this.tableid = tableid;
        this.status = status;
        this.seats = seats;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveUnsignedByte((byte)status);
        if (seats == null) {
            ps.saveInt(0);
        } else {
            SeatInfoPacket[] seatInfoPacketArray = seats.ToArray();
            ps.saveInt(seatInfoPacketArray.Length);
            foreach(SeatInfoPacket seatInfoPacketObject in seatInfoPacketArray) {
                seatInfoPacketObject.save(ps);
            }
        }
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        status = Enums.makeResponseStatus(ps.loadUnsignedByte());
        int seatsCount = ps.loadInt();
        seats = new List<SeatInfoPacket>(seatsCount);
        for(int i = 0; i != seatsCount; ++i) {
            SeatInfoPacket _tmp = new SeatInfoPacket();
            _tmp.load(ps);
            seats.Add(_tmp);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("TableQueryResponsePacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" status["+status+"]");
        result.Append(" seats["+seats+"]");
        return result.ToString();
    }

}
}