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

#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_UserInfoLoadResult
struct  GK_UserInfoLoadResult_t1177841233  : public ISN_Result_t2775631610
{
public:
	// System.String GK_UserInfoLoadResult::_playerId
	String_t* ____playerId_2;
	// GK_Player GK_UserInfoLoadResult::_tpl
	GK_Player_t2782008294 * ____tpl_3;

public:
	inline static int32_t get_offset_of__playerId_2() { return static_cast<int32_t>(offsetof(GK_UserInfoLoadResult_t1177841233, ____playerId_2)); }
	inline String_t* get__playerId_2() const { return ____playerId_2; }
	inline String_t** get_address_of__playerId_2() { return &____playerId_2; }
	inline void set__playerId_2(String_t* value)
	{
		____playerId_2 = value;
		Il2CppCodeGenWriteBarrier(&____playerId_2, value);
	}

	inline static int32_t get_offset_of__tpl_3() { return static_cast<int32_t>(offsetof(GK_UserInfoLoadResult_t1177841233, ____tpl_3)); }
	inline GK_Player_t2782008294 * get__tpl_3() const { return ____tpl_3; }
	inline GK_Player_t2782008294 ** get_address_of__tpl_3() { return &____tpl_3; }
	inline void set__tpl_3(GK_Player_t2782008294 * value)
	{
		____tpl_3 = value;
		Il2CppCodeGenWriteBarrier(&____tpl_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
