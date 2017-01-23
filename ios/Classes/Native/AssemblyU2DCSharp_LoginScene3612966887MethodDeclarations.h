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

// LoginScene
struct LoginScene_t3612966887;
// Facebook.Unity.ILoginResult
struct ILoginResult_t403585443;
// System.String
struct String_t;
// SimpleJSON.JSONClass
struct JSONClass_t1609506608;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Facebook.Unity.IGraphResult
struct IGraphResult_t3984946686;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass1609506608.h"

// System.Void LoginScene::.ctor()
extern "C"  void LoginScene__ctor_m2244109210 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::Awake()
extern "C"  void LoginScene_Awake_m4131671671 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::SetInit()
extern "C"  void LoginScene_SetInit_m3923133484 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::OnHideUnity(System.Boolean)
extern "C"  void LoginScene_OnHideUnity_m2143805975 (LoginScene_t3612966887 * __this, bool ___isGameShown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::FBlogin()
extern "C"  void LoginScene_FBlogin_m2992365785 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::AuthCallback(Facebook.Unity.ILoginResult)
extern "C"  void LoginScene_AuthCallback_m1378751207 (LoginScene_t3612966887 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::getFBInfoBeforeAttemptLoginToGame()
extern "C"  void LoginScene_getFBInfoBeforeAttemptLoginToGame_m1830423772 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::getFBInfoByAccesstoken(System.String)
extern "C"  void LoginScene_getFBInfoByAccesstoken_m3914485802 (LoginScene_t3612966887 * __this, String_t* ___ac0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::Start()
extern "C"  void LoginScene_Start_m258746854 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::changeLanguage(System.String)
extern "C"  void LoginScene_changeLanguage_m990165204 (LoginScene_t3612966887 * __this, String_t* ___lan0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::login()
extern "C"  void LoginScene_login_m1703755785 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::attemptLogin(System.String,System.String,System.Boolean)
extern "C"  void LoginScene_attemptLogin_m2334436127 (LoginScene_t3612966887 * __this, String_t* ___username0, String_t* ___password1, bool ___onRegister2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::showSignUpPanel()
extern "C"  void LoginScene_showSignUpPanel_m3723425405 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::regAccount(System.String,System.String,System.String)
extern "C"  void LoginScene_regAccount_m3867179985 (LoginScene_t3612966887 * __this, String_t* ___name0, String_t* ___pass1, String_t* ___repeat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::getConfigLinks()
extern "C"  void LoginScene_getConfigLinks_m1331278637 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::getUpdateInfo(System.Int32)
extern "C"  void LoginScene_getUpdateInfo_m2192799614 (LoginScene_t3612966887 * __this, int32_t ___storedDisID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::gotoAppStore(System.String)
extern "C"  void LoginScene_gotoAppStore_m4162214109 (LoginScene_t3612966887 * __this, String_t* ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::regDisIDAndGetUpdateInfo()
extern "C"  void LoginScene_regDisIDAndGetUpdateInfo_m3526649995 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::getConfig(SimpleJSON.JSONClass)
extern "C"  void LoginScene_getConfig_m1047684940 (LoginScene_t3612966887 * __this, JSONClass_t1609506608 * ___jsonResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::tryAutoLogin()
extern "C"  void LoginScene_tryAutoLogin_m3630993709 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::logoutFB()
extern "C"  void LoginScene_logoutFB_m3712708674 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LoginScene::CheckForSuccessfulLogout()
extern "C"  Il2CppObject * LoginScene_CheckForSuccessfulLogout_m3875105699 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::<getFBInfoBeforeAttemptLoginToGame>m__0(Facebook.Unity.IGraphResult)
extern "C"  void LoginScene_U3CgetFBInfoBeforeAttemptLoginToGameU3Em__0_m521492772 (LoginScene_t3612966887 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::<Start>m__1()
extern "C"  void LoginScene_U3CStartU3Em__1_m3384415904 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::<Start>m__2()
extern "C"  void LoginScene_U3CStartU3Em__2_m3384415875 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::<getConfigLinks>m__3(System.String)
extern "C"  void LoginScene_U3CgetConfigLinksU3Em__3_m4091985363 (LoginScene_t3612966887 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::<getConfigLinks>m__4()
extern "C"  void LoginScene_U3CgetConfigLinksU3Em__4_m4194060304 (LoginScene_t3612966887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::<regDisIDAndGetUpdateInfo>m__5(System.String)
extern "C"  void LoginScene_U3CregDisIDAndGetUpdateInfoU3Em__5_m471987643 (LoginScene_t3612966887 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginScene::<regDisIDAndGetUpdateInfo>m__6()
extern "C"  void LoginScene_U3CregDisIDAndGetUpdateInfoU3Em__6_m3128486284 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
