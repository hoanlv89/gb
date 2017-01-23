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

// com.cubeia.firebase.io.protocol.LocalServiceTransportPacket
struct LocalServiceTransportPacket_t3503280477;
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

// System.Void com.cubeia.firebase.io.protocol.LocalServiceTransportPacket::.ctor()
extern "C"  void LocalServiceTransportPacket__ctor_m3270186685 (LocalServiceTransportPacket_t3503280477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LocalServiceTransportPacket::.ctor(System.Int32,System.Byte[])
extern "C"  void LocalServiceTransportPacket__ctor_m209392607 (LocalServiceTransportPacket_t3503280477 * __this, int32_t ___seq0, ByteU5BU5D_t3397334013* ___servicedata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.LocalServiceTransportPacket::classId()
extern "C"  uint8_t LocalServiceTransportPacket_classId_m4000354476 (LocalServiceTransportPacket_t3503280477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LocalServiceTransportPacket::save(Styx.PacketOutputStream)
extern "C"  void LocalServiceTransportPacket_save_m378556931 (LocalServiceTransportPacket_t3503280477 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LocalServiceTransportPacket::load(Styx.PacketInputStream)
extern "C"  void LocalServiceTransportPacket_load_m936617269 (LocalServiceTransportPacket_t3503280477 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.LocalServiceTransportPacket::ToString()
extern "C"  String_t* LocalServiceTransportPacket_ToString_m967602586 (LocalServiceTransportPacket_t3503280477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
