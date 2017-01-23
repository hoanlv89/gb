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

// LitJson.JsonReader
struct JsonReader_t1077921503;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "AssemblyU2DCSharp_LitJson_JsonToken2852816099.h"
#include "AssemblyU2DCSharp_LitJson_ParserToken1554180950.h"

// System.Void LitJson.JsonReader::.cctor()
extern "C"  void JsonReader__cctor_m3182579300 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C"  void JsonReader__ctor_m3043878087 (JsonReader_t1077921503 * __this, String_t* ___json_text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
extern "C"  void JsonReader__ctor_m1288497814 (JsonReader_t1077921503 * __this, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C"  void JsonReader__ctor_m3853703861 (JsonReader_t1077921503 * __this, TextReader_t1561828458 * ___reader0, bool ___owned1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowComments()
extern "C"  bool JsonReader_get_AllowComments_m3269740765 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowComments(System.Boolean)
extern "C"  void JsonReader_set_AllowComments_m1623997376 (JsonReader_t1077921503 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowSingleQuotedStrings()
extern "C"  bool JsonReader_get_AllowSingleQuotedStrings_m869149991 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
extern "C"  void JsonReader_set_AllowSingleQuotedStrings_m3783400076 (JsonReader_t1077921503 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_SkipNonMembers()
extern "C"  bool JsonReader_get_SkipNonMembers_m4137731065 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_SkipNonMembers(System.Boolean)
extern "C"  void JsonReader_set_SkipNonMembers_m4107308204 (JsonReader_t1077921503 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfInput()
extern "C"  bool JsonReader_get_EndOfInput_m165791062 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfJson()
extern "C"  bool JsonReader_get_EndOfJson_m3339690038 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C"  int32_t JsonReader_get_Token_m683564410 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonReader::get_Value()
extern "C"  Il2CppObject * JsonReader_get_Value_m4116217666 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C"  void JsonReader_PopulateParseTable_m1215792198 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C"  void JsonReader_TableAddCol_m197802615 (Il2CppObject * __this /* static, unused */, int32_t ___row0, int32_t ___col1, Int32U5BU5D_t3030399641* ___symbols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C"  void JsonReader_TableAddRow_m2453949811 (Il2CppObject * __this /* static, unused */, int32_t ___rule0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C"  void JsonReader_ProcessNumber_m2946507723 (JsonReader_t1077921503 * __this, String_t* ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C"  void JsonReader_ProcessSymbol_m3991195328 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C"  bool JsonReader_ReadToken_m3669761134 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::Close()
extern "C"  void JsonReader_Close_m82627255 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::Read()
extern "C"  bool JsonReader_Read_m2669946103 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
