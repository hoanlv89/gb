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
// GK_TBM_Participant
struct GK_TBM_Participant_t3803955090;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.List`1<GK_TBM_Participant>
struct List_1_t3173076222;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_GK_TurnBasedMatchStatus2382635170.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_TBM_Match
struct  GK_TBM_Match_t132033130  : public Il2CppObject
{
public:
	// System.String GK_TBM_Match::Id
	String_t* ___Id_0;
	// System.String GK_TBM_Match::Message
	String_t* ___Message_1;
	// GK_TBM_Participant GK_TBM_Match::CurrentParticipant
	GK_TBM_Participant_t3803955090 * ___CurrentParticipant_2;
	// System.DateTime GK_TBM_Match::CreationTimestamp
	DateTime_t693205669  ___CreationTimestamp_3;
	// System.Byte[] GK_TBM_Match::Data
	ByteU5BU5D_t3397334013* ___Data_4;
	// GK_TurnBasedMatchStatus GK_TBM_Match::Status
	int32_t ___Status_5;
	// System.Collections.Generic.List`1<GK_TBM_Participant> GK_TBM_Match::Participants
	List_1_t3173076222 * ___Participants_6;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GK_TBM_Match_t132033130, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(GK_TBM_Match_t132033130, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier(&___Message_1, value);
	}

	inline static int32_t get_offset_of_CurrentParticipant_2() { return static_cast<int32_t>(offsetof(GK_TBM_Match_t132033130, ___CurrentParticipant_2)); }
	inline GK_TBM_Participant_t3803955090 * get_CurrentParticipant_2() const { return ___CurrentParticipant_2; }
	inline GK_TBM_Participant_t3803955090 ** get_address_of_CurrentParticipant_2() { return &___CurrentParticipant_2; }
	inline void set_CurrentParticipant_2(GK_TBM_Participant_t3803955090 * value)
	{
		___CurrentParticipant_2 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentParticipant_2, value);
	}

	inline static int32_t get_offset_of_CreationTimestamp_3() { return static_cast<int32_t>(offsetof(GK_TBM_Match_t132033130, ___CreationTimestamp_3)); }
	inline DateTime_t693205669  get_CreationTimestamp_3() const { return ___CreationTimestamp_3; }
	inline DateTime_t693205669 * get_address_of_CreationTimestamp_3() { return &___CreationTimestamp_3; }
	inline void set_CreationTimestamp_3(DateTime_t693205669  value)
	{
		___CreationTimestamp_3 = value;
	}

	inline static int32_t get_offset_of_Data_4() { return static_cast<int32_t>(offsetof(GK_TBM_Match_t132033130, ___Data_4)); }
	inline ByteU5BU5D_t3397334013* get_Data_4() const { return ___Data_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_Data_4() { return &___Data_4; }
	inline void set_Data_4(ByteU5BU5D_t3397334013* value)
	{
		___Data_4 = value;
		Il2CppCodeGenWriteBarrier(&___Data_4, value);
	}

	inline static int32_t get_offset_of_Status_5() { return static_cast<int32_t>(offsetof(GK_TBM_Match_t132033130, ___Status_5)); }
	inline int32_t get_Status_5() const { return ___Status_5; }
	inline int32_t* get_address_of_Status_5() { return &___Status_5; }
	inline void set_Status_5(int32_t value)
	{
		___Status_5 = value;
	}

	inline static int32_t get_offset_of_Participants_6() { return static_cast<int32_t>(offsetof(GK_TBM_Match_t132033130, ___Participants_6)); }
	inline List_1_t3173076222 * get_Participants_6() const { return ___Participants_6; }
	inline List_1_t3173076222 ** get_address_of_Participants_6() { return &___Participants_6; }
	inline void set_Participants_6(List_1_t3173076222 * value)
	{
		___Participants_6 = value;
		Il2CppCodeGenWriteBarrier(&___Participants_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
