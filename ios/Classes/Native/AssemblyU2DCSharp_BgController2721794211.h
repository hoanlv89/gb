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

// BgController
struct  BgController_t2721794211  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BgController::bgtienlen
	GameObject_t1756533147 * ___bgtienlen_2;
	// UnityEngine.GameObject BgController::bgxocdia
	GameObject_t1756533147 * ___bgxocdia_3;

public:
	inline static int32_t get_offset_of_bgtienlen_2() { return static_cast<int32_t>(offsetof(BgController_t2721794211, ___bgtienlen_2)); }
	inline GameObject_t1756533147 * get_bgtienlen_2() const { return ___bgtienlen_2; }
	inline GameObject_t1756533147 ** get_address_of_bgtienlen_2() { return &___bgtienlen_2; }
	inline void set_bgtienlen_2(GameObject_t1756533147 * value)
	{
		___bgtienlen_2 = value;
		Il2CppCodeGenWriteBarrier(&___bgtienlen_2, value);
	}

	inline static int32_t get_offset_of_bgxocdia_3() { return static_cast<int32_t>(offsetof(BgController_t2721794211, ___bgxocdia_3)); }
	inline GameObject_t1756533147 * get_bgxocdia_3() const { return ___bgxocdia_3; }
	inline GameObject_t1756533147 ** get_address_of_bgxocdia_3() { return &___bgxocdia_3; }
	inline void set_bgxocdia_3(GameObject_t1756533147 * value)
	{
		___bgxocdia_3 = value;
		Il2CppCodeGenWriteBarrier(&___bgxocdia_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
