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
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.ParamFilter>
struct List_1_t3525839661;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket
struct  FilteredJoinTableRequestPacket_t3677074662  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket::seq
	int32_t ___seq_1;
	// System.Int32 com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket::gameid
	int32_t ___gameid_2;
	// System.String com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket::address
	String_t* ___address_3;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.ParamFilter> com.cubeia.firebase.io.protocol.FilteredJoinTableRequestPacket::parameters
	List_1_t3525839661 * ___parameters_4;

public:
	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(FilteredJoinTableRequestPacket_t3677074662, ___seq_1)); }
	inline int32_t get_seq_1() const { return ___seq_1; }
	inline int32_t* get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(int32_t value)
	{
		___seq_1 = value;
	}

	inline static int32_t get_offset_of_gameid_2() { return static_cast<int32_t>(offsetof(FilteredJoinTableRequestPacket_t3677074662, ___gameid_2)); }
	inline int32_t get_gameid_2() const { return ___gameid_2; }
	inline int32_t* get_address_of_gameid_2() { return &___gameid_2; }
	inline void set_gameid_2(int32_t value)
	{
		___gameid_2 = value;
	}

	inline static int32_t get_offset_of_address_3() { return static_cast<int32_t>(offsetof(FilteredJoinTableRequestPacket_t3677074662, ___address_3)); }
	inline String_t* get_address_3() const { return ___address_3; }
	inline String_t** get_address_of_address_3() { return &___address_3; }
	inline void set_address_3(String_t* value)
	{
		___address_3 = value;
		Il2CppCodeGenWriteBarrier(&___address_3, value);
	}

	inline static int32_t get_offset_of_parameters_4() { return static_cast<int32_t>(offsetof(FilteredJoinTableRequestPacket_t3677074662, ___parameters_4)); }
	inline List_1_t3525839661 * get_parameters_4() const { return ___parameters_4; }
	inline List_1_t3525839661 ** get_address_of_parameters_4() { return &___parameters_4; }
	inline void set_parameters_4(List_1_t3525839661 * value)
	{
		___parameters_4 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
