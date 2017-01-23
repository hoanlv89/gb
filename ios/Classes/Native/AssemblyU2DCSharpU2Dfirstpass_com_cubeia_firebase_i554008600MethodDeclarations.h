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

// com.cubeia.firebase.io.protocol.WatchResponsePacket
struct WatchResponsePacket_t554008600;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_4281922876.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.WatchResponsePacket::.ctor()
extern "C"  void WatchResponsePacket__ctor_m216778408 (WatchResponsePacket_t554008600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.WatchResponsePacket::.ctor(System.Int32,com.cubeia.firebase.io.protocol.Enums/WatchResponseStatus)
extern "C"  void WatchResponsePacket__ctor_m1306750243 (WatchResponsePacket_t554008600 * __this, int32_t ___tableid0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.WatchResponsePacket::classId()
extern "C"  uint8_t WatchResponsePacket_classId_m983496425 (WatchResponsePacket_t554008600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.WatchResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void WatchResponsePacket_save_m2304681972 (WatchResponsePacket_t554008600 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.WatchResponsePacket::load(Styx.PacketInputStream)
extern "C"  void WatchResponsePacket_load_m15692570 (WatchResponsePacket_t554008600 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.WatchResponsePacket::ToString()
extern "C"  String_t* WatchResponsePacket_ToString_m1275662155 (WatchResponsePacket_t554008600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
