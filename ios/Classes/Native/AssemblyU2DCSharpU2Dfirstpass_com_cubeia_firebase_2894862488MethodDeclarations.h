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

// com.cubeia.firebase.io.protocol.TournamentUpdateListPacket
struct TournamentUpdateListPacket_t2894862488;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TournamentUpdatePacket>
struct List_1_t3534578126;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.TournamentUpdateListPacket::.ctor()
extern "C"  void TournamentUpdateListPacket__ctor_m244800628 (TournamentUpdateListPacket_t2894862488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentUpdateListPacket::.ctor(System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TournamentUpdatePacket>)
extern "C"  void TournamentUpdateListPacket__ctor_m4167619517 (TournamentUpdateListPacket_t2894862488 * __this, List_1_t3534578126 * ___updates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TournamentUpdateListPacket::classId()
extern "C"  uint8_t TournamentUpdateListPacket_classId_m1110128709 (TournamentUpdateListPacket_t2894862488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentUpdateListPacket::save(Styx.PacketOutputStream)
extern "C"  void TournamentUpdateListPacket_save_m3086930044 (TournamentUpdateListPacket_t2894862488 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentUpdateListPacket::load(Styx.PacketInputStream)
extern "C"  void TournamentUpdateListPacket_load_m815295806 (TournamentUpdateListPacket_t2894862488 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TournamentUpdateListPacket::ToString()
extern "C"  String_t* TournamentUpdateListPacket_ToString_m1110760603 (TournamentUpdateListPacket_t2894862488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
