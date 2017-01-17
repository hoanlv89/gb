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

public class ParamFilter : ProtocolObject {
    public const int CLASSID = 6;

    public byte classId() {
        return CLASSID;
    }

    public Param param;
    public byte op;

    /**
     * Default constructor.
     *
     */
    public ParamFilter() {
        // Nothing here
    }

    public ParamFilter(Param param, byte op) {
        this.param = param;
        this.op = op;
    }

    public void save(PacketOutputStream ps) {
        param.save(ps);
        ps.saveByte(op);
    }

    public void load(PacketInputStream ps) {
        param = new Param();
        param.load(ps);
        op = ps.loadByte();
    }
    

    override public String ToString() {
        StringBuilder result = new StringBuilder("ParamFilter :");
        result.Append(" param["+param+"]");
        result.Append(" op["+op+"]");
        return result.ToString();
    }

}
}