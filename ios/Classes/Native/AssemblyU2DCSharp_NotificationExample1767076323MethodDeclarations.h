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

// NotificationExample
struct NotificationExample_t1767076323;
// IOSNotificationDeviceToken
struct IOSNotificationDeviceToken_t2562424645;
// ISN_LocalNotification
struct ISN_LocalNotification_t273186689;
// ISN_Result
struct ISN_Result_t2775631610;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_IOSNotificationDeviceToken2562424645.h"
#include "AssemblyU2DCSharp_ISN_LocalNotification273186689.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

// System.Void NotificationExample::.ctor()
extern "C"  void NotificationExample__ctor_m3803488882 (NotificationExample_t1767076323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::Awake()
extern "C"  void NotificationExample_Awake_m1883764819 (NotificationExample_t1767076323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::OnGUI()
extern "C"  void NotificationExample_OnGUI_m3817843746 (NotificationExample_t1767076323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::CheckNotificationSettings()
extern "C"  void NotificationExample_CheckNotificationSettings_m1165947080 (NotificationExample_t1767076323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::HandleOnNotificationSettingsInfoResult(System.Int32)
extern "C"  void NotificationExample_HandleOnNotificationSettingsInfoResult_m855673491 (NotificationExample_t1767076323 * __this, int32_t ___avaliableTypes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::OnDeviceTokenReceived(IOSNotificationDeviceToken)
extern "C"  void NotificationExample_OnDeviceTokenReceived_m3297406398 (NotificationExample_t1767076323 * __this, IOSNotificationDeviceToken_t2562424645 * ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::HandleOnLocalNotificationReceived(ISN_LocalNotification)
extern "C"  void NotificationExample_HandleOnLocalNotificationReceived_m4248862893 (NotificationExample_t1767076323 * __this, ISN_LocalNotification_t273186689 * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::OnNotificationScheduleResult(ISN_Result)
extern "C"  void NotificationExample_OnNotificationScheduleResult_m2758872772 (NotificationExample_t1767076323 * __this, ISN_Result_t2775631610 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
