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

// com.cubeia.firebase.io.protocol.NotifyRegisteredPacket
struct NotifyRegisteredPacket_t2014228189;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.NotifyRegisteredPacket::.ctor()
extern "C"  void NotifyRegisteredPacket__ctor_m351604217 (NotifyRegisteredPacket_t2014228189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyRegisteredPacket::.ctor(System.Int32[])
extern "C"  void NotifyRegisteredPacket__ctor_m3893339100 (NotifyRegisteredPacket_t2014228189 * __this, Int32U5BU5D_t3030399641* ___tournaments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.NotifyRegisteredPacket::classId()
extern "C"  uint8_t NotifyRegisteredPacket_classId_m3257224048 (NotifyRegisteredPacket_t2014228189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyRegisteredPacket::save(Styx.PacketOutputStream)
extern "C"  void NotifyRegisteredPacket_save_m1799424799 (NotifyRegisteredPacket_t2014228189 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyRegisteredPacket::load(Styx.PacketInputStream)
extern "C"  void NotifyRegisteredPacket_load_m2176811001 (NotifyRegisteredPacket_t2014228189 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.NotifyRegisteredPacket::ToString()
extern "C"  String_t* NotifyRegisteredPacket_ToString_m4086234464 (NotifyRegisteredPacket_t2014228189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
