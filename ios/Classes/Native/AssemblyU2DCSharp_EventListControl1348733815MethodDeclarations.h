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

// EventListControl
struct EventListControl_t1348733815;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void EventListControl::.ctor()
extern "C"  void EventListControl__ctor_m3365058580 (EventListControl_t1348733815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventListControl::Start()
extern "C"  void EventListControl_Start_m2710025752 (EventListControl_t1348733815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventListControl::addEventFromJSONString(System.String)
extern "C"  void EventListControl_addEventFromJSONString_m728883866 (EventListControl_t1348733815 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventListControl::updateListItem(System.Collections.Generic.List`1<System.String>)
extern "C"  void EventListControl_updateListItem_m1036827116 (EventListControl_t1348733815 * __this, List_1_t1398341365 * ___eventList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventListControl::AddNewItem(System.String)
extern "C"  void EventListControl_AddNewItem_m3282033980 (EventListControl_t1348733815 * __this, String_t* ___eventObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventListControl::handleNext()
extern "C"  void EventListControl_handleNext_m1818087067 (EventListControl_t1348733815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventListControl::autoHandle()
extern "C"  void EventListControl_autoHandle_m2909646759 (EventListControl_t1348733815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
