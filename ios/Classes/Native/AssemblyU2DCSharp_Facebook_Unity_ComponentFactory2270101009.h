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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.ComponentFactory
struct  ComponentFactory_t2270101009  : public Il2CppObject
{
public:

public:
};

struct ComponentFactory_t2270101009_StaticFields
{
public:
	// UnityEngine.GameObject Facebook.Unity.ComponentFactory::facebookGameObject
	GameObject_t1756533147 * ___facebookGameObject_1;

public:
	inline static int32_t get_offset_of_facebookGameObject_1() { return static_cast<int32_t>(offsetof(ComponentFactory_t2270101009_StaticFields, ___facebookGameObject_1)); }
	inline GameObject_t1756533147 * get_facebookGameObject_1() const { return ___facebookGameObject_1; }
	inline GameObject_t1756533147 ** get_address_of_facebookGameObject_1() { return &___facebookGameObject_1; }
	inline void set_facebookGameObject_1(GameObject_t1756533147 * value)
	{
		___facebookGameObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___facebookGameObject_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
