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

// com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket
struct FilteredJoinTableRequestPacket_t3677074662;
// System.String
struct String_t;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.ParamFilter>
struct List_1_t3525839661;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket::.ctor()
extern "C"  void FilteredJoinTableRequestPacket__ctor_m3249599180 (FilteredJoinTableRequestPacket_t3677074662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket::.ctor(System.Int32,System.Int32,System.String,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.ParamFilter>)
extern "C"  void FilteredJoinTableRequestPacket__ctor_m1620603190 (FilteredJoinTableRequestPacket_t3677074662 * __this, int32_t ___seq0, int32_t ___gameid1, String_t* ___address2, List_1_t3525839661 * ___parameters3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket::classId()
extern "C"  uint8_t FilteredJoinTableRequestPacket_classId_m3398210343 (FilteredJoinTableRequestPacket_t3677074662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void FilteredJoinTableRequestPacket_save_m4231197992 (FilteredJoinTableRequestPacket_t3677074662 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket::load(Styx.PacketInputStream)
extern "C"  void FilteredJoinTableRequestPacket_load_m85943334 (FilteredJoinTableRequestPacket_t3677074662 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket::ToString()
extern "C"  String_t* FilteredJoinTableRequestPacket_ToString_m1979232661 (FilteredJoinTableRequestPacket_t3677074662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
