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

// com.cubeia.firebase.io.protocol.MttRegisterRequestPacket
struct MttRegisterRequestPacket_t2062203775;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.MttRegisterRequestPacket::.ctor()
extern "C"  void MttRegisterRequestPacket__ctor_m155036371 (MttRegisterRequestPacket_t2062203775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttRegisterRequestPacket::.ctor(System.Int32,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>)
extern "C"  void MttRegisterRequestPacket__ctor_m415252910 (MttRegisterRequestPacket_t2062203775 * __this, int32_t ___mttid0, List_1_t890982683 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.MttRegisterRequestPacket::classId()
extern "C"  uint8_t MttRegisterRequestPacket_classId_m4227204990 (MttRegisterRequestPacket_t2062203775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttRegisterRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void MttRegisterRequestPacket_save_m984284465 (MttRegisterRequestPacket_t2062203775 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.MttRegisterRequestPacket::load(Styx.PacketInputStream)
extern "C"  void MttRegisterRequestPacket_load_m795559487 (MttRegisterRequestPacket_t2062203775 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.MttRegisterRequestPacket::ToString()
extern "C"  String_t* MttRegisterRequestPacket_ToString_m3503834526 (MttRegisterRequestPacket_t2062203775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
