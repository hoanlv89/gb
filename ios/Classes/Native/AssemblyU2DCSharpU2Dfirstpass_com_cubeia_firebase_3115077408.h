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

// com.cubeia.firebase.io.protocol.LogoutPacket
struct  LogoutPacket_t3115077408  : public Il2CppObject
{
public:
	// System.Boolean com.cubeia.firebase.io.protocol.LogoutPacket::leaveTables
	bool ___leaveTables_1;

public:
	inline static int32_t get_offset_of_leaveTables_1() { return static_cast<int32_t>(offsetof(LogoutPacket_t3115077408, ___leaveTables_1)); }
	inline bool get_leaveTables_1() const { return ___leaveTables_1; }
	inline bool* get_address_of_leaveTables_1() { return &___leaveTables_1; }
	inline void set_leaveTables_1(bool value)
	{
		___leaveTables_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
