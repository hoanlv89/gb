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

// LoginInfo
struct  LoginInfo_t657176999  : public Il2CppObject
{
public:
	// System.String LoginInfo::name
	String_t* ___name_0;
	// System.String LoginInfo::password
	String_t* ___password_1;
	// System.Int32 LoginInfo::operatorID
	int32_t ___operatorID_2;
	// System.String LoginInfo::host
	String_t* ___host_3;
	// System.Int32 LoginInfo::gameID
	int32_t ___gameID_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(LoginInfo_t657176999, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_password_1() { return static_cast<int32_t>(offsetof(LoginInfo_t657176999, ___password_1)); }
	inline String_t* get_password_1() const { return ___password_1; }
	inline String_t** get_address_of_password_1() { return &___password_1; }
	inline void set_password_1(String_t* value)
	{
		___password_1 = value;
		Il2CppCodeGenWriteBarrier(&___password_1, value);
	}

	inline static int32_t get_offset_of_operatorID_2() { return static_cast<int32_t>(offsetof(LoginInfo_t657176999, ___operatorID_2)); }
	inline int32_t get_operatorID_2() const { return ___operatorID_2; }
	inline int32_t* get_address_of_operatorID_2() { return &___operatorID_2; }
	inline void set_operatorID_2(int32_t value)
	{
		___operatorID_2 = value;
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(LoginInfo_t657176999, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier(&___host_3, value);
	}

	inline static int32_t get_offset_of_gameID_4() { return static_cast<int32_t>(offsetof(LoginInfo_t657176999, ___gameID_4)); }
	inline int32_t get_gameID_4() const { return ___gameID_4; }
	inline int32_t* get_address_of_gameID_4() { return &___gameID_4; }
	inline void set_gameID_4(int32_t value)
	{
		___gameID_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
