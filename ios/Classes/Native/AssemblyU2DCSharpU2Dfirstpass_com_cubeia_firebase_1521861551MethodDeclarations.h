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

// com.cubeia.firebase.io.protocol.Param
struct Param_t1521861551;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.Param::.ctor()
extern "C"  void Param__ctor_m494311929 (Param_t1521861551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.Param::.ctor(System.String,System.Byte,System.Byte[])
extern "C"  void Param__ctor_m3274551021 (Param_t1521861551 * __this, String_t* ___key0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.Param::classId()
extern "C"  uint8_t Param_classId_m1418701842 (Param_t1521861551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.Param::save(Styx.PacketOutputStream)
extern "C"  void Param_save_m329543443 (Param_t1521861551 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.Param::load(Styx.PacketInputStream)
extern "C"  void Param_load_m1260446857 (Param_t1521861551 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.Param::ToString()
extern "C"  String_t* Param_ToString_m238095068 (Param_t1521861551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
