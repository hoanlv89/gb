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

// com.cubeia.firebase.io.protocol.MttRegisterRequestPacket
struct  MttRegisterRequestPacket_t2062203775  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.MttRegisterRequestPacket::mttid
	int32_t ___mttid_1;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param> com.cubeia.firebase.io.protocol.MttRegisterRequestPacket::parameters
	List_1_t890982683 * ___parameters_2;

public:
	inline static int32_t get_offset_of_mttid_1() { return static_cast<int32_t>(offsetof(MttRegisterRequestPacket_t2062203775, ___mttid_1)); }
	inline int32_t get_mttid_1() const { return ___mttid_1; }
	inline int32_t* get_address_of_mttid_1() { return &___mttid_1; }
	inline void set_mttid_1(int32_t value)
	{
		___mttid_1 = value;
	}

	inline static int32_t get_offset_of_parameters_2() { return static_cast<int32_t>(offsetof(MttRegisterRequestPacket_t2062203775, ___parameters_2)); }
	inline List_1_t890982683 * get_parameters_2() const { return ___parameters_2; }
	inline List_1_t890982683 ** get_address_of_parameters_2() { return &___parameters_2; }
	inline void set_parameters_2(List_1_t890982683 * value)
	{
		___parameters_2 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
