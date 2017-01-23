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

// com.cubeia.firebase.io.protocol.TableUpdateListPacket
struct TableUpdateListPacket_t3601078047;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TableUpdatePacket>
struct List_1_t2051568959;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.TableUpdateListPacket::.ctor()
extern "C"  void TableUpdateListPacket__ctor_m1620762735 (TableUpdateListPacket_t3601078047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableUpdateListPacket::.ctor(System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TableUpdatePacket>)
extern "C"  void TableUpdateListPacket__ctor_m3211829193 (TableUpdateListPacket_t3601078047 * __this, List_1_t2051568959 * ___updates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TableUpdateListPacket::classId()
extern "C"  uint8_t TableUpdateListPacket_classId_m2765666710 (TableUpdateListPacket_t3601078047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableUpdateListPacket::save(Styx.PacketOutputStream)
extern "C"  void TableUpdateListPacket_save_m612120397 (TableUpdateListPacket_t3601078047 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableUpdateListPacket::load(Styx.PacketInputStream)
extern "C"  void TableUpdateListPacket_load_m448965347 (TableUpdateListPacket_t3601078047 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TableUpdateListPacket::ToString()
extern "C"  String_t* TableUpdateListPacket_ToString_m2307685056 (TableUpdateListPacket_t3601078047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
