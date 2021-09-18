#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Microsoft.MixedReality.WebRTC.Argb32VideoFrame
struct Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1;
// Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate
struct Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77;
// Microsoft.MixedReality.WebRTC.AudioFrame
struct AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F;
// Microsoft.MixedReality.WebRTC.AudioFrameDelegate
struct AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713;
// Microsoft.MixedReality.WebRTC.AudioTrackReadBuffer
struct AudioTrackReadBuffer_t093FE405A02EEAD45F29BE624F6334EEC3F4A8BF;
// Microsoft.MixedReality.WebRTC.AudioTrackSource
struct AudioTrackSource_t79751068DF263FB042A34A40D028495053C2AC7F;
// Microsoft.MixedReality.WebRTC.DataChannel
struct DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B;
// Microsoft.MixedReality.WebRTC.DataChannel/BufferingChangedDelegate
struct BufferingChangedDelegate_tDE9368CDEE676CEF66EF9DEA08DC58719BFB0BFA;
// Microsoft.MixedReality.WebRTC.DelayedEvent
struct DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146;
// Microsoft.MixedReality.WebRTC.I420AVideoFrame
struct I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F;
// Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate
struct I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2;
// Microsoft.MixedReality.WebRTC.IceCandidate
struct IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5;
// Microsoft.MixedReality.WebRTC.IceServer[]
struct IceServerU5BU5D_tEC407D7E26D3E79CF450BF6D1F341D2E83633394;
// Microsoft.MixedReality.WebRTC.Interop.AudioTrackInterop/AudioFrameUnmanagedCallback
struct AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8;
// Microsoft.MixedReality.WebRTC.Interop.LocalAudioTrackHandle
struct LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D;
// Microsoft.MixedReality.WebRTC.Interop.LocalAudioTrackInterop/InteropCallbackArgs
struct InteropCallbackArgs_t9805576D58418DFAE0630BFB1FD13549A3367CDE;
// Microsoft.MixedReality.WebRTC.Interop.LocalVideoTrackHandle
struct LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893;
// Microsoft.MixedReality.WebRTC.Interop.PeerConnectionHandle
struct PeerConnectionHandle_t54B5713A0D831FD8B66D7E0F16D81125CB5907E3;
// Microsoft.MixedReality.WebRTC.Interop.PeerConnectionInterop/PeerCallbackArgs
struct PeerCallbackArgs_t785841D4E3A4C3DF4073E0E2BFDF2CF0909DF5C2;
// Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop/InteropCallbackArgs
struct InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895;
// Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop/ReadBufferHandle
struct ReadBufferHandle_t8437ADC4DA89C333F16D756BF5C8FABC840FFE99;
// Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop/RemoteAudioTrackHandle
struct RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D;
// Microsoft.MixedReality.WebRTC.Interop.RemoteVideoTrackInterop/RemoteVideoTrackHandle
struct RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B;
// Microsoft.MixedReality.WebRTC.Interop.TransceiverInterop/TransceiverHandle
struct TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A;
// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle
struct VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009;
// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop/Argb32VideoFrameUnmanagedCallback
struct Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2;
// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop/I420AVideoFrameUnmanagedCallback
struct I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD;
// Microsoft.MixedReality.WebRTC.LocalAudioTrack
struct LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77;
// Microsoft.MixedReality.WebRTC.LocalMediaTrack
struct LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276;
// Microsoft.MixedReality.WebRTC.LocalVideoTrack
struct LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48;
// Microsoft.MixedReality.WebRTC.LocalVideoTrack[]
struct LocalVideoTrackU5BU5D_tEAA094B38963E198B451C842617CE683F317F388;
// Microsoft.MixedReality.WebRTC.MediaTrack
struct MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96;
// Microsoft.MixedReality.WebRTC.PeerConnection
struct PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89;
// Microsoft.MixedReality.WebRTC.PeerConnection/AudioTrackAddedDelegate
struct AudioTrackAddedDelegate_tC36539DA1B47148F352453460BCACDB7E0523E39;
// Microsoft.MixedReality.WebRTC.PeerConnection/AudioTrackRemovedDelegate
struct AudioTrackRemovedDelegate_tAD10CEC8F9EDFBFCC58E5AEE95912D835F7E820F;
// Microsoft.MixedReality.WebRTC.PeerConnection/DataChannelAddedDelegate
struct DataChannelAddedDelegate_t56E9DEA2535AF230519EE18D9AB10E6883FF92D2;
// Microsoft.MixedReality.WebRTC.PeerConnection/DataChannelRemovedDelegate
struct DataChannelRemovedDelegate_t0B20766E6E8EE9141A10547D59396852F9B3EEC4;
// Microsoft.MixedReality.WebRTC.PeerConnection/IceCandidateReadytoSendDelegate
struct IceCandidateReadytoSendDelegate_t15E758D4AA8E60C0FFC15740EE9BE77D0B52A06B;
// Microsoft.MixedReality.WebRTC.PeerConnection/IceGatheringStateChangedDelegate
struct IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270;
// Microsoft.MixedReality.WebRTC.PeerConnection/IceStateChangedDelegate
struct IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F;
// Microsoft.MixedReality.WebRTC.PeerConnection/LocalSdpReadyToSendDelegate
struct LocalSdpReadyToSendDelegate_tF2AF0AFA4BE7DEF0B3A2368910E9BA6A0EA77B6D;
// Microsoft.MixedReality.WebRTC.PeerConnection/StatsReport
struct StatsReport_tA94E0D62DDB355F37779A3EE9E98976862B7B8A1;
// Microsoft.MixedReality.WebRTC.PeerConnection/StatsReport/Handle
struct Handle_tCC6496ABB381032CD917362358971825A947788C;
// Microsoft.MixedReality.WebRTC.PeerConnection/TransceiverAddedDelegate
struct TransceiverAddedDelegate_tF78583228A9B65BDD88FDA96F19114BCC5920AE5;
// Microsoft.MixedReality.WebRTC.PeerConnection/VideoTrackAddedDelegate
struct VideoTrackAddedDelegate_t5BBA530A027A4854290DD6F50A1486A63F61F185;
// Microsoft.MixedReality.WebRTC.PeerConnection/VideoTrackRemovedDelegate
struct VideoTrackRemovedDelegate_t1D0546397E1683375352D2ED0E04F22D2484A859;
// Microsoft.MixedReality.WebRTC.PeerConnectionConfiguration
struct PeerConnectionConfiguration_t2EC5AD5A5B893F1E3C668A9544E197AF3A65FE6E;
// Microsoft.MixedReality.WebRTC.RemoteAudioTrack
struct RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7;
// Microsoft.MixedReality.WebRTC.RemoteVideoTrack
struct RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F;
// Microsoft.MixedReality.WebRTC.ScopedDelayedEvent
struct ScopedDelayedEvent_t5E27E2E7DC152C91514EA8A86A98AD9543134BA0;
// Microsoft.MixedReality.WebRTC.SctpNotNegotiatedException
struct SctpNotNegotiatedException_t0DDCAA2882C001CDB9684361B570ADBA17AF5008;
// Microsoft.MixedReality.WebRTC.SdpMessage
struct SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2;
// Microsoft.MixedReality.WebRTC.Tracing.EventAttribute
struct EventAttribute_t985CF6718DB0A5DC5085FB5043A817FD34746FCE;
// Microsoft.MixedReality.WebRTC.Tracing.MainEventSource
struct MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF;
// Microsoft.MixedReality.WebRTC.Transceiver
struct Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20;
// Microsoft.MixedReality.WebRTC.TransceiverAssociatedDelegate
struct TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15;
// Microsoft.MixedReality.WebRTC.TransceiverDirectionChangedDelegate
struct TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF;
// Microsoft.MixedReality.WebRTC.TransceiverInitSettings
struct TransceiverInitSettings_t49FC713C95F7F674C8E5D8040A0A0B2746EF9B90;
// Microsoft.MixedReality.WebRTC.VideoTrackSource
struct VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Byte[]>
struct Action_1_tC54AF61396E7B78AF7B418E8DC90E311B4402461;
// System.Action`2<System.IntPtr,System.UInt64>
struct Action_2_t6F61AD364B12DA631F577E649DB36E99C815BBAC;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.DataChannel>
struct List_1_t935127699A17C6B08C3004EBDA7B08361FBE73EE;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.IceServer>
struct List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.LocalVideoTrack>
struct List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.Transceiver>
struct List_1_t56CA3975E23B48BA1359D97DD63CC1B0D7B79304;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t242351B2A55FA008A20CFFD2CC019E516F538ECF;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tCA1C6242FF06A2361DECDDFEB052447E8F9DE3B7;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioTrackReadBuffer_t093FE405A02EEAD45F29BE624F6334EEC3F4A8BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handle_tCC6496ABB381032CD917362358971825A947788C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IceConnectionState_t3A8E5B4A8E43FE9E9EFF3B60124EE6FA26C9AA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IceGatheringState_t2A6FA13D41A583BF58FCC42AF1729BCEFC823977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerConnectionInterop_t7369F2C89DD874FB55A6A37A6B49A78FC061FB1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransceiverInterop_t70D4B8B7CD805C0A75AED9089A4E2B7366B5C012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral140BF2E9DA01C50B8CB1CB901A6DF12BB33659E3;
IL2CPP_EXTERN_C String_t* _stringLiteral1C460592987159DF8DD195823124F0FDA97F50C4;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
IL2CPP_EXTERN_C String_t* _stringLiteral383689D6BFFDBC2B4845740D965675E72AA130BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3880C03C096E81D0157A71E24AC312E5C8C02D75;
IL2CPP_EXTERN_C String_t* _stringLiteral3E5B02D90A525022B061C8A74C25D7B401E3D5AD;
IL2CPP_EXTERN_C String_t* _stringLiteral50B457167DF3B87A12A8B829D57A7B1333FDC49D;
IL2CPP_EXTERN_C String_t* _stringLiteral526C9DF812C5895BC2D94BCE11C8CCD957F86217;
IL2CPP_EXTERN_C String_t* _stringLiteral68C758BA22B8AA5EAE64FDB4A0FA41F75EF8A008;
IL2CPP_EXTERN_C String_t* _stringLiteral9C0DE34C058924A32D26385C638ADF9EB7CD3F38;
IL2CPP_EXTERN_C String_t* _stringLiteralA01609E2A660D8BC46FDB8AA3A0AF6D6FDF3A34F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3DBD7D032645DBB329E24784050A300B644B9F3;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2B0075B27D860F047E94331179EFADFF22BBC314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m04077B57D42E4A922C1ED790D57DE90B3FAC3CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6615954DA0EF9FC21074E4E41DEACB78A6BF8F2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAC26D789903DD36C6D5A7794809BB13DCCD17E47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC8EB6D9B62D76FEE7262161F6F4B334FF2CA6F10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteAudioTrackInterop_FrameCallback_m8A8C06EBBBDFB3197AA37A2A9919C8FCB94CD296_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transceiver_SetLocalTrackImpl_m521A347122617DC534543D0072D189719E78F275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transceiver_set_LocalAudioTrack_m64F02F604F0CBE2A728E6EE38F47C10DA6FB6902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transceiver_set_LocalVideoTrack_mD511CF1BEE98D16948CB71ED109BA00B9D3286F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VideoTrackSource_Dispose_mB6BEC055EFA69BE790BDC30209ED64560A6F0C5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Handle_ReleaseHandle_m0E8C0726952C3F504AEA4BFF7D90F0663AAD5095_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Handle__ctor_m2641C5E6D0E1AA7CF04807273752D4C9F5EB80A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Handle_get_IsInvalid_m7490674792238C0CBB3CE20BA8205BD7D8F77C4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IceGatheringStateChangedDelegate_BeginInvoke_m63B352EDD16ECFB9D441335DC1C99948906BEE80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IceStateChangedDelegate_BeginInvoke_m0F1386221814F5A9CDF33F04C40E51875156F87B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_AddIceCandidate_m7BF96CE0865209573E6956A40FA1633AD6B47A33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_Argb32LocalVideoFrameReady_m22B9A884F874F8C48D582E1790E2D1FF93B6EC24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_Argb32RemoteVideoFrameReady_m09268CC1947DD159AD15B27F3214B43DFBF2606D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_AudioTrackAdded_m341DAF480DFBCB92DDF99D161066121B6E95CF7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_AudioTrackRemoved_m4352AF2E4EDDB83AFE7414B65A03028C8C9BF152_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_DataChannelAdded_m9B387C1EFC1A17F034C047118216031EFC9DB200_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_DataChannelBufferingChanged_m9C3D0CCF49A71860C21FB95B1FCC52CC9FF1679D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_DataChannelMessageReceived_m2B9F0D9368C63E6E79008692FD07D477950DC3EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_DataChannelRemoved_m6F34DC4EF0C6DDDF67F4D09E60B0D39165F55598_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_DataChannelSendMessage_m44C4D448CB37A608366D66B84D7A33A3750EF5D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_DataChannelStateChanged_m10EB1F4FBE7A56D06B18ED6D1A8AFC8BCD331076_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_I420ALocalVideoFrameReady_mE2451959F602D0AD98081EBA26DED0F2CC23E8C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_I420ARemoteVideoFrameReady_m885B7496C207FF1B44E549F09BB9AB963A7AFC87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_IceCandidateReady_mB2CD002DA02FD480C75A2480B42DEA46B9DB847D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_LocalAudioFrameReady_m6BFD99B735FC77BD77374835EEC22711B5DF5170_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_LocalSdpReady_mB0824EB3A7CD3B2069077B92FDA1C53F15712052_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_RemoteAudioFrameReady_m3776CFF57BBE3A48AF9C61DE30691291AEF5BB9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_VideoFrameQueueDequeue_mE8BBE31FAA4F19347FDA50A3B386D5FED0FF30A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_VideoFrameQueueDropArgb32_m1F6DCD6102BAFCAA5F2D0F22EEC43D12B5560919_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_VideoFrameQueueDropI420_mED0D1EA58E30E7F9910E66A7A7BE35FC31C4ACAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_VideoFrameQueueEnqueueArgb32_mACA06B9C05CCE0AE8B9F56B1A3AC127100417EDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_VideoFrameQueueEnqueueI420_m94800E8B127D52139E33E20DEA3DB1173CD458D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_VideoFrameQueueRecycleStorage_m95D26B3C6746FBE585D0FE0C0FF1980E56B7C9A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_VideoTrackAdded_mA9DD4466183999EF1BBE9F63A9939375C1799DCE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource_VideoTrackRemoved_m4F2841EC5A40D8FD8C9E46DBD9259ECCB020DFC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainEventSource__cctor_mB9161435AC34F1FFEC7312594E01E78D0727FDC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PeerConnectionConfiguration__ctor_mEBB4AF70549B4E4DC3D70E2372ECDD0F47F26684_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteAudioTrack_CreateReadBuffer_m9DE77CBA5F7C579D0C88216BA8252CE868367A42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteAudioTrack_OnFrameReady_m57A342569AC498B8D43CD794F30D60388987D9B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteAudioTrack_OutputToDevice_m609CE659A283C6AAFF050E8129FD4B3689BC8587_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteAudioTrack_RegisterInteropCallbacks_mBF8B50E55153140EE65E210578EA6897B10F89EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteAudioTrack_ToString_m181C8C6A03AC0701EDB481F51017A08530E8A107_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteAudioTrack_UnregisterInteropCallbacks_m9532CEFF47F8246B742D78C3A7C0BBC938D94D89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteAudioTrack__ctor_mD5C909E926982789B6F8B1B7A85AE859C99431DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_DestroyNative_m94ED71D6CC1026E7485221D2B0D782308ADE5886_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnArgb32FrameReady_m7C7DBD6290D8DFAD683F61277F307B2FBC4AEDCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnI420AFrameReady_m48EEB5A164B4DF1383BE15F014C178DF2CCBFFB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_ToString_m3D39640FA9ECC5722E6701967BB85278960BC31F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack__ctor_mA9E382DFC8E4232F7BEFCE8B654D664F3606E485_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_add_Argb32VideoFrameReady_mA34A2E27FDA92ADDEFD3939B20132F7D39441183_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_add_I420AVideoFrameReady_mB46CBFC90A3CE4F5369CC809CCAF17CF47835747_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_add__argb32VideoFrameReady_mD59A0F795887118812D270147531446B24835C37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_add__videoFrameReady_mA5069C3718B33093155790E64D86005496862A58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_remove_Argb32VideoFrameReady_mDD3C20C0B72EC443EE2F998CEFA0CED7F3D0E87B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_remove_I420AVideoFrameReady_m2C0293778667D3B27CBEAA1DE451973045607803_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_remove__argb32VideoFrameReady_m721F85B797495A915A3D1E9432C8EA3ADDB87025_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVideoTrack_remove__videoFrameReady_mC7DD3A17281CB95971D752AA7506249F89C61A06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SctpNotNegotiatedException__ctor_mDB97AAAE557AAE2F23338E8A5F26EBD3214EEE2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StatsReport_Dispose_mDAC6060924CE0DA007D93BFFAE99B72D00CC8560_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StatsReport__ctor_m4D5286FA77731CBAE674D3B1AE46EFD189EDEA81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Transceiver_CleanUpAfterNativeDestroyed_m0A73B4E7C3DEB297BD0248D869F4EEB425ACF84F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Transceiver_HasRecv_mED27F1FAFC495957D727A0DC6D14F42B5FB02576_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Transceiver_HasSend_mA3BBA15578612ABF93C7D62901CAA039D4C8F260_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Transceiver_OnStateUpdated_m5FF1A039F1737AB4792D98E2449B3826773364F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Transceiver_SetLocalTrackImpl_m521A347122617DC534543D0072D189719E78F275_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Transceiver__ctor_m1B99774310530474948360956CE45719E84794F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Transceiver_set_DesiredDirection_mE39B141D63DAF4A6A7C477F01AA9A14268538F94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Transceiver_set_LocalAudioTrack_m64F02F604F0CBE2A728E6EE38F47C10DA6FB6902_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Transceiver_set_LocalVideoTrack_mD511CF1BEE98D16948CB71ED109BA00B9D3286F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_Dispose_mB6BEC055EFA69BE790BDC30209ED64560A6F0C5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnArgb32FrameReady_m9B6A8F43023AF2D18330B8115F74E0BC54A8C50F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnI420AFrameReady_m93534D76881BF915FB86944961E07C3C4B8B19E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_OnTrackAddedToSource_m429138B18A1BDBA7448BAE76AF870C485C810995_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_OnTrackRemovedFromSource_m9452E23C26E25D8760C31B57DBD2945F95AB9349_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_ToString_mFAE30A51B980728736C369B78F77B2DDF797AA25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource__ctor_m7508C5701D3816D331E4AAB6DDE9AC3D6F0EBDF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource__ctor_mE7FF207665636E89ECC043DD822C147CC9DDE8AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_add_Argb32VideoFrameReady_m7E836EC19207543CFF2195C6CC056685C723F04B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_add_I420AVideoFrameReady_m50F5B1EAA3DDBFD5BBD4CF600F88084130092122_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_add__argb32VideoFrameReady_mA23C60BD0F33F744891B82F68AAAC4FE5C54EF51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_add__videoFrameReady_m2D18857690F751C64F6E18F08D9FC6C41DFA6415_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_remove_Argb32VideoFrameReady_m0DD2BAB23787627A1B48F19A40918C3EB815EB59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_remove_I420AVideoFrameReady_m9E4A13735F83BABD38E894D4BE81371A409C2F71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_remove__argb32VideoFrameReady_m755A6839047298C12E2A69328243AEA6FD1A4EC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoTrackSource_remove__videoFrameReady_mC11D77000AD0811EDE795AE5B8E9EE8512941AE4_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Microsoft.MixedReality.WebRTC.AudioTrackReadBuffer
struct  AudioTrackReadBuffer_t093FE405A02EEAD45F29BE624F6334EEC3F4A8BF  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop_ReadBufferHandle Microsoft.MixedReality.WebRTC.AudioTrackReadBuffer::_nativeHandle
	ReadBufferHandle_t8437ADC4DA89C333F16D756BF5C8FABC840FFE99 * ____nativeHandle_0;

public:
	inline static int32_t get_offset_of__nativeHandle_0() { return static_cast<int32_t>(offsetof(AudioTrackReadBuffer_t093FE405A02EEAD45F29BE624F6334EEC3F4A8BF, ____nativeHandle_0)); }
	inline ReadBufferHandle_t8437ADC4DA89C333F16D756BF5C8FABC840FFE99 * get__nativeHandle_0() const { return ____nativeHandle_0; }
	inline ReadBufferHandle_t8437ADC4DA89C333F16D756BF5C8FABC840FFE99 ** get_address_of__nativeHandle_0() { return &____nativeHandle_0; }
	inline void set__nativeHandle_0(ReadBufferHandle_t8437ADC4DA89C333F16D756BF5C8FABC840FFE99 * value)
	{
		____nativeHandle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeHandle_0), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.DelayedEvent
struct  DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146  : public RuntimeObject
{
public:
	// System.Object Microsoft.MixedReality.WebRTC.DelayedEvent::_lock
	RuntimeObject * ____lock_0;
	// System.Int32 Microsoft.MixedReality.WebRTC.DelayedEvent::_suspendCount
	int32_t ____suspendCount_1;
	// System.Boolean Microsoft.MixedReality.WebRTC.DelayedEvent::_eventPending
	bool ____eventPending_2;
	// System.Action Microsoft.MixedReality.WebRTC.DelayedEvent::_event
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ____event_3;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__suspendCount_1() { return static_cast<int32_t>(offsetof(DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146, ____suspendCount_1)); }
	inline int32_t get__suspendCount_1() const { return ____suspendCount_1; }
	inline int32_t* get_address_of__suspendCount_1() { return &____suspendCount_1; }
	inline void set__suspendCount_1(int32_t value)
	{
		____suspendCount_1 = value;
	}

	inline static int32_t get_offset_of__eventPending_2() { return static_cast<int32_t>(offsetof(DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146, ____eventPending_2)); }
	inline bool get__eventPending_2() const { return ____eventPending_2; }
	inline bool* get_address_of__eventPending_2() { return &____eventPending_2; }
	inline void set__eventPending_2(bool value)
	{
		____eventPending_2 = value;
	}

	inline static int32_t get_offset_of__event_3() { return static_cast<int32_t>(offsetof(DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146, ____event_3)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get__event_3() const { return ____event_3; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of__event_3() { return &____event_3; }
	inline void set__event_3(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		____event_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_3), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.IceCandidate
struct  IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.WebRTC.IceCandidate::SdpMid
	String_t* ___SdpMid_0;
	// System.Int32 Microsoft.MixedReality.WebRTC.IceCandidate::SdpMlineIndex
	int32_t ___SdpMlineIndex_1;
	// System.String Microsoft.MixedReality.WebRTC.IceCandidate::Content
	String_t* ___Content_2;

public:
	inline static int32_t get_offset_of_SdpMid_0() { return static_cast<int32_t>(offsetof(IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5, ___SdpMid_0)); }
	inline String_t* get_SdpMid_0() const { return ___SdpMid_0; }
	inline String_t** get_address_of_SdpMid_0() { return &___SdpMid_0; }
	inline void set_SdpMid_0(String_t* value)
	{
		___SdpMid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SdpMid_0), (void*)value);
	}

	inline static int32_t get_offset_of_SdpMlineIndex_1() { return static_cast<int32_t>(offsetof(IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5, ___SdpMlineIndex_1)); }
	inline int32_t get_SdpMlineIndex_1() const { return ___SdpMlineIndex_1; }
	inline int32_t* get_address_of_SdpMlineIndex_1() { return &___SdpMlineIndex_1; }
	inline void set_SdpMlineIndex_1(int32_t value)
	{
		___SdpMlineIndex_1 = value;
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5, ___Content_2)); }
	inline String_t* get_Content_2() const { return ___Content_2; }
	inline String_t** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(String_t* value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Content_2), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop
struct  RemoteAudioTrackInterop_tF7C4B2248D4BB6603B6CAF9403B0F034A2AEA5B8  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop_InteropCallbackArgs
struct  InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WebRTC.RemoteAudioTrack Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop_InteropCallbackArgs::Track
	RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * ___Track_0;
	// Microsoft.MixedReality.WebRTC.Interop.AudioTrackInterop_AudioFrameUnmanagedCallback Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop_InteropCallbackArgs::FrameCallback
	AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8 * ___FrameCallback_1;

public:
	inline static int32_t get_offset_of_Track_0() { return static_cast<int32_t>(offsetof(InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895, ___Track_0)); }
	inline RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * get_Track_0() const { return ___Track_0; }
	inline RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 ** get_address_of_Track_0() { return &___Track_0; }
	inline void set_Track_0(RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * value)
	{
		___Track_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Track_0), (void*)value);
	}

	inline static int32_t get_offset_of_FrameCallback_1() { return static_cast<int32_t>(offsetof(InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895, ___FrameCallback_1)); }
	inline AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8 * get_FrameCallback_1() const { return ___FrameCallback_1; }
	inline AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8 ** get_address_of_FrameCallback_1() { return &___FrameCallback_1; }
	inline void set_FrameCallback_1(AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8 * value)
	{
		___FrameCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FrameCallback_1), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop
struct  VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055  : public RuntimeObject
{
public:

public:
};

struct VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_StaticFields
{
public:
	// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop_I420AVideoFrameUnmanagedCallback Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop::I420AFrameCallback
	I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD * ___I420AFrameCallback_0;
	// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop_Argb32VideoFrameUnmanagedCallback Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop::Argb32FrameCallback
	Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2 * ___Argb32FrameCallback_1;

public:
	inline static int32_t get_offset_of_I420AFrameCallback_0() { return static_cast<int32_t>(offsetof(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_StaticFields, ___I420AFrameCallback_0)); }
	inline I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD * get_I420AFrameCallback_0() const { return ___I420AFrameCallback_0; }
	inline I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD ** get_address_of_I420AFrameCallback_0() { return &___I420AFrameCallback_0; }
	inline void set_I420AFrameCallback_0(I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD * value)
	{
		___I420AFrameCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___I420AFrameCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_Argb32FrameCallback_1() { return static_cast<int32_t>(offsetof(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_StaticFields, ___Argb32FrameCallback_1)); }
	inline Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2 * get_Argb32FrameCallback_1() const { return ___Argb32FrameCallback_1; }
	inline Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2 ** get_address_of_Argb32FrameCallback_1() { return &___Argb32FrameCallback_1; }
	inline void set_Argb32FrameCallback_1(Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2 * value)
	{
		___Argb32FrameCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Argb32FrameCallback_1), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.MediaTrack
struct  MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WebRTC.Transceiver Microsoft.MixedReality.WebRTC.MediaTrack::<Transceiver>k__BackingField
	Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___U3CTransceiverU3Ek__BackingField_0;
	// Microsoft.MixedReality.WebRTC.PeerConnection Microsoft.MixedReality.WebRTC.MediaTrack::<PeerConnection>k__BackingField
	PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * ___U3CPeerConnectionU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.WebRTC.MediaTrack::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTransceiverU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96, ___U3CTransceiverU3Ek__BackingField_0)); }
	inline Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * get_U3CTransceiverU3Ek__BackingField_0() const { return ___U3CTransceiverU3Ek__BackingField_0; }
	inline Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 ** get_address_of_U3CTransceiverU3Ek__BackingField_0() { return &___U3CTransceiverU3Ek__BackingField_0; }
	inline void set_U3CTransceiverU3Ek__BackingField_0(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * value)
	{
		___U3CTransceiverU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransceiverU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPeerConnectionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96, ___U3CPeerConnectionU3Ek__BackingField_1)); }
	inline PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * get_U3CPeerConnectionU3Ek__BackingField_1() const { return ___U3CPeerConnectionU3Ek__BackingField_1; }
	inline PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 ** get_address_of_U3CPeerConnectionU3Ek__BackingField_1() { return &___U3CPeerConnectionU3Ek__BackingField_1; }
	inline void set_U3CPeerConnectionU3Ek__BackingField_1(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * value)
	{
		___U3CPeerConnectionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPeerConnectionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96, ___U3CNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_2), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.PeerConnection_StatsReport
struct  StatsReport_tA94E0D62DDB355F37779A3EE9E98976862B7B8A1  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WebRTC.PeerConnection_StatsReport_Handle Microsoft.MixedReality.WebRTC.PeerConnection_StatsReport::_handle
	Handle_tCC6496ABB381032CD917362358971825A947788C * ____handle_0;

public:
	inline static int32_t get_offset_of__handle_0() { return static_cast<int32_t>(offsetof(StatsReport_tA94E0D62DDB355F37779A3EE9E98976862B7B8A1, ____handle_0)); }
	inline Handle_tCC6496ABB381032CD917362358971825A947788C * get__handle_0() const { return ____handle_0; }
	inline Handle_tCC6496ABB381032CD917362358971825A947788C ** get_address_of__handle_0() { return &____handle_0; }
	inline void set__handle_0(Handle_tCC6496ABB381032CD917362358971825A947788C * value)
	{
		____handle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handle_0), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.ScopedDelayedEvent
struct  ScopedDelayedEvent_t5E27E2E7DC152C91514EA8A86A98AD9543134BA0  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WebRTC.DelayedEvent Microsoft.MixedReality.WebRTC.ScopedDelayedEvent::_delayedEvent
	DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * ____delayedEvent_0;

public:
	inline static int32_t get_offset_of__delayedEvent_0() { return static_cast<int32_t>(offsetof(ScopedDelayedEvent_t5E27E2E7DC152C91514EA8A86A98AD9543134BA0, ____delayedEvent_0)); }
	inline DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * get__delayedEvent_0() const { return ____delayedEvent_0; }
	inline DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 ** get_address_of__delayedEvent_0() { return &____delayedEvent_0; }
	inline void set__delayedEvent_0(DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * value)
	{
		____delayedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedEvent_0), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.Tracing.MainEventSource
struct  MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF  : public RuntimeObject
{
public:

public:
};

