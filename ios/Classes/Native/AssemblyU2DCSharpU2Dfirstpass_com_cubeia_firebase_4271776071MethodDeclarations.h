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

// com.cubeia.firebase.io.protocol.TournamentSnapshotListPacket
struct TournamentSnapshotListPacket_t4271776071;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TournamentSnapshotPacket>
struct List_1_t3613319179;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.TournamentSnapshotListPacket::.ctor()
extern "C"  void TournamentSnapshotListPacket__ctor_m1898779597 (TournamentSnapshotListPacket_t4271776071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentSnapshotListPacket::.ctor(System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TournamentSnapshotPacket>)
extern "C"  void TournamentSnapshotListPacket__ctor_m3049236989 (TournamentSnapshotListPacket_t4271776071 * __this, List_1_t3613319179 * ___snapshots0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TournamentSnapshotListPacket::classId()
extern "C"  uint8_t TournamentSnapshotListPacket_classId_m422814630 (TournamentSnapshotListPacket_t4271776071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentSnapshotListPacket::save(Styx.PacketOutputStream)
extern "C"  void TournamentSnapshotListPacket_save_m4090304655 (TournamentSnapshotListPacket_t4271776071 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TournamentSnapshotListPacket::load(Styx.PacketInputStream)
extern "C"  void TournamentSnapshotListPacket_load_m3263369029 (TournamentSnapshotListPacket_t4271776071 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TournamentSnapshotListPacket::ToString()
extern "C"  String_t* TournamentSnapshotListPacket_ToString_m1609263222 (TournamentSnapshotListPacket_t4271776071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
