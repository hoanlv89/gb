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

// com.cubeia.firebase.io.protocol.NotifyInvitedPacket
struct NotifyInvitedPacket_t2211038728;
// System.String
struct String_t;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.NotifyInvitedPacket::.ctor()
extern "C"  void NotifyInvitedPacket__ctor_m3293871192 (NotifyInvitedPacket_t2211038728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyInvitedPacket::.ctor(System.Int32,System.String,System.Int32,System.Byte)
extern "C"  void NotifyInvitedPacket__ctor_m4159323527 (NotifyInvitedPacket_t2211038728 * __this, int32_t ___inviter0, String_t* ___screenname1, int32_t ___tableid2, uint8_t ___seat3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.NotifyInvitedPacket::classId()
extern "C"  uint8_t NotifyInvitedPacket_classId_m3956337873 (NotifyInvitedPacket_t2211038728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyInvitedPacket::save(Styx.PacketOutputStream)
extern "C"  void NotifyInvitedPacket_save_m2055248792 (NotifyInvitedPacket_t2211038728 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyInvitedPacket::load(Styx.PacketInputStream)
extern "C"  void NotifyInvitedPacket_load_m2693777194 (NotifyInvitedPacket_t2211038728 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.NotifyInvitedPacket::ToString()
extern "C"  String_t* NotifyInvitedPacket_ToString_m2033486759 (NotifyInvitedPacket_t2211038728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
