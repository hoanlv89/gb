#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.Examples.GUIMessageList
struct  GUIMessageList_t2719866248  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> BestHTTP.Examples.GUIMessageList::messages
	List_1_t1398341365 * ___messages_0;
	// UnityEngine.Vector2 BestHTTP.Examples.GUIMessageList::scrollPos
	Vector2_t2243707579  ___scrollPos_1;

public:
	inline static int32_t get_offset_of_messages_0() { return static_cast<int32_t>(offsetof(GUIMessageList_t2719866248, ___messages_0)); }
	inline List_1_t1398341365 * get_messages_0() const { return ___messages_0; }
	inline List_1_t1398341365 ** get_address_of_messages_0() { return &___messages_0; }
	inline void set_messages_0(List_1_t1398341365 * value)
	{
		___messages_0 = value;
		Il2CppCodeGenWriteBarrier(&___messages_0, value);
	}

	inline static int32_t get_offset_of_scrollPos_1() { return static_cast<int32_t>(offsetof(GUIMessageList_t2719866248, ___scrollPos_1)); }
	inline Vector2_t2243707579  get_scrollPos_1() const { return ___scrollPos_1; }
	inline Vector2_t2243707579 * get_address_of_scrollPos_1() { return &___scrollPos_1; }
	inline void set_scrollPos_1(Vector2_t2243707579  value)
	{
		___scrollPos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
