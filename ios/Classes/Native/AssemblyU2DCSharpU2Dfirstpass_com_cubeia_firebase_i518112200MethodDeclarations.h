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

// com.cubeia.firebase.io.protocol.LobbySubscribePacket
struct LobbySubscribePacket_t518112200;
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

// System.Void com.cubeia.firebase.io.protocol.LobbySubscribePacket::.ctor()
extern "C"  void LobbySubscribePacket__ctor_m1197998550 (LobbySubscribePacket_t518112200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbySubscribePacket::.ctor(com.cubeia.firebase.io.protocol.Enums/LobbyType,System.Int32,System.String)
extern "C"  void LobbySubscribePacket__ctor_m4052868193 (LobbySubscribePacket_t518112200 * __this, int32_t ___type0, int32_t ___gameid1, String_t* ___address2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.LobbySubscribePacket::classId()
extern "C"  uint8_t LobbySubscribePacket_classId_m2901348757 (LobbySubscribePacket_t518112200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbySubscribePacket::save(Styx.PacketOutputStream)
extern "C"  void LobbySubscribePacket_save_m1099405262 (LobbySubscribePacket_t518112200 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbySubscribePacket::load(Styx.PacketInputStream)
extern "C"  void LobbySubscribePacket_load_m3818822972 (LobbySubscribePacket_t518112200 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.LobbySubscribePacket::ToString()
extern "C"  String_t* LobbySubscribePacket_ToString_m2756520767 (LobbySubscribePacket_t518112200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
