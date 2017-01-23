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
// GK_Player
struct GK_Player_t2782008294;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_Invite
struct  GK_Invite_t22070530  : public Il2CppObject
{
public:
	// System.String GK_Invite::_Id
	String_t* ____Id_0;
	// GK_Player GK_Invite::_Sender
	GK_Player_t2782008294 * ____Sender_1;
	// System.Int32 GK_Invite::_PlayerGroup
	int32_t ____PlayerGroup_2;
	// System.Int32 GK_Invite::_PlayerAttributes
	int32_t ____PlayerAttributes_3;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(GK_Invite_t22070530, ____Id_0)); }
	inline String_t* get__Id_0() const { return ____Id_0; }
	inline String_t** get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(String_t* value)
	{
		____Id_0 = value;
		Il2CppCodeGenWriteBarrier(&____Id_0, value);
	}

	inline static int32_t get_offset_of__Sender_1() { return static_cast<int32_t>(offsetof(GK_Invite_t22070530, ____Sender_1)); }
	inline GK_Player_t2782008294 * get__Sender_1() const { return ____Sender_1; }
	inline GK_Player_t2782008294 ** get_address_of__Sender_1() { return &____Sender_1; }
	inline void set__Sender_1(GK_Player_t2782008294 * value)
	{
		____Sender_1 = value;
		Il2CppCodeGenWriteBarrier(&____Sender_1, value);
	}

	inline static int32_t get_offset_of__PlayerGroup_2() { return static_cast<int32_t>(offsetof(GK_Invite_t22070530, ____PlayerGroup_2)); }
	inline int32_t get__PlayerGroup_2() const { return ____PlayerGroup_2; }
	inline int32_t* get_address_of__PlayerGroup_2() { return &____PlayerGroup_2; }
	inline void set__PlayerGroup_2(int32_t value)
	{
		____PlayerGroup_2 = value;
	}

	inline static int32_t get_offset_of__PlayerAttributes_3() { return static_cast<int32_t>(offsetof(GK_Invite_t22070530, ____PlayerAttributes_3)); }
	inline int32_t get__PlayerAttributes_3() const { return ____PlayerAttributes_3; }
	inline int32_t* get_address_of__PlayerAttributes_3() { return &____PlayerAttributes_3; }
	inline void set__PlayerAttributes_3(int32_t value)
	{
		____PlayerAttributes_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
