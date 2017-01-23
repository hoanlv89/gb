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

// com.cubeia.firebase.io.protocol.ChannelChatPacket
struct ChannelChatPacket_t3676103175;
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

// System.Void com.cubeia.firebase.io.protocol.ChannelChatPacket::.ctor()
extern "C"  void ChannelChatPacket__ctor_m1474577335 (ChannelChatPacket_t3676103175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ChannelChatPacket::.ctor(System.Int32,System.Int32,System.String)
extern "C"  void ChannelChatPacket__ctor_m2800192145 (ChannelChatPacket_t3676103175 * __this, int32_t ___channelid0, int32_t ___targetid1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.ChannelChatPacket::classId()
extern "C"  uint8_t ChannelChatPacket_classId_m1852143390 (ChannelChatPacket_t3676103175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ChannelChatPacket::save(Styx.PacketOutputStream)
extern "C"  void ChannelChatPacket_save_m96007489 (ChannelChatPacket_t3676103175 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ChannelChatPacket::load(Styx.PacketInputStream)
extern "C"  void ChannelChatPacket_load_m3325446459 (ChannelChatPacket_t3676103175 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.ChannelChatPacket::ToString()
extern "C"  String_t* ChannelChatPacket_ToString_m3769938548 (ChannelChatPacket_t3676103175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
