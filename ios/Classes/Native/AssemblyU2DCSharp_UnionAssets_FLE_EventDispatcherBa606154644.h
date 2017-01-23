#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct Dictionary_2_t4204112587;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>
struct Dictionary_2_t2678154363;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnionAssets.FLE.EventDispatcherBase
struct  EventDispatcherBase_t606154644  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>> UnionAssets.FLE.EventDispatcherBase::listeners
	Dictionary_2_t4204112587 * ___listeners_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>> UnionAssets.FLE.EventDispatcherBase::dataListeners
	Dictionary_2_t2678154363 * ___dataListeners_1;

public:
	inline static int32_t get_offset_of_listeners_0() { return static_cast<int32_t>(offsetof(EventDispatcherBase_t606154644, ___listeners_0)); }
	inline Dictionary_2_t4204112587 * get_listeners_0() const { return ___listeners_0; }
	inline Dictionary_2_t4204112587 ** get_address_of_listeners_0() { return &___listeners_0; }
	inline void set_listeners_0(Dictionary_2_t4204112587 * value)
	{
		___listeners_0 = value;
		Il2CppCodeGenWriteBarrier(&___listeners_0, value);
	}

	inline static int32_t get_offset_of_dataListeners_1() { return static_cast<int32_t>(offsetof(EventDispatcherBase_t606154644, ___dataListeners_1)); }
	inline Dictionary_2_t2678154363 * get_dataListeners_1() const { return ___dataListeners_1; }
	inline Dictionary_2_t2678154363 ** get_address_of_dataListeners_1() { return &___dataListeners_1; }
	inline void set_dataListeners_1(Dictionary_2_t2678154363 * value)
	{
		___dataListeners_1 = value;
		Il2CppCodeGenWriteBarrier(&___dataListeners_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
