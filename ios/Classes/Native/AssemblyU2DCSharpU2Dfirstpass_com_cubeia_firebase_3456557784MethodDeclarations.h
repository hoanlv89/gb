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

// com.cubeia.firebase.io.protocol.TableSnapshotPacket
struct TableSnapshotPacket_t3456557784;
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

// System.Void com.cubeia.firebase.io.protocol.TableSnapshotPacket::.ctor()
extern "C"  void TableSnapshotPacket__ctor_m2603338200 (TableSnapshotPacket_t3456557784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableSnapshotPacket::.ctor(System.Int32,System.String,System.String,System.Int16,System.Int16,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>)
extern "C"  void TableSnapshotPacket__ctor_m3647493639 (TableSnapshotPacket_t3456557784 * __this, int32_t ___tableid0, String_t* ___address1, String_t* ___name2, int16_t ___capacity3, int16_t ___seated4, List_1_t890982683 * ___parameters5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TableSnapshotPacket::classId()
extern "C"  uint8_t TableSnapshotPacket_classId_m1687795913 (TableSnapshotPacket_t3456557784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableSnapshotPacket::save(Styx.PacketOutputStream)
extern "C"  void TableSnapshotPacket_save_m3280893884 (TableSnapshotPacket_t3456557784 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableSnapshotPacket::load(Styx.PacketInputStream)
extern "C"  void TableSnapshotPacket_load_m1173528714 (TableSnapshotPacket_t3456557784 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TableSnapshotPacket::ToString()
extern "C"  String_t* TableSnapshotPacket_ToString_m2986871035 (TableSnapshotPacket_t3456557784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
