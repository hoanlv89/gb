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
// System.Collections.Generic.List`1<Mail>
struct List_1_t3341915391;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mail
struct  Mail_t3972794259  : public Il2CppObject
{
public:
	// System.Int32 Mail::id
	int32_t ___id_0;
	// System.Int32 Mail::t
	int32_t ___t_1;
	// System.Int32 Mail::vip
	int32_t ___vip_2;
	// System.String Mail::from
	String_t* ___from_3;
	// System.String Mail::to
	String_t* ___to_4;
	// System.Int32 Mail::gold
	int32_t ___gold_5;
	// System.Int32 Mail::i
	int32_t ___i_6;
	// System.String Mail::msg
	String_t* ___msg_7;
	// System.Int64 Mail::time
	int64_t ___time_8;
	// System.Boolean Mail::s
	bool ___s_9;
	// System.Boolean Mail::d
	bool ___d_10;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Mail_t3972794259, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(Mail_t3972794259, ___t_1)); }
	inline int32_t get_t_1() const { return ___t_1; }
	inline int32_t* get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(int32_t value)
	{
		___t_1 = value;
	}

	inline static int32_t get_offset_of_vip_2() { return static_cast<int32_t>(offsetof(Mail_t3972794259, ___vip_2)); }
	inline int32_t get_vip_2() const { return ___vip_2; }
	inline int32_t* get_address_of_vip_2() { return &___vip_2; }
	inline void set_vip_2(int32_t value)
	{
		___vip_2 = value;
	}

	inline static int32_t get_offset_of_from_3() { return static_cast<int32_t>(offsetof(Mail_t3972794259, ___from_3)); }
	inline String_t* get_from_3() const { return ___from_3; }
	inline String_t** get_address_of_from_3() { return &___from_3; }
	inline void set_from_3(String_t* value)
	{
		___from_3 = value;
		Il2CppCodeGenWriteBarrier(&___from_3, value);
	}

	inline static int32_t get_offset_of_to_4() { return static_cast<int32_t>(offsetof(Mail_t3972794259, ___to_4)); }
	inline String_t* get_to_4() const { return ___to_4; }
	inline String_t** get_address_of_to_4() { return &___to_4; }
	inline void set_to_4(String_t* value)
	{
		___to_4 = value;
		Il2CppCodeGenWriteBarrier(&___to_4, value);
	}

	inline static int32_t get_offset_of_gold_5() { return static_cast<int32_t>(offsetof(Mail_t3972794259, ___gold_5)); }
	inline int32_t get_gold_5() const { return ___gold_5; }
	inline int32_t* get_address_of_gold_5() { return &___gold_5; }
	inline void set_gold_5(int32_t value)
	{
		___gold_5 = value;
	}

	inline static int32_t get_offset_of_i_6() { return static_cast<int32_t>(offsetof(Mail_t3972794259, ___i_6)); }
	inline int32_t get_i_6() const { return ___i_6; }
	inline int32_t* get_address_of_i_6() { return &___i_6; }
	inline void set_i_6(int32_t value)
	{
		___i_6 = value;
	}

	inline static int32_t get_offset_of_msg_7() { return static_cast<int32_t>(offsetof(Mail_t3972794259, ___msg_7)); }
	inline String_t* get_msg_7() const { return ___msg_7; }
	inline String_t** get_address_of_msg_7() { return &___msg_7; }
	inline void set_msg_7(String_t* value)
	{
		___msg_7 = value;
		Il2CppCodeGenWriteBarrier(&___msg_7, value);
	}

	inline static int32_t get_offset_of_time_8() { return static_cast<int32_t>(offsetof(Mail_t3972794259, ___time_8)); }
	inline int64_t get_time_8() const { return ___time_8; }
	inline int64_t* get_address_of_time_8() { return &___time_8; }
	inline void set_time_8(int64_t value)
	{
		___time_8 = value;
	}

	inline static int32_t get_offset_of_s_9() { return static_cast<int32_t>(offsetof(Mail_t3972794259, ___s_9)); }
	inline bool get_s_9() const { return ___s_9; }
	inline bool* get_address_of_s_9() { return &___s_9; }
	inline void set_s_9(bool value)
	{
		___s_9 = value;
	}

	inline static int32_t get_offset_of_d_10() { return static_cast<int32_t>(offsetof(Mail_t3972794259, ___d_10)); }
	inline bool get_d_10() const { return ___d_10; }
	inline bool* get_address_of_d_10() { return &___d_10; }
	inline void set_d_10(bool value)
	{
		___d_10 = value;
	}
};

struct Mail_t3972794259_StaticFields
{
public:
	// System.Collections.Generic.List`1<Mail> Mail::mails20
	List_1_t3341915391 * ___mails20_11;
	// System.Collections.Generic.List`1<Mail> Mail::mails21
	List_1_t3341915391 * ___mails21_12;
	// System.Collections.Generic.List`1<Mail> Mail::mails22
	List_1_t3341915391 * ___mails22_13;

public:
	inline static int32_t get_offset_of_mails20_11() { return static_cast<int32_t>(offsetof(Mail_t3972794259_StaticFields, ___mails20_11)); }
	inline List_1_t3341915391 * get_mails20_11() const { return ___mails20_11; }
	inline List_1_t3341915391 ** get_address_of_mails20_11() { return &___mails20_11; }
	inline void set_mails20_11(List_1_t3341915391 * value)
	{
		___mails20_11 = value;
		Il2CppCodeGenWriteBarrier(&___mails20_11, value);
	}

	inline static int32_t get_offset_of_mails21_12() { return static_cast<int32_t>(offsetof(Mail_t3972794259_StaticFields, ___mails21_12)); }
	inline List_1_t3341915391 * get_mails21_12() const { return ___mails21_12; }
	inline List_1_t3341915391 ** get_address_of_mails21_12() { return &___mails21_12; }
	inline void set_mails21_12(List_1_t3341915391 * value)
	{
		___mails21_12 = value;
		Il2CppCodeGenWriteBarrier(&___mails21_12, value);
	}

	inline static int32_t get_offset_of_mails22_13() { return static_cast<int32_t>(offsetof(Mail_t3972794259_StaticFields, ___mails22_13)); }
	inline List_1_t3341915391 * get_mails22_13() const { return ___mails22_13; }
	inline List_1_t3341915391 ** get_address_of_mails22_13() { return &___mails22_13; }
	inline void set_mails22_13(List_1_t3341915391 * value)
	{
		___mails22_13 = value;
		Il2CppCodeGenWriteBarrier(&___mails22_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
