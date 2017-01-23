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

// IOSSocialManager
struct IOSSocialManager_t2957403963;
// System.String
struct String_t;
// System.Action`1<ISN_Result>
struct Action_1_t2577430992;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// System.Void IOSSocialManager::.ctor()
extern "C"  void IOSSocialManager__ctor_m608595288 (IOSSocialManager_t2957403963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::_ISN_TwPost(System.String,System.String,System.String)
extern "C"  void IOSSocialManager__ISN_TwPost_m4009521739 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t* ___url1, String_t* ___encodedMedia2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::_ISN_FbPost(System.String,System.String,System.String)
extern "C"  void IOSSocialManager__ISN_FbPost_m1938649542 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t* ___url1, String_t* ___encodedMedia2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::_ISN_MediaShare(System.String,System.String)
extern "C"  void IOSSocialManager__ISN_MediaShare_m149746323 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t* ___encodedMedia1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::_ISN_SendMail(System.String,System.String,System.String,System.String)
extern "C"  void IOSSocialManager__ISN_SendMail_m1202584443 (Il2CppObject * __this /* static, unused */, String_t* ___subject0, String_t* ___body1, String_t* ___recipients2, String_t* ___encodedMedia3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::add_OnFacebookPostResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_add_OnFacebookPostResult_m4216263970 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::remove_OnFacebookPostResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_remove_OnFacebookPostResult_m934686651 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::add_OnTwitterPostResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_add_OnTwitterPostResult_m2321497017 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::remove_OnTwitterPostResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_remove_OnTwitterPostResult_m114998796 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::add_OnMailResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_add_OnMailResult_m4264457157 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::remove_OnMailResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_remove_OnMailResult_m2186521032 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::Awake()
extern "C"  void IOSSocialManager_Awake_m3018587323 (IOSSocialManager_t2957403963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::ShareMedia(System.String)
extern "C"  void IOSSocialManager_ShareMedia_m826920501 (IOSSocialManager_t2957403963 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::ShareMedia(System.String,UnityEngine.Texture2D)
extern "C"  void IOSSocialManager_ShareMedia_m1050107615 (IOSSocialManager_t2957403963 * __this, String_t* ___text0, Texture2D_t3542995729 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::TwitterPost(System.String,System.String,UnityEngine.Texture2D)
extern "C"  void IOSSocialManager_TwitterPost_m2589780573 (IOSSocialManager_t2957403963 * __this, String_t* ___text0, String_t* ___url1, Texture2D_t3542995729 * ___texture2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::FacebookPost(System.String,System.String,UnityEngine.Texture2D)
extern "C"  void IOSSocialManager_FacebookPost_m2567889078 (IOSSocialManager_t2957403963 * __this, String_t* ___text0, String_t* ___url1, Texture2D_t3542995729 * ___texture2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::SendMail(System.String,System.String,System.String)
extern "C"  void IOSSocialManager_SendMail_m467143893 (IOSSocialManager_t2957403963 * __this, String_t* ___subject0, String_t* ___body1, String_t* ___recipients2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::SendMail(System.String,System.String,System.String,UnityEngine.Texture2D)
extern "C"  void IOSSocialManager_SendMail_m1502025723 (IOSSocialManager_t2957403963 * __this, String_t* ___subject0, String_t* ___body1, String_t* ___recipients2, Texture2D_t3542995729 * ___texture3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnTwitterPostFailed()
extern "C"  void IOSSocialManager_OnTwitterPostFailed_m518160281 (IOSSocialManager_t2957403963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnTwitterPostSuccess()
extern "C"  void IOSSocialManager_OnTwitterPostSuccess_m1014792981 (IOSSocialManager_t2957403963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnFacebookPostFailed()
extern "C"  void IOSSocialManager_OnFacebookPostFailed_m1890299548 (IOSSocialManager_t2957403963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnFacebookPostSuccess()
extern "C"  void IOSSocialManager_OnFacebookPostSuccess_m61649522 (IOSSocialManager_t2957403963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnMailFailed()
extern "C"  void IOSSocialManager_OnMailFailed_m3233000641 (IOSSocialManager_t2957403963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnMailSuccess()
extern "C"  void IOSSocialManager_OnMailSuccess_m3793290533 (IOSSocialManager_t2957403963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
