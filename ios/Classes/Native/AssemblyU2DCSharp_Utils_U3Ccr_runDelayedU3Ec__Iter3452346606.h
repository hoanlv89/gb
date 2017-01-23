#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Utils/Executor
struct Executor_t2576254565;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils/<cr_runDelayed>c__Iterator0
struct  U3Ccr_runDelayedU3Ec__Iterator0_t3452346606  : public Il2CppObject
{
public:
	// System.Single Utils/<cr_runDelayed>c__Iterator0::delayingTime
	float ___delayingTime_0;
	// Utils/Executor Utils/<cr_runDelayed>c__Iterator0::exe
	Executor_t2576254565 * ___exe_1;
	// System.Object Utils/<cr_runDelayed>c__Iterator0::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean Utils/<cr_runDelayed>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Utils/<cr_runDelayed>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_delayingTime_0() { return static_cast<int32_t>(offsetof(U3Ccr_runDelayedU3Ec__Iterator0_t3452346606, ___delayingTime_0)); }
	inline float get_delayingTime_0() const { return ___delayingTime_0; }
	inline float* get_address_of_delayingTime_0() { return &___delayingTime_0; }
	inline void set_delayingTime_0(float value)
	{
		___delayingTime_0 = value;
	}

	inline static int32_t get_offset_of_exe_1() { return static_cast<int32_t>(offsetof(U3Ccr_runDelayedU3Ec__Iterator0_t3452346606, ___exe_1)); }
	inline Executor_t2576254565 * get_exe_1() const { return ___exe_1; }
	inline Executor_t2576254565 ** get_address_of_exe_1() { return &___exe_1; }
	inline void set_exe_1(Executor_t2576254565 * value)
	{
		___exe_1 = value;
		Il2CppCodeGenWriteBarrier(&___exe_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3Ccr_runDelayedU3Ec__Iterator0_t3452346606, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3Ccr_runDelayedU3Ec__Iterator0_t3452346606, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3Ccr_runDelayedU3Ec__Iterator0_t3452346606, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
