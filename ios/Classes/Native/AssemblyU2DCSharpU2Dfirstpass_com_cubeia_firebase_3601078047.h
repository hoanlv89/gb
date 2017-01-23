#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TableUpdatePacket>
struct List_1_t2051568959;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.TableUpdateListPacket
struct  TableUpdateListPacket_t3601078047  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TableUpdatePacket> com.cubeia.firebase.io.protocol.TableUpdateListPacket::updates
	List_1_t2051568959 * ___updates_1;

public:
	inline static int32_t get_offset_of_updates_1() { return static_cast<int32_t>(offsetof(TableUpdateListPacket_t3601078047, ___updates_1)); }
	inline List_1_t2051568959 * get_updates_1() const { return ___updates_1; }
	inline List_1_t2051568959 ** get_address_of_updates_1() { return &___updates_1; }
	inline void set_updates_1(List_1_t2051568959 * value)
	{
		___updates_1 = value;
		Il2CppCodeGenWriteBarrier(&___updates_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
