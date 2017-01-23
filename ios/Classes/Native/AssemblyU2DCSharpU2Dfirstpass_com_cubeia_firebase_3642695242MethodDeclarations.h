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

// com.cubeia.firebase.io.protocol.InvitePlayersRequestPacket
struct InvitePlayersRequestPacket_t3642695242;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.InvitePlayersRequestPacket::.ctor()
extern "C"  void InvitePlayersRequestPacket__ctor_m3965699608 (InvitePlayersRequestPacket_t3642695242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.InvitePlayersRequestPacket::.ctor(System.Int32,System.Int32[])
extern "C"  void InvitePlayersRequestPacket__ctor_m1530944004 (InvitePlayersRequestPacket_t3642695242 * __this, int32_t ___tableid0, Int32U5BU5D_t3030399641* ___invitees1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.InvitePlayersRequestPacket::classId()
extern "C"  uint8_t InvitePlayersRequestPacket_classId_m341732995 (InvitePlayersRequestPacket_t3642695242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.InvitePlayersRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void InvitePlayersRequestPacket_save_m1947879976 (InvitePlayersRequestPacket_t3642695242 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.InvitePlayersRequestPacket::load(Styx.PacketInputStream)
extern "C"  void InvitePlayersRequestPacket_load_m459058426 (InvitePlayersRequestPacket_t3642695242 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.InvitePlayersRequestPacket::ToString()
extern "C"  String_t* InvitePlayersRequestPacket_ToString_m1066845341 (InvitePlayersRequestPacket_t3642695242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
