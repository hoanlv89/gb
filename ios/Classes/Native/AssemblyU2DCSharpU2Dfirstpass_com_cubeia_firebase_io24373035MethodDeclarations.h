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

// com.cubeia.firebase.io.protocol.UnwatchRequestPacket
struct UnwatchRequestPacket_t24373035;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.UnwatchRequestPacket::.ctor()
extern "C"  void UnwatchRequestPacket__ctor_m1217053289 (UnwatchRequestPacket_t24373035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.UnwatchRequestPacket::.ctor(System.Int32)
extern "C"  void UnwatchRequestPacket__ctor_m3309140426 (UnwatchRequestPacket_t24373035 * __this, int32_t ___tableid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.UnwatchRequestPacket::classId()
extern "C"  uint8_t UnwatchRequestPacket_classId_m1544614018 (UnwatchRequestPacket_t24373035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.UnwatchRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void UnwatchRequestPacket_save_m2688333699 (UnwatchRequestPacket_t24373035 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.UnwatchRequestPacket::load(Styx.PacketInputStream)
extern "C"  void UnwatchRequestPacket_load_m1054600185 (UnwatchRequestPacket_t24373035 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.UnwatchRequestPacket::ToString()
extern "C"  String_t* UnwatchRequestPacket_ToString_m3597710082 (UnwatchRequestPacket_t24373035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
