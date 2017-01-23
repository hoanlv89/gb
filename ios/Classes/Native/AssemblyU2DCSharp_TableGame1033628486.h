#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TableOptionItem>
struct List_1_t169017758;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TableGame
struct  TableGame_t1033628486  : public Il2CppObject
{
public:
	// System.String TableGame::name
	String_t* ___name_1;
	// System.Int32 TableGame::mark
	int32_t ___mark_2;
	// System.Int32 TableGame::id
	int32_t ___id_3;
	// System.Int32 TableGame::type
	int32_t ___type_4;
	// System.Int16 TableGame::capacity
	int16_t ___capacity_5;
	// System.Int16 TableGame::seated
	int16_t ___seated_6;
	// System.String TableGame::address
	String_t* ___address_7;
	// System.Int32 TableGame::agmin
	int32_t ___agmin_8;
	// System.Collections.ArrayList TableGame::plNames
	ArrayList_t4252133567 * ___plNames_9;
	// UnityEngine.RectTransform TableGame::view
	RectTransform_t3349966182 * ___view_10;
	// System.Boolean TableGame::disable
	bool ___disable_11;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(TableGame_t1033628486, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_mark_2() { return static_cast<int32_t>(offsetof(TableGame_t1033628486, ___mark_2)); }
	inline int32_t get_mark_2() const { return ___mark_2; }
	inline int32_t* get_address_of_mark_2() { return &___mark_2; }
	inline void set_mark_2(int32_t value)
	{
		___mark_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TableGame_t1033628486, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(TableGame_t1033628486, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of_capacity_5() { return static_cast<int32_t>(offsetof(TableGame_t1033628486, ___capacity_5)); }
	inline int16_t get_capacity_5() const { return ___capacity_5; }
	inline int16_t* get_address_of_capacity_5() { return &___capacity_5; }
	inline void set_capacity_5(int16_t value)
	{
		___capacity_5 = value;
	}

	inline static int32_t get_offset_of_seated_6() { return static_cast<int32_t>(offsetof(TableGame_t1033628486, ___seated_6)); }
	inline int16_t get_seated_6() const { return ___seated_6; }
	inline int16_t* get_address_of_seated_6() { return &___seated_6; }
	inline void set_seated_6(int16_t value)
	{
		___seated_6 = value;
	}

	inline static int32_t get_offset_of_address_7() { return static_cast<int32_t>(offsetof(TableGame_t1033628486, ___address_7)); }
	inline String_t* get_address_7() const { return ___address_7; }
	inline String_t** get_address_of_address_7() { return &___address_7; }
	inline void set_address_7(String_t* value)
	{
		___address_7 = value;
		Il2CppCodeGenWriteBarrier(&___address_7, value);
	}

	inline static int32_t get_offset_of_agmin_8() { return static_cast<int32_t>(offsetof(TableGame_t1033628486, ___agmin_8)); }
	inline int32_t get_agmin_8() const { return ___agmin_8; }
	inline int32_t* get_address_of_agmin_8() { return &___agmin_8; }
	inline void set_agmin_8(int32_t value)
	{
		___agmin_8 = value;
	}

	inline static int32_t get_offset_of_plNames_9() { return static_cast<int32_t>(offsetof(TableGame_t1033628486, ___plNames_9)); }
	inline ArrayList_t4252133567 * get_plNames_9() const { return ___plNames_9; }
	inline ArrayList_t4252133567 ** get_address_of_plNames_9() { return &___plNames_9; }
	inline void set_plNames_9(ArrayList_t4252133567 * value)
	{
		___plNames_9 = value;
		Il2CppCodeGenWriteBarrier(&___plNames_9, value);
	}

	inline static int32_t get_offset_of_view_10() { return static_cast<int32_t>(offsetof(TableGame_t1033628486, ___view_10)); }
	inline RectTransform_t3349966182 * get_view_10() const { return ___view_10; }
	inline RectTransform_t3349966182 ** get_address_of_view_10() { return &___view_10; }
	inline void set_view_10(RectTransform_t3349966182 * value)
	{
		___view_10 = value;
		Il2CppCodeGenWriteBarrier(&___view_10, value);
	}

	inline static int32_t get_offset_of_disable_11() { return static_cast<int32_t>(offsetof(TableGame_t1033628486, ___disable_11)); }
	inline bool get_disable_11() const { return ___disable_11; }
	inline bool* get_address_of_disable_11() { return &___disable_11; }
	inline void set_disable_11(bool value)
	{
		___disable_11 = value;
	}
};

struct TableGame_t1033628486_StaticFields
{
public:
	// System.Collections.Generic.List`1<TableOptionItem> TableGame::tableOptionList
	List_1_t169017758 * ___tableOptionList_0;

public:
	inline static int32_t get_offset_of_tableOptionList_0() { return static_cast<int32_t>(offsetof(TableGame_t1033628486_StaticFields, ___tableOptionList_0)); }
	inline List_1_t169017758 * get_tableOptionList_0() const { return ___tableOptionList_0; }
	inline List_1_t169017758 ** get_address_of_tableOptionList_0() { return &___tableOptionList_0; }
	inline void set_tableOptionList_0(List_1_t169017758 * value)
	{
		___tableOptionList_0 = value;
		Il2CppCodeGenWriteBarrier(&___tableOptionList_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
