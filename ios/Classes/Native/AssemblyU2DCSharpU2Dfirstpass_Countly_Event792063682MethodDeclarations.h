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

// Countly.Event
struct Event_t792063682;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Countly.Event::.ctor()
extern "C"  void Event__ctor_m1902801877 (Event_t792063682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.Event::get_Key()
extern "C"  String_t* Event_get_Key_m3804986662 (Event_t792063682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Event::set_Key(System.String)
extern "C"  void Event_set_Key_m144096753 (Event_t792063682 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Countly.Event::get_Count()
extern "C"  int64_t Event_get_Count_m1323610396 (Event_t792063682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Event::set_Count(System.Int64)
extern "C"  void Event_set_Count_m175092809 (Event_t792063682 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Countly.Event::get_Timestamp()
extern "C"  int64_t Event_get_Timestamp_m2942931263 (Event_t792063682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Event::set_Timestamp(System.Int64)
extern "C"  void Event_set_Timestamp_m3664273592 (Event_t792063682 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Countly.Event::get_UsesSum()
extern "C"  bool Event_get_UsesSum_m2446415867 (Event_t792063682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Countly.Event::get_Sum()
extern "C"  double Event_get_Sum_m2362283474 (Event_t792063682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Event::set_Sum(System.Double)
extern "C"  void Event_set_Sum_m2603574769 (Event_t792063682 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Countly.Event::get_Segmentation()
extern "C"  Dictionary_2_t3943999495 * Event_get_Segmentation_m2518689010 (Event_t792063682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Event::set_Segmentation(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void Event_set_Segmentation_m898151117 (Event_t792063682 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Event::JSONSerialize(System.Text.StringBuilder)
extern "C"  void Event_JSONSerialize_m3627744279 (Event_t792063682 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Event::JSONSerializeSegmentation(System.Text.StringBuilder)
extern "C"  void Event_JSONSerializeSegmentation_m823433645 (Event_t792063682 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
