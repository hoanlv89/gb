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

// HomeScene
struct HomeScene_t3664546087;
// System.String
struct String_t;
// System.Collections.Generic.List`1<IPConfig>
struct List_1_t1781958757;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// Facebook.Unity.IAppRequestResult
struct IAppRequestResult_t1874118006;
// Facebook.Unity.IShareResult
struct IShareResult_t830127229;
// Facebook.Unity.IGraphResult
struct IGraphResult_t3984946686;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"

// System.Void HomeScene::.ctor()
extern "C"  void HomeScene__ctor_m178713284 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::Start()
extern "C"  void HomeScene_Start_m3681382552 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::getFBRequestIds()
extern "C"  void HomeScene_getFBRequestIds_m4088654155 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::sendInvitesToCubeia(System.String)
extern "C"  void HomeScene_sendInvitesToCubeia_m4038020704 (HomeScene_t3664546087 * __this, String_t* ___invites0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::checkFBRequest()
extern "C"  void HomeScene_checkFBRequest_m2962966109 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::getRequestData(System.String)
extern "C"  void HomeScene_getRequestData_m1683681403 (HomeScene_t3664546087 * __this, String_t* ___inRequestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::deleteTheRequest(System.String)
extern "C"  void HomeScene_deleteTheRequest_m552683289 (HomeScene_t3664546087 * __this, String_t* ___requestID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HomeScene::checkForChangeName()
extern "C"  bool HomeScene_checkForChangeName_m1595516444 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::updateInfo()
extern "C"  void HomeScene_updateInfo_m525121245 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::updateAvatar()
extern "C"  void HomeScene_updateAvatar_m2300526042 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::checkFBisLoggedIn()
extern "C"  void HomeScene_checkFBisLoggedIn_m1147042579 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::loginToGame(System.Int32)
extern "C"  void HomeScene_loginToGame_m715991453 (HomeScene_t3664546087 * __this, int32_t ___gameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::exit()
extern "C"  void HomeScene_exit_m1106539114 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HomeScene::showDailyBonus()
extern "C"  bool HomeScene_showDailyBonus_m3840667721 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::showChannelChooser(System.Collections.Generic.List`1<IPConfig>,System.Int32,System.Action`1<System.Boolean>)
extern "C"  void HomeScene_showChannelChooser_m2722243214 (HomeScene_t3664546087 * __this, List_1_t1781958757 * ___availableList0, int32_t ___gameID1, Action_1_t3627374100 * ___onFinish2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::showInviteFBFriends()
extern "C"  void HomeScene_showInviteFBFriends_m3886624877 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::appRequestCallback(Facebook.Unity.IAppRequestResult)
extern "C"  void HomeScene_appRequestCallback_m1285047852 (HomeScene_t3664546087 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::gotoRo()
extern "C"  void HomeScene_gotoRo_m319962366 (HomeScene_t3664546087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::ShareCallback(Facebook.Unity.IShareResult)
extern "C"  void HomeScene_ShareCallback_m1256984590 (HomeScene_t3664546087 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::<getFBRequestIds>m__0(Facebook.Unity.IGraphResult)
extern "C"  void HomeScene_U3CgetFBRequestIdsU3Em__0_m3220804427 (HomeScene_t3664546087 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::<deleteTheRequest>m__1(Facebook.Unity.IGraphResult)
extern "C"  void HomeScene_U3CdeleteTheRequestU3Em__1_m3409955980 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeScene::<updateAvatar>m__2(UnityEngine.Sprite)
extern "C"  void HomeScene_U3CupdateAvatarU3Em__2_m1920275481 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___sprite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
