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

// com.cubeia.firebase.io.protocol.GoodPacket
struct  GoodPacket_t2437929481  : public Il2CppObject
{
public:
	// System.Byte com.cubeia.firebase.io.protocol.GoodPacket::cmd
	uint8_t ___cmd_1;
	// System.Int32 com.cubeia.firebase.io.protocol.GoodPacket::extra
	int32_t ___extra_2;

public:
	inline static int32_t get_offset_of_cmd_1() { return static_cast<int32_t>(offsetof(GoodPacket_t2437929481, ___cmd_1)); }
	inline uint8_t get_cmd_1() const { return ___cmd_1; }
	inline uint8_t* get_address_of_cmd_1() { return &___cmd_1; }
	inline void set_cmd_1(uint8_t value)
	{
		___cmd_1 = value;
	}

	inline static int32_t get_offset_of_extra_2() { return static_cast<int32_t>(offsetof(GoodPacket_t2437929481, ___extra_2)); }
	inline int32_t get_extra_2() const { return ___extra_2; }
	inline int32_t* get_address_of_extra_2() { return &___extra_2; }
	inline void set_extra_2(int32_t value)
	{
		___extra_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