struct MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_StaticFields
{
public:
	// Microsoft.MixedReality.WebRTC.Tracing.MainEventSource Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::Log
	MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * ___Log_0;

public:
	inline static int32_t get_offset_of_Log_0() { return static_cast<int32_t>(offsetof(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_StaticFields, ___Log_0)); }
	inline MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * get_Log_0() const { return ___Log_0; }
	inline MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF ** get_address_of_Log_0() { return &___Log_0; }
	inline void set_Log_0(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * value)
	{
		___Log_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Log_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.IceServer>
struct  List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IceServerU5BU5D_tEC407D7E26D3E79CF450BF6D1F341D2E83633394* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A, ____items_1)); }
	inline IceServerU5BU5D_tEC407D7E26D3E79CF450BF6D1F341D2E83633394* get__items_1() const { return ____items_1; }
	inline IceServerU5BU5D_tEC407D7E26D3E79CF450BF6D1F341D2E83633394** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IceServerU5BU5D_tEC407D7E26D3E79CF450BF6D1F341D2E83633394* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IceServerU5BU5D_tEC407D7E26D3E79CF450BF6D1F341D2E83633394* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A_StaticFields, ____emptyArray_5)); }
	inline IceServerU5BU5D_tEC407D7E26D3E79CF450BF6D1F341D2E83633394* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IceServerU5BU5D_tEC407D7E26D3E79CF450BF6D1F341D2E83633394** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IceServerU5BU5D_tEC407D7E26D3E79CF450BF6D1F341D2E83633394* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.LocalVideoTrack>
struct  List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LocalVideoTrackU5BU5D_tEAA094B38963E198B451C842617CE683F317F388* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657, ____items_1)); }
	inline LocalVideoTrackU5BU5D_tEAA094B38963E198B451C842617CE683F317F388* get__items_1() const { return ____items_1; }
	inline LocalVideoTrackU5BU5D_tEAA094B38963E198B451C842617CE683F317F388** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LocalVideoTrackU5BU5D_tEAA094B38963E198B451C842617CE683F317F388* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	LocalVideoTrackU5BU5D_tEAA094B38963E198B451C842617CE683F317F388* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657_StaticFields, ____emptyArray_5)); }
	inline LocalVideoTrackU5BU5D_tEAA094B38963E198B451C842617CE683F317F388* get__emptyArray_5() const { return ____emptyArray_5; }
	inline LocalVideoTrackU5BU5D_tEAA094B38963E198B451C842617CE683F317F388** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(LocalVideoTrackU5BU5D_tEAA094B38963E198B451C842617CE683F317F388* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Microsoft.MixedReality.WebRTC.Interop.mrsBool
struct  mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C 
{
public:
	union
	{
		struct
		{
			// System.Int32 Microsoft.MixedReality.WebRTC.Interop.mrsBool::_value
			int32_t ____value_2;
		};
		uint8_t mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C__padding[4];
	};

public:
	inline static int32_t get_offset_of__value_2() { return static_cast<int32_t>(offsetof(mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C, ____value_2)); }
	inline int32_t get__value_2() const { return ____value_2; }
	inline int32_t* get_address_of__value_2() { return &____value_2; }
	inline void set__value_2(int32_t value)
	{
		____value_2 = value;
	}
};

struct mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C_StaticFields
{
public:
	// Microsoft.MixedReality.WebRTC.Interop.mrsBool Microsoft.MixedReality.WebRTC.Interop.mrsBool::True
	mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C  ___True_0;
	// Microsoft.MixedReality.WebRTC.Interop.mrsBool Microsoft.MixedReality.WebRTC.Interop.mrsBool::False
	mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C  ___False_1;

public:
	inline static int32_t get_offset_of_True_0() { return static_cast<int32_t>(offsetof(mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C_StaticFields, ___True_0)); }
	inline mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C  get_True_0() const { return ___True_0; }
	inline mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C * get_address_of_True_0() { return &___True_0; }
	inline void set_True_0(mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C  value)
	{
		___True_0 = value;
	}

	inline static int32_t get_offset_of_False_1() { return static_cast<int32_t>(offsetof(mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C_StaticFields, ___False_1)); }
	inline mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C  get_False_1() const { return ___False_1; }
	inline mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C * get_address_of_False_1() { return &___False_1; }
	inline void set_False_1(mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C  value)
	{
		___False_1 = value;
	}
};


// Microsoft.MixedReality.WebRTC.LocalMediaTrack
struct  LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276  : public MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.VideoCaptureDevice
struct  VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D 
{
public:
	// System.String Microsoft.MixedReality.WebRTC.VideoCaptureDevice::id
	String_t* ___id_0;
	// System.String Microsoft.MixedReality.WebRTC.VideoCaptureDevice::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.WebRTC.VideoCaptureDevice
struct VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshaled_pinvoke
{
	char* ___id_0;
	char* ___name_1;
};
// Native definition for COM marshalling of Microsoft.MixedReality.WebRTC.VideoCaptureDevice
struct VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshaled_com
{
	Il2CppChar* ___id_0;
	Il2CppChar* ___name_1;
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct  IsByRefLikeAttribute_t242351B2A55FA008A20CFFD2CC019E516F538ECF  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct  IsReadOnlyAttribute_tCA1C6242FF06A2361DECDDFEB052447E8F9DE3B7  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Microsoft.MixedReality.WebRTC.Argb32VideoFrame
struct  Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1 
{
public:
	// System.UInt32 Microsoft.MixedReality.WebRTC.Argb32VideoFrame::width
	uint32_t ___width_0;
	// System.UInt32 Microsoft.MixedReality.WebRTC.Argb32VideoFrame::height
	uint32_t ___height_1;
	// System.IntPtr Microsoft.MixedReality.WebRTC.Argb32VideoFrame::data
	intptr_t ___data_2;
	// System.Int32 Microsoft.MixedReality.WebRTC.Argb32VideoFrame::stride
	int32_t ___stride_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1, ___width_0)); }
	inline uint32_t get_width_0() const { return ___width_0; }
	inline uint32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(uint32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1, ___height_1)); }
	inline uint32_t get_height_1() const { return ___height_1; }
	inline uint32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(uint32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1, ___data_2)); }
	inline intptr_t get_data_2() const { return ___data_2; }
	inline intptr_t* get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(intptr_t value)
	{
		___data_2 = value;
	}

	inline static int32_t get_offset_of_stride_3() { return static_cast<int32_t>(offsetof(Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1, ___stride_3)); }
	inline int32_t get_stride_3() const { return ___stride_3; }
	inline int32_t* get_address_of_stride_3() { return &___stride_3; }
	inline void set_stride_3(int32_t value)
	{
		___stride_3 = value;
	}
};


// Microsoft.MixedReality.WebRTC.AudioFrame
struct  AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F 
{
public:
	// System.IntPtr Microsoft.MixedReality.WebRTC.AudioFrame::audioData
	intptr_t ___audioData_0;
	// System.UInt32 Microsoft.MixedReality.WebRTC.AudioFrame::bitsPerSample
	uint32_t ___bitsPerSample_1;
	// System.UInt32 Microsoft.MixedReality.WebRTC.AudioFrame::sampleRate
	uint32_t ___sampleRate_2;
	// System.UInt32 Microsoft.MixedReality.WebRTC.AudioFrame::channelCount
	uint32_t ___channelCount_3;
	// System.UInt32 Microsoft.MixedReality.WebRTC.AudioFrame::sampleCount
	uint32_t ___sampleCount_4;

public:
	inline static int32_t get_offset_of_audioData_0() { return static_cast<int32_t>(offsetof(AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F, ___audioData_0)); }
	inline intptr_t get_audioData_0() const { return ___audioData_0; }
	inline intptr_t* get_address_of_audioData_0() { return &___audioData_0; }
	inline void set_audioData_0(intptr_t value)
	{
		___audioData_0 = value;
	}

	inline static int32_t get_offset_of_bitsPerSample_1() { return static_cast<int32_t>(offsetof(AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F, ___bitsPerSample_1)); }
	inline uint32_t get_bitsPerSample_1() const { return ___bitsPerSample_1; }
	inline uint32_t* get_address_of_bitsPerSample_1() { return &___bitsPerSample_1; }
	inline void set_bitsPerSample_1(uint32_t value)
	{
		___bitsPerSample_1 = value;
	}

	inline static int32_t get_offset_of_sampleRate_2() { return static_cast<int32_t>(offsetof(AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F, ___sampleRate_2)); }
	inline uint32_t get_sampleRate_2() const { return ___sampleRate_2; }
	inline uint32_t* get_address_of_sampleRate_2() { return &___sampleRate_2; }
	inline void set_sampleRate_2(uint32_t value)
	{
		___sampleRate_2 = value;
	}

	inline static int32_t get_offset_of_channelCount_3() { return static_cast<int32_t>(offsetof(AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F, ___channelCount_3)); }
	inline uint32_t get_channelCount_3() const { return ___channelCount_3; }
	inline uint32_t* get_address_of_channelCount_3() { return &___channelCount_3; }
	inline void set_channelCount_3(uint32_t value)
	{
		___channelCount_3 = value;
	}

	inline static int32_t get_offset_of_sampleCount_4() { return static_cast<int32_t>(offsetof(AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F, ___sampleCount_4)); }
	inline uint32_t get_sampleCount_4() const { return ___sampleCount_4; }
	inline uint32_t* get_address_of_sampleCount_4() { return &___sampleCount_4; }
	inline void set_sampleCount_4(uint32_t value)
	{
		___sampleCount_4 = value;
	}
};


// Microsoft.MixedReality.WebRTC.BundlePolicy
struct  BundlePolicy_t0D4E19A0D1947CB1A99E3BF4BBCCBAB0F4BD675F 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.BundlePolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BundlePolicy_t0D4E19A0D1947CB1A99E3BF4BBCCBAB0F4BD675F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.DataChannel_ChannelState
struct  ChannelState_tB7B3CB37C7193678C0DE8A5B2D1011A65A142E8B 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.DataChannel_ChannelState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChannelState_tB7B3CB37C7193678C0DE8A5B2D1011A65A142E8B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.I420AVideoFrame
struct  I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F 
{
public:
	// System.UInt32 Microsoft.MixedReality.WebRTC.I420AVideoFrame::width
	uint32_t ___width_0;
	// System.UInt32 Microsoft.MixedReality.WebRTC.I420AVideoFrame::height
	uint32_t ___height_1;
	// System.IntPtr Microsoft.MixedReality.WebRTC.I420AVideoFrame::dataY
	intptr_t ___dataY_2;
	// System.IntPtr Microsoft.MixedReality.WebRTC.I420AVideoFrame::dataU
	intptr_t ___dataU_3;
	// System.IntPtr Microsoft.MixedReality.WebRTC.I420AVideoFrame::dataV
	intptr_t ___dataV_4;
	// System.IntPtr Microsoft.MixedReality.WebRTC.I420AVideoFrame::dataA
	intptr_t ___dataA_5;
	// System.Int32 Microsoft.MixedReality.WebRTC.I420AVideoFrame::strideY
	int32_t ___strideY_6;
	// System.Int32 Microsoft.MixedReality.WebRTC.I420AVideoFrame::strideU
	int32_t ___strideU_7;
	// System.Int32 Microsoft.MixedReality.WebRTC.I420AVideoFrame::strideV
	int32_t ___strideV_8;
	// System.Int32 Microsoft.MixedReality.WebRTC.I420AVideoFrame::strideA
	int32_t ___strideA_9;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F, ___width_0)); }
	inline uint32_t get_width_0() const { return ___width_0; }
	inline uint32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(uint32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F, ___height_1)); }
	inline uint32_t get_height_1() const { return ___height_1; }
	inline uint32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(uint32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_dataY_2() { return static_cast<int32_t>(offsetof(I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F, ___dataY_2)); }
	inline intptr_t get_dataY_2() const { return ___dataY_2; }
	inline intptr_t* get_address_of_dataY_2() { return &___dataY_2; }
	inline void set_dataY_2(intptr_t value)
	{
		___dataY_2 = value;
	}

	inline static int32_t get_offset_of_dataU_3() { return static_cast<int32_t>(offsetof(I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F, ___dataU_3)); }
	inline intptr_t get_dataU_3() const { return ___dataU_3; }
	inline intptr_t* get_address_of_dataU_3() { return &___dataU_3; }
	inline void set_dataU_3(intptr_t value)
	{
		___dataU_3 = value;
	}

	inline static int32_t get_offset_of_dataV_4() { return static_cast<int32_t>(offsetof(I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F, ___dataV_4)); }
	inline intptr_t get_dataV_4() const { return ___dataV_4; }
	inline intptr_t* get_address_of_dataV_4() { return &___dataV_4; }
	inline void set_dataV_4(intptr_t value)
	{
		___dataV_4 = value;
	}

	inline static int32_t get_offset_of_dataA_5() { return static_cast<int32_t>(offsetof(I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F, ___dataA_5)); }
	inline intptr_t get_dataA_5() const { return ___dataA_5; }
	inline intptr_t* get_address_of_dataA_5() { return &___dataA_5; }
	inline void set_dataA_5(intptr_t value)
	{
		___dataA_5 = value;
	}

	inline static int32_t get_offset_of_strideY_6() { return static_cast<int32_t>(offsetof(I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F, ___strideY_6)); }
	inline int32_t get_strideY_6() const { return ___strideY_6; }
	inline int32_t* get_address_of_strideY_6() { return &___strideY_6; }
	inline void set_strideY_6(int32_t value)
	{
		___strideY_6 = value;
	}

	inline static int32_t get_offset_of_strideU_7() { return static_cast<int32_t>(offsetof(I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F, ___strideU_7)); }
	inline int32_t get_strideU_7() const { return ___strideU_7; }
	inline int32_t* get_address_of_strideU_7() { return &___strideU_7; }
	inline void set_strideU_7(int32_t value)
	{
		___strideU_7 = value;
	}

	inline static int32_t get_offset_of_strideV_8() { return static_cast<int32_t>(offsetof(I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F, ___strideV_8)); }
	inline int32_t get_strideV_8() const { return ___strideV_8; }
	inline int32_t* get_address_of_strideV_8() { return &___strideV_8; }
	inline void set_strideV_8(int32_t value)
	{
		___strideV_8 = value;
	}

	inline static int32_t get_offset_of_strideA_9() { return static_cast<int32_t>(offsetof(I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F, ___strideA_9)); }
	inline int32_t get_strideA_9() const { return ___strideA_9; }
	inline int32_t* get_address_of_strideA_9() { return &___strideA_9; }
	inline void set_strideA_9(int32_t value)
	{
		___strideA_9 = value;
	}
};


// Microsoft.MixedReality.WebRTC.IceConnectionState
struct  IceConnectionState_t3A8E5B4A8E43FE9E9EFF3B60124EE6FA26C9AA29 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.IceConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IceConnectionState_t3A8E5B4A8E43FE9E9EFF3B60124EE6FA26C9AA29, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.IceGatheringState
struct  IceGatheringState_t2A6FA13D41A583BF58FCC42AF1729BCEFC823977 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.IceGatheringState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IceGatheringState_t2A6FA13D41A583BF58FCC42AF1729BCEFC823977, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.IceTransportType
struct  IceTransportType_tBFF8852B4B0889ADA3D018186485FB1A74F94AD2 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.IceTransportType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IceTransportType_tBFF8852B4B0889ADA3D018186485FB1A74F94AD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.LocalAudioTrack
struct  LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77  : public LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276
{
public:
	// Microsoft.MixedReality.WebRTC.AudioTrackSource Microsoft.MixedReality.WebRTC.LocalAudioTrack::<Source>k__BackingField
	AudioTrackSource_t79751068DF263FB042A34A40D028495053C2AC7F * ___U3CSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.WebRTC.AudioFrameDelegate Microsoft.MixedReality.WebRTC.LocalAudioTrack::AudioFrameReady
	AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 * ___AudioFrameReady_4;
	// Microsoft.MixedReality.WebRTC.Interop.LocalAudioTrackHandle Microsoft.MixedReality.WebRTC.LocalAudioTrack::<_nativeHandle>k__BackingField
	LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D * ___U3C_nativeHandleU3Ek__BackingField_5;
	// System.IntPtr Microsoft.MixedReality.WebRTC.LocalAudioTrack::_selfHandle
	intptr_t ____selfHandle_6;
	// Microsoft.MixedReality.WebRTC.Interop.LocalAudioTrackInterop_InteropCallbackArgs Microsoft.MixedReality.WebRTC.LocalAudioTrack::_interopCallbackArgs
	InteropCallbackArgs_t9805576D58418DFAE0630BFB1FD13549A3367CDE * ____interopCallbackArgs_7;

public:
	inline static int32_t get_offset_of_U3CSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77, ___U3CSourceU3Ek__BackingField_3)); }
	inline AudioTrackSource_t79751068DF263FB042A34A40D028495053C2AC7F * get_U3CSourceU3Ek__BackingField_3() const { return ___U3CSourceU3Ek__BackingField_3; }
	inline AudioTrackSource_t79751068DF263FB042A34A40D028495053C2AC7F ** get_address_of_U3CSourceU3Ek__BackingField_3() { return &___U3CSourceU3Ek__BackingField_3; }
	inline void set_U3CSourceU3Ek__BackingField_3(AudioTrackSource_t79751068DF263FB042A34A40D028495053C2AC7F * value)
	{
		___U3CSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_AudioFrameReady_4() { return static_cast<int32_t>(offsetof(LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77, ___AudioFrameReady_4)); }
	inline AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 * get_AudioFrameReady_4() const { return ___AudioFrameReady_4; }
	inline AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 ** get_address_of_AudioFrameReady_4() { return &___AudioFrameReady_4; }
	inline void set_AudioFrameReady_4(AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 * value)
	{
		___AudioFrameReady_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioFrameReady_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3C_nativeHandleU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77, ___U3C_nativeHandleU3Ek__BackingField_5)); }
	inline LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D * get_U3C_nativeHandleU3Ek__BackingField_5() const { return ___U3C_nativeHandleU3Ek__BackingField_5; }
	inline LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D ** get_address_of_U3C_nativeHandleU3Ek__BackingField_5() { return &___U3C_nativeHandleU3Ek__BackingField_5; }
	inline void set_U3C_nativeHandleU3Ek__BackingField_5(LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D * value)
	{
		___U3C_nativeHandleU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_nativeHandleU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of__selfHandle_6() { return static_cast<int32_t>(offsetof(LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77, ____selfHandle_6)); }
	inline intptr_t get__selfHandle_6() const { return ____selfHandle_6; }
	inline intptr_t* get_address_of__selfHandle_6() { return &____selfHandle_6; }
	inline void set__selfHandle_6(intptr_t value)
	{
		____selfHandle_6 = value;
	}

	inline static int32_t get_offset_of__interopCallbackArgs_7() { return static_cast<int32_t>(offsetof(LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77, ____interopCallbackArgs_7)); }
	inline InteropCallbackArgs_t9805576D58418DFAE0630BFB1FD13549A3367CDE * get__interopCallbackArgs_7() const { return ____interopCallbackArgs_7; }
	inline InteropCallbackArgs_t9805576D58418DFAE0630BFB1FD13549A3367CDE ** get_address_of__interopCallbackArgs_7() { return &____interopCallbackArgs_7; }
	inline void set__interopCallbackArgs_7(InteropCallbackArgs_t9805576D58418DFAE0630BFB1FD13549A3367CDE * value)
	{
		____interopCallbackArgs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interopCallbackArgs_7), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.LocalVideoTrack
struct  LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48  : public LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276
{
public:
	// Microsoft.MixedReality.WebRTC.VideoTrackSource Microsoft.MixedReality.WebRTC.LocalVideoTrack::<Source>k__BackingField
	VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * ___U3CSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.WebRTC.Interop.LocalVideoTrackHandle Microsoft.MixedReality.WebRTC.LocalVideoTrack::<_nativeHandle>k__BackingField
	LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 * ___U3C_nativeHandleU3Ek__BackingField_4;
	// System.IntPtr Microsoft.MixedReality.WebRTC.LocalVideoTrack::_selfHandle
	intptr_t ____selfHandle_5;
	// System.Object Microsoft.MixedReality.WebRTC.LocalVideoTrack::_videoFrameReadyLock
	RuntimeObject * ____videoFrameReadyLock_6;
	// Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate Microsoft.MixedReality.WebRTC.LocalVideoTrack::_videoFrameReady
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ____videoFrameReady_7;
	// Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate Microsoft.MixedReality.WebRTC.LocalVideoTrack::_argb32VideoFrameReady
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ____argb32VideoFrameReady_8;

public:
	inline static int32_t get_offset_of_U3CSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48, ___U3CSourceU3Ek__BackingField_3)); }
	inline VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * get_U3CSourceU3Ek__BackingField_3() const { return ___U3CSourceU3Ek__BackingField_3; }
	inline VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D ** get_address_of_U3CSourceU3Ek__BackingField_3() { return &___U3CSourceU3Ek__BackingField_3; }
	inline void set_U3CSourceU3Ek__BackingField_3(VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * value)
	{
		___U3CSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3C_nativeHandleU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48, ___U3C_nativeHandleU3Ek__BackingField_4)); }
	inline LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 * get_U3C_nativeHandleU3Ek__BackingField_4() const { return ___U3C_nativeHandleU3Ek__BackingField_4; }
	inline LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 ** get_address_of_U3C_nativeHandleU3Ek__BackingField_4() { return &___U3C_nativeHandleU3Ek__BackingField_4; }
	inline void set_U3C_nativeHandleU3Ek__BackingField_4(LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 * value)
	{
		___U3C_nativeHandleU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_nativeHandleU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of__selfHandle_5() { return static_cast<int32_t>(offsetof(LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48, ____selfHandle_5)); }
	inline intptr_t get__selfHandle_5() const { return ____selfHandle_5; }
	inline intptr_t* get_address_of__selfHandle_5() { return &____selfHandle_5; }
	inline void set__selfHandle_5(intptr_t value)
	{
		____selfHandle_5 = value;
	}

	inline static int32_t get_offset_of__videoFrameReadyLock_6() { return static_cast<int32_t>(offsetof(LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48, ____videoFrameReadyLock_6)); }
	inline RuntimeObject * get__videoFrameReadyLock_6() const { return ____videoFrameReadyLock_6; }
	inline RuntimeObject ** get_address_of__videoFrameReadyLock_6() { return &____videoFrameReadyLock_6; }
	inline void set__videoFrameReadyLock_6(RuntimeObject * value)
	{
		____videoFrameReadyLock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoFrameReadyLock_6), (void*)value);
	}

	inline static int32_t get_offset_of__videoFrameReady_7() { return static_cast<int32_t>(offsetof(LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48, ____videoFrameReady_7)); }
	inline I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * get__videoFrameReady_7() const { return ____videoFrameReady_7; }
	inline I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 ** get_address_of__videoFrameReady_7() { return &____videoFrameReady_7; }
	inline void set__videoFrameReady_7(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * value)
	{
		____videoFrameReady_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoFrameReady_7), (void*)value);
	}

	inline static int32_t get_offset_of__argb32VideoFrameReady_8() { return static_cast<int32_t>(offsetof(LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48, ____argb32VideoFrameReady_8)); }
	inline Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * get__argb32VideoFrameReady_8() const { return ____argb32VideoFrameReady_8; }
	inline Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 ** get_address_of__argb32VideoFrameReady_8() { return &____argb32VideoFrameReady_8; }
	inline void set__argb32VideoFrameReady_8(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * value)
	{
		____argb32VideoFrameReady_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____argb32VideoFrameReady_8), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.MediaKind
