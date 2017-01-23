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

// com.cubeia.firebase.io.protocol.JoinResponsePacket
struct JoinResponsePacket_t3194022675;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_2098153499.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.JoinResponsePacket::.ctor()
extern "C"  void JoinResponsePacket__ctor_m2585015663 (JoinResponsePacket_t3194022675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinResponsePacket::.ctor(System.Int32,System.Byte,com.cubeia.firebase.io.protocol.Enums/JoinResponseStatus,System.Int32)
extern "C"  void JoinResponsePacket__ctor_m3584935495 (JoinResponsePacket_t3194022675 * __this, int32_t ___tableid0, uint8_t ___seat1, int32_t ___status2, int32_t ___code3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.JoinResponsePacket::classId()
extern "C"  uint8_t JoinResponsePacket_classId_m2049560890 (JoinResponsePacket_t3194022675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void JoinResponsePacket_save_m798132033 (JoinResponsePacket_t3194022675 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinResponsePacket::load(Styx.PacketInputStream)
extern "C"  void JoinResponsePacket_load_m2740798419 (JoinResponsePacket_t3194022675 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.JoinResponsePacket::ToString()
extern "C"  String_t* JoinResponsePacket_ToString_m1122982342 (JoinResponsePacket_t3194022675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
