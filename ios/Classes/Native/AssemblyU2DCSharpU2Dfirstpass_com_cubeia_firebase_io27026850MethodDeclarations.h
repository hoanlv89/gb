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

// com.cubeia.firebase.io.protocol.TableChatPacket
struct TableChatPacket_t27026850;
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

// System.Void com.cubeia.firebase.io.protocol.TableChatPacket::.ctor()
extern "C"  void TableChatPacket__ctor_m2104793826 (TableChatPacket_t27026850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableChatPacket::.ctor(System.Int32,System.Int32,System.String)
extern "C"  void TableChatPacket__ctor_m3621326162 (TableChatPacket_t27026850 * __this, int32_t ___tableid0, int32_t ___pid1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.TableChatPacket::classId()
extern "C"  uint8_t TableChatPacket_classId_m18783187 (TableChatPacket_t27026850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableChatPacket::save(Styx.PacketOutputStream)
extern "C"  void TableChatPacket_save_m2250301098 (TableChatPacket_t27026850 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.TableChatPacket::load(Styx.PacketInputStream)
extern "C"  void TableChatPacket_load_m1119728336 (TableChatPacket_t27026850 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.TableChatPacket::ToString()
extern "C"  String_t* TableChatPacket_ToString_m4281318613 (TableChatPacket_t27026850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
