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

// com.cubeia.firebase.io.protocol.SystemMessagePacket
struct SystemMessagePacket_t127655288;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.SystemMessagePacket::.ctor()
extern "C"  void SystemMessagePacket__ctor_m3548119048 (SystemMessagePacket_t127655288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.SystemMessagePacket::.ctor(System.Int32,System.Int32,System.String,System.Int32[])
extern "C"  void SystemMessagePacket__ctor_m979852713 (SystemMessagePacket_t127655288 * __this, int32_t ___type0, int32_t ___level1, String_t* ___message2, Int32U5BU5D_t3030399641* ___pids3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.SystemMessagePacket::classId()
extern "C"  uint8_t SystemMessagePacket_classId_m2893177585 (SystemMessagePacket_t127655288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.SystemMessagePacket::save(Styx.PacketOutputStream)
extern "C"  void SystemMessagePacket_save_m1659786576 (SystemMessagePacket_t127655288 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.SystemMessagePacket::load(Styx.PacketInputStream)
extern "C"  void SystemMessagePacket_load_m1615655018 (SystemMessagePacket_t127655288 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.SystemMessagePacket::ToString()
extern "C"  String_t* SystemMessagePacket_ToString_m958717927 (SystemMessagePacket_t127655288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
