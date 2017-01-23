#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Countly.Manager
struct Manager_t149474841;

#include "AssemblyU2DCSharpU2Dfirstpass_Countly_Manager149474841.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CountlyManager
struct  CountlyManager_t1851265563  : public Manager_t149474841
{
public:

public:
};

struct CountlyManager_t1851265563_StaticFields
{
public:
	// Countly.Manager CountlyManager::_instance
	Manager_t149474841 * ____instance_21;

public:
	inline static int32_t get_offset_of__instance_21() { return static_cast<int32_t>(offsetof(CountlyManager_t1851265563_StaticFields, ____instance_21)); }
	inline Manager_t149474841 * get__instance_21() const { return ____instance_21; }
	inline Manager_t149474841 ** get_address_of__instance_21() { return &____instance_21; }
	inline void set__instance_21(Manager_t149474841 * value)
	{
		____instance_21 = value;
		Il2CppCodeGenWriteBarrier(&____instance_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
