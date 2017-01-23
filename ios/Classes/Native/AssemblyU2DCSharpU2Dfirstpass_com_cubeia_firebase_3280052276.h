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

// com.cubeia.firebase.io.protocol.MttUnregisterRequestPacket
struct  MttUnregisterRequestPacket_t3280052276  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.MttUnregisterRequestPacket::mttid
	int32_t ___mttid_1;

public:
	inline static int32_t get_offset_of_mttid_1() { return static_cast<int32_t>(offsetof(MttUnregisterRequestPacket_t3280052276, ___mttid_1)); }
	inline int32_t get_mttid_1() const { return ___mttid_1; }
	inline int32_t* get_address_of_mttid_1() { return &___mttid_1; }
	inline void set_mttid_1(int32_t value)
	{
		___mttid_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
