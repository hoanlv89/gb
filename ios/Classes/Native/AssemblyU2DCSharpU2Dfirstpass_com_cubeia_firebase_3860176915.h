#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.JoinRequestPacket
struct  JoinRequestPacket_t3860176915  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.JoinRequestPacket::tableid
	int32_t ___tableid_1;
	// System.Byte com.cubeia.firebase.io.protocol.JoinRequestPacket::seat
	uint8_t ___seat_2;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param> com.cubeia.firebase.io.protocol.JoinRequestPacket::parameters
	List_1_t890982683 * ___parameters_3;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(JoinRequestPacket_t3860176915, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_seat_2() { return static_cast<int32_t>(offsetof(JoinRequestPacket_t3860176915, ___seat_2)); }
	inline uint8_t get_seat_2() const { return ___seat_2; }
	inline uint8_t* get_address_of_seat_2() { return &___seat_2; }
	inline void set_seat_2(uint8_t value)
	{
		___seat_2 = value;
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(JoinRequestPacket_t3860176915, ___parameters_3)); }
	inline List_1_t890982683 * get_parameters_3() const { return ___parameters_3; }
	inline List_1_t890982683 ** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(List_1_t890982683 * value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
