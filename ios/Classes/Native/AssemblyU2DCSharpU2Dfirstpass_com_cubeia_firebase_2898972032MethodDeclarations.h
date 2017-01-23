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

// com.cubeia.firebase.io.protocol.LeaveChatChannelPacket
struct LeaveChatChannelPacket_t2898972032;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.LeaveChatChannelPacket::.ctor()
extern "C"  void LeaveChatChannelPacket__ctor_m3090031414 (LeaveChatChannelPacket_t2898972032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LeaveChatChannelPacket::.ctor(System.Int32)
extern "C"  void LeaveChatChannelPacket__ctor_m2860383597 (LeaveChatChannelPacket_t2898972032 * __this, int32_t ___channelid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.LeaveChatChannelPacket::classId()
extern "C"  uint8_t LeaveChatChannelPacket_classId_m1788048157 (LeaveChatChannelPacket_t2898972032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LeaveChatChannelPacket::save(Styx.PacketOutputStream)
extern "C"  void LeaveChatChannelPacket_save_m3764862970 (LeaveChatChannelPacket_t2898972032 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.LeaveChatChannelPacket::load(Styx.PacketInputStream)
extern "C"  void LeaveChatChannelPacket_load_m1329093820 (LeaveChatChannelPacket_t2898972032 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.LeaveChatChannelPacket::ToString()
extern "C"  String_t* LeaveChatChannelPacket_ToString_m3820123771 (LeaveChatChannelPacket_t2898972032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
