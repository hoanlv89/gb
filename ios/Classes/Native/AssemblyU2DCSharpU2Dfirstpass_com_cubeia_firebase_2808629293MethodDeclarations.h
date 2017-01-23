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

// com.cubeia.firebase.io.protocol.NotifyJoinPacket
struct NotifyJoinPacket_t2808629293;
// System.String
struct String_t;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.NotifyJoinPacket::.ctor()
extern "C"  void NotifyJoinPacket__ctor_m1204953579 (NotifyJoinPacket_t2808629293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyJoinPacket::.ctor(System.Int32,System.Int32,System.String,System.Byte)
extern "C"  void NotifyJoinPacket__ctor_m4085858382 (NotifyJoinPacket_t2808629293 * __this, int32_t ___tableid0, int32_t ___pid1, String_t* ___nick2, uint8_t ___seat3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.NotifyJoinPacket::classId()
extern "C"  uint8_t NotifyJoinPacket_classId_m584896320 (NotifyJoinPacket_t2808629293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyJoinPacket::save(Styx.PacketOutputStream)
extern "C"  void NotifyJoinPacket_save_m4154544325 (NotifyJoinPacket_t2808629293 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyJoinPacket::load(Styx.PacketInputStream)
extern "C"  void NotifyJoinPacket_load_m3083142327 (NotifyJoinPacket_t2808629293 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.NotifyJoinPacket::ToString()
extern "C"  String_t* NotifyJoinPacket_ToString_m155942400 (NotifyJoinPacket_t2808629293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
