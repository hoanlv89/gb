#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LoadBalancer
struct LoadBalancer_t148112434;
// IPConfig
struct IPConfig_t2412837625;
// System.String
struct String_t;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// System.Collections.Generic.List`1<GameConfig>
struct List_1_t180328876;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadBalancer
struct  LoadBalancer_t148112434  : public Il2CppObject
{
public:
	// System.String LoadBalancer::default_IP
	String_t* ___default_IP_5;
	// System.String LoadBalancer::not_vip
	String_t* ___not_vip_6;
	// System.String LoadBalancer::not_public
	String_t* ___not_public_7;
	// SimpleJSON.JSONArray LoadBalancer::gameips
	JSONArray_t3986483147 * ___gameips_8;
	// System.Collections.Generic.List`1<GameConfig> LoadBalancer::gameConfigs
	List_1_t180328876 * ___gameConfigs_9;

public:
	inline static int32_t get_offset_of_default_IP_5() { return static_cast<int32_t>(offsetof(LoadBalancer_t148112434, ___default_IP_5)); }
	inline String_t* get_default_IP_5() const { return ___default_IP_5; }
	inline String_t** get_address_of_default_IP_5() { return &___default_IP_5; }
	inline void set_default_IP_5(String_t* value)
	{
		___default_IP_5 = value;
		Il2CppCodeGenWriteBarrier(&___default_IP_5, value);
	}

	inline static int32_t get_offset_of_not_vip_6() { return static_cast<int32_t>(offsetof(LoadBalancer_t148112434, ___not_vip_6)); }
	inline String_t* get_not_vip_6() const { return ___not_vip_6; }
	inline String_t** get_address_of_not_vip_6() { return &___not_vip_6; }
	inline void set_not_vip_6(String_t* value)
	{
		___not_vip_6 = value;
		Il2CppCodeGenWriteBarrier(&___not_vip_6, value);
	}

	inline static int32_t get_offset_of_not_public_7() { return static_cast<int32_t>(offsetof(LoadBalancer_t148112434, ___not_public_7)); }
	inline String_t* get_not_public_7() const { return ___not_public_7; }
	inline String_t** get_address_of_not_public_7() { return &___not_public_7; }
	inline void set_not_public_7(String_t* value)
	{
		___not_public_7 = value;
		Il2CppCodeGenWriteBarrier(&___not_public_7, value);
	}

	inline static int32_t get_offset_of_gameips_8() { return static_cast<int32_t>(offsetof(LoadBalancer_t148112434, ___gameips_8)); }
	inline JSONArray_t3986483147 * get_gameips_8() const { return ___gameips_8; }
	inline JSONArray_t3986483147 ** get_address_of_gameips_8() { return &___gameips_8; }
	inline void set_gameips_8(JSONArray_t3986483147 * value)
	{
		___gameips_8 = value;
		Il2CppCodeGenWriteBarrier(&___gameips_8, value);
	}

	inline static int32_t get_offset_of_gameConfigs_9() { return static_cast<int32_t>(offsetof(LoadBalancer_t148112434, ___gameConfigs_9)); }
	inline List_1_t180328876 * get_gameConfigs_9() const { return ___gameConfigs_9; }
	inline List_1_t180328876 ** get_address_of_gameConfigs_9() { return &___gameConfigs_9; }
	inline void set_gameConfigs_9(List_1_t180328876 * value)
	{
		___gameConfigs_9 = value;
		Il2CppCodeGenWriteBarrier(&___gameConfigs_9, value);
	}
};

struct LoadBalancer_t148112434_StaticFields
{
public:
	// LoadBalancer LoadBalancer::instance
	LoadBalancer_t148112434 * ___instance_0;
	// System.Boolean LoadBalancer::inVIPChannel
	bool ___inVIPChannel_1;
	// IPConfig LoadBalancer::currentVipIP
	IPConfig_t2412837625 * ___currentVipIP_2;
	// IPConfig LoadBalancer::currentPublicIP
	IPConfig_t2412837625 * ___currentPublicIP_3;
	// System.Int32 LoadBalancer::previousHostID
	int32_t ___previousHostID_4;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(LoadBalancer_t148112434_StaticFields, ___instance_0)); }
	inline LoadBalancer_t148112434 * get_instance_0() const { return ___instance_0; }
	inline LoadBalancer_t148112434 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(LoadBalancer_t148112434 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}

	inline static int32_t get_offset_of_inVIPChannel_1() { return static_cast<int32_t>(offsetof(LoadBalancer_t148112434_StaticFields, ___inVIPChannel_1)); }
	inline bool get_inVIPChannel_1() const { return ___inVIPChannel_1; }
	inline bool* get_address_of_inVIPChannel_1() { return &___inVIPChannel_1; }
	inline void set_inVIPChannel_1(bool value)
	{
		___inVIPChannel_1 = value;
	}

	inline static int32_t get_offset_of_currentVipIP_2() { return static_cast<int32_t>(offsetof(LoadBalancer_t148112434_StaticFields, ___currentVipIP_2)); }
	inline IPConfig_t2412837625 * get_currentVipIP_2() const { return ___currentVipIP_2; }
	inline IPConfig_t2412837625 ** get_address_of_currentVipIP_2() { return &___currentVipIP_2; }
	inline void set_currentVipIP_2(IPConfig_t2412837625 * value)
	{
		___currentVipIP_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentVipIP_2, value);
	}

	inline static int32_t get_offset_of_currentPublicIP_3() { return static_cast<int32_t>(offsetof(LoadBalancer_t148112434_StaticFields, ___currentPublicIP_3)); }
	inline IPConfig_t2412837625 * get_currentPublicIP_3() const { return ___currentPublicIP_3; }
	inline IPConfig_t2412837625 ** get_address_of_currentPublicIP_3() { return &___currentPublicIP_3; }
	inline void set_currentPublicIP_3(IPConfig_t2412837625 * value)
	{
		___currentPublicIP_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentPublicIP_3, value);
	}

	inline static int32_t get_offset_of_previousHostID_4() { return static_cast<int32_t>(offsetof(LoadBalancer_t148112434_StaticFields, ___previousHostID_4)); }
	inline int32_t get_previousHostID_4() const { return ___previousHostID_4; }
	inline int32_t* get_address_of_previousHostID_4() { return &___previousHostID_4; }
	inline void set_previousHostID_4(int32_t value)
	{
		___previousHostID_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
