#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.ProbeStamp>
struct List_1_t483007641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.ProbePacket
struct  ProbePacket_t4138156952  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.ProbePacket::id
	int32_t ___id_1;
	// System.Int32 com.cubeia.firebase.io.protocol.ProbePacket::tableid
	int32_t ___tableid_2;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.ProbeStamp> com.cubeia.firebase.io.protocol.ProbePacket::stamps
	List_1_t483007641 * ___stamps_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ProbePacket_t4138156952, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_tableid_2() { return static_cast<int32_t>(offsetof(ProbePacket_t4138156952, ___tableid_2)); }
	inline int32_t get_tableid_2() const { return ___tableid_2; }
	inline int32_t* get_address_of_tableid_2() { return &___tableid_2; }
	inline void set_tableid_2(int32_t value)
	{
		___tableid_2 = value;
	}

	inline static int32_t get_offset_of_stamps_3() { return static_cast<int32_t>(offsetof(ProbePacket_t4138156952, ___stamps_3)); }
	inline List_1_t483007641 * get_stamps_3() const { return ___stamps_3; }
	inline List_1_t483007641 ** get_address_of_stamps_3() { return &___stamps_3; }
	inline void set_stamps_3(List_1_t483007641 * value)
	{
		___stamps_3 = value;
		Il2CppCodeGenWriteBarrier(&___stamps_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
