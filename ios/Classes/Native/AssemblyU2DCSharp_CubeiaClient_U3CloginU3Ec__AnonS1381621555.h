#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LoginInfo
struct LoginInfo_t657176999;
// CubeiaClient
struct CubeiaClient_t2232589536;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeiaClient/<login>c__AnonStorey0
struct  U3CloginU3Ec__AnonStorey0_t1381621555  : public Il2CppObject
{
public:
	// LoginInfo CubeiaClient/<login>c__AnonStorey0::loginInfo
	LoginInfo_t657176999 * ___loginInfo_0;
	// System.Boolean CubeiaClient/<login>c__AnonStorey0::reg
	bool ___reg_1;
	// CubeiaClient CubeiaClient/<login>c__AnonStorey0::$this
	CubeiaClient_t2232589536 * ___U24this_2;

public:
	inline static int32_t get_offset_of_loginInfo_0() { return static_cast<int32_t>(offsetof(U3CloginU3Ec__AnonStorey0_t1381621555, ___loginInfo_0)); }
	inline LoginInfo_t657176999 * get_loginInfo_0() const { return ___loginInfo_0; }
	inline LoginInfo_t657176999 ** get_address_of_loginInfo_0() { return &___loginInfo_0; }
	inline void set_loginInfo_0(LoginInfo_t657176999 * value)
	{
		___loginInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___loginInfo_0, value);
	}

	inline static int32_t get_offset_of_reg_1() { return static_cast<int32_t>(offsetof(U3CloginU3Ec__AnonStorey0_t1381621555, ___reg_1)); }
	inline bool get_reg_1() const { return ___reg_1; }
	inline bool* get_address_of_reg_1() { return &___reg_1; }
	inline void set_reg_1(bool value)
	{
		___reg_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CloginU3Ec__AnonStorey0_t1381621555, ___U24this_2)); }
	inline CubeiaClient_t2232589536 * get_U24this_2() const { return ___U24this_2; }
	inline CubeiaClient_t2232589536 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(CubeiaClient_t2232589536 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
