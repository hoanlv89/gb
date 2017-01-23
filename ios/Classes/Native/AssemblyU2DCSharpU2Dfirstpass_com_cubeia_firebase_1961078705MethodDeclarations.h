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

// com.cubeia.firebase.io.protocol.BadPacket
struct BadPacket_t1961078705;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.BadPacket::.ctor()
extern "C"  void BadPacket__ctor_m3820107281 (BadPacket_t1961078705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.BadPacket::.ctor(System.Byte,System.Byte)
extern "C"  void BadPacket__ctor_m3153469905 (BadPacket_t1961078705 * __this, uint8_t ___cmd0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.BadPacket::classId()
extern "C"  uint8_t BadPacket_classId_m2849511528 (BadPacket_t1961078705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.BadPacket::save(Styx.PacketOutputStream)
extern "C"  void BadPacket_save_m2042223479 (BadPacket_t1961078705 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.BadPacket::load(Styx.PacketInputStream)
extern "C"  void BadPacket_load_m1319530641 (BadPacket_t1961078705 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.BadPacket::ToString()
extern "C"  String_t* BadPacket_ToString_m1713717438 (BadPacket_t1961078705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
