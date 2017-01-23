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

// IOSNative
struct IOSNative_t1234227034;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void IOSNative::.ctor()
extern "C"  void IOSNative__ctor_m2731384399 (IOSNative_t1234227034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSNative::SerializeArray(System.String[])
extern "C"  String_t* IOSNative_SerializeArray_m565831201 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] IOSNative::ParseArray(System.String)
extern "C"  StringU5BU5D_t1642385972* IOSNative_ParseArray_m7195392 (Il2CppObject * __this /* static, unused */, String_t* ___arrayData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
