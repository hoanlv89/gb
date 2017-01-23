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

// IOSNotificationController
struct IOSNotificationController_t796362558;
// System.Action`1<IOSNotificationDeviceToken>
struct Action_1_t2364224027;
// System.Action`1<ISN_Result>
struct Action_1_t2577430992;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;
// System.Action`1<ISN_LocalNotification>
struct Action_1_t74986071;
// System.String
struct String_t;
// ISN_LocalNotification
struct ISN_LocalNotification_t273186689;
// IOSNotificationDeviceToken
struct IOSNotificationDeviceToken_t2562424645;
// UnityEngine.iOS.RemoteNotification
struct RemoteNotification_t2254252895;
// ISN_Result
struct ISN_Result_t2775631610;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_iOS_NotificationType3745088907.h"
#include "AssemblyU2DCSharp_ISN_LocalNotification273186689.h"
#include "AssemblyU2DCSharp_IOSNotificationDeviceToken2562424645.h"
#include "UnityEngine_UnityEngine_iOS_RemoteNotification2254252895.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

// System.Void IOSNotificationController::.ctor()
extern "C"  void IOSNotificationController__ctor_m505757695 (IOSNotificationController_t796362558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::add_OnDeviceTokenReceived(System.Action`1<IOSNotificationDeviceToken>)
extern "C"  void IOSNotificationController_add_OnDeviceTokenReceived_m2425652833 (Il2CppObject * __this /* static, unused */, Action_1_t2364224027 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::remove_OnDeviceTokenReceived(System.Action`1<IOSNotificationDeviceToken>)
extern "C"  void IOSNotificationController_remove_OnDeviceTokenReceived_m190010662 (Il2CppObject * __this /* static, unused */, Action_1_t2364224027 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::add_OnNotificationScheduleResult(System.Action`1<ISN_Result>)
extern "C"  void IOSNotificationController_add_OnNotificationScheduleResult_m881373165 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::remove_OnNotificationScheduleResult(System.Action`1<ISN_Result>)
extern "C"  void IOSNotificationController_remove_OnNotificationScheduleResult_m3974995544 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::add_OnNotificationSettingsInfoResult(System.Action`1<System.Int32>)
extern "C"  void IOSNotificationController_add_OnNotificationSettingsInfoResult_m633662126 (Il2CppObject * __this /* static, unused */, Action_1_t1873676830 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::remove_OnNotificationSettingsInfoResult(System.Action`1<System.Int32>)
extern "C"  void IOSNotificationController_remove_OnNotificationSettingsInfoResult_m4240172439 (Il2CppObject * __this /* static, unused */, Action_1_t1873676830 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::add_OnLocalNotificationReceived(System.Action`1<ISN_LocalNotification>)
extern "C"  void IOSNotificationController_add_OnLocalNotificationReceived_m882720562 (Il2CppObject * __this /* static, unused */, Action_1_t74986071 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::remove_OnLocalNotificationReceived(System.Action`1<ISN_LocalNotification>)
extern "C"  void IOSNotificationController_remove_OnLocalNotificationReceived_m1898398033 (Il2CppObject * __this /* static, unused */, Action_1_t74986071 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_ScheduleNotification(System.Int32,System.String,System.Boolean,System.String,System.Int32,System.String)
extern "C"  void IOSNotificationController__ISN_ScheduleNotification_m3508980350 (Il2CppObject * __this /* static, unused */, int32_t ___time0, String_t* ___message1, bool ___sound2, String_t* ___nId3, int32_t ___badges4, String_t* ___data5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_ShowNotificationBanner(System.String,System.String)
extern "C"  void IOSNotificationController__ISN_ShowNotificationBanner_m3887486053 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_CancelNotifications()
extern "C"  void IOSNotificationController__ISN_CancelNotifications_m1242086219 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_RequestNotificationPermissions()
extern "C"  void IOSNotificationController__ISN_RequestNotificationPermissions_m1161967355 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_CancelNotificationById(System.String)
extern "C"  void IOSNotificationController__ISN_CancelNotificationById_m2568948408 (Il2CppObject * __this /* static, unused */, String_t* ___nId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_ApplicationIconBadgeNumber(System.Int32)
extern "C"  void IOSNotificationController__ISN_ApplicationIconBadgeNumber_m539000173 (Il2CppObject * __this /* static, unused */, int32_t ___badges0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_RegisterForRemoteNotifications(System.Int32)
extern "C"  void IOSNotificationController__ISN_RegisterForRemoteNotifications_m1291441320 (Il2CppObject * __this /* static, unused */, int32_t ___types0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_RequestNotificationSettings()
extern "C"  void IOSNotificationController__ISN_RequestNotificationSettings_m1522495632 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::Awake()
extern "C"  void IOSNotificationController_Awake_m732697470 (IOSNotificationController_t796362558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::FixedUpdate()
extern "C"  void IOSNotificationController_FixedUpdate_m4167256690 (IOSNotificationController_t796362558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::RegisterForRemoteNotifications(UnityEngine.iOS.NotificationType)
extern "C"  void IOSNotificationController_RegisterForRemoteNotifications_m3740135460 (IOSNotificationController_t796362558 * __this, int32_t ___notificationTypes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::RequestNotificationPermissions()
extern "C"  void IOSNotificationController_RequestNotificationPermissions_m772536063 (IOSNotificationController_t796362558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::ShowGmaeKitNotification(System.String,System.String)
extern "C"  void IOSNotificationController_ShowGmaeKitNotification_m3450525149 (IOSNotificationController_t796362558 * __this, String_t* ___title0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::ShowNotificationBanner(System.String,System.String)
extern "C"  void IOSNotificationController_ShowNotificationBanner_m7281089 (IOSNotificationController_t796362558 * __this, String_t* ___title0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::CancelNotifications()
extern "C"  void IOSNotificationController_CancelNotifications_m1450318759 (IOSNotificationController_t796362558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::CancelAllLocalNotifications()
extern "C"  void IOSNotificationController_CancelAllLocalNotifications_m47263607 (IOSNotificationController_t796362558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::CancelLocalNotification(ISN_LocalNotification)
extern "C"  void IOSNotificationController_CancelLocalNotification_m4037030968 (IOSNotificationController_t796362558 * __this, ISN_LocalNotification_t273186689 * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::CancelLocalNotificationById(System.Int32)
extern "C"  void IOSNotificationController_CancelLocalNotificationById_m171924286 (IOSNotificationController_t796362558 * __this, int32_t ___notificationId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::ScheduleNotification(ISN_LocalNotification)
extern "C"  void IOSNotificationController_ScheduleNotification_m757888756 (IOSNotificationController_t796362558 * __this, ISN_LocalNotification_t273186689 * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::ApplicationIconBadgeNumber(System.Int32)
extern "C"  void IOSNotificationController_ApplicationIconBadgeNumber_m1148613289 (IOSNotificationController_t796362558 * __this, int32_t ___badges0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::RequestNotificationSettings()
extern "C"  void IOSNotificationController_RequestNotificationSettings_m2760732934 (IOSNotificationController_t796362558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 IOSNotificationController::get_GetNextNotificationId()
extern "C"  int32_t IOSNotificationController_get_GetNextNotificationId_m467340401 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 IOSNotificationController::get_AllowedNotificationsType()
extern "C"  int32_t IOSNotificationController_get_AllowedNotificationsType_m933325694 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ISN_LocalNotification IOSNotificationController::get_LaunchNotification()
extern "C"  ISN_LocalNotification_t273186689 * IOSNotificationController_get_LaunchNotification_m584141482 (IOSNotificationController_t796362558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::OnDeviceTockeReceivedAction(IOSNotificationDeviceToken)
extern "C"  void IOSNotificationController_OnDeviceTockeReceivedAction_m2907572040 (IOSNotificationController_t796362558 * __this, IOSNotificationDeviceToken_t2562424645 * ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::OnNotificationScheduleResultAction(System.String)
extern "C"  void IOSNotificationController_OnNotificationScheduleResultAction_m150981819 (IOSNotificationController_t796362558 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::OnNotificationSettingsInfoRetrived(System.String)
extern "C"  void IOSNotificationController_OnNotificationSettingsInfoRetrived_m4155146621 (IOSNotificationController_t796362558 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::OnLocalNotificationReceived_Event(System.String)
extern "C"  void IOSNotificationController_OnLocalNotificationReceived_Event_m1006410336 (IOSNotificationController_t796362558 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::.cctor()
extern "C"  void IOSNotificationController__cctor_m4008867348 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::<OnRemoteNotificationReceived>m__0(UnityEngine.iOS.RemoteNotification)
extern "C"  void IOSNotificationController_U3COnRemoteNotificationReceivedU3Em__0_m602774008 (Il2CppObject * __this /* static, unused */, RemoteNotification_t2254252895 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::<OnDeviceTokenReceived>m__1(IOSNotificationDeviceToken)
extern "C"  void IOSNotificationController_U3COnDeviceTokenReceivedU3Em__1_m2950321139 (Il2CppObject * __this /* static, unused */, IOSNotificationDeviceToken_t2562424645 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::<OnNotificationScheduleResult>m__2(ISN_Result)
extern "C"  void IOSNotificationController_U3COnNotificationScheduleResultU3Em__2_m752917538 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::<OnNotificationSettingsInfoResult>m__3(System.Int32)
extern "C"  void IOSNotificationController_U3COnNotificationSettingsInfoResultU3Em__3_m3485357918 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::<OnLocalNotificationReceived>m__4(ISN_LocalNotification)
extern "C"  void IOSNotificationController_U3COnLocalNotificationReceivedU3Em__4_m2534834909 (Il2CppObject * __this /* static, unused */, ISN_LocalNotification_t273186689 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
