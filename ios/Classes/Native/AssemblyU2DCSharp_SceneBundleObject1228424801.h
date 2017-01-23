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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneBundleObject
struct  SceneBundleObject_t1228424801  : public Il2CppObject
{
public:
	// System.String SceneBundleObject::sceneBundle
	String_t* ___sceneBundle_0;
	// System.String SceneBundleObject::sceneName
	String_t* ___sceneName_1;

public:
	inline static int32_t get_offset_of_sceneBundle_0() { return static_cast<int32_t>(offsetof(SceneBundleObject_t1228424801, ___sceneBundle_0)); }
	inline String_t* get_sceneBundle_0() const { return ___sceneBundle_0; }
	inline String_t** get_address_of_sceneBundle_0() { return &___sceneBundle_0; }
	inline void set_sceneBundle_0(String_t* value)
	{
		___sceneBundle_0 = value;
		Il2CppCodeGenWriteBarrier(&___sceneBundle_0, value);
	}

	inline static int32_t get_offset_of_sceneName_1() { return static_cast<int32_t>(offsetof(SceneBundleObject_t1228424801, ___sceneName_1)); }
	inline String_t* get_sceneName_1() const { return ___sceneName_1; }
	inline String_t** get_address_of_sceneName_1() { return &___sceneName_1; }
	inline void set_sceneName_1(String_t* value)
	{
		___sceneName_1 = value;
		Il2CppCodeGenWriteBarrier(&___sceneName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
