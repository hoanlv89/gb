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

// com.cubeia.firebase.io.protocol.CreateTableRequestPacket
struct CreateTableRequestPacket_t2594412157;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.CreateTableRequestPacket::.ctor()
extern "C"  void CreateTableRequestPacket__ctor_m714558745 (CreateTableRequestPacket_t2594412157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.CreateTableRequestPacket::.ctor(System.Int32,System.Int32,System.Byte,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>,System.Int32[])
extern "C"  void CreateTableRequestPacket__ctor_m1764311465 (CreateTableRequestPacket_t2594412157 * __this, int32_t ___seq0, int32_t ___gameid1, uint8_t ___seats2, List_1_t890982683 * ___parameters3, Int32U5BU5D_t3030399641* ___invitees4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.CreateTableRequestPacket::classId()
extern "C"  uint8_t CreateTableRequestPacket_classId_m3915169472 (CreateTableRequestPacket_t2594412157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.CreateTableRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void CreateTableRequestPacket_save_m4151812095 (CreateTableRequestPacket_t2594412157 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.CreateTableRequestPacket::load(Styx.PacketInputStream)
extern "C"  void CreateTableRequestPacket_load_m1350029737 (CreateTableRequestPacket_t2594412157 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.CreateTableRequestPacket::ToString()
extern "C"  String_t* CreateTableRequestPacket_ToString_m4076930832 (CreateTableRequestPacket_t2594412157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
