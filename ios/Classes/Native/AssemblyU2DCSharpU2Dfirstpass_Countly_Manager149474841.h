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
// Countly.DeviceInfo
struct DeviceInfo_t2438887176;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// Countly.Queue
struct Queue_t1840538479;
// System.Collections.Generic.List`1<Countly.Event>
struct List_1_t161184814;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Countly.Manager
struct  Manager_t149474841  : public MonoBehaviour_t1158329972
{
public:
	// System.String Countly.Manager::appHost
	String_t* ___appHost_2;
	// System.String Countly.Manager::appKey
	String_t* ___appKey_3;
	// System.Boolean Countly.Manager::allowDebug
	bool ___allowDebug_4;
	// System.Single Countly.Manager::updateInterval
	float ___updateInterval_5;
	// System.Int32 Countly.Manager::eventSendThreshold
	int32_t ___eventSendThreshold_6;
	// System.Int32 Countly.Manager::queueLimit
	int32_t ___queueLimit_7;
	// System.Boolean Countly.Manager::queueUsesStorage
	bool ___queueUsesStorage_8;
	// Countly.DeviceInfo Countly.Manager::_deviceInfo
	DeviceInfo_t2438887176 * ____deviceInfo_10;
	// System.Boolean Countly.Manager::_isReady
	bool ____isReady_11;
	// System.Boolean Countly.Manager::_isRunning
	bool ____isRunning_12;
	// System.Boolean Countly.Manager::_isSuspended
	bool ____isSuspended_13;
	// System.Double Countly.Manager::_sessionLastSentAt
	double ____sessionLastSentAt_14;
	// System.Double Countly.Manager::_unsentSessionLength
	double ____unsentSessionLength_15;
	// System.Text.StringBuilder Countly.Manager::_connectionStringBuilder
	StringBuilder_t1221177846 * ____connectionStringBuilder_16;
	// System.Boolean Countly.Manager::_isProcessingConnection
	bool ____isProcessingConnection_17;
	// Countly.Queue Countly.Manager::_connectionQueue
	Queue_t1840538479 * ____connectionQueue_18;
	// System.Text.StringBuilder Countly.Manager::_eventStringBuilder
	StringBuilder_t1221177846 * ____eventStringBuilder_19;
	// System.Collections.Generic.List`1<Countly.Event> Countly.Manager::_eventQueue
	List_1_t161184814 * ____eventQueue_20;

public:
	inline static int32_t get_offset_of_appHost_2() { return static_cast<int32_t>(offsetof(Manager_t149474841, ___appHost_2)); }
	inline String_t* get_appHost_2() const { return ___appHost_2; }
	inline String_t** get_address_of_appHost_2() { return &___appHost_2; }
	inline void set_appHost_2(String_t* value)
	{
		___appHost_2 = value;
		Il2CppCodeGenWriteBarrier(&___appHost_2, value);
	}

	inline static int32_t get_offset_of_appKey_3() { return static_cast<int32_t>(offsetof(Manager_t149474841, ___appKey_3)); }
	inline String_t* get_appKey_3() const { return ___appKey_3; }
	inline String_t** get_address_of_appKey_3() { return &___appKey_3; }
	inline void set_appKey_3(String_t* value)
	{
		___appKey_3 = value;
		Il2CppCodeGenWriteBarrier(&___appKey_3, value);
	}

	inline static int32_t get_offset_of_allowDebug_4() { return static_cast<int32_t>(offsetof(Manager_t149474841, ___allowDebug_4)); }
	inline bool get_allowDebug_4() const { return ___allowDebug_4; }
	inline bool* get_address_of_allowDebug_4() { return &___allowDebug_4; }
	inline void set_allowDebug_4(bool value)
	{
		___allowDebug_4 = value;
	}

	inline static int32_t get_offset_of_updateInterval_5() { return static_cast<int32_t>(offsetof(Manager_t149474841, ___updateInterval_5)); }
	inline float get_updateInterval_5() const { return ___updateInterval_5; }
	inline float* get_address_of_updateInterval_5() { return &___updateInterval_5; }
	inline void set_updateInterval_5(float value)
	{
		___updateInterval_5 = value;
	}

	inline static int32_t get_offset_of_eventSendThreshold_6() { return static_cast<int32_t>(offsetof(Manager_t149474841, ___eventSendThreshold_6)); }
	inline int32_t get_eventSendThreshold_6() const { return ___eventSendThreshold_6; }
	inline int32_t* get_address_of_eventSendThreshold_6() { return &___eventSendThreshold_6; }
	inline void set_eventSendThreshold_6(int32_t value)
	{
		___eventSendThreshold_6 = value;
	}

	inline static int32_t get_offset_of_queueLimit_7() { return static_cast<int32_t>(offsetof(Manager_t149474841, ___queueLimit_7)); }
	inline int32_t get_queueLimit_7() const { return ___queueLimit_7; }
	inline int32_t* get_address_of_queueLimit_7() { return &___queueLimit_7; }
	inline void set_queueLimit_7(int32_t value)
	{
		___queueLimit_7 = value;
	}

	inline static int32_t get_offset_of_queueUsesStorage_8() { return static_cast<int32_t>(offsetof(Manager_t149474841, ___queueUsesStorage_8)); }
	inline bool get_queueUsesStorage_8() const { return ___queueUsesStorage_8; }
	inline bool* get_address_of_queueUsesStorage_8() { return &___queueUsesStorage_8; }
	inline void set_queueUsesStorage_8(bool value)
	{
		___queueUsesStorage_8 = value;
	}

