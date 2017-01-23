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

// LitJson.JsonMapper
struct JsonMapper_t800426905;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1736152084;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// LitJson.JsonReader
struct JsonReader_t1077921503;
// LitJson.IJsonWrapper
struct IJsonWrapper_t3045908096;
// LitJson.WrapperFactory
struct WrapperFactory_t2219329745;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t2850733530;
// LitJson.ImporterFunc
struct ImporterFunc_t2977850894;
// LitJson.JsonWriter
struct JsonWriter_t1927598499;
// LitJson.JsonData
struct JsonData_t269267574;
// System.IO.TextReader
struct TextReader_t1561828458;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_LitJson_JsonReader1077921503.h"
#include "AssemblyU2DCSharp_LitJson_WrapperFactory2219329745.h"
#include "AssemblyU2DCSharp_LitJson_ImporterFunc2977850894.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_LitJson_JsonWriter1927598499.h"
#include "mscorlib_System_IO_TextReader1561828458.h"

// System.Void LitJson.JsonMapper::.cctor()
extern "C"  void JsonMapper__cctor_m3847116694 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::.ctor()
extern "C"  void JsonMapper__ctor_m31987079 (JsonMapper_t800426905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMapper::HasInterface(System.Type,System.String)
extern "C"  bool JsonMapper_HasInterface_m2750082585 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] LitJson.JsonMapper::GetPublicInstanceProperties(System.Type)
extern "C"  PropertyInfoU5BU5D_t1736152084* JsonMapper_GetPublicInstanceProperties_m2663576037 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
extern "C"  void JsonMapper_AddArrayMetadata_m2658548209 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
extern "C"  void JsonMapper_AddObjectMetadata_m2230115197 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
extern "C"  void JsonMapper_AddTypeProperties_m594662366 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
extern "C"  MethodInfo_t * JsonMapper_GetConvOp_m3895437242 (Il2CppObject * __this /* static, unused */, Type_t * ___t10, Type_t * ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ReadValue_m387333528 (Il2CppObject * __this /* static, unused */, Type_t * ___inst_type0, JsonReader_t1077921503 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ReadValue_m1135425432 (Il2CppObject * __this /* static, unused */, WrapperFactory_t2219329745 * ___factory0, JsonReader_t1077921503 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ReadSkip(LitJson.JsonReader)
extern "C"  void JsonMapper_ReadSkip_m380238574 (Il2CppObject * __this /* static, unused */, JsonReader_t1077921503 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C"  void JsonMapper_RegisterBaseExporters_m2862974179 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C"  void JsonMapper_RegisterBaseImporters_m2561616616 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C"  void JsonMapper_RegisterImporter_m1418496518 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t2977850894 * ___importer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
extern "C"  void JsonMapper_WriteValue_m802351681 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonMapper::ToJson(System.Object)
extern "C"  String_t* JsonMapper_ToJson_m363765535 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ToJson(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_ToJson_m4046388780 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(LitJson.JsonReader)
extern "C"  JsonData_t269267574 * JsonMapper_ToObject_m3935873927 (Il2CppObject * __this /* static, unused */, JsonReader_t1077921503 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.IO.TextReader)
extern "C"  JsonData_t269267574 * JsonMapper_ToObject_m515718834 (Il2CppObject * __this /* static, unused */, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
extern "C"  JsonData_t269267574 * JsonMapper_ToObject_m696963531 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ToWrapper_m3871189631 (Il2CppObject * __this /* static, unused */, WrapperFactory_t2219329745 * ___factory0, JsonReader_t1077921503 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern "C"  Il2CppObject * JsonMapper_ToWrapper_m3119449067 (Il2CppObject * __this /* static, unused */, WrapperFactory_t2219329745 * ___factory0, String_t* ___json1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterExporters()
extern "C"  void JsonMapper_UnregisterExporters_m3408852613 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterImporters()
extern "C"  void JsonMapper_UnregisterImporters_m1960460930 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ReadSkip>m__0()
extern "C"  Il2CppObject * JsonMapper_U3CReadSkipU3Em__0_m2271342165 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__1_m2007015467 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__2_m2765647946 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__3_m913351657 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__4_m216175376 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__5_m2941501871 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__6_m3700134350 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__7_m1847838061 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__8_m655586436 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__9_m3380912931 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__A_m1162930739 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__B_m2548262484 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__C_m2037048565 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__D_m3215457806 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__E_m2497050799 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__F_m3882382544 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__10_m3222837383 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__11_m159861762 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__12_m372235537 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__13_m2241952908 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__14_m454856091 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__15_m1686847766 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__16()
extern "C"  Il2CppObject * JsonMapper_U3CToObjectU3Em__16_m4135605883 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__17()
extern "C"  Il2CppObject * JsonMapper_U3CToObjectU3Em__17_m4276768384 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
extern "C"  Il2CppObject * JsonMapper_U3CToObjectU3Em__18_m3140820161 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
