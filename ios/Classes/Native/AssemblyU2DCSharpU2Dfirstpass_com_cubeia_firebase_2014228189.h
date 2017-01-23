#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.NotifyRegisteredPacket
struct  NotifyRegisteredPacket_t2014228189  : public Il2CppObject
{
public:
	// System.Int32[] com.cubeia.firebase.io.protocol.NotifyRegisteredPacket::tournaments
	Int32U5BU5D_t3030399641* ___tournaments_1;

public:
	inline static int32_t get_offset_of_tournaments_1() { return static_cast<int32_t>(offsetof(NotifyRegisteredPacket_t2014228189, ___tournaments_1)); }
	inline Int32U5BU5D_t3030399641* get_tournaments_1() const { return ___tournaments_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_tournaments_1() { return &___tournaments_1; }
	inline void set_tournaments_1(Int32U5BU5D_t3030399641* value)
	{
		___tournaments_1 = value;
		Il2CppCodeGenWriteBarrier(&___tournaments_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
