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

// LitJson.JsonMockWrapper
struct JsonMockWrapper_t4150814299;
// System.String
struct String_t;
// LitJson.JsonWriter
struct JsonWriter_t1927598499;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_JsonType3145703806.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_LitJson_JsonWriter1927598499.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void LitJson.JsonMockWrapper::.ctor()
extern "C"  void JsonMockWrapper__ctor_m2788056121 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsArray()
extern "C"  bool JsonMockWrapper_get_IsArray_m49665567 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsBoolean()
extern "C"  bool JsonMockWrapper_get_IsBoolean_m3078287128 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsDouble()
extern "C"  bool JsonMockWrapper_get_IsDouble_m4277915291 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsInt()
extern "C"  bool JsonMockWrapper_get_IsInt_m2831339305 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsLong()
extern "C"  bool JsonMockWrapper_get_IsLong_m975476376 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsObject()
extern "C"  bool JsonMockWrapper_get_IsObject_m3888507943 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsString()
extern "C"  bool JsonMockWrapper_get_IsString_m235186003 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::GetBoolean()
extern "C"  bool JsonMockWrapper_GetBoolean_m3875793383 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonMockWrapper::GetDouble()
extern "C"  double JsonMockWrapper_GetDouble_m3556198139 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonMockWrapper::GetInt()
extern "C"  int32_t JsonMockWrapper_GetInt_m1433456398 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonType LitJson.JsonMockWrapper::GetJsonType()
extern "C"  int32_t JsonMockWrapper_GetJsonType_m3246093367 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonMockWrapper::GetLong()
extern "C"  int64_t JsonMockWrapper_GetLong_m2249576360 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonMockWrapper::GetString()
extern "C"  String_t* JsonMockWrapper_GetString_m2586164731 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetBoolean(System.Boolean)
extern "C"  void JsonMockWrapper_SetBoolean_m2069691912 (JsonMockWrapper_t4150814299 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetDouble(System.Double)
extern "C"  void JsonMockWrapper_SetDouble_m3588855826 (JsonMockWrapper_t4150814299 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetInt(System.Int32)
extern "C"  void JsonMockWrapper_SetInt_m2124243485 (JsonMockWrapper_t4150814299 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetJsonType(LitJson.JsonType)
extern "C"  void JsonMockWrapper_SetJsonType_m2600410228 (JsonMockWrapper_t4150814299 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetLong(System.Int64)
extern "C"  void JsonMockWrapper_SetLong_m3948995031 (JsonMockWrapper_t4150814299 * __this, int64_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetString(System.String)
extern "C"  void JsonMockWrapper_SetString_m3390139026 (JsonMockWrapper_t4150814299 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonMockWrapper::ToJson()
extern "C"  String_t* JsonMockWrapper_ToJson_m2826419495 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::ToJson(LitJson.JsonWriter)
extern "C"  void JsonMockWrapper_ToJson_m2218577716 (JsonMockWrapper_t4150814299 * __this, JsonWriter_t1927598499 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IList.get_IsFixedSize()
extern "C"  bool JsonMockWrapper_System_Collections_IList_get_IsFixedSize_m1052323398 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IList.get_IsReadOnly()
extern "C"  bool JsonMockWrapper_System_Collections_IList_get_IsReadOnly_m2367938289 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMockWrapper::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * JsonMockWrapper_System_Collections_IList_get_Item_m1371010262 (JsonMockWrapper_t4150814299 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void JsonMockWrapper_System_Collections_IList_set_Item_m2350428899 (JsonMockWrapper_t4150814299 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonMockWrapper::System.Collections.IList.Add(System.Object)
extern "C"  int32_t JsonMockWrapper_System_Collections_IList_Add_m3616112889 (JsonMockWrapper_t4150814299 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Clear()
extern "C"  void JsonMockWrapper_System_Collections_IList_Clear_m2780517833 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IList.Contains(System.Object)
extern "C"  bool JsonMockWrapper_System_Collections_IList_Contains_m1031097137 (JsonMockWrapper_t4150814299 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonMockWrapper::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t JsonMockWrapper_System_Collections_IList_IndexOf_m2693613415 (JsonMockWrapper_t4150814299 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void JsonMockWrapper_System_Collections_IList_Insert_m588596076 (JsonMockWrapper_t4150814299 * __this, int32_t ___i0, Il2CppObject * ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Remove(System.Object)
extern "C"  void JsonMockWrapper_System_Collections_IList_Remove_m884300286 (JsonMockWrapper_t4150814299 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void JsonMockWrapper_System_Collections_IList_RemoveAt_m1157939730 (JsonMockWrapper_t4150814299 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonMockWrapper::System.Collections.ICollection.get_Count()
extern "C"  int32_t JsonMockWrapper_System_Collections_ICollection_get_Count_m3133566978 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool JsonMockWrapper_System_Collections_ICollection_get_IsSynchronized_m737582917 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMockWrapper::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * JsonMockWrapper_System_Collections_ICollection_get_SyncRoot_m1539299405 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void JsonMockWrapper_System_Collections_ICollection_CopyTo_m295748313 (JsonMockWrapper_t4150814299 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JsonMockWrapper::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * JsonMockWrapper_System_Collections_IEnumerable_GetEnumerator_m324611404 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool JsonMockWrapper_System_Collections_IDictionary_get_IsFixedSize_m3635804074 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool JsonMockWrapper_System_Collections_IDictionary_get_IsReadOnly_m1606667395 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * JsonMockWrapper_System_Collections_IDictionary_get_Keys_m1575086599 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * JsonMockWrapper_System_Collections_IDictionary_get_Values_m4247088615 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * JsonMockWrapper_System_Collections_IDictionary_get_Item_m2698085949 (JsonMockWrapper_t4150814299 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void JsonMockWrapper_System_Collections_IDictionary_set_Item_m2982278462 (JsonMockWrapper_t4150814299 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void JsonMockWrapper_System_Collections_IDictionary_Add_m1515287999 (JsonMockWrapper_t4150814299 * __this, Il2CppObject * ___k0, Il2CppObject * ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.Clear()
extern "C"  void JsonMockWrapper_System_Collections_IDictionary_Clear_m1766222419 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool JsonMockWrapper_System_Collections_IDictionary_Contains_m1237007071 (JsonMockWrapper_t4150814299 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void JsonMockWrapper_System_Collections_IDictionary_Remove_m3701993706 (JsonMockWrapper_t4150814299 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonMockWrapper::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * JsonMockWrapper_System_Collections_IDictionary_GetEnumerator_m3898769730 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMockWrapper::LitJson.IOrderedDictionary.get_Item(System.Int32)
extern "C"  Il2CppObject * JsonMockWrapper_LitJson_IOrderedDictionary_get_Item_m3123464766 (JsonMockWrapper_t4150814299 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::LitJson.IOrderedDictionary.set_Item(System.Int32,System.Object)
extern "C"  void JsonMockWrapper_LitJson_IOrderedDictionary_set_Item_m3667407125 (JsonMockWrapper_t4150814299 * __this, int32_t ___idx0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonMockWrapper::LitJson.IOrderedDictionary.GetEnumerator()
extern "C"  Il2CppObject * JsonMockWrapper_LitJson_IOrderedDictionary_GetEnumerator_m1313767634 (JsonMockWrapper_t4150814299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::LitJson.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
extern "C"  void JsonMockWrapper_LitJson_IOrderedDictionary_Insert_m3599054142 (JsonMockWrapper_t4150814299 * __this, int32_t ___i0, Il2CppObject * ___k1, Il2CppObject * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::LitJson.IOrderedDictionary.RemoveAt(System.Int32)
extern "C"  void JsonMockWrapper_LitJson_IOrderedDictionary_RemoveAt_m611014250 (JsonMockWrapper_t4150814299 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
