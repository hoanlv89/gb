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

// com.cubeia.firebase.io.protocol.JoinChatChannelRequestPacket
struct JoinChatChannelRequestPacket_t3102580644;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.JoinChatChannelRequestPacket::.ctor()
extern "C"  void JoinChatChannelRequestPacket__ctor_m3896871272 (JoinChatChannelRequestPacket_t3102580644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinChatChannelRequestPacket::.ctor(System.Int32)
extern "C"  void JoinChatChannelRequestPacket__ctor_m2045567897 (JoinChatChannelRequestPacket_t3102580644 * __this, int32_t ___channelid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.JoinChatChannelRequestPacket::classId()
extern "C"  uint8_t JoinChatChannelRequestPacket_classId_m401200569 (JoinChatChannelRequestPacket_t3102580644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinChatChannelRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void JoinChatChannelRequestPacket_save_m410589072 (JoinChatChannelRequestPacket_t3102580644 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinChatChannelRequestPacket::load(Styx.PacketInputStream)
extern "C"  void JoinChatChannelRequestPacket_load_m1669657722 (JoinChatChannelRequestPacket_t3102580644 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.JoinChatChannelRequestPacket::ToString()
extern "C"  String_t* JoinChatChannelRequestPacket_ToString_m1953657823 (JoinChatChannelRequestPacket_t3102580644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
