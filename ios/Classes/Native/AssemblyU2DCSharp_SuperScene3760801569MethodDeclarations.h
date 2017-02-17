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

// SuperScene
struct SuperScene_t3760801569;
// CubeiaClient
struct CubeiaClient_t2232589536;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// LoginInfo
struct LoginInfo_t657176999;
// System.String
struct String_t;
// SDialog
struct SDialog_t1510781833;
// DialogInfo
struct DialogInfo_t3864811688;
// Utils/Executor
struct Executor_t2576254565;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// UnityEngine.UI.Image
struct Image_t2042527209;
// Utils/ExeOneSpriteParam
struct ExeOneSpriteParam_t3418620788;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Utils/ExeOneStringParam
struct ExeOneStringParam_t2750684624;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// BestHTTP.SocketIO.Socket
struct Socket_t2716624701;
// BestHTTP.SocketIO.Packet
struct Packet_t1309324146;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// Facebook.Unity.IAppRequestResult
struct IAppRequestResult_t1874118006;
// Facebook.Unity.IGraphResult
struct IGraphResult_t3984946686;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CubeiaClient2232589536.h"
#include "AssemblyU2DCSharp_LoginInfo657176999.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_DialogInfo3864811688.h"
#include "AssemblyU2DCSharp_Utils_Executor2576254565.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"
#include "UnityEngine_UI_UnityEngine_UI_Image2042527209.h"
#include "AssemblyU2DCSharp_Utils_ExeOneSpriteParam3418620788.h"
#include "AssemblyU2DCSharp_NotificationCenter_Type3072484027.h"
#include "AssemblyU2DCSharp_Utils_ExeOneStringParam2750684624.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Socket2716624701.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Packet1309324146.h"

