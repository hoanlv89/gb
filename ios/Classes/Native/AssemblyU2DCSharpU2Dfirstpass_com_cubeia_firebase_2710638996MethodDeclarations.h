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

// com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket
struct PlayerQueryResponsePacket_t2710638996;
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

// System.Void com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket::.ctor()
extern "C"  void PlayerQueryResponsePacket__ctor_m895056900 (PlayerQueryResponsePacket_t2710638996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket::.ctor(System.Int32,System.String,com.cubeia.firebase.io.protocol.Enums/ResponseStatus,System.Byte[])
extern "C"  void PlayerQueryResponsePacket__ctor_m2683808007 (PlayerQueryResponsePacket_t2710638996 * __this, int32_t ___pid0, String_t* ___nick1, int32_t ___status2, ByteU5BU5D_t3397334013* ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket::classId()
extern "C"  uint8_t PlayerQueryResponsePacket_classId_m3250989893 (PlayerQueryResponsePacket_t2710638996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void PlayerQueryResponsePacket_save_m3049644396 (PlayerQueryResponsePacket_t2710638996 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket::load(Styx.PacketInputStream)
extern "C"  void PlayerQueryResponsePacket_load_m2366016094 (PlayerQueryResponsePacket_t2710638996 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket::ToString()
extern "C"  String_t* PlayerQueryResponsePacket_ToString_m2514076467 (PlayerQueryResponsePacket_t2710638996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
