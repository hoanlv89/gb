#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// com.cubeia.firebase.io.protocol.LoginResponsePacket
struct LoginResponsePacket_t1137457242;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_i621885505.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.LoginResponsePacket::.ctor()
extern "C"  void LoginResponsePacket__ctor_m1281056730 (LoginResponsePacket_t1137457242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LoginResponsePacket::.ctor(System.String,System.Int32,com.cubeia.firebase.io.protocol.Enums/ResponseStatus,System.Int32,System.String,System.Byte[])
extern "C"  void LoginResponsePacket__ctor_m1165739872 (LoginResponsePacket_t1137457242 * __this, String_t* ___screenname0, int32_t ___pid1, int32_t ___status2, int32_t ___code3, String_t* ___message4, ByteU5BU5D_t3397334013* ___credentials5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.LoginResponsePacket::classId()
extern "C"  uint8_t LoginResponsePacket_classId_m1210086139 (LoginResponsePacket_t1137457242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LoginResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void LoginResponsePacket_save_m2007886298 (LoginResponsePacket_t1137457242 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LoginResponsePacket::load(Styx.PacketInputStream)
extern "C"  void LoginResponsePacket_load_m1855066520 (LoginResponsePacket_t1137457242 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.LoginResponsePacket::ToString()
extern "C"  String_t* LoginResponsePacket_ToString_m3867634637 (LoginResponsePacket_t1137457242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
