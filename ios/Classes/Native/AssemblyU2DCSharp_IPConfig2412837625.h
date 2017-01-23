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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IPConfig
struct  IPConfig_t2412837625  : public Il2CppObject
{
public:
	// System.Int32 IPConfig::minGold
	int32_t ___minGold_0;
	// System.Int32 IPConfig::maxGold
	int32_t ___maxGold_1;
	// System.String IPConfig::ip
	String_t* ___ip_2;
	// System.Boolean IPConfig::enable
	bool ___enable_3;
	// System.String IPConfig::name
	String_t* ___name_4;
	// System.Boolean IPConfig::isVIP
	bool ___isVIP_5;

public:
	inline static int32_t get_offset_of_minGold_0() { return static_cast<int32_t>(offsetof(IPConfig_t2412837625, ___minGold_0)); }
	inline int32_t get_minGold_0() const { return ___minGold_0; }
	inline int32_t* get_address_of_minGold_0() { return &___minGold_0; }
	inline void set_minGold_0(int32_t value)
	{
		___minGold_0 = value;
	}

	inline static int32_t get_offset_of_maxGold_1() { return static_cast<int32_t>(offsetof(IPConfig_t2412837625, ___maxGold_1)); }
	inline int32_t get_maxGold_1() const { return ___maxGold_1; }
	inline int32_t* get_address_of_maxGold_1() { return &___maxGold_1; }
	inline void set_maxGold_1(int32_t value)
	{
		___maxGold_1 = value;
	}

	inline static int32_t get_offset_of_ip_2() { return static_cast<int32_t>(offsetof(IPConfig_t2412837625, ___ip_2)); }
	inline String_t* get_ip_2() const { return ___ip_2; }
	inline String_t** get_address_of_ip_2() { return &___ip_2; }
	inline void set_ip_2(String_t* value)
	{
		___ip_2 = value;
		Il2CppCodeGenWriteBarrier(&___ip_2, value);
	}

	inline static int32_t get_offset_of_enable_3() { return static_cast<int32_t>(offsetof(IPConfig_t2412837625, ___enable_3)); }
	inline bool get_enable_3() const { return ___enable_3; }
	inline bool* get_address_of_enable_3() { return &___enable_3; }
	inline void set_enable_3(bool value)
	{
		___enable_3 = value;
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(IPConfig_t2412837625, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}

	inline static int32_t get_offset_of_isVIP_5() { return static_cast<int32_t>(offsetof(IPConfig_t2412837625, ___isVIP_5)); }
	inline bool get_isVIP_5() const { return ___isVIP_5; }
	inline bool* get_address_of_isVIP_5() { return &___isVIP_5; }
	inline void set_isVIP_5(bool value)
	{
		___isVIP_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
