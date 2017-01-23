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

// OneSignalIOS
struct OneSignalIOS_t2876627657;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// OneSignal/NotificationReceived
struct NotificationReceived_t3679537625;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OneSignal_LOG_LEVEL1880994248.h"
#include "AssemblyU2DCSharp_OneSignal_NotificationReceived3679537625.h"

// System.Void OneSignalIOS::.ctor(System.String,System.String,System.Boolean,OneSignal/LOG_LEVEL,OneSignal/LOG_LEVEL)
extern "C"  void OneSignalIOS__ctor_m509175167 (OneSignalIOS_t2876627657 * __this, String_t* ___gameObjectName0, String_t* ___appId1, bool ___autoRegister2, int32_t ___logLevel3, int32_t ___visualLevel4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_init(System.String,System.String,System.Boolean,System.Int32,System.Int32)
extern "C"  void OneSignalIOS__init_m1544299188 (Il2CppObject * __this /* static, unused */, String_t* ___listenerName0, String_t* ___appId1, bool ___autoRegister2, int32_t ___logLevel3, int32_t ___visualLogLevel4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_registerForPushNotifications()
extern "C"  void OneSignalIOS__registerForPushNotifications_m754891953 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_sendTag(System.String,System.String)
extern "C"  void OneSignalIOS__sendTag_m3198577685 (Il2CppObject * __this /* static, unused */, String_t* ___tagName0, String_t* ___tagValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_sendTags(System.String)
extern "C"  void OneSignalIOS__sendTags_m160036032 (Il2CppObject * __this /* static, unused */, String_t* ___tags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_getTags()
extern "C"  void OneSignalIOS__getTags_m2071625156 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_deleteTag(System.String)
extern "C"  void OneSignalIOS__deleteTag_m83653886 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_deleteTags(System.String)
extern "C"  void OneSignalIOS__deleteTags_m2061387977 (Il2CppObject * __this /* static, unused */, String_t* ___keys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_idsAvailable()
extern "C"  void OneSignalIOS__idsAvailable_m1609798788 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_enableInAppAlertNotification(System.Boolean)
extern "C"  void OneSignalIOS__enableInAppAlertNotification_m1810527344 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_setSubscription(System.Boolean)
extern "C"  void OneSignalIOS__setSubscription_m3374939949 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_postNotification(System.String)
extern "C"  void OneSignalIOS__postNotification_m51965438 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_setEmail(System.String)
extern "C"  void OneSignalIOS__setEmail_m2205954591 (Il2CppObject * __this /* static, unused */, String_t* ___email0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_promptLocation()
extern "C"  void OneSignalIOS__promptLocation_m1529082264 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::_setLogLevel(System.Int32,System.Int32)
extern "C"  void OneSignalIOS__setLogLevel_m933514267 (Il2CppObject * __this /* static, unused */, int32_t ___logLevel0, int32_t ___visualLogLevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::RegisterForPushNotifications()
extern "C"  void OneSignalIOS_RegisterForPushNotifications_m2767862398 (OneSignalIOS_t2876627657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::SendTag(System.String,System.String)
extern "C"  void OneSignalIOS_SendTag_m2219818084 (OneSignalIOS_t2876627657 * __this, String_t* ___tagName0, String_t* ___tagValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::SendTags(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  void OneSignalIOS_SendTags_m4089013515 (OneSignalIOS_t2876627657 * __this, Il2CppObject* ___tags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::GetTags()
extern "C"  void OneSignalIOS_GetTags_m3669912091 (OneSignalIOS_t2876627657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::DeleteTag(System.String)
extern "C"  void OneSignalIOS_DeleteTag_m3230785061 (OneSignalIOS_t2876627657 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::DeleteTags(System.Collections.Generic.IList`1<System.String>)
extern "C"  void OneSignalIOS_DeleteTags_m2844342477 (OneSignalIOS_t2876627657 * __this, Il2CppObject* ___keys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::IdsAvailable()
extern "C"  void OneSignalIOS_IdsAvailable_m3336537515 (OneSignalIOS_t2876627657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::EnableInAppAlertNotification(System.Boolean)
extern "C"  void OneSignalIOS_EnableInAppAlertNotification_m79887487 (OneSignalIOS_t2876627657 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::SetSubscription(System.Boolean)
extern "C"  void OneSignalIOS_SetSubscription_m883874128 (OneSignalIOS_t2876627657 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::PostNotification(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void OneSignalIOS_PostNotification_m1984196712 (OneSignalIOS_t2876627657 * __this, Dictionary_2_t309261261 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::SetEmail(System.String)
extern "C"  void OneSignalIOS_SetEmail_m2271865292 (OneSignalIOS_t2876627657 * __this, String_t* ___email0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::PromptLocation()
extern "C"  void OneSignalIOS_PromptLocation_m4246440805 (OneSignalIOS_t2876627657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::FireNotificationReceivedEvent(System.String,OneSignal/NotificationReceived)
extern "C"  void OneSignalIOS_FireNotificationReceivedEvent_m3703337963 (OneSignalIOS_t2876627657 * __this, String_t* ___jsonString0, NotificationReceived_t3679537625 * ___notificationReceived1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalIOS::SetLogLevel(OneSignal/LOG_LEVEL,OneSignal/LOG_LEVEL)
extern "C"  void OneSignalIOS_SetLogLevel_m4154506546 (OneSignalIOS_t2876627657 * __this, int32_t ___logLevel0, int32_t ___visualLevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
