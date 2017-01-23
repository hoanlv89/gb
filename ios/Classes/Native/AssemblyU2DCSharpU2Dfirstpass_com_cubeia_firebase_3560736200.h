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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.NotifyChannelChatPacket
struct  NotifyChannelChatPacket_t3560736200  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.NotifyChannelChatPacket::pid
	int32_t ___pid_1;
	// System.Int32 com.cubeia.firebase.io.protocol.NotifyChannelChatPacket::channelid
	int32_t ___channelid_2;
	// System.Int32 com.cubeia.firebase.io.protocol.NotifyChannelChatPacket::targetid
	int32_t ___targetid_3;
	// System.String com.cubeia.firebase.io.protocol.NotifyChannelChatPacket::nick
	String_t* ___nick_4;
	// System.String com.cubeia.firebase.io.protocol.NotifyChannelChatPacket::message
	String_t* ___message_5;

public:
	inline static int32_t get_offset_of_pid_1() { return static_cast<int32_t>(offsetof(NotifyChannelChatPacket_t3560736200, ___pid_1)); }
	inline int32_t get_pid_1() const { return ___pid_1; }
	inline int32_t* get_address_of_pid_1() { return &___pid_1; }
	inline void set_pid_1(int32_t value)
	{
		___pid_1 = value;
	}

	inline static int32_t get_offset_of_channelid_2() { return static_cast<int32_t>(offsetof(NotifyChannelChatPacket_t3560736200, ___channelid_2)); }
	inline int32_t get_channelid_2() const { return ___channelid_2; }
	inline int32_t* get_address_of_channelid_2() { return &___channelid_2; }
	inline void set_channelid_2(int32_t value)
	{
		___channelid_2 = value;
	}

	inline static int32_t get_offset_of_targetid_3() { return static_cast<int32_t>(offsetof(NotifyChannelChatPacket_t3560736200, ___targetid_3)); }
	inline int32_t get_targetid_3() const { return ___targetid_3; }
	inline int32_t* get_address_of_targetid_3() { return &___targetid_3; }
	inline void set_targetid_3(int32_t value)
	{
		___targetid_3 = value;
	}

	inline static int32_t get_offset_of_nick_4() { return static_cast<int32_t>(offsetof(NotifyChannelChatPacket_t3560736200, ___nick_4)); }
	inline String_t* get_nick_4() const { return ___nick_4; }
	inline String_t** get_address_of_nick_4() { return &___nick_4; }
	inline void set_nick_4(String_t* value)
	{
		___nick_4 = value;
		Il2CppCodeGenWriteBarrier(&___nick_4, value);
	}

	inline static int32_t get_offset_of_message_5() { return static_cast<int32_t>(offsetof(NotifyChannelChatPacket_t3560736200, ___message_5)); }
	inline String_t* get_message_5() const { return ___message_5; }
	inline String_t** get_address_of_message_5() { return &___message_5; }
	inline void set_message_5(String_t* value)
	{
		___message_5 = value;
		Il2CppCodeGenWriteBarrier(&___message_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
