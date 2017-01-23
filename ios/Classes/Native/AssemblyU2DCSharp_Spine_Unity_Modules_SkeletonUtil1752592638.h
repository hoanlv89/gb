#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonUtilityKinematicShadow/TransformPair>
struct List_1_t1084919918;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonUtilityKinematicShadow
struct  SkeletonUtilityKinematicShadow_t1752592638  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Spine.Unity.Modules.SkeletonUtilityKinematicShadow::detachedShadow
	bool ___detachedShadow_2;
	// UnityEngine.Transform Spine.Unity.Modules.SkeletonUtilityKinematicShadow::parent
	Transform_t3275118058 * ___parent_3;
	// System.Boolean Spine.Unity.Modules.SkeletonUtilityKinematicShadow::hideShadow
	bool ___hideShadow_4;
	// UnityEngine.GameObject Spine.Unity.Modules.SkeletonUtilityKinematicShadow::shadowRoot
	GameObject_t1756533147 * ___shadowRoot_5;
	// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonUtilityKinematicShadow/TransformPair> Spine.Unity.Modules.SkeletonUtilityKinematicShadow::shadowTable
	List_1_t1084919918 * ___shadowTable_6;

public:
	inline static int32_t get_offset_of_detachedShadow_2() { return static_cast<int32_t>(offsetof(SkeletonUtilityKinematicShadow_t1752592638, ___detachedShadow_2)); }
	inline bool get_detachedShadow_2() const { return ___detachedShadow_2; }
	inline bool* get_address_of_detachedShadow_2() { return &___detachedShadow_2; }
	inline void set_detachedShadow_2(bool value)
	{
		___detachedShadow_2 = value;
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(SkeletonUtilityKinematicShadow_t1752592638, ___parent_3)); }
	inline Transform_t3275118058 * get_parent_3() const { return ___parent_3; }
	inline Transform_t3275118058 ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(Transform_t3275118058 * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier(&___parent_3, value);
	}

	inline static int32_t get_offset_of_hideShadow_4() { return static_cast<int32_t>(offsetof(SkeletonUtilityKinematicShadow_t1752592638, ___hideShadow_4)); }
	inline bool get_hideShadow_4() const { return ___hideShadow_4; }
	inline bool* get_address_of_hideShadow_4() { return &___hideShadow_4; }
	inline void set_hideShadow_4(bool value)
	{
		___hideShadow_4 = value;
	}

	inline static int32_t get_offset_of_shadowRoot_5() { return static_cast<int32_t>(offsetof(SkeletonUtilityKinematicShadow_t1752592638, ___shadowRoot_5)); }
	inline GameObject_t1756533147 * get_shadowRoot_5() const { return ___shadowRoot_5; }
	inline GameObject_t1756533147 ** get_address_of_shadowRoot_5() { return &___shadowRoot_5; }
	inline void set_shadowRoot_5(GameObject_t1756533147 * value)
	{
		___shadowRoot_5 = value;
		Il2CppCodeGenWriteBarrier(&___shadowRoot_5, value);
	}

	inline static int32_t get_offset_of_shadowTable_6() { return static_cast<int32_t>(offsetof(SkeletonUtilityKinematicShadow_t1752592638, ___shadowTable_6)); }
	inline List_1_t1084919918 * get_shadowTable_6() const { return ___shadowTable_6; }
	inline List_1_t1084919918 ** get_address_of_shadowTable_6() { return &___shadowTable_6; }
	inline void set_shadowTable_6(List_1_t1084919918 * value)
	{
		___shadowTable_6 = value;
		Il2CppCodeGenWriteBarrier(&___shadowTable_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