struct  MediaKind_t95EAD8F5CA7E93E7F5F6A4E74DD6F3BDC90B5CDD 
{
public:
	// System.UInt32 Microsoft.MixedReality.WebRTC.MediaKind::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaKind_t95EAD8F5CA7E93E7F5F6A4E74DD6F3BDC90B5CDD, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.PeerConnection
struct  PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.WebRTC.PeerConnection::PreferredAudioCodec
	String_t* ___PreferredAudioCodec_0;
	// System.String Microsoft.MixedReality.WebRTC.PeerConnection::PreferredAudioCodecExtraParamsRemote
	String_t* ___PreferredAudioCodecExtraParamsRemote_1;
	// System.String Microsoft.MixedReality.WebRTC.PeerConnection::PreferredAudioCodecExtraParamsLocal
	String_t* ___PreferredAudioCodecExtraParamsLocal_2;
	// System.String Microsoft.MixedReality.WebRTC.PeerConnection::PreferredVideoCodec
	String_t* ___PreferredVideoCodec_3;
	// System.String Microsoft.MixedReality.WebRTC.PeerConnection::PreferredVideoCodecExtraParamsRemote
	String_t* ___PreferredVideoCodecExtraParamsRemote_4;
	// System.String Microsoft.MixedReality.WebRTC.PeerConnection::PreferredVideoCodecExtraParamsLocal
	String_t* ___PreferredVideoCodecExtraParamsLocal_5;
	// System.String Microsoft.MixedReality.WebRTC.PeerConnection::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.WebRTC.PeerConnection::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.Transceiver> Microsoft.MixedReality.WebRTC.PeerConnection::<Transceivers>k__BackingField
	List_1_t56CA3975E23B48BA1359D97DD63CC1B0D7B79304 * ___U3CTransceiversU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.DataChannel> Microsoft.MixedReality.WebRTC.PeerConnection::<DataChannels>k__BackingField
	List_1_t935127699A17C6B08C3004EBDA7B08361FBE73EE * ___U3CDataChannelsU3Ek__BackingField_9;
	// System.Action Microsoft.MixedReality.WebRTC.PeerConnection::Connected
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___Connected_10;
	// Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelAddedDelegate Microsoft.MixedReality.WebRTC.PeerConnection::DataChannelAdded
	DataChannelAddedDelegate_t56E9DEA2535AF230519EE18D9AB10E6883FF92D2 * ___DataChannelAdded_11;
	// Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelRemovedDelegate Microsoft.MixedReality.WebRTC.PeerConnection::DataChannelRemoved
	DataChannelRemovedDelegate_t0B20766E6E8EE9141A10547D59396852F9B3EEC4 * ___DataChannelRemoved_12;
	// Microsoft.MixedReality.WebRTC.PeerConnection_LocalSdpReadyToSendDelegate Microsoft.MixedReality.WebRTC.PeerConnection::LocalSdpReadytoSend
	LocalSdpReadyToSendDelegate_tF2AF0AFA4BE7DEF0B3A2368910E9BA6A0EA77B6D * ___LocalSdpReadytoSend_13;
	// Microsoft.MixedReality.WebRTC.PeerConnection_IceCandidateReadytoSendDelegate Microsoft.MixedReality.WebRTC.PeerConnection::IceCandidateReadytoSend
	IceCandidateReadytoSendDelegate_t15E758D4AA8E60C0FFC15740EE9BE77D0B52A06B * ___IceCandidateReadytoSend_14;
	// Microsoft.MixedReality.WebRTC.PeerConnection_IceStateChangedDelegate Microsoft.MixedReality.WebRTC.PeerConnection::IceStateChanged
	IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F * ___IceStateChanged_15;
	// Microsoft.MixedReality.WebRTC.PeerConnection_IceGatheringStateChangedDelegate Microsoft.MixedReality.WebRTC.PeerConnection::IceGatheringStateChanged
	IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270 * ___IceGatheringStateChanged_16;
	// Microsoft.MixedReality.WebRTC.PeerConnection_TransceiverAddedDelegate Microsoft.MixedReality.WebRTC.PeerConnection::TransceiverAdded
	TransceiverAddedDelegate_tF78583228A9B65BDD88FDA96F19114BCC5920AE5 * ___TransceiverAdded_17;
	// Microsoft.MixedReality.WebRTC.PeerConnection_AudioTrackAddedDelegate Microsoft.MixedReality.WebRTC.PeerConnection::AudioTrackAdded
	AudioTrackAddedDelegate_tC36539DA1B47148F352453460BCACDB7E0523E39 * ___AudioTrackAdded_18;
	// Microsoft.MixedReality.WebRTC.PeerConnection_AudioTrackRemovedDelegate Microsoft.MixedReality.WebRTC.PeerConnection::AudioTrackRemoved
	AudioTrackRemovedDelegate_tAD10CEC8F9EDFBFCC58E5AEE95912D835F7E820F * ___AudioTrackRemoved_19;
	// Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackAddedDelegate Microsoft.MixedReality.WebRTC.PeerConnection::VideoTrackAdded
	VideoTrackAddedDelegate_t5BBA530A027A4854290DD6F50A1486A63F61F185 * ___VideoTrackAdded_20;
	// Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackRemovedDelegate Microsoft.MixedReality.WebRTC.PeerConnection::VideoTrackRemoved
	VideoTrackRemovedDelegate_t1D0546397E1683375352D2ED0E04F22D2484A859 * ___VideoTrackRemoved_21;
	// System.Runtime.InteropServices.GCHandle Microsoft.MixedReality.WebRTC.PeerConnection::_selfHandle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ____selfHandle_22;
	// Microsoft.MixedReality.WebRTC.Interop.PeerConnectionHandle Microsoft.MixedReality.WebRTC.PeerConnection::_nativePeerhandle
	PeerConnectionHandle_t54B5713A0D831FD8B66D7E0F16D81125CB5907E3 * ____nativePeerhandle_23;
	// System.Threading.Tasks.Task Microsoft.MixedReality.WebRTC.PeerConnection::_initTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____initTask_24;
	// System.Boolean Microsoft.MixedReality.WebRTC.PeerConnection::_isClosing
	bool ____isClosing_25;
	// System.Object Microsoft.MixedReality.WebRTC.PeerConnection::_openCloseLock
	RuntimeObject * ____openCloseLock_26;
	// Microsoft.MixedReality.WebRTC.Interop.PeerConnectionInterop_PeerCallbackArgs Microsoft.MixedReality.WebRTC.PeerConnection::_peerCallbackArgs
	PeerCallbackArgs_t785841D4E3A4C3DF4073E0E2BFDF2CF0909DF5C2 * ____peerCallbackArgs_27;
	// System.Object Microsoft.MixedReality.WebRTC.PeerConnection::_tracksLock
	RuntimeObject * ____tracksLock_28;
	// Microsoft.MixedReality.WebRTC.DelayedEvent Microsoft.MixedReality.WebRTC.PeerConnection::_renegotiationNeededEvent
	DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * ____renegotiationNeededEvent_29;

public:
	inline static int32_t get_offset_of_PreferredAudioCodec_0() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___PreferredAudioCodec_0)); }
	inline String_t* get_PreferredAudioCodec_0() const { return ___PreferredAudioCodec_0; }
	inline String_t** get_address_of_PreferredAudioCodec_0() { return &___PreferredAudioCodec_0; }
	inline void set_PreferredAudioCodec_0(String_t* value)
	{
		___PreferredAudioCodec_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreferredAudioCodec_0), (void*)value);
	}

	inline static int32_t get_offset_of_PreferredAudioCodecExtraParamsRemote_1() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___PreferredAudioCodecExtraParamsRemote_1)); }
	inline String_t* get_PreferredAudioCodecExtraParamsRemote_1() const { return ___PreferredAudioCodecExtraParamsRemote_1; }
	inline String_t** get_address_of_PreferredAudioCodecExtraParamsRemote_1() { return &___PreferredAudioCodecExtraParamsRemote_1; }
	inline void set_PreferredAudioCodecExtraParamsRemote_1(String_t* value)
	{
		___PreferredAudioCodecExtraParamsRemote_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreferredAudioCodecExtraParamsRemote_1), (void*)value);
	}

	inline static int32_t get_offset_of_PreferredAudioCodecExtraParamsLocal_2() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___PreferredAudioCodecExtraParamsLocal_2)); }
	inline String_t* get_PreferredAudioCodecExtraParamsLocal_2() const { return ___PreferredAudioCodecExtraParamsLocal_2; }
	inline String_t** get_address_of_PreferredAudioCodecExtraParamsLocal_2() { return &___PreferredAudioCodecExtraParamsLocal_2; }
	inline void set_PreferredAudioCodecExtraParamsLocal_2(String_t* value)
	{
		___PreferredAudioCodecExtraParamsLocal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreferredAudioCodecExtraParamsLocal_2), (void*)value);
	}

	inline static int32_t get_offset_of_PreferredVideoCodec_3() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___PreferredVideoCodec_3)); }
	inline String_t* get_PreferredVideoCodec_3() const { return ___PreferredVideoCodec_3; }
	inline String_t** get_address_of_PreferredVideoCodec_3() { return &___PreferredVideoCodec_3; }
	inline void set_PreferredVideoCodec_3(String_t* value)
	{
		___PreferredVideoCodec_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreferredVideoCodec_3), (void*)value);
	}

	inline static int32_t get_offset_of_PreferredVideoCodecExtraParamsRemote_4() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___PreferredVideoCodecExtraParamsRemote_4)); }
	inline String_t* get_PreferredVideoCodecExtraParamsRemote_4() const { return ___PreferredVideoCodecExtraParamsRemote_4; }
	inline String_t** get_address_of_PreferredVideoCodecExtraParamsRemote_4() { return &___PreferredVideoCodecExtraParamsRemote_4; }
	inline void set_PreferredVideoCodecExtraParamsRemote_4(String_t* value)
	{
		___PreferredVideoCodecExtraParamsRemote_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreferredVideoCodecExtraParamsRemote_4), (void*)value);
	}

	inline static int32_t get_offset_of_PreferredVideoCodecExtraParamsLocal_5() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___PreferredVideoCodecExtraParamsLocal_5)); }
	inline String_t* get_PreferredVideoCodecExtraParamsLocal_5() const { return ___PreferredVideoCodecExtraParamsLocal_5; }
	inline String_t** get_address_of_PreferredVideoCodecExtraParamsLocal_5() { return &___PreferredVideoCodecExtraParamsLocal_5; }
	inline void set_PreferredVideoCodecExtraParamsLocal_5(String_t* value)
	{
		___PreferredVideoCodecExtraParamsLocal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreferredVideoCodecExtraParamsLocal_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___U3CNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CNameU3Ek__BackingField_6() const { return ___U3CNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_6() { return &___U3CNameU3Ek__BackingField_6; }
	inline void set_U3CNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsConnectedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___U3CIsConnectedU3Ek__BackingField_7)); }
	inline bool get_U3CIsConnectedU3Ek__BackingField_7() const { return ___U3CIsConnectedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsConnectedU3Ek__BackingField_7() { return &___U3CIsConnectedU3Ek__BackingField_7; }
	inline void set_U3CIsConnectedU3Ek__BackingField_7(bool value)
	{
		___U3CIsConnectedU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CTransceiversU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___U3CTransceiversU3Ek__BackingField_8)); }
	inline List_1_t56CA3975E23B48BA1359D97DD63CC1B0D7B79304 * get_U3CTransceiversU3Ek__BackingField_8() const { return ___U3CTransceiversU3Ek__BackingField_8; }
	inline List_1_t56CA3975E23B48BA1359D97DD63CC1B0D7B79304 ** get_address_of_U3CTransceiversU3Ek__BackingField_8() { return &___U3CTransceiversU3Ek__BackingField_8; }
	inline void set_U3CTransceiversU3Ek__BackingField_8(List_1_t56CA3975E23B48BA1359D97DD63CC1B0D7B79304 * value)
	{
		___U3CTransceiversU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransceiversU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDataChannelsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___U3CDataChannelsU3Ek__BackingField_9)); }
	inline List_1_t935127699A17C6B08C3004EBDA7B08361FBE73EE * get_U3CDataChannelsU3Ek__BackingField_9() const { return ___U3CDataChannelsU3Ek__BackingField_9; }
	inline List_1_t935127699A17C6B08C3004EBDA7B08361FBE73EE ** get_address_of_U3CDataChannelsU3Ek__BackingField_9() { return &___U3CDataChannelsU3Ek__BackingField_9; }
	inline void set_U3CDataChannelsU3Ek__BackingField_9(List_1_t935127699A17C6B08C3004EBDA7B08361FBE73EE * value)
	{
		___U3CDataChannelsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataChannelsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_Connected_10() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___Connected_10)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_Connected_10() const { return ___Connected_10; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_Connected_10() { return &___Connected_10; }
	inline void set_Connected_10(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___Connected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Connected_10), (void*)value);
	}

	inline static int32_t get_offset_of_DataChannelAdded_11() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___DataChannelAdded_11)); }
	inline DataChannelAddedDelegate_t56E9DEA2535AF230519EE18D9AB10E6883FF92D2 * get_DataChannelAdded_11() const { return ___DataChannelAdded_11; }
	inline DataChannelAddedDelegate_t56E9DEA2535AF230519EE18D9AB10E6883FF92D2 ** get_address_of_DataChannelAdded_11() { return &___DataChannelAdded_11; }
	inline void set_DataChannelAdded_11(DataChannelAddedDelegate_t56E9DEA2535AF230519EE18D9AB10E6883FF92D2 * value)
	{
		___DataChannelAdded_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataChannelAdded_11), (void*)value);
	}

	inline static int32_t get_offset_of_DataChannelRemoved_12() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___DataChannelRemoved_12)); }
	inline DataChannelRemovedDelegate_t0B20766E6E8EE9141A10547D59396852F9B3EEC4 * get_DataChannelRemoved_12() const { return ___DataChannelRemoved_12; }
	inline DataChannelRemovedDelegate_t0B20766E6E8EE9141A10547D59396852F9B3EEC4 ** get_address_of_DataChannelRemoved_12() { return &___DataChannelRemoved_12; }
	inline void set_DataChannelRemoved_12(DataChannelRemovedDelegate_t0B20766E6E8EE9141A10547D59396852F9B3EEC4 * value)
	{
		___DataChannelRemoved_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataChannelRemoved_12), (void*)value);
	}

	inline static int32_t get_offset_of_LocalSdpReadytoSend_13() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___LocalSdpReadytoSend_13)); }
	inline LocalSdpReadyToSendDelegate_tF2AF0AFA4BE7DEF0B3A2368910E9BA6A0EA77B6D * get_LocalSdpReadytoSend_13() const { return ___LocalSdpReadytoSend_13; }
	inline LocalSdpReadyToSendDelegate_tF2AF0AFA4BE7DEF0B3A2368910E9BA6A0EA77B6D ** get_address_of_LocalSdpReadytoSend_13() { return &___LocalSdpReadytoSend_13; }
	inline void set_LocalSdpReadytoSend_13(LocalSdpReadyToSendDelegate_tF2AF0AFA4BE7DEF0B3A2368910E9BA6A0EA77B6D * value)
	{
		___LocalSdpReadytoSend_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalSdpReadytoSend_13), (void*)value);
	}

	inline static int32_t get_offset_of_IceCandidateReadytoSend_14() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___IceCandidateReadytoSend_14)); }
	inline IceCandidateReadytoSendDelegate_t15E758D4AA8E60C0FFC15740EE9BE77D0B52A06B * get_IceCandidateReadytoSend_14() const { return ___IceCandidateReadytoSend_14; }
	inline IceCandidateReadytoSendDelegate_t15E758D4AA8E60C0FFC15740EE9BE77D0B52A06B ** get_address_of_IceCandidateReadytoSend_14() { return &___IceCandidateReadytoSend_14; }
	inline void set_IceCandidateReadytoSend_14(IceCandidateReadytoSendDelegate_t15E758D4AA8E60C0FFC15740EE9BE77D0B52A06B * value)
	{
		___IceCandidateReadytoSend_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IceCandidateReadytoSend_14), (void*)value);
	}

	inline static int32_t get_offset_of_IceStateChanged_15() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___IceStateChanged_15)); }
	inline IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F * get_IceStateChanged_15() const { return ___IceStateChanged_15; }
	inline IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F ** get_address_of_IceStateChanged_15() { return &___IceStateChanged_15; }
	inline void set_IceStateChanged_15(IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F * value)
	{
		___IceStateChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IceStateChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of_IceGatheringStateChanged_16() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___IceGatheringStateChanged_16)); }
	inline IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270 * get_IceGatheringStateChanged_16() const { return ___IceGatheringStateChanged_16; }
	inline IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270 ** get_address_of_IceGatheringStateChanged_16() { return &___IceGatheringStateChanged_16; }
	inline void set_IceGatheringStateChanged_16(IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270 * value)
	{
		___IceGatheringStateChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IceGatheringStateChanged_16), (void*)value);
	}

	inline static int32_t get_offset_of_TransceiverAdded_17() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___TransceiverAdded_17)); }
	inline TransceiverAddedDelegate_tF78583228A9B65BDD88FDA96F19114BCC5920AE5 * get_TransceiverAdded_17() const { return ___TransceiverAdded_17; }
	inline TransceiverAddedDelegate_tF78583228A9B65BDD88FDA96F19114BCC5920AE5 ** get_address_of_TransceiverAdded_17() { return &___TransceiverAdded_17; }
	inline void set_TransceiverAdded_17(TransceiverAddedDelegate_tF78583228A9B65BDD88FDA96F19114BCC5920AE5 * value)
	{
		___TransceiverAdded_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TransceiverAdded_17), (void*)value);
	}

	inline static int32_t get_offset_of_AudioTrackAdded_18() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___AudioTrackAdded_18)); }
	inline AudioTrackAddedDelegate_tC36539DA1B47148F352453460BCACDB7E0523E39 * get_AudioTrackAdded_18() const { return ___AudioTrackAdded_18; }
	inline AudioTrackAddedDelegate_tC36539DA1B47148F352453460BCACDB7E0523E39 ** get_address_of_AudioTrackAdded_18() { return &___AudioTrackAdded_18; }
	inline void set_AudioTrackAdded_18(AudioTrackAddedDelegate_tC36539DA1B47148F352453460BCACDB7E0523E39 * value)
	{
		___AudioTrackAdded_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioTrackAdded_18), (void*)value);
	}

	inline static int32_t get_offset_of_AudioTrackRemoved_19() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___AudioTrackRemoved_19)); }
	inline AudioTrackRemovedDelegate_tAD10CEC8F9EDFBFCC58E5AEE95912D835F7E820F * get_AudioTrackRemoved_19() const { return ___AudioTrackRemoved_19; }
	inline AudioTrackRemovedDelegate_tAD10CEC8F9EDFBFCC58E5AEE95912D835F7E820F ** get_address_of_AudioTrackRemoved_19() { return &___AudioTrackRemoved_19; }
	inline void set_AudioTrackRemoved_19(AudioTrackRemovedDelegate_tAD10CEC8F9EDFBFCC58E5AEE95912D835F7E820F * value)
	{
		___AudioTrackRemoved_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioTrackRemoved_19), (void*)value);
	}

	inline static int32_t get_offset_of_VideoTrackAdded_20() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___VideoTrackAdded_20)); }
	inline VideoTrackAddedDelegate_t5BBA530A027A4854290DD6F50A1486A63F61F185 * get_VideoTrackAdded_20() const { return ___VideoTrackAdded_20; }
	inline VideoTrackAddedDelegate_t5BBA530A027A4854290DD6F50A1486A63F61F185 ** get_address_of_VideoTrackAdded_20() { return &___VideoTrackAdded_20; }
	inline void set_VideoTrackAdded_20(VideoTrackAddedDelegate_t5BBA530A027A4854290DD6F50A1486A63F61F185 * value)
	{
		___VideoTrackAdded_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VideoTrackAdded_20), (void*)value);
	}

	inline static int32_t get_offset_of_VideoTrackRemoved_21() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ___VideoTrackRemoved_21)); }
	inline VideoTrackRemovedDelegate_t1D0546397E1683375352D2ED0E04F22D2484A859 * get_VideoTrackRemoved_21() const { return ___VideoTrackRemoved_21; }
	inline VideoTrackRemovedDelegate_t1D0546397E1683375352D2ED0E04F22D2484A859 ** get_address_of_VideoTrackRemoved_21() { return &___VideoTrackRemoved_21; }
	inline void set_VideoTrackRemoved_21(VideoTrackRemovedDelegate_t1D0546397E1683375352D2ED0E04F22D2484A859 * value)
	{
		___VideoTrackRemoved_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VideoTrackRemoved_21), (void*)value);
	}

	inline static int32_t get_offset_of__selfHandle_22() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ____selfHandle_22)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get__selfHandle_22() const { return ____selfHandle_22; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of__selfHandle_22() { return &____selfHandle_22; }
	inline void set__selfHandle_22(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		____selfHandle_22 = value;
	}

	inline static int32_t get_offset_of__nativePeerhandle_23() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ____nativePeerhandle_23)); }
	inline PeerConnectionHandle_t54B5713A0D831FD8B66D7E0F16D81125CB5907E3 * get__nativePeerhandle_23() const { return ____nativePeerhandle_23; }
	inline PeerConnectionHandle_t54B5713A0D831FD8B66D7E0F16D81125CB5907E3 ** get_address_of__nativePeerhandle_23() { return &____nativePeerhandle_23; }
	inline void set__nativePeerhandle_23(PeerConnectionHandle_t54B5713A0D831FD8B66D7E0F16D81125CB5907E3 * value)
	{
		____nativePeerhandle_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativePeerhandle_23), (void*)value);
	}

	inline static int32_t get_offset_of__initTask_24() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ____initTask_24)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get__initTask_24() const { return ____initTask_24; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of__initTask_24() { return &____initTask_24; }
	inline void set__initTask_24(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		____initTask_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____initTask_24), (void*)value);
	}

	inline static int32_t get_offset_of__isClosing_25() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ____isClosing_25)); }
	inline bool get__isClosing_25() const { return ____isClosing_25; }
	inline bool* get_address_of__isClosing_25() { return &____isClosing_25; }
	inline void set__isClosing_25(bool value)
	{
		____isClosing_25 = value;
	}

	inline static int32_t get_offset_of__openCloseLock_26() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ____openCloseLock_26)); }
	inline RuntimeObject * get__openCloseLock_26() const { return ____openCloseLock_26; }
	inline RuntimeObject ** get_address_of__openCloseLock_26() { return &____openCloseLock_26; }
	inline void set__openCloseLock_26(RuntimeObject * value)
	{
		____openCloseLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____openCloseLock_26), (void*)value);
	}

	inline static int32_t get_offset_of__peerCallbackArgs_27() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ____peerCallbackArgs_27)); }
	inline PeerCallbackArgs_t785841D4E3A4C3DF4073E0E2BFDF2CF0909DF5C2 * get__peerCallbackArgs_27() const { return ____peerCallbackArgs_27; }
	inline PeerCallbackArgs_t785841D4E3A4C3DF4073E0E2BFDF2CF0909DF5C2 ** get_address_of__peerCallbackArgs_27() { return &____peerCallbackArgs_27; }
	inline void set__peerCallbackArgs_27(PeerCallbackArgs_t785841D4E3A4C3DF4073E0E2BFDF2CF0909DF5C2 * value)
	{
		____peerCallbackArgs_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____peerCallbackArgs_27), (void*)value);
	}

	inline static int32_t get_offset_of__tracksLock_28() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ____tracksLock_28)); }
	inline RuntimeObject * get__tracksLock_28() const { return ____tracksLock_28; }
	inline RuntimeObject ** get_address_of__tracksLock_28() { return &____tracksLock_28; }
	inline void set__tracksLock_28(RuntimeObject * value)
	{
		____tracksLock_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tracksLock_28), (void*)value);
	}

	inline static int32_t get_offset_of__renegotiationNeededEvent_29() { return static_cast<int32_t>(offsetof(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89, ____renegotiationNeededEvent_29)); }
	inline DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * get__renegotiationNeededEvent_29() const { return ____renegotiationNeededEvent_29; }
	inline DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 ** get_address_of__renegotiationNeededEvent_29() { return &____renegotiationNeededEvent_29; }
	inline void set__renegotiationNeededEvent_29(DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * value)
	{
		____renegotiationNeededEvent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____renegotiationNeededEvent_29), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.RemoteAudioTrack
struct  RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7  : public MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96
{
public:
	// Microsoft.MixedReality.WebRTC.AudioFrameDelegate Microsoft.MixedReality.WebRTC.RemoteAudioTrack::AudioFrameReady
	AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 * ___AudioFrameReady_3;
	// Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop_RemoteAudioTrackHandle Microsoft.MixedReality.WebRTC.RemoteAudioTrack::_nativeHandle
	RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * ____nativeHandle_4;
	// System.IntPtr Microsoft.MixedReality.WebRTC.RemoteAudioTrack::_selfHandle
	intptr_t ____selfHandle_5;
	// Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop_InteropCallbackArgs Microsoft.MixedReality.WebRTC.RemoteAudioTrack::_interopCallbackArgs
	InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895 * ____interopCallbackArgs_6;

public:
	inline static int32_t get_offset_of_AudioFrameReady_3() { return static_cast<int32_t>(offsetof(RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7, ___AudioFrameReady_3)); }
	inline AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 * get_AudioFrameReady_3() const { return ___AudioFrameReady_3; }
	inline AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 ** get_address_of_AudioFrameReady_3() { return &___AudioFrameReady_3; }
	inline void set_AudioFrameReady_3(AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 * value)
	{
		___AudioFrameReady_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioFrameReady_3), (void*)value);
	}

	inline static int32_t get_offset_of__nativeHandle_4() { return static_cast<int32_t>(offsetof(RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7, ____nativeHandle_4)); }
	inline RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * get__nativeHandle_4() const { return ____nativeHandle_4; }
	inline RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D ** get_address_of__nativeHandle_4() { return &____nativeHandle_4; }
	inline void set__nativeHandle_4(RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * value)
	{
		____nativeHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of__selfHandle_5() { return static_cast<int32_t>(offsetof(RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7, ____selfHandle_5)); }
	inline intptr_t get__selfHandle_5() const { return ____selfHandle_5; }
	inline intptr_t* get_address_of__selfHandle_5() { return &____selfHandle_5; }
	inline void set__selfHandle_5(intptr_t value)
	{
		____selfHandle_5 = value;
	}

	inline static int32_t get_offset_of__interopCallbackArgs_6() { return static_cast<int32_t>(offsetof(RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7, ____interopCallbackArgs_6)); }
	inline InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895 * get__interopCallbackArgs_6() const { return ____interopCallbackArgs_6; }
	inline InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895 ** get_address_of__interopCallbackArgs_6() { return &____interopCallbackArgs_6; }
	inline void set__interopCallbackArgs_6(InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895 * value)
	{
		____interopCallbackArgs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interopCallbackArgs_6), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.RemoteVideoTrack
struct  RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F  : public MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96
{
public:
	// Microsoft.MixedReality.WebRTC.Interop.RemoteVideoTrackInterop_RemoteVideoTrackHandle Microsoft.MixedReality.WebRTC.RemoteVideoTrack::_nativeHandle
	RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * ____nativeHandle_3;
	// System.IntPtr Microsoft.MixedReality.WebRTC.RemoteVideoTrack::_selfHandle
	intptr_t ____selfHandle_4;
	// System.Object Microsoft.MixedReality.WebRTC.RemoteVideoTrack::_videoFrameReadyLock
	RuntimeObject * ____videoFrameReadyLock_5;
	// Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate Microsoft.MixedReality.WebRTC.RemoteVideoTrack::_videoFrameReady
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ____videoFrameReady_6;
	// Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate Microsoft.MixedReality.WebRTC.RemoteVideoTrack::_argb32VideoFrameReady
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ____argb32VideoFrameReady_7;

public:
	inline static int32_t get_offset_of__nativeHandle_3() { return static_cast<int32_t>(offsetof(RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F, ____nativeHandle_3)); }
	inline RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * get__nativeHandle_3() const { return ____nativeHandle_3; }
	inline RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B ** get_address_of__nativeHandle_3() { return &____nativeHandle_3; }
	inline void set__nativeHandle_3(RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * value)
	{
		____nativeHandle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeHandle_3), (void*)value);
	}

	inline static int32_t get_offset_of__selfHandle_4() { return static_cast<int32_t>(offsetof(RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F, ____selfHandle_4)); }
	inline intptr_t get__selfHandle_4() const { return ____selfHandle_4; }
	inline intptr_t* get_address_of__selfHandle_4() { return &____selfHandle_4; }
	inline void set__selfHandle_4(intptr_t value)
	{
		____selfHandle_4 = value;
	}

	inline static int32_t get_offset_of__videoFrameReadyLock_5() { return static_cast<int32_t>(offsetof(RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F, ____videoFrameReadyLock_5)); }
	inline RuntimeObject * get__videoFrameReadyLock_5() const { return ____videoFrameReadyLock_5; }
	inline RuntimeObject ** get_address_of__videoFrameReadyLock_5() { return &____videoFrameReadyLock_5; }
	inline void set__videoFrameReadyLock_5(RuntimeObject * value)
	{
		____videoFrameReadyLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoFrameReadyLock_5), (void*)value);
	}

	inline static int32_t get_offset_of__videoFrameReady_6() { return static_cast<int32_t>(offsetof(RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F, ____videoFrameReady_6)); }
	inline I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * get__videoFrameReady_6() const { return ____videoFrameReady_6; }
	inline I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 ** get_address_of__videoFrameReady_6() { return &____videoFrameReady_6; }
	inline void set__videoFrameReady_6(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * value)
	{
		____videoFrameReady_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoFrameReady_6), (void*)value);
	}

	inline static int32_t get_offset_of__argb32VideoFrameReady_7() { return static_cast<int32_t>(offsetof(RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F, ____argb32VideoFrameReady_7)); }
	inline Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * get__argb32VideoFrameReady_7() const { return ____argb32VideoFrameReady_7; }
	inline Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 ** get_address_of__argb32VideoFrameReady_7() { return &____argb32VideoFrameReady_7; }
	inline void set__argb32VideoFrameReady_7(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * value)
	{
		____argb32VideoFrameReady_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____argb32VideoFrameReady_7), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.SdpMessageType
struct  SdpMessageType_t6B41E3FB5EB57CBB13250EBF630C0736D3EFC50B 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.SdpMessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SdpMessageType_t6B41E3FB5EB57CBB13250EBF630C0736D3EFC50B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.SdpSemantic
struct  SdpSemantic_tDAF37D37EC680F0EC37F7FC9FE03465F863C2C4A 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.SdpSemantic::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SdpSemantic_tDAF37D37EC680F0EC37F7FC9FE03465F863C2C4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.Tracing.EventKeywords
struct  EventKeywords_t4E3F72BA0A317D04D8F525F4428AC858E1C0CC57 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.Tracing.EventKeywords::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventKeywords_t4E3F72BA0A317D04D8F525F4428AC858E1C0CC57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.Tracing.EventLevel
struct  EventLevel_tF6EC8AC98661C3D09FB4BAA680CACEFFACADE44A 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.Tracing.EventLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventLevel_tF6EC8AC98661C3D09FB4BAA680CACEFFACADE44A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.Transceiver_Direction
struct  Direction_t4EDB4E9C2ED14ED3B8429EA64AC9C0FF40E41F85 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.Transceiver_Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_t4EDB4E9C2ED14ED3B8429EA64AC9C0FF40E41F85, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.VideoEncoding
struct  VideoEncoding_t2D7307E3D01260C04CFE3676C179CC17DE38B887 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.VideoEncoding::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoEncoding_t2D7307E3D01260C04CFE3676C179CC17DE38B887, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.VideoProfileKind
struct  VideoProfileKind_t1E6EE4CCD01A8C093DAA19B747E8A4DC26C7102E 
{
public:
	// System.Int32 Microsoft.MixedReality.WebRTC.VideoProfileKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoProfileKind_t1E6EE4CCD01A8C093DAA19B747E8A4DC26C7102E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WebRTC.VideoTrackSource
struct  VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle Microsoft.MixedReality.WebRTC.VideoTrackSource::<_nativeHandle>k__BackingField
	VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * ___U3C_nativeHandleU3Ek__BackingField_0;
	// System.IntPtr Microsoft.MixedReality.WebRTC.VideoTrackSource::_selfHandle
	intptr_t ____selfHandle_1;
	// System.String Microsoft.MixedReality.WebRTC.VideoTrackSource::_name
	String_t* ____name_2;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.LocalVideoTrack> Microsoft.MixedReality.WebRTC.VideoTrackSource::_tracks
	List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * ____tracks_3;
	// System.Object Microsoft.MixedReality.WebRTC.VideoTrackSource::_videoFrameReadyLock
	RuntimeObject * ____videoFrameReadyLock_4;
	// Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate Microsoft.MixedReality.WebRTC.VideoTrackSource::_videoFrameReady
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ____videoFrameReady_5;
	// Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate Microsoft.MixedReality.WebRTC.VideoTrackSource::_argb32VideoFrameReady
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ____argb32VideoFrameReady_6;

public:
	inline static int32_t get_offset_of_U3C_nativeHandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D, ___U3C_nativeHandleU3Ek__BackingField_0)); }
	inline VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * get_U3C_nativeHandleU3Ek__BackingField_0() const { return ___U3C_nativeHandleU3Ek__BackingField_0; }
	inline VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 ** get_address_of_U3C_nativeHandleU3Ek__BackingField_0() { return &___U3C_nativeHandleU3Ek__BackingField_0; }
	inline void set_U3C_nativeHandleU3Ek__BackingField_0(VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * value)
	{
		___U3C_nativeHandleU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_nativeHandleU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of__selfHandle_1() { return static_cast<int32_t>(offsetof(VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D, ____selfHandle_1)); }
	inline intptr_t get__selfHandle_1() const { return ____selfHandle_1; }
	inline intptr_t* get_address_of__selfHandle_1() { return &____selfHandle_1; }
	inline void set__selfHandle_1(intptr_t value)
	{
		____selfHandle_1 = value;
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_2), (void*)value);
	}

	inline static int32_t get_offset_of__tracks_3() { return static_cast<int32_t>(offsetof(VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D, ____tracks_3)); }
	inline List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * get__tracks_3() const { return ____tracks_3; }
	inline List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 ** get_address_of__tracks_3() { return &____tracks_3; }
	inline void set__tracks_3(List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * value)
	{
		____tracks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tracks_3), (void*)value);
	}

	inline static int32_t get_offset_of__videoFrameReadyLock_4() { return static_cast<int32_t>(offsetof(VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D, ____videoFrameReadyLock_4)); }
	inline RuntimeObject * get__videoFrameReadyLock_4() const { return ____videoFrameReadyLock_4; }
	inline RuntimeObject ** get_address_of__videoFrameReadyLock_4() { return &____videoFrameReadyLock_4; }
	inline void set__videoFrameReadyLock_4(RuntimeObject * value)
	{
		____videoFrameReadyLock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoFrameReadyLock_4), (void*)value);
	}

	inline static int32_t get_offset_of__videoFrameReady_5() { return static_cast<int32_t>(offsetof(VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D, ____videoFrameReady_5)); }
	inline I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * get__videoFrameReady_5() const { return ____videoFrameReady_5; }
	inline I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 ** get_address_of__videoFrameReady_5() { return &____videoFrameReady_5; }
	inline void set__videoFrameReady_5(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * value)
	{
		____videoFrameReady_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoFrameReady_5), (void*)value);
	}

	inline static int32_t get_offset_of__argb32VideoFrameReady_6() { return static_cast<int32_t>(offsetof(VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D, ____argb32VideoFrameReady_6)); }
	inline Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * get__argb32VideoFrameReady_6() const { return ____argb32VideoFrameReady_6; }
	inline Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 ** get_address_of__argb32VideoFrameReady_6() { return &____argb32VideoFrameReady_6; }
	inline void set__argb32VideoFrameReady_6(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * value)
	{
		____argb32VideoFrameReady_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____argb32VideoFrameReady_6), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};


// Microsoft.MixedReality.WebRTC.DataChannel
struct  DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WebRTC.PeerConnection Microsoft.MixedReality.WebRTC.DataChannel::<PeerConnection>k__BackingField
	PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * ___U3CPeerConnectionU3Ek__BackingField_0;
	// System.Int32 Microsoft.MixedReality.WebRTC.DataChannel::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.WebRTC.DataChannel::<Label>k__BackingField
	String_t* ___U3CLabelU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.WebRTC.DataChannel::<Ordered>k__BackingField
	bool ___U3COrderedU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.WebRTC.DataChannel::<Reliable>k__BackingField
	bool ___U3CReliableU3Ek__BackingField_4;
	// Microsoft.MixedReality.WebRTC.DataChannel_ChannelState Microsoft.MixedReality.WebRTC.DataChannel::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_5;
	// System.Action Microsoft.MixedReality.WebRTC.DataChannel::StateChanged
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___StateChanged_6;
	// Microsoft.MixedReality.WebRTC.DataChannel_BufferingChangedDelegate Microsoft.MixedReality.WebRTC.DataChannel::BufferingChanged
	BufferingChangedDelegate_tDE9368CDEE676CEF66EF9DEA08DC58719BFB0BFA * ___BufferingChanged_7;
	// System.Action`1<System.Byte[]> Microsoft.MixedReality.WebRTC.DataChannel::MessageReceived
	Action_1_tC54AF61396E7B78AF7B418E8DC90E311B4402461 * ___MessageReceived_8;
	// System.Action`2<System.IntPtr,System.UInt64> Microsoft.MixedReality.WebRTC.DataChannel::MessageReceivedUnsafe
	Action_2_t6F61AD364B12DA631F577E649DB36E99C815BBAC * ___MessageReceivedUnsafe_9;
	// System.IntPtr Microsoft.MixedReality.WebRTC.DataChannel::_argsRef
	intptr_t ____argsRef_10;
	// System.IntPtr Microsoft.MixedReality.WebRTC.DataChannel::_nativeHandle
	intptr_t ____nativeHandle_11;

