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

// com.cubeia.firebase.io.protocol.TableQueryRequestPacket
struct TableQueryRequestPacket_t1337222919;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.TableQueryRequestPacket::.ctor()
extern "C"  void TableQueryRequestPacket__ctor_m2788295207 (TableQueryRequestPacket_t1337222919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableQueryRequestPacket::.ctor(System.Int32)
extern "C"  void TableQueryRequestPacket__ctor_m1720958310 (TableQueryRequestPacket_t1337222919 * __this, int32_t ___tableid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TableQueryRequestPacket::classId()
extern "C"  uint8_t TableQueryRequestPacket_classId_m3075983038 (TableQueryRequestPacket_t1337222919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableQueryRequestPacket::save(Styx.PacketOutputStream)
extern "C"  void TableQueryRequestPacket_save_m460920525 (TableQueryRequestPacket_t1337222919 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableQueryRequestPacket::load(Styx.PacketInputStream)
extern "C"  void TableQueryRequestPacket_load_m2098244731 (TableQueryRequestPacket_t1337222919 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TableQueryRequestPacket::ToString()
extern "C"  String_t* TableQueryRequestPacket_ToString_m2522299400 (TableQueryRequestPacket_t1337222919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
