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

// com.cubeia.firebase.io.protocol.FilteredJoinTableAvailablePacket
struct  FilteredJoinTableAvailablePacket_t3882758458  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.FilteredJoinTableAvailablePacket::seq
	int32_t ___seq_1;
	// System.Int32 com.cubeia.firebase.io.protocol.FilteredJoinTableAvailablePacket::tableid
	int32_t ___tableid_2;
	// System.Byte com.cubeia.firebase.io.protocol.FilteredJoinTableAvailablePacket::seat
	uint8_t ___seat_3;

public:
	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(FilteredJoinTableAvailablePacket_t3882758458, ___seq_1)); }
	inline int32_t get_seq_1() const { return ___seq_1; }
	inline int32_t* get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(int32_t value)
	{
		___seq_1 = value;
	}

	inline static int32_t get_offset_of_tableid_2() { return static_cast<int32_t>(offsetof(FilteredJoinTableAvailablePacket_t3882758458, ___tableid_2)); }
	inline int32_t get_tableid_2() const { return ___tableid_2; }
	inline int32_t* get_address_of_tableid_2() { return &___tableid_2; }
	inline void set_tableid_2(int32_t value)
	{
		___tableid_2 = value;
	}

	inline static int32_t get_offset_of_seat_3() { return static_cast<int32_t>(offsetof(FilteredJoinTableAvailablePacket_t3882758458, ___seat_3)); }
	inline uint8_t get_seat_3() const { return ___seat_3; }
	inline uint8_t* get_address_of_seat_3() { return &___seat_3; }
	inline void set_seat_3(uint8_t value)
	{
		___seat_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
