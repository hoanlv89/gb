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

// com.cubeia.firebase.io.protocol.ProbePacket
struct ProbePacket_t4138156952;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.ProbeStamp>
struct List_1_t483007641;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.ProbePacket::.ctor()
extern "C"  void ProbePacket__ctor_m1437106322 (ProbePacket_t4138156952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ProbePacket::.ctor(System.Int32,System.Int32,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.ProbeStamp>)
extern "C"  void ProbePacket__ctor_m1965541154 (ProbePacket_t4138156952 * __this, int32_t ___id0, int32_t ___tableid1, List_1_t483007641 * ___stamps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.ProbePacket::classId()
extern "C"  uint8_t ProbePacket_classId_m3345348849 (ProbePacket_t4138156952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ProbePacket::save(Styx.PacketOutputStream)
extern "C"  void ProbePacket_save_m4247363334 (ProbePacket_t4138156952 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ProbePacket::load(Styx.PacketInputStream)
extern "C"  void ProbePacket_load_m3980309760 (ProbePacket_t4138156952 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.ProbePacket::ToString()
extern "C"  String_t* ProbePacket_ToString_m364123215 (ProbePacket_t4138156952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
