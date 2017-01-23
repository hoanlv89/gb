#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// BestHTTP.SocketIO.Packet
struct Packet_t1309324146;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t2766455145;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// BestHTTP.SocketIO.JsonEncoders.IJsonEncoder
struct IJsonEncoder_t3088637035;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_2_t2514582953;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_TransportEvent2410498534.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketIOEventT2290781438.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Packet_Payload2318637743.h"

// System.Void BestHTTP.SocketIO.Packet::.ctor()
extern "C"  void Packet__ctor_m4231698244 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::.ctor(System.String)
extern "C"  void Packet__ctor_m652013778 (Packet_t1309324146 * __this, String_t* ___from0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::.ctor(BestHTTP.SocketIO.TransportEventTypes,BestHTTP.SocketIO.SocketIOEventTypes,System.String,System.String,System.Int32,System.Int32)
extern "C"  void Packet__ctor_m2569634410 (Packet_t1309324146 * __this, int32_t ___transportEvent0, int32_t ___packetType1, String_t* ___nsp2, String_t* ___payload3, int32_t ___attachment4, int32_t ___id5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.TransportEventTypes BestHTTP.SocketIO.Packet::get_TransportEvent()
extern "C"  int32_t Packet_get_TransportEvent_m2414350516 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::set_TransportEvent(BestHTTP.SocketIO.TransportEventTypes)
extern "C"  void Packet_set_TransportEvent_m300881177 (Packet_t1309324146 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.SocketIOEventTypes BestHTTP.SocketIO.Packet::get_SocketIOEvent()
extern "C"  int32_t Packet_get_SocketIOEvent_m3244846380 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::set_SocketIOEvent(BestHTTP.SocketIO.SocketIOEventTypes)
extern "C"  void Packet_set_SocketIOEvent_m3588472681 (Packet_t1309324146 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.SocketIO.Packet::get_AttachmentCount()
extern "C"  int32_t Packet_get_AttachmentCount_m2778435857 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::set_AttachmentCount(System.Int32)
extern "C"  void Packet_set_AttachmentCount_m2699630894 (Packet_t1309324146 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.SocketIO.Packet::get_Id()
extern "C"  int32_t Packet_get_Id_m635988536 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::set_Id(System.Int32)
extern "C"  void Packet_set_Id_m3124877821 (Packet_t1309324146 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.Packet::get_Namespace()
extern "C"  String_t* Packet_get_Namespace_m1759763703 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::set_Namespace(System.String)
extern "C"  void Packet_set_Namespace_m160910882 (Packet_t1309324146 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.Packet::get_Payload()
extern "C"  String_t* Packet_get_Payload_m2465561534 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::set_Payload(System.String)
extern "C"  void Packet_set_Payload_m689197085 (Packet_t1309324146 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.Packet::get_EventName()
extern "C"  String_t* Packet_get_EventName_m3702446087 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::set_EventName(System.String)
extern "C"  void Packet_set_EventName_m435502882 (Packet_t1309324146 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Byte[]> BestHTTP.SocketIO.Packet::get_Attachments()
extern "C"  List_1_t2766455145 * Packet_get_Attachments_m3375548033 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::set_Attachments(System.Collections.Generic.List`1<System.Byte[]>)
extern "C"  void Packet_set_Attachments_m4128149886 (Packet_t1309324146 * __this, List_1_t2766455145 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Packet::get_HasAllAttachment()
extern "C"  bool Packet_get_HasAllAttachment_m3824727447 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Packet::get_IsDecoded()
extern "C"  bool Packet_get_IsDecoded_m447388571 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::set_IsDecoded(System.Boolean)
extern "C"  void Packet_set_IsDecoded_m2698382016 (Packet_t1309324146 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] BestHTTP.SocketIO.Packet::get_DecodedArgs()
extern "C"  ObjectU5BU5D_t3614634134* Packet_get_DecodedArgs_m552640197 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::set_DecodedArgs(System.Object[])
extern "C"  void Packet_set_DecodedArgs_m1957988608 (Packet_t1309324146 * __this, ObjectU5BU5D_t3614634134* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] BestHTTP.SocketIO.Packet::Decode(BestHTTP.SocketIO.JsonEncoders.IJsonEncoder)
extern "C"  ObjectU5BU5D_t3614634134* Packet_Decode_m1013318438 (Packet_t1309324146 * __this, Il2CppObject * ___encoder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.Packet::DecodeEventName()
extern "C"  String_t* Packet_DecodeEventName_m2248878358 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.Packet::RemoveEventName(System.Boolean)
extern "C"  String_t* Packet_RemoveEventName_m6605643 (Packet_t1309324146 * __this, bool ___removeArrayMarks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Packet::ReconstructAttachmentAsIndex()
extern "C"  bool Packet_ReconstructAttachmentAsIndex_m415361335 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Packet::ReconstructAttachmentAsBase64()
extern "C"  bool Packet_ReconstructAttachmentAsBase64_m2282337782 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::Parse(System.String)
extern "C"  void Packet_Parse_m381913331 (Packet_t1309324146 * __this, String_t* ___from0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.Packet::Encode()
extern "C"  String_t* Packet_Encode_m2442186203 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.SocketIO.Packet::EncodeBinary()
extern "C"  ByteU5BU5D_t3397334013* Packet_EncodeBinary_m2264295925 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::AddAttachmentFromServer(System.Byte[],System.Boolean)
extern "C"  void Packet_AddAttachmentFromServer_m665532235 (Packet_t1309324146 * __this, ByteU5BU5D_t3397334013* ___data0, bool ___copyFull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.SocketIO.Packet::EncodeData(System.Byte[],BestHTTP.SocketIO.Packet/PayloadTypes,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Packet_EncodeData_m2429944535 (Packet_t1309324146 * __this, ByteU5BU5D_t3397334013* ___data0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___afterHeaderData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Packet::PlaceholderReplacer(System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
extern "C"  bool Packet_PlaceholderReplacer_m1877582949 (Packet_t1309324146 * __this, Action_2_t2514582953 * ___onFound0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.Packet::ToString()
extern "C"  String_t* Packet_ToString_m3968734863 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.Packet BestHTTP.SocketIO.Packet::Clone()
extern "C"  Packet_t1309324146 * Packet_Clone_m33117419 (Packet_t1309324146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::<ReconstructAttachmentAsIndex>m__0(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Packet_U3CReconstructAttachmentAsIndexU3Em__0_m515723425 (Packet_t1309324146 * __this, String_t* ___json0, Dictionary_2_t309261261 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Packet::<ReconstructAttachmentAsBase64>m__1(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Packet_U3CReconstructAttachmentAsBase64U3Em__1_m1498506345 (Packet_t1309324146 * __this, String_t* ___json0, Dictionary_2_t309261261 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
