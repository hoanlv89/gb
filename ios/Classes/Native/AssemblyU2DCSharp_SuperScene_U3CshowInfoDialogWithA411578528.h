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
// SDialog
struct SDialog_t1510781833;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SuperScene/<showInfoDialogWithAction>c__AnonStorey6
struct  U3CshowInfoDialogWithActionU3Ec__AnonStorey6_t411578528  : public Il2CppObject
{
public:
	// Utils/Executor SuperScene/<showInfoDialogWithAction>c__AnonStorey6::action
	Executor_t2576254565 * ___action_0;
	// SDialog SuperScene/<showInfoDialogWithAction>c__AnonStorey6::dialog
	SDialog_t1510781833 * ___dialog_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CshowInfoDialogWithActionU3Ec__AnonStorey6_t411578528, ___action_0)); }
	inline Executor_t2576254565 * get_action_0() const { return ___action_0; }
	inline Executor_t2576254565 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Executor_t2576254565 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_dialog_1() { return static_cast<int32_t>(offsetof(U3CshowInfoDialogWithActionU3Ec__AnonStorey6_t411578528, ___dialog_1)); }
	inline SDialog_t1510781833 * get_dialog_1() const { return ___dialog_1; }
	inline SDialog_t1510781833 ** get_address_of_dialog_1() { return &___dialog_1; }
	inline void set_dialog_1(SDialog_t1510781833 * value)
	{
		___dialog_1 = value;
		Il2CppCodeGenWriteBarrier(&___dialog_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
