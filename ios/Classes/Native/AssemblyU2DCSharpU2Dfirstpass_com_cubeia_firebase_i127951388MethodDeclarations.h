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

// com.cubeia.firebase.io.protocol.SystemInfoRequestPacket
struct SystemInfoRequestPacket_t127951388;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.SystemInfoRequestPacket::.ctor()
extern "C"  void SystemInfoRequestPacket__ctor_m2736195126 (SystemInfoRequestPacket_t127951388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.SystemInfoRequestPacket::classId()
extern "C"  uint8_t SystemInfoRequestPacket_classId_m751349685 (SystemInfoRequestPacket_t127951388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.SystemInfoRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void SystemInfoRequestPacket_save_m1095744462 (SystemInfoRequestPacket_t127951388 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.SystemInfoRequestPacket::load(Styx.PacketInputStream)
extern "C"  void SystemInfoRequestPacket_load_m3151873148 (SystemInfoRequestPacket_t127951388 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.SystemInfoRequestPacket::ToString()
extern "C"  String_t* SystemInfoRequestPacket_ToString_m1015276487 (SystemInfoRequestPacket_t127951388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
