#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct List_1_t70D278A9C53871EE6A077AEE68BF749546B5B347;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>
struct List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// MRTK.Tutorials.GettingStarted.PartAssemblyController[]
struct PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// MRTK.Tutorials.GettingStarted.DirectionalIndicatorController
struct DirectionalIndicatorController_t6CDF2CB91F21C7282CB98974423C1123EF621588;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Exception
struct Exception_t;
// MRTK.Tutorials.GettingStarted.ExplodeViewController
struct ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// HandTracking
struct HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t91AC8765DE85C135D6CA1042CEBF15007BCEFB01;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E;
// System.Net.IPHostEntry
struct IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t32463C505981FAA3FE78829467992AC7309CD9CA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// MRTK.Tutorials.GettingStarted.PartAssemblyController
struct PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573;
// MRTK.Tutorials.GettingStarted.PlacementHintsController
struct PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// RotateCube
struct RotateCube_tC21316091B4E75D28FBC16262AAD7ED6E4B3BB77;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE;
// System.Net.Sockets.TcpListener
struct TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B;
// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner
struct ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityServer
struct UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate
struct ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856;
// MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6;
// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate
struct PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155;
// MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate
struct PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFormatter_t91AC8765DE85C135D6CA1042CEBF15007BCEFB01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral053168EE1CE7A6612D4184BBD9562AD2C67C1271;
IL2CPP_EXTERN_C String_t* _stringLiteral2FEC9D9F41D87A0FE6A7D03CA21F54260383EE62;
IL2CPP_EXTERN_C String_t* _stringLiteral3505CC67D4132D403A00F09BF5E8669B36253FEF;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2D0E44701182F19CC42C0B00702ADC6649C7F9;
IL2CPP_EXTERN_C String_t* _stringLiteral4E37A88B3878597FA1CCD2B18B99432285AC14FD;
IL2CPP_EXTERN_C String_t* _stringLiteralF12912AB2324C5799A437DAA95CB517E96479C87;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC_m6866DFB39010BA7F288F86308DC405E186FD0313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mF21627A27D716B39A58AF0C6364879F91361ECCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1BB99A21A431E4E4B575E70C0EBBC13E1458A537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7306C0B3F65C54D943145C1CEFE2DAC0FF5F5B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m48C679A025279D99D06EFEDF1C45D3591E8CCE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTracking_GetLocalIPAddress_m0B0318DF06B325532EB6F4EDD40B2E2DFB5D7BAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTracking_ListenBackground_m3791F0246D3E002759E06CDFDE345937E12C870A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4CA254963448DF7236C874BD5CC30FB1AEC1CF80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBC7F80BF201242CA6BFF20F91905213CCDB8CEF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m24489FBEBA3B3510DB03EFC180E4DA483A2FC339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m506CA9304331AEEB6F54364B7565751DF3DA5F2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBA01C60EEC2200475EBFACCBE74277A9B91D18A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573_m95DE796FD55FCC02F041B6774108803CFD476E27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m3B06BF13F7C5A5FD0544E0A77EF07BF84BEB6237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServer_GetLocalIPAddress_m52B4ED917DB194C1B39DC1C869AAF239CD585357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServer_ListenBackground_mB86692A555CFB017AACF287B2D3B935D05FFEC57_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____items_1)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get__items_1() const { return ____items_1; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_StaticFields, ____emptyArray_5)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>
struct List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027, ____items_1)); }
	inline PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* get__items_1() const { return ____items_1; }
	inline PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027_StaticFields, ____emptyArray_5)); }
	inline PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Net.IPHostEntry
struct IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA  : public RuntimeObject
{
public:
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;

public:
	inline static int32_t get_offset_of_hostName_0() { return static_cast<int32_t>(offsetof(IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA, ___hostName_0)); }
	inline String_t* get_hostName_0() const { return ___hostName_0; }
	inline String_t** get_address_of_hostName_0() { return &___hostName_0; }
	inline void set_hostName_0(String_t* value)
	{
		___hostName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostName_0), (void*)value);
	}

	inline static int32_t get_offset_of_aliases_1() { return static_cast<int32_t>(offsetof(IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA, ___aliases_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_aliases_1() const { return ___aliases_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_aliases_1() { return &___aliases_1; }
	inline void set_aliases_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___aliases_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aliases_1), (void*)value);
	}

	inline static int32_t get_offset_of_addressList_2() { return static_cast<int32_t>(offsetof(IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA, ___addressList_2)); }
	inline IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* get_addressList_2() const { return ___addressList_2; }
	inline IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB** get_address_of_addressList_2() { return &___addressList_2; }
	inline void set_addressList_2(IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* value)
	{
		___addressList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addressList_2), (void*)value);
	}

	inline static int32_t get_offset_of_isTrustedHost_3() { return static_cast<int32_t>(offsetof(IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA, ___isTrustedHost_3)); }
	inline bool get_isTrustedHost_3() const { return ___isTrustedHost_3; }
	inline bool* get_address_of_isTrustedHost_3() { return &___isTrustedHost_3; }
	inline void set_isTrustedHost_3(bool value)
	{
		___isTrustedHost_3 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
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


// System.Net.Sockets.TcpListener
struct TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint System.Net.Sockets.TcpListener::m_ServerSocketEP
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___m_ServerSocketEP_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::m_ServerSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_ServerSocket_1;
	// System.Boolean System.Net.Sockets.TcpListener::m_Active
	bool ___m_Active_2;
	// System.Boolean System.Net.Sockets.TcpListener::m_ExclusiveAddressUse
	bool ___m_ExclusiveAddressUse_3;

public:
	inline static int32_t get_offset_of_m_ServerSocketEP_0() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ServerSocketEP_0)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_m_ServerSocketEP_0() const { return ___m_ServerSocketEP_0; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_m_ServerSocketEP_0() { return &___m_ServerSocketEP_0; }
	inline void set_m_ServerSocketEP_0(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___m_ServerSocketEP_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocketEP_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServerSocket_1() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ServerSocket_1)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_ServerSocket_1() const { return ___m_ServerSocket_1; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_ServerSocket_1() { return &___m_ServerSocket_1; }
	inline void set_m_ServerSocket_1(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_ServerSocket_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocket_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_2() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_Active_2)); }
	inline bool get_m_Active_2() const { return ___m_Active_2; }
	inline bool* get_address_of_m_Active_2() { return &___m_Active_2; }
	inline void set_m_Active_2(bool value)
	{
		___m_Active_2 = value;
	}

	inline static int32_t get_offset_of_m_ExclusiveAddressUse_3() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ExclusiveAddressUse_3)); }
	inline bool get_m_ExclusiveAddressUse_3() const { return ___m_ExclusiveAddressUse_3; }
	inline bool* get_address_of_m_ExclusiveAddressUse_3() { return &___m_ExclusiveAddressUse_3; }
	inline void set_m_ExclusiveAddressUse_3(bool value)
	{
		___m_ExclusiveAddressUse_3 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6  : public RuntimeObject
{
public:
	// System.Int32 MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>4__this
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E4__this_2)); }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>
struct Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___list_0)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_list_0() const { return ___list_0; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___current_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_current_3() const { return ___current_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>
struct Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE, ___list_0)); }
	inline List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * get_list_0() const { return ___list_0; }
	inline List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE, ___current_3)); }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * get_current_3() const { return ___current_3; }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Net.Sockets.AddressFamily
struct AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ConnectorFollowType
struct ConnectorFollowType_tA6638BEAD2081D118EB01AAAF5C77FDF932F5A0B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ConnectorFollowType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectorFollowType_tA6638BEAD2081D118EB01AAAF5C77FDF932F5A0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ConnectorOrientType
struct ConnectorOrientType_tF44A181A3B0633C56102E2154DE2163BD14F9D5C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ConnectorOrientType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectorOrientType_tF44A181A3B0633C56102E2154DE2163BD14F9D5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ConnectorPivotDirection
struct ConnectorPivotDirection_t9ACEF29F254DFB3C2D65522BDDF267525AA0B9BD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ConnectorPivotDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectorPivotDirection_t9ACEF29F254DFB3C2D65522BDDF267525AA0B9BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ConnectorPivotMode
struct ConnectorPivotMode_t5F9BA6DD9028A41EC848E077CE27C18293D23070 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ConnectorPivotMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectorPivotMode_t5F9BA6DD9028A41EC848E077CE27C18293D23070, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct FormatterTypeStyle_tE84DD5CF7A3D4E07A4881B66CE1AE112677A4E6A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_tE84DD5CF7A3D4E07A4881B66CE1AE112677A4E6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t5EDD2AF69A2693CD60CD846C35B0729DF0AFF9BE 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t5EDD2AF69A2693CD60CD846C35B0729DF0AFF9BE, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_StreamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_8;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_12;

public:
	inline static int32_t get_offset_of_m_StreamSocket_5() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_StreamSocket_5)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_StreamSocket_5() const { return ___m_StreamSocket_5; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_StreamSocket_5() { return &___m_StreamSocket_5; }
	inline void set_m_StreamSocket_5(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_StreamSocket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Readable_6)); }
	inline bool get_m_Readable_6() const { return ___m_Readable_6; }
	inline bool* get_address_of_m_Readable_6() { return &___m_Readable_6; }
	inline void set_m_Readable_6(bool value)
	{
		___m_Readable_6 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_7() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Writeable_7)); }
	inline bool get_m_Writeable_7() const { return ___m_Writeable_7; }
	inline bool* get_address_of_m_Writeable_7() { return &___m_Writeable_7; }
	inline void set_m_Writeable_7(bool value)
	{
		___m_Writeable_7 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_8() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_OwnsSocket_8)); }
	inline bool get_m_OwnsSocket_8() const { return ___m_OwnsSocket_8; }
	inline bool* get_address_of_m_OwnsSocket_8() { return &___m_OwnsSocket_8; }
	inline void set_m_OwnsSocket_8(bool value)
	{
		___m_OwnsSocket_8 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_9() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CloseTimeout_9)); }
	inline int32_t get_m_CloseTimeout_9() const { return ___m_CloseTimeout_9; }
	inline int32_t* get_address_of_m_CloseTimeout_9() { return &___m_CloseTimeout_9; }
	inline void set_m_CloseTimeout_9(int32_t value)
	{
		___m_CloseTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_10() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CleanedUp_10)); }
	inline bool get_m_CleanedUp_10() const { return ___m_CleanedUp_10; }
	inline bool* get_address_of_m_CleanedUp_10() { return &___m_CleanedUp_10; }
	inline void set_m_CleanedUp_10(bool value)
	{
		___m_CleanedUp_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentReadTimeout_11)); }
	inline int32_t get_m_CurrentReadTimeout_11() const { return ___m_CurrentReadTimeout_11; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_11() { return &___m_CurrentReadTimeout_11; }
	inline void set_m_CurrentReadTimeout_11(int32_t value)
	{
		___m_CurrentReadTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_12() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentWriteTimeout_12)); }
	inline int32_t get_m_CurrentWriteTimeout_12() const { return ___m_CurrentWriteTimeout_12; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_12() { return &___m_CurrentWriteTimeout_12; }
	inline void set_m_CurrentWriteTimeout_12(int32_t value)
	{
		___m_CurrentWriteTimeout_12 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_tC7729F15E2574BE52C5745068256354EEB42A7FB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tC7729F15E2574BE52C5745068256354EEB42A7FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct TypeFilterLevel_t7ED94310B4D2D5C697A19E0CE2327A7DC5B39C4D 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t7ED94310B4D2D5C697A19E0CE2327A7DC5B39C4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/AppearType
struct AppearType_tFA546D9F4DFE684F74548046808C36FBBFA8BF1B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/AppearType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppearType_tFA546D9F4DFE684F74548046808C36FBBFA8BF1B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/RemainType
struct RemainType_t8A30DA680F0ACBCF4E486E2D7FE07AA4DCC1E9A5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/RemainType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RemainType_t8A30DA680F0ACBCF4E486E2D7FE07AA4DCC1E9A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/VanishType
struct VanishType_tDBAB34D403CC82E443C46CAA13A3A4676B2795BF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/VanishType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VanishType_tDBAB34D403CC82E443C46CAA13A3A4676B2795BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner/SettingsMode
struct SettingsMode_t5FAF3B4507B84C6794FB0BE985DCF928F8DB2601 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner/SettingsMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SettingsMode_t5FAF3B4507B84C6794FB0BE985DCF928F8DB2601, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_ClientSocket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_DataStream_2)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_crossAppDomainArray_6;

public:
	inline static int32_t get_offset_of_m_surrogates_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_surrogates_0)); }
	inline RuntimeObject* get_m_surrogates_0() const { return ___m_surrogates_0; }
	inline RuntimeObject** get_address_of_m_surrogates_0() { return &___m_surrogates_0; }
	inline void set_m_surrogates_0(RuntimeObject* value)
	{
		___m_surrogates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_surrogates_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_context_1)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_m_context_1() const { return ___m_context_1; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_context_1))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_binder_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_binder_2)); }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * get_m_binder_2() const { return ___m_binder_2; }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 ** get_address_of_m_binder_2() { return &___m_binder_2; }
	inline void set_m_binder_2(SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * value)
	{
		___m_binder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_binder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_typeFormat_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_typeFormat_3)); }
	inline int32_t get_m_typeFormat_3() const { return ___m_typeFormat_3; }
	inline int32_t* get_address_of_m_typeFormat_3() { return &___m_typeFormat_3; }
	inline void set_m_typeFormat_3(int32_t value)
	{
		___m_typeFormat_3 = value;
	}

	inline static int32_t get_offset_of_m_assemblyFormat_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_assemblyFormat_4)); }
	inline int32_t get_m_assemblyFormat_4() const { return ___m_assemblyFormat_4; }
	inline int32_t* get_address_of_m_assemblyFormat_4() { return &___m_assemblyFormat_4; }
	inline void set_m_assemblyFormat_4(int32_t value)
	{
		___m_assemblyFormat_4 = value;
	}

	inline static int32_t get_offset_of_m_securityLevel_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_securityLevel_5)); }
	inline int32_t get_m_securityLevel_5() const { return ___m_securityLevel_5; }
	inline int32_t* get_address_of_m_securityLevel_5() { return &___m_securityLevel_5; }
	inline void set_m_securityLevel_5(int32_t value)
	{
		___m_securityLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_crossAppDomainArray_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_crossAppDomainArray_6)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_crossAppDomainArray_6() const { return ___m_crossAppDomainArray_6; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_crossAppDomainArray_6() { return &___m_crossAppDomainArray_6; }
	inline void set_m_crossAppDomainArray_6(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_crossAppDomainArray_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_crossAppDomainArray_6), (void*)value);
	}
};

struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * ___typeNameCache_7;

public:
	inline static int32_t get_offset_of_typeNameCache_7() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_StaticFields, ___typeNameCache_7)); }
	inline Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * get_typeNameCache_7() const { return ___typeNameCache_7; }
	inline Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 ** get_address_of_typeNameCache_7() { return &___typeNameCache_7; }
	inline void set_typeNameCache_7(Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * value)
	{
		___typeNameCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeNameCache_7), (void*)value);
	}
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Runtime.InteropServices.ExternalException
struct ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate
struct ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856  : public MulticastDelegate_t
{
public:

public:
};


// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate
struct PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155  : public MulticastDelegate_t
{
public:

public:
};


// MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate
struct PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.ComponentModel.Win32Exception
struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950  : public ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler
struct BaseFocusHandler_t4741FC79C4EA04CCBB0CC93BE95A4CED4BFCC7FF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler::focusEnabled
	bool ___focusEnabled_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.BaseFocusHandler::<Focusers>k__BackingField
	List_1_t70D278A9C53871EE6A077AEE68BF749546B5B347 * ___U3CFocusersU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_focusEnabled_4() { return static_cast<int32_t>(offsetof(BaseFocusHandler_t4741FC79C4EA04CCBB0CC93BE95A4CED4BFCC7FF, ___focusEnabled_4)); }
	inline bool get_focusEnabled_4() const { return ___focusEnabled_4; }
	inline bool* get_address_of_focusEnabled_4() { return &___focusEnabled_4; }
	inline void set_focusEnabled_4(bool value)
	{
		___focusEnabled_4 = value;
	}

	inline static int32_t get_offset_of_U3CFocusersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseFocusHandler_t4741FC79C4EA04CCBB0CC93BE95A4CED4BFCC7FF, ___U3CFocusersU3Ek__BackingField_5)); }
	inline List_1_t70D278A9C53871EE6A077AEE68BF749546B5B347 * get_U3CFocusersU3Ek__BackingField_5() const { return ___U3CFocusersU3Ek__BackingField_5; }
	inline List_1_t70D278A9C53871EE6A077AEE68BF749546B5B347 ** get_address_of_U3CFocusersU3Ek__BackingField_5() { return &___U3CFocusersU3Ek__BackingField_5; }
	inline void set_U3CFocusersU3Ek__BackingField_5(List_1_t70D278A9C53871EE6A077AEE68BF749546B5B347 * value)
	{
		___U3CFocusersU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusersU3Ek__BackingField_5), (void*)value);
	}
};


// MRTK.Tutorials.GettingStarted.DirectionalIndicatorController
struct DirectionalIndicatorController_t6CDF2CB91F21C7282CB98974423C1123EF621588  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MRTK.Tutorials.GettingStarted.ExplodeViewController
struct ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MRTK.Tutorials.GettingStarted.ExplodeViewController::speed
	float ___speed_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MRTK.Tutorials.GettingStarted.ExplodeViewController::defaultPositions
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___defaultPositions_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MRTK.Tutorials.GettingStarted.ExplodeViewController::explodedPositions
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___explodedPositions_6;
	// System.Boolean MRTK.Tutorials.GettingStarted.ExplodeViewController::isPunEnabled
	bool ___isPunEnabled_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MRTK.Tutorials.GettingStarted.ExplodeViewController::explodedPos
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___explodedPos_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MRTK.Tutorials.GettingStarted.ExplodeViewController::startingPos
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___startingPos_9;
	// System.Boolean MRTK.Tutorials.GettingStarted.ExplodeViewController::isInDefaultPosition
	bool ___isInDefaultPosition_10;
	// MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate MRTK.Tutorials.GettingStarted.ExplodeViewController::OnToggleExplodedView
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * ___OnToggleExplodedView_11;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_defaultPositions_5() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___defaultPositions_5)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_defaultPositions_5() const { return ___defaultPositions_5; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_defaultPositions_5() { return &___defaultPositions_5; }
	inline void set_defaultPositions_5(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___defaultPositions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultPositions_5), (void*)value);
	}

	inline static int32_t get_offset_of_explodedPositions_6() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___explodedPositions_6)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_explodedPositions_6() const { return ___explodedPositions_6; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_explodedPositions_6() { return &___explodedPositions_6; }
	inline void set_explodedPositions_6(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___explodedPositions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explodedPositions_6), (void*)value);
	}

	inline static int32_t get_offset_of_isPunEnabled_7() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___isPunEnabled_7)); }
	inline bool get_isPunEnabled_7() const { return ___isPunEnabled_7; }
	inline bool* get_address_of_isPunEnabled_7() { return &___isPunEnabled_7; }
	inline void set_isPunEnabled_7(bool value)
	{
		___isPunEnabled_7 = value;
	}

	inline static int32_t get_offset_of_explodedPos_8() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___explodedPos_8)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_explodedPos_8() const { return ___explodedPos_8; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_explodedPos_8() { return &___explodedPos_8; }
	inline void set_explodedPos_8(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___explodedPos_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explodedPos_8), (void*)value);
	}

	inline static int32_t get_offset_of_startingPos_9() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___startingPos_9)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_startingPos_9() const { return ___startingPos_9; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_startingPos_9() { return &___startingPos_9; }
	inline void set_startingPos_9(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___startingPos_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startingPos_9), (void*)value);
	}

	inline static int32_t get_offset_of_isInDefaultPosition_10() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___isInDefaultPosition_10)); }
	inline bool get_isInDefaultPosition_10() const { return ___isInDefaultPosition_10; }
	inline bool* get_address_of_isInDefaultPosition_10() { return &___isInDefaultPosition_10; }
	inline void set_isInDefaultPosition_10(bool value)
	{
		___isInDefaultPosition_10 = value;
	}

	inline static int32_t get_offset_of_OnToggleExplodedView_11() { return static_cast<int32_t>(offsetof(ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11, ___OnToggleExplodedView_11)); }
	inline ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * get_OnToggleExplodedView_11() const { return ___OnToggleExplodedView_11; }
	inline ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 ** get_address_of_OnToggleExplodedView_11() { return &___OnToggleExplodedView_11; }
	inline void set_OnToggleExplodedView_11(ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * value)
	{
		___OnToggleExplodedView_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnToggleExplodedView_11), (void*)value);
	}
};


// HandTracking
struct HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject HandTracking::sphereMarker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sphereMarker_4;
	// UnityEngine.GameObject HandTracking::indexObject1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___indexObject1_5;
	// UnityEngine.GameObject HandTracking::indexObject2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___indexObject2_6;
	// UnityEngine.GameObject HandTracking::indexObject3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___indexObject3_7;
	// UnityEngine.GameObject HandTracking::indexObject4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___indexObject4_8;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose HandTracking::pose
	MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  ___pose_9;
	// System.Double HandTracking::data
	double ___data_10;
	// System.String HandTracking::serverIP
	String_t* ___serverIP_11;
	// System.Int32 HandTracking::serverPort
	int32_t ___serverPort_12;
	// System.Net.Sockets.TcpClient HandTracking::client
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client_13;
	// System.Net.Sockets.NetworkStream HandTracking::stream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream_14;
	// System.Runtime.Serialization.IFormatter HandTracking::formatter
	RuntimeObject* ___formatter_15;

public:
	inline static int32_t get_offset_of_sphereMarker_4() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___sphereMarker_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sphereMarker_4() const { return ___sphereMarker_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sphereMarker_4() { return &___sphereMarker_4; }
	inline void set_sphereMarker_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sphereMarker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sphereMarker_4), (void*)value);
	}

	inline static int32_t get_offset_of_indexObject1_5() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___indexObject1_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_indexObject1_5() const { return ___indexObject1_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_indexObject1_5() { return &___indexObject1_5; }
	inline void set_indexObject1_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___indexObject1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexObject1_5), (void*)value);
	}

	inline static int32_t get_offset_of_indexObject2_6() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___indexObject2_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_indexObject2_6() const { return ___indexObject2_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_indexObject2_6() { return &___indexObject2_6; }
	inline void set_indexObject2_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___indexObject2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexObject2_6), (void*)value);
	}

	inline static int32_t get_offset_of_indexObject3_7() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___indexObject3_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_indexObject3_7() const { return ___indexObject3_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_indexObject3_7() { return &___indexObject3_7; }
	inline void set_indexObject3_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___indexObject3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexObject3_7), (void*)value);
	}

	inline static int32_t get_offset_of_indexObject4_8() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___indexObject4_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_indexObject4_8() const { return ___indexObject4_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_indexObject4_8() { return &___indexObject4_8; }
	inline void set_indexObject4_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___indexObject4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexObject4_8), (void*)value);
	}

	inline static int32_t get_offset_of_pose_9() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___pose_9)); }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  get_pose_9() const { return ___pose_9; }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * get_address_of_pose_9() { return &___pose_9; }
	inline void set_pose_9(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  value)
	{
		___pose_9 = value;
	}

	inline static int32_t get_offset_of_data_10() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___data_10)); }
	inline double get_data_10() const { return ___data_10; }
	inline double* get_address_of_data_10() { return &___data_10; }
	inline void set_data_10(double value)
	{
		___data_10 = value;
	}

	inline static int32_t get_offset_of_serverIP_11() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___serverIP_11)); }
	inline String_t* get_serverIP_11() const { return ___serverIP_11; }
	inline String_t** get_address_of_serverIP_11() { return &___serverIP_11; }
	inline void set_serverIP_11(String_t* value)
	{
		___serverIP_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serverIP_11), (void*)value);
	}

	inline static int32_t get_offset_of_serverPort_12() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___serverPort_12)); }
	inline int32_t get_serverPort_12() const { return ___serverPort_12; }
	inline int32_t* get_address_of_serverPort_12() { return &___serverPort_12; }
	inline void set_serverPort_12(int32_t value)
	{
		___serverPort_12 = value;
	}

	inline static int32_t get_offset_of_client_13() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___client_13)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get_client_13() const { return ___client_13; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of_client_13() { return &___client_13; }
	inline void set_client_13(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		___client_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_13), (void*)value);
	}

	inline static int32_t get_offset_of_stream_14() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___stream_14)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_stream_14() const { return ___stream_14; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_stream_14() { return &___stream_14; }
	inline void set_stream_14(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___stream_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_14), (void*)value);
	}

	inline static int32_t get_offset_of_formatter_15() { return static_cast<int32_t>(offsetof(HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF, ___formatter_15)); }
	inline RuntimeObject* get_formatter_15() const { return ___formatter_15; }
	inline RuntimeObject** get_address_of_formatter_15() { return &___formatter_15; }
	inline void set_formatter_15(RuntimeObject* value)
	{
		___formatter_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formatter_15), (void*)value);
	}
};


