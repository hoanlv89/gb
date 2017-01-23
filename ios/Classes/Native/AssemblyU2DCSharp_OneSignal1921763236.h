#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OneSignal/IdsAvailable
struct IdsAvailable_t1175497452;
// OneSignal/TagsReceived
struct TagsReceived_t2930470473;
// OneSignalPlatform
struct OneSignalPlatform_t1535313295;
// OneSignal/NotificationReceived
struct NotificationReceived_t3679537625;
// OneSignal/OnPostNotificationSuccess
struct OnPostNotificationSuccess_t356380508;
// OneSignal/OnPostNotificationFailure
struct OnPostNotificationFailure_t3132852631;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_OneSignal_LOG_LEVEL1880994248.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OneSignal
struct  OneSignal_t1921763236  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct OneSignal_t1921763236_StaticFields
{
public:
	// OneSignal/IdsAvailable OneSignal::idsAvailableDelegate
	IdsAvailable_t1175497452 * ___idsAvailableDelegate_2;
	// OneSignal/TagsReceived OneSignal::tagsReceivedDelegate
	TagsReceived_t2930470473 * ___tagsReceivedDelegate_3;
	// OneSignal/LOG_LEVEL OneSignal::logLevel
	int32_t ___logLevel_4;
	// OneSignal/LOG_LEVEL OneSignal::visualLogLevel
	int32_t ___visualLogLevel_5;
	// OneSignalPlatform OneSignal::oneSignalPlatform
	Il2CppObject * ___oneSignalPlatform_6;
	// System.Boolean OneSignal::initialized
	bool ___initialized_7;
	// OneSignal/NotificationReceived OneSignal::notificationDelegate
	NotificationReceived_t3679537625 * ___notificationDelegate_8;
	// OneSignal/OnPostNotificationSuccess OneSignal::postNotificationSuccessDelegate
	OnPostNotificationSuccess_t356380508 * ___postNotificationSuccessDelegate_9;
	// OneSignal/OnPostNotificationFailure OneSignal::postNotificationFailureDelegate
	OnPostNotificationFailure_t3132852631 * ___postNotificationFailureDelegate_10;

public:
	inline static int32_t get_offset_of_idsAvailableDelegate_2() { return static_cast<int32_t>(offsetof(OneSignal_t1921763236_StaticFields, ___idsAvailableDelegate_2)); }
	inline IdsAvailable_t1175497452 * get_idsAvailableDelegate_2() const { return ___idsAvailableDelegate_2; }
	inline IdsAvailable_t1175497452 ** get_address_of_idsAvailableDelegate_2() { return &___idsAvailableDelegate_2; }
	inline void set_idsAvailableDelegate_2(IdsAvailable_t1175497452 * value)
	{
		___idsAvailableDelegate_2 = value;
		Il2CppCodeGenWriteBarrier(&___idsAvailableDelegate_2, value);
	}

	inline static int32_t get_offset_of_tagsReceivedDelegate_3() { return static_cast<int32_t>(offsetof(OneSignal_t1921763236_StaticFields, ___tagsReceivedDelegate_3)); }
	inline TagsReceived_t2930470473 * get_tagsReceivedDelegate_3() const { return ___tagsReceivedDelegate_3; }
	inline TagsReceived_t2930470473 ** get_address_of_tagsReceivedDelegate_3() { return &___tagsReceivedDelegate_3; }
	inline void set_tagsReceivedDelegate_3(TagsReceived_t2930470473 * value)
	{
		___tagsReceivedDelegate_3 = value;
		Il2CppCodeGenWriteBarrier(&___tagsReceivedDelegate_3, value);
	}

	inline static int32_t get_offset_of_logLevel_4() { return static_cast<int32_t>(offsetof(OneSignal_t1921763236_StaticFields, ___logLevel_4)); }
	inline int32_t get_logLevel_4() const { return ___logLevel_4; }
	inline int32_t* get_address_of_logLevel_4() { return &___logLevel_4; }
	inline void set_logLevel_4(int32_t value)
	{
		___logLevel_4 = value;
	}

