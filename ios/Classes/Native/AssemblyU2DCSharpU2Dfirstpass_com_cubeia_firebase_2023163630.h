#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.NotifyLeavePacket
struct  NotifyLeavePacket_t2023163630  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.NotifyLeavePacket::tableid
	int32_t ___tableid_1;
	// System.Int32 com.cubeia.firebase.io.protocol.NotifyLeavePacket::pid
	int32_t ___pid_2;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(NotifyLeavePacket_t2023163630, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_pid_2() { return static_cast<int32_t>(offsetof(NotifyLeavePacket_t2023163630, ___pid_2)); }
	inline int32_t get_pid_2() const { return ___pid_2; }
	inline int32_t* get_address_of_pid_2() { return &___pid_2; }
	inline void set_pid_2(int32_t value)
	{
		___pid_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
