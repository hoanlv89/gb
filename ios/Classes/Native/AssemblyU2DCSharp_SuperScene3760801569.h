#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// SuperScene
struct SuperScene_t3760801569;
// CubeiaClient
struct CubeiaClient_t2232589536;
// UnityEngine.Canvas
struct Canvas_t209405766;
// Toast
struct Toast_t3649705739;
// SDialog
struct SDialog_t1510781833;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// WaitingDialog
struct WaitingDialog_t2062014917;
// NotificationCenter
struct NotificationCenter_t4076733310;
// DebugPanel
struct DebugPanel_t3149758925;
// BannerScene
struct BannerScene_t3245990610;
// UnityEngine.Ping
struct Ping_t3164159734;
// Utils/ExeOneStringParam
struct ExeOneStringParam_t2750684624;
// Utils/Executor
struct Executor_t2576254565;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t909463455;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t3020292135;
// BestHTTP.SocketIO.Events.SocketIOCallback
struct SocketIOCallback_t88619200;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SuperScene
struct  SuperScene_t3760801569  : public MonoBehaviour_t1158329972
{
public:
	// CubeiaClient SuperScene::_cubeia
	CubeiaClient_t2232589536 * ____cubeia_4;
	// UnityEngine.Canvas SuperScene::mainCanvas
	Canvas_t209405766 * ___mainCanvas_5;
	// Toast SuperScene::toastInstance
	Toast_t3649705739 * ___toastInstance_6;
	// SDialog SuperScene::dialogInstance
	SDialog_t1510781833 * ___dialogInstance_7;
	// System.Collections.IEnumerator SuperScene::toastIEnumerator
	Il2CppObject * ___toastIEnumerator_8;
	// WaitingDialog SuperScene::waittingDialog
	WaitingDialog_t2062014917 * ___waittingDialog_9;
	// NotificationCenter SuperScene::notificationCenter
	NotificationCenter_t4076733310 * ___notificationCenter_10;
	// DebugPanel SuperScene::debugPanel
	DebugPanel_t3149758925 * ___debugPanel_11;
	// System.Boolean SuperScene::showLostInternetConnection
	bool ___showLostInternetConnection_13;
	// BannerScene SuperScene::bannerScene
	BannerScene_t3245990610 * ___bannerScene_14;
	// UnityEngine.Ping SuperScene::ping
	Ping_t3164159734 * ___ping_17;
	// System.Single SuperScene::pingStartTime
	float ___pingStartTime_18;
	// System.Boolean SuperScene::_onCheckingConnection
	bool ____onCheckingConnection_19;

public:
	inline static int32_t get_offset_of__cubeia_4() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ____cubeia_4)); }
	inline CubeiaClient_t2232589536 * get__cubeia_4() const { return ____cubeia_4; }
	inline CubeiaClient_t2232589536 ** get_address_of__cubeia_4() { return &____cubeia_4; }
	inline void set__cubeia_4(CubeiaClient_t2232589536 * value)
	{
		____cubeia_4 = value;
		Il2CppCodeGenWriteBarrier(&____cubeia_4, value);
	}

	inline static int32_t get_offset_of_mainCanvas_5() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___mainCanvas_5)); }
	inline Canvas_t209405766 * get_mainCanvas_5() const { return ___mainCanvas_5; }
	inline Canvas_t209405766 ** get_address_of_mainCanvas_5() { return &___mainCanvas_5; }
	inline void set_mainCanvas_5(Canvas_t209405766 * value)
	{
		___mainCanvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___mainCanvas_5, value);
	}

	inline static int32_t get_offset_of_toastInstance_6() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___toastInstance_6)); }
	inline Toast_t3649705739 * get_toastInstance_6() const { return ___toastInstance_6; }
	inline Toast_t3649705739 ** get_address_of_toastInstance_6() { return &___toastInstance_6; }
	inline void set_toastInstance_6(Toast_t3649705739 * value)
	{
		___toastInstance_6 = value;
		Il2CppCodeGenWriteBarrier(&___toastInstance_6, value);
	}

	inline static int32_t get_offset_of_dialogInstance_7() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___dialogInstance_7)); }
	inline SDialog_t1510781833 * get_dialogInstance_7() const { return ___dialogInstance_7; }
	inline SDialog_t1510781833 ** get_address_of_dialogInstance_7() { return &___dialogInstance_7; }
	inline void set_dialogInstance_7(SDialog_t1510781833 * value)
	{
		___dialogInstance_7 = value;
		Il2CppCodeGenWriteBarrier(&___dialogInstance_7, value);
	}

	inline static int32_t get_offset_of_toastIEnumerator_8() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___toastIEnumerator_8)); }
	inline Il2CppObject * get_toastIEnumerator_8() const { return ___toastIEnumerator_8; }
	inline Il2CppObject ** get_address_of_toastIEnumerator_8() { return &___toastIEnumerator_8; }
	inline void set_toastIEnumerator_8(Il2CppObject * value)
	{
		___toastIEnumerator_8 = value;
		Il2CppCodeGenWriteBarrier(&___toastIEnumerator_8, value);
	}

	inline static int32_t get_offset_of_waittingDialog_9() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___waittingDialog_9)); }
	inline WaitingDialog_t2062014917 * get_waittingDialog_9() const { return ___waittingDialog_9; }
	inline WaitingDialog_t2062014917 ** get_address_of_waittingDialog_9() { return &___waittingDialog_9; }
	inline void set_waittingDialog_9(WaitingDialog_t2062014917 * value)
	{
		___waittingDialog_9 = value;
		Il2CppCodeGenWriteBarrier(&___waittingDialog_9, value);
	}

	inline static int32_t get_offset_of_notificationCenter_10() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___notificationCenter_10)); }
	inline NotificationCenter_t4076733310 * get_notificationCenter_10() const { return ___notificationCenter_10; }
	inline NotificationCenter_t4076733310 ** get_address_of_notificationCenter_10() { return &___notificationCenter_10; }
	inline void set_notificationCenter_10(NotificationCenter_t4076733310 * value)
	{
		___notificationCenter_10 = value;
		Il2CppCodeGenWriteBarrier(&___notificationCenter_10, value);
	}

	inline static int32_t get_offset_of_debugPanel_11() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___debugPanel_11)); }
	inline DebugPanel_t3149758925 * get_debugPanel_11() const { return ___debugPanel_11; }
	inline DebugPanel_t3149758925 ** get_address_of_debugPanel_11() { return &___debugPanel_11; }
	inline void set_debugPanel_11(DebugPanel_t3149758925 * value)
	{
		___debugPanel_11 = value;
		Il2CppCodeGenWriteBarrier(&___debugPanel_11, value);
	}

	inline static int32_t get_offset_of_showLostInternetConnection_13() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___showLostInternetConnection_13)); }
	inline bool get_showLostInternetConnection_13() const { return ___showLostInternetConnection_13; }
	inline bool* get_address_of_showLostInternetConnection_13() { return &___showLostInternetConnection_13; }
	inline void set_showLostInternetConnection_13(bool value)
	{
		___showLostInternetConnection_13 = value;
	}

	inline static int32_t get_offset_of_bannerScene_14() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___bannerScene_14)); }
	inline BannerScene_t3245990610 * get_bannerScene_14() const { return ___bannerScene_14; }
	inline BannerScene_t3245990610 ** get_address_of_bannerScene_14() { return &___bannerScene_14; }
	inline void set_bannerScene_14(BannerScene_t3245990610 * value)
	{
		___bannerScene_14 = value;
		Il2CppCodeGenWriteBarrier(&___bannerScene_14, value);
	}

	inline static int32_t get_offset_of_ping_17() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___ping_17)); }
	inline Ping_t3164159734 * get_ping_17() const { return ___ping_17; }
	inline Ping_t3164159734 ** get_address_of_ping_17() { return &___ping_17; }
	inline void set_ping_17(Ping_t3164159734 * value)
	{
		___ping_17 = value;
		Il2CppCodeGenWriteBarrier(&___ping_17, value);
	}

	inline static int32_t get_offset_of_pingStartTime_18() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___pingStartTime_18)); }
	inline float get_pingStartTime_18() const { return ___pingStartTime_18; }
	inline float* get_address_of_pingStartTime_18() { return &___pingStartTime_18; }
	inline void set_pingStartTime_18(float value)
	{
		___pingStartTime_18 = value;
	}

	inline static int32_t get_offset_of__onCheckingConnection_19() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ____onCheckingConnection_19)); }
	inline bool get__onCheckingConnection_19() const { return ____onCheckingConnection_19; }
	inline bool* get_address_of__onCheckingConnection_19() { return &____onCheckingConnection_19; }
	inline void set__onCheckingConnection_19(bool value)
	{
		____onCheckingConnection_19 = value;
	}
};

