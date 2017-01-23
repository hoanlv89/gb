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

// com.cubeia.firebase.io.protocol.MttUnregisterRequestPacket
struct MttUnregisterRequestPacket_t3280052276;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.MttUnregisterRequestPacket::.ctor()
extern "C"  void MttUnregisterRequestPacket__ctor_m1035385816 (MttUnregisterRequestPacket_t3280052276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttUnregisterRequestPacket::.ctor(System.Int32)
extern "C"  void MttUnregisterRequestPacket__ctor_m1459726809 (MttUnregisterRequestPacket_t3280052276 * __this, int32_t ___mttid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.MttUnregisterRequestPacket::classId()
extern "C"  uint8_t MttUnregisterRequestPacket_classId_m2628885241 (MttUnregisterRequestPacket_t3280052276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttUnregisterRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void MttUnregisterRequestPacket_save_m96957160 (MttUnregisterRequestPacket_t3280052276 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttUnregisterRequestPacket::load(Styx.PacketInputStream)
extern "C"  void MttUnregisterRequestPacket_load_m2664606138 (MttUnregisterRequestPacket_t3280052276 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.MttUnregisterRequestPacket::ToString()
extern "C"  String_t* MttUnregisterRequestPacket_ToString_m178144959 (MttUnregisterRequestPacket_t3280052276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
