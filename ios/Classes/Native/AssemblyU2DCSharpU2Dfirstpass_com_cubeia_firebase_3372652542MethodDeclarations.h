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

// com.cubeia.firebase.io.protocol.GameVersionPacket
struct GameVersionPacket_t3372652542;
// System.String
struct String_t;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.GameVersionPacket::.ctor()
extern "C"  void GameVersionPacket__ctor_m3608263454 (GameVersionPacket_t3372652542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.GameVersionPacket::.ctor(System.Int32,System.Int32,System.String)
extern "C"  void GameVersionPacket__ctor_m1323555858 (GameVersionPacket_t3372652542 * __this, int32_t ___game0, int32_t ___operatorid1, String_t* ___version2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.GameVersionPacket::classId()
extern "C"  uint8_t GameVersionPacket_classId_m2926832551 (GameVersionPacket_t3372652542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.GameVersionPacket::save(Styx.PacketOutputStream)
extern "C"  void GameVersionPacket_save_m1300490434 (GameVersionPacket_t3372652542 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.GameVersionPacket::load(Styx.PacketInputStream)
extern "C"  void GameVersionPacket_load_m2184875124 (GameVersionPacket_t3372652542 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.GameVersionPacket::ToString()
extern "C"  String_t* GameVersionPacket_ToString_m1104146717 (GameVersionPacket_t3372652542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
