#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<Spine.TrackEntry>
struct Stack_1_t898824169;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Pool`1<Spine.TrackEntry>
struct  Pool_1_t428500383  : public Il2CppObject
{
public:
	// System.Int32 Spine.Pool`1::max
	int32_t ___max_0;
	// System.Collections.Generic.Stack`1<T> Spine.Pool`1::freeObjects
	Stack_1_t898824169 * ___freeObjects_1;
	// System.Int32 Spine.Pool`1::<Peak>k__BackingField
	int32_t ___U3CPeakU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_max_0() { return static_cast<int32_t>(offsetof(Pool_1_t428500383, ___max_0)); }
	inline int32_t get_max_0() const { return ___max_0; }
	inline int32_t* get_address_of_max_0() { return &___max_0; }
	inline void set_max_0(int32_t value)
	{
		___max_0 = value;
	}

	inline static int32_t get_offset_of_freeObjects_1() { return static_cast<int32_t>(offsetof(Pool_1_t428500383, ___freeObjects_1)); }
	inline Stack_1_t898824169 * get_freeObjects_1() const { return ___freeObjects_1; }
	inline Stack_1_t898824169 ** get_address_of_freeObjects_1() { return &___freeObjects_1; }
	inline void set_freeObjects_1(Stack_1_t898824169 * value)
	{
		___freeObjects_1 = value;
		Il2CppCodeGenWriteBarrier(&___freeObjects_1, value);
	}

	inline static int32_t get_offset_of_U3CPeakU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Pool_1_t428500383, ___U3CPeakU3Ek__BackingField_2)); }
	inline int32_t get_U3CPeakU3Ek__BackingField_2() const { return ___U3CPeakU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPeakU3Ek__BackingField_2() { return &___U3CPeakU3Ek__BackingField_2; }
	inline void set_U3CPeakU3Ek__BackingField_2(int32_t value)
	{
		___U3CPeakU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
