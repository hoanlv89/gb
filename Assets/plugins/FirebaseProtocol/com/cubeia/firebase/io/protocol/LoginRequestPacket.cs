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

public class LoginRequestPacket : ProtocolObject {
    public const int CLASSID = 10;

    public byte classId() {
        return CLASSID;
    }

    public string user;
    public string password;
    public int operatorid;
    public byte[] credentials = new byte[0];

    /**
     * Default constructor.
     *
     */
    public LoginRequestPacket() {
        // Nothing here
    }

    public LoginRequestPacket(string user, string password, int operatorid, byte[] credentials) {
        this.user = user;
        this.password = password;
        this.operatorid = operatorid;
        this.credentials = credentials;
    }

    public void save(PacketOutputStream ps) {
        ps.saveString(user);
        ps.saveString(password);
        ps.saveInt(operatorid);
        ps.saveInt(credentials.Length);
        ps.saveArray(credentials);
    }

    public void load(PacketInputStream ps) {
        user = ps.loadString();
        password = ps.loadString();
        operatorid = ps.loadInt();
        int credentialsCount = ps.loadInt();
        credentials = new byte[credentialsCount];
        if ( credentialsCount > 0 ) {
            ps.loadByteArray(credentials);
        }
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("LoginRequestPacket :");
        result.Append(" user["+user+"]");
        result.Append(" password["+password+"]");
        result.Append(" operatorid["+operatorid+"]");
        result.Append(" credentials["+credentials+"]");
        return result.ToString();
    }

}
}