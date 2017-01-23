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

// com.cubeia.firebase.io.protocol.CreateTableResponsePacket
struct CreateTableResponsePacket_t3539513157;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_i621885505.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.CreateTableResponsePacket::.ctor()
extern "C"  void CreateTableResponsePacket__ctor_m592233439 (CreateTableResponsePacket_t3539513157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.CreateTableResponsePacket::.ctor(System.Int32,System.Int32,System.Byte,com.cubeia.firebase.io.protocol.Enums/ResponseStatus,System.Int32)
extern "C"  void CreateTableResponsePacket__ctor_m3713051348 (CreateTableResponsePacket_t3539513157 * __this, int32_t ___seq0, int32_t ___tableid1, uint8_t ___seat2, int32_t ___status3, int32_t ___code4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.CreateTableResponsePacket::classId()
extern "C"  uint8_t CreateTableResponsePacket_classId_m2237616240 (CreateTableResponsePacket_t3539513157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.CreateTableResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void CreateTableResponsePacket_save_m2490233309 (CreateTableResponsePacket_t3539513157 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.CreateTableResponsePacket::load(Styx.PacketInputStream)
extern "C"  void CreateTableResponsePacket_load_m1800682867 (CreateTableResponsePacket_t3539513157 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.CreateTableResponsePacket::ToString()
extern "C"  String_t* CreateTableResponsePacket_ToString_m4204854610 (CreateTableResponsePacket_t3539513157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
