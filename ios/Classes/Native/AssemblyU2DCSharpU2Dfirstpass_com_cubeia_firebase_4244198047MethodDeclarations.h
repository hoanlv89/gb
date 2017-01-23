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

// com.cubeia.firebase.io.protocol.TournamentSnapshotPacket
struct TournamentSnapshotPacket_t4244198047;
// System.String
struct String_t;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.TournamentSnapshotPacket::.ctor()
extern "C"  void TournamentSnapshotPacket__ctor_m2496787555 (TournamentSnapshotPacket_t4244198047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentSnapshotPacket::.ctor(System.Int32,System.String,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>)
extern "C"  void TournamentSnapshotPacket__ctor_m122293802 (TournamentSnapshotPacket_t4244198047 * __this, int32_t ___mttid0, String_t* ___address1, List_1_t890982683 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TournamentSnapshotPacket::classId()
extern "C"  uint8_t TournamentSnapshotPacket_classId_m2693948318 (TournamentSnapshotPacket_t4244198047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentSnapshotPacket::save(Styx.PacketOutputStream)
extern "C"  void TournamentSnapshotPacket_save_m738994933 (TournamentSnapshotPacket_t4244198047 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentSnapshotPacket::load(Styx.PacketInputStream)
extern "C"  void TournamentSnapshotPacket_load_m3239000287 (TournamentSnapshotPacket_t4244198047 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TournamentSnapshotPacket::ToString()
extern "C"  String_t* TournamentSnapshotPacket_ToString_m2679342490 (TournamentSnapshotPacket_t4244198047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
