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

// com.cubeia.firebase.io.protocol.GameTransportPacket
struct GameTransportPacket_t2057857545;
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

// System.Void com.cubeia.firebase.io.protocol.GameTransportPacket::.ctor()
extern "C"  void GameTransportPacket__ctor_m252959171 (GameTransportPacket_t2057857545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.GameTransportPacket::.ctor(System.Int32,System.Int32,System.Byte[])
extern "C"  void GameTransportPacket__ctor_m3127206522 (GameTransportPacket_t2057857545 * __this, int32_t ___tableid0, int32_t ___pid1, ByteU5BU5D_t3397334013* ___gamedata2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.GameTransportPacket::classId()
extern "C"  uint8_t GameTransportPacket_classId_m711197756 (GameTransportPacket_t2057857545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.GameTransportPacket::save(Styx.PacketOutputStream)
extern "C"  void GameTransportPacket_save_m2081910177 (GameTransportPacket_t2057857545 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.GameTransportPacket::load(Styx.PacketInputStream)
extern "C"  void GameTransportPacket_load_m1662792639 (GameTransportPacket_t2057857545 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.GameTransportPacket::ToString()
extern "C"  String_t* GameTransportPacket_ToString_m32341446 (GameTransportPacket_t2057857545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
