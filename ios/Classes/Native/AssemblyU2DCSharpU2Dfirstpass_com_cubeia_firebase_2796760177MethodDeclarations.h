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

// com.cubeia.firebase.io.protocol.LobbyObjectSubscribePacket
struct LobbyObjectSubscribePacket_t2796760177;
// System.String
struct String_t;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_io68853350.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.LobbyObjectSubscribePacket::.ctor()
extern "C"  void LobbyObjectSubscribePacket__ctor_m330043621 (LobbyObjectSubscribePacket_t2796760177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyObjectSubscribePacket::.ctor(com.cubeia.firebase.io.protocol.Enums/LobbyType,System.Int32,System.String,System.Int32)
extern "C"  void LobbyObjectSubscribePacket__ctor_m2075268653 (LobbyObjectSubscribePacket_t2796760177 * __this, int32_t ___type0, int32_t ___gameid1, String_t* ___address2, int32_t ___objectid3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.LobbyObjectSubscribePacket::classId()
extern "C"  uint8_t LobbyObjectSubscribePacket_classId_m2831366700 (LobbyObjectSubscribePacket_t2796760177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyObjectSubscribePacket::save(Styx.PacketOutputStream)
extern "C"  void LobbyObjectSubscribePacket_save_m1236755939 (LobbyObjectSubscribePacket_t2796760177 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyObjectSubscribePacket::load(Styx.PacketInputStream)
extern "C"  void LobbyObjectSubscribePacket_load_m2780732557 (LobbyObjectSubscribePacket_t2796760177 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.LobbyObjectSubscribePacket::ToString()
extern "C"  String_t* LobbyObjectSubscribePacket_ToString_m4112221644 (LobbyObjectSubscribePacket_t2796760177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
