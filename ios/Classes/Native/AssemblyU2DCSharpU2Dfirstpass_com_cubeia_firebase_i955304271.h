#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_2428195173.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.MttRegisterResponsePacket
struct  MttRegisterResponsePacket_t955304271  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.MttRegisterResponsePacket::mttid
	int32_t ___mttid_1;
	// com.cubeia.firebase.io.protocol.Enums/TournamentRegisterResponseStatus com.cubeia.firebase.io.protocol.MttRegisterResponsePacket::status
	int32_t ___status_2;

public:
	inline static int32_t get_offset_of_mttid_1() { return static_cast<int32_t>(offsetof(MttRegisterResponsePacket_t955304271, ___mttid_1)); }
	inline int32_t get_mttid_1() const { return ___mttid_1; }
	inline int32_t* get_address_of_mttid_1() { return &___mttid_1; }
	inline void set_mttid_1(int32_t value)
	{
		___mttid_1 = value;
	}

	inline static int32_t get_offset_of_status_2() { return static_cast<int32_t>(offsetof(MttRegisterResponsePacket_t955304271, ___status_2)); }
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
