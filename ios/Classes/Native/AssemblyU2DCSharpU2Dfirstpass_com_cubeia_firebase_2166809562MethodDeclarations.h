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

// com.cubeia.firebase.io.protocol.SystemInfoResponsePacket
struct SystemInfoResponsePacket_t2166809562;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.SystemInfoResponsePacket::.ctor()
extern "C"  void SystemInfoResponsePacket__ctor_m2494393864 (SystemInfoResponsePacket_t2166809562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.SystemInfoResponsePacket::.ctor(System.Int32,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>)
extern "C"  void SystemInfoResponsePacket__ctor_m242751589 (SystemInfoResponsePacket_t2166809562 * __this, int32_t ___players0, List_1_t890982683 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.SystemInfoResponsePacket::classId()
extern "C"  uint8_t SystemInfoResponsePacket_classId_m2372643587 (SystemInfoResponsePacket_t2166809562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.SystemInfoResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void SystemInfoResponsePacket_save_m1104764536 (SystemInfoResponsePacket_t2166809562 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.SystemInfoResponsePacket::load(Styx.PacketInputStream)
extern "C"  void SystemInfoResponsePacket_load_m4167708026 (SystemInfoResponsePacket_t2166809562 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.SystemInfoResponsePacket::ToString()
extern "C"  String_t* SystemInfoResponsePacket_ToString_m59143197 (SystemInfoResponsePacket_t2166809562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
