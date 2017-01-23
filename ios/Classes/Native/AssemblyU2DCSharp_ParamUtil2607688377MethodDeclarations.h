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

// ParamUtil
struct ParamUtil_t2607688377;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ParamUtil::.ctor()
extern "C"  void ParamUtil__ctor_m1395034972 (ParamUtil_t2607688377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParamUtil::readIntParam(System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>,System.String)
extern "C"  int32_t ParamUtil_readIntParam_m3469647664 (Il2CppObject * __this /* static, unused */, List_1_t890982683 * ___parameters0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ParamUtil::readStringParam(System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>,System.String)
extern "C"  String_t* ParamUtil_readStringParam_m3709804625 (Il2CppObject * __this /* static, unused */, List_1_t890982683 * ___parameters0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
