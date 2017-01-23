#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IOSNotificationController
struct IOSNotificationController_t796362558;
// ISN_LocalNotification
struct ISN_LocalNotification_t273186689;
// System.Action`1<IOSNotificationDeviceToken>
struct Action_1_t2364224027;
// System.Action`1<ISN_Result>
struct Action_1_t2577430992;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;
// System.Action`1<ISN_LocalNotification>
struct Action_1_t74986071;
// System.Action`1<UnityEngine.iOS.RemoteNotification>
struct Action_1_t2056052277;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen4031929870.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSNotificationController
struct  IOSNotificationController_t796362558  : public ISN_Singleton_1_t4031929870
{
public:
	// ISN_LocalNotification IOSNotificationController::_LaunchNotification
	ISN_LocalNotification_t273186689 * ____LaunchNotification_6;
	// System.Action`1<UnityEngine.iOS.RemoteNotification> IOSNotificationController::OnRemoteNotificationReceived
	Action_1_t2056052277 * ___OnRemoteNotificationReceived_11;

public:
	inline static int32_t get_offset_of__LaunchNotification_6() { return static_cast<int32_t>(offsetof(IOSNotificationController_t796362558, ____LaunchNotification_6)); }
	inline ISN_LocalNotification_t273186689 * get__LaunchNotification_6() const { return ____LaunchNotification_6; }
	inline ISN_LocalNotification_t273186689 ** get_address_of__LaunchNotification_6() { return &____LaunchNotification_6; }
	inline void set__LaunchNotification_6(ISN_LocalNotification_t273186689 * value)
	{
		____LaunchNotification_6 = value;
		Il2CppCodeGenWriteBarrier(&____LaunchNotification_6, value);
	}

	inline static int32_t get_offset_of_OnRemoteNotificationReceived_11() { return static_cast<int32_t>(offsetof(IOSNotificationController_t796362558, ___OnRemoteNotificationReceived_11)); }
	inline Action_1_t2056052277 * get_OnRemoteNotificationReceived_11() const { return ___OnRemoteNotificationReceived_11; }
	inline Action_1_t2056052277 ** get_address_of_OnRemoteNotificationReceived_11() { return &___OnRemoteNotificationReceived_11; }
	inline void set_OnRemoteNotificationReceived_11(Action_1_t2056052277 * value)
	{
		___OnRemoteNotificationReceived_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnRemoteNotificationReceived_11, value);
	}
};

struct IOSNotificationController_t796362558_StaticFields
{
public:
	// IOSNotificationController IOSNotificationController::_instance
	IOSNotificationController_t796362558 * ____instance_4;
	// System.Int32 IOSNotificationController::_AllowedNotificationsType
	int32_t ____AllowedNotificationsType_5;
	// System.Action`1<IOSNotificationDeviceToken> IOSNotificationController::OnDeviceTokenReceived
	Action_1_t2364224027 * ___OnDeviceTokenReceived_7;
	// System.Action`1<ISN_Result> IOSNotificationController::OnNotificationScheduleResult
	Action_1_t2577430992 * ___OnNotificationScheduleResult_8;
	// System.Action`1<System.Int32> IOSNotificationController::OnNotificationSettingsInfoResult
	Action_1_t1873676830 * ___OnNotificationSettingsInfoResult_9;
	// System.Action`1<ISN_LocalNotification> IOSNotificationController::OnLocalNotificationReceived
	Action_1_t74986071 * ___OnLocalNotificationReceived_10;
	// System.Action`1<UnityEngine.iOS.RemoteNotification> IOSNotificationController::<>f__am$cache0
	Action_1_t2056052277 * ___U3CU3Ef__amU24cache0_13;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(IOSNotificationController_t796362558_StaticFields, ____instance_4)); }
	inline IOSNotificationController_t796362558 * get__instance_4() const { return ____instance_4; }
	inline IOSNotificationController_t796362558 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(IOSNotificationController_t796362558 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier(&____instance_4, value);
	}

	inline static int32_t get_offset_of__AllowedNotificationsType_5() { return static_cast<int32_t>(offsetof(IOSNotificationController_t796362558_StaticFields, ____AllowedNotificationsType_5)); }
	inline int32_t get__AllowedNotificationsType_5() const { return ____AllowedNotificationsType_5; }
	inline int32_t* get_address_of__AllowedNotificationsType_5() { return &____AllowedNotificationsType_5; }
	inline void set__AllowedNotificationsType_5(int32_t value)
	{
		____AllowedNotificationsType_5 = value;
	}

	inline static int32_t get_offset_of_OnDeviceTokenReceived_7() { return static_cast<int32_t>(offsetof(IOSNotificationController_t796362558_StaticFields, ___OnDeviceTokenReceived_7)); }
	inline Action_1_t2364224027 * get_OnDeviceTokenReceived_7() const { return ___OnDeviceTokenReceived_7; }
	inline Action_1_t2364224027 ** get_address_of_OnDeviceTokenReceived_7() { return &___OnDeviceTokenReceived_7; }
	inline void set_OnDeviceTokenReceived_7(Action_1_t2364224027 * value)
	{
		___OnDeviceTokenReceived_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceTokenReceived_7, value);
	}

	inline static int32_t get_offset_of_OnNotificationScheduleResult_8() { return static_cast<int32_t>(offsetof(IOSNotificationController_t796362558_StaticFields, ___OnNotificationScheduleResult_8)); }
	inline Action_1_t2577430992 * get_OnNotificationScheduleResult_8() const { return ___OnNotificationScheduleResult_8; }
	inline Action_1_t2577430992 ** get_address_of_OnNotificationScheduleResult_8() { return &___OnNotificationScheduleResult_8; }
	inline void set_OnNotificationScheduleResult_8(Action_1_t2577430992 * value)
	{
		___OnNotificationScheduleResult_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnNotificationScheduleResult_8, value);
	}

	inline static int32_t get_offset_of_OnNotificationSettingsInfoResult_9() { return static_cast<int32_t>(offsetof(IOSNotificationController_t796362558_StaticFields, ___OnNotificationSettingsInfoResult_9)); }
	inline Action_1_t1873676830 * get_OnNotificationSettingsInfoResult_9() const { return ___OnNotificationSettingsInfoResult_9; }
	inline Action_1_t1873676830 ** get_address_of_OnNotificationSettingsInfoResult_9() { return &___OnNotificationSettingsInfoResult_9; }
	inline void set_OnNotificationSettingsInfoResult_9(Action_1_t1873676830 * value)
	{
		___OnNotificationSettingsInfoResult_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnNotificationSettingsInfoResult_9, value);
	}

	inline static int32_t get_offset_of_OnLocalNotificationReceived_10() { return static_cast<int32_t>(offsetof(IOSNotificationController_t796362558_StaticFields, ___OnLocalNotificationReceived_10)); }
	inline Action_1_t74986071 * get_OnLocalNotificationReceived_10() const { return ___OnLocalNotificationReceived_10; }
	inline Action_1_t74986071 ** get_address_of_OnLocalNotificationReceived_10() { return &___OnLocalNotificationReceived_10; }
	inline void set_OnLocalNotificationReceived_10(Action_1_t74986071 * value)
	{
		___OnLocalNotificationReceived_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnLocalNotificationReceived_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(IOSNotificationController_t796362558_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Action_1_t2056052277 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Action_1_t2056052277 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Action_1_t2056052277 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
