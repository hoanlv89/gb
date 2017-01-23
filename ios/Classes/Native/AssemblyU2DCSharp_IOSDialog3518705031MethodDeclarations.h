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

// IOSDialog
struct IOSDialog_t3518705031;
// System.Action`1<IOSDialogResult>
struct Action_1_t3541040698;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_IOSDialogResult3739241316.h"

// System.Void IOSDialog::.ctor()
extern "C"  void IOSDialog__ctor_m2563357144 (IOSDialog_t3518705031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSDialog::add_OnComplete(System.Action`1<IOSDialogResult>)
extern "C"  void IOSDialog_add_OnComplete_m2951254042 (IOSDialog_t3518705031 * __this, Action_1_t3541040698 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSDialog::remove_OnComplete(System.Action`1<IOSDialogResult>)
extern "C"  void IOSDialog_remove_OnComplete_m491098941 (IOSDialog_t3518705031 * __this, Action_1_t3541040698 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSDialog IOSDialog::Create(System.String,System.String)
extern "C"  IOSDialog_t3518705031 * IOSDialog_Create_m1314851946 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSDialog IOSDialog::Create(System.String,System.String,System.String,System.String)
extern "C"  IOSDialog_t3518705031 * IOSDialog_Create_m1582807338 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___yes2, String_t* ___no3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSDialog::init()
extern "C"  void IOSDialog_init_m3064361236 (IOSDialog_t3518705031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSDialog::onPopUpCallBack(System.String)
extern "C"  void IOSDialog_onPopUpCallBack_m340235872 (IOSDialog_t3518705031 * __this, String_t* ___buttonIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSDialog::<OnComplete>m__0(IOSDialogResult)
extern "C"  void IOSDialog_U3COnCompleteU3Em__0_m2945816041 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
