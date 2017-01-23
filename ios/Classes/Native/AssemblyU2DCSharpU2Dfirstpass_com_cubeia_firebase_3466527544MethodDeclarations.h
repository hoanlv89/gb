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

// com.cubeia.firebase.io.protocol.MttTransportPacket
struct MttTransportPacket_t3466527544;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.MttTransportPacket::.ctor()
extern "C"  void MttTransportPacket__ctor_m2048622270 (MttTransportPacket_t3466527544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttTransportPacket::.ctor(System.Int32,System.Int32,System.Byte[])
extern "C"  void MttTransportPacket__ctor_m3918710675 (MttTransportPacket_t3466527544 * __this, int32_t ___mttid0, int32_t ___pid1, ByteU5BU5D_t3397334013* ___mttdata2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.MttTransportPacket::classId()
extern "C"  uint8_t MttTransportPacket_classId_m1222667845 (MttTransportPacket_t3466527544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttTransportPacket::save(Styx.PacketOutputStream)
extern "C"  void MttTransportPacket_save_m2783289282 (MttTransportPacket_t3466527544 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttTransportPacket::load(Styx.PacketInputStream)
extern "C"  void MttTransportPacket_load_m348792516 (MttTransportPacket_t3466527544 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.MttTransportPacket::ToString()
extern "C"  String_t* MttTransportPacket_ToString_m2112359155 (MttTransportPacket_t3466527544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
