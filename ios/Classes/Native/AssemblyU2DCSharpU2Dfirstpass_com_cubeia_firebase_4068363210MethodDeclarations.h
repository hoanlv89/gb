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

// com.cubeia.firebase.io.protocol.MttPickedUpPacket
struct MttPickedUpPacket_t4068363210;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.MttPickedUpPacket::.ctor()
extern "C"  void MttPickedUpPacket__ctor_m307040122 (MttPickedUpPacket_t4068363210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttPickedUpPacket::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C"  void MttPickedUpPacket__ctor_m1760192069 (MttPickedUpPacket_t4068363210 * __this, int32_t ___mttid0, int32_t ___tableid1, bool ___keepWatching2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.MttPickedUpPacket::classId()
extern "C"  uint8_t MttPickedUpPacket_classId_m1927156619 (MttPickedUpPacket_t4068363210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttPickedUpPacket::save(Styx.PacketOutputStream)
extern "C"  void MttPickedUpPacket_save_m1357478306 (MttPickedUpPacket_t4068363210 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttPickedUpPacket::load(Styx.PacketInputStream)
extern "C"  void MttPickedUpPacket_load_m1211525912 (MttPickedUpPacket_t4068363210 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.MttPickedUpPacket::ToString()
extern "C"  String_t* MttPickedUpPacket_ToString_m276301197 (MttPickedUpPacket_t4068363210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
