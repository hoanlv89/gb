#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2595592884;
// UniWebViewEventProcessor
struct UniWebViewEventProcessor_t1614958127;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewEventProcessor
struct  UniWebViewEventProcessor_t1614958127  : public MonoBehaviour_t1158329972
{
public:
	// System.Object UniWebViewEventProcessor::_queueLock
	Il2CppObject * ____queueLock_2;
	// System.Collections.Generic.List`1<System.Action> UniWebViewEventProcessor::_queuedEvents
	List_1_t2595592884 * ____queuedEvents_3;
	// System.Collections.Generic.List`1<System.Action> UniWebViewEventProcessor::_executingEvents
	List_1_t2595592884 * ____executingEvents_4;

public:
	inline static int32_t get_offset_of__queueLock_2() { return static_cast<int32_t>(offsetof(UniWebViewEventProcessor_t1614958127, ____queueLock_2)); }
	inline Il2CppObject * get__queueLock_2() const { return ____queueLock_2; }
	inline Il2CppObject ** get_address_of__queueLock_2() { return &____queueLock_2; }
	inline void set__queueLock_2(Il2CppObject * value)
	{
		____queueLock_2 = value;
		Il2CppCodeGenWriteBarrier(&____queueLock_2, value);
	}

	inline static int32_t get_offset_of__queuedEvents_3() { return static_cast<int32_t>(offsetof(UniWebViewEventProcessor_t1614958127, ____queuedEvents_3)); }
	inline List_1_t2595592884 * get__queuedEvents_3() const { return ____queuedEvents_3; }
	inline List_1_t2595592884 ** get_address_of__queuedEvents_3() { return &____queuedEvents_3; }
	inline void set__queuedEvents_3(List_1_t2595592884 * value)
	{
		____queuedEvents_3 = value;
		Il2CppCodeGenWriteBarrier(&____queuedEvents_3, value);
	}

	inline static int32_t get_offset_of__executingEvents_4() { return static_cast<int32_t>(offsetof(UniWebViewEventProcessor_t1614958127, ____executingEvents_4)); }
	inline List_1_t2595592884 * get__executingEvents_4() const { return ____executingEvents_4; }
	inline List_1_t2595592884 ** get_address_of__executingEvents_4() { return &____executingEvents_4; }
	inline void set__executingEvents_4(List_1_t2595592884 * value)
	{
		____executingEvents_4 = value;
		Il2CppCodeGenWriteBarrier(&____executingEvents_4, value);
	}
};

struct UniWebViewEventProcessor_t1614958127_StaticFields
{
public:
	// UniWebViewEventProcessor UniWebViewEventProcessor::_instance
	UniWebViewEventProcessor_t1614958127 * ____instance_5;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(UniWebViewEventProcessor_t1614958127_StaticFields, ____instance_5)); }
	inline UniWebViewEventProcessor_t1614958127 * get__instance_5() const { return ____instance_5; }
	inline UniWebViewEventProcessor_t1614958127 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(UniWebViewEventProcessor_t1614958127 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier(&____instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
