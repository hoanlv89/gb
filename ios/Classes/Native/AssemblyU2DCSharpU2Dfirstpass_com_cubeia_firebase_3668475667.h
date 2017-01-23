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

// com.cubeia.firebase.io.protocol.KickPlayerPacket
struct  KickPlayerPacket_t3668475667  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.KickPlayerPacket::tableid
	int32_t ___tableid_1;
	// System.Int16 com.cubeia.firebase.io.protocol.KickPlayerPacket::reasonCode
	int16_t ___reasonCode_2;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(KickPlayerPacket_t3668475667, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_reasonCode_2() { return static_cast<int32_t>(offsetof(KickPlayerPacket_t3668475667, ___reasonCode_2)); }
	inline int16_t get_reasonCode_2() const { return ___reasonCode_2; }
	inline int16_t* get_address_of_reasonCode_2() { return &___reasonCode_2; }
	inline void set_reasonCode_2(int16_t value)
	{
		___reasonCode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
