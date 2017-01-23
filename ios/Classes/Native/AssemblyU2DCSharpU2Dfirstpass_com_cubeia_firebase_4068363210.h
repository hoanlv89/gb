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

// com.cubeia.firebase.io.protocol.MttPickedUpPacket
struct  MttPickedUpPacket_t4068363210  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.MttPickedUpPacket::mttid
	int32_t ___mttid_1;
	// System.Int32 com.cubeia.firebase.io.protocol.MttPickedUpPacket::tableid
	int32_t ___tableid_2;
	// System.Boolean com.cubeia.firebase.io.protocol.MttPickedUpPacket::keepWatching
	bool ___keepWatching_3;

public:
	inline static int32_t get_offset_of_mttid_1() { return static_cast<int32_t>(offsetof(MttPickedUpPacket_t4068363210, ___mttid_1)); }
	inline int32_t get_mttid_1() const { return ___mttid_1; }
	inline int32_t* get_address_of_mttid_1() { return &___mttid_1; }
	inline void set_mttid_1(int32_t value)
	{
		___mttid_1 = value;
	}

	inline static int32_t get_offset_of_tableid_2() { return static_cast<int32_t>(offsetof(MttPickedUpPacket_t4068363210, ___tableid_2)); }
	inline int32_t get_tableid_2() const { return ___tableid_2; }
	inline int32_t* get_address_of_tableid_2() { return &___tableid_2; }
	inline void set_tableid_2(int32_t value)
	{
		___tableid_2 = value;
	}

	inline static int32_t get_offset_of_keepWatching_3() { return static_cast<int32_t>(offsetof(MttPickedUpPacket_t4068363210, ___keepWatching_3)); }
	inline bool get_keepWatching_3() const { return ___keepWatching_3; }
	inline bool* get_address_of_keepWatching_3() { return &___keepWatching_3; }
	inline void set_keepWatching_3(bool value)
	{
		___keepWatching_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
