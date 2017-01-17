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

public class SeatInfoPacket : ProtocolObject {
    public const int CLASSID = 15;

    public byte classId() {
        return CLASSID;
    }

    public int tableid;
    public byte seat;
    public Enums.PlayerStatus status = Enums.makePlayerStatus(0);
    public PlayerInfoPacket player;

    /**
     * Default constructor.
     *
     */
    public SeatInfoPacket() {
        // Nothing here
    }

    public SeatInfoPacket(int tableid, byte seat, Enums.PlayerStatus status, PlayerInfoPacket player) {
        this.tableid = tableid;
        this.seat = seat;
        this.status = status;
        this.player = player;
    }

    public void save(PacketOutputStream ps) {
        ps.saveInt(tableid);
        ps.saveByte(seat);
        ps.saveUnsignedByte((byte)status);
        player.save(ps);
    }

    public void load(PacketInputStream ps) {
        tableid = ps.loadInt();
        seat = ps.loadByte();
        status = Enums.makePlayerStatus(ps.loadUnsignedByte());
        player = new PlayerInfoPacket();
        player.load(ps);
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("SeatInfoPacket :");
        result.Append(" tableid["+tableid+"]");
        result.Append(" seat["+seat+"]");
        result.Append(" status["+status+"]");
        result.Append(" player["+player+"]");
        return result.ToString();
    }

}
}