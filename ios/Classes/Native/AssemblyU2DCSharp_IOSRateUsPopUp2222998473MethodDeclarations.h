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

// IOSRateUsPopUp
struct IOSRateUsPopUp_t2222998473;
// System.Action`1<IOSDialogResult>
struct Action_1_t3541040698;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_IOSDialogResult3739241316.h"

// System.Void IOSRateUsPopUp::.ctor()
extern "C"  void IOSRateUsPopUp__ctor_m2419503650 (IOSRateUsPopUp_t2222998473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSRateUsPopUp::add_OnComplete(System.Action`1<IOSDialogResult>)
extern "C"  void IOSRateUsPopUp_add_OnComplete_m2642133836 (IOSRateUsPopUp_t2222998473 * __this, Action_1_t3541040698 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSRateUsPopUp::remove_OnComplete(System.Action`1<IOSDialogResult>)
extern "C"  void IOSRateUsPopUp_remove_OnComplete_m1020571783 (IOSRateUsPopUp_t2222998473 * __this, Action_1_t3541040698 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSRateUsPopUp IOSRateUsPopUp::Create()
extern "C"  IOSRateUsPopUp_t2222998473 * IOSRateUsPopUp_Create_m3985942946 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSRateUsPopUp IOSRateUsPopUp::Create(System.String,System.String)
extern "C"  IOSRateUsPopUp_t2222998473 * IOSRateUsPopUp_Create_m167257216 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSRateUsPopUp IOSRateUsPopUp::Create(System.String,System.String,System.String,System.String,System.String)
extern "C"  IOSRateUsPopUp_t2222998473 * IOSRateUsPopUp_Create_m3388147756 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___rate2, String_t* ___remind3, String_t* ___declined4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSRateUsPopUp::init()
extern "C"  void IOSRateUsPopUp_init_m1625308226 (IOSRateUsPopUp_t2222998473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSRateUsPopUp::onPopUpCallBack(System.String)
extern "C"  void IOSRateUsPopUp_onPopUpCallBack_m3239341610 (IOSRateUsPopUp_t2222998473 * __this, String_t* ___buttonIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSRateUsPopUp::<OnComplete>m__0(IOSDialogResult)
extern "C"  void IOSRateUsPopUp_U3COnCompleteU3Em__0_m2424454687 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
