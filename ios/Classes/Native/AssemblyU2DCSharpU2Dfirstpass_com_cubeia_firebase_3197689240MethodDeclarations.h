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

// com.cubeia.firebase.io.protocol.LoginRequestPacket
struct LoginRequestPacket_t3197689240;
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
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.LoginRequestPacket::.ctor()
extern "C"  void LoginRequestPacket__ctor_m2123143796 (LoginRequestPacket_t3197689240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LoginRequestPacket::.ctor(System.String,System.String,System.Int32,System.Byte[])
extern "C"  void LoginRequestPacket__ctor_m3957880176 (LoginRequestPacket_t3197689240 * __this, String_t* ___user0, String_t* ___password1, int32_t ___operatorid2, ByteU5BU5D_t3397334013* ___credentials3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.LoginRequestPacket::classId()
extern "C"  uint8_t LoginRequestPacket_classId_m1393992165 (LoginRequestPacket_t3197689240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LoginRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void LoginRequestPacket_save_m3643376380 (LoginRequestPacket_t3197689240 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LoginRequestPacket::load(Styx.PacketInputStream)
extern "C"  void LoginRequestPacket_load_m3075062910 (LoginRequestPacket_t3197689240 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.LoginRequestPacket::ToString()
extern "C"  String_t* LoginRequestPacket_ToString_m279647515 (LoginRequestPacket_t3197689240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
