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

// LitJson.JsonData
struct JsonData_t269267574;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2981295538;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Array
struct Il2CppArray;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// LitJson.JsonWriter
struct JsonWriter_t1927598499;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.IList
struct IList_t3321498491;
// LitJson.IJsonWrapper
struct IJsonWrapper_t3045908096;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_LitJson_JsonData269267574.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_LitJson_JsonWriter1927598499.h"
#include "AssemblyU2DCSharp_LitJson_JsonType3145703806.h"

// System.Void LitJson.JsonData::.ctor()
extern "C"  void JsonData__ctor_m3069984372 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Boolean)
extern "C"  void JsonData__ctor_m2569786487 (JsonData_t269267574 * __this, bool ___boolean0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Double)
extern "C"  void JsonData__ctor_m1730543662 (JsonData_t269267574 * __this, double ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int32)
extern "C"  void JsonData__ctor_m292798653 (JsonData_t269267574 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int64)
extern "C"  void JsonData__ctor_m1455597840 (JsonData_t269267574 * __this, int64_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Object)
extern "C"  void JsonData__ctor_m3622798684 (JsonData_t269267574 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.String)
extern "C"  void JsonData__ctor_m3845109798 (JsonData_t269267574 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::get_Count()
extern "C"  int32_t JsonData_get_Count_m1584279558 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsArray()
extern "C"  bool JsonData_get_IsArray_m2633928780 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsBoolean()
extern "C"  bool JsonData_get_IsBoolean_m3787095175 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsDouble()
extern "C"  bool JsonData_get_IsDouble_m484138592 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsInt()
extern "C"  bool JsonData_get_IsInt_m3869451864 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsLong()
extern "C"  bool JsonData_get_IsLong_m2164256357 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsObject()
extern "C"  bool JsonData_get_IsObject_m4069969874 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsString()
extern "C"  bool JsonData_get_IsString_m2224549720 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> LitJson.JsonData::get_Keys()
extern "C"  Il2CppObject* JsonData_get_Keys_m2138133699 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
extern "C"  int32_t JsonData_System_Collections_ICollection_get_Count_m571890873 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool JsonData_System_Collections_ICollection_get_IsSynchronized_m4151048270 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * JsonData_System_Collections_ICollection_get_SyncRoot_m1812955940 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool JsonData_System_Collections_IDictionary_get_IsFixedSize_m2326861627 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool JsonData_System_Collections_IDictionary_get_IsReadOnly_m325669830 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * JsonData_System_Collections_IDictionary_get_Keys_m2061945284 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * JsonData_System_Collections_IDictionary_get_Values_m2863610242 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsArray()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsArray_m3571346441 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsBoolean()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsBoolean_m1427468962 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsDouble()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsDouble_m346598449 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsInt()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsInt_m687429651 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsLong()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsLong_m883283918 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsObject()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsObject_m2966436049 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsString()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsString_m2177036925 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
extern "C"  bool JsonData_System_Collections_IList_get_IsFixedSize_m1071291553 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
extern "C"  bool JsonData_System_Collections_IList_get_IsReadOnly_m595009218 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * JsonData_System_Collections_IDictionary_get_Item_m472563764 (JsonData_t269267574 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void JsonData_System_Collections_IDictionary_set_Item_m2999951899 (JsonData_t269267574 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::LitJson.IOrderedDictionary.get_Item(System.Int32)
extern "C"  Il2CppObject * JsonData_LitJson_IOrderedDictionary_get_Item_m3688854439 (JsonData_t269267574 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IOrderedDictionary.set_Item(System.Int32,System.Object)
extern "C"  void JsonData_LitJson_IOrderedDictionary_set_Item_m2063738562 (JsonData_t269267574 * __this, int32_t ___idx0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * JsonData_System_Collections_IList_get_Item_m711004753 (JsonData_t269267574 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void JsonData_System_Collections_IList_set_Item_m1748366562 (JsonData_t269267574 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
extern "C"  JsonData_t269267574 * JsonData_get_Item_m831619934 (JsonData_t269267574 * __this, String_t* ___prop_name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
extern "C"  void JsonData_set_Item_m24780213 (JsonData_t269267574 * __this, String_t* ___prop_name0, JsonData_t269267574 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
extern "C"  JsonData_t269267574 * JsonData_get_Item_m2655211997 (JsonData_t269267574 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
extern "C"  void JsonData_set_Item_m2193853438 (JsonData_t269267574 * __this, int32_t ___index0, JsonData_t269267574 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Boolean)
extern "C"  JsonData_t269267574 * JsonData_op_Implicit_m1914861502 (Il2CppObject * __this /* static, unused */, bool ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Double)
extern "C"  JsonData_t269267574 * JsonData_op_Implicit_m2319857245 (Il2CppObject * __this /* static, unused */, double ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int32)
extern "C"  JsonData_t269267574 * JsonData_op_Implicit_m2453000874 (Il2CppObject * __this /* static, unused */, int32_t ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int64)
extern "C"  JsonData_t269267574 * JsonData_op_Implicit_m3158813381 (Il2CppObject * __this /* static, unused */, int64_t ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.String)
extern "C"  JsonData_t269267574 * JsonData_op_Implicit_m1003883913 (Il2CppObject * __this /* static, unused */, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  bool JsonData_op_Explicit_m3829788929 (Il2CppObject * __this /* static, unused */, JsonData_t269267574 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  double JsonData_op_Explicit_m2755897616 (Il2CppObject * __this /* static, unused */, JsonData_t269267574 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  int32_t JsonData_op_Explicit_m1734525919 (Il2CppObject * __this /* static, unused */, JsonData_t269267574 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  int64_t JsonData_op_Explicit_m1482685294 (Il2CppObject * __this /* static, unused */, JsonData_t269267574 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  String_t* JsonData_op_Explicit_m544061060 (Il2CppObject * __this /* static, unused */, JsonData_t269267574 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void JsonData_System_Collections_ICollection_CopyTo_m3783564164 (JsonData_t269267574 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void JsonData_System_Collections_IDictionary_Add_m2356202054 (JsonData_t269267574 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Clear()
extern "C"  void JsonData_System_Collections_IDictionary_Clear_m3290395890 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool JsonData_System_Collections_IDictionary_Contains_m4187115580 (JsonData_t269267574 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * JsonData_System_Collections_IDictionary_GetEnumerator_m626147563 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void JsonData_System_Collections_IDictionary_Remove_m2266606159 (JsonData_t269267574 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * JsonData_System_Collections_IEnumerable_GetEnumerator_m4204737205 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
extern "C"  bool JsonData_LitJson_IJsonWrapper_GetBoolean_m3104667505 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
extern "C"  double JsonData_LitJson_IJsonWrapper_GetDouble_m3682964505 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
extern "C"  int32_t JsonData_LitJson_IJsonWrapper_GetInt_m4030693700 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
extern "C"  int64_t JsonData_LitJson_IJsonWrapper_GetLong_m3984661598 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
extern "C"  String_t* JsonData_LitJson_IJsonWrapper_GetString_m4050193817 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetBoolean_m149034118 (JsonData_t269267574 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetDouble_m1116621716 (JsonData_t269267574 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetInt_m573856667 (JsonData_t269267574 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetLong_m852054389 (JsonData_t269267574 * __this, int64_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetString_m4209418388 (JsonData_t269267574 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.ToJson()
extern "C"  String_t* JsonData_LitJson_IJsonWrapper_ToJson_m3563998661 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.ToJson(LitJson.JsonWriter)
extern "C"  void JsonData_LitJson_IJsonWrapper_ToJson_m1801374742 (JsonData_t269267574 * __this, JsonWriter_t1927598499 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
extern "C"  int32_t JsonData_System_Collections_IList_Add_m1165043110 (JsonData_t269267574 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
extern "C"  void JsonData_System_Collections_IList_Clear_m2914629598 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
extern "C"  bool JsonData_System_Collections_IList_Contains_m3521432384 (JsonData_t269267574 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t JsonData_System_Collections_IList_IndexOf_m1015669628 (JsonData_t269267574 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void JsonData_System_Collections_IList_Insert_m1309040309 (JsonData_t269267574 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
extern "C"  void JsonData_System_Collections_IList_Remove_m1432476133 (JsonData_t269267574 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void JsonData_System_Collections_IList_RemoveAt_m3478545335 (JsonData_t269267574 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::LitJson.IOrderedDictionary.GetEnumerator()
extern "C"  Il2CppObject * JsonData_LitJson_IOrderedDictionary_GetEnumerator_m2249835131 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
extern "C"  void JsonData_LitJson_IOrderedDictionary_Insert_m4088789109 (JsonData_t269267574 * __this, int32_t ___idx0, Il2CppObject * ___key1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IOrderedDictionary.RemoveAt(System.Int32)
extern "C"  void JsonData_LitJson_IOrderedDictionary_RemoveAt_m3322431449 (JsonData_t269267574 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
extern "C"  Il2CppObject * JsonData_EnsureCollection_m1194492042 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
extern "C"  Il2CppObject * JsonData_EnsureDictionary_m2290433526 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList LitJson.JsonData::EnsureList()
extern "C"  Il2CppObject * JsonData_EnsureList_m409706738 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
extern "C"  JsonData_t269267574 * JsonData_ToJsonData_m1794926921 (JsonData_t269267574 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
extern "C"  void JsonData_WriteJson_m2296070584 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::Add(System.Object)
extern "C"  int32_t JsonData_Add_m3431622181 (JsonData_t269267574 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::Clear()
extern "C"  void JsonData_Clear_m3881293829 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
extern "C"  bool JsonData_Equals_m2439336510 (JsonData_t269267574 * __this, JsonData_t269267574 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonType LitJson.JsonData::GetJsonType()
extern "C"  int32_t JsonData_GetJsonType_m3245864530 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
extern "C"  void JsonData_SetJsonType_m3008447885 (JsonData_t269267574 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToJson()
extern "C"  String_t* JsonData_ToJson_m3686079716 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
extern "C"  void JsonData_ToJson_m183887703 (JsonData_t269267574 * __this, JsonWriter_t1927598499 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToString()
extern "C"  String_t* JsonData_ToString_m3226006459 (JsonData_t269267574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
