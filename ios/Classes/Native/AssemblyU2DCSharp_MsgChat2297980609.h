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
// System.Collections.Generic.List`1<MsgChat>
struct List_1_t1667101741;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgChat
struct  MsgChat_t2297980609  : public Il2CppObject
{
public:
	// System.Int32 MsgChat::type
	int32_t ___type_0;
	// System.String MsgChat::name
	String_t* ___name_1;
	// System.Int32 MsgChat::vip
	int32_t ___vip_2;
	// System.String MsgChat::msg
	String_t* ___msg_3;
	// System.String MsgChat::url
	String_t* ___url_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(MsgChat_t2297980609, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MsgChat_t2297980609, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_vip_2() { return static_cast<int32_t>(offsetof(MsgChat_t2297980609, ___vip_2)); }
	inline int32_t get_vip_2() const { return ___vip_2; }
	inline int32_t* get_address_of_vip_2() { return &___vip_2; }
	inline void set_vip_2(int32_t value)
	{
		___vip_2 = value;
	}

	inline static int32_t get_offset_of_msg_3() { return static_cast<int32_t>(offsetof(MsgChat_t2297980609, ___msg_3)); }
	inline String_t* get_msg_3() const { return ___msg_3; }
	inline String_t** get_address_of_msg_3() { return &___msg_3; }
	inline void set_msg_3(String_t* value)
	{
		___msg_3 = value;
		Il2CppCodeGenWriteBarrier(&___msg_3, value);
	}

	inline static int32_t get_offset_of_url_4() { return static_cast<int32_t>(offsetof(MsgChat_t2297980609, ___url_4)); }
	inline String_t* get_url_4() const { return ___url_4; }
	inline String_t** get_address_of_url_4() { return &___url_4; }
	inline void set_url_4(String_t* value)
	{
		___url_4 = value;
		Il2CppCodeGenWriteBarrier(&___url_4, value);
	}
};

struct MsgChat_t2297980609_StaticFields
{
public:
	// System.Collections.Generic.List`1<MsgChat> MsgChat::all
	List_1_t1667101741 * ___all_5;
	// System.Collections.Generic.List`1<MsgChat> MsgChat::game
	List_1_t1667101741 * ___game_6;
	// System.Collections.Generic.List`1<MsgChat> MsgChat::thegio
	List_1_t1667101741 * ___thegio_7;
	// System.Collections.Generic.List`1<MsgChat> MsgChat::rieng
	List_1_t1667101741 * ___rieng_8;

public:
	inline static int32_t get_offset_of_all_5() { return static_cast<int32_t>(offsetof(MsgChat_t2297980609_StaticFields, ___all_5)); }
	inline List_1_t1667101741 * get_all_5() const { return ___all_5; }
	inline List_1_t1667101741 ** get_address_of_all_5() { return &___all_5; }
	inline void set_all_5(List_1_t1667101741 * value)
	{
		___all_5 = value;
		Il2CppCodeGenWriteBarrier(&___all_5, value);
	}

	inline static int32_t get_offset_of_game_6() { return static_cast<int32_t>(offsetof(MsgChat_t2297980609_StaticFields, ___game_6)); }
	inline List_1_t1667101741 * get_game_6() const { return ___game_6; }
	inline List_1_t1667101741 ** get_address_of_game_6() { return &___game_6; }
	inline void set_game_6(List_1_t1667101741 * value)
	{
		___game_6 = value;
		Il2CppCodeGenWriteBarrier(&___game_6, value);
	}

	inline static int32_t get_offset_of_thegio_7() { return static_cast<int32_t>(offsetof(MsgChat_t2297980609_StaticFields, ___thegio_7)); }
	inline List_1_t1667101741 * get_thegio_7() const { return ___thegio_7; }
	inline List_1_t1667101741 ** get_address_of_thegio_7() { return &___thegio_7; }
	inline void set_thegio_7(List_1_t1667101741 * value)
	{
		___thegio_7 = value;
		Il2CppCodeGenWriteBarrier(&___thegio_7, value);
	}

	inline static int32_t get_offset_of_rieng_8() { return static_cast<int32_t>(offsetof(MsgChat_t2297980609_StaticFields, ___rieng_8)); }
	inline List_1_t1667101741 * get_rieng_8() const { return ___rieng_8; }
	inline List_1_t1667101741 ** get_address_of_rieng_8() { return &___rieng_8; }
	inline void set_rieng_8(List_1_t1667101741 * value)
	{
		___rieng_8 = value;
		Il2CppCodeGenWriteBarrier(&___rieng_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
