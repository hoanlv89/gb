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

// com.cubeia.firebase.io.protocol.PlayerQueryRequestPacket
struct PlayerQueryRequestPacket_t1458383950;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.PlayerQueryRequestPacket::.ctor()
extern "C"  void PlayerQueryRequestPacket__ctor_m1741349610 (PlayerQueryRequestPacket_t1458383950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PlayerQueryRequestPacket::.ctor(System.Int32)
extern "C"  void PlayerQueryRequestPacket__ctor_m3710330055 (PlayerQueryRequestPacket_t1458383950 * __this, int32_t ___pid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.PlayerQueryRequestPacket::classId()
extern "C"  uint8_t PlayerQueryRequestPacket_classId_m2635325471 (PlayerQueryRequestPacket_t1458383950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PlayerQueryRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void PlayerQueryRequestPacket_save_m1642836174 (PlayerQueryRequestPacket_t1458383950 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PlayerQueryRequestPacket::load(Styx.PacketInputStream)
extern "C"  void PlayerQueryRequestPacket_load_m1013658472 (PlayerQueryRequestPacket_t1458383950 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.PlayerQueryRequestPacket::ToString()
extern "C"  String_t* PlayerQueryRequestPacket_ToString_m2001301553 (PlayerQueryRequestPacket_t1458383950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