// System.Void SuperScene::.ctor()
extern "C"  void SuperScene__ctor_m2257887516 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CubeiaClient SuperScene::get_cubeia()
extern "C"  CubeiaClient_t2232589536 * SuperScene_get_cubeia_m3700966831 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::set_cubeia(CubeiaClient)
extern "C"  void SuperScene_set_cubeia_m1944768400 (SuperScene_t3760801569 * __this, CubeiaClient_t2232589536 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SuperScene::get_onCheckingConnection()
extern "C"  bool SuperScene_get_onCheckingConnection_m2078018468 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::set_onCheckingConnection(System.Boolean)
extern "C"  void SuperScene_set_onCheckingConnection_m3366528887 (SuperScene_t3760801569 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::Start()
extern "C"  void SuperScene_Start_m893179532 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::FixedUpdate()
extern "C"  void SuperScene_FixedUpdate_m261038151 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::checkPing()
extern "C"  void SuperScene_checkPing_m4121758128 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::InternetIsNotAvailable()
extern "C"  void SuperScene_InternetIsNotAvailable_m1029215437 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::reconnect()
extern "C"  void SuperScene_reconnect_m2173181801 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::handleLoadBalancer(System.Action`1<System.Boolean>)
extern "C"  void SuperScene_handleLoadBalancer_m2416663473 (SuperScene_t3760801569 * __this, Action_1_t3627374100 * ___onFinish0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::getIPToLogin(LoginInfo,System.Action`1<System.Boolean>)
extern "C"  void SuperScene_getIPToLogin_m4258536155 (SuperScene_t3760801569 * __this, LoginInfo_t657176999 * ___loginInfo0, Action_1_t3627374100 * ___onFinish1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::loadPrefabs()
extern "C"  void SuperScene_loadPrefabs_m2046588079 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showToast(System.String)
extern "C"  void SuperScene_showToast_m4163344990 (SuperScene_t3760801569 * __this, String_t* ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SDialog SuperScene::showDialog(DialogInfo)
extern "C"  SDialog_t1510781833 * SuperScene_showDialog_m1833724257 (SuperScene_t3760801569 * __this, DialogInfo_t3864811688 * ___dialogInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::dismissDialog()
extern "C"  void SuperScene_dismissDialog_m973807724 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SDialog SuperScene::showInfoDialog(System.String)
extern "C"  SDialog_t1510781833 * SuperScene_showInfoDialog_m1411141035 (SuperScene_t3760801569 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SDialog SuperScene::showInfoDialogWithAction(System.String,Utils/Executor)
extern "C"  SDialog_t1510781833 * SuperScene_showInfoDialogWithAction_m2264307934 (SuperScene_t3760801569 * __this, String_t* ___message0, Executor_t2576254565 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showWaittingDialog(System.String,System.Single)
extern "C"  void SuperScene_showWaittingDialog_m1243772103 (SuperScene_t3760801569 * __this, String_t* ___content0, float ___maxVisibleTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showWaittingDialog(System.String)
extern "C"  void SuperScene_showWaittingDialog_m2659225596 (SuperScene_t3760801569 * __this, String_t* ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showWaittingDialog(System.String,Utils/Executor,UnityEngine.Events.UnityAction)
extern "C"  void SuperScene_showWaittingDialog_m4188252382 (SuperScene_t3760801569 * __this, String_t* ___content0, Executor_t2576254565 * ___callBackIfFailed1, UnityAction_t4025899511 * ___onCancel2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::dismissWaittingDialog()
extern "C"  void SuperScene_dismissWaittingDialog_m670794641 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::loadImage(System.String,UnityEngine.UI.Image,Utils/ExeOneSpriteParam)
extern "C"  void SuperScene_loadImage_m2216090671 (SuperScene_t3760801569 * __this, String_t* ___url0, Image_t2042527209 * ___image1, ExeOneSpriteParam_t3418620788 * ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::loadImage(System.String,Utils/ExeOneSpriteParam)
extern "C"  void SuperScene_loadImage_m3641268365 (SuperScene_t3760801569 * __this, String_t* ___url0, ExeOneSpriteParam_t3418620788 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SuperScene::LoadFromWeb(System.String,UnityEngine.UI.Image,Utils/ExeOneSpriteParam)
extern "C"  Il2CppObject * SuperScene_LoadFromWeb_m3279793496 (SuperScene_t3760801569 * __this, String_t* ___url0, Image_t2042527209 * ___image1, ExeOneSpriteParam_t3418620788 * ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::forcedReconnect(System.String)
extern "C"  void SuperScene_forcedReconnect_m1878752464 (SuperScene_t3760801569 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showConfirmExit()
extern "C"  void SuperScene_showConfirmExit_m210730681 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showConfirmSignOut()
extern "C"  void SuperScene_showConfirmSignOut_m341403136 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::backToLoginScene()
extern "C"  void SuperScene_backToLoginScene_m69575841 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showHasMail()
extern "C"  void SuperScene_showHasMail_m2526343628 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showServerNotification(System.String)
extern "C"  void SuperScene_showServerNotification_m4074270113 (SuperScene_t3760801569 * __this, String_t* ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showServerNotification(NotificationCenter/Type,System.String)
extern "C"  void SuperScene_showServerNotification_m2900765574 (SuperScene_t3760801569 * __this, int32_t ___type0, String_t* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showServerNotification(System.String,System.Int32,System.Single)
extern "C"  void SuperScene_showServerNotification_m1611028885 (SuperScene_t3760801569 * __this, String_t* ___content0, int32_t ___repeat1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showServerNotification(NotificationCenter/Type,System.String,System.Int32,System.Single)
extern "C"  void SuperScene_showServerNotification_m2952518690 (SuperScene_t3760801569 * __this, int32_t ___type0, String_t* ___content1, int32_t ___repeat2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::dismissServerNotification()
extern "C"  void SuperScene_dismissServerNotification_m3431093604 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showDebugPanel()
extern "C"  void SuperScene_showDebugPanel_m3934052188 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::hideDebugPanel()
extern "C"  void SuperScene_hideDebugPanel_m3552345015 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoStabsScene()
extern "C"  void SuperScene_gotoStabsScene_m3078581470 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoMailScreen()
extern "C"  void SuperScene_gotoMailScreen_m2170585482 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoPaymentScreen()
extern "C"  void SuperScene_gotoPaymentScreen_m758867441 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoPersonalScreen()
extern "C"  void SuperScene_gotoPersonalScreen_m2394221727 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoLeaderBoardScreen()
extern "C"  void SuperScene_gotoLeaderBoardScreen_m3720329138 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoHeroBoardScreen()
extern "C"  void SuperScene_gotoHeroBoardScreen_m2686162893 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoLeaderBoardScreen_game()
extern "C"  void SuperScene_gotoLeaderBoardScreen_game_m440120635 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoNewsScreen()
extern "C"  void SuperScene_gotoNewsScreen_m264754882 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoBankScreen()
extern "C"  void SuperScene_gotoBankScreen_m1366663273 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoHelpScreen()
extern "C"  void SuperScene_gotoHelpScreen_m454414306 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoFriendsScreen()
extern "C"  void SuperScene_gotoFriendsScreen_m82969216 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::goToGameScene()
extern "C"  void SuperScene_goToGameScene_m3662636203 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::goToReplayScene()
extern "C"  void SuperScene_goToReplayScene_m4173460440 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoFanpage()
extern "C"  void SuperScene_gotoFanpage_m3240158341 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoFBGroup()
extern "C"  void SuperScene_gotoFBGroup_m2436231894 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoFeedBackScreen()
extern "C"  void SuperScene_gotoFeedBackScreen_m3092553290 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoCashout()
extern "C"  void SuperScene_gotoCashout_m654832444 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::gotoFreeGoldScreen()
extern "C"  void SuperScene_gotoFreeGoldScreen_m991898643 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::doHTTPRequest(System.String,Utils/ExeOneStringParam,Utils/Executor)
extern "C"  void SuperScene_doHTTPRequest_m114616641 (SuperScene_t3760801569 * __this, String_t* ___url0, ExeOneStringParam_t2750684624 * ___onSuccess1, Executor_t2576254565 * ___onFailed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::doHTTPRequest(System.String,SimpleJSON.JSONArray,Utils/ExeOneStringParam,Utils/Executor,System.Boolean)
extern "C"  void SuperScene_doHTTPRequest_m238152555 (SuperScene_t3760801569 * __this, String_t* ___url0, JSONArray_t3986483147 * ___parameters1, ExeOneStringParam_t2750684624 * ___onSuccess2, Executor_t2576254565 * ___onFailed3, bool ___showWaittingDialog4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SuperScene::HTTPRequest(System.String,Utils/ExeOneStringParam,Utils/Executor)
extern "C"  Il2CppObject * SuperScene_HTTPRequest_m4076382696 (SuperScene_t3760801569 * __this, String_t* ___url0, ExeOneStringParam_t2750684624 * ___onSuccess1, Executor_t2576254565 * ___onFailed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SuperScene::HTTPRequest(System.String,SimpleJSON.JSONArray,Utils/ExeOneStringParam,Utils/Executor)
extern "C"  Il2CppObject * SuperScene_HTTPRequest_m204698725 (SuperScene_t3760801569 * __this, String_t* ___url0, JSONArray_t3986483147 * ___parameters1, ExeOneStringParam_t2750684624 * ___onSuccess2, Executor_t2576254565 * ___onFailed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::sendTestIOSPayment()
extern "C"  void SuperScene_sendTestIOSPayment_m3840321841 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::checkConnection()
extern "C"  void SuperScene_checkConnection_m2186132152 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::onResume()
extern "C"  void SuperScene_onResume_m2988681140 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::checkUserInFBGroup()
extern "C"  void SuperScene_checkUserInFBGroup_m3868542499 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::checkMail()
extern "C"  void SuperScene_checkMail_m1922225535 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::disConnect1()
extern "C"  void SuperScene_disConnect1_m3664743725 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::disConnect2()
extern "C"  void SuperScene_disConnect2_m3664743692 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::disConnect3()
extern "C"  void SuperScene_disConnect3_m3664743659 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::OnApplicationPause(System.Boolean)
extern "C"  void SuperScene_OnApplicationPause_m317275162 (SuperScene_t3760801569 * __this, bool ___pauseStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::showBanner(System.Int32)
extern "C"  void SuperScene_showBanner_m4106761624 (SuperScene_t3760801569 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::connectSocketIO()
extern "C"  void SuperScene_connectSocketIO_m1457877961 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::onConnectedIO(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SuperScene_onConnectedIO_m2603923001 (SuperScene_t3760801569 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::onDisconnectedIO(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SuperScene_onDisconnectedIO_m4266885371 (SuperScene_t3760801569 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::onEventIO(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SuperScene_onEventIO_m3916350066 (SuperScene_t3760801569 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::onErrorIO(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SuperScene_onErrorIO_m2384518684 (SuperScene_t3760801569 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<Start>m__0(System.String)
extern "C"  void SuperScene_U3CStartU3Em__0_m3936030717 (Il2CppObject * __this /* static, unused */, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<Start>m__1()
extern "C"  void SuperScene_U3CStartU3Em__1_m455539586 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<Start>m__2(System.String)
extern "C"  void SuperScene_U3CStartU3Em__2_m211302335 (Il2CppObject * __this /* static, unused */, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<Start>m__3()
extern "C"  void SuperScene_U3CStartU3Em__3_m455539652 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<Start>m__4()
extern "C"  void SuperScene_U3CStartU3Em__4_m455539487 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<Start>m__5()
extern "C"  void SuperScene_U3CStartU3Em__5_m455539454 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<FixedUpdate>m__6()
extern "C"  void SuperScene_U3CFixedUpdateU3Em__6_m3977753714 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<checkPing>m__7()
extern "C"  void SuperScene_U3CcheckPingU3Em__7_m2633017856 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<InternetIsNotAvailable>m__8()
extern "C"  void SuperScene_U3CInternetIsNotAvailableU3Em__8_m461452908 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<reconnect>m__9()
extern "C"  void SuperScene_U3CreconnectU3Em__9_m4084365779 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<showToast>m__A()
extern "C"  void SuperScene_U3CshowToastU3Em__A_m4087580770 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<gotoPaymentScreen>m__B(System.String)
extern "C"  void SuperScene_U3CgotoPaymentScreenU3Em__B_m140713512 (SuperScene_t3760801569 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<gotoPaymentScreen>m__C()
extern "C"  void SuperScene_U3CgotoPaymentScreenU3Em__C_m859624517 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<gotoPaymentScreen>m__D(System.String)
extern "C"  void SuperScene_U3CgotoPaymentScreenU3Em__D_m504047074 (Il2CppObject * __this /* static, unused */, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<gotoPaymentScreen>m__E()
extern "C"  void SuperScene_U3CgotoPaymentScreenU3Em__E_m859624319 (SuperScene_t3760801569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<gotoFreeGoldScreen>m__F(Facebook.Unity.IAppRequestResult)
extern "C"  void SuperScene_U3CgotoFreeGoldScreenU3Em__F_m922739165 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<checkUserInFBGroup>m__10(Facebook.Unity.IGraphResult)
extern "C"  void SuperScene_U3CcheckUserInFBGroupU3Em__10_m566507480 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperScene::<connectSocketIO>m__11(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SuperScene_U3CconnectSocketIOU3Em__11_m2460465223 (Il2CppObject * __this /* static, unused */, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
