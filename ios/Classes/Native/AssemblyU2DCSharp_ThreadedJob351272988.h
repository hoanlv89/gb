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
// System.Threading.Thread
struct Thread_t241561612;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThreadedJob
struct  ThreadedJob_t351272988  : public Il2CppObject
{
public:
	// System.Boolean ThreadedJob::m_IsDone
	bool ___m_IsDone_0;
	// System.Object ThreadedJob::m_Handle
	Il2CppObject * ___m_Handle_1;
	// System.Threading.Thread ThreadedJob::m_Thread
	Thread_t241561612 * ___m_Thread_2;

public:
	inline static int32_t get_offset_of_m_IsDone_0() { return static_cast<int32_t>(offsetof(ThreadedJob_t351272988, ___m_IsDone_0)); }
	inline bool get_m_IsDone_0() const { return ___m_IsDone_0; }
	inline bool* get_address_of_m_IsDone_0() { return &___m_IsDone_0; }
	inline void set_m_IsDone_0(bool value)
	{
		___m_IsDone_0 = value;
	}

	inline static int32_t get_offset_of_m_Handle_1() { return static_cast<int32_t>(offsetof(ThreadedJob_t351272988, ___m_Handle_1)); }
	inline Il2CppObject * get_m_Handle_1() const { return ___m_Handle_1; }
	inline Il2CppObject ** get_address_of_m_Handle_1() { return &___m_Handle_1; }
	inline void set_m_Handle_1(Il2CppObject * value)
	{
		___m_Handle_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Handle_1, value);
	}

	inline static int32_t get_offset_of_m_Thread_2() { return static_cast<int32_t>(offsetof(ThreadedJob_t351272988, ___m_Thread_2)); }
	inline Thread_t241561612 * get_m_Thread_2() const { return ___m_Thread_2; }
	inline Thread_t241561612 ** get_address_of_m_Thread_2() { return &___m_Thread_2; }
	inline void set_m_Thread_2(Thread_t241561612 * value)
	{
		___m_Thread_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Thread_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
