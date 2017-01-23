#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<IPConfig>
struct List_1_t1781958757;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameConfig
struct  GameConfig_t811207744  : public Il2CppObject
{
public:
	// System.Int32 GameConfig::gameid
	int32_t ___gameid_0;
	// System.Collections.Generic.List`1<IPConfig> GameConfig::ipsConfig
	List_1_t1781958757 * ___ipsConfig_1;

public:
	inline static int32_t get_offset_of_gameid_0() { return static_cast<int32_t>(offsetof(GameConfig_t811207744, ___gameid_0)); }
	inline int32_t get_gameid_0() const { return ___gameid_0; }
	inline int32_t* get_address_of_gameid_0() { return &___gameid_0; }
	inline void set_gameid_0(int32_t value)
	{
		___gameid_0 = value;
	}

	inline static int32_t get_offset_of_ipsConfig_1() { return static_cast<int32_t>(offsetof(GameConfig_t811207744, ___ipsConfig_1)); }
	inline List_1_t1781958757 * get_ipsConfig_1() const { return ___ipsConfig_1; }
	inline List_1_t1781958757 ** get_address_of_ipsConfig_1() { return &___ipsConfig_1; }
	inline void set_ipsConfig_1(List_1_t1781958757 * value)
	{
		___ipsConfig_1 = value;
		Il2CppCodeGenWriteBarrier(&___ipsConfig_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
