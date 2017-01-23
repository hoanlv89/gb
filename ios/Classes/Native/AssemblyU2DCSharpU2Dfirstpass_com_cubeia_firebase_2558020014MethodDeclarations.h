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

// com.cubeia.firebase.io.protocol.MttUnregisterResponsePacket
struct MttUnregisterResponsePacket_t2558020014;
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

// System.Void com.cubeia.firebase.io.protocol.MttUnregisterResponsePacket::.ctor()
extern "C"  void MttUnregisterResponsePacket__ctor_m1795838878 (MttUnregisterResponsePacket_t2558020014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttUnregisterResponsePacket::.ctor(System.Int32,com.cubeia.firebase.io.protocol.Enums/TournamentRegisterResponseStatus)
extern "C"  void MttUnregisterResponsePacket__ctor_m2339225904 (MttUnregisterResponsePacket_t2558020014 * __this, int32_t ___mttid0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.MttUnregisterResponsePacket::classId()
extern "C"  uint8_t MttUnregisterResponsePacket_classId_m349524951 (MttUnregisterResponsePacket_t2558020014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttUnregisterResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void MttUnregisterResponsePacket_save_m3023949758 (MttUnregisterResponsePacket_t2558020014 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttUnregisterResponsePacket::load(Styx.PacketInputStream)
extern "C"  void MttUnregisterResponsePacket_load_m2675201412 (MttUnregisterResponsePacket_t2558020014 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.MttUnregisterResponsePacket::ToString()
extern "C"  String_t* MttUnregisterResponsePacket_ToString_m453347073 (MttUnregisterResponsePacket_t2558020014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
