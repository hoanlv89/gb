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

// Bugsnag
struct Bugsnag_t2092357853;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void Bugsnag::.ctor()
extern "C"  void Bugsnag__ctor_m1004344120 (Bugsnag_t2092357853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::set_UserId(System.String)
extern "C"  void Bugsnag_set_UserId_m130913773 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::set_ReleaseStage(System.String)
extern "C"  void Bugsnag_set_ReleaseStage_m96365948 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::set_Context(System.String)
extern "C"  void Bugsnag_set_Context_m946109778 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::set_NotifyUrl(System.String)
extern "C"  void Bugsnag_set_NotifyUrl_m787999737 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::set_NotifyReleaseStages(System.String[])
extern "C"  void Bugsnag_set_NotifyReleaseStages_m2247427156 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::Awake()
extern "C"  void Bugsnag_Awake_m2325478159 (Bugsnag_t2092357853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::OnEnable()
extern "C"  void Bugsnag_OnEnable_m2411230756 (Bugsnag_t2092357853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::OnDisable()
extern "C"  void Bugsnag_OnDisable_m2765517875 (Bugsnag_t2092357853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::OnLevelWasLoaded(System.Int32)
extern "C"  void Bugsnag_OnLevelWasLoaded_m4056882608 (Bugsnag_t2092357853 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::HandleLog(System.String,System.String,UnityEngine.LogType)
extern "C"  void Bugsnag_HandleLog_m3171974847 (Bugsnag_t2092357853 * __this, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::Notify(System.Exception)
extern "C"  void Bugsnag_Notify_m922930729 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::Notify(System.Exception,System.String)
extern "C"  void Bugsnag_Notify_m4264690259 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, String_t* ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::AddToTab(System.String,System.String,System.String)
extern "C"  void Bugsnag_AddToTab_m2743597789 (Il2CppObject * __this /* static, unused */, String_t* ___tabName0, String_t* ___attributeName1, String_t* ___attributeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::ClearTab(System.String)
extern "C"  void Bugsnag_ClearTab_m2002955268 (Il2CppObject * __this /* static, unused */, String_t* ___tabName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bugsnag::NotifySafely(System.String,System.String,System.String,System.String,System.String)
extern "C"  void Bugsnag_NotifySafely_m4166599387 (Il2CppObject * __this /* static, unused */, String_t* ___errorClass0, String_t* ___message1, String_t* ___severity2, String_t* ___context3, String_t* ___stackTrace4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