public:
	inline static int32_t get_offset_of_U3CPeerConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ___U3CPeerConnectionU3Ek__BackingField_0)); }
	inline PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * get_U3CPeerConnectionU3Ek__BackingField_0() const { return ___U3CPeerConnectionU3Ek__BackingField_0; }
	inline PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 ** get_address_of_U3CPeerConnectionU3Ek__BackingField_0() { return &___U3CPeerConnectionU3Ek__BackingField_0; }
	inline void set_U3CPeerConnectionU3Ek__BackingField_0(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * value)
	{
		___U3CPeerConnectionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPeerConnectionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ___U3CIDU3Ek__BackingField_1)); }
	inline int32_t get_U3CIDU3Ek__BackingField_1() const { return ___U3CIDU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIDU3Ek__BackingField_1() { return &___U3CIDU3Ek__BackingField_1; }
	inline void set_U3CIDU3Ek__BackingField_1(int32_t value)
	{
		___U3CIDU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CLabelU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ___U3CLabelU3Ek__BackingField_2)); }
	inline String_t* get_U3CLabelU3Ek__BackingField_2() const { return ___U3CLabelU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CLabelU3Ek__BackingField_2() { return &___U3CLabelU3Ek__BackingField_2; }
	inline void set_U3CLabelU3Ek__BackingField_2(String_t* value)
	{
		___U3CLabelU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLabelU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ___U3COrderedU3Ek__BackingField_3)); }
	inline bool get_U3COrderedU3Ek__BackingField_3() const { return ___U3COrderedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3COrderedU3Ek__BackingField_3() { return &___U3COrderedU3Ek__BackingField_3; }
	inline void set_U3COrderedU3Ek__BackingField_3(bool value)
	{
		___U3COrderedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CReliableU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ___U3CReliableU3Ek__BackingField_4)); }
	inline bool get_U3CReliableU3Ek__BackingField_4() const { return ___U3CReliableU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CReliableU3Ek__BackingField_4() { return &___U3CReliableU3Ek__BackingField_4; }
	inline void set_U3CReliableU3Ek__BackingField_4(bool value)
	{
		___U3CReliableU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ___U3CStateU3Ek__BackingField_5)); }
	inline int32_t get_U3CStateU3Ek__BackingField_5() const { return ___U3CStateU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_5() { return &___U3CStateU3Ek__BackingField_5; }
	inline void set_U3CStateU3Ek__BackingField_5(int32_t value)
	{
		___U3CStateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_StateChanged_6() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ___StateChanged_6)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_StateChanged_6() const { return ___StateChanged_6; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_StateChanged_6() { return &___StateChanged_6; }
	inline void set_StateChanged_6(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___StateChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_BufferingChanged_7() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ___BufferingChanged_7)); }
	inline BufferingChangedDelegate_tDE9368CDEE676CEF66EF9DEA08DC58719BFB0BFA * get_BufferingChanged_7() const { return ___BufferingChanged_7; }
	inline BufferingChangedDelegate_tDE9368CDEE676CEF66EF9DEA08DC58719BFB0BFA ** get_address_of_BufferingChanged_7() { return &___BufferingChanged_7; }
	inline void set_BufferingChanged_7(BufferingChangedDelegate_tDE9368CDEE676CEF66EF9DEA08DC58719BFB0BFA * value)
	{
		___BufferingChanged_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BufferingChanged_7), (void*)value);
	}

	inline static int32_t get_offset_of_MessageReceived_8() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ___MessageReceived_8)); }
	inline Action_1_tC54AF61396E7B78AF7B418E8DC90E311B4402461 * get_MessageReceived_8() const { return ___MessageReceived_8; }
	inline Action_1_tC54AF61396E7B78AF7B418E8DC90E311B4402461 ** get_address_of_MessageReceived_8() { return &___MessageReceived_8; }
	inline void set_MessageReceived_8(Action_1_tC54AF61396E7B78AF7B418E8DC90E311B4402461 * value)
	{
		___MessageReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_MessageReceivedUnsafe_9() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ___MessageReceivedUnsafe_9)); }
	inline Action_2_t6F61AD364B12DA631F577E649DB36E99C815BBAC * get_MessageReceivedUnsafe_9() const { return ___MessageReceivedUnsafe_9; }
	inline Action_2_t6F61AD364B12DA631F577E649DB36E99C815BBAC ** get_address_of_MessageReceivedUnsafe_9() { return &___MessageReceivedUnsafe_9; }
	inline void set_MessageReceivedUnsafe_9(Action_2_t6F61AD364B12DA631F577E649DB36E99C815BBAC * value)
	{
		___MessageReceivedUnsafe_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageReceivedUnsafe_9), (void*)value);
	}

	inline static int32_t get_offset_of__argsRef_10() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ____argsRef_10)); }
	inline intptr_t get__argsRef_10() const { return ____argsRef_10; }
	inline intptr_t* get_address_of__argsRef_10() { return &____argsRef_10; }
	inline void set__argsRef_10(intptr_t value)
	{
		____argsRef_10 = value;
	}

	inline static int32_t get_offset_of__nativeHandle_11() { return static_cast<int32_t>(offsetof(DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B, ____nativeHandle_11)); }
	inline intptr_t get__nativeHandle_11() const { return ____nativeHandle_11; }
	inline intptr_t* get_address_of__nativeHandle_11() { return &____nativeHandle_11; }
	inline void set__nativeHandle_11(intptr_t value)
	{
		____nativeHandle_11 = value;
	}
};


// Microsoft.MixedReality.WebRTC.Interop.ObjectHandle
struct  ObjectHandle_t4906943620415D4E00D27B59F6039802D454C0FD  : public SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop_ReadBufferHandle
struct  ReadBufferHandle_t8437ADC4DA89C333F16D756BF5C8FABC840FFE99  : public SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnection_StatsReport_Handle
struct  Handle_tCC6496ABB381032CD917362358971825A947788C  : public SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnectionConfiguration
struct  PeerConnectionConfiguration_t2EC5AD5A5B893F1E3C668A9544E197AF3A65FE6E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.IceServer> Microsoft.MixedReality.WebRTC.PeerConnectionConfiguration::IceServers
	List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A * ___IceServers_0;
	// Microsoft.MixedReality.WebRTC.IceTransportType Microsoft.MixedReality.WebRTC.PeerConnectionConfiguration::IceTransportType
	int32_t ___IceTransportType_1;
	// Microsoft.MixedReality.WebRTC.BundlePolicy Microsoft.MixedReality.WebRTC.PeerConnectionConfiguration::BundlePolicy
	int32_t ___BundlePolicy_2;
	// Microsoft.MixedReality.WebRTC.SdpSemantic Microsoft.MixedReality.WebRTC.PeerConnectionConfiguration::SdpSemantic
	int32_t ___SdpSemantic_3;

public:
	inline static int32_t get_offset_of_IceServers_0() { return static_cast<int32_t>(offsetof(PeerConnectionConfiguration_t2EC5AD5A5B893F1E3C668A9544E197AF3A65FE6E, ___IceServers_0)); }
	inline List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A * get_IceServers_0() const { return ___IceServers_0; }
	inline List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A ** get_address_of_IceServers_0() { return &___IceServers_0; }
	inline void set_IceServers_0(List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A * value)
	{
		___IceServers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IceServers_0), (void*)value);
	}

	inline static int32_t get_offset_of_IceTransportType_1() { return static_cast<int32_t>(offsetof(PeerConnectionConfiguration_t2EC5AD5A5B893F1E3C668A9544E197AF3A65FE6E, ___IceTransportType_1)); }
	inline int32_t get_IceTransportType_1() const { return ___IceTransportType_1; }
	inline int32_t* get_address_of_IceTransportType_1() { return &___IceTransportType_1; }
	inline void set_IceTransportType_1(int32_t value)
	{
		___IceTransportType_1 = value;
	}

	inline static int32_t get_offset_of_BundlePolicy_2() { return static_cast<int32_t>(offsetof(PeerConnectionConfiguration_t2EC5AD5A5B893F1E3C668A9544E197AF3A65FE6E, ___BundlePolicy_2)); }
	inline int32_t get_BundlePolicy_2() const { return ___BundlePolicy_2; }
	inline int32_t* get_address_of_BundlePolicy_2() { return &___BundlePolicy_2; }
	inline void set_BundlePolicy_2(int32_t value)
	{
		___BundlePolicy_2 = value;
	}

	inline static int32_t get_offset_of_SdpSemantic_3() { return static_cast<int32_t>(offsetof(PeerConnectionConfiguration_t2EC5AD5A5B893F1E3C668A9544E197AF3A65FE6E, ___SdpSemantic_3)); }
	inline int32_t get_SdpSemantic_3() const { return ___SdpSemantic_3; }
	inline int32_t* get_address_of_SdpSemantic_3() { return &___SdpSemantic_3; }
	inline void set_SdpSemantic_3(int32_t value)
	{
		___SdpSemantic_3 = value;
	}
};


// Microsoft.MixedReality.WebRTC.SctpNotNegotiatedException
struct  SctpNotNegotiatedException_t0DDCAA2882C001CDB9684361B570ADBA17AF5008  : public Exception_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.SdpMessage
struct  SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WebRTC.SdpMessageType Microsoft.MixedReality.WebRTC.SdpMessage::Type
	int32_t ___Type_0;
	// System.String Microsoft.MixedReality.WebRTC.SdpMessage::Content
	String_t* ___Content_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Content_1() { return static_cast<int32_t>(offsetof(SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2, ___Content_1)); }
	inline String_t* get_Content_1() const { return ___Content_1; }
	inline String_t** get_address_of_Content_1() { return &___Content_1; }
	inline void set_Content_1(String_t* value)
	{
		___Content_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Content_1), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.Tracing.EventAttribute
struct  EventAttribute_t985CF6718DB0A5DC5085FB5043A817FD34746FCE  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// Microsoft.MixedReality.WebRTC.Tracing.EventLevel Microsoft.MixedReality.WebRTC.Tracing.EventAttribute::<Level>k__BackingField
	int32_t ___U3CLevelU3Ek__BackingField_0;
	// Microsoft.MixedReality.WebRTC.Tracing.EventKeywords Microsoft.MixedReality.WebRTC.Tracing.EventAttribute::<Keywords>k__BackingField
	int32_t ___U3CKeywordsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLevelU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EventAttribute_t985CF6718DB0A5DC5085FB5043A817FD34746FCE, ___U3CLevelU3Ek__BackingField_0)); }
	inline int32_t get_U3CLevelU3Ek__BackingField_0() const { return ___U3CLevelU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CLevelU3Ek__BackingField_0() { return &___U3CLevelU3Ek__BackingField_0; }
	inline void set_U3CLevelU3Ek__BackingField_0(int32_t value)
	{
		___U3CLevelU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EventAttribute_t985CF6718DB0A5DC5085FB5043A817FD34746FCE, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline int32_t get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(int32_t value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
	}
};


// Microsoft.MixedReality.WebRTC.TransceiverInitSettings
struct  TransceiverInitSettings_t49FC713C95F7F674C8E5D8040A0A0B2746EF9B90  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.WebRTC.TransceiverInitSettings::Name
	String_t* ___Name_0;
	// Microsoft.MixedReality.WebRTC.Transceiver_Direction Microsoft.MixedReality.WebRTC.TransceiverInitSettings::InitialDesiredDirection
	int32_t ___InitialDesiredDirection_1;
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.WebRTC.TransceiverInitSettings::StreamIDs
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___StreamIDs_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TransceiverInitSettings_t49FC713C95F7F674C8E5D8040A0A0B2746EF9B90, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_InitialDesiredDirection_1() { return static_cast<int32_t>(offsetof(TransceiverInitSettings_t49FC713C95F7F674C8E5D8040A0A0B2746EF9B90, ___InitialDesiredDirection_1)); }
	inline int32_t get_InitialDesiredDirection_1() const { return ___InitialDesiredDirection_1; }
	inline int32_t* get_address_of_InitialDesiredDirection_1() { return &___InitialDesiredDirection_1; }
	inline void set_InitialDesiredDirection_1(int32_t value)
	{
		___InitialDesiredDirection_1 = value;
	}

	inline static int32_t get_offset_of_StreamIDs_2() { return static_cast<int32_t>(offsetof(TransceiverInitSettings_t49FC713C95F7F674C8E5D8040A0A0B2746EF9B90, ___StreamIDs_2)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_StreamIDs_2() const { return ___StreamIDs_2; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_StreamIDs_2() { return &___StreamIDs_2; }
	inline void set_StreamIDs_2(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___StreamIDs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StreamIDs_2), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver_Direction>
struct  Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32Enum>
struct  Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate
struct  Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.AudioFrameDelegate
struct  AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate
struct  I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.AudioTrackInterop_AudioFrameUnmanagedCallback
struct  AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.RefCountedObjectHandle
struct  RefCountedObjectHandle_tE4E75DB5D6A37ABEC2AD6D73EDF79D27FC28D5D4  : public ObjectHandle_t4906943620415D4E00D27B59F6039802D454C0FD
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop_RemoteAudioTrackHandle
struct  RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D  : public ObjectHandle_t4906943620415D4E00D27B59F6039802D454C0FD
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.RemoteVideoTrackInterop_RemoteVideoTrackHandle
struct  RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B  : public ObjectHandle_t4906943620415D4E00D27B59F6039802D454C0FD
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.TransceiverInterop_TransceiverHandle
struct  TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A  : public ObjectHandle_t4906943620415D4E00D27B59F6039802D454C0FD
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop_Argb32VideoFrameUnmanagedCallback
struct  Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop_I420AVideoFrameUnmanagedCallback
struct  I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnection_AudioTrackRemovedDelegate
struct  AudioTrackRemovedDelegate_tAD10CEC8F9EDFBFCC58E5AEE95912D835F7E820F  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelAddedDelegate
struct  DataChannelAddedDelegate_t56E9DEA2535AF230519EE18D9AB10E6883FF92D2  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelRemovedDelegate
struct  DataChannelRemovedDelegate_t0B20766E6E8EE9141A10547D59396852F9B3EEC4  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnection_IceCandidateReadytoSendDelegate
struct  IceCandidateReadytoSendDelegate_t15E758D4AA8E60C0FFC15740EE9BE77D0B52A06B  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnection_IceGatheringStateChangedDelegate
struct  IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnection_IceStateChangedDelegate
struct  IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnection_LocalSdpReadyToSendDelegate
struct  LocalSdpReadyToSendDelegate_tF2AF0AFA4BE7DEF0B3A2368910E9BA6A0EA77B6D  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnection_TransceiverAddedDelegate
struct  TransceiverAddedDelegate_tF78583228A9B65BDD88FDA96F19114BCC5920AE5  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackAddedDelegate
struct  VideoTrackAddedDelegate_t5BBA530A027A4854290DD6F50A1486A63F61F185  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackRemovedDelegate
struct  VideoTrackRemovedDelegate_t1D0546397E1683375352D2ED0E04F22D2484A859  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Transceiver
struct  Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.WebRTC.Transceiver::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// Microsoft.MixedReality.WebRTC.MediaKind Microsoft.MixedReality.WebRTC.Transceiver::<MediaKind>k__BackingField
	uint32_t ___U3CMediaKindU3Ek__BackingField_1;
	// Microsoft.MixedReality.WebRTC.PeerConnection Microsoft.MixedReality.WebRTC.Transceiver::<PeerConnection>k__BackingField
	PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * ___U3CPeerConnectionU3Ek__BackingField_2;
	// System.Int32 Microsoft.MixedReality.WebRTC.Transceiver::<MlineIndex>k__BackingField
	int32_t ___U3CMlineIndexU3Ek__BackingField_3;
	// Microsoft.MixedReality.WebRTC.TransceiverAssociatedDelegate Microsoft.MixedReality.WebRTC.Transceiver::Associated
	TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * ___Associated_4;
	// System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver_Direction> Microsoft.MixedReality.WebRTC.Transceiver::<NegotiatedDirection>k__BackingField
	Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  ___U3CNegotiatedDirectionU3Ek__BackingField_5;
	// Microsoft.MixedReality.WebRTC.TransceiverDirectionChangedDelegate Microsoft.MixedReality.WebRTC.Transceiver::DirectionChanged
	TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * ___DirectionChanged_6;
	// System.String[] Microsoft.MixedReality.WebRTC.Transceiver::<StreamIDs>k__BackingField
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___U3CStreamIDsU3Ek__BackingField_7;
	// Microsoft.MixedReality.WebRTC.Transceiver_Direction Microsoft.MixedReality.WebRTC.Transceiver::_desiredDirection
	int32_t ____desiredDirection_8;
	// Microsoft.MixedReality.WebRTC.Interop.TransceiverInterop_TransceiverHandle Microsoft.MixedReality.WebRTC.Transceiver::_nativeHandle
	TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * ____nativeHandle_9;
	// System.IntPtr Microsoft.MixedReality.WebRTC.Transceiver::_argsRef
	intptr_t ____argsRef_10;
	// Microsoft.MixedReality.WebRTC.LocalMediaTrack Microsoft.MixedReality.WebRTC.Transceiver::_localTrack
	LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * ____localTrack_11;
	// Microsoft.MixedReality.WebRTC.MediaTrack Microsoft.MixedReality.WebRTC.Transceiver::_remoteTrack
	MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * ____remoteTrack_12;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediaKindU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ___U3CMediaKindU3Ek__BackingField_1)); }
	inline uint32_t get_U3CMediaKindU3Ek__BackingField_1() const { return ___U3CMediaKindU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CMediaKindU3Ek__BackingField_1() { return &___U3CMediaKindU3Ek__BackingField_1; }
	inline void set_U3CMediaKindU3Ek__BackingField_1(uint32_t value)
	{
		___U3CMediaKindU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPeerConnectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ___U3CPeerConnectionU3Ek__BackingField_2)); }
	inline PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * get_U3CPeerConnectionU3Ek__BackingField_2() const { return ___U3CPeerConnectionU3Ek__BackingField_2; }
	inline PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 ** get_address_of_U3CPeerConnectionU3Ek__BackingField_2() { return &___U3CPeerConnectionU3Ek__BackingField_2; }
	inline void set_U3CPeerConnectionU3Ek__BackingField_2(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * value)
	{
		___U3CPeerConnectionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPeerConnectionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMlineIndexU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ___U3CMlineIndexU3Ek__BackingField_3)); }
	inline int32_t get_U3CMlineIndexU3Ek__BackingField_3() const { return ___U3CMlineIndexU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CMlineIndexU3Ek__BackingField_3() { return &___U3CMlineIndexU3Ek__BackingField_3; }
	inline void set_U3CMlineIndexU3Ek__BackingField_3(int32_t value)
	{
		___U3CMlineIndexU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_Associated_4() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ___Associated_4)); }
	inline TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * get_Associated_4() const { return ___Associated_4; }
	inline TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 ** get_address_of_Associated_4() { return &___Associated_4; }
	inline void set_Associated_4(TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * value)
	{
		___Associated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Associated_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNegotiatedDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ___U3CNegotiatedDirectionU3Ek__BackingField_5)); }
	inline Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  get_U3CNegotiatedDirectionU3Ek__BackingField_5() const { return ___U3CNegotiatedDirectionU3Ek__BackingField_5; }
	inline Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD * get_address_of_U3CNegotiatedDirectionU3Ek__BackingField_5() { return &___U3CNegotiatedDirectionU3Ek__BackingField_5; }
	inline void set_U3CNegotiatedDirectionU3Ek__BackingField_5(Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  value)
	{
		___U3CNegotiatedDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_DirectionChanged_6() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ___DirectionChanged_6)); }
	inline TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * get_DirectionChanged_6() const { return ___DirectionChanged_6; }
	inline TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF ** get_address_of_DirectionChanged_6() { return &___DirectionChanged_6; }
	inline void set_DirectionChanged_6(TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * value)
	{
		___DirectionChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirectionChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStreamIDsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ___U3CStreamIDsU3Ek__BackingField_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_U3CStreamIDsU3Ek__BackingField_7() const { return ___U3CStreamIDsU3Ek__BackingField_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_U3CStreamIDsU3Ek__BackingField_7() { return &___U3CStreamIDsU3Ek__BackingField_7; }
	inline void set_U3CStreamIDsU3Ek__BackingField_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___U3CStreamIDsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStreamIDsU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of__desiredDirection_8() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ____desiredDirection_8)); }
	inline int32_t get__desiredDirection_8() const { return ____desiredDirection_8; }
	inline int32_t* get_address_of__desiredDirection_8() { return &____desiredDirection_8; }
	inline void set__desiredDirection_8(int32_t value)
	{
		____desiredDirection_8 = value;
	}

	inline static int32_t get_offset_of__nativeHandle_9() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ____nativeHandle_9)); }
	inline TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * get__nativeHandle_9() const { return ____nativeHandle_9; }
	inline TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A ** get_address_of__nativeHandle_9() { return &____nativeHandle_9; }
	inline void set__nativeHandle_9(TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * value)
	{
		____nativeHandle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeHandle_9), (void*)value);
	}

	inline static int32_t get_offset_of__argsRef_10() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ____argsRef_10)); }
	inline intptr_t get__argsRef_10() const { return ____argsRef_10; }
	inline intptr_t* get_address_of__argsRef_10() { return &____argsRef_10; }
	inline void set__argsRef_10(intptr_t value)
	{
		____argsRef_10 = value;
	}

	inline static int32_t get_offset_of__localTrack_11() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ____localTrack_11)); }
	inline LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * get__localTrack_11() const { return ____localTrack_11; }
	inline LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 ** get_address_of__localTrack_11() { return &____localTrack_11; }
	inline void set__localTrack_11(LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * value)
	{
		____localTrack_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localTrack_11), (void*)value);
	}

	inline static int32_t get_offset_of__remoteTrack_12() { return static_cast<int32_t>(offsetof(Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20, ____remoteTrack_12)); }
	inline MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * get__remoteTrack_12() const { return ____remoteTrack_12; }
	inline MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 ** get_address_of__remoteTrack_12() { return &____remoteTrack_12; }
	inline void set__remoteTrack_12(MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * value)
	{
		____remoteTrack_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteTrack_12), (void*)value);
	}
};


// Microsoft.MixedReality.WebRTC.TransceiverAssociatedDelegate
struct  TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.TransceiverDirectionChangedDelegate
struct  TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.LocalAudioTrackHandle
struct  LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D  : public RefCountedObjectHandle_tE4E75DB5D6A37ABEC2AD6D73EDF79D27FC28D5D4
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.LocalVideoTrackHandle
struct  LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893  : public RefCountedObjectHandle_tE4E75DB5D6A37ABEC2AD6D73EDF79D27FC28D5D4
{
public:

public:
};


// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle
struct  VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009  : public RefCountedObjectHandle_tE4E75DB5D6A37ABEC2AD6D73EDF79D27FC28D5D4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32Enum>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mA591973E70B08BA8DF51199694BF3656AFF11422_gshared_inline (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m58742F2DBAEDAA6626C115F9E99209C8F4D8F195_gshared_inline (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection/StatsReport/Handle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handle__ctor_m2641C5E6D0E1AA7CF04807273752D4C9F5EB80A6 (Handle_tCC6496ABB381032CD917362358971825A947788C * __this, intptr_t ___h0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m1C6D7FAF3570FDEB923B03B39966B9ACA1530442 (SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 * __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.PeerConnectionInterop::StatsReport_RemoveRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerConnectionInterop_StatsReport_RemoveRef_mDD76B8A77D2F299EAE824E3DCDDB6DA69EE1CC31 (intptr_t ___reportHandle0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.IceServer>::.ctor()
inline void List_1__ctor_mAC26D789903DD36C6D5A7794809BB13DCCD17E47 (List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// Microsoft.MixedReality.WebRTC.Interop.mrsBool Microsoft.MixedReality.WebRTC.Interop.mrsBool::op_Explicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C  mrsBool_op_Explicit_m6A3B303269499E19AE900AF8AA02D09455AEF045 (bool ___b0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop::RemoteAudioTrack_OutputToDevice(Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop/RemoteAudioTrackHandle,Microsoft.MixedReality.WebRTC.Interop.mrsBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteAudioTrackInterop_RemoteAudioTrack_OutputToDevice_m457E0D7C55DA4E2483C9DC85C0E28B2517869AD7 (RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * ___trackHandle0, mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C  ___output1, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop::RemoteAudioTrack_CreateReadBuffer(Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop/RemoteAudioTrackHandle,Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop/ReadBufferHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RemoteAudioTrackInterop_RemoteAudioTrack_CreateReadBuffer_mFF432AF9FB2CA21904CAF00F653FEB731C6EC4E4 (RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * ___trackHandle0, ReadBufferHandle_t8437ADC4DA89C333F16D756BF5C8FABC840FFE99 ** ___audioTrackReadBufferOut1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.Utils::ThrowOnErrorCode(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ThrowOnErrorCode_mD576E1A2F8038580848322574AFC3D86849D9F15 (uint32_t ___res0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.AudioTrackReadBuffer::.ctor(Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop/ReadBufferHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrackReadBuffer__ctor_mB9FAE3451E6B1BCBF1AAC2D2793A5869B9008340 (AudioTrackReadBuffer_t093FE405A02EEAD45F29BE624F6334EEC3F4A8BF * __this, ReadBufferHandle_t8437ADC4DA89C333F16D756BF5C8FABC840FFE99 * ___handle0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.MediaTrack::.ctor(Microsoft.MixedReality.WebRTC.PeerConnection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaTrack__ctor_m7CEB2D816FD533872A18A8B3CD56F14965AC3076 (MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * __this, PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * ___peer0, String_t* ___trackName1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.RemoteAudioTrack::RegisterInteropCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteAudioTrack_RegisterInteropCallbacks_mBF8B50E55153140EE65E210578EA6897B10F89EC (RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop/InteropCallbackArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropCallbackArgs__ctor_m97E9D60A84843B6793109FC033E4AB13AE243CA3 (InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.AudioTrackInterop/AudioFrameUnmanagedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFrameUnmanagedCallback__ctor_mC45A9471208E1EA67E5B37EEC8199CE935432184 (AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr Microsoft.MixedReality.WebRTC.Interop.Utils::MakeWrapperRef(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utils_MakeWrapperRef_m8D8AA662597F2CE5342720F96F6A00BA8BD1B7A5 (RuntimeObject * ___wrapper0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop::RemoteAudioTrack_RegisterFrameCallback(Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop/RemoteAudioTrackHandle,Microsoft.MixedReality.WebRTC.Interop.AudioTrackInterop/AudioFrameUnmanagedCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteAudioTrackInterop_RemoteAudioTrack_RegisterFrameCallback_m9DB6C860A9398B5F982C8A8837CFE52B217281A1 (RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * ___trackHandle0, AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8 * ___callback1, intptr_t ___userData2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.Utils::ReleaseWrapperRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ReleaseWrapperRef_mA0849EFF1B0216529246F3D245D2FAB318C1D3FE (intptr_t ___wrapperRef0, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeHandle_get_IsClosed_mDC07CBB5C7BB58A6B31641D976CE3ADC37ED8377 (SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.RemoteAudioTrack::UnregisterInteropCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteAudioTrack_UnregisterInteropCallbacks_m9532CEFF47F8246B742D78C3A7C0BBC938D94D89 (RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m6433E520A7D38A8C424843DFCDB5EF2384EC8A6A (SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::RemoteAudioFrameReady(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_RemoteAudioFrameReady_m3776CFF57BBE3A48AF9C61DE30691291AEF5BB9C (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___bitsPerSample0, uint32_t ___sampleRate1, uint32_t ___channelCount2, uint32_t ___sampleCount3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.AudioFrameDelegate::Invoke(Microsoft.MixedReality.WebRTC.AudioFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFrameDelegate_Invoke_m008C56156998BE46D7D0A401B42549A2F33D1AA7 (AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 * __this, AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F  ___frame0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.WebRTC.MediaTrack::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MediaTrack_get_Name_mF572E5112691F3449E8B9F0177168A959ED5BC36_inline (MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::add__videoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_add__videoFrameReady_mA5069C3718B33093155790E64D86005496862A58 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.RemoteVideoTrackInterop::RemoteVideoTrack_RegisterI420AFrameCallback(Microsoft.MixedReality.WebRTC.Interop.RemoteVideoTrackInterop/RemoteVideoTrackHandle,Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop/I420AVideoFrameUnmanagedCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrackInterop_RemoteVideoTrack_RegisterI420AFrameCallback_mD6D23C05D2205AA5DC484E89378DE3648FF94581 (RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * ___trackHandle0, I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD * ___callback1, intptr_t ___userData2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::remove__videoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_remove__videoFrameReady_mC7DD3A17281CB95971D752AA7506249F89C61A06 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::add__argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_add__argb32VideoFrameReady_mD59A0F795887118812D270147531446B24835C37 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.RemoteVideoTrackInterop::RemoteVideoTrack_RegisterArgb32FrameCallback(Microsoft.MixedReality.WebRTC.Interop.RemoteVideoTrackInterop/RemoteVideoTrackHandle,Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop/Argb32VideoFrameUnmanagedCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrackInterop_RemoteVideoTrack_RegisterArgb32FrameCallback_m7E54DA7BABB7BDB53209D1FCC514CB338C23DA46 (RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * ___trackHandle0, Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2 * ___callback1, intptr_t ___userData2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::remove__argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_remove__argb32VideoFrameReady_m721F85B797495A915A3D1E9432C8EA3ADDB87025 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::I420ARemoteVideoFrameReady(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_I420ARemoteVideoFrameReady_m885B7496C207FF1B44E549F09BB9AB963A7AFC87 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___width0, uint32_t ___height1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate::Invoke(Microsoft.MixedReality.WebRTC.I420AVideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void I420AVideoFrameDelegate_Invoke_mA6827B8B63CBBA7E1CFB53DDFA6BFF32D3DF6A03 (I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * __this, I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F  ___frame0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::Argb32RemoteVideoFrameReady(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_Argb32RemoteVideoFrameReady_m09268CC1947DD159AD15B27F3214B43DFBF2606D (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___width0, uint32_t ___height1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate::Invoke(Microsoft.MixedReality.WebRTC.Argb32VideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Argb32VideoFrameDelegate_Invoke_mB2967B9A4387ECC624C6A9ED08D65F5B4BE2C487 (Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * __this, Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1  ___frame0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.DelayedEvent::BeginSuspend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedEvent_BeginSuspend_m9570148597D865E210B093FC700CE0219FF914E8 (DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.DelayedEvent::EndSuspend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedEvent_EndSuspend_mB6A859A1C4EF648404AA08E6826FF9B019DAA0DE (DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::WriteEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_WriteEvent_m1C3730759A4A03C7C2B34E35FE3E5817867EA0E8 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___eventId0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::WriteEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_WriteEvent_m76635AA499D50FF2E75EB19041A3F7E1FE1DC26F (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___eventId0, int32_t ___arg01, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::WriteEvent(System.Int32,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___eventId0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource__ctor_mBB6A4BCA61C3094B49510CA25F7CED7D7D7D0FAC (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.WebRTC.Interop.TransceiverInterop::Transceiver_SetDirection(Microsoft.MixedReality.WebRTC.Interop.TransceiverInterop/TransceiverHandle,Microsoft.MixedReality.WebRTC.Transceiver/Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TransceiverInterop_Transceiver_SetDirection_mBF59C9C8D4DC36ECB827C43A658A48C1154454C9 (TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * ___handle0, int32_t ___newDirection1, const RuntimeMethod* method);
// Microsoft.MixedReality.WebRTC.MediaKind Microsoft.MixedReality.WebRTC.Transceiver::get_MediaKind()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t Transceiver_get_MediaKind_m43442B7C3BC9BC1584F49FB62B14256E614BC023_inline (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::SetLocalTrackImpl(Microsoft.MixedReality.WebRTC.LocalMediaTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_SetLocalTrackImpl_m521A347122617DC534543D0072D189719E78F275 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * ___track0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::set_MlineIndex(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Transceiver_set_MlineIndex_mD739C872914B07D1BA03BB9444190A633B6F64D5_inline (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.TransceiverInterop::RegisterCallbacks(Microsoft.MixedReality.WebRTC.Transceiver,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverInterop_RegisterCallbacks_mBFEEA2C6F4D6A52BF4511EB58E36289949907A7E (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, intptr_t* ___argsRef1, const RuntimeMethod* method);
// Microsoft.MixedReality.WebRTC.PeerConnection Microsoft.MixedReality.WebRTC.MediaTrack::get_PeerConnection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * MediaTrack_get_PeerConnection_m09C71654E82CF90972235CDE1C6EFAD19A626416_inline (MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.WebRTC.PeerConnection Microsoft.MixedReality.WebRTC.Transceiver::get_PeerConnection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * Transceiver_get_PeerConnection_mE1637101B1F2042692FADDD07FE07BEDBC1B6B68_inline (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// Microsoft.MixedReality.WebRTC.Interop.LocalAudioTrackHandle Microsoft.MixedReality.WebRTC.LocalAudioTrack::get__nativeHandle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D * LocalAudioTrack_get__nativeHandle_mB9BEE214F858D0E5109FF7B5836B3829BB22DFE0_inline (LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.WebRTC.Interop.TransceiverInterop::Transceiver_SetLocalAudioTrack(Microsoft.MixedReality.WebRTC.Interop.TransceiverInterop/TransceiverHandle,Microsoft.MixedReality.WebRTC.Interop.LocalAudioTrackHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TransceiverInterop_Transceiver_SetLocalAudioTrack_m95BB72C3B0E0E271AC472BFE0156AF271E257D4C (TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * ___handle0, LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D * ___trackHandle1, const RuntimeMethod* method);
// Microsoft.MixedReality.WebRTC.Interop.LocalVideoTrackHandle Microsoft.MixedReality.WebRTC.LocalVideoTrack::get__nativeHandle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 * LocalVideoTrack_get__nativeHandle_m6059F80B1F307C9E2A939EDA8BB88F75B4D78F06_inline (LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.WebRTC.Interop.TransceiverInterop::Transceiver_SetLocalVideoTrack(Microsoft.MixedReality.WebRTC.Interop.TransceiverInterop/TransceiverHandle,Microsoft.MixedReality.WebRTC.Interop.LocalVideoTrackHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TransceiverInterop_Transceiver_SetLocalVideoTrack_mD83DF2337E167E4DBD413154E38406344D905362 (TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * ___handle0, LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 * ___trackHandle1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.LocalAudioTrackHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalAudioTrackHandle__ctor_m6913A7E6466EDAE2064A86C4A0CB1FBFAAB63E8E (LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.LocalVideoTrackHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVideoTrackHandle__ctor_m393DE67D964DA23DC2BE02C02DDEC200240D75D8 (LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.MediaTrack::set_Transceiver(Microsoft.MixedReality.WebRTC.Transceiver)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MediaTrack_set_Transceiver_m9B4383FD9C95562743EF2F2AC52D3D8EB7E6B6EB_inline (MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.MediaTrack::set_PeerConnection(Microsoft.MixedReality.WebRTC.PeerConnection)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MediaTrack_set_PeerConnection_m39B709EACD73926D738FBF59BF79E36358ADF3B6_inline (MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * __this, PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.TransceiverAssociatedDelegate::Invoke(Microsoft.MixedReality.WebRTC.Transceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverAssociatedDelegate_Invoke_m042BA0B403B2347E7AABAEBB3DF6DCE99C51CBC2 (TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, const RuntimeMethod* method);
// System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver/Direction> Microsoft.MixedReality.WebRTC.Transceiver::get_NegotiatedDirection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  Transceiver_get_NegotiatedDirection_m9FDA90461897F11046AFE9E6D93A1CA9C7378A88_inline (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver/Direction>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_inline (Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mA591973E70B08BA8DF51199694BF3656AFF11422_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver/Direction>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_inline (Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *, const RuntimeMethod*))Nullable_1_get_HasValue_m58742F2DBAEDAA6626C115F9E99209C8F4D8F195_gshared_inline)(__this, method);
}
// System.Boolean Microsoft.MixedReality.WebRTC.Transceiver::HasSend(System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver/Direction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transceiver_HasSend_mA3BBA15578612ABF93C7D62901CAA039D4C8F260 (Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  ___dir0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WebRTC.Transceiver::HasRecv(System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver/Direction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transceiver_HasRecv_mED27F1FAFC495957D727A0DC6D14F42B5FB02576 (Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  ___dir0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::set_NegotiatedDirection(System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver/Direction>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Transceiver_set_NegotiatedDirection_m56B4360E46F9580F655DD808579B730256AC9E5E_inline (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.TransceiverDirectionChangedDelegate::Invoke(Microsoft.MixedReality.WebRTC.Transceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverDirectionChangedDelegate_Invoke_m5E7CD40BDC731C6A73ED3343366F7BA6AFB79770 (TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::add__videoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_add__videoFrameReady_m2D18857690F751C64F6E18F08D9FC6C41DFA6415 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle Microsoft.MixedReality.WebRTC.VideoTrackSource::get__nativeHandle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * VideoTrackSource_get__nativeHandle_m8F4EBA271FF936321F45B0B17E5603D712AA8201_inline (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop::VideoTrackSource_RegisterFrameCallback(Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle,Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop/I420AVideoFrameUnmanagedCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSourceInterop_VideoTrackSource_RegisterFrameCallback_mD9C95FC4CBB810493B99C330FE1E85F98E1309BB (VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * ___trackHandle0, I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD * ___callback1, intptr_t ___userData2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::remove__videoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_remove__videoFrameReady_mC11D77000AD0811EDE795AE5B8E9EE8512941AE4 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::add__argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_add__argb32VideoFrameReady_mA23C60BD0F33F744891B82F68AAAC4FE5C54EF51 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop::VideoTrackSource_RegisterArgb32FrameCallback(Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle,Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop/Argb32VideoFrameUnmanagedCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSourceInterop_VideoTrackSource_RegisterArgb32FrameCallback_mFF13E69E2AD0F4E0DC7AF04381977C46435DF931 (VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * ___trackHandle0, Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2 * ___callback1, intptr_t ___userData2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::remove__argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_remove__argb32VideoFrameReady_m755A6839047298C12E2A69328243AEA6FD1A4EC8 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.LocalVideoTrack>::.ctor()
inline void List_1__ctor_m6615954DA0EF9FC21074E4E41DEACB78A6BF8F2A (List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::SetHandle(Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_SetHandle_m6BD51E55F0A30A77CEF1996231C28F4B02DEBFD8 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * ___nativeHandle0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::set__nativeHandle(Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VideoTrackSource_set__nativeHandle_m729C652C1B1770CF3DCAAC9DB646891999DB6C6F_inline (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.LocalVideoTrack>::get_Count()
inline int32_t List_1_get_Count_mC8EB6D9B62D76FEE7262161F6F4B334FF2CA6F10_inline (List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.String Microsoft.MixedReality.WebRTC.VideoTrackSource::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* VideoTrackSource_get_Name_m6AE558A6AD714998D1A528727D79E71ACC6B74A1_inline (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.LocalVideoTrack>::Add(!0)
inline void List_1_Add_m2B0075B27D860F047E94331179EFADFF22BBC314 (List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * __this, LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 *, LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.WebRTC.LocalVideoTrack>::Remove(!0)
inline bool List_1_Remove_m04077B57D42E4A922C1ED790D57DE90B3FAC3CA7 (List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * __this, LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 *, LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::I420ALocalVideoFrameReady(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_I420ALocalVideoFrameReady_mE2451959F602D0AD98081EBA26DED0F2CC23E8C1 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___width0, uint32_t ___height1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::Argb32LocalVideoFrameReady(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_Argb32LocalVideoFrameReady_m22B9A884F874F8C48D582E1790E2D1FF93B6EC24 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___width0, uint32_t ___height1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_AudioTrackRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrackRemovedDelegate__ctor_mAB2A7473A6F5026542BA593CC90A75B8CED0CC31 (AudioTrackRemovedDelegate_tAD10CEC8F9EDFBFCC58E5AEE95912D835F7E820F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_AudioTrackRemovedDelegate::Invoke(Microsoft.MixedReality.WebRTC.Transceiver,Microsoft.MixedReality.WebRTC.RemoteAudioTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrackRemovedDelegate_Invoke_mC4128783868D6F4E54E42A54BBDC9ACB1B81541A (AudioTrackRemovedDelegate_tAD10CEC8F9EDFBFCC58E5AEE95912D835F7E820F * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * ___track1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___transceiver0, ___track1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___transceiver0, ___track1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * >::Invoke(targetMethod, ___transceiver0, ___track1);
					else
						GenericVirtActionInvoker1< RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * >::Invoke(targetMethod, ___transceiver0, ___track1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___transceiver0, ___track1);
					else
						VirtActionInvoker1< RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___transceiver0, ___track1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___track1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___transceiver0, ___track1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___transceiver0, ___track1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * >::Invoke(targetMethod, targetThis, ___transceiver0, ___track1);
					else
						GenericVirtActionInvoker2< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * >::Invoke(targetMethod, targetThis, ___transceiver0, ___track1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___transceiver0, ___track1);
					else
						VirtActionInvoker2< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___transceiver0, ___track1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___transceiver0) - 1), ___track1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___transceiver0, ___track1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.PeerConnection_AudioTrackRemovedDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.Transceiver,Microsoft.MixedReality.WebRTC.RemoteAudioTrack,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioTrackRemovedDelegate_BeginInvoke_m03FFC55A76E51B53AE6994AD23A49ED286D618DF (AudioTrackRemovedDelegate_tAD10CEC8F9EDFBFCC58E5AEE95912D835F7E820F * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * ___track1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___transceiver0;
	__d_args[1] = ___track1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_AudioTrackRemovedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTrackRemovedDelegate_EndInvoke_m2974BBCA23EC6955BAD81F6D9A27C0E7562FDF36 (AudioTrackRemovedDelegate_tAD10CEC8F9EDFBFCC58E5AEE95912D835F7E820F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelAddedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataChannelAddedDelegate__ctor_mB3FA60BD64AAB1E7AEA40CCF29EEB4AAE7B110D8 (DataChannelAddedDelegate_t56E9DEA2535AF230519EE18D9AB10E6883FF92D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelAddedDelegate::Invoke(Microsoft.MixedReality.WebRTC.DataChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataChannelAddedDelegate_Invoke_m1B6353033608178590A81AF40A2CA4769BFA4895 (DataChannelAddedDelegate_t56E9DEA2535AF230519EE18D9AB10E6883FF92D2 * __this, DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * ___channel0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channel0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channel0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___channel0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___channel0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___channel0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___channel0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channel0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___channel0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * >::Invoke(targetMethod, targetThis, ___channel0);
					else
						GenericVirtActionInvoker1< DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * >::Invoke(targetMethod, targetThis, ___channel0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___channel0);
					else
						VirtActionInvoker1< DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___channel0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___channel0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___channel0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelAddedDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.DataChannel,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataChannelAddedDelegate_BeginInvoke_mCBC612543091FA79698BF6056DE7215ED2429460 (DataChannelAddedDelegate_t56E9DEA2535AF230519EE18D9AB10E6883FF92D2 * __this, DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * ___channel0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___channel0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelAddedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataChannelAddedDelegate_EndInvoke_mC72BF3DADDA40B3C04B92E457F2DB309E71D620E (DataChannelAddedDelegate_t56E9DEA2535AF230519EE18D9AB10E6883FF92D2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataChannelRemovedDelegate__ctor_m48166E637F8EBDADF0916F33619597F0FB1CD8BE (DataChannelRemovedDelegate_t0B20766E6E8EE9141A10547D59396852F9B3EEC4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelRemovedDelegate::Invoke(Microsoft.MixedReality.WebRTC.DataChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataChannelRemovedDelegate_Invoke_m634C6C0789AC7C3AE7C79B1437FAE64F0EC1B013 (DataChannelRemovedDelegate_t0B20766E6E8EE9141A10547D59396852F9B3EEC4 * __this, DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * ___channel0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channel0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channel0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___channel0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___channel0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___channel0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___channel0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channel0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___channel0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * >::Invoke(targetMethod, targetThis, ___channel0);
					else
						GenericVirtActionInvoker1< DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * >::Invoke(targetMethod, targetThis, ___channel0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___channel0);
					else
						VirtActionInvoker1< DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___channel0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___channel0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___channel0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelRemovedDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.DataChannel,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataChannelRemovedDelegate_BeginInvoke_mE52A09ADAEA8C52827DAA9155ED4FF0D5ED42FEC (DataChannelRemovedDelegate_t0B20766E6E8EE9141A10547D59396852F9B3EEC4 * __this, DataChannel_tB2EBD48C11E92285FACE399026E900CD4B1BAF4B * ___channel0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___channel0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_DataChannelRemovedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataChannelRemovedDelegate_EndInvoke_m744574933FF2375C32AF4591A8D2C3774C0A8F34 (DataChannelRemovedDelegate_t0B20766E6E8EE9141A10547D59396852F9B3EEC4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_IceCandidateReadytoSendDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IceCandidateReadytoSendDelegate__ctor_m32982F4569CA06C215075D719547565B949901C9 (IceCandidateReadytoSendDelegate_t15E758D4AA8E60C0FFC15740EE9BE77D0B52A06B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_IceCandidateReadytoSendDelegate::Invoke(Microsoft.MixedReality.WebRTC.IceCandidate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IceCandidateReadytoSendDelegate_Invoke_mAEE04B11622BD856E48D5CE41A22A58AC727D332 (IceCandidateReadytoSendDelegate_t15E758D4AA8E60C0FFC15740EE9BE77D0B52A06B * __this, IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5 * ___candidate0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___candidate0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___candidate0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___candidate0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___candidate0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___candidate0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___candidate0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___candidate0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___candidate0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5 * >::Invoke(targetMethod, targetThis, ___candidate0);
					else
						GenericVirtActionInvoker1< IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5 * >::Invoke(targetMethod, targetThis, ___candidate0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___candidate0);
					else
						VirtActionInvoker1< IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___candidate0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___candidate0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___candidate0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.PeerConnection_IceCandidateReadytoSendDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.IceCandidate,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IceCandidateReadytoSendDelegate_BeginInvoke_m2224273F657C66808A582D954C1F8E8641D1D908 (IceCandidateReadytoSendDelegate_t15E758D4AA8E60C0FFC15740EE9BE77D0B52A06B * __this, IceCandidate_tED660E2BB0F4ED23194754FB9EF63618788788D5 * ___candidate0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___candidate0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_IceCandidateReadytoSendDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IceCandidateReadytoSendDelegate_EndInvoke_m1B397FEE23FF99FB1611E79B1A923BD1E7E74259 (IceCandidateReadytoSendDelegate_t15E758D4AA8E60C0FFC15740EE9BE77D0B52A06B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270 (IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270 * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___newState0);

}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_IceGatheringStateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IceGatheringStateChangedDelegate__ctor_m6AF3A848C024600FD2BC3A383913737EBF0F5A52 (IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_IceGatheringStateChangedDelegate::Invoke(Microsoft.MixedReality.WebRTC.IceGatheringState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IceGatheringStateChangedDelegate_Invoke_m9570E8BD8770E73AA452B9CE1A033B13120EA70D (IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270 * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___newState0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___newState0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___newState0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___newState0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___newState0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___newState0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___newState0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___newState0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___newState0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.PeerConnection_IceGatheringStateChangedDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.IceGatheringState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IceGatheringStateChangedDelegate_BeginInvoke_m63B352EDD16ECFB9D441335DC1C99948906BEE80 (IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270 * __this, int32_t ___newState0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IceGatheringStateChangedDelegate_BeginInvoke_m63B352EDD16ECFB9D441335DC1C99948906BEE80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IceGatheringState_t2A6FA13D41A583BF58FCC42AF1729BCEFC823977_il2cpp_TypeInfo_var, &___newState0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_IceGatheringStateChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IceGatheringStateChangedDelegate_EndInvoke_m0B5F3C40C6713B2ED7845C091086695CC7D42C45 (IceGatheringStateChangedDelegate_t3B635E58E1424B4ABFD88A3E487180FE87F38270 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F (IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___newState0);

}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_IceStateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IceStateChangedDelegate__ctor_m527F584EB6E294493982AC2538B03E2FF6619BAA (IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_IceStateChangedDelegate::Invoke(Microsoft.MixedReality.WebRTC.IceConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IceStateChangedDelegate_Invoke_mE0115A74C9CE781F5EB212365398A631C37DD22E (IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___newState0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___newState0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___newState0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___newState0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___newState0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___newState0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___newState0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___newState0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___newState0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.PeerConnection_IceStateChangedDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.IceConnectionState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IceStateChangedDelegate_BeginInvoke_m0F1386221814F5A9CDF33F04C40E51875156F87B (IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F * __this, int32_t ___newState0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IceStateChangedDelegate_BeginInvoke_m0F1386221814F5A9CDF33F04C40E51875156F87B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IceConnectionState_t3A8E5B4A8E43FE9E9EFF3B60124EE6FA26C9AA29_il2cpp_TypeInfo_var, &___newState0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_IceStateChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IceStateChangedDelegate_EndInvoke_m5C144C4A84CBB3CE9AE18F8E11E49EA1137D80C4 (IceStateChangedDelegate_tB591FC000DE9B4E3836DF23F667F37A7A408DA9F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_LocalSdpReadyToSendDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalSdpReadyToSendDelegate__ctor_mE759E2B51FF05237586887846ADEEB4805BDDF77 (LocalSdpReadyToSendDelegate_tF2AF0AFA4BE7DEF0B3A2368910E9BA6A0EA77B6D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_LocalSdpReadyToSendDelegate::Invoke(Microsoft.MixedReality.WebRTC.SdpMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalSdpReadyToSendDelegate_Invoke_mB281AC5FA72DD159EC8235F4DFDE967BE0CB4F59 (LocalSdpReadyToSendDelegate_tF2AF0AFA4BE7DEF0B3A2368910E9BA6A0EA77B6D * __this, SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 * ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 * >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 * >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.PeerConnection_LocalSdpReadyToSendDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.SdpMessage,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocalSdpReadyToSendDelegate_BeginInvoke_m8F0D1A8D9F6523C35B44A2AD382D8E09101AC218 (LocalSdpReadyToSendDelegate_tF2AF0AFA4BE7DEF0B3A2368910E9BA6A0EA77B6D * __this, SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 * ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_LocalSdpReadyToSendDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalSdpReadyToSendDelegate_EndInvoke_mEB1490D03E7361E24FFBB416E08E2FAF08A837D6 (LocalSdpReadyToSendDelegate_tF2AF0AFA4BE7DEF0B3A2368910E9BA6A0EA77B6D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_StatsReport::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsReport__ctor_m4D5286FA77731CBAE674D3B1AE46EFD189EDEA81 (StatsReport_tA94E0D62DDB355F37779A3EE9E98976862B7B8A1 * __this, intptr_t ___h0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StatsReport__ctor_m4D5286FA77731CBAE674D3B1AE46EFD189EDEA81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___h0;
		Handle_tCC6496ABB381032CD917362358971825A947788C * L_1 = (Handle_tCC6496ABB381032CD917362358971825A947788C *)il2cpp_codegen_object_new(Handle_tCC6496ABB381032CD917362358971825A947788C_il2cpp_TypeInfo_var);
		Handle__ctor_m2641C5E6D0E1AA7CF04807273752D4C9F5EB80A6(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		__this->set__handle_0(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_StatsReport::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsReport_Dispose_mDAC6060924CE0DA007D93BFFAE99B72D00CC8560 (StatsReport_tA94E0D62DDB355F37779A3EE9E98976862B7B8A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StatsReport_Dispose_mDAC6060924CE0DA007D93BFFAE99B72D00CC8560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Handle_tCC6496ABB381032CD917362358971825A947788C * L_0 = __this->get__handle_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_StatsReport_Handle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handle__ctor_m2641C5E6D0E1AA7CF04807273752D4C9F5EB80A6 (Handle_tCC6496ABB381032CD917362358971825A947788C * __this, intptr_t ___h0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handle__ctor_m2641C5E6D0E1AA7CF04807273752D4C9F5EB80A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeHandle__ctor_m1C6D7FAF3570FDEB923B03B39966B9ACA1530442(__this, (intptr_t)(0), (bool)1, /*hidden argument*/NULL);
		intptr_t L_0 = ___h0;
		((SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 *)__this)->set_handle_0((intptr_t)L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WebRTC.PeerConnection_StatsReport_Handle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Handle_get_IsInvalid_m7490674792238C0CBB3CE20BA8205BD7D8F77C4F (Handle_tCC6496ABB381032CD917362358971825A947788C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handle_get_IsInvalid_m7490674792238C0CBB3CE20BA8205BD7D8F77C4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.WebRTC.PeerConnection_StatsReport_Handle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Handle_ReleaseHandle_m0E8C0726952C3F504AEA4BFF7D90F0663AAD5095 (Handle_tCC6496ABB381032CD917362358971825A947788C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handle_ReleaseHandle_m0E8C0726952C3F504AEA4BFF7D90F0663AAD5095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 *)__this)->get_handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(PeerConnectionInterop_t7369F2C89DD874FB55A6A37A6B49A78FC061FB1D_il2cpp_TypeInfo_var);
		PeerConnectionInterop_StatsReport_RemoveRef_mDD76B8A77D2F299EAE824E3DCDDB6DA69EE1CC31((intptr_t)L_0, /*hidden argument*/NULL);
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_TransceiverAddedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverAddedDelegate__ctor_m07144DA1F2A123DC04F6D5D722506D2AA1F5CE37 (TransceiverAddedDelegate_tF78583228A9B65BDD88FDA96F19114BCC5920AE5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_TransceiverAddedDelegate::Invoke(Microsoft.MixedReality.WebRTC.Transceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverAddedDelegate_Invoke_m726579885CD43C18C3634A346740484453A3EB41 (TransceiverAddedDelegate_tF78583228A9B65BDD88FDA96F19114BCC5920AE5 * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___transceiver0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___transceiver0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___transceiver0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___transceiver0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___transceiver0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___transceiver0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___transceiver0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___transceiver0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(targetMethod, targetThis, ___transceiver0);
					else
						GenericVirtActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(targetMethod, targetThis, ___transceiver0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___transceiver0);
					else
						VirtActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___transceiver0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___transceiver0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___transceiver0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.PeerConnection_TransceiverAddedDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.Transceiver,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransceiverAddedDelegate_BeginInvoke_m6C80373D46EC4D70EBBF4CB36B4A81296419419F (TransceiverAddedDelegate_tF78583228A9B65BDD88FDA96F19114BCC5920AE5 * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___transceiver0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_TransceiverAddedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverAddedDelegate_EndInvoke_mA5215615270917DCD87F6312D958F209E5AEF4B7 (TransceiverAddedDelegate_tF78583228A9B65BDD88FDA96F19114BCC5920AE5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackAddedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackAddedDelegate__ctor_mE25688A7826CCE713BE8E579023067A662262E17 (VideoTrackAddedDelegate_t5BBA530A027A4854290DD6F50A1486A63F61F185 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackAddedDelegate::Invoke(Microsoft.MixedReality.WebRTC.RemoteVideoTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackAddedDelegate_Invoke_mFEBBE0F306198D77EC094FDDFEA33FAFC6CFA49D (VideoTrackAddedDelegate_t5BBA530A027A4854290DD6F50A1486A63F61F185 * __this, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * ___track0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___track0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___track0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___track0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___track0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___track0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___track0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___track0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___track0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(targetMethod, targetThis, ___track0);
					else
						GenericVirtActionInvoker1< RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(targetMethod, targetThis, ___track0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___track0);
					else
						VirtActionInvoker1< RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___track0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___track0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___track0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackAddedDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.RemoteVideoTrack,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideoTrackAddedDelegate_BeginInvoke_m1B596856E4B4A5CC27D5C258E0F82166DF9F9E04 (VideoTrackAddedDelegate_t5BBA530A027A4854290DD6F50A1486A63F61F185 * __this, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * ___track0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___track0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackAddedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackAddedDelegate_EndInvoke_m2332F7B4AA8E22538610553A418C92700C06ACE8 (VideoTrackAddedDelegate_t5BBA530A027A4854290DD6F50A1486A63F61F185 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackRemovedDelegate__ctor_m64DF073770BFA7427E4B8BAEF6DEBA6D3CB73AB0 (VideoTrackRemovedDelegate_t1D0546397E1683375352D2ED0E04F22D2484A859 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackRemovedDelegate::Invoke(Microsoft.MixedReality.WebRTC.Transceiver,Microsoft.MixedReality.WebRTC.RemoteVideoTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackRemovedDelegate_Invoke_m526770B50D5BB37FEB8047DF542B6195CCC2BA2A (VideoTrackRemovedDelegate_t1D0546397E1683375352D2ED0E04F22D2484A859 * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * ___track1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___transceiver0, ___track1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___transceiver0, ___track1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(targetMethod, ___transceiver0, ___track1);
					else
						GenericVirtActionInvoker1< RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(targetMethod, ___transceiver0, ___track1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___transceiver0, ___track1);
					else
						VirtActionInvoker1< RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___transceiver0, ___track1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___track1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___transceiver0, ___track1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___transceiver0, ___track1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(targetMethod, targetThis, ___transceiver0, ___track1);
					else
						GenericVirtActionInvoker2< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(targetMethod, targetThis, ___transceiver0, ___track1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___transceiver0, ___track1);
					else
						VirtActionInvoker2< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___transceiver0, ___track1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___transceiver0) - 1), ___track1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___transceiver0, ___track1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackRemovedDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.Transceiver,Microsoft.MixedReality.WebRTC.RemoteVideoTrack,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideoTrackRemovedDelegate_BeginInvoke_mED5395B150CAD6C5D8CB1C16E6C98C974868C40E (VideoTrackRemovedDelegate_t1D0546397E1683375352D2ED0E04F22D2484A859 * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * ___track1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___transceiver0;
	__d_args[1] = ___track1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Microsoft.MixedReality.WebRTC.PeerConnection_VideoTrackRemovedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackRemovedDelegate_EndInvoke_mAEC129E877EA672C9FB57D742E82AD6352194D9B (VideoTrackRemovedDelegate_t1D0546397E1683375352D2ED0E04F22D2484A859 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.PeerConnectionConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerConnectionConfiguration__ctor_mEBB4AF70549B4E4DC3D70E2372ECDD0F47F26684 (PeerConnectionConfiguration_t2EC5AD5A5B893F1E3C668A9544E197AF3A65FE6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionConfiguration__ctor_mEBB4AF70549B4E4DC3D70E2372ECDD0F47F26684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A * L_0 = (List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A *)il2cpp_codegen_object_new(List_1_tF7C58F19BBFB4354C6A35CCEA7AE8E7CBAF7BF8A_il2cpp_TypeInfo_var);
		List_1__ctor_mAC26D789903DD36C6D5A7794809BB13DCCD17E47(L_0, /*hidden argument*/List_1__ctor_mAC26D789903DD36C6D5A7794809BB13DCCD17E47_RuntimeMethod_var);
		__this->set_IceServers_0(L_0);
		__this->set_IceTransportType_1(3);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.RemoteAudioTrack::OutputToDevice(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteAudioTrack_OutputToDevice_m609CE659A283C6AAFF050E8129FD4B3689BC8587 (RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * __this, bool ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteAudioTrack_OutputToDevice_m609CE659A283C6AAFF050E8129FD4B3689BC8587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * L_0 = __this->get__nativeHandle_4();
		bool L_1 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C_il2cpp_TypeInfo_var);
		mrsBool_tA37DE7CA93DFC2E43B7DA24BEE6698968059100C  L_2 = mrsBool_op_Explicit_m6A3B303269499E19AE900AF8AA02D09455AEF045(L_1, /*hidden argument*/NULL);
		RemoteAudioTrackInterop_RemoteAudioTrack_OutputToDevice_m457E0D7C55DA4E2483C9DC85C0E28B2517869AD7(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.MixedReality.WebRTC.AudioTrackReadBuffer Microsoft.MixedReality.WebRTC.RemoteAudioTrack::CreateReadBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioTrackReadBuffer_t093FE405A02EEAD45F29BE624F6334EEC3F4A8BF * RemoteAudioTrack_CreateReadBuffer_m9DE77CBA5F7C579D0C88216BA8252CE868367A42 (RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteAudioTrack_CreateReadBuffer_m9DE77CBA5F7C579D0C88216BA8252CE868367A42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ReadBufferHandle_t8437ADC4DA89C333F16D756BF5C8FABC840FFE99 * V_0 = NULL;
	{
		RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * L_0 = __this->get__nativeHandle_4();
		uint32_t L_1 = RemoteAudioTrackInterop_RemoteAudioTrack_CreateReadBuffer_mFF432AF9FB2CA21904CAF00F653FEB731C6EC4E4(L_0, (ReadBufferHandle_t8437ADC4DA89C333F16D756BF5C8FABC840FFE99 **)(&V_0), /*hidden argument*/NULL);
		Utils_ThrowOnErrorCode_mD576E1A2F8038580848322574AFC3D86849D9F15(L_1, /*hidden argument*/NULL);
		ReadBufferHandle_t8437ADC4DA89C333F16D756BF5C8FABC840FFE99 * L_2 = V_0;
		AudioTrackReadBuffer_t093FE405A02EEAD45F29BE624F6334EEC3F4A8BF * L_3 = (AudioTrackReadBuffer_t093FE405A02EEAD45F29BE624F6334EEC3F4A8BF *)il2cpp_codegen_object_new(AudioTrackReadBuffer_t093FE405A02EEAD45F29BE624F6334EEC3F4A8BF_il2cpp_TypeInfo_var);
		AudioTrackReadBuffer__ctor_mB9FAE3451E6B1BCBF1AAC2D2793A5869B9008340(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteAudioTrack::.ctor(Microsoft.MixedReality.WebRTC.Interop.RemoteAudioTrackInterop_RemoteAudioTrackHandle,Microsoft.MixedReality.WebRTC.PeerConnection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteAudioTrack__ctor_mD5C909E926982789B6F8B1B7A85AE859C99431DC (RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * __this, RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * ___handle0, PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * ___peer1, String_t* ___trackName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteAudioTrack__ctor_mD5C909E926982789B6F8B1B7A85AE859C99431DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__selfHandle_5((intptr_t)(0));
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_0 = ___peer1;
		String_t* L_1 = ___trackName2;
		MediaTrack__ctor_m7CEB2D816FD533872A18A8B3CD56F14965AC3076(__this, L_0, L_1, /*hidden argument*/NULL);
		RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * L_2 = ___handle0;
		__this->set__nativeHandle_4(L_2);
		RemoteAudioTrack_RegisterInteropCallbacks_mBF8B50E55153140EE65E210578EA6897B10F89EC(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteAudioTrack::RegisterInteropCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteAudioTrack_RegisterInteropCallbacks_mBF8B50E55153140EE65E210578EA6897B10F89EC (RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteAudioTrack_RegisterInteropCallbacks_mBF8B50E55153140EE65E210578EA6897B10F89EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895 * L_0 = (InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895 *)il2cpp_codegen_object_new(InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895_il2cpp_TypeInfo_var);
		InteropCallbackArgs__ctor_m97E9D60A84843B6793109FC033E4AB13AE243CA3(L_0, /*hidden argument*/NULL);
		InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_Track_0(__this);
		InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895 * L_2 = L_1;
		AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8 * L_3 = (AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8 *)il2cpp_codegen_object_new(AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8_il2cpp_TypeInfo_var);
		AudioFrameUnmanagedCallback__ctor_mC45A9471208E1EA67E5B37EEC8199CE935432184(L_3, NULL, (intptr_t)((intptr_t)RemoteAudioTrackInterop_FrameCallback_m8A8C06EBBBDFB3197AA37A2A9919C8FCB94CD296_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_FrameCallback_1(L_3);
		__this->set__interopCallbackArgs_6(L_2);
		intptr_t L_4 = Utils_MakeWrapperRef_m8D8AA662597F2CE5342720F96F6A00BA8BD1B7A5(__this, /*hidden argument*/NULL);
		__this->set__selfHandle_5((intptr_t)L_4);
		RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * L_5 = __this->get__nativeHandle_4();
		InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895 * L_6 = __this->get__interopCallbackArgs_6();
		NullCheck(L_6);
		AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8 * L_7 = L_6->get_FrameCallback_1();
		intptr_t L_8 = __this->get__selfHandle_5();
		RemoteAudioTrackInterop_RemoteAudioTrack_RegisterFrameCallback_m9DB6C860A9398B5F982C8A8837CFE52B217281A1(L_5, L_7, (intptr_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteAudioTrack::UnregisterInteropCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteAudioTrack_UnregisterInteropCallbacks_m9532CEFF47F8246B742D78C3A7C0BBC938D94D89 (RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteAudioTrack_UnregisterInteropCallbacks_m9532CEFF47F8246B742D78C3A7C0BBC938D94D89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get__selfHandle_5();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * L_2 = __this->get__nativeHandle_4();
		RemoteAudioTrackInterop_RemoteAudioTrack_RegisterFrameCallback_m9DB6C860A9398B5F982C8A8837CFE52B217281A1(L_2, (AudioFrameUnmanagedCallback_tCD77147B34BC067FE1E1E3FD488D7F65E49AACD8 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		intptr_t L_3 = __this->get__selfHandle_5();
		Utils_ReleaseWrapperRef_mA0849EFF1B0216529246F3D245D2FAB318C1D3FE((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set__selfHandle_5((intptr_t)(0));
		__this->set__interopCallbackArgs_6((InteropCallbackArgs_tBB4043DF5303B7435E9D517470E9871C87885895 *)NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteAudioTrack::DestroyNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteAudioTrack_DestroyNative_mAAC7D16B05C4ECFCEEA787097B81F575541C19FC (RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * __this, const RuntimeMethod* method)
{
	{
		RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * L_0 = __this->get__nativeHandle_4();
		NullCheck(L_0);
		bool L_1 = SafeHandle_get_IsClosed_mDC07CBB5C7BB58A6B31641D976CE3ADC37ED8377(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		RemoteAudioTrack_UnregisterInteropCallbacks_m9532CEFF47F8246B742D78C3A7C0BBC938D94D89(__this, /*hidden argument*/NULL);
		RemoteAudioTrackHandle_t131FDF1223F4DEF928AB61F69AE61C6AF35C138D * L_2 = __this->get__nativeHandle_4();
		NullCheck(L_2);
		SafeHandle_Dispose_m6433E520A7D38A8C424843DFCDB5EF2384EC8A6A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteAudioTrack::OnFrameReady(Microsoft.MixedReality.WebRTC.AudioFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteAudioTrack_OnFrameReady_m57A342569AC498B8D43CD794F30D60388987D9B4 (RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * __this, AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F  ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteAudioTrack_OnFrameReady_m57A342569AC498B8D43CD794F30D60388987D9B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 * G_B2_0 = NULL;
	AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var);
		MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * L_0 = ((MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_StaticFields*)il2cpp_codegen_static_fields_for(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var))->get_Log_0();
		AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F  L_1 = ___frame0;
		uint32_t L_2 = L_1.get_bitsPerSample_1();
		AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F  L_3 = ___frame0;
		uint32_t L_4 = L_3.get_sampleRate_2();
		AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F  L_5 = ___frame0;
		uint32_t L_6 = L_5.get_channelCount_3();
		AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F  L_7 = ___frame0;
		uint32_t L_8 = L_7.get_sampleCount_4();
		NullCheck(L_0);
		MainEventSource_RemoteAudioFrameReady_m3776CFF57BBE3A48AF9C61DE30691291AEF5BB9C(L_0, L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
		AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 * L_9 = __this->get_AudioFrameReady_3();
		AudioFrameDelegate_t81D5EE264BFED5A4975245988644C2D042DA4713 * L_10 = L_9;
		G_B1_0 = L_10;
		if (L_10)
		{
			G_B2_0 = L_10;
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_002d:
	{
		AudioFrame_t1ABBAB377AC532BB8ABBB159ABD4E3917C55E72F  L_11 = ___frame0;
		NullCheck(G_B2_0);
		AudioFrameDelegate_Invoke_m008C56156998BE46D7D0A401B42549A2F33D1AA7(G_B2_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteAudioTrack::OnMute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteAudioTrack_OnMute_m722139E81C007EF7155899AFAE6167B5177D7C47 (RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * __this, bool ___muted0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Microsoft.MixedReality.WebRTC.RemoteAudioTrack::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteAudioTrack_ToString_m181C8C6A03AC0701EDB481F51017A08530E8A107 (RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteAudioTrack_ToString_m181C8C6A03AC0701EDB481F51017A08530E8A107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = MediaTrack_get_Name_mF572E5112691F3449E8B9F0177168A959ED5BC36_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral1C460592987159DF8DD195823124F0FDA97F50C4, L_0, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.WebRTC.VideoEncoding Microsoft.MixedReality.WebRTC.RemoteVideoTrack::get_FrameEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteVideoTrack_get_FrameEncoding_m46984E6037C24FA117D83324DB77E795C3CA4D65 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::add_I420AVideoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_add_I420AVideoFrameReady_mB46CBFC90A3CE4F5369CC809CCAF17CF47835747 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_add_I420AVideoFrameReady_mB46CBFC90A3CE4F5369CC809CCAF17CF47835747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get__videoFrameReadyLock_5();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_2 = __this->get__videoFrameReady_6();
		V_0 = (bool)((((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_3 = ___value0;
		RemoteVideoTrack_add__videoFrameReady_mA5069C3718B33093155790E64D86005496862A58(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * L_7 = __this->get__nativeHandle_3();
		IL2CPP_RUNTIME_CLASS_INIT(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_il2cpp_TypeInfo_var);
		I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD * L_8 = ((VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_StaticFields*)il2cpp_codegen_static_fields_for(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_il2cpp_TypeInfo_var))->get_I420AFrameCallback_0();
		intptr_t L_9 = __this->get__selfHandle_4();
		RemoteVideoTrackInterop_RemoteVideoTrack_RegisterI420AFrameCallback_mD6D23C05D2205AA5DC484E89378DE3648FF94581(L_7, L_8, (intptr_t)L_9, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::remove_I420AVideoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_remove_I420AVideoFrameReady_m2C0293778667D3B27CBEAA1DE451973045607803 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_remove_I420AVideoFrameReady_m2C0293778667D3B27CBEAA1DE451973045607803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get__videoFrameReadyLock_5();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_2 = ___value0;
		RemoteVideoTrack_remove__videoFrameReady_mC7DD3A17281CB95971D752AA7506249F89C61A06(__this, L_2, /*hidden argument*/NULL);
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_3 = __this->get__videoFrameReady_6();
		V_0 = (bool)((((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * L_7 = __this->get__nativeHandle_3();
		RemoteVideoTrackInterop_RemoteVideoTrack_RegisterI420AFrameCallback_mD6D23C05D2205AA5DC484E89378DE3648FF94581(L_7, (I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::add_Argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_add_Argb32VideoFrameReady_mA34A2E27FDA92ADDEFD3939B20132F7D39441183 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_add_Argb32VideoFrameReady_mA34A2E27FDA92ADDEFD3939B20132F7D39441183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get__videoFrameReadyLock_5();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_2 = __this->get__argb32VideoFrameReady_7();
		V_0 = (bool)((((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_3 = ___value0;
		RemoteVideoTrack_add__argb32VideoFrameReady_mD59A0F795887118812D270147531446B24835C37(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * L_7 = __this->get__nativeHandle_3();
		IL2CPP_RUNTIME_CLASS_INIT(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_il2cpp_TypeInfo_var);
		Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2 * L_8 = ((VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_StaticFields*)il2cpp_codegen_static_fields_for(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_il2cpp_TypeInfo_var))->get_Argb32FrameCallback_1();
		intptr_t L_9 = __this->get__selfHandle_4();
		RemoteVideoTrackInterop_RemoteVideoTrack_RegisterArgb32FrameCallback_m7E54DA7BABB7BDB53209D1FCC514CB338C23DA46(L_7, L_8, (intptr_t)L_9, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::remove_Argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_remove_Argb32VideoFrameReady_mDD3C20C0B72EC443EE2F998CEFA0CED7F3D0E87B (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_remove_Argb32VideoFrameReady_mDD3C20C0B72EC443EE2F998CEFA0CED7F3D0E87B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get__videoFrameReadyLock_5();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_2 = ___value0;
		RemoteVideoTrack_remove__argb32VideoFrameReady_m721F85B797495A915A3D1E9432C8EA3ADDB87025(__this, L_2, /*hidden argument*/NULL);
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_3 = __this->get__argb32VideoFrameReady_7();
		V_0 = (bool)((((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * L_7 = __this->get__nativeHandle_3();
		RemoteVideoTrackInterop_RemoteVideoTrack_RegisterArgb32FrameCallback_m7E54DA7BABB7BDB53209D1FCC514CB338C23DA46(L_7, (Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::add__videoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_add__videoFrameReady_mA5069C3718B33093155790E64D86005496862A58 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_add__videoFrameReady_mA5069C3718B33093155790E64D86005496862A58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_0 = NULL;
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_1 = NULL;
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_2 = NULL;
	{
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_0 = __this->get__videoFrameReady_6();
		V_0 = L_0;
	}

IL_0007:
	{
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_1 = V_0;
		V_1 = L_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_2 = V_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)CastclassSealed((RuntimeObject*)L_4, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2_il2cpp_TypeInfo_var));
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 ** L_5 = __this->get_address_of__videoFrameReady_6();
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_6 = V_2;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_7 = V_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_8 = InterlockedCompareExchangeImpl<I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *>((I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 **)L_5, L_6, L_7);
		V_0 = L_8;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_9 = V_0;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_9) == ((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::remove__videoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_remove__videoFrameReady_mC7DD3A17281CB95971D752AA7506249F89C61A06 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_remove__videoFrameReady_mC7DD3A17281CB95971D752AA7506249F89C61A06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_0 = NULL;
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_1 = NULL;
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_2 = NULL;
	{
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_0 = __this->get__videoFrameReady_6();
		V_0 = L_0;
	}

IL_0007:
	{
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_1 = V_0;
		V_1 = L_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_2 = V_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)CastclassSealed((RuntimeObject*)L_4, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2_il2cpp_TypeInfo_var));
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 ** L_5 = __this->get_address_of__videoFrameReady_6();
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_6 = V_2;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_7 = V_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_8 = InterlockedCompareExchangeImpl<I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *>((I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 **)L_5, L_6, L_7);
		V_0 = L_8;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_9 = V_0;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_9) == ((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::add__argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_add__argb32VideoFrameReady_mD59A0F795887118812D270147531446B24835C37 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_add__argb32VideoFrameReady_mD59A0F795887118812D270147531446B24835C37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_0 = NULL;
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_1 = NULL;
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_2 = NULL;
	{
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_0 = __this->get__argb32VideoFrameReady_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_1 = V_0;
		V_1 = L_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_2 = V_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)CastclassSealed((RuntimeObject*)L_4, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77_il2cpp_TypeInfo_var));
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 ** L_5 = __this->get_address_of__argb32VideoFrameReady_7();
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_6 = V_2;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_7 = V_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_8 = InterlockedCompareExchangeImpl<Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *>((Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 **)L_5, L_6, L_7);
		V_0 = L_8;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_9 = V_0;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_9) == ((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::remove__argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_remove__argb32VideoFrameReady_m721F85B797495A915A3D1E9432C8EA3ADDB87025 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_remove__argb32VideoFrameReady_m721F85B797495A915A3D1E9432C8EA3ADDB87025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_0 = NULL;
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_1 = NULL;
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_2 = NULL;
	{
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_0 = __this->get__argb32VideoFrameReady_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_1 = V_0;
		V_1 = L_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_2 = V_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)CastclassSealed((RuntimeObject*)L_4, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77_il2cpp_TypeInfo_var));
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 ** L_5 = __this->get_address_of__argb32VideoFrameReady_7();
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_6 = V_2;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_7 = V_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_8 = InterlockedCompareExchangeImpl<Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *>((Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 **)L_5, L_6, L_7);
		V_0 = L_8;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_9 = V_0;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_9) == ((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::.ctor(Microsoft.MixedReality.WebRTC.Interop.RemoteVideoTrackInterop_RemoteVideoTrackHandle,Microsoft.MixedReality.WebRTC.PeerConnection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack__ctor_mA9E382DFC8E4232F7BEFCE8B654D664F3606E485 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * ___handle0, PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * ___peer1, String_t* ___trackName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack__ctor_mA9E382DFC8E4232F7BEFCE8B654D664F3606E485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__selfHandle_4((intptr_t)(0));
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set__videoFrameReadyLock_5(L_0);
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_1 = ___peer1;
		String_t* L_2 = ___trackName2;
		MediaTrack__ctor_m7CEB2D816FD533872A18A8B3CD56F14965AC3076(__this, L_1, L_2, /*hidden argument*/NULL);
		RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * L_3 = ___handle0;
		__this->set__nativeHandle_3(L_3);
		intptr_t L_4 = Utils_MakeWrapperRef_m8D8AA662597F2CE5342720F96F6A00BA8BD1B7A5(__this, /*hidden argument*/NULL);
		__this->set__selfHandle_4((intptr_t)L_4);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::DestroyNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_DestroyNative_m94ED71D6CC1026E7485221D2B0D782308ADE5886 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_DestroyNative_m94ED71D6CC1026E7485221D2B0D782308ADE5886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * L_0 = __this->get__nativeHandle_3();
		NullCheck(L_0);
		bool L_1 = SafeHandle_get_IsClosed_mDC07CBB5C7BB58A6B31641D976CE3ADC37ED8377(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		__this->set__videoFrameReady_6((I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)NULL);
		__this->set__argb32VideoFrameReady_7((Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)NULL);
		intptr_t L_2 = __this->get__selfHandle_4();
		Utils_ReleaseWrapperRef_mA0849EFF1B0216529246F3D245D2FAB318C1D3FE((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set__selfHandle_4((intptr_t)(0));
		RemoteVideoTrackHandle_tCE9DC4AF51BF47D5225E16FD04961021EE08949B * L_3 = __this->get__nativeHandle_3();
		NullCheck(L_3);
		SafeHandle_Dispose_m6433E520A7D38A8C424843DFCDB5EF2384EC8A6A(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop.IVideoSource.OnI420AFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnI420AFrameReady_m48EEB5A164B4DF1383BE15F014C178DF2CCBFFB8 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F  ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnI420AFrameReady_m48EEB5A164B4DF1383BE15F014C178DF2CCBFFB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * G_B2_0 = NULL;
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var);
		MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * L_0 = ((MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_StaticFields*)il2cpp_codegen_static_fields_for(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var))->get_Log_0();
		I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F  L_1 = ___frame0;
		uint32_t L_2 = L_1.get_width_0();
		I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F  L_3 = ___frame0;
		uint32_t L_4 = L_3.get_height_1();
		NullCheck(L_0);
		MainEventSource_I420ARemoteVideoFrameReady_m885B7496C207FF1B44E549F09BB9AB963A7AFC87(L_0, L_2, L_4, /*hidden argument*/NULL);
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_5 = __this->get__videoFrameReady_6();
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F  L_7 = ___frame0;
		NullCheck(G_B2_0);
		I420AVideoFrameDelegate_Invoke_mA6827B8B63CBBA7E1CFB53DDFA6BFF32D3DF6A03(G_B2_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop.IVideoSource.OnArgb32FrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnArgb32FrameReady_m7C7DBD6290D8DFAD683F61277F307B2FBC4AEDCF (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1  ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnArgb32FrameReady_m7C7DBD6290D8DFAD683F61277F307B2FBC4AEDCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * G_B2_0 = NULL;
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var);
		MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * L_0 = ((MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_StaticFields*)il2cpp_codegen_static_fields_for(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var))->get_Log_0();
		Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1  L_1 = ___frame0;
		uint32_t L_2 = L_1.get_width_0();
		Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1  L_3 = ___frame0;
		uint32_t L_4 = L_3.get_height_1();
		NullCheck(L_0);
		MainEventSource_Argb32RemoteVideoFrameReady_m09268CC1947DD159AD15B27F3214B43DFBF2606D(L_0, L_2, L_4, /*hidden argument*/NULL);
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_5 = __this->get__argb32VideoFrameReady_7();
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1  L_7 = ___frame0;
		NullCheck(G_B2_0);
		Argb32VideoFrameDelegate_Invoke_mB2967B9A4387ECC624C6A9ED08D65F5B4BE2C487(G_B2_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.RemoteVideoTrack::OnMute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVideoTrack_OnMute_mE5E0FB793C259AE14C615A2ECE2FD152F684F223 (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, bool ___muted0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Microsoft.MixedReality.WebRTC.RemoteVideoTrack::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteVideoTrack_ToString_m3D39640FA9ECC5722E6701967BB85278960BC31F (RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVideoTrack_ToString_m3D39640FA9ECC5722E6701967BB85278960BC31F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = MediaTrack_get_Name_mF572E5112691F3449E8B9F0177168A959ED5BC36_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralA01609E2A660D8BC46FDB8AA3A0AF6D6FDF3A34F, L_0, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.ScopedDelayedEvent::.ctor(Microsoft.MixedReality.WebRTC.DelayedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedDelayedEvent__ctor_mF10D47D48EA55AFB42B76536AA1D2BC186CC0F88 (ScopedDelayedEvent_t5E27E2E7DC152C91514EA8A86A98AD9543134BA0 * __this, DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * ___ev0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * L_0 = ___ev0;
		__this->set__delayedEvent_0(L_0);
		DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * L_1 = __this->get__delayedEvent_0();
		NullCheck(L_1);
		DelayedEvent_BeginSuspend_m9570148597D865E210B093FC700CE0219FF914E8(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.ScopedDelayedEvent::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedDelayedEvent_Dispose_m41FDC706ACC07BA3980B92B8324F3A0A00A41C69 (ScopedDelayedEvent_t5E27E2E7DC152C91514EA8A86A98AD9543134BA0 * __this, const RuntimeMethod* method)
{
	{
		DelayedEvent_t3CFD616D6F2BE6D4EAEDBC8E1EDF1531F831A146 * L_0 = __this->get__delayedEvent_0();
		NullCheck(L_0);
		DelayedEvent_EndSuspend_mB6A859A1C4EF648404AA08E6826FF9B019DAA0DE(L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.SctpNotNegotiatedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SctpNotNegotiatedException__ctor_mDB97AAAE557AAE2F23338E8A5F26EBD3214EEE2B (SctpNotNegotiatedException_t0DDCAA2882C001CDB9684361B570ADBA17AF5008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SctpNotNegotiatedException__ctor_mDB97AAAE557AAE2F23338E8A5F26EBD3214EEE2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, _stringLiteral9C0DE34C058924A32D26385C638ADF9EB7CD3F38, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.SdpMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdpMessage__ctor_m5E9A1CCD0E6B2EE7D3CC9D94D2F4B3F0DE7AA0A1 (SdpMessage_tAEB01C9CFDB66C7F02703F249F37A599A7204BE2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.Tracing.EventAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventAttribute__ctor_mA41BBDC73A23333AF7F9A364114C0356136D18CB (EventAttribute_t985CF6718DB0A5DC5085FB5043A817FD34746FCE * __this, int32_t ___eventId0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.EventAttribute::set_Level(Microsoft.MixedReality.WebRTC.Tracing.EventLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventAttribute_set_Level_m33BC02FD35E8DB0FA9DE1B14BDC5D6979483C147 (EventAttribute_t985CF6718DB0A5DC5085FB5043A817FD34746FCE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLevelU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.EventAttribute::set_Keywords(Microsoft.MixedReality.WebRTC.Tracing.EventKeywords)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventAttribute_set_Keywords_mEA69D089ED4B9502EF01365D0E62C6339BFFB128 (EventAttribute_t985CF6718DB0A5DC5085FB5043A817FD34746FCE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CKeywordsU3Ek__BackingField_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_Initialize_mC05516BCF5F5CF75850892C7E0A0D99B91805D82 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::WriteEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_WriteEvent_m1C3730759A4A03C7C2B34E35FE3E5817867EA0E8 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___eventId0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::WriteEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_WriteEvent_m76635AA499D50FF2E75EB19041A3F7E1FE1DC26F (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___eventId0, int32_t ___arg01, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::WriteEvent(System.Int32,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___eventId0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::NativeError(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_NativeError_m057C3276B7C929EAE7151F1511320B2BF7B6711D (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___res0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_Connected_mCDC87987934CDFFAFE2EA8D65AA035CBBF72DC2A (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, const RuntimeMethod* method)
{
	{
		MainEventSource_WriteEvent_m1C3730759A4A03C7C2B34E35FE3E5817867EA0E8(__this, ((int32_t)4097), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::IceStateChanged(Microsoft.MixedReality.WebRTC.IceConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_IceStateChanged_m74CA2024DBF073CBEFE37E7FF7CEE6DDCD1D5B18 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___newState0;
		MainEventSource_WriteEvent_m76635AA499D50FF2E75EB19041A3F7E1FE1DC26F(__this, ((int32_t)4098), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::RenegotiationNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_RenegotiationNeeded_mF311C30D29614C1D24988C742948B8CE231A248F (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, const RuntimeMethod* method)
{
	{
		MainEventSource_WriteEvent_m1C3730759A4A03C7C2B34E35FE3E5817867EA0E8(__this, ((int32_t)4099), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::PeerConnectionNotOpenError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_PeerConnectionNotOpenError_m1A41743043E1DF0C0C314013D23FF796FED81C9F (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, const RuntimeMethod* method)
{
	{
		MainEventSource_WriteEvent_m1C3730759A4A03C7C2B34E35FE3E5817867EA0E8(__this, ((int32_t)4100), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::IceGatheringStateChanged(Microsoft.MixedReality.WebRTC.IceGatheringState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_IceGatheringStateChanged_m25BF2E1D5F0C57991F8FBB5ADF357296578228B3 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___newState0;
		MainEventSource_WriteEvent_m76635AA499D50FF2E75EB19041A3F7E1FE1DC26F(__this, ((int32_t)4101), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::IceCandidateReady(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_IceCandidateReady_mB2CD002DA02FD480C75A2480B42DEA46B9DB847D (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, String_t* ___sdpMid0, int32_t ___sdpMlineindex1, String_t* ___candidate2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_IceCandidateReady_mB2CD002DA02FD480C75A2480B42DEA46B9DB847D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___sdpMid0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		int32_t L_4 = ___sdpMlineindex1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_3;
		String_t* L_8 = ___candidate2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)8194), L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::CreateOffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_CreateOffer_m7762CCA6C5D2C8604B1608733538AA4F2DA5144D (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, const RuntimeMethod* method)
{
	{
		MainEventSource_WriteEvent_m1C3730759A4A03C7C2B34E35FE3E5817867EA0E8(__this, ((int32_t)8195), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::CreateAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_CreateAnswer_mEA42B67E2350B62D7D1BBE090DF10C6E40E2C5F3 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, const RuntimeMethod* method)
{
	{
		MainEventSource_WriteEvent_m1C3730759A4A03C7C2B34E35FE3E5817867EA0E8(__this, ((int32_t)8196), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::AddIceCandidate(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_AddIceCandidate_m7BF96CE0865209573E6956A40FA1633AD6B47A33 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, String_t* ___sdpMid0, int32_t ___sdpMlineindex1, String_t* ___candidate2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_AddIceCandidate_m7BF96CE0865209573E6956A40FA1633AD6B47A33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___sdpMid0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		int32_t L_4 = ___sdpMlineindex1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_3;
		String_t* L_8 = ___candidate2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)8197), L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::LocalSdpReady(Microsoft.MixedReality.WebRTC.SdpMessageType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_LocalSdpReady_mB0824EB3A7CD3B2069077B92FDA1C53F15712052 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___type0, String_t* ___sdp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_LocalSdpReady_mB0824EB3A7CD3B2069077B92FDA1C53F15712052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = ___type0;
		int32_t L_3 = ((int32_t)L_2);
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		String_t* L_6 = ___sdp1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)8198), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::I420ALocalVideoFrameReady(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_I420ALocalVideoFrameReady_mE2451959F602D0AD98081EBA26DED0F2CC23E8C1 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___width0, uint32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_I420ALocalVideoFrameReady_mE2451959F602D0AD98081EBA26DED0F2CC23E8C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		uint32_t L_2 = ___width0;
		int32_t L_3 = ((int32_t)L_2);
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		uint32_t L_6 = ___height1;
		int32_t L_7 = ((int32_t)L_6);
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12291), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::Argb32LocalVideoFrameReady(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_Argb32LocalVideoFrameReady_m22B9A884F874F8C48D582E1790E2D1FF93B6EC24 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___width0, uint32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_Argb32LocalVideoFrameReady_m22B9A884F874F8C48D582E1790E2D1FF93B6EC24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		uint32_t L_2 = ___width0;
		int32_t L_3 = ((int32_t)L_2);
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		uint32_t L_6 = ___height1;
		int32_t L_7 = ((int32_t)L_6);
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12292), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::I420ARemoteVideoFrameReady(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_I420ARemoteVideoFrameReady_m885B7496C207FF1B44E549F09BB9AB963A7AFC87 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___width0, uint32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_I420ARemoteVideoFrameReady_m885B7496C207FF1B44E549F09BB9AB963A7AFC87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		uint32_t L_2 = ___width0;
		int32_t L_3 = ((int32_t)L_2);
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		uint32_t L_6 = ___height1;
		int32_t L_7 = ((int32_t)L_6);
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12293), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::Argb32RemoteVideoFrameReady(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_Argb32RemoteVideoFrameReady_m09268CC1947DD159AD15B27F3214B43DFBF2606D (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___width0, uint32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_Argb32RemoteVideoFrameReady_m09268CC1947DD159AD15B27F3214B43DFBF2606D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		uint32_t L_2 = ___width0;
		int32_t L_3 = ((int32_t)L_2);
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		uint32_t L_6 = ___height1;
		int32_t L_7 = ((int32_t)L_6);
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12294), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::LocalAudioFrameReady(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_LocalAudioFrameReady_m6BFD99B735FC77BD77374835EEC22711B5DF5170 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___bitsPerSample0, uint32_t ___sampleRate1, uint32_t ___channelCount2, uint32_t ___sampleCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_LocalAudioFrameReady_m6BFD99B735FC77BD77374835EEC22711B5DF5170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		uint32_t L_2 = ___bitsPerSample0;
		int32_t L_3 = ((int32_t)L_2);
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		uint32_t L_6 = ___sampleRate1;
		int32_t L_7 = ((int32_t)L_6);
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		uint32_t L_10 = ___channelCount2;
		int32_t L_11 = ((int32_t)L_10);
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_9;
		uint32_t L_14 = ___sampleCount3;
		int32_t L_15 = ((int32_t)L_14);
		RuntimeObject * L_16 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12295), L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::RemoteAudioFrameReady(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_RemoteAudioFrameReady_m3776CFF57BBE3A48AF9C61DE30691291AEF5BB9C (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, uint32_t ___bitsPerSample0, uint32_t ___sampleRate1, uint32_t ___channelCount2, uint32_t ___sampleCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_RemoteAudioFrameReady_m3776CFF57BBE3A48AF9C61DE30691291AEF5BB9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		uint32_t L_2 = ___bitsPerSample0;
		int32_t L_3 = ((int32_t)L_2);
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		uint32_t L_6 = ___sampleRate1;
		int32_t L_7 = ((int32_t)L_6);
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		uint32_t L_10 = ___channelCount2;
		int32_t L_11 = ((int32_t)L_10);
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_9;
		uint32_t L_14 = ___sampleCount3;
		int32_t L_15 = ((int32_t)L_14);
		RuntimeObject * L_16 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12296), L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::VideoFrameQueueEnqueueI420(System.Guid,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_VideoFrameQueueEnqueueI420_m94800E8B127D52139E33E20DEA3DB1173CD458D7 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, Guid_t  ___instanceId0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_VideoFrameQueueEnqueueI420_m94800E8B127D52139E33E20DEA3DB1173CD458D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		Guid_t  L_2 = ___instanceId0;
		Guid_t  L_3 = L_2;
		RuntimeObject * L_4 = Box(Guid_t_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		int32_t L_6 = ___width1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		int32_t L_10 = ___height2;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12545), L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::VideoFrameQueueEnqueueArgb32(System.Guid,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_VideoFrameQueueEnqueueArgb32_mACA06B9C05CCE0AE8B9F56B1A3AC127100417EDA (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, Guid_t  ___instanceId0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_VideoFrameQueueEnqueueArgb32_mACA06B9C05CCE0AE8B9F56B1A3AC127100417EDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		Guid_t  L_2 = ___instanceId0;
		Guid_t  L_3 = L_2;
		RuntimeObject * L_4 = Box(Guid_t_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		int32_t L_6 = ___width1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		int32_t L_10 = ___height2;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12546), L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::VideoFrameQueueDropI420(System.Guid,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_VideoFrameQueueDropI420_mED0D1EA58E30E7F9910E66A7A7BE35FC31C4ACAD (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, Guid_t  ___instanceId0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_VideoFrameQueueDropI420_mED0D1EA58E30E7F9910E66A7A7BE35FC31C4ACAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		Guid_t  L_2 = ___instanceId0;
		Guid_t  L_3 = L_2;
		RuntimeObject * L_4 = Box(Guid_t_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		int32_t L_6 = ___width1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		int32_t L_10 = ___height2;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12547), L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::VideoFrameQueueDropArgb32(System.Guid,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_VideoFrameQueueDropArgb32_m1F6DCD6102BAFCAA5F2D0F22EEC43D12B5560919 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, Guid_t  ___instanceId0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_VideoFrameQueueDropArgb32_m1F6DCD6102BAFCAA5F2D0F22EEC43D12B5560919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		Guid_t  L_2 = ___instanceId0;
		Guid_t  L_3 = L_2;
		RuntimeObject * L_4 = Box(Guid_t_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		int32_t L_6 = ___width1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		int32_t L_10 = ___height2;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12548), L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::VideoFrameQueueDequeue(System.Guid,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_VideoFrameQueueDequeue_mE8BBE31FAA4F19347FDA50A3B386D5FED0FF30A1 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, Guid_t  ___instanceId0, float ___dequeuedDtMs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_VideoFrameQueueDequeue_mE8BBE31FAA4F19347FDA50A3B386D5FED0FF30A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		Guid_t  L_2 = ___instanceId0;
		Guid_t  L_3 = L_2;
		RuntimeObject * L_4 = Box(Guid_t_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		float L_6 = ___dequeuedDtMs1;
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12549), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::VideoFrameQueueRecycleStorage(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_VideoFrameQueueRecycleStorage_m95D26B3C6746FBE585D0FE0C0FF1980E56B7C9A1 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, Guid_t  ___instanceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_VideoFrameQueueRecycleStorage_m95D26B3C6746FBE585D0FE0C0FF1980E56B7C9A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		Guid_t  L_2 = ___instanceId0;
		Guid_t  L_3 = L_2;
		RuntimeObject * L_4 = Box(Guid_t_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12550), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::VideoTrackAdded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_VideoTrackAdded_mA9DD4466183999EF1BBE9F63A9939375C1799DCE (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, String_t* ___trackName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_VideoTrackAdded_mA9DD4466183999EF1BBE9F63A9939375C1799DCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___trackName0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12552), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::VideoTrackRemoved(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_VideoTrackRemoved_m4F2841EC5A40D8FD8C9E46DBD9259ECCB020DFC1 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, String_t* ___trackName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_VideoTrackRemoved_m4F2841EC5A40D8FD8C9E46DBD9259ECCB020DFC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___trackName0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12553), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::AudioTrackAdded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_AudioTrackAdded_m341DAF480DFBCB92DDF99D161066121B6E95CF7A (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, String_t* ___trackName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_AudioTrackAdded_m341DAF480DFBCB92DDF99D161066121B6E95CF7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___trackName0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12808), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::AudioTrackRemoved(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_AudioTrackRemoved_m4352AF2E4EDDB83AFE7414B65A03028C8C9BF152 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, String_t* ___trackName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_AudioTrackRemoved_m4352AF2E4EDDB83AFE7414B65A03028C8C9BF152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___trackName0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)12809), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::DataChannelAdded(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_DataChannelAdded_m9B387C1EFC1A17F034C047118216031EFC9DB200 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___id0, String_t* ___label1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_DataChannelAdded_m9B387C1EFC1A17F034C047118216031EFC9DB200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = ___id0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		String_t* L_6 = ___label1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)16385), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::DataChannelRemoved(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_DataChannelRemoved_m6F34DC4EF0C6DDDF67F4D09E60B0D39165F55598 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___id0, String_t* ___label1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_DataChannelRemoved_m6F34DC4EF0C6DDDF67F4D09E60B0D39165F55598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = ___id0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		String_t* L_6 = ___label1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)16386), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::DataChannelBufferingChanged(System.Int32,System.UInt64,System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_DataChannelBufferingChanged_m9C3D0CCF49A71860C21FB95B1FCC52CC9FF1679D (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___id0, uint64_t ___previous1, uint64_t ___current2, uint64_t ___limit3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_DataChannelBufferingChanged_m9C3D0CCF49A71860C21FB95B1FCC52CC9FF1679D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = ___id0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		uint64_t L_6 = ___previous1;
		uint64_t L_7 = L_6;
		RuntimeObject * L_8 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		uint64_t L_10 = ___current2;
		uint64_t L_11 = L_10;
		RuntimeObject * L_12 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_9;
		uint64_t L_14 = ___limit3;
		uint64_t L_15 = L_14;
		RuntimeObject * L_16 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)16387), L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::DataChannelStateChanged(System.Int32,Microsoft.MixedReality.WebRTC.DataChannel_ChannelState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_DataChannelStateChanged_m10EB1F4FBE7A56D06B18ED6D1A8AFC8BCD331076 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___id0, int32_t ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_DataChannelStateChanged_m10EB1F4FBE7A56D06B18ED6D1A8AFC8BCD331076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = ___id0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		int32_t L_6 = ___state1;
		int32_t L_7 = ((int32_t)L_6);
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)16388), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::DataChannelSendMessage(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_DataChannelSendMessage_m44C4D448CB37A608366D66B84D7A33A3750EF5D7 (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___id0, int32_t ___byteSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_DataChannelSendMessage_m44C4D448CB37A608366D66B84D7A33A3750EF5D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = ___id0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		int32_t L_6 = ___byteSize1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)16389), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::DataChannelMessageReceived(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource_DataChannelMessageReceived_m2B9F0D9368C63E6E79008692FD07D477950DC3EC (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, int32_t ___id0, int32_t ___byteSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource_DataChannelMessageReceived_m2B9F0D9368C63E6E79008692FD07D477950DC3EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = ___id0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		int32_t L_6 = ___byteSize1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		MainEventSource_WriteEvent_m46081632E3AC973F8EC7386DADCE7D439B4FD94E(__this, ((int32_t)16390), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource__ctor_mBB6A4BCA61C3094B49510CA25F7CED7D7D7D0FAC (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Tracing.MainEventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainEventSource__cctor_mB9161435AC34F1FFEC7312594E01E78D0727FDC7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainEventSource__cctor_mB9161435AC34F1FFEC7312594E01E78D0727FDC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * L_0 = (MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF *)il2cpp_codegen_object_new(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var);
		MainEventSource__ctor_mBB6A4BCA61C3094B49510CA25F7CED7D7D7D0FAC(L_0, /*hidden argument*/NULL);
		((MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_StaticFields*)il2cpp_codegen_static_fields_for(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var))->set_Log_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.MixedReality.WebRTC.Transceiver::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Transceiver_get_Name_m13156DCB6E106C8C36E2AB8498DFD8509DB16676 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// Microsoft.MixedReality.WebRTC.MediaKind Microsoft.MixedReality.WebRTC.Transceiver::get_MediaKind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Transceiver_get_MediaKind_m43442B7C3BC9BC1584F49FB62B14256E614BC023 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_U3CMediaKindU3Ek__BackingField_1();
		return L_0;
	}
}
// Microsoft.MixedReality.WebRTC.PeerConnection Microsoft.MixedReality.WebRTC.Transceiver::get_PeerConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * Transceiver_get_PeerConnection_mE1637101B1F2042692FADDD07FE07BEDBC1B6B68 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	{
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_0 = __this->get_U3CPeerConnectionU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.WebRTC.Transceiver::get_MlineIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transceiver_get_MlineIndex_m97275BF2D498B30B6E1DABA9C0518F536B805E3B (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CMlineIndexU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::set_MlineIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_set_MlineIndex_mD739C872914B07D1BA03BB9444190A633B6F64D5 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CMlineIndexU3Ek__BackingField_3(L_0);
		return;
	}
}
// Microsoft.MixedReality.WebRTC.Transceiver_Direction Microsoft.MixedReality.WebRTC.Transceiver::get_DesiredDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transceiver_get_DesiredDirection_mD5FBFEE5F41870E3689FEA1B931758BB81DC200E (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__desiredDirection_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::set_DesiredDirection(Microsoft.MixedReality.WebRTC.Transceiver_Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_set_DesiredDirection_mE39B141D63DAF4A6A7C477F01AA9A14268538F94 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transceiver_set_DesiredDirection_mE39B141D63DAF4A6A7C477F01AA9A14268538F94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get__desiredDirection_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * L_2 = __this->get__nativeHandle_9();
		int32_t L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(TransceiverInterop_t70D4B8B7CD805C0A75AED9089A4E2B7366B5C012_il2cpp_TypeInfo_var);
		uint32_t L_4 = TransceiverInterop_Transceiver_SetDirection_mBF59C9C8D4DC36ECB827C43A658A48C1154454C9(L_2, L_3, /*hidden argument*/NULL);
		Utils_ThrowOnErrorCode_mD576E1A2F8038580848322574AFC3D86849D9F15(L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___value0;
		__this->set__desiredDirection_8(L_5);
		return;
	}
}
// System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver_Direction> Microsoft.MixedReality.WebRTC.Transceiver::get_NegotiatedDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  Transceiver_get_NegotiatedDirection_m9FDA90461897F11046AFE9E6D93A1CA9C7378A88 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_0 = __this->get_U3CNegotiatedDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::set_NegotiatedDirection(System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver_Direction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_set_NegotiatedDirection_m56B4360E46F9580F655DD808579B730256AC9E5E (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_0 = ___value0;
		__this->set_U3CNegotiatedDirectionU3Ek__BackingField_5(L_0);
		return;
	}
}
// Microsoft.MixedReality.WebRTC.LocalMediaTrack Microsoft.MixedReality.WebRTC.Transceiver::get_LocalTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * Transceiver_get_LocalTrack_m8CB6D530B62616EB8DD19CB729C464FBCAA3B6EC (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_0 = __this->get__localTrack_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::set_LocalAudioTrack(Microsoft.MixedReality.WebRTC.LocalAudioTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_set_LocalAudioTrack_m64F02F604F0CBE2A728E6EE38F47C10DA6FB6902 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transceiver_set_LocalAudioTrack_m64F02F604F0CBE2A728E6EE38F47C10DA6FB6902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = Transceiver_get_MediaKind_m43442B7C3BC9BC1584F49FB62B14256E614BC023_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77 * L_1 = ___value0;
		Transceiver_SetLocalTrackImpl_m521A347122617DC534543D0072D189719E78F275(__this, L_1, /*hidden argument*/NULL);
		return;
	}

IL_0010:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, _stringLiteral526C9DF812C5895BC2D94BCE11C8CCD957F86217, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Transceiver_set_LocalAudioTrack_m64F02F604F0CBE2A728E6EE38F47C10DA6FB6902_RuntimeMethod_var);
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::set_LocalVideoTrack(Microsoft.MixedReality.WebRTC.LocalVideoTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_set_LocalVideoTrack_mD511CF1BEE98D16948CB71ED109BA00B9D3286F4 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transceiver_set_LocalVideoTrack_mD511CF1BEE98D16948CB71ED109BA00B9D3286F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = Transceiver_get_MediaKind_m43442B7C3BC9BC1584F49FB62B14256E614BC023_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0011;
		}
	}
	{
		LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * L_1 = ___value0;
		Transceiver_SetLocalTrackImpl_m521A347122617DC534543D0072D189719E78F275(__this, L_1, /*hidden argument*/NULL);
		return;
	}

IL_0011:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, _stringLiteral383689D6BFFDBC2B4845740D965675E72AA130BE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Transceiver_set_LocalVideoTrack_mD511CF1BEE98D16948CB71ED109BA00B9D3286F4_RuntimeMethod_var);
	}
}
// Microsoft.MixedReality.WebRTC.MediaTrack Microsoft.MixedReality.WebRTC.Transceiver::get_RemoteTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * Transceiver_get_RemoteTrack_m0499ADEA6C985C623483757F30E85FAEB589C540 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	{
		MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * L_0 = __this->get__remoteTrack_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::set_RemoteAudioTrack(Microsoft.MixedReality.WebRTC.RemoteAudioTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_set_RemoteAudioTrack_mB2CEF60CC66233B60E78316D34BBFC089A0FCD3D (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * ___value0, const RuntimeMethod* method)
{
	{
		RemoteAudioTrack_t9CDE27E5CB8703A4FE3BA707A8F279692B6389A7 * L_0 = ___value0;
		__this->set__remoteTrack_12(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::set_RemoteVideoTrack(Microsoft.MixedReality.WebRTC.RemoteVideoTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_set_RemoteVideoTrack_mE29395DD835009BB5A35BA464FBB3757CC43CEBA (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * ___value0, const RuntimeMethod* method)
{
	{
		RemoteVideoTrack_t62850647C6E814F0081917B7DEC9DAB13213306F * L_0 = ___value0;
		__this->set__remoteTrack_12(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::.ctor(Microsoft.MixedReality.WebRTC.Interop.TransceiverInterop_TransceiverHandle,Microsoft.MixedReality.WebRTC.MediaKind,Microsoft.MixedReality.WebRTC.PeerConnection,System.Int32,System.String,System.String[],Microsoft.MixedReality.WebRTC.Transceiver_Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver__ctor_m1B99774310530474948360956CE45719E84794F4 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * ___handle0, uint32_t ___mediaKind1, PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * ___peerConnection2, int32_t ___mlineIndex3, String_t* ___name4, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___streamIDs5, int32_t ___initialDesiredDirection6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transceiver__ctor_m1B99774310530474948360956CE45719E84794F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		__this->set_U3CMlineIndexU3Ek__BackingField_3((-1));
		__this->set__argsRef_10((intptr_t)(0));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * L_1 = ___handle0;
		__this->set__nativeHandle_9(L_1);
		uint32_t L_2 = ___mediaKind1;
		__this->set_U3CMediaKindU3Ek__BackingField_1(L_2);
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_3 = ___peerConnection2;
		__this->set_U3CPeerConnectionU3Ek__BackingField_2(L_3);
		int32_t L_4 = ___mlineIndex3;
		Transceiver_set_MlineIndex_mD739C872914B07D1BA03BB9444190A633B6F64D5_inline(__this, L_4, /*hidden argument*/NULL);
		String_t* L_5 = ___name4;
		__this->set_U3CNameU3Ek__BackingField_0(L_5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___streamIDs5;
		__this->set_U3CStreamIDsU3Ek__BackingField_7(L_6);
		int32_t L_7 = ___initialDesiredDirection6;
		__this->set__desiredDirection_8(L_7);
		intptr_t* L_8 = __this->get_address_of__argsRef_10();
		IL2CPP_RUNTIME_CLASS_INIT(TransceiverInterop_t70D4B8B7CD805C0A75AED9089A4E2B7366B5C012_il2cpp_TypeInfo_var);
		TransceiverInterop_RegisterCallbacks_mBFEEA2C6F4D6A52BF4511EB58E36289949907A7E(__this, (intptr_t*)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::SetLocalTrackImpl(Microsoft.MixedReality.WebRTC.LocalMediaTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_SetLocalTrackImpl_m521A347122617DC534543D0072D189719E78F275 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * ___track0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transceiver_SetLocalTrackImpl_m521A347122617DC534543D0072D189719E78F275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77 * V_0 = NULL;
	LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_0 = ___track0;
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_1 = __this->get__localTrack_11();
		if ((!(((RuntimeObject*)(LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 *)L_0) == ((RuntimeObject*)(LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 *)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_2 = ___track0;
		V_0 = ((LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77 *)IsInstClass((RuntimeObject*)L_2, LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77_il2cpp_TypeInfo_var));
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_3 = ___track0;
		V_1 = ((LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 *)IsInstClass((RuntimeObject*)L_3, LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48_il2cpp_TypeInfo_var));
		LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		uint32_t L_5 = Transceiver_get_MediaKind_m43442B7C3BC9BC1584F49FB62B14256E614BC023_inline(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_6, _stringLiteral140BF2E9DA01C50B8CB1CB901A6DF12BB33659E3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Transceiver_SetLocalTrackImpl_m521A347122617DC534543D0072D189719E78F275_RuntimeMethod_var);
	}

IL_002e:
	{
		LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * L_7 = V_1;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		uint32_t L_8 = Transceiver_get_MediaKind_m43442B7C3BC9BC1584F49FB62B14256E614BC023_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_9 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_9, _stringLiteral3880C03C096E81D0157A71E24AC312E5C8C02D75, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, Transceiver_SetLocalTrackImpl_m521A347122617DC534543D0072D189719E78F275_RuntimeMethod_var);
	}

IL_0045:
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_10 = ___track0;
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_11 = ___track0;
		NullCheck(L_11);
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_12 = MediaTrack_get_PeerConnection_m09C71654E82CF90972235CDE1C6EFAD19A626416_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0091;
		}
	}
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_13 = ___track0;
		NullCheck(L_13);
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_14 = MediaTrack_get_PeerConnection_m09C71654E82CF90972235CDE1C6EFAD19A626416_inline(L_13, /*hidden argument*/NULL);
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_15 = Transceiver_get_PeerConnection_mE1637101B1F2042692FADDD07FE07BEDBC1B6B68_inline(__this, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 *)L_14) == ((RuntimeObject*)(PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 *)L_15)))
		{
			goto IL_0091;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_18 = ___track0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_17;
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_20 = ___track0;
		NullCheck(L_20);
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_21 = MediaTrack_get_PeerConnection_m09C71654E82CF90972235CDE1C6EFAD19A626416_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_19;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, __this);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_22;
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_24 = Transceiver_get_PeerConnection_mE1637101B1F2042692FADDD07FE07BEDBC1B6B68_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_24);
		String_t* L_25 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteralB3DBD7D032645DBB329E24784050A300B644B9F3, L_23, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_26 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_26, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, Transceiver_SetLocalTrackImpl_m521A347122617DC534543D0072D189719E78F275_RuntimeMethod_var);
	}

IL_0091:
	{
		V_2 = ((int32_t)-2147483648LL);
		LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77 * L_27 = V_0;
		if (!L_27)
		{
			goto IL_00ae;
		}
	}
	{
		TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * L_28 = __this->get__nativeHandle_9();
		LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77 * L_29 = V_0;
		NullCheck(L_29);
		LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D * L_30 = LocalAudioTrack_get__nativeHandle_mB9BEE214F858D0E5109FF7B5836B3829BB22DFE0_inline(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TransceiverInterop_t70D4B8B7CD805C0A75AED9089A4E2B7366B5C012_il2cpp_TypeInfo_var);
		uint32_t L_31 = TransceiverInterop_Transceiver_SetLocalAudioTrack_m95BB72C3B0E0E271AC472BFE0156AF271E257D4C(L_28, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		goto IL_00c3;
	}

IL_00ae:
	{
		LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * L_32 = V_1;
		if (!L_32)
		{
			goto IL_00c3;
		}
	}
	{
		TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * L_33 = __this->get__nativeHandle_9();
		LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * L_34 = V_1;
		NullCheck(L_34);
		LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 * L_35 = LocalVideoTrack_get__nativeHandle_m6059F80B1F307C9E2A939EDA8BB88F75B4D78F06_inline(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TransceiverInterop_t70D4B8B7CD805C0A75AED9089A4E2B7366B5C012_il2cpp_TypeInfo_var);
		uint32_t L_36 = TransceiverInterop_Transceiver_SetLocalVideoTrack_mD83DF2337E167E4DBD413154E38406344D905362(L_33, L_35, /*hidden argument*/NULL);
		V_2 = L_36;
	}

IL_00c3:
	{
		uint32_t L_37 = V_2;
		Utils_ThrowOnErrorCode_mD576E1A2F8038580848322574AFC3D86849D9F15(L_37, /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_00cb:
	{
		V_3 = ((int32_t)-2147483648LL);
		uint32_t L_38 = Transceiver_get_MediaKind_m43442B7C3BC9BC1584F49FB62B14256E614BC023_inline(__this, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_00ec;
		}
	}
	{
		TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * L_39 = __this->get__nativeHandle_9();
		LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D * L_40 = (LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D *)il2cpp_codegen_object_new(LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D_il2cpp_TypeInfo_var);
		LocalAudioTrackHandle__ctor_m6913A7E6466EDAE2064A86C4A0CB1FBFAAB63E8E(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TransceiverInterop_t70D4B8B7CD805C0A75AED9089A4E2B7366B5C012_il2cpp_TypeInfo_var);
		uint32_t L_41 = TransceiverInterop_Transceiver_SetLocalAudioTrack_m95BB72C3B0E0E271AC472BFE0156AF271E257D4C(L_39, L_40, /*hidden argument*/NULL);
		V_3 = L_41;
		goto IL_0106;
	}

IL_00ec:
	{
		uint32_t L_42 = Transceiver_get_MediaKind_m43442B7C3BC9BC1584F49FB62B14256E614BC023_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)1))))
		{
			goto IL_0106;
		}
	}
	{
		TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * L_43 = __this->get__nativeHandle_9();
		LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 * L_44 = (LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 *)il2cpp_codegen_object_new(LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893_il2cpp_TypeInfo_var);
		LocalVideoTrackHandle__ctor_m393DE67D964DA23DC2BE02C02DDEC200240D75D8(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TransceiverInterop_t70D4B8B7CD805C0A75AED9089A4E2B7366B5C012_il2cpp_TypeInfo_var);
		uint32_t L_45 = TransceiverInterop_Transceiver_SetLocalVideoTrack_mD83DF2337E167E4DBD413154E38406344D905362(L_43, L_44, /*hidden argument*/NULL);
		V_3 = L_45;
	}

IL_0106:
	{
		uint32_t L_46 = V_3;
		Utils_ThrowOnErrorCode_mD576E1A2F8038580848322574AFC3D86849D9F15(L_46, /*hidden argument*/NULL);
	}

IL_010c:
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_47 = __this->get__localTrack_11();
		if (!L_47)
		{
			goto IL_0133;
		}
	}
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_48 = __this->get__localTrack_11();
		NullCheck(L_48);
		MediaTrack_set_Transceiver_m9B4383FD9C95562743EF2F2AC52D3D8EB7E6B6EB_inline(L_48, (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *)NULL, /*hidden argument*/NULL);
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_49 = __this->get__localTrack_11();
		NullCheck(L_49);
		MediaTrack_set_PeerConnection_m39B709EACD73926D738FBF59BF79E36358ADF3B6_inline(L_49, (PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 *)NULL, /*hidden argument*/NULL);
		__this->set__localTrack_11((LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 *)NULL);
	}

IL_0133:
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_50 = ___track0;
		if (!L_50)
		{
			goto IL_015a;
		}
	}
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_51 = ___track0;
		__this->set__localTrack_11(L_51);
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_52 = __this->get__localTrack_11();
		NullCheck(L_52);
		MediaTrack_set_Transceiver_m9B4383FD9C95562743EF2F2AC52D3D8EB7E6B6EB_inline(L_52, __this, /*hidden argument*/NULL);
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_53 = __this->get__localTrack_11();
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_54 = Transceiver_get_PeerConnection_mE1637101B1F2042692FADDD07FE07BEDBC1B6B68_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		MediaTrack_set_PeerConnection_m39B709EACD73926D738FBF59BF79E36358ADF3B6_inline(L_53, L_54, /*hidden argument*/NULL);
	}

IL_015a:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::CleanUpAfterNativeDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_CleanUpAfterNativeDestroyed_m0A73B4E7C3DEB297BD0248D869F4EEB425ACF84F (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transceiver_CleanUpAfterNativeDestroyed_m0A73B4E7C3DEB297BD0248D869F4EEB425ACF84F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_0 = __this->get__localTrack_11();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_1 = __this->get__localTrack_11();
		NullCheck(L_1);
		MediaTrack_set_Transceiver_m9B4383FD9C95562743EF2F2AC52D3D8EB7E6B6EB_inline(L_1, (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *)NULL, /*hidden argument*/NULL);
		__this->set__localTrack_11((LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 *)NULL);
	}

IL_001b:
	{
		TransceiverHandle_tE79ADB6464D95D901AA8F81901612F596A5D923A * L_2 = __this->get__nativeHandle_9();
		NullCheck(L_2);
		SafeHandle_Dispose_m6433E520A7D38A8C424843DFCDB5EF2384EC8A6A(L_2, /*hidden argument*/NULL);
		intptr_t L_3 = __this->get__argsRef_10();
		Utils_ReleaseWrapperRef_mA0849EFF1B0216529246F3D245D2FAB318C1D3FE((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set__argsRef_10((intptr_t)(0));
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::OnAssociated(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_OnAssociated_m6A9CEAEDF129E2A71258B2A6968444710AE79924 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, int32_t ___mlineIndex0, const RuntimeMethod* method)
{
	TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * G_B2_0 = NULL;
	TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * G_B1_0 = NULL;
	{
		int32_t L_0 = ___mlineIndex0;
		Transceiver_set_MlineIndex_mD739C872914B07D1BA03BB9444190A633B6F64D5_inline(__this, L_0, /*hidden argument*/NULL);
		TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * L_1 = __this->get_Associated_4();
		TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		TransceiverAssociatedDelegate_Invoke_m042BA0B403B2347E7AABAEBB3DF6DCE99C51CBC2(G_B2_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.Transceiver::OnStateUpdated(System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver_Direction>,Microsoft.MixedReality.WebRTC.Transceiver_Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transceiver_OnStateUpdated_m5FF1A039F1737AB4792D98E2449B3826773364F0 (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  ___negotiatedDirection0, int32_t ___desiredDirection1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transceiver_OnStateUpdated_m5FF1A039F1737AB4792D98E2449B3826773364F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  V_4;
	memset((&V_4), 0, sizeof(V_4));
	LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * G_B5_0 = NULL;
	LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * G_B4_0 = NULL;
	MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * G_B9_0 = NULL;
	MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * G_B8_0 = NULL;
	TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * G_B12_0 = NULL;
	TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * G_B11_0 = NULL;
	{
		int32_t L_0 = ___desiredDirection1;
		__this->set__desiredDirection_8(L_0);
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_1 = ___negotiatedDirection0;
		V_3 = L_1;
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_2 = Transceiver_get_NegotiatedDirection_m9FDA90461897F11046AFE9E6D93A1CA9C7378A88_inline(__this, /*hidden argument*/NULL);
		V_4 = L_2;
		int32_t L_3 = Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_RuntimeMethod_var);
		int32_t L_4 = Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_RuntimeMethod_var);
		bool L_5 = Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_RuntimeMethod_var);
		bool L_6 = Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_RuntimeMethod_var);
		if (!((int32_t)((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)&(int32_t)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0))))
		{
			goto IL_0035;
		}
	}
	{
		return;
	}

IL_0035:
	{
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_7 = Transceiver_get_NegotiatedDirection_m9FDA90461897F11046AFE9E6D93A1CA9C7378A88_inline(__this, /*hidden argument*/NULL);
		bool L_8 = Transceiver_HasSend_mA3BBA15578612ABF93C7D62901CAA039D4C8F260(L_7, /*hidden argument*/NULL);
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_9 = ___negotiatedDirection0;
		bool L_10 = Transceiver_HasSend_mA3BBA15578612ABF93C7D62901CAA039D4C8F260(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_11 = Transceiver_get_NegotiatedDirection_m9FDA90461897F11046AFE9E6D93A1CA9C7378A88_inline(__this, /*hidden argument*/NULL);
		bool L_12 = Transceiver_HasRecv_mED27F1FAFC495957D727A0DC6D14F42B5FB02576(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_13 = ___negotiatedDirection0;
		bool L_14 = Transceiver_HasRecv_mED27F1FAFC495957D727A0DC6D14F42B5FB02576(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_15 = ___negotiatedDirection0;
		Transceiver_set_NegotiatedDirection_m56B4360E46F9580F655DD808579B730256AC9E5E_inline(__this, L_15, /*hidden argument*/NULL);
		bool L_16 = V_0;
		if ((((int32_t)L_8) == ((int32_t)L_16)))
		{
			goto IL_0079;
		}
	}
	{
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_17 = __this->get__localTrack_11();
		LocalMediaTrack_tBB963480E005F2828C212CB3CCF2EC7C0E572276 * L_18 = L_17;
		G_B4_0 = L_18;
		if (L_18)
		{
			G_B5_0 = L_18;
			goto IL_0070;
		}
	}
	{
		goto IL_0079;
	}

IL_0070:
	{
		bool L_19 = V_0;
		NullCheck(G_B5_0);
		VirtActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.WebRTC.MediaTrack::OnMute(System.Boolean) */, G_B5_0, (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0));
	}

IL_0079:
	{
		bool L_20 = V_1;
		bool L_21 = V_2;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0092;
		}
	}
	{
		MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * L_22 = __this->get__remoteTrack_12();
		MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * L_23 = L_22;
		G_B8_0 = L_23;
		if (L_23)
		{
			G_B9_0 = L_23;
			goto IL_0089;
		}
	}
	{
		goto IL_0092;
	}

IL_0089:
	{
		bool L_24 = V_2;
		NullCheck(G_B9_0);
		VirtActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.WebRTC.MediaTrack::OnMute(System.Boolean) */, G_B9_0, (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0));
	}

IL_0092:
	{
		TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * L_25 = __this->get_DirectionChanged_6();
		TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * L_26 = L_25;
		G_B11_0 = L_26;
		if (L_26)
		{
			G_B12_0 = L_26;
			goto IL_009d;
		}
	}
	{
		return;
	}

IL_009d:
	{
		NullCheck(G_B12_0);
		TransceiverDirectionChangedDelegate_Invoke_m5E7CD40BDC731C6A73ED3343366F7BA6AFB79770(G_B12_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WebRTC.Transceiver::HasRecv(Microsoft.MixedReality.WebRTC.Transceiver_Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transceiver_HasRecv_mBA4A25E6F04584B310B5A59C03988ECE7E683B00 (int32_t ___dir0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___dir0;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___dir0;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0009:
	{
		return (bool)1;
	}
}
// System.Boolean Microsoft.MixedReality.WebRTC.Transceiver::HasSend(System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver_Direction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transceiver_HasSend_mA3BBA15578612ABF93C7D62901CAA039D4C8F260 (Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  ___dir0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transceiver_HasSend_mA3BBA15578612ABF93C7D62901CAA039D4C8F260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		bool L_0 = Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&___dir0), /*hidden argument*/Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_1 = ___dir0;
		V_0 = L_1;
		V_1 = 1;
		int32_t L_2 = Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_RuntimeMethod_var);
		int32_t L_3 = V_1;
		bool L_4 = Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)&(int32_t)L_4)))
		{
			goto IL_0038;
		}
	}
	{
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_5 = ___dir0;
		V_0 = L_5;
		V_1 = 0;
		int32_t L_6 = Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_RuntimeMethod_var);
		int32_t L_7 = V_1;
		bool L_8 = Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_RuntimeMethod_var);
		return (bool)((int32_t)((int32_t)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0)&(int32_t)L_8));
	}

IL_0038:
	{
		return (bool)1;
	}

IL_003a:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.WebRTC.Transceiver::HasRecv(System.Nullable`1<Microsoft.MixedReality.WebRTC.Transceiver_Direction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transceiver_HasRecv_mED27F1FAFC495957D727A0DC6D14F42B5FB02576 (Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  ___dir0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transceiver_HasRecv_mED27F1FAFC495957D727A0DC6D14F42B5FB02576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		bool L_0 = Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&___dir0), /*hidden argument*/Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_1 = ___dir0;
		V_0 = L_1;
		V_1 = 2;
		int32_t L_2 = Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_RuntimeMethod_var);
		int32_t L_3 = V_1;
		bool L_4 = Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)&(int32_t)L_4)))
		{
			goto IL_0038;
		}
	}
	{
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_5 = ___dir0;
		V_0 = L_5;
		V_1 = 0;
		int32_t L_6 = Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m76B0A6C30C701E4F5CC397FD4BB2FDCC36C19EF7_RuntimeMethod_var);
		int32_t L_7 = V_1;
		bool L_8 = Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_inline((Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mC82F36E77F2126D2ED945555350F1AE25EB9E3BD_RuntimeMethod_var);
		return (bool)((int32_t)((int32_t)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0)&(int32_t)L_8));
	}

IL_0038:
	{
		return (bool)1;
	}

IL_003a:
	{
		return (bool)0;
	}
}
// Microsoft.MixedReality.WebRTC.Transceiver_Direction Microsoft.MixedReality.WebRTC.Transceiver::DirectionFromSendRecv(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transceiver_DirectionFromSendRecv_m5350893B0A488D85EBF4967C7E56BE1C394010DC (bool ___hasSend0, bool ___hasRecv1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___hasSend0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		bool L_1 = ___hasRecv1;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0008:
	{
		return (int32_t)(2);
	}

IL_000a:
	{
		bool L_2 = ___hasRecv1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000f:
	{
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.TransceiverAssociatedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverAssociatedDelegate__ctor_m2F07ACBADD65E5F033313ADEEB4516D7191B55B3 (TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.TransceiverAssociatedDelegate::Invoke(Microsoft.MixedReality.WebRTC.Transceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverAssociatedDelegate_Invoke_m042BA0B403B2347E7AABAEBB3DF6DCE99C51CBC2 (TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___transceiver0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___transceiver0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___transceiver0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___transceiver0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___transceiver0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___transceiver0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___transceiver0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___transceiver0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(targetMethod, targetThis, ___transceiver0);
					else
						GenericVirtActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(targetMethod, targetThis, ___transceiver0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___transceiver0);
					else
						VirtActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___transceiver0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___transceiver0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___transceiver0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.TransceiverAssociatedDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.Transceiver,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransceiverAssociatedDelegate_BeginInvoke_m50ECB4EF63E3F37E79301CD9577A645EFBE87FB1 (TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___transceiver0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.WebRTC.TransceiverAssociatedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverAssociatedDelegate_EndInvoke_mB2BB0A9C3D9B594F81B4AE296F67B167944E90D8 (TransceiverAssociatedDelegate_t46F49C23B6921E263A76038E9C85C33848A5BA15 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.TransceiverDirectionChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverDirectionChangedDelegate__ctor_mB84D64B6FFEFEA17AA77DD5020F3C6657E04A77F (TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WebRTC.TransceiverDirectionChangedDelegate::Invoke(Microsoft.MixedReality.WebRTC.Transceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverDirectionChangedDelegate_Invoke_m5E7CD40BDC731C6A73ED3343366F7BA6AFB79770 (TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___transceiver0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___transceiver0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___transceiver0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___transceiver0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___transceiver0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___transceiver0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___transceiver0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___transceiver0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(targetMethod, targetThis, ___transceiver0);
					else
						GenericVirtActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(targetMethod, targetThis, ___transceiver0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___transceiver0);
					else
						VirtActionInvoker1< Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___transceiver0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___transceiver0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___transceiver0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WebRTC.TransceiverDirectionChangedDelegate::BeginInvoke(Microsoft.MixedReality.WebRTC.Transceiver,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransceiverDirectionChangedDelegate_BeginInvoke_mDA18A33412E34E5001327AC9F841AB5DD391CD11 (TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___transceiver0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___transceiver0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.WebRTC.TransceiverDirectionChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverDirectionChangedDelegate_EndInvoke_m4220D4EAA7BAA9310A3CB21043B2E6D960650C03 (TransceiverDirectionChangedDelegate_t38499647C5721048D9EC4E2C48C841296B5DADAF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WebRTC.TransceiverInitSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransceiverInitSettings__ctor_m0B5AAF33B44DFB02F1B4DD9ADF15F205F12F006A (TransceiverInitSettings_t49FC713C95F7F674C8E5D8040A0A0B2746EF9B90 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.WebRTC.VideoCaptureDevice
IL2CPP_EXTERN_C void VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshal_pinvoke(const VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D& unmarshaled, VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshaled_pinvoke& marshaled)
{
	marshaled.___id_0 = il2cpp_codegen_marshal_string(unmarshaled.get_id_0());
	marshaled.___name_1 = il2cpp_codegen_marshal_string(unmarshaled.get_name_1());
}
IL2CPP_EXTERN_C void VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshal_pinvoke_back(const VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshaled_pinvoke& marshaled, VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D& unmarshaled)
{
	unmarshaled.set_id_0(il2cpp_codegen_marshal_string_result(marshaled.___id_0));
	unmarshaled.set_name_1(il2cpp_codegen_marshal_string_result(marshaled.___name_1));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.WebRTC.VideoCaptureDevice
IL2CPP_EXTERN_C void VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshal_pinvoke_cleanup(VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___id_0);
	marshaled.___id_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___name_1);
	marshaled.___name_1 = NULL;
}
// Conversion methods for marshalling of: Microsoft.MixedReality.WebRTC.VideoCaptureDevice
IL2CPP_EXTERN_C void VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshal_com(const VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D& unmarshaled, VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshaled_com& marshaled)
{
	marshaled.___id_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_id_0());
	marshaled.___name_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_1());
}
IL2CPP_EXTERN_C void VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshal_com_back(const VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshaled_com& marshaled, VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D& unmarshaled)
{
	unmarshaled.set_id_0(il2cpp_codegen_marshal_bstring_result(marshaled.___id_0));
	unmarshaled.set_name_1(il2cpp_codegen_marshal_bstring_result(marshaled.___name_1));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.WebRTC.VideoCaptureDevice
IL2CPP_EXTERN_C void VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshal_com_cleanup(VideoCaptureDevice_t6A81FD6C3D91E8E1C96B49F3480280D6C7BBC88D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___id_0);
	marshaled.___id_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_1);
	marshaled.___name_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.MixedReality.WebRTC.VideoTrackSource::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoTrackSource_get_Name_m6AE558A6AD714998D1A528727D79E71ACC6B74A1 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::add_I420AVideoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_add_I420AVideoFrameReady_m50F5B1EAA3DDBFD5BBD4CF600F88084130092122 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_add_I420AVideoFrameReady_m50F5B1EAA3DDBFD5BBD4CF600F88084130092122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get__videoFrameReadyLock_4();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_2 = __this->get__videoFrameReady_5();
		V_0 = (bool)((((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_3 = ___value0;
		VideoTrackSource_add__videoFrameReady_m2D18857690F751C64F6E18F08D9FC6C41DFA6415(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_7 = VideoTrackSource_get__nativeHandle_m8F4EBA271FF936321F45B0B17E5603D712AA8201_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_il2cpp_TypeInfo_var);
		I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD * L_8 = ((VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_StaticFields*)il2cpp_codegen_static_fields_for(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_il2cpp_TypeInfo_var))->get_I420AFrameCallback_0();
		intptr_t L_9 = __this->get__selfHandle_1();
		VideoTrackSourceInterop_VideoTrackSource_RegisterFrameCallback_mD9C95FC4CBB810493B99C330FE1E85F98E1309BB(L_7, L_8, (intptr_t)L_9, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::remove_I420AVideoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_remove_I420AVideoFrameReady_m9E4A13735F83BABD38E894D4BE81371A409C2F71 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_remove_I420AVideoFrameReady_m9E4A13735F83BABD38E894D4BE81371A409C2F71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get__videoFrameReadyLock_4();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_2 = ___value0;
		VideoTrackSource_remove__videoFrameReady_mC11D77000AD0811EDE795AE5B8E9EE8512941AE4(__this, L_2, /*hidden argument*/NULL);
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_3 = __this->get__videoFrameReady_5();
		V_0 = (bool)((((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_7 = VideoTrackSource_get__nativeHandle_m8F4EBA271FF936321F45B0B17E5603D712AA8201_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_il2cpp_TypeInfo_var);
		VideoTrackSourceInterop_VideoTrackSource_RegisterFrameCallback_mD9C95FC4CBB810493B99C330FE1E85F98E1309BB(L_7, (I420AVideoFrameUnmanagedCallback_tB62EFEE35816A6103230B1F00A6125D9896F8EBD *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::add_Argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_add_Argb32VideoFrameReady_m7E836EC19207543CFF2195C6CC056685C723F04B (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_add_Argb32VideoFrameReady_m7E836EC19207543CFF2195C6CC056685C723F04B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get__videoFrameReadyLock_4();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_2 = __this->get__argb32VideoFrameReady_6();
		V_0 = (bool)((((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_3 = ___value0;
		VideoTrackSource_add__argb32VideoFrameReady_mA23C60BD0F33F744891B82F68AAAC4FE5C54EF51(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_7 = VideoTrackSource_get__nativeHandle_m8F4EBA271FF936321F45B0B17E5603D712AA8201_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_il2cpp_TypeInfo_var);
		Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2 * L_8 = ((VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_StaticFields*)il2cpp_codegen_static_fields_for(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_il2cpp_TypeInfo_var))->get_Argb32FrameCallback_1();
		intptr_t L_9 = __this->get__selfHandle_1();
		VideoTrackSourceInterop_VideoTrackSource_RegisterArgb32FrameCallback_mFF13E69E2AD0F4E0DC7AF04381977C46435DF931(L_7, L_8, (intptr_t)L_9, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::remove_Argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_remove_Argb32VideoFrameReady_m0DD2BAB23787627A1B48F19A40918C3EB815EB59 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_remove_Argb32VideoFrameReady_m0DD2BAB23787627A1B48F19A40918C3EB815EB59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get__videoFrameReadyLock_4();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_2 = ___value0;
		VideoTrackSource_remove__argb32VideoFrameReady_m755A6839047298C12E2A69328243AEA6FD1A4EC8(__this, L_2, /*hidden argument*/NULL);
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_3 = __this->get__argb32VideoFrameReady_6();
		V_0 = (bool)((((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_7 = VideoTrackSource_get__nativeHandle_m8F4EBA271FF936321F45B0B17E5603D712AA8201_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VideoTrackSourceInterop_tCA42FAF773B4EE2B9D4268B78F6D22C3A29BE055_il2cpp_TypeInfo_var);
		VideoTrackSourceInterop_VideoTrackSource_RegisterArgb32FrameCallback_mFF13E69E2AD0F4E0DC7AF04381977C46435DF931(L_7, (Argb32VideoFrameUnmanagedCallback_tF5C181FA55F5162BD266E393381AC12DE880CFD2 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle Microsoft.MixedReality.WebRTC.VideoTrackSource::get__nativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * VideoTrackSource_get__nativeHandle_m8F4EBA271FF936321F45B0B17E5603D712AA8201 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, const RuntimeMethod* method)
{
	{
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_0 = __this->get_U3C_nativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::set__nativeHandle(Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_set__nativeHandle_m729C652C1B1770CF3DCAAC9DB646891999DB6C6F (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * ___value0, const RuntimeMethod* method)
{
	{
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_0 = ___value0;
		__this->set_U3C_nativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::add__videoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_add__videoFrameReady_m2D18857690F751C64F6E18F08D9FC6C41DFA6415 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_add__videoFrameReady_m2D18857690F751C64F6E18F08D9FC6C41DFA6415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_0 = NULL;
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_1 = NULL;
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_2 = NULL;
	{
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_0 = __this->get__videoFrameReady_5();
		V_0 = L_0;
	}

IL_0007:
	{
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_1 = V_0;
		V_1 = L_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_2 = V_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)CastclassSealed((RuntimeObject*)L_4, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2_il2cpp_TypeInfo_var));
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 ** L_5 = __this->get_address_of__videoFrameReady_5();
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_6 = V_2;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_7 = V_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_8 = InterlockedCompareExchangeImpl<I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *>((I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 **)L_5, L_6, L_7);
		V_0 = L_8;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_9 = V_0;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_9) == ((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::remove__videoFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_remove__videoFrameReady_mC11D77000AD0811EDE795AE5B8E9EE8512941AE4 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_remove__videoFrameReady_mC11D77000AD0811EDE795AE5B8E9EE8512941AE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_0 = NULL;
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_1 = NULL;
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * V_2 = NULL;
	{
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_0 = __this->get__videoFrameReady_5();
		V_0 = L_0;
	}

IL_0007:
	{
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_1 = V_0;
		V_1 = L_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_2 = V_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)CastclassSealed((RuntimeObject*)L_4, I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2_il2cpp_TypeInfo_var));
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 ** L_5 = __this->get_address_of__videoFrameReady_5();
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_6 = V_2;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_7 = V_1;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_8 = InterlockedCompareExchangeImpl<I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *>((I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 **)L_5, L_6, L_7);
		V_0 = L_8;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_9 = V_0;
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_9) == ((RuntimeObject*)(I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::add__argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_add__argb32VideoFrameReady_mA23C60BD0F33F744891B82F68AAAC4FE5C54EF51 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_add__argb32VideoFrameReady_mA23C60BD0F33F744891B82F68AAAC4FE5C54EF51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_0 = NULL;
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_1 = NULL;
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_2 = NULL;
	{
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_0 = __this->get__argb32VideoFrameReady_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_1 = V_0;
		V_1 = L_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_2 = V_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)CastclassSealed((RuntimeObject*)L_4, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77_il2cpp_TypeInfo_var));
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 ** L_5 = __this->get_address_of__argb32VideoFrameReady_6();
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_6 = V_2;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_7 = V_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_8 = InterlockedCompareExchangeImpl<Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *>((Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 **)L_5, L_6, L_7);
		V_0 = L_8;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_9 = V_0;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_9) == ((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::remove__argb32VideoFrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_remove__argb32VideoFrameReady_m755A6839047298C12E2A69328243AEA6FD1A4EC8 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_remove__argb32VideoFrameReady_m755A6839047298C12E2A69328243AEA6FD1A4EC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_0 = NULL;
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_1 = NULL;
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * V_2 = NULL;
	{
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_0 = __this->get__argb32VideoFrameReady_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_1 = V_0;
		V_1 = L_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_2 = V_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)CastclassSealed((RuntimeObject*)L_4, Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77_il2cpp_TypeInfo_var));
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 ** L_5 = __this->get_address_of__argb32VideoFrameReady_6();
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_6 = V_2;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_7 = V_1;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_8 = InterlockedCompareExchangeImpl<Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *>((Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 **)L_5, L_6, L_7);
		V_0 = L_8;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_9 = V_0;
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_9) == ((RuntimeObject*)(Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource__ctor_mE7FF207665636E89ECC043DD822C147CC9DDE8AE (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource__ctor_mE7FF207665636E89ECC043DD822C147CC9DDE8AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__selfHandle_1((intptr_t)(0));
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__name_2(L_0);
		List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * L_1 = (List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 *)il2cpp_codegen_object_new(List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657_il2cpp_TypeInfo_var);
		List_1__ctor_m6615954DA0EF9FC21074E4E41DEACB78A6BF8F2A(L_1, /*hidden argument*/List_1__ctor_m6615954DA0EF9FC21074E4E41DEACB78A6BF8F2A_RuntimeMethod_var);
		__this->set__tracks_3(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_2, /*hidden argument*/NULL);
		__this->set__videoFrameReadyLock_4(L_2);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::.ctor(Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource__ctor_m7508C5701D3816D331E4AAB6DDE9AC3D6F0EBDF4 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * ___nativeHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource__ctor_m7508C5701D3816D331E4AAB6DDE9AC3D6F0EBDF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__selfHandle_1((intptr_t)(0));
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__name_2(L_0);
		List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * L_1 = (List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 *)il2cpp_codegen_object_new(List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657_il2cpp_TypeInfo_var);
		List_1__ctor_m6615954DA0EF9FC21074E4E41DEACB78A6BF8F2A(L_1, /*hidden argument*/List_1__ctor_m6615954DA0EF9FC21074E4E41DEACB78A6BF8F2A_RuntimeMethod_var);
		__this->set__tracks_3(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_2, /*hidden argument*/NULL);
		__this->set__videoFrameReadyLock_4(L_2);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_3 = ___nativeHandle0;
		VideoTrackSource_SetHandle_m6BD51E55F0A30A77CEF1996231C28F4B02DEBFD8(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::SetHandle(Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_SetHandle_m6BD51E55F0A30A77CEF1996231C28F4B02DEBFD8 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * ___nativeHandle0, const RuntimeMethod* method)
{
	{
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_0 = ___nativeHandle0;
		VideoTrackSource_set__nativeHandle_m729C652C1B1770CF3DCAAC9DB646891999DB6C6F_inline(__this, L_0, /*hidden argument*/NULL);
		intptr_t L_1 = Utils_MakeWrapperRef_m8D8AA662597F2CE5342720F96F6A00BA8BD1B7A5(__this, /*hidden argument*/NULL);
		__this->set__selfHandle_1((intptr_t)L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_Dispose_mB6BEC055EFA69BE790BDC30209ED64560A6F0C5F (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_Dispose_mB6BEC055EFA69BE790BDC30209ED64560A6F0C5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_0 = VideoTrackSource_get__nativeHandle_m8F4EBA271FF936321F45B0B17E5603D712AA8201_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = SafeHandle_get_IsClosed_mDC07CBB5C7BB58A6B31641D976CE3ADC37ED8377(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * L_2 = __this->get__tracks_3();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_mC8EB6D9B62D76FEE7262161F6F4B334FF2CA6F10_inline(L_2, /*hidden argument*/List_1_get_Count_mC8EB6D9B62D76FEE7262161F6F4B334FF2CA6F10_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_4 = VideoTrackSource_get_Name_m6AE558A6AD714998D1A528727D79E71ACC6B74A1_inline(__this, /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral3E5B02D90A525022B061C8A74C25D7B401E3D5AD, L_4, _stringLiteral68C758BA22B8AA5EAE64FDB4A0FA41F75EF8A008, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_6 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, VideoTrackSource_Dispose_mB6BEC055EFA69BE790BDC30209ED64560A6F0C5F_RuntimeMethod_var);
	}

IL_0037:
	{
		__this->set__videoFrameReady_5((I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 *)NULL);
		__this->set__argb32VideoFrameReady_6((Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 *)NULL);
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_7 = VideoTrackSource_get__nativeHandle_m8F4EBA271FF936321F45B0B17E5603D712AA8201_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		SafeHandle_Dispose_m6433E520A7D38A8C424843DFCDB5EF2384EC8A6A(L_7, /*hidden argument*/NULL);
		intptr_t L_8 = __this->get__selfHandle_1();
		Utils_ReleaseWrapperRef_mA0849EFF1B0216529246F3D245D2FAB318C1D3FE((intptr_t)L_8, /*hidden argument*/NULL);
		__this->set__selfHandle_1((intptr_t)(0));
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::OnTrackAddedToSource(Microsoft.MixedReality.WebRTC.LocalVideoTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_OnTrackAddedToSource_m429138B18A1BDBA7448BAE76AF870C485C810995 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * ___track0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_OnTrackAddedToSource_m429138B18A1BDBA7448BAE76AF870C485C810995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * L_0 = __this->get__tracks_3();
		LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * L_1 = ___track0;
		NullCheck(L_0);
		List_1_Add_m2B0075B27D860F047E94331179EFADFF22BBC314(L_0, L_1, /*hidden argument*/List_1_Add_m2B0075B27D860F047E94331179EFADFF22BBC314_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::OnTrackRemovedFromSource(Microsoft.MixedReality.WebRTC.LocalVideoTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_OnTrackRemovedFromSource_m9452E23C26E25D8760C31B57DBD2945F95AB9349 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * ___track0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_OnTrackRemovedFromSource_m9452E23C26E25D8760C31B57DBD2945F95AB9349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3657BD8071477AE36337CDCA39733B01BA0A7657 * L_0 = __this->get__tracks_3();
		LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * L_1 = ___track0;
		NullCheck(L_0);
		List_1_Remove_m04077B57D42E4A922C1ED790D57DE90B3FAC3CA7(L_0, L_1, /*hidden argument*/List_1_Remove_m04077B57D42E4A922C1ED790D57DE90B3FAC3CA7_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop.IVideoSource.OnI420AFrameReady(Microsoft.MixedReality.WebRTC.I420AVideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnI420AFrameReady_m93534D76881BF915FB86944961E07C3C4B8B19E1 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F  ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnI420AFrameReady_m93534D76881BF915FB86944961E07C3C4B8B19E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * G_B2_0 = NULL;
	I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var);
		MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * L_0 = ((MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_StaticFields*)il2cpp_codegen_static_fields_for(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var))->get_Log_0();
		I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F  L_1 = ___frame0;
		uint32_t L_2 = L_1.get_width_0();
		I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F  L_3 = ___frame0;
		uint32_t L_4 = L_3.get_height_1();
		NullCheck(L_0);
		MainEventSource_I420ALocalVideoFrameReady_mE2451959F602D0AD98081EBA26DED0F2CC23E8C1(L_0, L_2, L_4, /*hidden argument*/NULL);
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_5 = __this->get__videoFrameReady_5();
		I420AVideoFrameDelegate_t18FDD3500B24397045FC134D048541CC0AB176C2 * L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		I420AVideoFrame_t723EBDFA71EA145B3C9D917AC595752A7FC7962F  L_7 = ___frame0;
		NullCheck(G_B2_0);
		I420AVideoFrameDelegate_Invoke_mA6827B8B63CBBA7E1CFB53DDFA6BFF32D3DF6A03(G_B2_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WebRTC.VideoTrackSource::Microsoft.MixedReality.WebRTC.Interop.VideoTrackSourceInterop.IVideoSource.OnArgb32FrameReady(Microsoft.MixedReality.WebRTC.Argb32VideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoTrackSource_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnArgb32FrameReady_m9B6A8F43023AF2D18330B8115F74E0BC54A8C50F (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1  ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_Microsoft_MixedReality_WebRTC_Interop_VideoTrackSourceInterop_IVideoSource_OnArgb32FrameReady_m9B6A8F43023AF2D18330B8115F74E0BC54A8C50F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * G_B2_0 = NULL;
	Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var);
		MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF * L_0 = ((MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_StaticFields*)il2cpp_codegen_static_fields_for(MainEventSource_t7F320BE59CBB7B31CF039A702905D95ED75374AF_il2cpp_TypeInfo_var))->get_Log_0();
		Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1  L_1 = ___frame0;
		uint32_t L_2 = L_1.get_width_0();
		Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1  L_3 = ___frame0;
		uint32_t L_4 = L_3.get_height_1();
		NullCheck(L_0);
		MainEventSource_Argb32LocalVideoFrameReady_m22B9A884F874F8C48D582E1790E2D1FF93B6EC24(L_0, L_2, L_4, /*hidden argument*/NULL);
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_5 = __this->get__argb32VideoFrameReady_6();
		Argb32VideoFrameDelegate_t2FAA8DF5AB1484D98D5CAC03454D84EFC2643D77 * L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		Argb32VideoFrame_tE0ACC221F8CBF92AC734FCBC2BE98B0E785099C1  L_7 = ___frame0;
		NullCheck(G_B2_0);
		Argb32VideoFrameDelegate_Invoke_mB2967B9A4387ECC624C6A9ED08D65F5B4BE2C487(G_B2_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.WebRTC.VideoTrackSource::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoTrackSource_ToString_mFAE30A51B980728736C369B78F77B2DDF797AA25 (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackSource_ToString_mFAE30A51B980728736C369B78F77B2DDF797AA25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VideoTrackSource_get_Name_m6AE558A6AD714998D1A528727D79E71ACC6B74A1_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral50B457167DF3B87A12A8B829D57A7B1333FDC49D, L_0, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsByRefLikeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsByRefLikeAttribute__ctor_m15BDC4F9596A63BD83BE99C85860098CA12C2EB6 (IsByRefLikeAttribute_t242351B2A55FA008A20CFFD2CC019E516F538ECF * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mDE2A2913A9A4921F464F654D404BB17B335B7905 (IsReadOnlyAttribute_tCA1C6242FF06A2361DECDDFEB052447E8F9DE3B7 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MediaTrack_get_Name_mF572E5112691F3449E8B9F0177168A959ED5BC36_inline (MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t Transceiver_get_MediaKind_m43442B7C3BC9BC1584F49FB62B14256E614BC023_inline (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_U3CMediaKindU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Transceiver_set_MlineIndex_mD739C872914B07D1BA03BB9444190A633B6F64D5_inline (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CMlineIndexU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * MediaTrack_get_PeerConnection_m09C71654E82CF90972235CDE1C6EFAD19A626416_inline (MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * __this, const RuntimeMethod* method)
{
	{
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_0 = __this->get_U3CPeerConnectionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * Transceiver_get_PeerConnection_mE1637101B1F2042692FADDD07FE07BEDBC1B6B68_inline (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	{
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_0 = __this->get_U3CPeerConnectionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D * LocalAudioTrack_get__nativeHandle_mB9BEE214F858D0E5109FF7B5836B3829BB22DFE0_inline (LocalAudioTrack_t9C2AFE26CE648FFC9FDD2D9853ACF2124814DF77 * __this, const RuntimeMethod* method)
{
	{
		LocalAudioTrackHandle_t64458E43597CD7E2693406E0CBEB3643A6ECD37D * L_0 = __this->get_U3C_nativeHandleU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 * LocalVideoTrack_get__nativeHandle_m6059F80B1F307C9E2A939EDA8BB88F75B4D78F06_inline (LocalVideoTrack_t358D87EA75A5F90E48808304C908E050E87A2D48 * __this, const RuntimeMethod* method)
{
	{
		LocalVideoTrackHandle_tF1F7A569D0C53F5154C163E3F47EA70CC0653893 * L_0 = __this->get_U3C_nativeHandleU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MediaTrack_set_Transceiver_m9B4383FD9C95562743EF2F2AC52D3D8EB7E6B6EB_inline (MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * __this, Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * ___value0, const RuntimeMethod* method)
{
	{
		Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * L_0 = ___value0;
		__this->set_U3CTransceiverU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MediaTrack_set_PeerConnection_m39B709EACD73926D738FBF59BF79E36358ADF3B6_inline (MediaTrack_tC3D90B679E4EE405ED858807C6E82511F7C54D96 * __this, PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * ___value0, const RuntimeMethod* method)
{
	{
		PeerConnection_tD1BB39F1EFD6B3A85B4CCAE38D1B6D13F4EAFC89 * L_0 = ___value0;
		__this->set_U3CPeerConnectionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  Transceiver_get_NegotiatedDirection_m9FDA90461897F11046AFE9E6D93A1CA9C7378A88_inline (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_0 = __this->get_U3CNegotiatedDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Transceiver_set_NegotiatedDirection_m56B4360E46F9580F655DD808579B730256AC9E5E_inline (Transceiver_tC77C273BC75FD7C7EFE1EFC510ED2A1DA67A4C20 * __this, Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t0588D1AA8194A82750931516FF6B74DB0C28C1AD  L_0 = ___value0;
		__this->set_U3CNegotiatedDirectionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * VideoTrackSource_get__nativeHandle_m8F4EBA271FF936321F45B0B17E5603D712AA8201_inline (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, const RuntimeMethod* method)
{
	{
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_0 = __this->get_U3C_nativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VideoTrackSource_set__nativeHandle_m729C652C1B1770CF3DCAAC9DB646891999DB6C6F_inline (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * ___value0, const RuntimeMethod* method)
{
	{
		VideoTrackSourceHandle_t3670035313583A87D86DFBF4B6D5EC3D3C76E009 * L_0 = ___value0;
		__this->set_U3C_nativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* VideoTrackSource_get_Name_m6AE558A6AD714998D1A528727D79E71ACC6B74A1_inline (VideoTrackSource_t3E9D8C39D808E889F3A2A0AFFA39127ABB57A54D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mA591973E70B08BA8DF51199694BF3656AFF11422_gshared_inline (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m58742F2DBAEDAA6626C115F9E99209C8F4D8F195_gshared_inline (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
