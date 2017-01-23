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

// com.cubeia.firebase.io.protocol.SeatInfoPacket
struct SeatInfoPacket_t765533489;
// com.cubeia.firebase.io.protocol.PlayerInfoPacket
struct PlayerInfoPacket_t1772682825;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_1267095325.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_1772682825.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.SeatInfoPacket::.ctor()
extern "C"  void SeatInfoPacket__ctor_m1697895223 (SeatInfoPacket_t765533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.SeatInfoPacket::.ctor(System.Int32,System.Byte,com.cubeia.firebase.io.protocol.Enums/PlayerStatus,com.cubeia.firebase.io.protocol.PlayerInfoPacket)
extern "C"  void SeatInfoPacket__ctor_m1343112828 (SeatInfoPacket_t765533489 * __this, int32_t ___tableid0, uint8_t ___seat1, int32_t ___status2, PlayerInfoPacket_t1772682825 * ___player3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.SeatInfoPacket::classId()
extern "C"  uint8_t SeatInfoPacket_classId_m1334756668 (SeatInfoPacket_t765533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.SeatInfoPacket::save(Styx.PacketOutputStream)
extern "C"  void SeatInfoPacket_save_m1398985253 (SeatInfoPacket_t765533489 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.SeatInfoPacket::load(Styx.PacketInputStream)
extern "C"  void SeatInfoPacket_load_m1296239195 (SeatInfoPacket_t765533489 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.SeatInfoPacket::ToString()
extern "C"  String_t* SeatInfoPacket_ToString_m1730822912 (SeatInfoPacket_t765533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
