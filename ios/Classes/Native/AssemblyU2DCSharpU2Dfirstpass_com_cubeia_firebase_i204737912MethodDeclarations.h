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

// com.cubeia.firebase.io.protocol.ServiceTransportPacket
struct ServiceTransportPacket_t204737912;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.ServiceTransportPacket::.ctor()
extern "C"  void ServiceTransportPacket__ctor_m2017872766 (ServiceTransportPacket_t204737912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ServiceTransportPacket::.ctor(System.Int32,System.Int32,System.String,System.Byte,System.Byte[])
extern "C"  void ServiceTransportPacket__ctor_m3573637862 (ServiceTransportPacket_t204737912 * __this, int32_t ___pid0, int32_t ___seq1, String_t* ___service2, uint8_t ___idtype3, ByteU5BU5D_t3397334013* ___servicedata4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.ServiceTransportPacket::classId()
extern "C"  uint8_t ServiceTransportPacket_classId_m3285675781 (ServiceTransportPacket_t204737912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ServiceTransportPacket::save(Styx.PacketOutputStream)
extern "C"  void ServiceTransportPacket_save_m2590940346 (ServiceTransportPacket_t204737912 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ServiceTransportPacket::load(Styx.PacketInputStream)
extern "C"  void ServiceTransportPacket_load_m3207149796 (ServiceTransportPacket_t204737912 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.ServiceTransportPacket::ToString()
extern "C"  String_t* ServiceTransportPacket_ToString_m3651536435 (ServiceTransportPacket_t204737912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
