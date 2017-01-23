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

// com.cubeia.firebase.io.protocol.TableQueryResponsePacket
struct TableQueryResponsePacket_t3788432351;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.SeatInfoPacket>
struct List_1_t134654621;
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

// System.Void com.cubeia.firebase.io.protocol.TableQueryResponsePacket::.ctor()
extern "C"  void TableQueryResponsePacket__ctor_m106821493 (TableQueryResponsePacket_t3788432351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableQueryResponsePacket::.ctor(System.Int32,com.cubeia.firebase.io.protocol.Enums/ResponseStatus,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.SeatInfoPacket>)
extern "C"  void TableQueryResponsePacket__ctor_m4014460267 (TableQueryResponsePacket_t3788432351 * __this, int32_t ___tableid0, int32_t ___status1, List_1_t134654621 * ___seats2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TableQueryResponsePacket::classId()
extern "C"  uint8_t TableQueryResponsePacket_classId_m2756178702 (TableQueryResponsePacket_t3788432351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableQueryResponsePacket::save(Styx.PacketOutputStream)
extern "C"  void TableQueryResponsePacket_save_m1715534383 (TableQueryResponsePacket_t3788432351 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableQueryResponsePacket::load(Styx.PacketInputStream)
extern "C"  void TableQueryResponsePacket_load_m732302861 (TableQueryResponsePacket_t3788432351 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TableQueryResponsePacket::ToString()
extern "C"  String_t* TableQueryResponsePacket_ToString_m1967879950 (TableQueryResponsePacket_t3788432351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
