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

// com.cubeia.firebase.io.protocol.KickPlayerPacket
struct KickPlayerPacket_t3668475667;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.KickPlayerPacket::.ctor()
extern "C"  void KickPlayerPacket__ctor_m1059693439 (KickPlayerPacket_t3668475667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.KickPlayerPacket::.ctor(System.Int32,System.Int16)
extern "C"  void KickPlayerPacket__ctor_m2795912461 (KickPlayerPacket_t3668475667 * __this, int32_t ___tableid0, int16_t ___reasonCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.KickPlayerPacket::classId()
extern "C"  uint8_t KickPlayerPacket_classId_m3523612826 (KickPlayerPacket_t3668475667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.KickPlayerPacket::save(Styx.PacketOutputStream)
extern "C"  void KickPlayerPacket_save_m3388149341 (KickPlayerPacket_t3668475667 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.KickPlayerPacket::load(Styx.PacketInputStream)
extern "C"  void KickPlayerPacket_load_m1030850643 (KickPlayerPacket_t3668475667 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.KickPlayerPacket::ToString()
extern "C"  String_t* KickPlayerPacket_ToString_m66937610 (KickPlayerPacket_t3668475667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
