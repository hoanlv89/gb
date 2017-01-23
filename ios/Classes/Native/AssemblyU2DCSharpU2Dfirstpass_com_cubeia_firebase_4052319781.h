#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// com.cubeia.firebase.io.protocol.TableSnapshotPacket
struct TableSnapshotPacket_t3456557784;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.NotifySeatedPacket
struct  NotifySeatedPacket_t4052319781  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.NotifySeatedPacket::tableid
	int32_t ___tableid_1;
	// System.Byte com.cubeia.firebase.io.protocol.NotifySeatedPacket::seat
	uint8_t ___seat_2;
	// System.Int32 com.cubeia.firebase.io.protocol.NotifySeatedPacket::mttid
	int32_t ___mttid_3;
	// com.cubeia.firebase.io.protocol.TableSnapshotPacket com.cubeia.firebase.io.protocol.NotifySeatedPacket::snapshot
	TableSnapshotPacket_t3456557784 * ___snapshot_4;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(NotifySeatedPacket_t4052319781, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_seat_2() { return static_cast<int32_t>(offsetof(NotifySeatedPacket_t4052319781, ___seat_2)); }
	inline uint8_t get_seat_2() const { return ___seat_2; }
	inline uint8_t* get_address_of_seat_2() { return &___seat_2; }
	inline void set_seat_2(uint8_t value)
	{
		___seat_2 = value;
	}

	inline static int32_t get_offset_of_mttid_3() { return static_cast<int32_t>(offsetof(NotifySeatedPacket_t4052319781, ___mttid_3)); }
	inline int32_t get_mttid_3() const { return ___mttid_3; }
	inline int32_t* get_address_of_mttid_3() { return &___mttid_3; }
	inline void set_mttid_3(int32_t value)
	{
		___mttid_3 = value;
	}

	inline static int32_t get_offset_of_snapshot_4() { return static_cast<int32_t>(offsetof(NotifySeatedPacket_t4052319781, ___snapshot_4)); }
	inline TableSnapshotPacket_t3456557784 * get_snapshot_4() const { return ___snapshot_4; }
	inline TableSnapshotPacket_t3456557784 ** get_address_of_snapshot_4() { return &___snapshot_4; }
	inline void set_snapshot_4(TableSnapshotPacket_t3456557784 * value)
	{
		___snapshot_4 = value;
		Il2CppCodeGenWriteBarrier(&___snapshot_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
