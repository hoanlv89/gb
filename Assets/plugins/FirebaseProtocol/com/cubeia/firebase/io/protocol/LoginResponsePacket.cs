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

public class LoginResponsePacket : ProtocolObject {
    public const int CLASSID = 11;

    public byte classId() {
        return CLASSID;
    }

    public string screenname;
    public int pid;
    public Enums.ResponseStatus status = Enums.makeResponseStatus(0);
    public int code;
    public string message;
    public byte[] credentials = new byte[0];

    /**
     * Default constructor.
     *
     */
    public LoginResponsePacket() {
        // Nothing here
    }

    public LoginResponsePacket(string screenname, int pid, Enums.ResponseStatus status, int code, string message, byte[] credentials) {
        this.screenname = screenname;
        this.pid = pid;
        this.status = status;
        this.code = code;
        this.message = message;
        this.credentials = credentials;
    }

    public void save(PacketOutputStream ps) {
        ps.saveString(screenname);
        ps.saveInt(pid);
        ps.saveUnsignedByte((byte)status);
        ps.saveInt(code);
        ps.saveString(message);
        ps.saveInt(credentials.Length);
        ps.saveArray(credentials);
    }

    public void load(PacketInputStream ps) {
        screenname = ps.loadString();
        pid = ps.loadInt();
        status = Enums.makeResponseStatus(ps.loadUnsignedByte());
        code = ps.loadInt();
        message = ps.loadString();
        int credentialsCount = ps.loadInt();
        credentials = new byte[credentialsCount];
        if ( credentialsCount > 0 ) {
            ps.loadByteArray(credentials);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("LoginResponsePacket :");
        result.Append(" screenname["+screenname+"]");
        result.Append(" pid["+pid+"]");
        result.Append(" status["+status+"]");
        result.Append(" code["+code+"]");
        result.Append(" message["+message+"]");
        result.Append(" credentials["+credentials+"]");
        return result.ToString();
    }

}
}