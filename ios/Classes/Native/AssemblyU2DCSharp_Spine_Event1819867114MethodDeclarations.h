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

// Spine.Event
struct Event_t1819867114;
// Spine.EventData
struct EventData_t937912058;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_EventData937912058.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Spine.Event::.ctor(System.Single,Spine.EventData)
extern "C"  void Event__ctor_m3236954290 (Event_t1819867114 * __this, float ___time0, EventData_t937912058 * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.EventData Spine.Event::get_Data()
extern "C"  EventData_t937912058 * Event_get_Data_m185077273 (Event_t1819867114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Event::get_Time()
extern "C"  float Event_get_Time_m2366177728 (Event_t1819867114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Event::get_Int()
extern "C"  int32_t Event_get_Int_m3241891832 (Event_t1819867114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Event::set_Int(System.Int32)
extern "C"  void Event_set_Int_m3593256071 (Event_t1819867114 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Event::get_Float()
extern "C"  float Event_get_Float_m68678599 (Event_t1819867114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Event::set_Float(System.Single)
extern "C"  void Event_set_Float_m1269473934 (Event_t1819867114 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Event::get_String()
extern "C"  String_t* Event_get_String_m609228209 (Event_t1819867114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Event::set_String(System.String)
extern "C"  void Event_set_String_m2828493172 (Event_t1819867114 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Event::ToString()
extern "C"  String_t* Event_ToString_m2740862199 (Event_t1819867114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