// MRTK.Tutorials.GettingStarted.PartAssemblyController
struct PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform MRTK.Tutorials.GettingStarted.PartAssemblyController::locationToPlace
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___locationToPlace_4;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isPunEnabled
	bool ___isPunEnabled_7;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::shouldCheckPlacement
	bool ___shouldCheckPlacement_8;
	// UnityEngine.AudioSource MRTK.Tutorials.GettingStarted.PartAssemblyController::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_9;
	// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner MRTK.Tutorials.GettingStarted.PartAssemblyController::toolTipSpawner
	ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * ___toolTipSpawner_10;
	// System.Collections.Generic.List`1<UnityEngine.Collider> MRTK.Tutorials.GettingStarted.PartAssemblyController::colliders
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___colliders_11;
	// System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController> MRTK.Tutorials.GettingStarted.PartAssemblyController::partAssemblyControllers
	List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * ___partAssemblyControllers_12;
	// UnityEngine.Transform MRTK.Tutorials.GettingStarted.PartAssemblyController::originalParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___originalParent_13;
	// UnityEngine.Vector3 MRTK.Tutorials.GettingStarted.PartAssemblyController::originalPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originalPosition_14;
	// UnityEngine.Quaternion MRTK.Tutorials.GettingStarted.PartAssemblyController::originalRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___originalRotation_15;
	// System.Collections.IEnumerator MRTK.Tutorials.GettingStarted.PartAssemblyController::checkPlacementCoroutine
	RuntimeObject* ___checkPlacementCoroutine_16;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::hasAudioSource
	bool ___hasAudioSource_17;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::hasToolTip
	bool ___hasToolTip_18;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isPlaced
	bool ___isPlaced_19;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isResetting
	bool ___isResetting_20;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate MRTK.Tutorials.GettingStarted.PartAssemblyController::OnResetPlacement
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___OnResetPlacement_21;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate MRTK.Tutorials.GettingStarted.PartAssemblyController::OnSetPlacement
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___OnSetPlacement_22;

public:
	inline static int32_t get_offset_of_locationToPlace_4() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___locationToPlace_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_locationToPlace_4() const { return ___locationToPlace_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_locationToPlace_4() { return &___locationToPlace_4; }
	inline void set_locationToPlace_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___locationToPlace_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locationToPlace_4), (void*)value);
	}

	inline static int32_t get_offset_of_isPunEnabled_7() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___isPunEnabled_7)); }
	inline bool get_isPunEnabled_7() const { return ___isPunEnabled_7; }
	inline bool* get_address_of_isPunEnabled_7() { return &___isPunEnabled_7; }
	inline void set_isPunEnabled_7(bool value)
	{
		___isPunEnabled_7 = value;
	}

	inline static int32_t get_offset_of_shouldCheckPlacement_8() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___shouldCheckPlacement_8)); }
	inline bool get_shouldCheckPlacement_8() const { return ___shouldCheckPlacement_8; }
	inline bool* get_address_of_shouldCheckPlacement_8() { return &___shouldCheckPlacement_8; }
	inline void set_shouldCheckPlacement_8(bool value)
	{
		___shouldCheckPlacement_8 = value;
	}

	inline static int32_t get_offset_of_audioSource_9() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___audioSource_9)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_9() const { return ___audioSource_9; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_9() { return &___audioSource_9; }
	inline void set_audioSource_9(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_9), (void*)value);
	}

	inline static int32_t get_offset_of_toolTipSpawner_10() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___toolTipSpawner_10)); }
	inline ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * get_toolTipSpawner_10() const { return ___toolTipSpawner_10; }
	inline ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC ** get_address_of_toolTipSpawner_10() { return &___toolTipSpawner_10; }
	inline void set_toolTipSpawner_10(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * value)
	{
		___toolTipSpawner_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toolTipSpawner_10), (void*)value);
	}

	inline static int32_t get_offset_of_colliders_11() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___colliders_11)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_colliders_11() const { return ___colliders_11; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_colliders_11() { return &___colliders_11; }
	inline void set_colliders_11(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___colliders_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliders_11), (void*)value);
	}

	inline static int32_t get_offset_of_partAssemblyControllers_12() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___partAssemblyControllers_12)); }
	inline List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * get_partAssemblyControllers_12() const { return ___partAssemblyControllers_12; }
	inline List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 ** get_address_of_partAssemblyControllers_12() { return &___partAssemblyControllers_12; }
	inline void set_partAssemblyControllers_12(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * value)
	{
		___partAssemblyControllers_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___partAssemblyControllers_12), (void*)value);
	}

	inline static int32_t get_offset_of_originalParent_13() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___originalParent_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_originalParent_13() const { return ___originalParent_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_originalParent_13() { return &___originalParent_13; }
	inline void set_originalParent_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___originalParent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalParent_13), (void*)value);
	}

	inline static int32_t get_offset_of_originalPosition_14() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___originalPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originalPosition_14() const { return ___originalPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originalPosition_14() { return &___originalPosition_14; }
	inline void set_originalPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originalPosition_14 = value;
	}

	inline static int32_t get_offset_of_originalRotation_15() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___originalRotation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_originalRotation_15() const { return ___originalRotation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_originalRotation_15() { return &___originalRotation_15; }
	inline void set_originalRotation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___originalRotation_15 = value;
	}

	inline static int32_t get_offset_of_checkPlacementCoroutine_16() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___checkPlacementCoroutine_16)); }
	inline RuntimeObject* get_checkPlacementCoroutine_16() const { return ___checkPlacementCoroutine_16; }
	inline RuntimeObject** get_address_of_checkPlacementCoroutine_16() { return &___checkPlacementCoroutine_16; }
	inline void set_checkPlacementCoroutine_16(RuntimeObject* value)
	{
		___checkPlacementCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkPlacementCoroutine_16), (void*)value);
	}

	inline static int32_t get_offset_of_hasAudioSource_17() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___hasAudioSource_17)); }
	inline bool get_hasAudioSource_17() const { return ___hasAudioSource_17; }
	inline bool* get_address_of_hasAudioSource_17() { return &___hasAudioSource_17; }
	inline void set_hasAudioSource_17(bool value)
	{
		___hasAudioSource_17 = value;
	}

	inline static int32_t get_offset_of_hasToolTip_18() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___hasToolTip_18)); }
	inline bool get_hasToolTip_18() const { return ___hasToolTip_18; }
	inline bool* get_address_of_hasToolTip_18() { return &___hasToolTip_18; }
	inline void set_hasToolTip_18(bool value)
	{
		___hasToolTip_18 = value;
	}

	inline static int32_t get_offset_of_isPlaced_19() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___isPlaced_19)); }
	inline bool get_isPlaced_19() const { return ___isPlaced_19; }
	inline bool* get_address_of_isPlaced_19() { return &___isPlaced_19; }
	inline void set_isPlaced_19(bool value)
	{
		___isPlaced_19 = value;
	}

	inline static int32_t get_offset_of_isResetting_20() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___isResetting_20)); }
	inline bool get_isResetting_20() const { return ___isResetting_20; }
	inline bool* get_address_of_isResetting_20() { return &___isResetting_20; }
	inline void set_isResetting_20(bool value)
	{
		___isResetting_20 = value;
	}

	inline static int32_t get_offset_of_OnResetPlacement_21() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___OnResetPlacement_21)); }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * get_OnResetPlacement_21() const { return ___OnResetPlacement_21; }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** get_address_of_OnResetPlacement_21() { return &___OnResetPlacement_21; }
	inline void set_OnResetPlacement_21(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * value)
	{
		___OnResetPlacement_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResetPlacement_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnSetPlacement_22() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___OnSetPlacement_22)); }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * get_OnSetPlacement_22() const { return ___OnSetPlacement_22; }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** get_address_of_OnSetPlacement_22() { return &___OnSetPlacement_22; }
	inline void set_OnSetPlacement_22(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * value)
	{
		___OnSetPlacement_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSetPlacement_22), (void*)value);
	}
};


// MRTK.Tutorials.GettingStarted.PlacementHintsController
struct PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean MRTK.Tutorials.GettingStarted.PlacementHintsController::activeAtStart
	bool ___activeAtStart_4;
	// UnityEngine.GameObject[] MRTK.Tutorials.GettingStarted.PlacementHintsController::placementHints
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___placementHints_5;
	// System.Boolean MRTK.Tutorials.GettingStarted.PlacementHintsController::isPunEnabled
	bool ___isPunEnabled_6;
	// MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate MRTK.Tutorials.GettingStarted.PlacementHintsController::OnTogglePlacementHints
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * ___OnTogglePlacementHints_7;

public:
	inline static int32_t get_offset_of_activeAtStart_4() { return static_cast<int32_t>(offsetof(PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC, ___activeAtStart_4)); }
	inline bool get_activeAtStart_4() const { return ___activeAtStart_4; }
	inline bool* get_address_of_activeAtStart_4() { return &___activeAtStart_4; }
	inline void set_activeAtStart_4(bool value)
	{
		___activeAtStart_4 = value;
	}

	inline static int32_t get_offset_of_placementHints_5() { return static_cast<int32_t>(offsetof(PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC, ___placementHints_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_placementHints_5() const { return ___placementHints_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_placementHints_5() { return &___placementHints_5; }
	inline void set_placementHints_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___placementHints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementHints_5), (void*)value);
	}

	inline static int32_t get_offset_of_isPunEnabled_6() { return static_cast<int32_t>(offsetof(PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC, ___isPunEnabled_6)); }
	inline bool get_isPunEnabled_6() const { return ___isPunEnabled_6; }
	inline bool* get_address_of_isPunEnabled_6() { return &___isPunEnabled_6; }
	inline void set_isPunEnabled_6(bool value)
	{
		___isPunEnabled_6 = value;
	}

	inline static int32_t get_offset_of_OnTogglePlacementHints_7() { return static_cast<int32_t>(offsetof(PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC, ___OnTogglePlacementHints_7)); }
	inline PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * get_OnTogglePlacementHints_7() const { return ___OnTogglePlacementHints_7; }
	inline PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 ** get_address_of_OnTogglePlacementHints_7() { return &___OnTogglePlacementHints_7; }
	inline void set_OnTogglePlacementHints_7(PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * value)
	{
		___OnTogglePlacementHints_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTogglePlacementHints_7), (void*)value);
	}
};


// RotateCube
struct RotateCube_tC21316091B4E75D28FBC16262AAD7ED6E4B3BB77  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88  : public Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88, ___m_EndPoint_20)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
	}
};


