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

// IOSBillingInitChecker/BillingInitListener
struct BillingInitListener_t4162012659;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void IOSBillingInitChecker/BillingInitListener::.ctor(System.Object,System.IntPtr)
extern "C"  void BillingInitListener__ctor_m3577547142 (BillingInitListener_t4162012659 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSBillingInitChecker/BillingInitListener::Invoke()
extern "C"  void BillingInitListener_Invoke_m2042359388 (BillingInitListener_t4162012659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult IOSBillingInitChecker/BillingInitListener::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BillingInitListener_BeginInvoke_m3144287461 (BillingInitListener_t4162012659 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSBillingInitChecker/BillingInitListener::EndInvoke(System.IAsyncResult)
extern "C"  void BillingInitListener_EndInvoke_m3854253652 (BillingInitListener_t4162012659 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
