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

// com.cubeia.firebase.io.protocol.JoinRequestPacket
struct JoinRequestPacket_t3860176915;
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

// System.Void com.cubeia.firebase.io.protocol.JoinRequestPacket::.ctor()
extern "C"  void JoinRequestPacket__ctor_m2639008445 (JoinRequestPacket_t3860176915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinRequestPacket::.ctor(System.Int32,System.Byte,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>)
extern "C"  void JoinRequestPacket__ctor_m1384523555 (JoinRequestPacket_t3860176915 * __this, int32_t ___tableid0, uint8_t ___seat1, List_1_t890982683 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.JoinRequestPacket::classId()
extern "C"  uint8_t JoinRequestPacket_classId_m3957048014 (JoinRequestPacket_t3860176915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void JoinRequestPacket_save_m2508003319 (JoinRequestPacket_t3860176915 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinRequestPacket::load(Styx.PacketInputStream)
extern "C"  void JoinRequestPacket_load_m4110770085 (JoinRequestPacket_t3860176915 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.JoinRequestPacket::ToString()
extern "C"  String_t* JoinRequestPacket_ToString_m3411834656 (JoinRequestPacket_t3860176915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
