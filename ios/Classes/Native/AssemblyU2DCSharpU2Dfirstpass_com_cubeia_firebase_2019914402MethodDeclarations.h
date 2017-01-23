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

// com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket
struct LobbyObjectUnsubscribePacket_t2019914402;
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

// System.Void com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket::.ctor()
extern "C"  void LobbyObjectUnsubscribePacket__ctor_m3395501798 (LobbyObjectUnsubscribePacket_t2019914402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket::.ctor(com.cubeia.firebase.io.protocol.Enums/LobbyType,System.Int32,System.String,System.Int32)
extern "C"  void LobbyObjectUnsubscribePacket__ctor_m1818799312 (LobbyObjectUnsubscribePacket_t2019914402 * __this, int32_t ___type0, int32_t ___gameid1, String_t* ___address2, int32_t ___objectid3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket::classId()
extern "C"  uint8_t LobbyObjectUnsubscribePacket_classId_m817908011 (LobbyObjectUnsubscribePacket_t2019914402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket::save(Styx.PacketOutputStream)
extern "C"  void LobbyObjectUnsubscribePacket_save_m2239310550 (LobbyObjectUnsubscribePacket_t2019914402 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket::load(Styx.PacketInputStream)
extern "C"  void LobbyObjectUnsubscribePacket_load_m3936360460 (LobbyObjectUnsubscribePacket_t2019914402 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket::ToString()
extern "C"  String_t* LobbyObjectUnsubscribePacket_ToString_m1398647857 (LobbyObjectUnsubscribePacket_t2019914402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
