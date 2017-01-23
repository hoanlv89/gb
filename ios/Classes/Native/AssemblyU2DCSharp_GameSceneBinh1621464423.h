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
// BinhFunctionComponent
struct BinhFunctionComponent_t934903430;

#include "AssemblyU2DCSharp_GameScene1466645730.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameSceneBinh
struct  GameSceneBinh_t1621464423  : public GameScene_t1466645730
{
public:
	// System.Boolean GameSceneBinh::isMovable
	bool ___isMovable_46;
	// UnityEngine.GameObject GameSceneBinh::binhFunc
	GameObject_t1756533147 * ___binhFunc_47;
	// BinhFunctionComponent GameSceneBinh::binhComp
	BinhFunctionComponent_t934903430 * ___binhComp_48;

public:
	inline static int32_t get_offset_of_isMovable_46() { return static_cast<int32_t>(offsetof(GameSceneBinh_t1621464423, ___isMovable_46)); }
	inline bool get_isMovable_46() const { return ___isMovable_46; }
	inline bool* get_address_of_isMovable_46() { return &___isMovable_46; }
	inline void set_isMovable_46(bool value)
	{
		___isMovable_46 = value;
	}

	inline static int32_t get_offset_of_binhFunc_47() { return static_cast<int32_t>(offsetof(GameSceneBinh_t1621464423, ___binhFunc_47)); }
	inline GameObject_t1756533147 * get_binhFunc_47() const { return ___binhFunc_47; }
	inline GameObject_t1756533147 ** get_address_of_binhFunc_47() { return &___binhFunc_47; }
	inline void set_binhFunc_47(GameObject_t1756533147 * value)
	{
		___binhFunc_47 = value;
		Il2CppCodeGenWriteBarrier(&___binhFunc_47, value);
	}

	inline static int32_t get_offset_of_binhComp_48() { return static_cast<int32_t>(offsetof(GameSceneBinh_t1621464423, ___binhComp_48)); }
	inline BinhFunctionComponent_t934903430 * get_binhComp_48() const { return ___binhComp_48; }
	inline BinhFunctionComponent_t934903430 ** get_address_of_binhComp_48() { return &___binhComp_48; }
	inline void set_binhComp_48(BinhFunctionComponent_t934903430 * value)
	{
		___binhComp_48 = value;
		Il2CppCodeGenWriteBarrier(&___binhComp_48, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
