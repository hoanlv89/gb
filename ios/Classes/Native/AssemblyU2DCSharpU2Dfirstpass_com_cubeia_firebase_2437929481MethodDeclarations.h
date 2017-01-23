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

// com.cubeia.firebase.io.protocol.GoodPacket
struct GoodPacket_t2437929481;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.GoodPacket::.ctor()
extern "C"  void GoodPacket__ctor_m1229038389 (GoodPacket_t2437929481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.GoodPacket::.ctor(System.Byte,System.Int32)
extern "C"  void GoodPacket__ctor_m278591989 (GoodPacket_t2437929481 * __this, uint8_t ___cmd0, int32_t ___extra1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.GoodPacket::classId()
extern "C"  uint8_t GoodPacket_classId_m3048110756 (GoodPacket_t2437929481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.GoodPacket::save(Styx.PacketOutputStream)
extern "C"  void GoodPacket_save_m3068520495 (GoodPacket_t2437929481 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.GoodPacket::load(Styx.PacketInputStream)
extern "C"  void GoodPacket_load_m1706148237 (GoodPacket_t2437929481 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.GoodPacket::ToString()
extern "C"  String_t* GoodPacket_ToString_m4258374544 (GoodPacket_t2437929481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
