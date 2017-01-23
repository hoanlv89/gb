#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_i621885505.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.FilteredJoinCancelResponsePacket
struct  FilteredJoinCancelResponsePacket_t4274047168  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.FilteredJoinCancelResponsePacket::seq
	int32_t ___seq_1;
	// com.cubeia.firebase.io.protocol.Enums/ResponseStatus com.cubeia.firebase.io.protocol.FilteredJoinCancelResponsePacket::status
	int32_t ___status_2;

public:
	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(FilteredJoinCancelResponsePacket_t4274047168, ___seq_1)); }
	inline int32_t get_seq_1() const { return ___seq_1; }
	inline int32_t* get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(int32_t value)
	{
		___seq_1 = value;
	}

	inline static int32_t get_offset_of_status_2() { return static_cast<int32_t>(offsetof(FilteredJoinCancelResponsePacket_t4274047168, ___status_2)); }
	inline int32_t get_status_2() const { return ___status_2; }
	inline int32_t* get_address_of_status_2() { return &___status_2; }
	inline void set_status_2(int32_t value)
	{
		___status_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
