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

// com.cubeia.firebase.io.protocol.ParamFilter
struct ParamFilter_t4156718529;
// com.cubeia.firebase.io.protocol.Param
struct Param_t1521861551;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_1521861551.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.ParamFilter::.ctor()
extern "C"  void ParamFilter__ctor_m3640950017 (ParamFilter_t4156718529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ParamFilter::.ctor(com.cubeia.firebase.io.protocol.Param,System.Byte)
extern "C"  void ParamFilter__ctor_m1535352146 (ParamFilter_t4156718529 * __this, Param_t1521861551 * ___param0, uint8_t ___op1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.ParamFilter::classId()
extern "C"  uint8_t ParamFilter_classId_m2091976968 (ParamFilter_t4156718529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ParamFilter::save(Styx.PacketOutputStream)
extern "C"  void ParamFilter_save_m212659495 (ParamFilter_t4156718529 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ParamFilter::load(Styx.PacketInputStream)
extern "C"  void ParamFilter_load_m3760365137 (ParamFilter_t4156718529 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.ParamFilter::ToString()
extern "C"  String_t* ParamFilter_ToString_m788747294 (ParamFilter_t4156718529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
