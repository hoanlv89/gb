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
// BestHTTP.SocketIO.Events.SocketIOCallback
struct SocketIOCallback_t88619200;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t3020292135;

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
	// UnityEngine.Ping SuperScene::ping
	Ping_t3164159734 * ___ping_16;
	// System.Single SuperScene::pingStartTime
	float ___pingStartTime_17;
	// System.Boolean SuperScene::_onCheckingConnection
	bool ____onCheckingConnection_18;

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

	inline static int32_t get_offset_of_ping_16() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___ping_16)); }
	inline Ping_t3164159734 * get_ping_16() const { return ___ping_16; }
	inline Ping_t3164159734 ** get_address_of_ping_16() { return &___ping_16; }
	inline void set_ping_16(Ping_t3164159734 * value)
	{
		___ping_16 = value;
		Il2CppCodeGenWriteBarrier(&___ping_16, value);
	}

	inline static int32_t get_offset_of_pingStartTime_17() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ___pingStartTime_17)); }
	inline float get_pingStartTime_17() const { return ___pingStartTime_17; }
	inline float* get_address_of_pingStartTime_17() { return &___pingStartTime_17; }
	inline void set_pingStartTime_17(float value)
	{
		___pingStartTime_17 = value;
	}

	inline static int32_t get_offset_of__onCheckingConnection_18() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569, ____onCheckingConnection_18)); }
	inline bool get__onCheckingConnection_18() const { return ____onCheckingConnection_18; }
	inline bool* get_address_of__onCheckingConnection_18() { return &____onCheckingConnection_18; }
	inline void set__onCheckingConnection_18(bool value)
	{
		____onCheckingConnection_18 = value;
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
	ExeOneStringParam_t2750684624 * ___U3CU3Ef__amU24cache0_19;
	// Utils/Executor SuperScene::<>f__am$cache1
	Executor_t2576254565 * ___U3CU3Ef__amU24cache1_20;
	// Utils/ExeOneStringParam SuperScene::<>f__am$cache2
	ExeOneStringParam_t2750684624 * ___U3CU3Ef__amU24cache2_21;
	// Utils/Executor SuperScene::<>f__am$cache3
	Executor_t2576254565 * ___U3CU3Ef__amU24cache3_22;
	// UnityEngine.Events.UnityAction SuperScene::<>f__am$cache4
	UnityAction_t4025899511 * ___U3CU3Ef__amU24cache4_23;
	// UnityEngine.Events.UnityAction SuperScene::<>f__am$cache5
	UnityAction_t4025899511 * ___U3CU3Ef__amU24cache5_24;
	// Utils/ExeOneStringParam SuperScene::<>f__am$cache6
	ExeOneStringParam_t2750684624 * ___U3CU3Ef__amU24cache6_25;
	// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult> SuperScene::<>f__am$cache7
	FacebookDelegate_1_t909463455 * ___U3CU3Ef__amU24cache7_26;
	// BestHTTP.SocketIO.Events.SocketIOCallback SuperScene::<>f__am$cache8
	SocketIOCallback_t88619200 * ___U3CU3Ef__amU24cache8_27;
	// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult> SuperScene::<>f__am$cache9
	FacebookDelegate_1_t3020292135 * ___U3CU3Ef__amU24cache9_28;

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

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_19() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache0_19)); }
	inline ExeOneStringParam_t2750684624 * get_U3CU3Ef__amU24cache0_19() const { return ___U3CU3Ef__amU24cache0_19; }
	inline ExeOneStringParam_t2750684624 ** get_address_of_U3CU3Ef__amU24cache0_19() { return &___U3CU3Ef__amU24cache0_19; }
	inline void set_U3CU3Ef__amU24cache0_19(ExeOneStringParam_t2750684624 * value)
	{
		___U3CU3Ef__amU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_20() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache1_20)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache1_20() const { return ___U3CU3Ef__amU24cache1_20; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache1_20() { return &___U3CU3Ef__amU24cache1_20; }
	inline void set_U3CU3Ef__amU24cache1_20(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache1_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_21() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache2_21)); }
	inline ExeOneStringParam_t2750684624 * get_U3CU3Ef__amU24cache2_21() const { return ___U3CU3Ef__amU24cache2_21; }
	inline ExeOneStringParam_t2750684624 ** get_address_of_U3CU3Ef__amU24cache2_21() { return &___U3CU3Ef__amU24cache2_21; }
	inline void set_U3CU3Ef__amU24cache2_21(ExeOneStringParam_t2750684624 * value)
	{
		___U3CU3Ef__amU24cache2_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_22() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache3_22)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache3_22() const { return ___U3CU3Ef__amU24cache3_22; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache3_22() { return &___U3CU3Ef__amU24cache3_22; }
	inline void set_U3CU3Ef__amU24cache3_22(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache3_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_23() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache4_23)); }
	inline UnityAction_t4025899511 * get_U3CU3Ef__amU24cache4_23() const { return ___U3CU3Ef__amU24cache4_23; }
	inline UnityAction_t4025899511 ** get_address_of_U3CU3Ef__amU24cache4_23() { return &___U3CU3Ef__amU24cache4_23; }
	inline void set_U3CU3Ef__amU24cache4_23(UnityAction_t4025899511 * value)
	{
		___U3CU3Ef__amU24cache4_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_24() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache5_24)); }
	inline UnityAction_t4025899511 * get_U3CU3Ef__amU24cache5_24() const { return ___U3CU3Ef__amU24cache5_24; }
	inline UnityAction_t4025899511 ** get_address_of_U3CU3Ef__amU24cache5_24() { return &___U3CU3Ef__amU24cache5_24; }
	inline void set_U3CU3Ef__amU24cache5_24(UnityAction_t4025899511 * value)
	{
		___U3CU3Ef__amU24cache5_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_25() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache6_25)); }
	inline ExeOneStringParam_t2750684624 * get_U3CU3Ef__amU24cache6_25() const { return ___U3CU3Ef__amU24cache6_25; }
	inline ExeOneStringParam_t2750684624 ** get_address_of_U3CU3Ef__amU24cache6_25() { return &___U3CU3Ef__amU24cache6_25; }
	inline void set_U3CU3Ef__amU24cache6_25(ExeOneStringParam_t2750684624 * value)
	{
		___U3CU3Ef__amU24cache6_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_26() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache7_26)); }
	inline FacebookDelegate_1_t909463455 * get_U3CU3Ef__amU24cache7_26() const { return ___U3CU3Ef__amU24cache7_26; }
	inline FacebookDelegate_1_t909463455 ** get_address_of_U3CU3Ef__amU24cache7_26() { return &___U3CU3Ef__amU24cache7_26; }
	inline void set_U3CU3Ef__amU24cache7_26(FacebookDelegate_1_t909463455 * value)
	{
		___U3CU3Ef__amU24cache7_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_27() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache8_27)); }
	inline SocketIOCallback_t88619200 * get_U3CU3Ef__amU24cache8_27() const { return ___U3CU3Ef__amU24cache8_27; }
	inline SocketIOCallback_t88619200 ** get_address_of_U3CU3Ef__amU24cache8_27() { return &___U3CU3Ef__amU24cache8_27; }
	inline void set_U3CU3Ef__amU24cache8_27(SocketIOCallback_t88619200 * value)
	{
		___U3CU3Ef__amU24cache8_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_28() { return static_cast<int32_t>(offsetof(SuperScene_t3760801569_StaticFields, ___U3CU3Ef__amU24cache9_28)); }
	inline FacebookDelegate_1_t3020292135 * get_U3CU3Ef__amU24cache9_28() const { return ___U3CU3Ef__amU24cache9_28; }
	inline FacebookDelegate_1_t3020292135 ** get_address_of_U3CU3Ef__amU24cache9_28() { return &___U3CU3Ef__amU24cache9_28; }
	inline void set_U3CU3Ef__amU24cache9_28(FacebookDelegate_1_t3020292135 * value)
	{
		___U3CU3Ef__amU24cache9_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
