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
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_BaseIOSPopup3320937364.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSMessage
struct  IOSMessage_t2569463336  : public BaseIOSPopup_t3320937364
{
public:
	// System.String IOSMessage::ok
	String_t* ___ok_4;
	// System.Action IOSMessage::OnComplete
	Action_t3226471752 * ___OnComplete_5;

public:
	inline static int32_t get_offset_of_ok_4() { return static_cast<int32_t>(offsetof(IOSMessage_t2569463336, ___ok_4)); }
	inline String_t* get_ok_4() const { return ___ok_4; }
	inline String_t** get_address_of_ok_4() { return &___ok_4; }
	inline void set_ok_4(String_t* value)
	{
		___ok_4 = value;
		Il2CppCodeGenWriteBarrier(&___ok_4, value);
	}

	inline static int32_t get_offset_of_OnComplete_5() { return static_cast<int32_t>(offsetof(IOSMessage_t2569463336, ___OnComplete_5)); }
	inline Action_t3226471752 * get_OnComplete_5() const { return ___OnComplete_5; }
	inline Action_t3226471752 ** get_address_of_OnComplete_5() { return &___OnComplete_5; }
	inline void set_OnComplete_5(Action_t3226471752 * value)
	{
		___OnComplete_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_5, value);
	}
};

struct IOSMessage_t2569463336_StaticFields
{
public:
	// System.Action IOSMessage::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(IOSMessage_t2569463336_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
