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

// HTTPPOSTParam
struct HTTPPOSTParam_t2574473185;
// SimpleJSON.JSONClass
struct JSONClass_t1609506608;
// System.String
struct String_t;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void HTTPPOSTParam::.ctor()
extern "C"  void HTTPPOSTParam__ctor_m2845617714 (HTTPPOSTParam_t2574473185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass HTTPPOSTParam::createParam(System.String,System.String)
extern "C"  JSONClass_t1609506608 * HTTPPOSTParam_createParam_m1532511482 (Il2CppObject * __this /* static, unused */, String_t* ___param0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass HTTPPOSTParam::createParam(System.String,System.Int32)
extern "C"  JSONClass_t1609506608 * HTTPPOSTParam_createParam_m2150925057 (Il2CppObject * __this /* static, unused */, String_t* ___param0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass HTTPPOSTParam::createParam(System.String,System.Boolean)
extern "C"  JSONClass_t1609506608 * HTTPPOSTParam_createParam_m2533548523 (Il2CppObject * __this /* static, unused */, String_t* ___param0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray HTTPPOSTParam::get_defaultParameters()
extern "C"  JSONArray_t3986483147 * HTTPPOSTParam_get_defaultParameters_m2746468336 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
