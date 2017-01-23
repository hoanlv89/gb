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

// com.cubeia.firebase.io.protocol.LobbyUnsubscribePacket
struct LobbyUnsubscribePacket_t2811026613;
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

// System.Void com.cubeia.firebase.io.protocol.LobbyUnsubscribePacket::.ctor()
extern "C"  void LobbyUnsubscribePacket__ctor_m3298437155 (LobbyUnsubscribePacket_t2811026613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyUnsubscribePacket::.ctor(com.cubeia.firebase.io.protocol.Enums/LobbyType,System.Int32,System.String)
extern "C"  void LobbyUnsubscribePacket__ctor_m3131702890 (LobbyUnsubscribePacket_t2811026613 * __this, int32_t ___type0, int32_t ___gameid1, String_t* ___address2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.LobbyUnsubscribePacket::classId()
extern "C"  uint8_t LobbyUnsubscribePacket_classId_m1940598488 (LobbyUnsubscribePacket_t2811026613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyUnsubscribePacket::save(Styx.PacketOutputStream)
extern "C"  void LobbyUnsubscribePacket_save_m2126346941 (LobbyUnsubscribePacket_t2811026613 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyUnsubscribePacket::load(Styx.PacketInputStream)
extern "C"  void LobbyUnsubscribePacket_load_m4261703855 (LobbyUnsubscribePacket_t2811026613 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.LobbyUnsubscribePacket::ToString()
extern "C"  String_t* LobbyUnsubscribePacket_ToString_m2095016 (LobbyUnsubscribePacket_t2811026613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
