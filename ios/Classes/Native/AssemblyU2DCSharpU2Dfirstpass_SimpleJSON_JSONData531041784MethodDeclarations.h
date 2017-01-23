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

// SimpleJSON.JSONData
struct JSONData_t531041784;
// System.String
struct String_t;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"

// System.Void SimpleJSON.JSONData::.ctor(System.String)
extern "C"  void JSONData__ctor_m1870936975 (JSONData_t531041784 * __this, String_t* ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Single)
extern "C"  void JSONData__ctor_m786276166 (JSONData_t531041784 * __this, float ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Double)
extern "C"  void JSONData__ctor_m1969237303 (JSONData_t531041784 * __this, double ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Boolean)
extern "C"  void JSONData__ctor_m3427559524 (JSONData_t531041784 * __this, bool ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Int32)
extern "C"  void JSONData__ctor_m3873100012 (JSONData_t531041784 * __this, int32_t ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Int64)
extern "C"  void JSONData__ctor_m3449612503 (JSONData_t531041784 * __this, int64_t ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::get_Value()
extern "C"  String_t* JSONData_get_Value_m4069224822 (JSONData_t531041784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::set_Value(System.String)
extern "C"  void JSONData_set_Value_m3473420061 (JSONData_t531041784 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::ToString()
extern "C"  String_t* JSONData_ToString_m4221056034 (JSONData_t531041784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::ToString(System.String)
extern "C"  String_t* JSONData_ToString_m1262448868 (JSONData_t531041784 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONData_Serialize_m308031310 (JSONData_t531041784 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
