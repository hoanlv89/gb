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

// com.cubeia.firebase.io.protocol.EncryptedTransportPacket
struct EncryptedTransportPacket_t473144937;
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

// System.Void com.cubeia.firebase.io.protocol.EncryptedTransportPacket::.ctor()
extern "C"  void EncryptedTransportPacket__ctor_m47212927 (EncryptedTransportPacket_t473144937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.EncryptedTransportPacket::.ctor(System.Byte,System.Byte[])
extern "C"  void EncryptedTransportPacket__ctor_m4041058925 (EncryptedTransportPacket_t473144937 * __this, uint8_t ___func0, ByteU5BU5D_t3397334013* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.EncryptedTransportPacket::classId()
extern "C"  uint8_t EncryptedTransportPacket_classId_m618000340 (EncryptedTransportPacket_t473144937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.EncryptedTransportPacket::save(Styx.PacketOutputStream)
extern "C"  void EncryptedTransportPacket_save_m1529536965 (EncryptedTransportPacket_t473144937 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.EncryptedTransportPacket::load(Styx.PacketInputStream)
extern "C"  void EncryptedTransportPacket_load_m424502035 (EncryptedTransportPacket_t473144937 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.EncryptedTransportPacket::ToString()
extern "C"  String_t* EncryptedTransportPacket_ToString_m1030623080 (EncryptedTransportPacket_t473144937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
