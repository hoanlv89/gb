#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KhuyenMai
struct  KhuyenMai_t2866704139  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject KhuyenMai::goText
	GameObject_t1756533147 * ___goText_2;
	// UnityEngine.GameObject KhuyenMai::goMask
	GameObject_t1756533147 * ___goMask_3;

public:
	inline static int32_t get_offset_of_goText_2() { return static_cast<int32_t>(offsetof(KhuyenMai_t2866704139, ___goText_2)); }
	inline GameObject_t1756533147 * get_goText_2() const { return ___goText_2; }
	inline GameObject_t1756533147 ** get_address_of_goText_2() { return &___goText_2; }
	inline void set_goText_2(GameObject_t1756533147 * value)
	{
		___goText_2 = value;
		Il2CppCodeGenWriteBarrier(&___goText_2, value);
	}

	inline static int32_t get_offset_of_goMask_3() { return static_cast<int32_t>(offsetof(KhuyenMai_t2866704139, ___goMask_3)); }
	inline GameObject_t1756533147 * get_goMask_3() const { return ___goMask_3; }
	inline GameObject_t1756533147 ** get_address_of_goMask_3() { return &___goMask_3; }
	inline void set_goMask_3(GameObject_t1756533147 * value)
	{
		___goMask_3 = value;
		Il2CppCodeGenWriteBarrier(&___goMask_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
