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

// com.cubeia.firebase.io.protocol.TableRemovedPacket
struct TableRemovedPacket_t1863944098;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.TableRemovedPacket::.ctor()
extern "C"  void TableRemovedPacket__ctor_m2334453094 (TableRemovedPacket_t1863944098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableRemovedPacket::.ctor(System.Int32)
extern "C"  void TableRemovedPacket__ctor_m2834992811 (TableRemovedPacket_t1863944098 * __this, int32_t ___tableid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TableRemovedPacket::classId()
extern "C"  uint8_t TableRemovedPacket_classId_m590307563 (TableRemovedPacket_t1863944098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableRemovedPacket::save(Styx.PacketOutputStream)
extern "C"  void TableRemovedPacket_save_m1602283734 (TableRemovedPacket_t1863944098 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableRemovedPacket::load(Styx.PacketInputStream)
extern "C"  void TableRemovedPacket_load_m2218966348 (TableRemovedPacket_t1863944098 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TableRemovedPacket::ToString()
extern "C"  String_t* TableRemovedPacket_ToString_m2369508305 (TableRemovedPacket_t1863944098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
