﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// LevelManager
struct LevelManager_t3355282079;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManager/<InnerLoad>c__Iterator0
struct  U3CInnerLoadU3Ec__Iterator0_t1445481607  : public Il2CppObject
{
public:
	// System.String LevelManager/<InnerLoad>c__Iterator0::name
	String_t* ___name_0;
	// LevelManager LevelManager/<InnerLoad>c__Iterator0::$this
	LevelManager_t3355282079 * ___U24this_1;
	// System.Object LevelManager/<InnerLoad>c__Iterator0::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean LevelManager/<InnerLoad>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 LevelManager/<InnerLoad>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CInnerLoadU3Ec__Iterator0_t1445481607, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CInnerLoadU3Ec__Iterator0_t1445481607, ___U24this_1)); }
	inline LevelManager_t3355282079 * get_U24this_1() const { return ___U24this_1; }
	inline LevelManager_t3355282079 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(LevelManager_t3355282079 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CInnerLoadU3Ec__Iterator0_t1445481607, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CInnerLoadU3Ec__Iterator0_t1445481607, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CInnerLoadU3Ec__Iterator0_t1445481607, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