	inline static int32_t get_offset_of__deviceInfo_10() { return static_cast<int32_t>(offsetof(Manager_t149474841, ____deviceInfo_10)); }
	inline DeviceInfo_t2438887176 * get__deviceInfo_10() const { return ____deviceInfo_10; }
	inline DeviceInfo_t2438887176 ** get_address_of__deviceInfo_10() { return &____deviceInfo_10; }
	inline void set__deviceInfo_10(DeviceInfo_t2438887176 * value)
	{
		____deviceInfo_10 = value;
		Il2CppCodeGenWriteBarrier(&____deviceInfo_10, value);
	}

	inline static int32_t get_offset_of__isReady_11() { return static_cast<int32_t>(offsetof(Manager_t149474841, ____isReady_11)); }
	inline bool get__isReady_11() const { return ____isReady_11; }
	inline bool* get_address_of__isReady_11() { return &____isReady_11; }
	inline void set__isReady_11(bool value)
	{
		____isReady_11 = value;
	}

	inline static int32_t get_offset_of__isRunning_12() { return static_cast<int32_t>(offsetof(Manager_t149474841, ____isRunning_12)); }
	inline bool get__isRunning_12() const { return ____isRunning_12; }
	inline bool* get_address_of__isRunning_12() { return &____isRunning_12; }
	inline void set__isRunning_12(bool value)
	{
		____isRunning_12 = value;
	}

	inline static int32_t get_offset_of__isSuspended_13() { return static_cast<int32_t>(offsetof(Manager_t149474841, ____isSuspended_13)); }
	inline bool get__isSuspended_13() const { return ____isSuspended_13; }
	inline bool* get_address_of__isSuspended_13() { return &____isSuspended_13; }
	inline void set__isSuspended_13(bool value)
	{
		____isSuspended_13 = value;
	}

	inline static int32_t get_offset_of__sessionLastSentAt_14() { return static_cast<int32_t>(offsetof(Manager_t149474841, ____sessionLastSentAt_14)); }
	inline double get__sessionLastSentAt_14() const { return ____sessionLastSentAt_14; }
	inline double* get_address_of__sessionLastSentAt_14() { return &____sessionLastSentAt_14; }
	inline void set__sessionLastSentAt_14(double value)
	{
		____sessionLastSentAt_14 = value;
	}

	inline static int32_t get_offset_of__unsentSessionLength_15() { return static_cast<int32_t>(offsetof(Manager_t149474841, ____unsentSessionLength_15)); }
	inline double get__unsentSessionLength_15() const { return ____unsentSessionLength_15; }
	inline double* get_address_of__unsentSessionLength_15() { return &____unsentSessionLength_15; }
	inline void set__unsentSessionLength_15(double value)
	{
		____unsentSessionLength_15 = value;
	}

	inline static int32_t get_offset_of__connectionStringBuilder_16() { return static_cast<int32_t>(offsetof(Manager_t149474841, ____connectionStringBuilder_16)); }
	inline StringBuilder_t1221177846 * get__connectionStringBuilder_16() const { return ____connectionStringBuilder_16; }
	inline StringBuilder_t1221177846 ** get_address_of__connectionStringBuilder_16() { return &____connectionStringBuilder_16; }
	inline void set__connectionStringBuilder_16(StringBuilder_t1221177846 * value)
	{
		____connectionStringBuilder_16 = value;
		Il2CppCodeGenWriteBarrier(&____connectionStringBuilder_16, value);
	}

	inline static int32_t get_offset_of__isProcessingConnection_17() { return static_cast<int32_t>(offsetof(Manager_t149474841, ____isProcessingConnection_17)); }
	inline bool get__isProcessingConnection_17() const { return ____isProcessingConnection_17; }
	inline bool* get_address_of__isProcessingConnection_17() { return &____isProcessingConnection_17; }
	inline void set__isProcessingConnection_17(bool value)
	{
		____isProcessingConnection_17 = value;
	}

	inline static int32_t get_offset_of__connectionQueue_18() { return static_cast<int32_t>(offsetof(Manager_t149474841, ____connectionQueue_18)); }
	inline Queue_t1840538479 * get__connectionQueue_18() const { return ____connectionQueue_18; }
	inline Queue_t1840538479 ** get_address_of__connectionQueue_18() { return &____connectionQueue_18; }
	inline void set__connectionQueue_18(Queue_t1840538479 * value)
	{
		____connectionQueue_18 = value;
		Il2CppCodeGenWriteBarrier(&____connectionQueue_18, value);
	}

	inline static int32_t get_offset_of__eventStringBuilder_19() { return static_cast<int32_t>(offsetof(Manager_t149474841, ____eventStringBuilder_19)); }
	inline StringBuilder_t1221177846 * get__eventStringBuilder_19() const { return ____eventStringBuilder_19; }
	inline StringBuilder_t1221177846 ** get_address_of__eventStringBuilder_19() { return &____eventStringBuilder_19; }
	inline void set__eventStringBuilder_19(StringBuilder_t1221177846 * value)
	{
		____eventStringBuilder_19 = value;
		Il2CppCodeGenWriteBarrier(&____eventStringBuilder_19, value);
	}

	inline static int32_t get_offset_of__eventQueue_20() { return static_cast<int32_t>(offsetof(Manager_t149474841, ____eventQueue_20)); }
	inline List_1_t161184814 * get__eventQueue_20() const { return ____eventQueue_20; }
	inline List_1_t161184814 ** get_address_of__eventQueue_20() { return &____eventQueue_20; }
	inline void set__eventQueue_20(List_1_t161184814 * value)
	{
		____eventQueue_20 = value;
		Il2CppCodeGenWriteBarrier(&____eventQueue_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
