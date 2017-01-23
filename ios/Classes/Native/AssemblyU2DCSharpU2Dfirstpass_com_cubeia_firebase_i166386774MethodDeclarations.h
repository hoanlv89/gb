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

// com.cubeia.firebase.io.protocol.TableSnapshotListPacket
struct TableSnapshotListPacket_t166386774;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TableSnapshotPacket>
struct List_1_t2825678916;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.TableSnapshotListPacket::.ctor()
extern "C"  void TableSnapshotListPacket__ctor_m889046304 (TableSnapshotListPacket_t166386774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableSnapshotListPacket::.ctor(System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TableSnapshotPacket>)
extern "C"  void TableSnapshotListPacket__ctor_m3518217469 (TableSnapshotListPacket_t166386774 * __this, List_1_t2825678916 * ___snapshots0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TableSnapshotListPacket::classId()
extern "C"  uint8_t TableSnapshotListPacket_classId_m12517999 (TableSnapshotListPacket_t166386774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableSnapshotListPacket::save(Styx.PacketOutputStream)
extern "C"  void TableSnapshotListPacket_save_m922064896 (TableSnapshotListPacket_t166386774 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableSnapshotListPacket::load(Styx.PacketInputStream)
extern "C"  void TableSnapshotListPacket_load_m2000474706 (TableSnapshotListPacket_t166386774 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TableSnapshotListPacket::ToString()
extern "C"  String_t* TableSnapshotListPacket_ToString_m2612869277 (TableSnapshotListPacket_t166386774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
