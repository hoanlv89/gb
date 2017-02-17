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
	bool ___isMovable_47;
	// UnityEngine.GameObject GameSceneBinh::binhFunc
	GameObject_t1756533147 * ___binhFunc_48;
	// BinhFunctionComponent GameSceneBinh::binhComp
	BinhFunctionComponent_t934903430 * ___binhComp_49;

public:
	inline static int32_t get_offset_of_isMovable_47() { return static_cast<int32_t>(offsetof(GameSceneBinh_t1621464423, ___isMovable_47)); }
	inline bool get_isMovable_47() const { return ___isMovable_47; }
	inline bool* get_address_of_isMovable_47() { return &___isMovable_47; }
	inline void set_isMovable_47(bool value)
	{
		___isMovable_47 = value;
	}

	inline static int32_t get_offset_of_binhFunc_48() { return static_cast<int32_t>(offsetof(GameSceneBinh_t1621464423, ___binhFunc_48)); }
	inline GameObject_t1756533147 * get_binhFunc_48() const { return ___binhFunc_48; }
	inline GameObject_t1756533147 ** get_address_of_binhFunc_48() { return &___binhFunc_48; }
	inline void set_binhFunc_48(GameObject_t1756533147 * value)
	{
		___binhFunc_48 = value;
		Il2CppCodeGenWriteBarrier(&___binhFunc_48, value);
	}

	inline static int32_t get_offset_of_binhComp_49() { return static_cast<int32_t>(offsetof(GameSceneBinh_t1621464423, ___binhComp_49)); }
	inline BinhFunctionComponent_t934903430 * get_binhComp_49() const { return ___binhComp_49; }
	inline BinhFunctionComponent_t934903430 ** get_address_of_binhComp_49() { return &___binhComp_49; }
	inline void set_binhComp_49(BinhFunctionComponent_t934903430 * value)
	{
		___binhComp_49 = value;
		Il2CppCodeGenWriteBarrier(&___binhComp_49, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
