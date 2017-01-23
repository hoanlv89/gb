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

// com.cubeia.firebase.io.protocol.TournamentUpdatePacket
struct TournamentUpdatePacket_t4165456994;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;
// System.String[]
struct StringU5BU5D_t1642385972;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.TournamentUpdatePacket::.ctor()
extern "C"  void TournamentUpdatePacket__ctor_m3768716624 (TournamentUpdatePacket_t4165456994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentUpdatePacket::.ctor(System.Int32,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>,System.String[])
extern "C"  void TournamentUpdatePacket__ctor_m1329815349 (TournamentUpdatePacket_t4165456994 * __this, int32_t ___mttid0, List_1_t890982683 * ___parameters1, StringU5BU5D_t1642385972* ___removedParams2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TournamentUpdatePacket::classId()
extern "C"  uint8_t TournamentUpdatePacket_classId_m307620011 (TournamentUpdatePacket_t4165456994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentUpdatePacket::save(Styx.PacketOutputStream)
extern "C"  void TournamentUpdatePacket_save_m466014580 (TournamentUpdatePacket_t4165456994 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentUpdatePacket::load(Styx.PacketInputStream)
extern "C"  void TournamentUpdatePacket_load_m2205200594 (TournamentUpdatePacket_t4165456994 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TournamentUpdatePacket::ToString()
extern "C"  String_t* TournamentUpdatePacket_ToString_m2746476169 (TournamentUpdatePacket_t4165456994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
