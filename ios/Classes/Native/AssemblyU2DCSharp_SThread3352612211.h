#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<SThread>
struct List_1_t2721733343;
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_ThreadedJob351272988.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SThread
struct  SThread_t3352612211  : public ThreadedJob_t351272988
{
public:
	// System.Action SThread::action
	Action_t3226471752 * ___action_4;

public:
	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SThread_t3352612211, ___action_4)); }
	inline Action_t3226471752 * get_action_4() const { return ___action_4; }
	inline Action_t3226471752 ** get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(Action_t3226471752 * value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier(&___action_4, value);
	}
};

struct SThread_t3352612211_StaticFields
{
public:
	// System.Collections.Generic.List`1<SThread> SThread::threadList
	List_1_t2721733343 * ___threadList_3;

public:
	inline static int32_t get_offset_of_threadList_3() { return static_cast<int32_t>(offsetof(SThread_t3352612211_StaticFields, ___threadList_3)); }
	inline List_1_t2721733343 * get_threadList_3() const { return ___threadList_3; }
	inline List_1_t2721733343 ** get_address_of_threadList_3() { return &___threadList_3; }
	inline void set_threadList_3(List_1_t2721733343 * value)
	{
		___threadList_3 = value;
		Il2CppCodeGenWriteBarrier(&___threadList_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