// UnityServer
struct UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Double UnityServer::data
	double ___data_4;
	// System.String UnityServer::serverIP
	String_t* ___serverIP_5;
	// System.Int32 UnityServer::serverPort
	int32_t ___serverPort_6;
	// System.Net.Sockets.TcpClient UnityServer::client
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client_7;
	// System.Net.Sockets.NetworkStream UnityServer::stream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream_8;
	// System.Runtime.Serialization.IFormatter UnityServer::formatter
	RuntimeObject* ___formatter_9;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0, ___data_4)); }
	inline double get_data_4() const { return ___data_4; }
	inline double* get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(double value)
	{
		___data_4 = value;
	}

	inline static int32_t get_offset_of_serverIP_5() { return static_cast<int32_t>(offsetof(UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0, ___serverIP_5)); }
	inline String_t* get_serverIP_5() const { return ___serverIP_5; }
	inline String_t** get_address_of_serverIP_5() { return &___serverIP_5; }
	inline void set_serverIP_5(String_t* value)
	{
		___serverIP_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serverIP_5), (void*)value);
	}

	inline static int32_t get_offset_of_serverPort_6() { return static_cast<int32_t>(offsetof(UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0, ___serverPort_6)); }
	inline int32_t get_serverPort_6() const { return ___serverPort_6; }
	inline int32_t* get_address_of_serverPort_6() { return &___serverPort_6; }
	inline void set_serverPort_6(int32_t value)
	{
		___serverPort_6 = value;
	}

	inline static int32_t get_offset_of_client_7() { return static_cast<int32_t>(offsetof(UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0, ___client_7)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get_client_7() const { return ___client_7; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of_client_7() { return &___client_7; }
	inline void set_client_7(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		___client_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_7), (void*)value);
	}

	inline static int32_t get_offset_of_stream_8() { return static_cast<int32_t>(offsetof(UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0, ___stream_8)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_stream_8() const { return ___stream_8; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_stream_8() { return &___stream_8; }
	inline void set_stream_8(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___stream_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_8), (void*)value);
	}

	inline static int32_t get_offset_of_formatter_9() { return static_cast<int32_t>(offsetof(UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0, ___formatter_9)); }
	inline RuntimeObject* get_formatter_9() const { return ___formatter_9; }
	inline RuntimeObject** get_address_of_formatter_9() { return &___formatter_9; }
	inline void set_formatter_9(RuntimeObject* value)
	{
		___formatter_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formatter_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner
struct PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68  : public BaseFocusHandler_t4741FC79C4EA04CCBB0CC93BE95A4CED4BFCC7FF
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_6;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::tooltipToggleAction
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___tooltipToggleAction_7;
	// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/AppearType Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::appearType
	int32_t ___appearType_8;
	// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/VanishType Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::vanishType
	int32_t ___vanishType_9;
	// Microsoft.MixedReality.Toolkit.UI.PrefabSpawner/RemainType Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::remainType
	int32_t ___remainType_10;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::appearDelay
	float ___appearDelay_11;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::vanishDelay
	float ___vanishDelay_12;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::lifetime
	float ___lifetime_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::keepWorldRotation
	bool ___keepWorldRotation_14;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::focusEnterTime
	float ___focusEnterTime_15;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::focusExitTime
	float ___focusExitTime_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::tappedTime
	float ___tappedTime_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PrefabSpawner::spawnable
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawnable_18;

public:
	inline static int32_t get_offset_of_prefab_6() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___prefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_6() const { return ___prefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_6() { return &___prefab_6; }
	inline void set_prefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_tooltipToggleAction_7() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___tooltipToggleAction_7)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_tooltipToggleAction_7() const { return ___tooltipToggleAction_7; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_tooltipToggleAction_7() { return &___tooltipToggleAction_7; }
	inline void set_tooltipToggleAction_7(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___tooltipToggleAction_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tooltipToggleAction_7))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_appearType_8() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___appearType_8)); }
	inline int32_t get_appearType_8() const { return ___appearType_8; }
	inline int32_t* get_address_of_appearType_8() { return &___appearType_8; }
	inline void set_appearType_8(int32_t value)
	{
		___appearType_8 = value;
	}

	inline static int32_t get_offset_of_vanishType_9() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___vanishType_9)); }
	inline int32_t get_vanishType_9() const { return ___vanishType_9; }
	inline int32_t* get_address_of_vanishType_9() { return &___vanishType_9; }
	inline void set_vanishType_9(int32_t value)
	{
		___vanishType_9 = value;
	}

	inline static int32_t get_offset_of_remainType_10() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___remainType_10)); }
	inline int32_t get_remainType_10() const { return ___remainType_10; }
	inline int32_t* get_address_of_remainType_10() { return &___remainType_10; }
	inline void set_remainType_10(int32_t value)
	{
		___remainType_10 = value;
	}

	inline static int32_t get_offset_of_appearDelay_11() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___appearDelay_11)); }
	inline float get_appearDelay_11() const { return ___appearDelay_11; }
	inline float* get_address_of_appearDelay_11() { return &___appearDelay_11; }
	inline void set_appearDelay_11(float value)
	{
		___appearDelay_11 = value;
	}

	inline static int32_t get_offset_of_vanishDelay_12() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___vanishDelay_12)); }
	inline float get_vanishDelay_12() const { return ___vanishDelay_12; }
	inline float* get_address_of_vanishDelay_12() { return &___vanishDelay_12; }
	inline void set_vanishDelay_12(float value)
	{
		___vanishDelay_12 = value;
	}

	inline static int32_t get_offset_of_lifetime_13() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___lifetime_13)); }
	inline float get_lifetime_13() const { return ___lifetime_13; }
	inline float* get_address_of_lifetime_13() { return &___lifetime_13; }
	inline void set_lifetime_13(float value)
	{
		___lifetime_13 = value;
	}

	inline static int32_t get_offset_of_keepWorldRotation_14() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___keepWorldRotation_14)); }
	inline bool get_keepWorldRotation_14() const { return ___keepWorldRotation_14; }
	inline bool* get_address_of_keepWorldRotation_14() { return &___keepWorldRotation_14; }
	inline void set_keepWorldRotation_14(bool value)
	{
		___keepWorldRotation_14 = value;
	}

	inline static int32_t get_offset_of_focusEnterTime_15() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___focusEnterTime_15)); }
	inline float get_focusEnterTime_15() const { return ___focusEnterTime_15; }
	inline float* get_address_of_focusEnterTime_15() { return &___focusEnterTime_15; }
	inline void set_focusEnterTime_15(float value)
	{
		___focusEnterTime_15 = value;
	}

	inline static int32_t get_offset_of_focusExitTime_16() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___focusExitTime_16)); }
	inline float get_focusExitTime_16() const { return ___focusExitTime_16; }
	inline float* get_address_of_focusExitTime_16() { return &___focusExitTime_16; }
	inline void set_focusExitTime_16(float value)
	{
		___focusExitTime_16 = value;
	}

	inline static int32_t get_offset_of_tappedTime_17() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___tappedTime_17)); }
	inline float get_tappedTime_17() const { return ___tappedTime_17; }
	inline float* get_address_of_tappedTime_17() { return &___tappedTime_17; }
	inline void set_tappedTime_17(float value)
	{
		___tappedTime_17 = value;
	}

	inline static int32_t get_offset_of_spawnable_18() { return static_cast<int32_t>(offsetof(PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68, ___spawnable_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawnable_18() const { return ___spawnable_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawnable_18() { return &___spawnable_18; }
	inline void set_spawnable_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawnable_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnable_18), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner
struct ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC  : public PrefabSpawner_t691C6EAFED92BE3E584E606A23392C0BB8BF7B68
{
public:
	// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner/SettingsMode Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::settingsMode
	int32_t ___settingsMode_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::showBackground
	bool ___showBackground_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::showOutline
	bool ___showOutline_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::showConnector
	bool ___showConnector_22;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorFollowType Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::followType
	int32_t ___followType_23;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorPivotMode Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotMode
	int32_t ___pivotMode_24;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorPivotDirection Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotDirection
	int32_t ___pivotDirection_25;
	// Microsoft.MixedReality.Toolkit.UI.ConnectorOrientType Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotDirectionOrient
	int32_t ___pivotDirectionOrient_26;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::manualPivotDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___manualPivotDirection_27;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::manualPivotLocalPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___manualPivotLocalPosition_28;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::pivotDistance
	float ___pivotDistance_29;
	// System.String Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::toolTipText
	String_t* ___toolTipText_30;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner::anchor
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___anchor_31;

public:
	inline static int32_t get_offset_of_settingsMode_19() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___settingsMode_19)); }
	inline int32_t get_settingsMode_19() const { return ___settingsMode_19; }
	inline int32_t* get_address_of_settingsMode_19() { return &___settingsMode_19; }
	inline void set_settingsMode_19(int32_t value)
	{
		___settingsMode_19 = value;
	}

	inline static int32_t get_offset_of_showBackground_20() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___showBackground_20)); }
	inline bool get_showBackground_20() const { return ___showBackground_20; }
	inline bool* get_address_of_showBackground_20() { return &___showBackground_20; }
	inline void set_showBackground_20(bool value)
	{
		___showBackground_20 = value;
	}

	inline static int32_t get_offset_of_showOutline_21() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___showOutline_21)); }
	inline bool get_showOutline_21() const { return ___showOutline_21; }
	inline bool* get_address_of_showOutline_21() { return &___showOutline_21; }
	inline void set_showOutline_21(bool value)
	{
		___showOutline_21 = value;
	}

	inline static int32_t get_offset_of_showConnector_22() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___showConnector_22)); }
	inline bool get_showConnector_22() const { return ___showConnector_22; }
	inline bool* get_address_of_showConnector_22() { return &___showConnector_22; }
	inline void set_showConnector_22(bool value)
	{
		___showConnector_22 = value;
	}

	inline static int32_t get_offset_of_followType_23() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___followType_23)); }
	inline int32_t get_followType_23() const { return ___followType_23; }
	inline int32_t* get_address_of_followType_23() { return &___followType_23; }
	inline void set_followType_23(int32_t value)
	{
		___followType_23 = value;
	}

	inline static int32_t get_offset_of_pivotMode_24() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___pivotMode_24)); }
	inline int32_t get_pivotMode_24() const { return ___pivotMode_24; }
	inline int32_t* get_address_of_pivotMode_24() { return &___pivotMode_24; }
	inline void set_pivotMode_24(int32_t value)
	{
		___pivotMode_24 = value;
	}

	inline static int32_t get_offset_of_pivotDirection_25() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___pivotDirection_25)); }
	inline int32_t get_pivotDirection_25() const { return ___pivotDirection_25; }
	inline int32_t* get_address_of_pivotDirection_25() { return &___pivotDirection_25; }
	inline void set_pivotDirection_25(int32_t value)
	{
		___pivotDirection_25 = value;
	}

	inline static int32_t get_offset_of_pivotDirectionOrient_26() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___pivotDirectionOrient_26)); }
	inline int32_t get_pivotDirectionOrient_26() const { return ___pivotDirectionOrient_26; }
	inline int32_t* get_address_of_pivotDirectionOrient_26() { return &___pivotDirectionOrient_26; }
	inline void set_pivotDirectionOrient_26(int32_t value)
	{
		___pivotDirectionOrient_26 = value;
	}

	inline static int32_t get_offset_of_manualPivotDirection_27() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___manualPivotDirection_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_manualPivotDirection_27() const { return ___manualPivotDirection_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_manualPivotDirection_27() { return &___manualPivotDirection_27; }
	inline void set_manualPivotDirection_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___manualPivotDirection_27 = value;
	}

	inline static int32_t get_offset_of_manualPivotLocalPosition_28() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___manualPivotLocalPosition_28)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_manualPivotLocalPosition_28() const { return ___manualPivotLocalPosition_28; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_manualPivotLocalPosition_28() { return &___manualPivotLocalPosition_28; }
	inline void set_manualPivotLocalPosition_28(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___manualPivotLocalPosition_28 = value;
	}

	inline static int32_t get_offset_of_pivotDistance_29() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___pivotDistance_29)); }
	inline float get_pivotDistance_29() const { return ___pivotDistance_29; }
	inline float* get_address_of_pivotDistance_29() { return &___pivotDistance_29; }
	inline void set_pivotDistance_29(float value)
	{
		___pivotDistance_29 = value;
	}

	inline static int32_t get_offset_of_toolTipText_30() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___toolTipText_30)); }
	inline String_t* get_toolTipText_30() const { return ___toolTipText_30; }
	inline String_t** get_address_of_toolTipText_30() { return &___toolTipText_30; }
	inline void set_toolTipText_30(String_t* value)
	{
		___toolTipText_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toolTipText_30), (void*)value);
	}

	inline static int32_t get_offset_of_anchor_31() { return static_cast<int32_t>(offsetof(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC, ___anchor_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_anchor_31() const { return ___anchor_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_anchor_31() { return &___anchor_31; }
	inline void set_anchor_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___anchor_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchor_31), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * m_Items[1];

public:
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MRTK.Tutorials.GettingStarted.PartAssemblyController[]
struct PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * m_Items[1];

public:
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_Invoke_mEC016D4928ADCA613702B28C1E3378F7EC29B58C (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Toggle_m321B6176A1D390111076B1919CC2E44D6DB7E5E2 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126 (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline (const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::StartNew(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TaskFactory_StartNew_mBCFD0F15F2065CF30D925DCE96234FBBD37CF27B (TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandJointUtils::TryGetJointPose(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandJointUtils_TryGetJointPose_m6674FA55DDCC18B96B472DC5512391D983BD2EEF (int32_t ___joint0, uint8_t ___handedness1, MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * ___pose2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Position_m3F18DEDD4E5AE5AC464D7716A3AD50DEA7083B08_inline (MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String HandTracking::GetLocalIPAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HandTracking_GetLocalIPAddress_m0B0318DF06B325532EB6F4EDD40B2E2DFB5D7BAE (HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPAddress_Parse_m49C413225AC75DA34D1663559818861CA34C3CB0 (String_t* ___ipString0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener__ctor_mD4633F7821C1F6412EFE88DB42F8A6C7E1A914F0 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___localaddr0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener_Start_m95F4F504E8BF63D90E857AF6C794AC25EF971C68 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method);
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * TcpListener_AcceptTcpClient_m53BD54B8278B2288877965A92644FD84BCD9D4A5 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_m8BF02B75F8EF9723179339212805C5BAF5C4B706 (const RuntimeMethod* method);
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * Dns_GetHostEntry_m251BB12504C0277A9CCD2B33C5C9979CFAB4F6AD (String_t* ___hostNameOrAddress0, const RuntimeMethod* method);
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F_inline (IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * __this, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner>()
inline ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * Component_GetComponent_TisToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC_m6866DFB39010BA7F288F86308DC405E186FD0313 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::.ctor()
inline void List_1__ctor_m506CA9304331AEEB6F54364B7565751DF3DA5F2C (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponents<UnityEngine.Collider>()
inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* Component_GetComponents_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mF21627A27D716B39A58AF0C6364879F91361ECCE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::Add(!0)
inline void List_1_Add_mBC7F80BF201242CA6BFF20F91905213CCDB8CEF4 (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B *, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>::.ctor()
inline void List_1__ctor_mBA01C60EEC2200475EBFACCBE74277A9B91D18A1 (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<MRTK.Tutorials.GettingStarted.PartAssemblyController>()
inline PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* Object_FindObjectsOfType_TisPartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573_m95DE796FD55FCC02F041B6774108803CFD476E27 (const RuntimeMethod* method)
{
	return ((  PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>::Add(!0)
inline void List_1_Add_m4CA254963448DF7236C874BD5CC30FB1AEC1CF80 (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * __this, PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 *, PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator MRTK.Tutorials.GettingStarted.PartAssemblyController::CheckPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PartAssemblyController_CheckPlacement_m058EC3FBCB6313D9C85FF551A4831601805F5A4D (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_Invoke_m35EC047435BEF3AC833FE7F6FDED12C1D2FAF2F9 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Set_m77CC9BC1F649F4F08C89FD060E2C74C4F45C91FD (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Collider>::GetEnumerator()
inline Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57 (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  (*) (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::get_Current()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_inline (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::MoveNext()
inline bool Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::Dispose()
inline void Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17 (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>::GetEnumerator()
inline Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE  List_1_GetEnumerator_m24489FBEBA3B3510DB03EFC180E4DA483A2FC339 (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE  (*) (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>::get_Current()
inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * Enumerator_get_Current_m48C679A025279D99D06EFEDF1C45D3591E8CCE7D_inline (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE * __this, const RuntimeMethod* method)
{
	return ((  PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * (*) (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Reset_m129940529723E9498D4E5035FB917610DA5C8981 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>::MoveNext()
inline bool Enumerator_MoveNext_m7306C0B3F65C54D943145C1CEFE2DAC0FF5F5B39 (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<MRTK.Tutorials.GettingStarted.PartAssemblyController>::Dispose()
inline void Enumerator_Dispose_m1BB99A21A431E4E4B575E70C0EBBC13E1458A537 (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25__ctor_m1AE9DAAD6457E2BA3C8AF018FC38B348AEEAFD35 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_Invoke_mD8415531C38108E1B7B41AB3C5BE9ED938DE5BAA (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_Toggle_mED247D0E903D8499BE48BC9C0DF2EC3B94F3494B (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// System.String UnityServer::GetLocalIPAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityServer_GetLocalIPAddress_m52B4ED917DB194C1B39DC1C869AAF239CD585357 (UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::SetPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_SetPlacement_mB6BDE1A16F74DF3B4950483F7C58E3201B0A0851 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void MRTK.Tutorials.GettingStarted.DirectionalIndicatorController::OnBecameInvisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionalIndicatorController_OnBecameInvisible_m0E4A338FC4C70E296D1B8286AA2FD9E833D947C2 (DirectionalIndicatorController_t6CDF2CB91F21C7282CB98974423C1123EF621588 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.DirectionalIndicatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionalIndicatorController__ctor_mD5EA1948C4529FAFD1E496942ADAFBEC7E4A8018 (DirectionalIndicatorController_t6CDF2CB91F21C7282CB98974423C1123EF621588 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::set_IsPunEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_set_IsPunEnabled_mF24170F7F9A608F7414FFF2ABF39EE706BC434F5 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => isPunEnabled = value;
		bool L_0 = ___value0;
		__this->set_isPunEnabled_7(L_0);
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Start_mE07825796104C61B74ED0AD2D5A5CC38E0BAAE6D (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_defaultPositions_5();
		NullCheck(L_0);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_000e:
		{
			// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_1 = L_2;
			// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = __this->get_startingPos_9();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_1;
			NullCheck(L_4);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
			L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
			NullCheck(L_3);
			List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_3, L_6, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		}

IL_002c:
		{
			// foreach (var item in defaultPositions) startingPos.Add(item.transform.localPosition);
			bool L_7;
			L_7 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_explodedPositions_6();
		NullCheck(L_8);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_9;
		L_9 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_8, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0071;
		}

IL_0053:
		{
			// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
			L_10 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_2 = L_10;
			// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_11 = __this->get_explodedPos_8();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_2;
			NullCheck(L_12);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
			L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
			L_14 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_13, /*hidden argument*/NULL);
			NullCheck(L_11);
			List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_11, L_14, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		}

IL_0071:
		{
			// foreach (var item in explodedPositions) explodedPos.Add(item.transform.localPosition);
			bool L_15;
			L_15 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0053;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x8A, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Update_mC1FADA194292F3EBAE4E56B1AE64EB407E87F2F8 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (isInDefaultPosition)
		bool L_0 = __this->get_isInDefaultPosition_10();
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_000c:
	{
		// defaultPositions[i].transform.localPosition = Vector3.Lerp(
		//     defaultPositions[i].transform.localPosition,
		//     explodedPos[i], speed);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_defaultPositions_5();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_defaultPositions_5();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_8, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_10 = __this->get_explodedPos_8();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_13 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_9, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_4, L_14, /*hidden argument*/NULL);
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0053:
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_16 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_17 = __this->get_defaultPositions_5();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_17, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_0062:
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		V_1 = 0;
		goto IL_00ad;
	}

IL_0066:
	{
		// defaultPositions[i].transform.localPosition = Vector3.Lerp(
		//     defaultPositions[i].transform.localPosition,
		//     startingPos[i], speed);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = __this->get_defaultPositions_5();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_23 = __this->get_defaultPositions_5();
		int32_t L_24 = V_1;
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_26, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_28 = __this->get_startingPos_9();
		int32_t L_29 = V_1;
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_28, L_29, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_31 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_27, L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_22, L_32, /*hidden argument*/NULL);
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00ad:
	{
		// for (var i = 0; i < defaultPositions.Count; i++)
		int32_t L_34 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_35 = __this->get_defaultPositions_5();
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_35, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0066;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::ToggleExplodedView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_ToggleExplodedView_m74189DE87897AB5232FA72B72753903F85952972 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method)
{
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * G_B3_0 = NULL;
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * G_B2_0 = NULL;
	{
		// if (isPunEnabled)
		bool L_0 = __this->get_isPunEnabled_7();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// OnToggleExplodedView?.Invoke();
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_1 = __this->get_OnToggleExplodedView_11();
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NullCheck(G_B3_0);
		ExplodeViewControllerDelegate_Invoke_mEC016D4928ADCA613702B28C1E3378F7EC29B58C(G_B3_0, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		// Toggle();
		ExplodeViewController_Toggle_m321B6176A1D390111076B1919CC2E44D6DB7E5E2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_Toggle_m321B6176A1D390111076B1919CC2E44D6DB7E5E2 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method)
{
	{
		// isInDefaultPosition = !isInDefaultPosition;
		bool L_0 = __this->get_isInDefaultPosition_10();
		__this->set_isInDefaultPosition_10((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::add_OnToggleExplodedView(MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_add_OnToggleExplodedView_mA25D0A8E94652AC021B35E5C2591EFB4A65EFAE0 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_0 = NULL;
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_1 = NULL;
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_2 = NULL;
	{
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_0 = __this->get_OnToggleExplodedView_11();
		V_0 = L_0;
	}

IL_0007:
	{
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_1 = V_0;
		V_1 = L_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_2 = V_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)CastclassSealed((RuntimeObject*)L_4, ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856_il2cpp_TypeInfo_var));
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 ** L_5 = __this->get_address_of_OnToggleExplodedView_11();
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_6 = V_2;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_7 = V_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_8;
		L_8 = InterlockedCompareExchangeImpl<ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *>((ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 **)L_5, L_6, L_7);
		V_0 = L_8;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_9 = V_0;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)L_9) == ((RuntimeObject*)(ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::remove_OnToggleExplodedView(MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController_remove_OnToggleExplodedView_mF561824B96EAA8FD7770BEA6265349C3A65B8ECA (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_0 = NULL;
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_1 = NULL;
	ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * V_2 = NULL;
	{
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_0 = __this->get_OnToggleExplodedView_11();
		V_0 = L_0;
	}

IL_0007:
	{
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_1 = V_0;
		V_1 = L_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_2 = V_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)CastclassSealed((RuntimeObject*)L_4, ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856_il2cpp_TypeInfo_var));
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 ** L_5 = __this->get_address_of_OnToggleExplodedView_11();
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_6 = V_2;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_7 = V_1;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_8;
		L_8 = InterlockedCompareExchangeImpl<ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *>((ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 **)L_5, L_6, L_7);
		V_0 = L_8;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_9 = V_0;
		ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)L_9) == ((RuntimeObject*)(ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewController__ctor_mE72637A87DA07F869CC7C9FD74591AE0C8F60176 (ExplodeViewController_t32E3C811276B089503FF945624DE85E37ED28A11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float speed = 0.1f;
		__this->set_speed_4((0.100000001f));
		// private readonly List<Vector3> explodedPos = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_0, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_explodedPos_8(L_0);
		// private readonly List<Vector3> startingPos = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_1, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_startingPos_9(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void HandTracking::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_Start_mDCCB9AA2980607083C36465C45319981BC5A806E (HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTracking_ListenBackground_m3791F0246D3E002759E06CDFDE345937E12C870A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indexObject1 = Instantiate(sphereMarker, this.transform);   // for IndexTip
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_sphereMarker_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_0, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set_indexObject1_5(L_2);
		// indexObject2 = Instantiate(sphereMarker, this.transform);   // for IndextDistalJoint
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_sphereMarker_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set_indexObject2_6(L_5);
		// indexObject3 = Instantiate(sphereMarker, this.transform);   // for IndexMiddleJoint
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_sphereMarker_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_6, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set_indexObject3_7(L_8);
		// indexObject4 = Instantiate(sphereMarker, this.transform);   // for IndexKnuckle
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_sphereMarker_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set_indexObject4_8(L_11);
		// formatter = new BinaryFormatter();
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_12 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_12, /*hidden argument*/NULL);
		__this->set_formatter_15(L_12);
		// Task.Factory.StartNew(ListenBackground);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * L_13;
		L_13 = Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline(/*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_14, __this, (intptr_t)((intptr_t)HandTracking_ListenBackground_m3791F0246D3E002759E06CDFDE345937E12C870A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_15;
		L_15 = TaskFactory_StartNew_mBCFD0F15F2065CF30D925DCE96234FBBD37CF27B(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HandTracking::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_Update_m972D7A5BAE3C9F73993B78C21809D36AD7309767 (HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormatter_t91AC8765DE85C135D6CA1042CEBF15007BCEFB01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indexObject1.GetComponent<Renderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_indexObject1_5();
		NullCheck(L_0);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_1);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_1, (bool)0, /*hidden argument*/NULL);
		// indexObject2.GetComponent<Renderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_indexObject2_6();
		NullCheck(L_2);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_3;
		L_3 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_2, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_3);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_3, (bool)0, /*hidden argument*/NULL);
		// indexObject3.GetComponent<Renderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_indexObject3_7();
		NullCheck(L_4);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5;
		L_5 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_4, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_5);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_5, (bool)0, /*hidden argument*/NULL);
		// indexObject4.GetComponent<Renderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_indexObject4_8();
		NullCheck(L_6);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_7;
		L_7 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_6, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_7);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_7, (bool)0, /*hidden argument*/NULL);
		// if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
		MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * L_8 = __this->get_address_of_pose_9();
		bool L_9;
		L_9 = HandJointUtils_TryGetJointPose_m6674FA55DDCC18B96B472DC5512391D983BD2EEF(((int32_t)11), 2, (MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		// indexObject1.GetComponent<Renderer>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_indexObject1_5();
		NullCheck(L_10);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_11;
		L_11 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_10, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_11);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_11, (bool)1, /*hidden argument*/NULL);
		// indexObject1.transform.position = pose.Position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_indexObject1_5();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * L_14 = __this->get_address_of_pose_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = MixedRealityPose_get_Position_m3F18DEDD4E5AE5AC464D7716A3AD50DEA7083B08_inline((MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 *)L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexDistalJoint, Handedness.Right, out pose))
		MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * L_16 = __this->get_address_of_pose_9();
		bool L_17;
		L_17 = HandJointUtils_TryGetJointPose_m6674FA55DDCC18B96B472DC5512391D983BD2EEF(((int32_t)10), 2, (MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00bc;
		}
	}
	{
		// indexObject2.GetComponent<Renderer>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_indexObject2_6();
		NullCheck(L_18);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_19;
		L_19 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_18, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_19);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_19, (bool)1, /*hidden argument*/NULL);
		// indexObject2.transform.position = pose.Position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_indexObject2_6();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * L_22 = __this->get_address_of_pose_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = MixedRealityPose_get_Position_m3F18DEDD4E5AE5AC464D7716A3AD50DEA7083B08_inline((MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 *)L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_23, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		// if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexMiddleJoint, Handedness.Right, out pose))
		MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * L_24 = __this->get_address_of_pose_9();
		bool L_25;
		L_25 = HandJointUtils_TryGetJointPose_m6674FA55DDCC18B96B472DC5512391D983BD2EEF(((int32_t)9), 2, (MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 *)L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00f8;
		}
	}
	{
		// indexObject3.GetComponent<Renderer>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_indexObject3_7();
		NullCheck(L_26);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_26, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_27);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_27, (bool)1, /*hidden argument*/NULL);
		// indexObject3.transform.position = pose.Position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_indexObject3_7();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * L_30 = __this->get_address_of_pose_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = MixedRealityPose_get_Position_m3F18DEDD4E5AE5AC464D7716A3AD50DEA7083B08_inline((MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 *)L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_29, L_31, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexKnuckle, Handedness.Right, out pose))
		MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * L_32 = __this->get_address_of_pose_9();
		bool L_33;
		L_33 = HandJointUtils_TryGetJointPose_m6674FA55DDCC18B96B472DC5512391D983BD2EEF(8, 2, (MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 *)L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		// indexObject4.GetComponent<Renderer>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_indexObject4_8();
		NullCheck(L_34);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_35;
		L_35 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_34, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_35);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_35, (bool)1, /*hidden argument*/NULL);
		// indexObject4.transform.position = pose.Position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_indexObject4_8();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * L_38 = __this->get_address_of_pose_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = MixedRealityPose_get_Position_m3F18DEDD4E5AE5AC464D7716A3AD50DEA7083B08_inline((MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 *)L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_37, L_39, /*hidden argument*/NULL);
	}

IL_0133:
	{
		// if (indexObject1.transform.position.z >= 0.455)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_indexObject1_5();
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_z_4();
		if ((!(((double)((double)((double)L_43))) >= ((double)(0.45500000000000002)))))
		{
			goto IL_0168;
		}
	}
	{
		// data = 0;
		__this->set_data_10((0.0));
		// }
		goto IL_0267;
	}

IL_0168:
	{
		// else if (indexObject2.transform.position.z >= 0.455)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = __this->get_indexObject2_6();
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_z_4();
		if ((!(((double)((double)((double)L_47))) >= ((double)(0.45500000000000002)))))
		{
			goto IL_01ba;
		}
	}
	{
		// data = Vector3.Distance(indexObject1.transform.position, indexObject2.transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = __this->get_indexObject1_5();
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = __this->get_indexObject2_6();
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		float L_54;
		L_54 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_50, L_53, /*hidden argument*/NULL);
		__this->set_data_10(((double)((double)L_54)));
		// }
		goto IL_0267;
	}

IL_01ba:
	{
		// else if (indexObject3.transform.position.z >= 0.455)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = __this->get_indexObject3_7();
		NullCheck(L_55);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		float L_58 = L_57.get_z_4();
		if ((!(((double)((double)((double)L_58))) >= ((double)(0.45500000000000002)))))
		{
			goto IL_0209;
		}
	}
	{
		// data = Vector3.Distance(indexObject1.transform.position, indexObject3.transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = __this->get_indexObject1_5();
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_60, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_indexObject3_7();
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_63, /*hidden argument*/NULL);
		float L_65;
		L_65 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_61, L_64, /*hidden argument*/NULL);
		__this->set_data_10(((double)((double)L_65)));
		// }
		goto IL_0267;
	}

IL_0209:
	{
		// else if (indexObject4.transform.position.z >= 0.455)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = __this->get_indexObject4_8();
		NullCheck(L_66);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_67, /*hidden argument*/NULL);
		float L_69 = L_68.get_z_4();
		if ((!(((double)((double)((double)L_69))) >= ((double)(0.45500000000000002)))))
		{
			goto IL_0258;
		}
	}
	{
		// data = Vector3.Distance(indexObject1.transform.position, indexObject4.transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = __this->get_indexObject1_5();
		NullCheck(L_70);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_70, /*hidden argument*/NULL);
		NullCheck(L_71);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_71, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = __this->get_indexObject4_8();
		NullCheck(L_73);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_74, /*hidden argument*/NULL);
		float L_76;
		L_76 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_72, L_75, /*hidden argument*/NULL);
		__this->set_data_10(((double)((double)L_76)));
		// }
		goto IL_0267;
	}

IL_0258:
	{
		// else data = 0;
		__this->set_data_10((0.0));
	}

IL_0267:
	{
		// if (stream != null && stream.CanWrite)
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_77 = __this->get_stream_14();
		if (!L_77)
		{
			goto IL_0298;
		}
	}
	{
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_78 = __this->get_stream_14();
		NullCheck(L_78);
		bool L_79;
		L_79 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_78);
		if (!L_79)
		{
			goto IL_0298;
		}
	}
	{
		// formatter.Serialize(stream, data);  // sending data to Arduino
		RuntimeObject* L_80 = __this->get_formatter_15();
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_81 = __this->get_stream_14();
		double L_82 = __this->get_data_10();
		double L_83 = L_82;
		RuntimeObject * L_84 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_83);
		NullCheck(L_80);
		InterfaceActionInvoker2< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject * >::Invoke(0 /* System.Void System.Runtime.Serialization.IFormatter::Serialize(System.IO.Stream,System.Object) */, IFormatter_t91AC8765DE85C135D6CA1042CEBF15007BCEFB01_il2cpp_TypeInfo_var, L_80, L_81, L_84);
	}

IL_0298:
	{
		// }
		return;
	}
}
// System.Void HandTracking::ListenBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_ListenBackground_m3791F0246D3E002759E06CDFDE345937E12C870A (HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053168EE1CE7A6612D4184BBD9562AD2C67C1271);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FEC9D9F41D87A0FE6A7D03CA21F54260383EE62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E37A88B3878597FA1CCD2B18B99432285AC14FD);
		s_Il2CppMethodInitialized = true;
	}
	TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * V_0 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// Debug.Log("Starting TCP server...\n");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral4E37A88B3878597FA1CCD2B18B99432285AC14FD, /*hidden argument*/NULL);
			// serverIP = GetLocalIPAddress();
			String_t* L_0;
			L_0 = HandTracking_GetLocalIPAddress_m0B0318DF06B325532EB6F4EDD40B2E2DFB5D7BAE(__this, /*hidden argument*/NULL);
			__this->set_serverIP_11(L_0);
			// Debug.Log("IP: " + serverIP);
			String_t* L_1 = __this->get_serverIP_11();
			String_t* L_2;
			L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2FEC9D9F41D87A0FE6A7D03CA21F54260383EE62, L_1, /*hidden argument*/NULL);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
			// Debug.Log("Port: " + serverPort + "\n");
			int32_t* L_3 = __this->get_address_of_serverPort_12();
			String_t* L_4;
			L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
			String_t* L_5;
			L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral053168EE1CE7A6612D4184BBD9562AD2C67C1271, L_4, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
			// TcpListener listener = new TcpListener(IPAddress.Parse(serverIP), serverPort);
			String_t* L_6 = __this->get_serverIP_11();
			IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_7;
			L_7 = IPAddress_Parse_m49C413225AC75DA34D1663559818861CA34C3CB0(L_6, /*hidden argument*/NULL);
			int32_t L_8 = __this->get_serverPort_12();
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_9 = (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B *)il2cpp_codegen_object_new(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B_il2cpp_TypeInfo_var);
			TcpListener__ctor_mD4633F7821C1F6412EFE88DB42F8A6C7E1A914F0(L_9, L_7, L_8, /*hidden argument*/NULL);
			V_0 = L_9;
			// listener.Start();
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_10 = V_0;
			NullCheck(L_10);
			TcpListener_Start_m95F4F504E8BF63D90E857AF6C794AC25EF971C68(L_10, /*hidden argument*/NULL);
		}

IL_0067:
		{
			// client = listener.AcceptTcpClient();
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_11 = V_0;
			NullCheck(L_11);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_12;
			L_12 = TcpListener_AcceptTcpClient_m53BD54B8278B2288877965A92644FD84BCD9D4A5(L_11, /*hidden argument*/NULL);
			__this->set_client_13(L_12);
			// stream = client.GetStream();
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_13 = __this->get_client_13();
			NullCheck(L_13);
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_14;
			L_14 = TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC(L_13, /*hidden argument*/NULL);
			__this->set_stream_14(L_14);
			// while(true)
			goto IL_0067;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{ // begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException socketException)
		V_1 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
		// Debug.Log("SocketException " + socketException.ToString());
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E2D0E44701182F19CC42C0B00702ADC6649C7F9)), L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009e;
	} // end catch (depth: 1)

IL_009e:
	{
		// }
		return;
	}
}
// System.String HandTracking::GetLocalIPAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HandTracking_GetLocalIPAddress_m0B0318DF06B325532EB6F4EDD40B2E2DFB5D7BAE (HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF * __this, const RuntimeMethod* method)
{
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_0 = NULL;
	int32_t V_1 = 0;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_2 = NULL;
	{
		// var host = Dns.GetHostEntry(Dns.GetHostName());
		String_t* L_0;
		L_0 = Dns_GetHostName_m8BF02B75F8EF9723179339212805C5BAF5C4B706(/*hidden argument*/NULL);
		IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * L_1;
		L_1 = Dns_GetHostEntry_m251BB12504C0277A9CCD2B33C5C9979CFAB4F6AD(L_0, /*hidden argument*/NULL);
		// foreach (var ip in host.AddressList)
		NullCheck(L_1);
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_2;
		L_2 = IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002c;
	}

IL_0014:
	{
		// foreach (var ip in host.AddressList)
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (ip.AddressFamily == AddressFamily.InterNetwork)
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0028;
		}
	}
	{
		// return ip.ToString();
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_9 = V_2;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		return L_10;
	}

IL_0028:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002c:
	{
		// foreach (var ip in host.AddressList)
		int32_t L_12 = V_1;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		// throw new Exception("No network adapters with an IPv4 address in the system!");
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3505CC67D4132D403A00F09BF5E8669B36253FEF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HandTracking_GetLocalIPAddress_m0B0318DF06B325532EB6F4EDD40B2E2DFB5D7BAE_RuntimeMethod_var)));
	}
}
// System.Void HandTracking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking__ctor_m3A46A0D19B96267C67DE101963589E93D3F3346D (HandTracking_t1134059B07FA947243D83225DCA01F278953A1DF * __this, const RuntimeMethod* method)
{
	{
		// public double data = 1.0;
		__this->set_data_10((1.0));
		// private int serverPort = 5050;
		__this->set_serverPort_12(((int32_t)5050));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::set_IsPunEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_set_IsPunEnabled_m87E32D7952387591F37EC578D7850CCF1CCE4D55 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => isPunEnabled = value;
		bool L_0 = ___value0;
		__this->set_isPunEnabled_7(L_0);
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Start_m76EEAA396C555EFAC8E6EA60B32B1E7380570CE7 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC_m6866DFB39010BA7F288F86308DC405E186FD0313_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mF21627A27D716B39A58AF0C6364879F91361ECCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4CA254963448DF7236C874BD5CC30FB1AEC1CF80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBC7F80BF201242CA6BFF20F91905213CCDB8CEF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m506CA9304331AEEB6F54364B7565751DF3DA5F2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBA01C60EEC2200475EBFACCBE74277A9B91D18A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573_m95DE796FD55FCC02F041B6774108803CFD476E27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_1 = NULL;
	int32_t V_2 = 0;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * V_3 = NULL;
	PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* V_4 = NULL;
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * V_5 = NULL;
	{
		// if (locationToPlace != transform) shouldCheckPlacement = true;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_locationToPlace_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if (locationToPlace != transform) shouldCheckPlacement = true;
		__this->set_shouldCheckPlacement_8((bool)1);
	}

IL_001a:
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_9(L_3);
		// toolTipSpawner = GetComponent<ToolTipSpawner>();
		ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * L_4;
		L_4 = Component_GetComponent_TisToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC_m6866DFB39010BA7F288F86308DC405E186FD0313(__this, /*hidden argument*/Component_GetComponent_TisToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC_m6866DFB39010BA7F288F86308DC405E186FD0313_RuntimeMethod_var);
		__this->set_toolTipSpawner_10(L_4);
		// colliders = new List<Collider>();
		List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * L_5 = (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B *)il2cpp_codegen_object_new(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_il2cpp_TypeInfo_var);
		List_1__ctor_m506CA9304331AEEB6F54364B7565751DF3DA5F2C(L_5, /*hidden argument*/List_1__ctor_m506CA9304331AEEB6F54364B7565751DF3DA5F2C_RuntimeMethod_var);
		__this->set_colliders_11(L_5);
		// if (shouldCheckPlacement)
		bool L_6 = __this->get_shouldCheckPlacement_8();
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		// foreach (var col in GetComponents<Collider>())
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_7;
		L_7 = Component_GetComponents_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mF21627A27D716B39A58AF0C6364879F91361ECCE(__this, /*hidden argument*/Component_GetComponents_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mF21627A27D716B39A58AF0C6364879F91361ECCE_RuntimeMethod_var);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0064;
	}

IL_0050:
	{
		// foreach (var col in GetComponents<Collider>())
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// colliders.Add(col);
		List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * L_12 = __this->get_colliders_11();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13 = V_3;
		NullCheck(L_12);
		List_1_Add_mBC7F80BF201242CA6BFF20F91905213CCDB8CEF4(L_12, L_13, /*hidden argument*/List_1_Add_mBC7F80BF201242CA6BFF20F91905213CCDB8CEF4_RuntimeMethod_var);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0064:
	{
		// foreach (var col in GetComponents<Collider>())
		int32_t L_15 = V_2;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_006a:
	{
		// partAssemblyControllers = new List<PartAssemblyController>();
		List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * L_17 = (List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 *)il2cpp_codegen_object_new(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027_il2cpp_TypeInfo_var);
		List_1__ctor_mBA01C60EEC2200475EBFACCBE74277A9B91D18A1(L_17, /*hidden argument*/List_1__ctor_mBA01C60EEC2200475EBFACCBE74277A9B91D18A1_RuntimeMethod_var);
		__this->set_partAssemblyControllers_12(L_17);
		// foreach (var controller in FindObjectsOfType<PartAssemblyController>())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* L_18;
		L_18 = Object_FindObjectsOfType_TisPartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573_m95DE796FD55FCC02F041B6774108803CFD476E27(/*hidden argument*/Object_FindObjectsOfType_TisPartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573_m95DE796FD55FCC02F041B6774108803CFD476E27_RuntimeMethod_var);
		V_4 = L_18;
		V_2 = 0;
		goto IL_0097;
	}

IL_0080:
	{
		// foreach (var controller in FindObjectsOfType<PartAssemblyController>())
		PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* L_19 = V_4;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		// partAssemblyControllers.Add(controller);
		List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * L_23 = __this->get_partAssemblyControllers_12();
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_24 = V_5;
		NullCheck(L_23);
		List_1_Add_m4CA254963448DF7236C874BD5CC30FB1AEC1CF80(L_23, L_24, /*hidden argument*/List_1_Add_m4CA254963448DF7236C874BD5CC30FB1AEC1CF80_RuntimeMethod_var);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0097:
	{
		// foreach (var controller in FindObjectsOfType<PartAssemblyController>())
		int32_t L_26 = V_2;
		PartAssemblyControllerU5BU5D_t2D4A5F6EFD0DDD27BFA0656949A1EB5613F5F522* L_27 = V_4;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_0080;
		}
	}
	{
		// var trans = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_0 = L_28;
		// originalParent = trans.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_0;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_29, /*hidden argument*/NULL);
		__this->set_originalParent_13(L_30);
		// originalPosition = trans.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = V_0;
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_31, /*hidden argument*/NULL);
		__this->set_originalPosition_14(L_32);
		// originalRotation = trans.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = V_0;
		NullCheck(L_33);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_33, /*hidden argument*/NULL);
		__this->set_originalRotation_15(L_34);
		// checkPlacementCoroutine = CheckPlacement();
		RuntimeObject* L_35;
		L_35 = PartAssemblyController_CheckPlacement_m058EC3FBCB6313D9C85FF551A4831601805F5A4D(__this, /*hidden argument*/NULL);
		__this->set_checkPlacementCoroutine_16(L_35);
		// hasAudioSource = audioSource != null;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_36 = __this->get_audioSource_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_36, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		__this->set_hasAudioSource_17(L_37);
		// hasToolTip = toolTipSpawner != null;
		ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * L_38 = __this->get_toolTipSpawner_10();
		bool L_39;
		L_39 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		__this->set_hasToolTip_18(L_39);
		// if (shouldCheckPlacement) StartCoroutine(checkPlacementCoroutine);
		bool L_40 = __this->get_shouldCheckPlacement_8();
		if (!L_40)
		{
			goto IL_010e;
		}
	}
	{
		// if (shouldCheckPlacement) StartCoroutine(checkPlacementCoroutine);
		RuntimeObject* L_41 = __this->get_checkPlacementCoroutine_16();
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_42;
		L_42 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_41, /*hidden argument*/NULL);
	}

IL_010e:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::SetPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_SetPlacement_mB6BDE1A16F74DF3B4950483F7C58E3201B0A0851 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * G_B3_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * G_B2_0 = NULL;
	{
		// if (isPunEnabled)
		bool L_0 = __this->get_isPunEnabled_7();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// OnSetPlacement?.Invoke();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_1 = __this->get_OnSetPlacement_22();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NullCheck(G_B3_0);
		PartAssemblyControllerDelegate_Invoke_m35EC047435BEF3AC833FE7F6FDED12C1D2FAF2F9(G_B3_0, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		// Set();
		PartAssemblyController_Set_m77CC9BC1F649F4F08C89FD060E2C74C4F45C91FD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Set_m77CC9BC1F649F4F08C89FD060E2C74C4F45C91FD (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// isPlaced = true;
		__this->set_isPlaced_19((bool)1);
		// if (hasAudioSource) audioSource.Play();
		bool L_0 = __this->get_hasAudioSource_17();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// if (hasAudioSource) audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_9();
		NullCheck(L_1);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// foreach (var col in colliders) col.enabled = false;
		List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * L_2 = __this->get_colliders_11();
		NullCheck(L_2);
		Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  L_3;
		L_3 = List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57(L_2, /*hidden argument*/List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_0028:
		{
			// foreach (var col in colliders) col.enabled = false;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4;
			L_4 = Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_inline((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var);
			// foreach (var col in colliders) col.enabled = false;
			NullCheck(L_4);
			Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_4, (bool)0, /*hidden argument*/NULL);
		}

IL_0035:
		{
			// foreach (var col in colliders) col.enabled = false;
			bool L_5;
			L_5 = Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0028;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_004e:
	{
		// if (hasToolTip) toolTipSpawner.enabled = false;
		bool L_6 = __this->get_hasToolTip_18();
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		// if (hasToolTip) toolTipSpawner.enabled = false;
		ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * L_7 = __this->get_toolTipSpawner_10();
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// var trans = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		// trans.SetParent(locationToPlace.parent);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = L_8;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_locationToPlace_4();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_9, L_11, /*hidden argument*/NULL);
		// trans.position = locationToPlace.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = L_9;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_locationToPlace_4();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_14, /*hidden argument*/NULL);
		// trans.rotation = locationToPlace.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_locationToPlace_4();
		NullCheck(L_15);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_12, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::ResetPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_ResetPlacement_m7FA91500780C316EBF560CECD7078E559460ACD0 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1BB99A21A431E4E4B575E70C0EBBC13E1458A537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7306C0B3F65C54D943145C1CEFE2DAC0FF5F5B39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m48C679A025279D99D06EFEDF1C45D3591E8CCE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24489FBEBA3B3510DB03EFC180E4DA483A2FC339_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * G_B5_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * G_B4_0 = NULL;
	{
		// foreach (var controller in partAssemblyControllers)
		List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * L_0 = __this->get_partAssemblyControllers_12();
		NullCheck(L_0);
		Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE  L_1;
		L_1 = List_1_GetEnumerator_m24489FBEBA3B3510DB03EFC180E4DA483A2FC339(L_0, /*hidden argument*/List_1_GetEnumerator_m24489FBEBA3B3510DB03EFC180E4DA483A2FC339_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_000e:
		{
			// foreach (var controller in partAssemblyControllers)
			PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_2;
			L_2 = Enumerator_get_Current_m48C679A025279D99D06EFEDF1C45D3591E8CCE7D_inline((Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *)(&V_0), /*hidden argument*/Enumerator_get_Current_m48C679A025279D99D06EFEDF1C45D3591E8CCE7D_RuntimeMethod_var);
			V_1 = L_2;
			// if (isPunEnabled)
			bool L_3 = __this->get_isPunEnabled_7();
			if (!L_3)
			{
				goto IL_0031;
			}
		}

IL_001e:
		{
			// controller.OnResetPlacement?.Invoke();
			PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_4 = V_1;
			NullCheck(L_4);
			PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_5 = L_4->get_OnResetPlacement_21();
			PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_6 = L_5;
			G_B4_0 = L_6;
			if (L_6)
			{
				G_B5_0 = L_6;
				goto IL_002a;
			}
		}

IL_0027:
		{
			goto IL_0037;
		}

IL_002a:
		{
			NullCheck(G_B5_0);
			PartAssemblyControllerDelegate_Invoke_m35EC047435BEF3AC833FE7F6FDED12C1D2FAF2F9(G_B5_0, /*hidden argument*/NULL);
			goto IL_0037;
		}

IL_0031:
		{
			// controller.Reset();
			PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_7 = V_1;
			NullCheck(L_7);
			PartAssemblyController_Reset_m129940529723E9498D4E5035FB917610DA5C8981(L_7, /*hidden argument*/NULL);
		}

IL_0037:
		{
			// foreach (var controller in partAssemblyControllers)
			bool L_8;
			L_8 = Enumerator_MoveNext_m7306C0B3F65C54D943145C1CEFE2DAC0FF5F5B39((Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7306C0B3F65C54D943145C1CEFE2DAC0FF5F5B39_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_000e;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1BB99A21A431E4E4B575E70C0EBBC13E1458A537((Enumerator_tC700778C16252F3F17E3FC0A622862941A7E26EE *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1BB99A21A431E4E4B575E70C0EBBC13E1458A537_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_Reset_m129940529723E9498D4E5035FB917610DA5C8981 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// isPlaced = false;
		__this->set_isPlaced_19((bool)0);
		// foreach (var col in colliders) col.enabled = true;
		List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * L_0 = __this->get_colliders_11();
		NullCheck(L_0);
		Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  L_1;
		L_1 = List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57(L_0, /*hidden argument*/List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_0015:
		{
			// foreach (var col in colliders) col.enabled = true;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2;
			L_2 = Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_inline((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var);
			// foreach (var col in colliders) col.enabled = true;
			NullCheck(L_2);
			Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_2, (bool)1, /*hidden argument*/NULL);
		}

IL_0022:
		{
			// foreach (var col in colliders) col.enabled = true;
			bool L_3;
			L_3 = Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_0015;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// if (hasToolTip) toolTipSpawner.enabled = true;
		bool L_4 = __this->get_hasToolTip_18();
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		// if (hasToolTip) toolTipSpawner.enabled = true;
		ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * L_5 = __this->get_toolTipSpawner_10();
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// var trans = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		// trans.SetParent(originalParent);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_originalParent_13();
		NullCheck(L_7);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_7, L_8, /*hidden argument*/NULL);
		// trans.localPosition = originalPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_originalPosition_14();
		NullCheck(L_9);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_9, L_10, /*hidden argument*/NULL);
		// trans.localRotation = originalRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = __this->get_originalRotation_15();
		NullCheck(L_9);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MRTK.Tutorials.GettingStarted.PartAssemblyController::CheckPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PartAssemblyController_CheckPlacement_m058EC3FBCB6313D9C85FF551A4831601805F5A4D (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * L_0 = (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 *)il2cpp_codegen_object_new(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_il2cpp_TypeInfo_var);
		U3CCheckPlacementU3Ed__25__ctor_m1AE9DAAD6457E2BA3C8AF018FC38B348AEEAFD35(L_0, 0, /*hidden argument*/NULL);
		U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::add_OnResetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_add_OnResetPlacement_m1B5F77146056299BFF14210549A8A71139406319 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_1 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_0 = __this->get_OnResetPlacement_21();
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_2 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** L_5 = __this->get_address_of_OnResetPlacement_21();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_6 = V_2;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_7 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *>((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 **)L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_9 = V_0;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::remove_OnResetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_remove_OnResetPlacement_mDDD37DC93CE99FCE605DFCB9CBC37413364E0D03 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_1 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_0 = __this->get_OnResetPlacement_21();
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_2 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** L_5 = __this->get_address_of_OnResetPlacement_21();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_6 = V_2;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_7 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *>((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 **)L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_9 = V_0;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::add_OnSetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_add_OnSetPlacement_m5B9ED392DAD16C5B23E31DDEF213CFC470C8D1B6 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_1 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_0 = __this->get_OnSetPlacement_22();
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_2 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** L_5 = __this->get_address_of_OnSetPlacement_22();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_6 = V_2;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_7 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *>((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 **)L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_9 = V_0;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::remove_OnSetPlacement(MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_remove_OnSetPlacement_mA87246A60289C2E7B03E07D5248B7FFE9E533E3B (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_0 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_1 = NULL;
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * V_2 = NULL;
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_0 = __this->get_OnSetPlacement_22();
		V_0 = L_0;
	}

IL_0007:
	{
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_1 = V_0;
		V_1 = L_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_2 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)CastclassSealed((RuntimeObject*)L_4, PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155_il2cpp_TypeInfo_var));
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** L_5 = __this->get_address_of_OnSetPlacement_22();
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_6 = V_2;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_7 = V_1;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *>((PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 **)L_5, L_6, L_7);
		V_0 = L_8;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_9 = V_0;
		PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_9) == ((RuntimeObject*)(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController__ctor_m43D020771B20D09433D17616C90F0D19569F9D9E (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::set_IsPunEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_set_IsPunEnabled_m3F5768D83A150962864A1DF4E4A041A75E006B00 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => isPunEnabled = value;
		bool L_0 = ___value0;
		__this->set_isPunEnabled_6(L_0);
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_Start_mA284074B6E1D6E5C2EFEE25ED73B92718FD44DA5 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, const RuntimeMethod* method)
{
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_placementHints_5();
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		bool L_5 = __this->get_activeAtStart_4();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001d:
	{
		// foreach (var obj in placementHints) obj.SetActive(activeAtStart);
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::TogglePlacementHints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_TogglePlacementHints_mC6E69154176B5D87ECC700CC21DDF3AE3B79F0A9 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, const RuntimeMethod* method)
{
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * G_B3_0 = NULL;
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * G_B2_0 = NULL;
	{
		// if (isPunEnabled)
		bool L_0 = __this->get_isPunEnabled_6();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// OnTogglePlacementHints?.Invoke();
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_1 = __this->get_OnTogglePlacementHints_7();
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NullCheck(G_B3_0);
		PlacementHintsControllerDelegate_Invoke_mD8415531C38108E1B7B41AB3C5BE9ED938DE5BAA(G_B3_0, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		// Toggle();
		PlacementHintsController_Toggle_mED247D0E903D8499BE48BC9C0DF2EC3B94F3494B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_Toggle_mED247D0E903D8499BE48BC9C0DF2EC3B94F3494B (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, const RuntimeMethod* method)
{
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_placementHints_5();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0020;
	}

IL_000b:
	{
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4;
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_5, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		// foreach (var obj in placementHints) obj.SetActive(!obj.activeSelf);
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::add_OnTogglePlacementHints(MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_add_OnTogglePlacementHints_m74DE84CC6DD60CCD720BFB6797EFA9C145A040D8 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_0 = NULL;
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_1 = NULL;
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_2 = NULL;
	{
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_0 = __this->get_OnTogglePlacementHints_7();
		V_0 = L_0;
	}

IL_0007:
	{
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_1 = V_0;
		V_1 = L_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_2 = V_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)CastclassSealed((RuntimeObject*)L_4, PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87_il2cpp_TypeInfo_var));
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 ** L_5 = __this->get_address_of_OnTogglePlacementHints_7();
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_6 = V_2;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_7 = V_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *>((PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 **)L_5, L_6, L_7);
		V_0 = L_8;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_9 = V_0;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)L_9) == ((RuntimeObject*)(PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::remove_OnTogglePlacementHints(MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController_remove_OnTogglePlacementHints_m4DD9666380C389D70F6B9B9DA474147403E890E9 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_0 = NULL;
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_1 = NULL;
	PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * V_2 = NULL;
	{
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_0 = __this->get_OnTogglePlacementHints_7();
		V_0 = L_0;
	}

IL_0007:
	{
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_1 = V_0;
		V_1 = L_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_2 = V_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)CastclassSealed((RuntimeObject*)L_4, PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87_il2cpp_TypeInfo_var));
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 ** L_5 = __this->get_address_of_OnTogglePlacementHints_7();
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_6 = V_2;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_7 = V_1;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *>((PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 **)L_5, L_6, L_7);
		V_0 = L_8;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_9 = V_0;
		PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)L_9) == ((RuntimeObject*)(PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsController__ctor_m63F5AE600226FB6BEACE406120A542B3EB796634 (PlacementHintsController_t705A0244683A721236F3F5EA00041AC7EEA92EEC * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private bool activeAtStart = true;
		__this->set_activeAtStart_4((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RotateCube::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateCube_Start_m970D27ABDD962651A39BC262B839621BD84D578D (RotateCube_tC21316091B4E75D28FBC16262AAD7ED6E4B3BB77 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RotateCube::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateCube_Update_m05C2DBC61186074D98837430F141CEC603F82D5D (RotateCube_tC21316091B4E75D28FBC16262AAD7ED6E4B3BB77 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(Vector3.up * Time.deltaTime * 50.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, (50.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RotateCube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateCube__ctor_m95553A85652868D456F1632744913774CC92F0FF (RotateCube_tC21316091B4E75D28FBC16262AAD7ED6E4B3BB77 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityServer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServer_Start_m49576F5261B8E230751E429379874A0AE527EF07 (UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServer_ListenBackground_mB86692A555CFB017AACF287B2D3B935D05FFEC57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// formatter = new BinaryFormatter();
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_0 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_0, /*hidden argument*/NULL);
		__this->set_formatter_9(L_0);
		// Task.Factory.StartNew(ListenBackground);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * L_1;
		L_1 = Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline(/*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)UnityServer_ListenBackground_mB86692A555CFB017AACF287B2D3B935D05FFEC57_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
		L_3 = TaskFactory_StartNew_mBCFD0F15F2065CF30D925DCE96234FBBD37CF27B(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityServer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServer_Update_mA3C3F35CAAD45B17429AB849371FAA21A538C9B6 (UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormatter_t91AC8765DE85C135D6CA1042CEBF15007BCEFB01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (stream != null && stream.CanWrite)
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_0 = __this->get_stream_8();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_1 = __this->get_stream_8();
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_1);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// formatter.Serialize(stream, data);
		RuntimeObject* L_3 = __this->get_formatter_9();
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_4 = __this->get_stream_8();
		double L_5 = __this->get_data_4();
		double L_6 = L_5;
		RuntimeObject * L_7 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_3);
		InterfaceActionInvoker2< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject * >::Invoke(0 /* System.Void System.Runtime.Serialization.IFormatter::Serialize(System.IO.Stream,System.Object) */, IFormatter_t91AC8765DE85C135D6CA1042CEBF15007BCEFB01_il2cpp_TypeInfo_var, L_3, L_4, L_7);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UnityServer::ListenBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServer_ListenBackground_mB86692A555CFB017AACF287B2D3B935D05FFEC57 (UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053168EE1CE7A6612D4184BBD9562AD2C67C1271);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FEC9D9F41D87A0FE6A7D03CA21F54260383EE62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF12912AB2324C5799A437DAA95CB517E96479C87);
		s_Il2CppMethodInitialized = true;
	}
	TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * V_0 = NULL;
	{
		// Debug.Log("Starting TCP server..\n");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF12912AB2324C5799A437DAA95CB517E96479C87, /*hidden argument*/NULL);
		// serverIP = GetLocalIPAddress();
		String_t* L_0;
		L_0 = UnityServer_GetLocalIPAddress_m52B4ED917DB194C1B39DC1C869AAF239CD585357(__this, /*hidden argument*/NULL);
		__this->set_serverIP_5(L_0);
		// Debug.Log("IP: " + serverIP);
		String_t* L_1 = __this->get_serverIP_5();
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2FEC9D9F41D87A0FE6A7D03CA21F54260383EE62, L_1, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// Debug.Log("Port: " + serverPort + "\n");
		int32_t* L_3 = __this->get_address_of_serverPort_6();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral053168EE1CE7A6612D4184BBD9562AD2C67C1271, L_4, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// TcpListener listener = new TcpListener(IPAddress.Parse(serverIP), serverPort);
		String_t* L_6 = __this->get_serverIP_5();
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_7;
		L_7 = IPAddress_Parse_m49C413225AC75DA34D1663559818861CA34C3CB0(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_serverPort_6();
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_9 = (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B *)il2cpp_codegen_object_new(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B_il2cpp_TypeInfo_var);
		TcpListener__ctor_mD4633F7821C1F6412EFE88DB42F8A6C7E1A914F0(L_9, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// listener.Start();
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_10 = V_0;
		NullCheck(L_10);
		TcpListener_Start_m95F4F504E8BF63D90E857AF6C794AC25EF971C68(L_10, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// client = listener.AcceptTcpClient();
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_11 = V_0;
		NullCheck(L_11);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_12;
		L_12 = TcpListener_AcceptTcpClient_m53BD54B8278B2288877965A92644FD84BCD9D4A5(L_11, /*hidden argument*/NULL);
		__this->set_client_7(L_12);
		// stream = client.GetStream();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_13 = __this->get_client_7();
		NullCheck(L_13);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_14;
		L_14 = TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC(L_13, /*hidden argument*/NULL);
		__this->set_stream_8(L_14);
		// while (true)
		goto IL_0067;
	}
}
// System.String UnityServer::GetLocalIPAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityServer_GetLocalIPAddress_m52B4ED917DB194C1B39DC1C869AAF239CD585357 (UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0 * __this, const RuntimeMethod* method)
{
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_0 = NULL;
	int32_t V_1 = 0;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_2 = NULL;
	{
		// var host = Dns.GetHostEntry(Dns.GetHostName());
		String_t* L_0;
		L_0 = Dns_GetHostName_m8BF02B75F8EF9723179339212805C5BAF5C4B706(/*hidden argument*/NULL);
		IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * L_1;
		L_1 = Dns_GetHostEntry_m251BB12504C0277A9CCD2B33C5C9979CFAB4F6AD(L_0, /*hidden argument*/NULL);
		// foreach (var ip in host.AddressList)
		NullCheck(L_1);
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_2;
		L_2 = IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002c;
	}

IL_0014:
	{
		// foreach (var ip in host.AddressList)
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (ip.AddressFamily == AddressFamily.InterNetwork)
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0028;
		}
	}
	{
		// return ip.ToString();
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_9 = V_2;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		return L_10;
	}

IL_0028:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002c:
	{
		// foreach (var ip in host.AddressList)
		int32_t L_12 = V_1;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		// throw new Exception("No network adapters with an IPv4 address in the system!");
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3505CC67D4132D403A00F09BF5E8669B36253FEF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityServer_GetLocalIPAddress_m52B4ED917DB194C1B39DC1C869AAF239CD585357_RuntimeMethod_var)));
	}
}
// System.Void UnityServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServer__ctor_mBCDE2C242E2E652CF5143F4F3CE12D20953D09E8 (UnityServer_t79AE31514526E14E3D9DEE2A1BB5DC3056B3CFB0 * __this, const RuntimeMethod* method)
{
	{
		// public double data = 1.0;
		__this->set_data_4((1.0));
		// private int serverPort = 5050;
		__this->set_serverPort_6(((int32_t)5050));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate__ctor_m6DFCEE099C96781241186B1537B313641CC3A8AB (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_Invoke_mEC016D4928ADCA613702B28C1E3378F7EC29B58C (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExplodeViewControllerDelegate_BeginInvoke_m458C786F225088793798F9A79882A606822BD0B9 (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_EndInvoke_m1190D2F43012408A716B9FC790DEB913A85D9476 (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25__ctor_m1AE9DAAD6457E2BA3C8AF018FC38B348AEEAFD35 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25_System_IDisposable_Dispose_m5F0CAD7B8EEB902CEC60BA6283E5D2176899ECD0 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckPlacementU3Ed__25_MoveNext_mDF7F144AFC4007613EFED9BAC836382AE491AD0A (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!isPlaced)
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->get_isPlaced_19();
		if (L_6)
		{
			goto IL_0092;
		}
	}
	{
		// if (Vector3.Distance(transform.position, locationToPlace.position) > MinDistance &&
		//     Vector3.Distance(transform.position, locationToPlace.position) < MaxDistance)
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_7 = V_1;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10->get_locationToPlace_4();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_9, L_12, /*hidden argument*/NULL);
		if ((!(((float)L_13) > ((float)(0.00100000005f)))))
		{
			goto IL_001e;
		}
	}
	{
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_14 = V_1;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_17 = V_1;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = L_17->get_locationToPlace_4();
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20;
		L_20 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_16, L_19, /*hidden argument*/NULL);
		if ((!(((float)L_20) < ((float)(0.100000001f)))))
		{
			goto IL_001e;
		}
	}
	{
		// SetPlacement();
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_21 = V_1;
		NullCheck(L_21);
		PartAssemblyController_SetPlacement_mB6BDE1A16F74DF3B4950483F7C58E3201B0A0851(L_21, /*hidden argument*/NULL);
		// }
		goto IL_001e;
	}

IL_0092:
	{
		// else if (isPlaced)
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_22 = V_1;
		NullCheck(L_22);
		bool L_23 = L_22->get_isPlaced_19();
		if (!L_23)
		{
			goto IL_00eb;
		}
	}
	{
		// if (!(Vector3.Distance(transform.position, locationToPlace.position) > MinDistance)) continue;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_24 = V_1;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_27 = V_1;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = L_27->get_locationToPlace_4();
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		float L_30;
		L_30 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_26, L_29, /*hidden argument*/NULL);
		if ((!(((float)L_30) > ((float)(0.00100000005f)))))
		{
			goto IL_001e;
		}
	}
	{
		// var trans = transform;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_31 = V_1;
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_31, /*hidden argument*/NULL);
		// trans.position = locationToPlace.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = L_32;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_34 = V_1;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = L_34->get_locationToPlace_4();
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_33, L_36, /*hidden argument*/NULL);
		// trans.rotation = locationToPlace.rotation;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_37 = V_1;
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = L_37->get_locationToPlace_4();
		NullCheck(L_38);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_38, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_33, L_39, /*hidden argument*/NULL);
		// }
		goto IL_001e;
	}

IL_00eb:
	{
		// }
		return (bool)0;
	}
}
// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckPlacementU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA2770AE4D2AC80980A1982783D11A2A481D1F5AD (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m3B06BF13F7C5A5FD0544E0A77EF07BF84BEB6237 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m3B06BF13F7C5A5FD0544E0A77EF07BF84BEB6237_RuntimeMethod_var)));
	}
}
// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_get_Current_mF23A2B08C5CAD169D0663319DCDF005B7BF30371 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate__ctor_m1B455F877BBF4D8B34BAA0778ABFA1B0C8FB3C87 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_Invoke_m35EC047435BEF3AC833FE7F6FDED12C1D2FAF2F9 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PartAssemblyControllerDelegate_BeginInvoke_mE2B0F86102E0D5E6BCD5ADDF6FE25CC9FC8A06D2 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_EndInvoke_m3BC4B8B7B165CE27C98FCB26D91E4E7004F5DA92 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate__ctor_mC6033B0A83C28817C35AC67DB8440C7B75CA605B (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_Invoke_mD8415531C38108E1B7B41AB3C5BE9ED938DE5BAA (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlacementHintsControllerDelegate_BeginInvoke_m729BAD5B777CAC07017B397546C8485D026C1672 (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_EndInvoke_m5245DC13168B9F203E7495622C99EA9C6EC60327 (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * L_0 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_factory_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Position_m3F18DEDD4E5AE5AC464D7716A3AD50DEA7083B08_inline (MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_position_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F_inline (IPHostEntry_tD787E3A1E0F633AC5A7761921DE4DC2A8EA117AA * __this, const RuntimeMethod* method)
{
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_0 = __this->get_addressList_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
