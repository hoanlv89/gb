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

// OneSignal
struct OneSignal_t1921763236;
// System.String
struct String_t;
// OneSignal/NotificationReceived
struct NotificationReceived_t3679537625;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// OneSignal/TagsReceived
struct TagsReceived_t2930470473;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// OneSignal/IdsAvailable
struct IdsAvailable_t1175497452;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// OneSignal/OnPostNotificationSuccess
struct OnPostNotificationSuccess_t356380508;
// OneSignal/OnPostNotificationFailure
struct OnPostNotificationFailure_t3132852631;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OneSignal_NotificationReceived3679537625.h"
#include "AssemblyU2DCSharp_OneSignal_LOG_LEVEL1880994248.h"
#include "AssemblyU2DCSharp_OneSignal_TagsReceived2930470473.h"
#include "AssemblyU2DCSharp_OneSignal_IdsAvailable1175497452.h"
#include "AssemblyU2DCSharp_OneSignal_OnPostNotificationSucce356380508.h"
#include "AssemblyU2DCSharp_OneSignal_OnPostNotificationFail3132852631.h"

// System.Void OneSignal::.ctor()
extern "C"  void OneSignal__ctor_m1126313357 (OneSignal_t1921763236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String,System.String,OneSignal/NotificationReceived,System.Boolean)
extern "C"  void OneSignal_Init_m2746406539 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, String_t* ___googleProjectNumber1, NotificationReceived_t3679537625 * ___inNotificationDelegate2, bool ___autoRegister3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String,System.String,OneSignal/NotificationReceived)
extern "C"  void OneSignal_Init_m1403026186 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, String_t* ___googleProjectNumber1, NotificationReceived_t3679537625 * ___inNotificationDelegate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String,System.String)
extern "C"  void OneSignal_Init_m1096711339 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, String_t* ___googleProjectNumber1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::Init(System.String)
extern "C"  void OneSignal_Init_m572524173 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SetLogLevel(OneSignal/LOG_LEVEL,OneSignal/LOG_LEVEL)
extern "C"  void OneSignal_SetLogLevel_m2803996037 (Il2CppObject * __this /* static, unused */, int32_t ___inLogLevel0, int32_t ___inVisualLevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SendTag(System.String,System.String)
extern "C"  void OneSignal_SendTag_m485227059 (Il2CppObject * __this /* static, unused */, String_t* ___tagName0, String_t* ___tagValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SendTags(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  void OneSignal_SendTags_m2548595246 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___tags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetTags(OneSignal/TagsReceived)
extern "C"  void OneSignal_GetTags_m1552783625 (Il2CppObject * __this /* static, unused */, TagsReceived_t2930470473 * ___inTagsReceivedDelegate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetTags()
extern "C"  void OneSignal_GetTags_m1138470230 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::DeleteTag(System.String)
extern "C"  void OneSignal_DeleteTag_m1021411708 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::DeleteTags(System.Collections.Generic.IList`1<System.String>)
extern "C"  void OneSignal_DeleteTags_m3383599972 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___keys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SendPurchase(System.Double)
extern "C"  void OneSignal_SendPurchase_m284093228 (Il2CppObject * __this /* static, unused */, double ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::RegisterForPushNotifications()
extern "C"  void OneSignal_RegisterForPushNotifications_m216968751 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetIdsAvailable(OneSignal/IdsAvailable)
extern "C"  void OneSignal_GetIdsAvailable_m2087360122 (Il2CppObject * __this /* static, unused */, IdsAvailable_t1175497452 * ___inIdsAvailableDelegate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::GetIdsAvailable()
extern "C"  void OneSignal_GetIdsAvailable_m2512819826 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::EnableVibrate(System.Boolean)
extern "C"  void OneSignal_EnableVibrate_m2871738452 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::EnableSound(System.Boolean)
extern "C"  void OneSignal_EnableSound_m369468388 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::EnableNotificationsWhenActive(System.Boolean)
extern "C"  void OneSignal_EnableNotificationsWhenActive_m3514179017 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::EnableInAppAlertNotification(System.Boolean)
extern "C"  void OneSignal_EnableInAppAlertNotification_m3938916818 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SetSubscription(System.Boolean)
extern "C"  void OneSignal_SetSubscription_m3194800143 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::PostNotification(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void OneSignal_PostNotification_m457451103 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::PostNotification(System.Collections.Generic.Dictionary`2<System.String,System.Object>,OneSignal/OnPostNotificationSuccess,OneSignal/OnPostNotificationFailure)
extern "C"  void OneSignal_PostNotification_m1205735158 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___data0, OnPostNotificationSuccess_t356380508 * ___inOnPostNotificationSuccess1, OnPostNotificationFailure_t3132852631 * ___inOnPostNotificationFailure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::SetEmail(System.String)
extern "C"  void OneSignal_SetEmail_m448207729 (Il2CppObject * __this /* static, unused */, String_t* ___email0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::PromptLocation()
extern "C"  void OneSignal_PromptLocation_m3236313414 (OneSignal_t1921763236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::onPushNotificationReceived(System.String)
extern "C"  void OneSignal_onPushNotificationReceived_m184407616 (OneSignal_t1921763236 * __this, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::onIdsAvailable(System.String)
extern "C"  void OneSignal_onIdsAvailable_m192216705 (OneSignal_t1921763236 * __this, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::onTagsReceived(System.String)
extern "C"  void OneSignal_onTagsReceived_m3838563302 (OneSignal_t1921763236 * __this, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::onPostNotificationSuccess(System.String)
extern "C"  void OneSignal_onPostNotificationSuccess_m3352689502 (OneSignal_t1921763236 * __this, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::onPostNotificationFailed(System.String)
extern "C"  void OneSignal_onPostNotificationFailed_m3167521412 (OneSignal_t1921763236 * __this, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal::.cctor()
extern "C"  void OneSignal__cctor_m124621502 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
