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

// ISN_Error
struct ISN_Error_t553253557;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ISN_Error::.ctor(System.Int32,System.String)
extern "C"  void ISN_Error__ctor_m2554300207 (ISN_Error_t553253557 * __this, int32_t ___code0, String_t* ___description1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Error::.ctor(System.String)
extern "C"  void ISN_Error__ctor_m4248599056 (ISN_Error_t553253557 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ISN_Error::get_Code()
extern "C"  int32_t ISN_Error_get_Code_m3097451418 (ISN_Error_t553253557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_Error::get_Description()
extern "C"  String_t* ISN_Error_get_Description_m3136629502 (ISN_Error_t553253557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
