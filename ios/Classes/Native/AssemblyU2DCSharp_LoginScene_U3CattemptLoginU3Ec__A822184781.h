#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// User
struct User_t719925459;
// LoginScene
struct LoginScene_t3612966887;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginScene/<attemptLogin>c__AnonStorey2
struct  U3CattemptLoginU3Ec__AnonStorey2_t822184781  : public Il2CppObject
{
public:
	// User LoginScene/<attemptLogin>c__AnonStorey2::user
	User_t719925459 * ___user_0;
	// LoginScene LoginScene/<attemptLogin>c__AnonStorey2::$this
	LoginScene_t3612966887 * ___U24this_1;

public:
	inline static int32_t get_offset_of_user_0() { return static_cast<int32_t>(offsetof(U3CattemptLoginU3Ec__AnonStorey2_t822184781, ___user_0)); }
	inline User_t719925459 * get_user_0() const { return ___user_0; }
	inline User_t719925459 ** get_address_of_user_0() { return &___user_0; }
	inline void set_user_0(User_t719925459 * value)
	{
		___user_0 = value;
		Il2CppCodeGenWriteBarrier(&___user_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CattemptLoginU3Ec__AnonStorey2_t822184781, ___U24this_1)); }
	inline LoginScene_t3612966887 * get_U24this_1() const { return ___U24this_1; }
	inline LoginScene_t3612966887 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(LoginScene_t3612966887 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
