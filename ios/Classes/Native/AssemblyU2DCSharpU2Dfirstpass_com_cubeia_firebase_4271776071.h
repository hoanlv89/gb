#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TournamentSnapshotPacket>
struct List_1_t3613319179;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.TournamentSnapshotListPacket
struct  TournamentSnapshotListPacket_t4271776071  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.TournamentSnapshotPacket> com.cubeia.firebase.io.protocol.TournamentSnapshotListPacket::snapshots
	List_1_t3613319179 * ___snapshots_1;

public:
	inline static int32_t get_offset_of_snapshots_1() { return static_cast<int32_t>(offsetof(TournamentSnapshotListPacket_t4271776071, ___snapshots_1)); }
	inline List_1_t3613319179 * get_snapshots_1() const { return ___snapshots_1; }
	inline List_1_t3613319179 ** get_address_of_snapshots_1() { return &___snapshots_1; }
	inline void set_snapshots_1(List_1_t3613319179 * value)
	{
		___snapshots_1 = value;
		Il2CppCodeGenWriteBarrier(&___snapshots_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
