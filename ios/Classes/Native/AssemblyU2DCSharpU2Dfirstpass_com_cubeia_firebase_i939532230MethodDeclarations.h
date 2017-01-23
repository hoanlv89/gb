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

// com.cubeia.firebase.io.protocol.WatchRequestPacket
struct WatchRequestPacket_t939532230;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.WatchRequestPacket::.ctor()
extern "C"  void WatchRequestPacket__ctor_m2745804546 (WatchRequestPacket_t939532230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.WatchRequestPacket::.ctor(System.Int32)
extern "C"  void WatchRequestPacket__ctor_m236071855 (WatchRequestPacket_t939532230 * __this, int32_t ___tableid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.WatchRequestPacket::classId()
extern "C"  uint8_t WatchRequestPacket_classId_m652140839 (WatchRequestPacket_t939532230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.WatchRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void WatchRequestPacket_save_m450900722 (WatchRequestPacket_t939532230 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.WatchRequestPacket::load(Styx.PacketInputStream)
extern "C"  void WatchRequestPacket_load_m1352853680 (WatchRequestPacket_t939532230 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.WatchRequestPacket::ToString()
extern "C"  String_t* WatchRequestPacket_ToString_m3793504621 (WatchRequestPacket_t939532230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
