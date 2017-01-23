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

// com.cubeia.firebase.io.protocol.FilteredJoinTableAvailablePacket
struct FilteredJoinTableAvailablePacket_t3882758458;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableAvailablePacket::.ctor()
extern "C"  void FilteredJoinTableAvailablePacket__ctor_m4051564942 (FilteredJoinTableAvailablePacket_t3882758458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableAvailablePacket::.ctor(System.Int32,System.Int32,System.Byte)
extern "C"  void FilteredJoinTableAvailablePacket__ctor_m4179430199 (FilteredJoinTableAvailablePacket_t3882758458 * __this, int32_t ___seq0, int32_t ___tableid1, uint8_t ___seat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.FilteredJoinTableAvailablePacket::classId()
extern "C"  uint8_t FilteredJoinTableAvailablePacket_classId_m1486481363 (FilteredJoinTableAvailablePacket_t3882758458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableAvailablePacket::save(Styx.PacketOutputStream)
extern "C"  void FilteredJoinTableAvailablePacket_save_m476410742 (FilteredJoinTableAvailablePacket_t3882758458 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableAvailablePacket::load(Styx.PacketInputStream)
extern "C"  void FilteredJoinTableAvailablePacket_load_m4150515860 (FilteredJoinTableAvailablePacket_t3882758458 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.FilteredJoinTableAvailablePacket::ToString()
extern "C"  String_t* FilteredJoinTableAvailablePacket_ToString_m3962222537 (FilteredJoinTableAvailablePacket_t3882758458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
