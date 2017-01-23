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

// com.cubeia.firebase.io.protocol.LogoutPacket
struct LogoutPacket_t3115077408;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.LogoutPacket::.ctor()
extern "C"  void LogoutPacket__ctor_m1383246060 (LogoutPacket_t3115077408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LogoutPacket::.ctor(System.Boolean)
extern "C"  void LogoutPacket__ctor_m2485556423 (LogoutPacket_t3115077408 * __this, bool ___leaveTables0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.LogoutPacket::classId()
extern "C"  uint8_t LogoutPacket_classId_m4017011789 (LogoutPacket_t3115077408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LogoutPacket::save(Styx.PacketOutputStream)
extern "C"  void LogoutPacket_save_m1200468564 (LogoutPacket_t3115077408 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LogoutPacket::load(Styx.PacketInputStream)
extern "C"  void LogoutPacket_load_m1327236134 (LogoutPacket_t3115077408 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.LogoutPacket::ToString()
extern "C"  String_t* LogoutPacket_ToString_m4167527027 (LogoutPacket_t3115077408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
