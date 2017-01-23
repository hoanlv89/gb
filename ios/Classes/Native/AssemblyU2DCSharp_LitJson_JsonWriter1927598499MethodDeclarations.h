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

// LitJson.JsonWriter
struct JsonWriter_t1927598499;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "AssemblyU2DCSharp_LitJson_Condition1980525237.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Decimal724701077.h"

// System.Void LitJson.JsonWriter::.cctor()
extern "C"  void JsonWriter__cctor_m2216478240 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor()
extern "C"  void JsonWriter__ctor_m2112583919 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.Text.StringBuilder)
extern "C"  void JsonWriter__ctor_m3559537543 (JsonWriter_t1927598499 * __this, StringBuilder_t1221177846 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
extern "C"  void JsonWriter__ctor_m512245462 (JsonWriter_t1927598499 * __this, TextWriter_t4027217640 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonWriter::get_IndentValue()
extern "C"  int32_t JsonWriter_get_IndentValue_m628783363 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_IndentValue(System.Int32)
extern "C"  void JsonWriter_set_IndentValue_m320827352 (JsonWriter_t1927598499 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonWriter::get_PrettyPrint()
extern "C"  bool JsonWriter_get_PrettyPrint_m1778172105 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_PrettyPrint(System.Boolean)
extern "C"  void JsonWriter_set_PrettyPrint_m1389412068 (JsonWriter_t1927598499 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
extern "C"  TextWriter_t4027217640 * JsonWriter_get_TextWriter_m2307274740 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonWriter::get_Validate()
extern "C"  bool JsonWriter_get_Validate_m3381800952 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
extern "C"  void JsonWriter_set_Validate_m1017367255 (JsonWriter_t1927598499 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C"  void JsonWriter_DoValidation_m2121115963 (JsonWriter_t1927598499 * __this, int32_t ___cond0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Init()
extern "C"  void JsonWriter_Init_m3541859981 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C"  void JsonWriter_IntToHex_m1882835318 (Il2CppObject * __this /* static, unused */, int32_t ___n0, CharU5BU5D_t1328083999* ___hex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Indent()
extern "C"  void JsonWriter_Indent_m3787770047 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C"  void JsonWriter_Put_m4202825442 (JsonWriter_t1927598499 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline()
extern "C"  void JsonWriter_PutNewline_m4092526258 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C"  void JsonWriter_PutNewline_m3623716391 (JsonWriter_t1927598499 * __this, bool ___add_comma0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C"  void JsonWriter_PutString_m3487864109 (JsonWriter_t1927598499 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Unindent()
extern "C"  void JsonWriter_Unindent_m4236524432 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonWriter::ToString()
extern "C"  String_t* JsonWriter_ToString_m1467972344 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Reset()
extern "C"  void JsonWriter_Reset_m151033054 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Boolean)
extern "C"  void JsonWriter_Write_m779381501 (JsonWriter_t1927598499 * __this, bool ___boolean0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C"  void JsonWriter_Write_m4068617142 (JsonWriter_t1927598499 * __this, Decimal_t724701077  ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Double)
extern "C"  void JsonWriter_Write_m3341805312 (JsonWriter_t1927598499 * __this, double ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C"  void JsonWriter_Write_m932902979 (JsonWriter_t1927598499 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int64)
extern "C"  void JsonWriter_Write_m4065070762 (JsonWriter_t1927598499 * __this, int64_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C"  void JsonWriter_Write_m333700748 (JsonWriter_t1927598499 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C"  void JsonWriter_Write_m46732529 (JsonWriter_t1927598499 * __this, uint64_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayEnd()
extern "C"  void JsonWriter_WriteArrayEnd_m865445080 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayStart()
extern "C"  void JsonWriter_WriteArrayStart_m2759024919 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectEnd()
extern "C"  void JsonWriter_WriteObjectEnd_m3879377680 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectStart()
extern "C"  void JsonWriter_WriteObjectStart_m3439570647 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
extern "C"  void JsonWriter_WritePropertyName_m860526458 (JsonWriter_t1927598499 * __this, String_t* ___property_name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