struct SuperScene_t3760801569_StaticFields
{
public:
	// System.String SuperScene::previousScene
	String_t* ___previousScene_2;
	// SuperScene SuperScene::instance
	SuperScene_t3760801569 * ___instance_3;
	// Utils/ExeOneStringParam SuperScene::<>f__am$cache0
	ExeOneStringParam_t2750684624 * ___U3CU3Ef__amU24cache0_20;
	// Utils/Executor SuperScene::<>f__am$cache1
	Executor_t2576254565 * ___U3CU3Ef__amU24cache1_21;
	// Utils/ExeOneStringParam SuperScene::<>f__am$cache2
	ExeOneStringParam_t2750684624 * ___U3CU3Ef__amU24cache2_22;
	// Utils/Executor SuperScene::<>f__am$cache3
	Executor_t2576254565 * ___U3CU3Ef__amU24cache3_23;
	// UnityEngine.Events.UnityAction SuperScene::<>f__am$cache4
	UnityAction_t4025899511 * ___U3CU3Ef__amU24cache4_24;
	// UnityEngine.Events.UnityAction SuperScene::<>f__am$cache5
	UnityAction_t4025899511 * ___U3CU3Ef__amU24cache5_25;
	// Utils/ExeOneStringParam SuperScene::<>f__am$cache6
	ExeOneStringParam_t2750684624 * ___U3CU3Ef__amU24cache6_26;
	// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult> SuperScene::<>f__am$cache7
	FacebookDelegate_1_t909463455 * ___U3CU3Ef__amU24cache7_27;
	// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult> SuperScene::<>f__am$cache8
	FacebookDelegate_1_t3020292135 * ___U3CU3Ef__amU24cache8_28;
	// BestHTTP.SocketIO.Events.SocketIOCallback SuperScene::<>f__am$cache9
	SocketIOCallback_t88619200 * ___U3CU3Ef__amU24cache9_29;

public:
	inline static int32_t get_offset_of_previousScene_2() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___previousScene_2)); }
	inline String_t* get_previousScene_2() const { return ___previousScene_2; }
	inline String_t** get_address_of_previousScene_2() { return &___previousScene_2; }
	inline void set_previousScene_2(String_t* value)
	{
		___previousScene_2 = value;
		Il2CppCodeGenWriteBarrier(&___previousScene_2, value);
	}

	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___instance_3)); }
	inline SuperScene_t3760801569 * get_instance_3() const { return ___instance_3; }
	inline SuperScene_t3760801569 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(SuperScene_t3760801569 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_20() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache0_20)); }
	inline ExeOneStringParam_t2750684624 * get_U3CU3Ef__amU24cache0_20() const { return ___U3CU3Ef__amU24cache0_20; }
	inline ExeOneStringParam_t2750684624 ** get_address_of_U3CU3Ef__amU24cache0_20() { return &___U3CU3Ef__amU24cache0_20; }
	inline void set_U3CU3Ef__amU24cache0_20(ExeOneStringParam_t2750684624 * value)
	{
		___U3CU3Ef__amU24cache0_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_21() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache1_21)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache1_21() const { return ___U3CU3Ef__amU24cache1_21; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache1_21() { return &___U3CU3Ef__amU24cache1_21; }
	inline void set_U3CU3Ef__amU24cache1_21(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache1_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_22() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache2_22)); }
	inline ExeOneStringParam_t2750684624 * get_U3CU3Ef__amU24cache2_22() const { return ___U3CU3Ef__amU24cache2_22; }
	inline ExeOneStringParam_t2750684624 ** get_address_of_U3CU3Ef__amU24cache2_22() { return &___U3CU3Ef__amU24cache2_22; }
	inline void set_U3CU3Ef__amU24cache2_22(ExeOneStringParam_t2750684624 * value)
	{
		___U3CU3Ef__amU24cache2_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_23() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache3_23)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache3_23() const { return ___U3CU3Ef__amU24cache3_23; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache3_23() { return &___U3CU3Ef__amU24cache3_23; }
	inline void set_U3CU3Ef__amU24cache3_23(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache3_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_24() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache4_24)); }
	inline UnityAction_t4025899511 * get_U3CU3Ef__amU24cache4_24() const { return ___U3CU3Ef__amU24cache4_24; }
	inline UnityAction_t4025899511 ** get_address_of_U3CU3Ef__amU24cache4_24() { return &___U3CU3Ef__amU24cache4_24; }
	inline void set_U3CU3Ef__amU24cache4_24(UnityAction_t4025899511 * value)
	{
		___U3CU3Ef__amU24cache4_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_25() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache5_25)); }
	inline UnityAction_t4025899511 * get_U3CU3Ef__amU24cache5_25() const { return ___U3CU3Ef__amU24cache5_25; }
	inline UnityAction_t4025899511 ** get_address_of_U3CU3Ef__amU24cache5_25() { return &___U3CU3Ef__amU24cache5_25; }
	inline void set_U3CU3Ef__amU24cache5_25(UnityAction_t4025899511 * value)
	{
		___U3CU3Ef__amU24cache5_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_26() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache6_26)); }
	inline ExeOneStringParam_t2750684624 * get_U3CU3Ef__amU24cache6_26() const { return ___U3CU3Ef__amU24cache6_26; }
	inline ExeOneStringParam_t2750684624 ** get_address_of_U3CU3Ef__amU24cache6_26() { return &___U3CU3Ef__amU24cache6_26; }
	inline void set_U3CU3Ef__amU24cache6_26(ExeOneStringParam_t2750684624 * value)
	{
		___U3CU3Ef__amU24cache6_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_27() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache7_27)); }
	inline FacebookDelegate_1_t909463455 * get_U3CU3Ef__amU24cache7_27() const { return ___U3CU3Ef__amU24cache7_27; }
	inline FacebookDelegate_1_t909463455 ** get_address_of_U3CU3Ef__amU24cache7_27() { return &___U3CU3Ef__amU24cache7_27; }
	inline void set_U3CU3Ef__amU24cache7_27(FacebookDelegate_1_t909463455 * value)
	{
		___U3CU3Ef__amU24cache7_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_28() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache8_28)); }
	inline FacebookDelegate_1_t3020292135 * get_U3CU3Ef__amU24cache8_28() const { return ___U3CU3Ef__amU24cache8_28; }
	inline FacebookDelegate_1_t3020292135 ** get_address_of_U3CU3Ef__amU24cache8_28() { return &___U3CU3Ef__amU24cache8_28; }
	inline void set_U3CU3Ef__amU24cache8_28(FacebookDelegate_1_t3020292135 * value)
	{
		___U3CU3Ef__amU24cache8_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_29() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache9_29)); }
	inline SocketIOCallback_t88619200 * get_U3CU3Ef__amU24cache9_29() const { return ___U3CU3Ef__amU24cache9_29; }
	inline SocketIOCallback_t88619200 ** get_address_of_U3CU3Ef__amU24cache9_29() { return &___U3CU3Ef__amU24cache9_29; }
	inline void set_U3CU3Ef__amU24cache9_29(SocketIOCallback_t88619200 * value)
	{
		___U3CU3Ef__amU24cache9_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
