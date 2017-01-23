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

// com.cubeia.firebase.io.protocol.TableUpdatePacket
struct TableUpdatePacket_t2682447827;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;
// System.String[]
struct StringU5BU5D_t1642385972;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.TableUpdatePacket::.ctor()
extern "C"  void TableUpdatePacket__ctor_m1320972109 (TableUpdatePacket_t2682447827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableUpdatePacket::.ctor(System.Int32,System.Int16,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>,System.String[])
extern "C"  void TableUpdatePacket__ctor_m1790711153 (TableUpdatePacket_t2682447827 * __this, int32_t ___tableid0, int16_t ___seated1, List_1_t890982683 * ___parameters2, StringU5BU5D_t1642385972* ___removedParams3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TableUpdatePacket::classId()
extern "C"  uint8_t TableUpdatePacket_classId_m2181679654 (TableUpdatePacket_t2682447827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableUpdatePacket::save(Styx.PacketOutputStream)
extern "C"  void TableUpdatePacket_save_m2746203947 (TableUpdatePacket_t2682447827 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableUpdatePacket::load(Styx.PacketInputStream)
extern "C"  void TableUpdatePacket_load_m1228598581 (TableUpdatePacket_t2682447827 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TableUpdatePacket::ToString()
extern "C"  String_t* TableUpdatePacket_ToString_m440551004 (TableUpdatePacket_t2682447827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
