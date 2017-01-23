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

// com.cubeia.firebase.io.protocol.UnwatchResponsePacket
struct UnwatchResponsePacket_t3406902211;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_i621885505.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.UnwatchResponsePacket::.ctor()
extern "C"  void UnwatchResponsePacket__ctor_m2165416259 (UnwatchResponsePacket_t3406902211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.UnwatchResponsePacket::.ctor(System.Int32,com.cubeia.firebase.io.protocol.Enums/ResponseStatus)
extern "C"  void UnwatchResponsePacket__ctor_m4030208585 (UnwatchResponsePacket_t3406902211 * __this, int32_t ___tableid0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.UnwatchResponsePacket::classId()
extern "C"  uint8_t UnwatchResponsePacket_classId_m182415410 (UnwatchResponsePacket_t3406902211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.UnwatchResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void UnwatchResponsePacket_save_m2846008133 (UnwatchResponsePacket_t3406902211 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.UnwatchResponsePacket::load(Styx.PacketInputStream)
extern "C"  void UnwatchResponsePacket_load_m260668543 (UnwatchResponsePacket_t3406902211 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.UnwatchResponsePacket::ToString()
extern "C"  String_t* UnwatchResponsePacket_ToString_m2377831536 (UnwatchResponsePacket_t3406902211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
