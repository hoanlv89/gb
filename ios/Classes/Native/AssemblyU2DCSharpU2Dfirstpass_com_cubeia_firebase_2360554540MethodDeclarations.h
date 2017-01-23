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

// com.cubeia.firebase.io.protocol.VersionPacket
struct VersionPacket_t2360554540;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.VersionPacket::.ctor()
extern "C"  void VersionPacket__ctor_m3379303388 (VersionPacket_t2360554540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.VersionPacket::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void VersionPacket__ctor_m4281317085 (VersionPacket_t2360554540 * __this, int32_t ___game0, int32_t ___operatorid1, int32_t ___protocol2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.VersionPacket::classId()
extern "C"  uint8_t VersionPacket_classId_m3267147117 (VersionPacket_t2360554540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.VersionPacket::save(Styx.PacketOutputStream)
extern "C"  void VersionPacket_save_m2726830780 (VersionPacket_t2360554540 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.VersionPacket::load(Styx.PacketInputStream)
extern "C"  void VersionPacket_load_m3904327494 (VersionPacket_t2360554540 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.VersionPacket::ToString()
extern "C"  String_t* VersionPacket_ToString_m1291526091 (VersionPacket_t2360554540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
