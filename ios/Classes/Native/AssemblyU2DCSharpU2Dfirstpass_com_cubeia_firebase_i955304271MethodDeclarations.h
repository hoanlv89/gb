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

// com.cubeia.firebase.io.protocol.MttRegisterResponsePacket
struct MttRegisterResponsePacket_t955304271;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_2428195173.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.MttRegisterResponsePacket::.ctor()
extern "C"  void MttRegisterResponsePacket__ctor_m891907193 (MttRegisterResponsePacket_t955304271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttRegisterResponsePacket::.ctor(System.Int32,com.cubeia.firebase.io.protocol.Enums/TournamentRegisterResponseStatus)
extern "C"  void MttRegisterResponsePacket__ctor_m4045543207 (MttRegisterResponsePacket_t955304271 * __this, int32_t ___mttid0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.MttRegisterResponsePacket::classId()
extern "C"  uint8_t MttRegisterResponsePacket_classId_m863296610 (MttRegisterResponsePacket_t955304271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttRegisterResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void MttRegisterResponsePacket_save_m1886098907 (MttRegisterResponsePacket_t955304271 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttRegisterResponsePacket::load(Styx.PacketInputStream)
extern "C"  void MttRegisterResponsePacket_load_m2400900345 (MttRegisterResponsePacket_t955304271 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.MttRegisterResponsePacket::ToString()
extern "C"  String_t* MttRegisterResponsePacket_ToString_m2273538988 (MttRegisterResponsePacket_t955304271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
