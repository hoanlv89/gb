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

// com.cubeia.firebase.io.protocol.NotifySeatedPacket
struct NotifySeatedPacket_t4052319781;
// com.cubeia.firebase.io.protocol.TableSnapshotPacket
struct TableSnapshotPacket_t3456557784;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_3456557784.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.NotifySeatedPacket::.ctor()
extern "C"  void NotifySeatedPacket__ctor_m534695091 (NotifySeatedPacket_t4052319781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifySeatedPacket::.ctor(System.Int32,System.Byte,System.Int32,com.cubeia.firebase.io.protocol.TableSnapshotPacket)
extern "C"  void NotifySeatedPacket__ctor_m2917009515 (NotifySeatedPacket_t4052319781 * __this, int32_t ___tableid0, uint8_t ___seat1, int32_t ___mttid2, TableSnapshotPacket_t3456557784 * ___snapshot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.NotifySeatedPacket::classId()
extern "C"  uint8_t NotifySeatedPacket_classId_m511109096 (NotifySeatedPacket_t4052319781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifySeatedPacket::save(Styx.PacketOutputStream)
extern "C"  void NotifySeatedPacket_save_m1694907253 (NotifySeatedPacket_t4052319781 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.NotifySeatedPacket::load(Styx.PacketInputStream)
extern "C"  void NotifySeatedPacket_load_m3735959023 (NotifySeatedPacket_t4052319781 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.NotifySeatedPacket::ToString()
extern "C"  String_t* NotifySeatedPacket_ToString_m1972682408 (NotifySeatedPacket_t4052319781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
