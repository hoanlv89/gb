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

// com.cubeia.firebase.io.protocol.LeaveResponsePacket
struct LeaveResponsePacket_t2860481830;
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

// System.Void com.cubeia.firebase.io.protocol.LeaveResponsePacket::.ctor()
extern "C"  void LeaveResponsePacket__ctor_m796328192 (LeaveResponsePacket_t2860481830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LeaveResponsePacket::.ctor(System.Int32,com.cubeia.firebase.io.protocol.Enums/ResponseStatus,System.Int32)
extern "C"  void LeaveResponsePacket__ctor_m2137566573 (LeaveResponsePacket_t2860481830 * __this, int32_t ___tableid0, int32_t ___status1, int32_t ___code2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.LeaveResponsePacket::classId()
extern "C"  uint8_t LeaveResponsePacket_classId_m3435884639 (LeaveResponsePacket_t2860481830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LeaveResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void LeaveResponsePacket_save_m419709660 (LeaveResponsePacket_t2860481830 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LeaveResponsePacket::load(Styx.PacketInputStream)
extern "C"  void LeaveResponsePacket_load_m1897380418 (LeaveResponsePacket_t2860481830 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.LeaveResponsePacket::ToString()
extern "C"  String_t* LeaveResponsePacket_ToString_m459225793 (LeaveResponsePacket_t2860481830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
