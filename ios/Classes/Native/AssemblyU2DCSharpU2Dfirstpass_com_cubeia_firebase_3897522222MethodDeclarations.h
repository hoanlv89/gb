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

// com.cubeia.firebase.io.protocol.LobbyQueryPacket
struct LobbyQueryPacket_t3897522222;
// System.String
struct String_t;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_io68853350.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.LobbyQueryPacket::.ctor()
extern "C"  void LobbyQueryPacket__ctor_m1361943962 (LobbyQueryPacket_t3897522222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyQueryPacket::.ctor(System.Int32,System.String,com.cubeia.firebase.io.protocol.Enums/LobbyType)
extern "C"  void LobbyQueryPacket__ctor_m822982283 (LobbyQueryPacket_t3897522222 * __this, int32_t ___gameid0, String_t* ___address1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.LobbyQueryPacket::classId()
extern "C"  uint8_t LobbyQueryPacket_classId_m3184346095 (LobbyQueryPacket_t3897522222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyQueryPacket::save(Styx.PacketOutputStream)
extern "C"  void LobbyQueryPacket_save_m4207492746 (LobbyQueryPacket_t3897522222 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LobbyQueryPacket::load(Styx.PacketInputStream)
extern "C"  void LobbyQueryPacket_load_m1776019032 (LobbyQueryPacket_t3897522222 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.LobbyQueryPacket::ToString()
extern "C"  String_t* LobbyQueryPacket_ToString_m2196290597 (LobbyQueryPacket_t3897522222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