	inline static int32_t get_offset_of_visualLogLevel_5() { return static_cast<int32_t>(offsetof(OneSignal_t1921763236_StaticFields, ___visualLogLevel_5)); }
	inline int32_t get_visualLogLevel_5() const { return ___visualLogLevel_5; }
	inline int32_t* get_address_of_visualLogLevel_5() { return &___visualLogLevel_5; }
	inline void set_visualLogLevel_5(int32_t value)
	{
		___visualLogLevel_5 = value;
	}

	inline static int32_t get_offset_of_oneSignalPlatform_6() { return static_cast<int32_t>(offsetof(OneSignal_t1921763236_StaticFields, ___oneSignalPlatform_6)); }
	inline Il2CppObject * get_oneSignalPlatform_6() const { return ___oneSignalPlatform_6; }
	inline Il2CppObject ** get_address_of_oneSignalPlatform_6() { return &___oneSignalPlatform_6; }
	inline void set_oneSignalPlatform_6(Il2CppObject * value)
	{
		___oneSignalPlatform_6 = value;
		Il2CppCodeGenWriteBarrier(&___oneSignalPlatform_6, value);
	}

	inline static int32_t get_offset_of_initialized_7() { return static_cast<int32_t>(offsetof(OneSignal_t1921763236_StaticFields, ___initialized_7)); }
	inline bool get_initialized_7() const { return ___initialized_7; }
	inline bool* get_address_of_initialized_7() { return &___initialized_7; }
	inline void set_initialized_7(bool value)
	{
		___initialized_7 = value;
	}

	inline static int32_t get_offset_of_notificationDelegate_8() { return static_cast<int32_t>(offsetof(OneSignal_t1921763236_StaticFields, ___notificationDelegate_8)); }
	inline NotificationReceived_t3679537625 * get_notificationDelegate_8() const { return ___notificationDelegate_8; }
	inline NotificationReceived_t3679537625 ** get_address_of_notificationDelegate_8() { return &___notificationDelegate_8; }
	inline void set_notificationDelegate_8(NotificationReceived_t3679537625 * value)
	{
		___notificationDelegate_8 = value;
		Il2CppCodeGenWriteBarrier(&___notificationDelegate_8, value);
	}

	inline static int32_t get_offset_of_postNotificationSuccessDelegate_9() { return static_cast<int32_t>(offsetof(OneSignal_t1921763236_StaticFields, ___postNotificationSuccessDelegate_9)); }
	inline OnPostNotificationSuccess_t356380508 * get_postNotificationSuccessDelegate_9() const { return ___postNotificationSuccessDelegate_9; }
	inline OnPostNotificationSuccess_t356380508 ** get_address_of_postNotificationSuccessDelegate_9() { return &___postNotificationSuccessDelegate_9; }
	inline void set_postNotificationSuccessDelegate_9(OnPostNotificationSuccess_t356380508 * value)
	{
		___postNotificationSuccessDelegate_9 = value;
		Il2CppCodeGenWriteBarrier(&___postNotificationSuccessDelegate_9, value);
	}

	inline static int32_t get_offset_of_postNotificationFailureDelegate_10() { return static_cast<int32_t>(offsetof(OneSignal_t1921763236_StaticFields, ___postNotificationFailureDelegate_10)); }
	inline OnPostNotificationFailure_t3132852631 * get_postNotificationFailureDelegate_10() const { return ___postNotificationFailureDelegate_10; }
	inline OnPostNotificationFailure_t3132852631 ** get_address_of_postNotificationFailureDelegate_10() { return &___postNotificationFailureDelegate_10; }
	inline void set_postNotificationFailureDelegate_10(OnPostNotificationFailure_t3132852631 * value)
	{
		___postNotificationFailureDelegate_10 = value;
		Il2CppCodeGenWriteBarrier(&___postNotificationFailureDelegate_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
