#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomGame
struct  RoomGame_t2389026731  : public Il2CppObject
{
public:
	// System.Int32 RoomGame::id
	int32_t ___id_1;
	// System.String RoomGame::name
	String_t* ___name_2;
	// System.Int32 RoomGame::maxTable
	int32_t ___maxTable_3;
	// System.Int32 RoomGame::curPlay
	int32_t ___curPlay_4;
	// System.Int32 RoomGame::maxPlay
	int32_t ___maxPlay_5;
	// System.Int32 RoomGame::curTable
	int32_t ___curTable_6;
	// System.Boolean RoomGame::isFree
	bool ___isFree_7;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(RoomGame_t2389026731, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(RoomGame_t2389026731, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_maxTable_3() { return static_cast<int32_t>(offsetof(RoomGame_t2389026731, ___maxTable_3)); }
	inline int32_t get_maxTable_3() const { return ___maxTable_3; }
	inline int32_t* get_address_of_maxTable_3() { return &___maxTable_3; }
	inline void set_maxTable_3(int32_t value)
	{
		___maxTable_3 = value;
	}

	inline static int32_t get_offset_of_curPlay_4() { return static_cast<int32_t>(offsetof(RoomGame_t2389026731, ___curPlay_4)); }
	inline int32_t get_curPlay_4() const { return ___curPlay_4; }
	inline int32_t* get_address_of_curPlay_4() { return &___curPlay_4; }
	inline void set_curPlay_4(int32_t value)
	{
		___curPlay_4 = value;
	}

	inline static int32_t get_offset_of_maxPlay_5() { return static_cast<int32_t>(offsetof(RoomGame_t2389026731, ___maxPlay_5)); }
	inline int32_t get_maxPlay_5() const { return ___maxPlay_5; }
	inline int32_t* get_address_of_maxPlay_5() { return &___maxPlay_5; }
	inline void set_maxPlay_5(int32_t value)
	{
		___maxPlay_5 = value;
	}

	inline static int32_t get_offset_of_curTable_6() { return static_cast<int32_t>(offsetof(RoomGame_t2389026731, ___curTable_6)); }
	inline int32_t get_curTable_6() const { return ___curTable_6; }
	inline int32_t* get_address_of_curTable_6() { return &___curTable_6; }
	inline void set_curTable_6(int32_t value)
	{
		___curTable_6 = value;
	}

	inline static int32_t get_offset_of_isFree_7() { return static_cast<int32_t>(offsetof(RoomGame_t2389026731, ___isFree_7)); }
	inline bool get_isFree_7() const { return ___isFree_7; }
	inline bool* get_address_of_isFree_7() { return &___isFree_7; }
	inline void set_isFree_7(bool value)
	{
		___isFree_7 = value;
	}
};

struct RoomGame_t2389026731_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Int32> RoomGame::visibleList
	List_1_t1440998580 * ___visibleList_0;

public:
	inline static int32_t get_offset_of_visibleList_0() { return static_cast<int32_t>(offsetof(RoomGame_t2389026731_StaticFields, ___visibleList_0)); }
	inline List_1_t1440998580 * get_visibleList_0() const { return ___visibleList_0; }
	inline List_1_t1440998580 ** get_address_of_visibleList_0() { return &___visibleList_0; }
	inline void set_visibleList_0(List_1_t1440998580 * value)
	{
		___visibleList_0 = value;
		Il2CppCodeGenWriteBarrier(&___visibleList_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
