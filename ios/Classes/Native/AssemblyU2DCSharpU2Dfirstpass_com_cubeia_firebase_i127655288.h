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
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.SystemMessagePacket
struct  SystemMessagePacket_t127655288  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.SystemMessagePacket::type
	int32_t ___type_1;
	// System.Int32 com.cubeia.firebase.io.protocol.SystemMessagePacket::level
	int32_t ___level_2;
	// System.String com.cubeia.firebase.io.protocol.SystemMessagePacket::message
	String_t* ___message_3;
	// System.Int32[] com.cubeia.firebase.io.protocol.SystemMessagePacket::pids
	Int32U5BU5D_t3030399641* ___pids_4;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemMessagePacket_t127655288, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(SystemMessagePacket_t127655288, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(SystemMessagePacket_t127655288, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}

	inline static int32_t get_offset_of_pids_4() { return static_cast<int32_t>(offsetof(SystemMessagePacket_t127655288, ___pids_4)); }
	inline Int32U5BU5D_t3030399641* get_pids_4() const { return ___pids_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_pids_4() { return &___pids_4; }
	inline void set_pids_4(Int32U5BU5D_t3030399641* value)
	{
		___pids_4 = value;
		Il2CppCodeGenWriteBarrier(&___pids_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
