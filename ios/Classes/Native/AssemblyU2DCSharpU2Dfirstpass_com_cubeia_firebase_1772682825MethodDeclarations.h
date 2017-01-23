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

// com.cubeia.firebase.io.protocol.PlayerInfoPacket
struct PlayerInfoPacket_t1772682825;
// System.String
struct String_t;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.PlayerInfoPacket::.ctor()
extern "C"  void PlayerInfoPacket__ctor_m3761203215 (PlayerInfoPacket_t1772682825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PlayerInfoPacket::.ctor(System.Int32,System.String,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>)
extern "C"  void PlayerInfoPacket__ctor_m3035077232 (PlayerInfoPacket_t1772682825 * __this, int32_t ___pid0, String_t* ___nick1, List_1_t890982683 * ___details2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.PlayerInfoPacket::classId()
extern "C"  uint8_t PlayerInfoPacket_classId_m486611268 (PlayerInfoPacket_t1772682825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PlayerInfoPacket::save(Styx.PacketOutputStream)
extern "C"  void PlayerInfoPacket_save_m502959497 (PlayerInfoPacket_t1772682825 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.PlayerInfoPacket::load(Styx.PacketInputStream)
extern "C"  void PlayerInfoPacket_load_m3801052835 (PlayerInfoPacket_t1772682825 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.PlayerInfoPacket::ToString()
extern "C"  String_t* PlayerInfoPacket_ToString_m1224494836 (PlayerInfoPacket_t1772682825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
