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

// com.cubeia.firebase.io.protocol.PingPacket
struct PingPacket_t82127102;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.PingPacket::.ctor()
extern "C"  void PingPacket__ctor_m1552804154 (PingPacket_t82127102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PingPacket::.ctor(System.Int32)
extern "C"  void PingPacket__ctor_m191127639 (PingPacket_t82127102 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.PingPacket::classId()
extern "C"  uint8_t PingPacket_classId_m17986895 (PingPacket_t82127102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PingPacket::save(Styx.PacketOutputStream)
extern "C"  void PingPacket_save_m846211222 (PingPacket_t82127102 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PingPacket::load(Styx.PacketInputStream)
extern "C"  void PingPacket_load_m2226191496 (PingPacket_t82127102 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.PingPacket::ToString()
extern "C"  String_t* PingPacket_ToString_m26406225 (PingPacket_t82127102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
