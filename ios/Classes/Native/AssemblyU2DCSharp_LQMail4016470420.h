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

// LQMail
struct  LQMail_t4016470420  : public Il2CppObject
{
public:
	// System.String LQMail::from
	String_t* ___from_0;
	// System.String LQMail::content
	String_t* ___content_1;
	// System.String LQMail::date
	String_t* ___date_2;
	// System.Int32 LQMail::money
	int32_t ___money_3;
	// System.Boolean LQMail::isReaded
	bool ___isReaded_4;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(LQMail_t4016470420, ___from_0)); }
	inline String_t* get_from_0() const { return ___from_0; }
	inline String_t** get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(String_t* value)
	{
		___from_0 = value;
		Il2CppCodeGenWriteBarrier(&___from_0, value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(LQMail_t4016470420, ___content_1)); }
	inline String_t* get_content_1() const { return ___content_1; }
	inline String_t** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(String_t* value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier(&___content_1, value);
	}

	inline static int32_t get_offset_of_date_2() { return static_cast<int32_t>(offsetof(LQMail_t4016470420, ___date_2)); }
	inline String_t* get_date_2() const { return ___date_2; }
	inline String_t** get_address_of_date_2() { return &___date_2; }
	inline void set_date_2(String_t* value)
	{
		___date_2 = value;
		Il2CppCodeGenWriteBarrier(&___date_2, value);
	}

	inline static int32_t get_offset_of_money_3() { return static_cast<int32_t>(offsetof(LQMail_t4016470420, ___money_3)); }
	inline int32_t get_money_3() const { return ___money_3; }
	inline int32_t* get_address_of_money_3() { return &___money_3; }
	inline void set_money_3(int32_t value)
	{
		___money_3 = value;
	}

	inline static int32_t get_offset_of_isReaded_4() { return static_cast<int32_t>(offsetof(LQMail_t4016470420, ___isReaded_4)); }
	inline bool get_isReaded_4() const { return ___isReaded_4; }
	inline bool* get_address_of_isReaded_4() { return &___isReaded_4; }
	inline void set_isReaded_4(bool value)
	{
		___isReaded_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
