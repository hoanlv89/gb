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

// com.cubeia.firebase.io.protocol.ProbeStamp
struct ProbeStamp_t1113886509;
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

// System.Void com.cubeia.firebase.io.protocol.ProbeStamp::.ctor()
extern "C"  void ProbeStamp__ctor_m337887483 (ProbeStamp_t1113886509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ProbeStamp::.ctor(System.String,System.Int64)
extern "C"  void ProbeStamp__ctor_m1748794539 (ProbeStamp_t1113886509 * __this, String_t* ___clazz0, int64_t ___timestamp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.ProbeStamp::classId()
extern "C"  uint8_t ProbeStamp_classId_m1595380592 (ProbeStamp_t1113886509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ProbeStamp::save(Styx.PacketOutputStream)
extern "C"  void ProbeStamp_save_m929967841 (ProbeStamp_t1113886509 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ProbeStamp::load(Styx.PacketInputStream)
extern "C"  void ProbeStamp_load_m1047643271 (ProbeStamp_t1113886509 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.ProbeStamp::ToString()
extern "C"  String_t* ProbeStamp_ToString_m3009742644 (ProbeStamp_t1113886509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
