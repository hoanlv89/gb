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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnionAssets.FLE.EventDispatcher
struct  EventDispatcher_t1906310235  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>> UnionAssets.FLE.EventDispatcher::listeners
	Dictionary_2_t4204112587 * ___listeners_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>> UnionAssets.FLE.EventDispatcher::dataListeners
	Dictionary_2_t2678154363 * ___dataListeners_3;

public:
	inline static int32_t get_offset_of_listeners_2() { return static_cast<int32_t>(offsetof(EventDispatcher_t1906310235, ___listeners_2)); }
	inline Dictionary_2_t4204112587 * get_listeners_2() const { return ___listeners_2; }
	inline Dictionary_2_t4204112587 ** get_address_of_listeners_2() { return &___listeners_2; }
	inline void set_listeners_2(Dictionary_2_t4204112587 * value)
	{
		___listeners_2 = value;
		Il2CppCodeGenWriteBarrier(&___listeners_2, value);
	}

	inline static int32_t get_offset_of_dataListeners_3() { return static_cast<int32_t>(offsetof(EventDispatcher_t1906310235, ___dataListeners_3)); }
	inline Dictionary_2_t2678154363 * get_dataListeners_3() const { return ___dataListeners_3; }
	inline Dictionary_2_t2678154363 ** get_address_of_dataListeners_3() { return &___dataListeners_3; }
	inline void set_dataListeners_3(Dictionary_2_t2678154363 * value)
	{
		___dataListeners_3 = value;
		Il2CppCodeGenWriteBarrier(&___dataListeners_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
