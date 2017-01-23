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

// ISN_Result
struct ISN_Result_t2775631610;
// ISN_Error
struct ISN_Error_t553253557;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ISN_Error553253557.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ISN_Result::.ctor(System.Boolean)
extern "C"  void ISN_Result__ctor_m3842574264 (ISN_Result_t2775631610 * __this, bool ___IsResultSucceeded0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Result::.ctor(ISN_Error)
extern "C"  void ISN_Result__ctor_m4038088764 (ISN_Result_t2775631610 * __this, ISN_Error_t553253557 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Result::.ctor(System.String)
extern "C"  void ISN_Result__ctor_m2861769927 (ISN_Result_t2775631610 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_Result::get_IsSucceeded()
extern "C"  bool ISN_Result_get_IsSucceeded_m2375621801 (ISN_Result_t2775631610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_Result::get_IsFailed()
extern "C"  bool ISN_Result_get_IsFailed_m2279869901 (ISN_Result_t2775631610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ISN_Error ISN_Result::get_Error()
extern "C"  ISN_Error_t553253557 * ISN_Result_get_Error_m1908971740 (ISN_Result_t2775631610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Result::SetError(ISN_Error)
extern "C"  void ISN_Result_SetError_m2049516378 (ISN_Result_t2775631610 * __this, ISN_Error_t553253557 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
