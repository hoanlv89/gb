#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgChat
struct MsgChat_t2297980609;
// ChatRoom
struct ChatRoom_t3954744523;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatRoom/<addItem>c__AnonStorey0
struct  U3CaddItemU3Ec__AnonStorey0_t1307777825  : public Il2CppObject
{
public:
	// MsgChat ChatRoom/<addItem>c__AnonStorey0::msgChat
	MsgChat_t2297980609 * ___msgChat_0;
	// ChatRoom ChatRoom/<addItem>c__AnonStorey0::$this
	ChatRoom_t3954744523 * ___U24this_1;

public:
	inline static int32_t get_offset_of_msgChat_0() { return static_cast<int32_t>(offsetof(U3CaddItemU3Ec__AnonStorey0_t1307777825, ___msgChat_0)); }
	inline MsgChat_t2297980609 * get_msgChat_0() const { return ___msgChat_0; }
	inline MsgChat_t2297980609 ** get_address_of_msgChat_0() { return &___msgChat_0; }
	inline void set_msgChat_0(MsgChat_t2297980609 * value)
	{
		___msgChat_0 = value;
		Il2CppCodeGenWriteBarrier(&___msgChat_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CaddItemU3Ec__AnonStorey0_t1307777825, ___U24this_1)); }
	inline ChatRoom_t3954744523 * get_U24this_1() const { return ___U24this_1; }
	inline ChatRoom_t3954744523 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ChatRoom_t3954744523 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
