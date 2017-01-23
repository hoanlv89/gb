#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MessageLog
struct MessageLog_t3931894325;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// ChatLogAdapter
struct ChatLogAdapter_t2080719671;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessageLog
struct  MessageLog_t3931894325  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> MessageLog::messagesList
	List_1_t1398341365 * ___messagesList_1;
	// System.Collections.Generic.List`1<System.String> MessageLog::debugsList
	List_1_t1398341365 * ___debugsList_2;
	// System.Collections.Generic.List`1<System.String> MessageLog::allDebugsList
	List_1_t1398341365 * ___allDebugsList_3;
	// ChatLogAdapter MessageLog::chatLogAdapter
	ChatLogAdapter_t2080719671 * ___chatLogAdapter_4;

public:
	inline static int32_t get_offset_of_messagesList_1() { return static_cast<int32_t>(offsetof(MessageLog_t3931894325, ___messagesList_1)); }
	inline List_1_t1398341365 * get_messagesList_1() const { return ___messagesList_1; }
	inline List_1_t1398341365 ** get_address_of_messagesList_1() { return &___messagesList_1; }
	inline void set_messagesList_1(List_1_t1398341365 * value)
	{
		___messagesList_1 = value;
		Il2CppCodeGenWriteBarrier(&___messagesList_1, value);
	}

	inline static int32_t get_offset_of_debugsList_2() { return static_cast<int32_t>(offsetof(MessageLog_t3931894325, ___debugsList_2)); }
	inline List_1_t1398341365 * get_debugsList_2() const { return ___debugsList_2; }
	inline List_1_t1398341365 ** get_address_of_debugsList_2() { return &___debugsList_2; }
	inline void set_debugsList_2(List_1_t1398341365 * value)
	{
		___debugsList_2 = value;
		Il2CppCodeGenWriteBarrier(&___debugsList_2, value);
	}

	inline static int32_t get_offset_of_allDebugsList_3() { return static_cast<int32_t>(offsetof(MessageLog_t3931894325, ___allDebugsList_3)); }
	inline List_1_t1398341365 * get_allDebugsList_3() const { return ___allDebugsList_3; }
	inline List_1_t1398341365 ** get_address_of_allDebugsList_3() { return &___allDebugsList_3; }
	inline void set_allDebugsList_3(List_1_t1398341365 * value)
	{
		___allDebugsList_3 = value;
		Il2CppCodeGenWriteBarrier(&___allDebugsList_3, value);
	}

	inline static int32_t get_offset_of_chatLogAdapter_4() { return static_cast<int32_t>(offsetof(MessageLog_t3931894325, ___chatLogAdapter_4)); }
	inline ChatLogAdapter_t2080719671 * get_chatLogAdapter_4() const { return ___chatLogAdapter_4; }
	inline ChatLogAdapter_t2080719671 ** get_address_of_chatLogAdapter_4() { return &___chatLogAdapter_4; }
	inline void set_chatLogAdapter_4(ChatLogAdapter_t2080719671 * value)
	{
		___chatLogAdapter_4 = value;
		Il2CppCodeGenWriteBarrier(&___chatLogAdapter_4, value);
	}
};

struct MessageLog_t3931894325_StaticFields
{
public:
	// MessageLog MessageLog::mInstance
	MessageLog_t3931894325 * ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(MessageLog_t3931894325_StaticFields, ___mInstance_0)); }
	inline MessageLog_t3931894325 * get_mInstance_0() const { return ___mInstance_0; }
	inline MessageLog_t3931894325 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(MessageLog_t3931894325 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
