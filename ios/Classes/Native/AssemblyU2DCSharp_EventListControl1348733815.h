#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventListControl
struct  EventListControl_t1348733815  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform EventListControl::EventItem
	Transform_t3275118058 * ___EventItem_2;
	// System.Int32 EventListControl::index
	int32_t ___index_3;
	// System.Collections.Generic.List`1<System.String> EventListControl::eventList
	List_1_t1398341365 * ___eventList_4;

public:
	inline static int32_t get_offset_of_EventItem_2() { return static_cast<int32_t>(offsetof(EventListControl_t1348733815, ___EventItem_2)); }
	inline Transform_t3275118058 * get_EventItem_2() const { return ___EventItem_2; }
	inline Transform_t3275118058 ** get_address_of_EventItem_2() { return &___EventItem_2; }
	inline void set_EventItem_2(Transform_t3275118058 * value)
	{
		___EventItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___EventItem_2, value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(EventListControl_t1348733815, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_eventList_4() { return static_cast<int32_t>(offsetof(EventListControl_t1348733815, ___eventList_4)); }
	inline List_1_t1398341365 * get_eventList_4() const { return ___eventList_4; }
	inline List_1_t1398341365 ** get_address_of_eventList_4() { return &___eventList_4; }
	inline void set_eventList_4(List_1_t1398341365 * value)
	{
		___eventList_4 = value;
		Il2CppCodeGenWriteBarrier(&___eventList_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
