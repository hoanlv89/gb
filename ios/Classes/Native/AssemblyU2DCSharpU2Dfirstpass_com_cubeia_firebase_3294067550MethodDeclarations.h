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

// com.cubeia.firebase.io.protocol.JoinChatChannelResponsePacket
struct JoinChatChannelResponsePacket_t3294067550;
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

// System.Void com.cubeia.firebase.io.protocol.JoinChatChannelResponsePacket::.ctor()
extern "C"  void JoinChatChannelResponsePacket__ctor_m713492878 (JoinChatChannelResponsePacket_t3294067550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinChatChannelResponsePacket::.ctor(System.Int32,com.cubeia.firebase.io.protocol.Enums/ResponseStatus)
extern "C"  void JoinChatChannelResponsePacket__ctor_m1977591562 (JoinChatChannelResponsePacket_t3294067550 * __this, int32_t ___channelid0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.JoinChatChannelResponsePacket::classId()
extern "C"  uint8_t JoinChatChannelResponsePacket_classId_m923961495 (JoinChatChannelResponsePacket_t3294067550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinChatChannelResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void JoinChatChannelResponsePacket_save_m2021149366 (JoinChatChannelResponsePacket_t3294067550 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.JoinChatChannelResponsePacket::load(Styx.PacketInputStream)
extern "C"  void JoinChatChannelResponsePacket_load_m4062688964 (JoinChatChannelResponsePacket_t3294067550 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.JoinChatChannelResponsePacket::ToString()
extern "C"  String_t* JoinChatChannelResponsePacket_ToString_m4218311265 (JoinChatChannelResponsePacket_t3294067550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
