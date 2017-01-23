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

// com.cubeia.firebase.io.protocol.NotifyLeavePacket
struct NotifyLeavePacket_t2023163630;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.NotifyLeavePacket::.ctor()
extern "C"  void NotifyLeavePacket__ctor_m2319936904 (NotifyLeavePacket_t2023163630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyLeavePacket::.ctor(System.Int32,System.Int32)
extern "C"  void NotifyLeavePacket__ctor_m3271680676 (NotifyLeavePacket_t2023163630 * __this, int32_t ___tableid0, int32_t ___pid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.NotifyLeavePacket::classId()
extern "C"  uint8_t NotifyLeavePacket_classId_m702972839 (NotifyLeavePacket_t2023163630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyLeavePacket::save(Styx.PacketOutputStream)
extern "C"  void NotifyLeavePacket_save_m1663253864 (NotifyLeavePacket_t2023163630 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyLeavePacket::load(Styx.PacketInputStream)
extern "C"  void NotifyLeavePacket_load_m192836858 (NotifyLeavePacket_t2023163630 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.NotifyLeavePacket::ToString()
extern "C"  String_t* NotifyLeavePacket_ToString_m529510485 (NotifyLeavePacket_t2023163630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
