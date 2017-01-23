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

// Bugsnag/NativeBugsnag
struct NativeBugsnag_t1356929878;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Bugsnag/NativeBugsnag::.ctor()
extern "C"  void NativeBugsnag__ctor_m3445863879 (NativeBugsnag_t1356929878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag/NativeBugsnag::Register(System.String)
extern "C"  void NativeBugsnag_Register_m2124563816 (Il2CppObject * __this /* static, unused */, String_t* ___apiKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag/NativeBugsnag::Notify(System.String,System.String,System.String,System.String,System.String)
extern "C"  void NativeBugsnag_Notify_m1353189372 (Il2CppObject * __this /* static, unused */, String_t* ___errorClass0, String_t* ___errorMessage1, String_t* ___severity2, String_t* ___context3, String_t* ___stackTrace4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag/NativeBugsnag::SetNotifyUrl(System.String)
extern "C"  void NativeBugsnag_SetNotifyUrl_m145867275 (Il2CppObject * __this /* static, unused */, String_t* ___notifyUrl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag/NativeBugsnag::SetAutoNotify(System.Boolean)
extern "C"  void NativeBugsnag_SetAutoNotify_m2519115880 (Il2CppObject * __this /* static, unused */, bool ___autoNotify0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag/NativeBugsnag::SetContext(System.String)
extern "C"  void NativeBugsnag_SetContext_m3715477862 (Il2CppObject * __this /* static, unused */, String_t* ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag/NativeBugsnag::SetReleaseStage(System.String)
extern "C"  void NativeBugsnag_SetReleaseStage_m3238566136 (Il2CppObject * __this /* static, unused */, String_t* ___releaseStage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag/NativeBugsnag::SetNotifyReleaseStages(System.String)
extern "C"  void NativeBugsnag_SetNotifyReleaseStages_m1277075048 (Il2CppObject * __this /* static, unused */, String_t* ___releaseStages0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag/NativeBugsnag::AddToTab(System.String,System.String,System.String)
extern "C"  void NativeBugsnag_AddToTab_m2555469316 (Il2CppObject * __this /* static, unused */, String_t* ___tabName0, String_t* ___attributeName1, String_t* ___attributeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag/NativeBugsnag::ClearTab(System.String)
extern "C"  void NativeBugsnag_ClearTab_m3051891859 (Il2CppObject * __this /* static, unused */, String_t* ___tabName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
