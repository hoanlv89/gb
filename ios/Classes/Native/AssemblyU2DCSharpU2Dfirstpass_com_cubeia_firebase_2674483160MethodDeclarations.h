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

// com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket
struct FilteredJoinTableResponsePacket_t2674483160;
// System.String
struct String_t;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_3765944700.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket::.ctor()
extern "C"  void FilteredJoinTableResponsePacket__ctor_m3584286898 (FilteredJoinTableResponsePacket_t2674483160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket::.ctor(System.Int32,System.Int32,System.String,com.cubeia.firebase.io.protocol.Enums/FilteredJoinResponseStatus)
extern "C"  void FilteredJoinTableResponsePacket__ctor_m1676024988 (FilteredJoinTableResponsePacket_t2674483160 * __this, int32_t ___seq0, int32_t ___gameid1, String_t* ___address2, int32_t ___status3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket::classId()
extern "C"  uint8_t FilteredJoinTableResponsePacket_classId_m1158561225 (FilteredJoinTableResponsePacket_t2674483160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void FilteredJoinTableResponsePacket_save_m248745042 (FilteredJoinTableResponsePacket_t2674483160 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket::load(Styx.PacketInputStream)
extern "C"  void FilteredJoinTableResponsePacket_load_m3936269904 (FilteredJoinTableResponsePacket_t2674483160 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket::ToString()
extern "C"  String_t* FilteredJoinTableResponsePacket_ToString_m2577657651 (FilteredJoinTableResponsePacket_t2674483160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
