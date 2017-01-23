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

// com.cubeia.firebase.io.protocol.NotifyChannelChatPacket
struct NotifyChannelChatPacket_t3560736200;
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

// System.Void com.cubeia.firebase.io.protocol.NotifyChannelChatPacket::.ctor()
extern "C"  void NotifyChannelChatPacket__ctor_m2405119778 (NotifyChannelChatPacket_t3560736200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyChannelChatPacket::.ctor(System.Int32,System.Int32,System.Int32,System.String,System.String)
extern "C"  void NotifyChannelChatPacket__ctor_m2580711665 (NotifyChannelChatPacket_t3560736200 * __this, int32_t ___pid0, int32_t ___channelid1, int32_t ___targetid2, String_t* ___nick3, String_t* ___message4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.NotifyChannelChatPacket::classId()
extern "C"  uint8_t NotifyChannelChatPacket_classId_m2470571353 (NotifyChannelChatPacket_t3560736200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyChannelChatPacket::save(Styx.PacketOutputStream)
extern "C"  void NotifyChannelChatPacket_save_m158550458 (NotifyChannelChatPacket_t3560736200 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifyChannelChatPacket::load(Styx.PacketInputStream)
extern "C"  void NotifyChannelChatPacket_load_m1093277088 (NotifyChannelChatPacket_t3560736200 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.NotifyChannelChatPacket::ToString()
extern "C"  String_t* NotifyChannelChatPacket_ToString_m2361234467 (NotifyChannelChatPacket_t3560736200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
