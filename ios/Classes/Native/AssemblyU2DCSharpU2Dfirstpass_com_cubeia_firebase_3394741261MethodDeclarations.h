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

// com.cubeia.firebase.io.protocol.MttSeatedPacket
struct MttSeatedPacket_t3394741261;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.MttSeatedPacket::.ctor()
extern "C"  void MttSeatedPacket__ctor_m353763485 (MttSeatedPacket_t3394741261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttSeatedPacket::.ctor(System.Int32,System.Int32,System.Byte)
extern "C"  void MttSeatedPacket__ctor_m3851072046 (MttSeatedPacket_t3394741261 * __this, int32_t ___mttid0, int32_t ___tableid1, uint8_t ___seat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.MttSeatedPacket::classId()
extern "C"  uint8_t MttSeatedPacket_classId_m142061636 (MttSeatedPacket_t3394741261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttSeatedPacket::save(Styx.PacketOutputStream)
extern "C"  void MttSeatedPacket_save_m2186942855 (MttSeatedPacket_t3394741261 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttSeatedPacket::load(Styx.PacketInputStream)
extern "C"  void MttSeatedPacket_load_m3864801653 (MttSeatedPacket_t3394741261 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.MttSeatedPacket::ToString()
extern "C"  String_t* MttSeatedPacket_ToString_m317828494 (MttSeatedPacket_t3394741261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
