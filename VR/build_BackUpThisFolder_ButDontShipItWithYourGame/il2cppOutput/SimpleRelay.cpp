#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Unity.Services.Relay.Models.Region>
struct IEnumerable_1_t92D621C321849A3DA518F081C4BE77A04B65C96B;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>
struct List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF;
// System.Collections.Generic.List`1<Unity.Services.Relay.Models.RelayServerEndpoint>
struct List_1_t2312067CBBF8C43EDBB74AEE23EC8CE452741A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>
struct Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>>
struct TaskFactory_1_t28F04D76AC66B710991A18E733AD317CC1360934;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Relay.Models.Allocation>
struct TaskFactory_1_t71911D19BDC8CCC1B4259616223540952640D028;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Relay.Models.JoinAllocation>
struct TaskFactory_1_tB8E1155F824A4E3EDE35919801D9EC3CBAD71ADE;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>>
struct Task_1_t9EA43CDB86186C0B6EC82C7943940B94C9048C25;
// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.Allocation>
struct Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615;
// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.JoinAllocation>
struct Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Unity.Services.Relay.Models.Region[]
struct RegionU5BU5D_t4F5A391AF5679709227E6647112FD433AD72DC4D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Unity.Services.Relay.Models.Allocation
struct Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Unity.Services.Authentication.IAuthenticationService
struct IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Services.Relay.IRelayService
struct IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// Unity.Services.Relay.Models.JoinAllocation
struct JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Unity.Services.Relay.Models.Region
struct Region_t8172769DB65850A4297B1E224084B92E63E49C22;
// Unity.Services.Relay.Models.RelayServer
struct RelayServer_t3EB847F796BBD0BE8103D521AD1DBB4FA60D4505;
// Unity.Services.Relay.RelayServiceException
struct RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SimpleRelay
struct SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// SimpleRelay/<OnAllocate>d__19
struct U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0;
// SimpleRelay/<OnJoin>d__22
struct U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8;
// SimpleRelay/<OnJoinCode>d__21
struct U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82;
// SimpleRelay/<OnRegion>d__18
struct U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A;
// SimpleRelay/<OnSignIn>d__17
struct U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF;
// SimpleRelay/<Start>d__15
struct U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral01A13C14C1391F00832F108C925A36F849B00A4E;
IL2CPP_EXTERN_C String_t* _stringLiteral0D474748CDCC8009816095D343D151B2D58D0CEE;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral21A5AE34BC66EE10D6626DDF02EC783C3816EB81;
IL2CPP_EXTERN_C String_t* _stringLiteral2FB5F1EA124B878254EBA479A3C38707B82068BD;
IL2CPP_EXTERN_C String_t* _stringLiteral53BA8F7726F677FAE0D4C886A7F8BA25B29E979D;
IL2CPP_EXTERN_C String_t* _stringLiteral584A4AAB2CCA6B32DA462E23026812692DE6594E;
IL2CPP_EXTERN_C String_t* _stringLiteral6300E3687F6182D5448B63A80B73AE2958460684;
IL2CPP_EXTERN_C String_t* _stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2;
IL2CPP_EXTERN_C String_t* _stringLiteral77AD363DA84A6C73353C052DF4B2247029FE99B5;
IL2CPP_EXTERN_C String_t* _stringLiteralBB8CAD8985C9BF8B83CD71BF70F6F99E1AA586A7;
IL2CPP_EXTERN_C String_t* _stringLiteralD0FA4833352F2788254AE46A2BA8918C909991EB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB16DAE0C3BC1C5068CCC20605D2F508FA303FF1;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_m6BE63D967EE6D6DE8B2A3005E5D612F6987D92DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_mB51225DB3B17DA225536B4EF376AE284E93721BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_m9F483D1EF556AC556490B504A86BD52DBDA2FB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223_TisU3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_m87B263D4A43C47AF2EE2DBBDD673757594DB5D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_m66900A9C14AA81D7912772D04A92F71F6A090B6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_m578559CC3156A4EC96B78A570F81B3569344D281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_mE5EB268DD93B97618AAA3C61727AF81A520F1121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_m6998CC6EA638C2CAA8A430F2E0C21B4614452955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_mCBF7131414A926A017CC43640571E7A31C526674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_m6E61F7E58C4855B07B2A4274F9A446F02F8AF202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_m8FDCC83297484258F27FD559F4D7024F2CBD4C47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_m15CEDB2114737D041846181F96A8793A97470FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisRegion_t8172769DB65850A4297B1E224084B92E63E49C22_mA9368BAF0B9A3460FBA4ED8F8F22D722E55D910E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF830EF344C86F84FC7A585F0D54CE9E6A567A63C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD63837911D863CF45681237C2C33AC0D4D5F4BFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8277DABC7C30CF5AE1522C8171545C576E44B852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDEE0BC0BC29F39656217F0C94BC4DA4588EB3B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFF7879EB32BCEFE0C34509B4CD8175CB05B726AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7CAC215B805475591AC49412A3AB546C057F65F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA257BBD44CFC946DB49704EA985384A7B2489AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3131A66B85AA8C16DE379EA32F3AE9D48D76FAF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1DDEA37FDA40B24DEA89CC4A0A41369DC5F94A96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleRelay_U3CUpdateUIU3Eb__16_0_m872063A57C20F9954F96FE739F8FB8E23B9F8879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m0D33C69F676613BE46EF2C371CC82AA1BAE5C8AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mF23A5CCE2F6EAD6A29D28080E2A0F98B803085D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m624249C9B5A42F8334515D3FED7E8E7715ACC4D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9BCB58486A87ECAF2CA0CE29F53313DE74420E52 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>
struct List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RegionU5BU5D_t4F5A391AF5679709227E6647112FD433AD72DC4D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RegionU5BU5D_t4F5A391AF5679709227E6647112FD433AD72DC4D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Unity.Services.Relay.Models.Region
struct Region_t8172769DB65850A4297B1E224084B92E63E49C22  : public RuntimeObject
{
	// System.String Unity.Services.Relay.Models.Region::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Services.Relay.Models.Region::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_1;
};

// Unity.Services.Authentication.SignInOptions
struct SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291  : public RuntimeObject
{
	// System.Boolean Unity.Services.Authentication.SignInOptions::<CreateAccount>k__BackingField
	bool ___U3CCreateAccountU3Ek__BackingField_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F  : public RuntimeObject
{
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Relay.Models.Region>
struct Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Region_t8172769DB65850A4297B1E224084B92E63E49C22* ____current_3;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>>
struct TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t9EA43CDB86186C0B6EC82C7943940B94C9048C25* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation>
struct TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation>
struct TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>>
struct Task_1_t9EA43CDB86186C0B6EC82C7943940B94C9048C25  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* ___m_result_38;
};

struct Task_1_t9EA43CDB86186C0B6EC82C7943940B94C9048C25_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t28F04D76AC66B710991A18E733AD317CC1360934* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.Allocation>
struct Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* ___m_result_38;
};

struct Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t71911D19BDC8CCC1B4259616223540952640D028* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.JoinAllocation>
struct Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* ___m_result_38;
};

struct Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tB8E1155F824A4E3EDE35919801D9EC3CBAD71ADE* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Guid
struct Guid_t 
{
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
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Unity.Services.Relay.Models.Allocation
struct Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430  : public RuntimeObject
{
	// System.Guid Unity.Services.Relay.Models.Allocation::<AllocationId>k__BackingField
	Guid_t ___U3CAllocationIdU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Unity.Services.Relay.Models.RelayServerEndpoint> Unity.Services.Relay.Models.Allocation::<ServerEndpoints>k__BackingField
	List_1_t2312067CBBF8C43EDBB74AEE23EC8CE452741A8D* ___U3CServerEndpointsU3Ek__BackingField_1;
	// Unity.Services.Relay.Models.RelayServer Unity.Services.Relay.Models.Allocation::<RelayServer>k__BackingField
	RelayServer_t3EB847F796BBD0BE8103D521AD1DBB4FA60D4505* ___U3CRelayServerU3Ek__BackingField_2;
	// System.Byte[] Unity.Services.Relay.Models.Allocation::<Key>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CKeyU3Ek__BackingField_3;
	// System.Byte[] Unity.Services.Relay.Models.Allocation::<ConnectionData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CConnectionDataU3Ek__BackingField_4;
	// System.Byte[] Unity.Services.Relay.Models.Allocation::<AllocationIdBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CAllocationIdBytesU3Ek__BackingField_5;
	// System.String Unity.Services.Relay.Models.Allocation::<Region>k__BackingField
	String_t* ___U3CRegionU3Ek__BackingField_6;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Unity.Services.Relay.Models.JoinAllocation
struct JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A  : public RuntimeObject
{
	// System.Guid Unity.Services.Relay.Models.JoinAllocation::<AllocationId>k__BackingField
	Guid_t ___U3CAllocationIdU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Unity.Services.Relay.Models.RelayServerEndpoint> Unity.Services.Relay.Models.JoinAllocation::<ServerEndpoints>k__BackingField
	List_1_t2312067CBBF8C43EDBB74AEE23EC8CE452741A8D* ___U3CServerEndpointsU3Ek__BackingField_1;
	// Unity.Services.Relay.Models.RelayServer Unity.Services.Relay.Models.JoinAllocation::<RelayServer>k__BackingField
	RelayServer_t3EB847F796BBD0BE8103D521AD1DBB4FA60D4505* ___U3CRelayServerU3Ek__BackingField_2;
	// System.Byte[] Unity.Services.Relay.Models.JoinAllocation::<Key>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CKeyU3Ek__BackingField_3;
	// System.Byte[] Unity.Services.Relay.Models.JoinAllocation::<ConnectionData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CConnectionDataU3Ek__BackingField_4;
	// System.Byte[] Unity.Services.Relay.Models.JoinAllocation::<AllocationIdBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CAllocationIdBytesU3Ek__BackingField_5;
	// System.String Unity.Services.Relay.Models.JoinAllocation::<Region>k__BackingField
	String_t* ___U3CRegionU3Ek__BackingField_6;
	// System.Byte[] Unity.Services.Relay.Models.JoinAllocation::<HostConnectionData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CHostConnectionDataU3Ek__BackingField_7;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00  : public Exception_t
{
	// System.Int32 Unity.Services.Core.RequestFailedException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// SimpleRelay/<OnAllocate>d__19
struct U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0  : public RuntimeObject
{
	// System.Int32 SimpleRelay/<OnAllocate>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder SimpleRelay/<OnAllocate>d__19::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// SimpleRelay SimpleRelay/<OnAllocate>d__19::<>4__this
	SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* ___U3CU3E4__this_2;
	// System.String SimpleRelay/<OnAllocate>d__19::<region>5__1
	String_t* ___U3CregionU3E5__1_3;
	// Unity.Services.Relay.Models.Allocation SimpleRelay/<OnAllocate>d__19::<allocation>5__2
	Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* ___U3CallocationU3E5__2_4;
	// Unity.Services.Relay.Models.Allocation SimpleRelay/<OnAllocate>d__19::<>s__3
	Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* ___U3CU3Es__3_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation> SimpleRelay/<OnAllocate>d__19::<>u__1
	TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 ___U3CU3Eu__1_6;
};

// SimpleRelay/<OnJoin>d__22
struct U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8  : public RuntimeObject
{
	// System.Int32 SimpleRelay/<OnJoin>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder SimpleRelay/<OnJoin>d__22::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// SimpleRelay SimpleRelay/<OnJoin>d__22::<>4__this
	SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* ___U3CU3E4__this_2;
	// Unity.Services.Relay.Models.JoinAllocation SimpleRelay/<OnJoin>d__22::<joinAllocation>5__1
	JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* ___U3CjoinAllocationU3E5__1_3;
	// Unity.Services.Relay.Models.JoinAllocation SimpleRelay/<OnJoin>d__22::<>s__2
	JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* ___U3CU3Es__2_4;
	// Unity.Services.Relay.RelayServiceException SimpleRelay/<OnJoin>d__22::<ex>5__3
	RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199* ___U3CexU3E5__3_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation> SimpleRelay/<OnJoin>d__22::<>u__1
	TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D ___U3CU3Eu__1_6;
};

// SimpleRelay/<OnJoinCode>d__21
struct U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82  : public RuntimeObject
{
	// System.Int32 SimpleRelay/<OnJoinCode>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder SimpleRelay/<OnJoinCode>d__21::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// SimpleRelay SimpleRelay/<OnJoinCode>d__21::<>4__this
	SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* ___U3CU3E4__this_2;
	// System.String SimpleRelay/<OnJoinCode>d__21::<>s__1
	String_t* ___U3CU3Es__1_3;
	// Unity.Services.Relay.RelayServiceException SimpleRelay/<OnJoinCode>d__21::<ex>5__2
	RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199* ___U3CexU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> SimpleRelay/<OnJoinCode>d__21::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_5;
};

// SimpleRelay/<OnRegion>d__18
struct U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A  : public RuntimeObject
{
	// System.Int32 SimpleRelay/<OnRegion>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder SimpleRelay/<OnRegion>d__18::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// SimpleRelay SimpleRelay/<OnRegion>d__18::<>4__this
	SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region> SimpleRelay/<OnRegion>d__18::<allRegions>5__1
	List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* ___U3CallRegionsU3E5__1_3;
	// System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region> SimpleRelay/<OnRegion>d__18::<>s__2
	List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* ___U3CU3Es__2_4;
	// System.Collections.Generic.List`1/Enumerator<Unity.Services.Relay.Models.Region> SimpleRelay/<OnRegion>d__18::<>s__3
	Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4 ___U3CU3Es__3_5;
	// Unity.Services.Relay.Models.Region SimpleRelay/<OnRegion>d__18::<region>5__4
	Region_t8172769DB65850A4297B1E224084B92E63E49C22* ___U3CregionU3E5__4_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>> SimpleRelay/<OnRegion>d__18::<>u__1
	TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223 ___U3CU3Eu__1_7;
};

// SimpleRelay/<OnSignIn>d__17
struct U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF  : public RuntimeObject
{
	// System.Int32 SimpleRelay/<OnSignIn>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder SimpleRelay/<OnSignIn>d__17::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// SimpleRelay SimpleRelay/<OnSignIn>d__17::<>4__this
	SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter SimpleRelay/<OnSignIn>d__17::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// SimpleRelay/<Start>d__15
struct U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D  : public RuntimeObject
{
	// System.Int32 SimpleRelay/<Start>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder SimpleRelay/<Start>d__15::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// SimpleRelay SimpleRelay/<Start>d__15::<>4__this
	SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter SimpleRelay/<Start>d__15::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>
struct Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Services.Relay.RelayServiceException
struct RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199  : public RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00
{
	// Unity.Services.Relay.RelayExceptionReason Unity.Services.Relay.RelayServiceException::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// SimpleRelay
struct SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text SimpleRelay::PlayerIdText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___PlayerIdText_4;
	// UnityEngine.UI.Dropdown SimpleRelay::RegionsDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___RegionsDropdown_5;
	// UnityEngine.UI.Text SimpleRelay::HostAllocationIdText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___HostAllocationIdText_6;
	// UnityEngine.UI.Text SimpleRelay::JoinCodeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___JoinCodeText_7;
	// UnityEngine.UI.Text SimpleRelay::PlayerAllocationIdText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___PlayerAllocationIdText_8;
	// UnityEngine.UI.InputField SimpleRelay::JoinCodeField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___JoinCodeField_9;
	// System.Guid SimpleRelay::hostAllocationId
	Guid_t ___hostAllocationId_10;
	// System.Guid SimpleRelay::playerAllocationId
	Guid_t ___playerAllocationId_11;
	// System.String SimpleRelay::allocationRegion
	String_t* ___allocationRegion_12;
	// System.String SimpleRelay::joinCode
	String_t* ___joinCode_13;
	// System.String SimpleRelay::playerId
	String_t* ___playerId_14;
	// System.String SimpleRelay::autoSelectRegionName
	String_t* ___autoSelectRegionName_15;
	// System.Int32 SimpleRelay::RegionAutoSelectIndex
	int32_t ___RegionAutoSelectIndex_16;
	// System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region> SimpleRelay::regions
	List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* ___regions_17;
	// System.Collections.Generic.List`1<System.String> SimpleRelay::regionOptions
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___regionOptions_18;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m39330AED229FA1BA70485D8A3995487EAF512FD4_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void SimpleRelay/<Start>d__15::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15__ctor_mAB715B926D21940AEAAE605B579A22BAA8898F6A (U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SimpleRelay/<Start>d__15>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_m15CEDB2114737D041846181F96A8793A97470FC0 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
}
// System.Int32 System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>::get_Count()
inline int32_t List_1_get_Count_m3131A66B85AA8C16DE379EA32F3AE9D48D76FAF0_inline (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Clear()
inline void List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_inline (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.UI.Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___options0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m7A84E959305036F80FCD7B6544C987F1B27784E8 (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___match0, method);
}
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void SimpleRelay/<OnSignIn>d__17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSignInU3Ed__17__ctor_m304DB405A0AC551974CBCDCAF991F545378D317A (U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SimpleRelay/<OnSignIn>d__17>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_m8FDCC83297484258F27FD559F4D7024F2CBD4C47 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
}
// System.Void SimpleRelay/<OnRegion>d__18::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnRegionU3Ed__18__ctor_m67D1BEB40B31F5E77489E202BD53DA39C1502442 (U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SimpleRelay/<OnRegion>d__18>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_m6E61F7E58C4855B07B2A4274F9A446F02F8AF202 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
}
// System.Void SimpleRelay/<OnAllocate>d__19::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAllocateU3Ed__19__ctor_mE056C1EFBFB4CF7CF520122414285BE1A4E632BE (U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SimpleRelay/<OnAllocate>d__19>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_mE5EB268DD93B97618AAA3C61727AF81A520F1121 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean System.Linq.Enumerable::Any<Unity.Services.Relay.Models.Region>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisRegion_t8172769DB65850A4297B1E224084B92E63E49C22_mA9368BAF0B9A3460FBA4ED8F8F22D722E55D910E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___source0, method);
}
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>::get_Item(System.Int32)
inline Region_t8172769DB65850A4297B1E224084B92E63E49C22* List_1_get_Item_m1DDEA37FDA40B24DEA89CC4A0A41369DC5F94A96 (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Region_t8172769DB65850A4297B1E224084B92E63E49C22* (*) (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String Unity.Services.Relay.Models.Region::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Id_m3B8F0B3F3D79AB330CBED83CBA294572122BF5AA_inline (Region_t8172769DB65850A4297B1E224084B92E63E49C22* __this, const RuntimeMethod* method) ;
// System.Void SimpleRelay/<OnJoinCode>d__21::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnJoinCodeU3Ed__21__ctor_mADEF9ADDE48A43F0F6C0DB6805BAFB420C623277 (U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SimpleRelay/<OnJoinCode>d__21>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_m6998CC6EA638C2CAA8A430F2E0C21B4614452955 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
}
// System.Void SimpleRelay/<OnJoin>d__22::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnJoinU3Ed__22__ctor_mFE9DE899657AA02B2FBAA94341B7AEB452E8B4E0 (U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<SimpleRelay/<OnJoin>d__22>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_mCBF7131414A926A017CC43640571E7A31C526674 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>::.ctor()
inline void List_1__ctor_mDA257BBD44CFC946DB49704EA985384A7B2489AC (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1 (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SimpleRelay/<Start>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_m578559CC3156A4EC96B78A570F81B3569344D281 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void SimpleRelay::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRelay_UpdateUI_mBD43C0A8BD58451BDDAE3AE7851570131F20A5EA (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Unity.Services.Authentication.IAuthenticationService Unity.Services.Authentication.AuthenticationService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SimpleRelay/<OnSignIn>d__17>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_m66900A9C14AA81D7912772D04A92F71F6A090B6D (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// Unity.Services.Relay.IRelayService Unity.Services.Relay.RelayService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RelayService_get_Instance_m6034E42B7046AFAEF11623931B56ADC3DBFF20AD (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>>::GetAwaiter()
inline TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223 Task_1_GetAwaiter_m624249C9B5A42F8334515D3FED7E8E7715ACC4D6 (Task_1_t9EA43CDB86186C0B6EC82C7943940B94C9048C25* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223 (*) (Task_1_t9EA43CDB86186C0B6EC82C7943940B94C9048C25*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mF23A5CCE2F6EAD6A29D28080E2A0F98B803085D6 (TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>>,SimpleRelay/<OnRegion>d__18>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223_TisU3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_m87B263D4A43C47AF2EE2DBBDD673757594DB5D10 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223* ___awaiter0, U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223*, U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m39330AED229FA1BA70485D8A3995487EAF512FD4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>>::GetResult()
inline List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* TaskAwaiter_1_GetResult_m0D33C69F676613BE46EF2C371CC82AA1BAE5C8AB (TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223* __this, const RuntimeMethod* method)
{
	return ((  List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* (*) (TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>::Clear()
inline void List_1_Clear_mFF7879EB32BCEFE0C34509B4CD8175CB05B726AF_inline (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>::GetEnumerator()
inline Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4 List_1_GetEnumerator_m7CAC215B805475591AC49412A3AB546C057F65F8 (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4 (*) (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Services.Relay.Models.Region>::Dispose()
inline void Enumerator_Dispose_mF830EF344C86F84FC7A585F0D54CE9E6A567A63C (Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Relay.Models.Region>::get_Current()
inline Region_t8172769DB65850A4297B1E224084B92E63E49C22* Enumerator_get_Current_m8277DABC7C30CF5AE1522C8171545C576E44B852_inline (Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4* __this, const RuntimeMethod* method)
{
	return ((  Region_t8172769DB65850A4297B1E224084B92E63E49C22* (*) (Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Unity.Services.Relay.Models.Region::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Description_mB9095EEFE0D61A84AFCB1B9947BE9E22136F8655_inline (Region_t8172769DB65850A4297B1E224084B92E63E49C22* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>::Add(T)
inline void List_1_Add_mDEE0BC0BC29F39656217F0C94BC4DA4588EB3B63_inline (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* __this, Region_t8172769DB65850A4297B1E224084B92E63E49C22* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*, Region_t8172769DB65850A4297B1E224084B92E63E49C22*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Relay.Models.Region>::MoveNext()
inline bool Enumerator_MoveNext_mD63837911D863CF45681237C2C33AC0D4D5F4BFA (Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String SimpleRelay::GetRegionOrQosDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleRelay_GetRegionOrQosDefault_m142197801244A642294611B71F6BD41FE99C3F4C (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.Allocation>::GetAwaiter()
inline TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659 (Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 (*) (Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833 (TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation>,SimpleRelay/<OnAllocate>d__19>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_m9F483D1EF556AC556490B504A86BD52DBDA2FB33 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064* ___awaiter0, U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064*, U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m39330AED229FA1BA70485D8A3995487EAF512FD4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation>::GetResult()
inline Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A (TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064* __this, const RuntimeMethod* method)
{
	return ((  Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* (*) (TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Guid Unity.Services.Relay.Models.Allocation::get_AllocationId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Allocation_get_AllocationId_mF3672B7F013E1E320C40C273C6ED9658874C3987_inline (Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Relay.Models.Allocation::get_Region()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Allocation_get_Region_m95FE20650E766F398F55847EA6347970DD24EA3E_inline (Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,SimpleRelay/<OnJoinCode>d__21>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_m6BE63D967EE6D6DE8B2A3005E5D612F6987D92DD (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___awaiter0, U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m39330AED229FA1BA70485D8A3995487EAF512FD4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.JoinAllocation>::GetAwaiter()
inline TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B (Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D (*) (Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5 (TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation>,SimpleRelay/<OnJoin>d__22>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_mB51225DB3B17DA225536B4EF376AE284E93721BE (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D* ___awaiter0, U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D*, U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m39330AED229FA1BA70485D8A3995487EAF512FD4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation>::GetResult()
inline JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F (TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D* __this, const RuntimeMethod* method)
{
	return ((  JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* (*) (TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Guid Unity.Services.Relay.Models.JoinAllocation::get_AllocationId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t JoinAllocation_get_AllocationId_m3E0A0DD0AC07DDBA08519B32CF77DCD30C69811F_inline (JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
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
// System.Void SimpleRelay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRelay_Start_mE11E2E13EEF76C85FCB47528795A223BEEFA7C11 (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_m15CEDB2114737D041846181F96A8793A97470FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D* V_0 = NULL;
	{
		U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D* L_0 = (U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D*)il2cpp_codegen_object_new(U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__15__ctor_mAB715B926D21940AEAAE605B579A22BAA8898F6A(L_0, NULL);
		V_0 = L_0;
		U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D* L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_m15CEDB2114737D041846181F96A8793A97470FC0(L_6, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_m15CEDB2114737D041846181F96A8793A97470FC0_RuntimeMethod_var);
		return;
	}
}
// System.Void SimpleRelay::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRelay_UpdateUI_mBD43C0A8BD58451BDDAE3AE7851570131F20A5EA (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3131A66B85AA8C16DE379EA32F3AE9D48D76FAF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleRelay_U3CUpdateUIU3Eb__16_0_m872063A57C20F9954F96FE739F8FB8E23B9F8879_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* G_B2_0 = NULL;
	List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* G_B1_0 = NULL;
	{
		// PlayerIdText.text = playerId;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___PlayerIdText_4;
		String_t* L_1 = __this->___playerId_14;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// RegionsDropdown.interactable = regions.Count > 0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___RegionsDropdown_5;
		List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* L_3 = __this->___regions_17;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m3131A66B85AA8C16DE379EA32F3AE9D48D76FAF0_inline(L_3, List_1_get_Count_m3131A66B85AA8C16DE379EA32F3AE9D48D76FAF0_RuntimeMethod_var);
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0), NULL);
		// RegionsDropdown.options?.Clear();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___RegionsDropdown_5;
		NullCheck(L_5);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_6;
		L_6 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_5, NULL);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_003e;
		}
	}
	{
		goto IL_0044;
	}

IL_003e:
	{
		NullCheck(G_B2_0);
		List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_inline(G_B2_0, List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var);
	}

IL_0044:
	{
		// RegionsDropdown.AddOptions(new List<string>{autoSelectRegionName});  // index 0 is always auto-select (use QoS)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_8 = __this->___RegionsDropdown_5;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_9, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = L_9;
		String_t* L_11 = __this->___autoSelectRegionName_15;
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, L_11, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		NullCheck(L_8);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_8, L_10, NULL);
		// RegionsDropdown.AddOptions(regionOptions);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_12 = __this->___RegionsDropdown_5;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->___regionOptions_18;
		NullCheck(L_12);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_12, L_13, NULL);
		// if (!String.IsNullOrEmpty(allocationRegion))
		String_t* L_14 = __this->___allocationRegion_12;
		bool L_15;
		L_15 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_14, NULL);
		V_0 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_00e4;
		}
	}
	{
		// if (regionOptions.Count == 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = __this->___regionOptions_18;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_17, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_00bb;
		}
	}
	{
		// RegionsDropdown.AddOptions(new List<String>(new[] { allocationRegion }));
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_20 = __this->___RegionsDropdown_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		String_t* L_23 = __this->___allocationRegion_12;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_23);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_24, (RuntimeObject*)L_22, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		NullCheck(L_20);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_20, L_24, NULL);
	}

IL_00bb:
	{
		// RegionsDropdown.value = RegionsDropdown.options.FindIndex(option => option.text == allocationRegion);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_25 = __this->___RegionsDropdown_5;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_26 = __this->___RegionsDropdown_5;
		NullCheck(L_26);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_27;
		L_27 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_26, NULL);
		Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* L_28 = (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*)il2cpp_codegen_object_new(Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Predicate_1__ctor_m7A84E959305036F80FCD7B6544C987F1B27784E8(L_28, __this, (intptr_t)((void*)SimpleRelay_U3CUpdateUIU3Eb__16_0_m872063A57C20F9954F96FE739F8FB8E23B9F8879_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		int32_t L_29;
		L_29 = List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767(L_27, L_28, List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var);
		NullCheck(L_25);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_25, L_29, NULL);
	}

IL_00e4:
	{
		// HostAllocationIdText.text = hostAllocationId.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___HostAllocationIdText_6;
		Guid_t* L_31 = (&__this->___hostAllocationId_10);
		String_t* L_32;
		L_32 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C(L_31, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_32);
		// JoinCodeText.text = joinCode;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = __this->___JoinCodeText_7;
		String_t* L_34 = __this->___joinCode_13;
		NullCheck(L_33);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_34);
		// PlayerAllocationIdText.text = playerAllocationId.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___PlayerAllocationIdText_8;
		Guid_t* L_36 = (&__this->___playerAllocationId_11);
		String_t* L_37;
		L_37 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C(L_36, NULL);
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_37);
		// }
		return;
	}
}
// System.Void SimpleRelay::OnSignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRelay_OnSignIn_m28E686D04BD44FC653B6CF44EB7FD342A97BF69E (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_m8FDCC83297484258F27FD559F4D7024F2CBD4C47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF* V_0 = NULL;
	{
		U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF* L_0 = (U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF*)il2cpp_codegen_object_new(U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnSignInU3Ed__17__ctor_m304DB405A0AC551974CBCDCAF991F545378D317A(L_0, NULL);
		V_0 = L_0;
		U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF* L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_m8FDCC83297484258F27FD559F4D7024F2CBD4C47(L_6, (&V_0), AsyncVoidMethodBuilder_Start_TisU3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_m8FDCC83297484258F27FD559F4D7024F2CBD4C47_RuntimeMethod_var);
		return;
	}
}
// System.Void SimpleRelay::OnRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRelay_OnRegion_m8F913AE07E9BCBE17059E65F658FF4BEC6A6B4BB (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_m6E61F7E58C4855B07B2A4274F9A446F02F8AF202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A* V_0 = NULL;
	{
		U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A* L_0 = (U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A*)il2cpp_codegen_object_new(U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnRegionU3Ed__18__ctor_m67D1BEB40B31F5E77489E202BD53DA39C1502442(L_0, NULL);
		V_0 = L_0;
		U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A* L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_m6E61F7E58C4855B07B2A4274F9A446F02F8AF202(L_6, (&V_0), AsyncVoidMethodBuilder_Start_TisU3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_m6E61F7E58C4855B07B2A4274F9A446F02F8AF202_RuntimeMethod_var);
		return;
	}
}
// System.Void SimpleRelay::OnAllocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRelay_OnAllocate_mB1D2D1169A92EE071C483F198586BA33C7288B1F (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_mE5EB268DD93B97618AAA3C61727AF81A520F1121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0* V_0 = NULL;
	{
		U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0* L_0 = (U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0*)il2cpp_codegen_object_new(U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnAllocateU3Ed__19__ctor_mE056C1EFBFB4CF7CF520122414285BE1A4E632BE(L_0, NULL);
		V_0 = L_0;
		U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0* L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_mE5EB268DD93B97618AAA3C61727AF81A520F1121(L_6, (&V_0), AsyncVoidMethodBuilder_Start_TisU3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_mE5EB268DD93B97618AAA3C61727AF81A520F1121_RuntimeMethod_var);
		return;
	}
}
// System.String SimpleRelay::GetRegionOrQosDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleRelay_GetRegionOrQosDefault_m142197801244A642294611B71F6BD41FE99C3F4C (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisRegion_t8172769DB65850A4297B1E224084B92E63E49C22_mA9368BAF0B9A3460FBA4ED8F8F22D722E55D910E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1DDEA37FDA40B24DEA89CC4A0A41369DC5F94A96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (!regions.Any() || RegionsDropdown.value == RegionAutoSelectIndex)
		List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* L_0 = __this->___regions_17;
		bool L_1;
		L_1 = Enumerable_Any_TisRegion_t8172769DB65850A4297B1E224084B92E63E49C22_mA9368BAF0B9A3460FBA4ED8F8F22D722E55D910E(L_0, Enumerable_Any_TisRegion_t8172769DB65850A4297B1E224084B92E63E49C22_mA9368BAF0B9A3460FBA4ED8F8F22D722E55D910E_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___RegionsDropdown_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C(L_2, NULL);
		int32_t L_4 = __this->___RegionAutoSelectIndex_16;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		V_1 = (String_t*)NULL;
		goto IL_004d;
	}

IL_002d:
	{
		// return regions[RegionsDropdown.value - 1].Id;
		List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* L_6 = __this->___regions_17;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = __this->___RegionsDropdown_5;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C(L_7, NULL);
		NullCheck(L_6);
		Region_t8172769DB65850A4297B1E224084B92E63E49C22* L_9;
		L_9 = List_1_get_Item_m1DDEA37FDA40B24DEA89CC4A0A41369DC5F94A96(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), List_1_get_Item_m1DDEA37FDA40B24DEA89CC4A0A41369DC5F94A96_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Region_get_Id_m3B8F0B3F3D79AB330CBED83CBA294572122BF5AA_inline(L_9, NULL);
		V_1 = L_10;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.Void SimpleRelay::OnJoinCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRelay_OnJoinCode_m5DBA3E8F0EDA3911113B445D4E82EF28F1A8EA8A (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_m6998CC6EA638C2CAA8A430F2E0C21B4614452955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82* V_0 = NULL;
	{
		U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82* L_0 = (U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82*)il2cpp_codegen_object_new(U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnJoinCodeU3Ed__21__ctor_mADEF9ADDE48A43F0F6C0DB6805BAFB420C623277(L_0, NULL);
		V_0 = L_0;
		U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82* L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_m6998CC6EA638C2CAA8A430F2E0C21B4614452955(L_6, (&V_0), AsyncVoidMethodBuilder_Start_TisU3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_m6998CC6EA638C2CAA8A430F2E0C21B4614452955_RuntimeMethod_var);
		return;
	}
}
// System.Void SimpleRelay::OnJoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRelay_OnJoin_m0EF4D912FFDD9D7C89D2E5E4F789C35DD236B204 (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_mCBF7131414A926A017CC43640571E7A31C526674_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8* V_0 = NULL;
	{
		U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8* L_0 = (U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8*)il2cpp_codegen_object_new(U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnJoinU3Ed__22__ctor_mFE9DE899657AA02B2FBAA94341B7AEB452E8B4E0(L_0, NULL);
		V_0 = L_0;
		U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8* L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_mCBF7131414A926A017CC43640571E7A31C526674(L_6, (&V_0), AsyncVoidMethodBuilder_Start_TisU3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_mCBF7131414A926A017CC43640571E7A31C526674_RuntimeMethod_var);
		return;
	}
}
// System.Void SimpleRelay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRelay__ctor_m29350B4B1188A554DE97B8FAFAE8561954072B7B (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDA257BBD44CFC946DB49704EA985384A7B2489AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53BA8F7726F677FAE0D4C886A7F8BA25B29E979D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB8CAD8985C9BF8B83CD71BF70F6F99E1AA586A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string allocationRegion = "";
		__this->___allocationRegion_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allocationRegion_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string joinCode = "n/a";
		__this->___joinCode_13 = _stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joinCode_13), (void*)_stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2);
		// private string playerId = "Not signed in";
		__this->___playerId_14 = _stringLiteral53BA8F7726F677FAE0D4C886A7F8BA25B29E979D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerId_14), (void*)_stringLiteral53BA8F7726F677FAE0D4C886A7F8BA25B29E979D);
		// private string autoSelectRegionName = "auto-select (QoS)";
		__this->___autoSelectRegionName_15 = _stringLiteralBB8CAD8985C9BF8B83CD71BF70F6F99E1AA586A7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___autoSelectRegionName_15), (void*)_stringLiteralBB8CAD8985C9BF8B83CD71BF70F6F99E1AA586A7);
		// private int RegionAutoSelectIndex = 0;
		__this->___RegionAutoSelectIndex_16 = 0;
		// private List<Region> regions = new List<Region>();
		List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* L_0 = (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*)il2cpp_codegen_object_new(List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDA257BBD44CFC946DB49704EA985384A7B2489AC(L_0, List_1__ctor_mDA257BBD44CFC946DB49704EA985384A7B2489AC_RuntimeMethod_var);
		__this->___regions_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___regions_17), (void*)L_0);
		// private List<string> regionOptions = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___regionOptions_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___regionOptions_18), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean SimpleRelay::<UpdateUI>b__16_0(UnityEngine.UI.Dropdown/OptionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleRelay_U3CUpdateUIU3Eb__16_0_m872063A57C20F9954F96FE739F8FB8E23B9F8879 (SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* __this, OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___option0, const RuntimeMethod* method) 
{
	{
		// RegionsDropdown.value = RegionsDropdown.options.FindIndex(option => option.text == allocationRegion);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_0 = ___option0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1(L_0, NULL);
		String_t* L_2 = __this->___allocationRegion_12;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void SimpleRelay/<Start>d__15::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15__ctor_mAB715B926D21940AEAAE605B579A22BAA8898F6A (U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SimpleRelay/<Start>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15_MoveNext_m9347C037FA6BB5376DE012481D225FA58034B913 (U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_m578559CC3156A4EC96B78A570F81B3569344D281_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0047_1;
		}

IL_000e_1:
		{
			// await UnityServices.InitializeAsync();
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
			L_2 = UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A(NULL);
			NullCheck(L_2);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_3;
			L_3 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_2, NULL);
			V_1 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_4)
			{
				goto IL_0063_1;
			}
		}
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->___U3CU3E1__state_0 = L_5;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6 = V_1;
			__this->___U3CU3Eu__1_3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_7 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_m578559CC3156A4EC96B78A570F81B3569344D281(L_7, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D_m578559CC3156A4EC96B78A570F81B3569344D281_RuntimeMethod_var);
			goto IL_00a5;
		}

IL_0047_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8 = __this->___U3CU3Eu__1_3;
			V_1 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_9 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
		}

IL_0063_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			// UpdateUI();
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_11 = __this->___U3CU3E4__this_2;
			NullCheck(L_11);
			SimpleRelay_UpdateUI_mBD43C0A8BD58451BDDAE3AE7851570131F20A5EA(L_11, NULL);
			goto IL_0091;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_12 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_13 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_12, L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a5;
	}// end catch (depth: 1)

IL_0091:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_14 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_14, NULL);
	}

IL_00a5:
	{
		return;
	}
}
// System.Void SimpleRelay/<Start>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15_SetStateMachine_mFA9F41BCB484A8A211498B2C11E639A71E5F2D9B (U3CStartU3Ed__15_tDC8A26DC4EAC811A59164F40FD750D67E1A1BA2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void SimpleRelay/<OnSignIn>d__17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSignInU3Ed__17__ctor_m304DB405A0AC551974CBCDCAF991F545378D317A (U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SimpleRelay/<OnSignIn>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSignInU3Ed__17_MoveNext_m7781DD141B47233FBA1ACAB845A4E2FD3004590C (U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_m66900A9C14AA81D7912772D04A92F71F6A090B6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6300E3687F6182D5448B63A80B73AE2958460684);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0058_1;
		}

IL_000e_1:
		{
			// Debug.Log("Signing On");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6300E3687F6182D5448B63A80B73AE2958460684, NULL);
			// await AuthenticationService.Instance.SignInAnonymouslyAsync();
			RuntimeObject* L_2;
			L_2 = AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1(NULL);
			NullCheck(L_2);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
			L_3 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* >::Invoke(16 /* System.Threading.Tasks.Task Unity.Services.Authentication.IAuthenticationService::SignInAnonymouslyAsync(Unity.Services.Authentication.SignInOptions) */, IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var, L_2, (SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291*)NULL);
			NullCheck(L_3);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_4;
			L_4 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_3, NULL);
			V_1 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_5)
			{
				goto IL_0074_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___U3CU3E1__state_0 = L_6;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_7 = V_1;
			__this->___U3CU3Eu__1_3 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_8 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_m66900A9C14AA81D7912772D04A92F71F6A090B6D(L_8, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF_m66900A9C14AA81D7912772D04A92F71F6A090B6D_RuntimeMethod_var);
			goto IL_00cb;
		}

IL_0058_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = __this->___U3CU3Eu__1_3;
			V_1 = L_9;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_10 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0074_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			// playerId = AuthenticationService.Instance.PlayerId;
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_12 = __this->___U3CU3E4__this_2;
			RuntimeObject* L_13;
			L_13 = AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1(NULL);
			NullCheck(L_13);
			String_t* L_14;
			L_14 = InterfaceFuncInvoker0< String_t* >::Invoke(12 /* System.String Unity.Services.Authentication.IAuthenticationService::get_PlayerId() */, IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var, L_13);
			NullCheck(L_12);
			L_12->___playerId_14 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&L_12->___playerId_14), (void*)L_14);
			// UpdateUI();
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_15 = __this->___U3CU3E4__this_2;
			NullCheck(L_15);
			SimpleRelay_UpdateUI_mBD43C0A8BD58451BDDAE3AE7851570131F20A5EA(L_15, NULL);
			goto IL_00b7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009f;
		}
		throw e;
	}

CATCH_009f:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_16, L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cb;
	}// end catch (depth: 1)

IL_00b7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_18 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_18, NULL);
	}

IL_00cb:
	{
		return;
	}
}
// System.Void SimpleRelay/<OnSignIn>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSignInU3Ed__17_SetStateMachine_m2F624A1210018D7B31332B97A6732CE9462A503A (U3COnSignInU3Ed__17_t13D42B672DCAB59158B68B008D2407D453A554AF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void SimpleRelay/<OnRegion>d__18::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnRegionU3Ed__18__ctor_m67D1BEB40B31F5E77489E202BD53DA39C1502442 (U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SimpleRelay/<OnRegion>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnRegionU3Ed__18_MoveNext_m71E61BCC09ECB60991390301F743615FD8E4D77B (U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223_TisU3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_m87B263D4A43C47AF2EE2DBBDD673757594DB5D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF830EF344C86F84FC7A585F0D54CE9E6A567A63C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD63837911D863CF45681237C2C33AC0D4D5F4BFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8277DABC7C30CF5AE1522C8171545C576E44B852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDEE0BC0BC29F39656217F0C94BC4DA4588EB3B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFF7879EB32BCEFE0C34509B4CD8175CB05B726AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7CAC215B805475591AC49412A3AB546C057F65F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m0D33C69F676613BE46EF2C371CC82AA1BAE5C8AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mF23A5CCE2F6EAD6A29D28080E2A0F98B803085D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m624249C9B5A42F8334515D3FED7E8E7715ACC4D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral584A4AAB2CCA6B32DA462E23026812692DE6594E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_005a_1;
		}

IL_000e_1:
		{
			// Debug.Log("Host - Getting regions.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral584A4AAB2CCA6B32DA462E23026812692DE6594E, NULL);
			// var allRegions = await RelayService.Instance.ListRegionsAsync();
			RuntimeObject* L_2;
			L_2 = RelayService_get_Instance_m6034E42B7046AFAEF11623931B56ADC3DBFF20AD(NULL);
			NullCheck(L_2);
			Task_1_t9EA43CDB86186C0B6EC82C7943940B94C9048C25* L_3;
			L_3 = InterfaceFuncInvoker0< Task_1_t9EA43CDB86186C0B6EC82C7943940B94C9048C25* >::Invoke(3 /* System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Relay.Models.Region>> Unity.Services.Relay.IRelayService::ListRegionsAsync() */, IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var, L_2);
			NullCheck(L_3);
			TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223 L_4;
			L_4 = Task_1_GetAwaiter_m624249C9B5A42F8334515D3FED7E8E7715ACC4D6(L_3, Task_1_GetAwaiter_m624249C9B5A42F8334515D3FED7E8E7715ACC4D6_RuntimeMethod_var);
			V_1 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_1_get_IsCompleted_mF23A5CCE2F6EAD6A29D28080E2A0F98B803085D6((&V_1), TaskAwaiter_1_get_IsCompleted_mF23A5CCE2F6EAD6A29D28080E2A0F98B803085D6_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0076_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___U3CU3E1__state_0 = L_6;
			TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223 L_7 = V_1;
			__this->___U3CU3Eu__1_7 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_8 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223_TisU3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_m87B263D4A43C47AF2EE2DBBDD673757594DB5D10(L_8, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223_TisU3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A_m87B263D4A43C47AF2EE2DBBDD673757594DB5D10_RuntimeMethod_var);
			goto IL_01b9;
		}

IL_005a_1:
		{
			TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223 L_9 = __this->___U3CU3Eu__1_7;
			V_1 = L_9;
			TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223* L_10 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_tE2D47EDFA7C55174A8E4E70A4C0BA8A6939E0223));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0076_1:
		{
			List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* L_12;
			L_12 = TaskAwaiter_1_GetResult_m0D33C69F676613BE46EF2C371CC82AA1BAE5C8AB((&V_1), TaskAwaiter_1_GetResult_m0D33C69F676613BE46EF2C371CC82AA1BAE5C8AB_RuntimeMethod_var);
			__this->___U3CU3Es__2_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_4), (void*)L_12);
			List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* L_13 = __this->___U3CU3Es__2_4;
			__this->___U3CallRegionsU3E5__1_3 = L_13;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallRegionsU3E5__1_3), (void*)L_13);
			__this->___U3CU3Es__2_4 = (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_4), (void*)(List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*)NULL);
			// regions.Clear();
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_14 = __this->___U3CU3E4__this_2;
			NullCheck(L_14);
			List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* L_15 = L_14->___regions_17;
			NullCheck(L_15);
			List_1_Clear_mFF7879EB32BCEFE0C34509B4CD8175CB05B726AF_inline(L_15, List_1_Clear_mFF7879EB32BCEFE0C34509B4CD8175CB05B726AF_RuntimeMethod_var);
			// regionOptions.Clear();
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_16 = __this->___U3CU3E4__this_2;
			NullCheck(L_16);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = L_16->___regionOptions_18;
			NullCheck(L_17);
			List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_17, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
			// foreach (var region in allRegions)
			List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* L_18 = __this->___U3CallRegionsU3E5__1_3;
			NullCheck(L_18);
			Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4 L_19;
			L_19 = List_1_GetEnumerator_m7CAC215B805475591AC49412A3AB546C057F65F8(L_18, List_1_GetEnumerator_m7CAC215B805475591AC49412A3AB546C057F65F8_RuntimeMethod_var);
			__this->___U3CU3Es__3_5 = L_19;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__3_5))->____list_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__3_5))->____current_3), (void*)NULL);
			#endif
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_014e_1:
				{// begin finally (depth: 2)
					{
						int32_t L_20 = V_0;
						if ((((int32_t)L_20) >= ((int32_t)0)))
						{
							goto IL_0164_1;
						}
					}
					{
						Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4* L_21 = (&__this->___U3CU3Es__3_5);
						Enumerator_Dispose_mF830EF344C86F84FC7A585F0D54CE9E6A567A63C(L_21, Enumerator_Dispose_mF830EF344C86F84FC7A585F0D54CE9E6A567A63C_RuntimeMethod_var);
					}

IL_0164_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_013f_2;
				}

IL_00cc_2:
				{
					// foreach (var region in allRegions)
					Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4* L_22 = (&__this->___U3CU3Es__3_5);
					Region_t8172769DB65850A4297B1E224084B92E63E49C22* L_23;
					L_23 = Enumerator_get_Current_m8277DABC7C30CF5AE1522C8171545C576E44B852_inline(L_22, Enumerator_get_Current_m8277DABC7C30CF5AE1522C8171545C576E44B852_RuntimeMethod_var);
					__this->___U3CregionU3E5__4_6 = L_23;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CregionU3E5__4_6), (void*)L_23);
					// Debug.Log(region.Id + ": " + region.Description);
					Region_t8172769DB65850A4297B1E224084B92E63E49C22* L_24 = __this->___U3CregionU3E5__4_6;
					NullCheck(L_24);
					String_t* L_25;
					L_25 = Region_get_Id_m3B8F0B3F3D79AB330CBED83CBA294572122BF5AA_inline(L_24, NULL);
					Region_t8172769DB65850A4297B1E224084B92E63E49C22* L_26 = __this->___U3CregionU3E5__4_6;
					NullCheck(L_26);
					String_t* L_27;
					L_27 = Region_get_Description_mB9095EEFE0D61A84AFCB1B9947BE9E22136F8655_inline(L_26, NULL);
					String_t* L_28;
					L_28 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_25, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_27, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_28, NULL);
					// regionOptions.Add(region.Id);
					SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_29 = __this->___U3CU3E4__this_2;
					NullCheck(L_29);
					List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_30 = L_29->___regionOptions_18;
					Region_t8172769DB65850A4297B1E224084B92E63E49C22* L_31 = __this->___U3CregionU3E5__4_6;
					NullCheck(L_31);
					String_t* L_32;
					L_32 = Region_get_Id_m3B8F0B3F3D79AB330CBED83CBA294572122BF5AA_inline(L_31, NULL);
					NullCheck(L_30);
					List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_30, L_32, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
					// regions.Add(region);
					SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_33 = __this->___U3CU3E4__this_2;
					NullCheck(L_33);
					List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF* L_34 = L_33->___regions_17;
					Region_t8172769DB65850A4297B1E224084B92E63E49C22* L_35 = __this->___U3CregionU3E5__4_6;
					NullCheck(L_34);
					List_1_Add_mDEE0BC0BC29F39656217F0C94BC4DA4588EB3B63_inline(L_34, L_35, List_1_Add_mDEE0BC0BC29F39656217F0C94BC4DA4588EB3B63_RuntimeMethod_var);
					__this->___U3CregionU3E5__4_6 = (Region_t8172769DB65850A4297B1E224084B92E63E49C22*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CregionU3E5__4_6), (void*)(Region_t8172769DB65850A4297B1E224084B92E63E49C22*)NULL);
				}

IL_013f_2:
				{
					// foreach (var region in allRegions)
					Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4* L_36 = (&__this->___U3CU3Es__3_5);
					bool L_37;
					L_37 = Enumerator_MoveNext_mD63837911D863CF45681237C2C33AC0D4D5F4BFA(L_36, Enumerator_MoveNext_mD63837911D863CF45681237C2C33AC0D4D5F4BFA_RuntimeMethod_var);
					if (L_37)
					{
						goto IL_00cc_2;
					}
				}
				{
					goto IL_0165_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0165_1:
		{
			Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4* L_38 = (&__this->___U3CU3Es__3_5);
			il2cpp_codegen_initobj(L_38, sizeof(Enumerator_t8546010708880D0D79D96B2E22D661B86D0353A4));
			// UpdateUI();
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_39 = __this->___U3CU3E4__this_2;
			NullCheck(L_39);
			SimpleRelay_UpdateUI_mBD43C0A8BD58451BDDAE3AE7851570131F20A5EA(L_39, NULL);
			goto IL_019e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_017f;
		}
		throw e;
	}

CATCH_017f:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CallRegionsU3E5__1_3 = (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallRegionsU3E5__1_3), (void*)(List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_40 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_41 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_40, L_41, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b9;
	}// end catch (depth: 1)

IL_019e:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CallRegionsU3E5__1_3 = (List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallRegionsU3E5__1_3), (void*)(List_1_tDCF1E8D495EC3802AF7326575AF3416A95214ECF*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_42 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_42, NULL);
	}

IL_01b9:
	{
		return;
	}
}
// System.Void SimpleRelay/<OnRegion>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnRegionU3Ed__18_SetStateMachine_m1581E64B4A540B3A9B3E280EB04D4AA121C9BED9 (U3COnRegionU3Ed__18_t7E70B990B5177889578AEBBCB0E9ECA1383FEA4A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void SimpleRelay/<OnAllocate>d__19::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAllocateU3Ed__19__ctor_mE056C1EFBFB4CF7CF520122414285BE1A4E632BE (U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SimpleRelay/<OnAllocate>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAllocateU3Ed__19_MoveNext_mD70517C80B54258F7058908913DA31EEAD38C266 (U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_m9F483D1EF556AC556490B504A86BD52DBDA2FB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01A13C14C1391F00832F108C925A36F849B00A4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21A5AE34BC66EE10D6626DDF02EC783C3816EB81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB16DAE0C3BC1C5068CCC20605D2F508FA303FF1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_009a_1;
		}

IL_0011_1:
		{
			// Debug.Log("Host - Creating an allocation.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral21A5AE34BC66EE10D6626DDF02EC783C3816EB81, NULL);
			// string region = GetRegionOrQosDefault();
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			String_t* L_3;
			L_3 = SimpleRelay_GetRegionOrQosDefault_m142197801244A642294611B71F6BD41FE99C3F4C(L_2, NULL);
			__this->___U3CregionU3E5__1_3 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CregionU3E5__1_3), (void*)L_3);
			// Debug.Log($"Chosen region is: {region ?? autoSelectRegionName}");
			String_t* L_4 = __this->___U3CregionU3E5__1_3;
			String_t* L_5 = L_4;
			G_B5_0 = L_5;
			G_B5_1 = _stringLiteral01A13C14C1391F00832F108C925A36F849B00A4E;
			if (L_5)
			{
				G_B6_0 = L_5;
				G_B6_1 = _stringLiteral01A13C14C1391F00832F108C925A36F849B00A4E;
				goto IL_0048_1;
			}
		}
		{
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_6 = __this->___U3CU3E4__this_2;
			NullCheck(L_6);
			String_t* L_7 = L_6->___autoSelectRegionName_15;
			G_B6_0 = L_7;
			G_B6_1 = G_B5_1;
		}

IL_0048_1:
		{
			String_t* L_8;
			L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_1, G_B6_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
			// Allocation allocation = await RelayService.Instance.CreateAllocationAsync(4, region);
			RuntimeObject* L_9;
			L_9 = RelayService_get_Instance_m6034E42B7046AFAEF11623931B56ADC3DBFF20AD(NULL);
			String_t* L_10 = __this->___U3CregionU3E5__1_3;
			NullCheck(L_9);
			Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* L_11;
			L_11 = InterfaceFuncInvoker2< Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615*, int32_t, String_t* >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.Allocation> Unity.Services.Relay.IRelayService::CreateAllocationAsync(System.Int32,System.String) */, IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var, L_9, 4, L_10);
			NullCheck(L_11);
			TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 L_12;
			L_12 = Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659(L_11, Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659_RuntimeMethod_var);
			V_1 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833((&V_1), TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_00b6_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 L_15 = V_1;
			__this->___U3CU3Eu__1_6 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_m9F483D1EF556AC556490B504A86BD52DBDA2FB33(L_16, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0_m9F483D1EF556AC556490B504A86BD52DBDA2FB33_RuntimeMethod_var);
			goto IL_0183;
		}

IL_009a_1:
		{
			TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 L_17 = __this->___U3CU3Eu__1_6;
			V_1 = L_17;
			TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064* L_18 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_00b6_1:
		{
			Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_20;
			L_20 = TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A((&V_1), TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A_RuntimeMethod_var);
			__this->___U3CU3Es__3_5 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)L_20);
			Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_21 = __this->___U3CU3Es__3_5;
			__this->___U3CallocationU3E5__2_4 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallocationU3E5__2_4), (void*)L_21);
			__this->___U3CU3Es__3_5 = (Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)(Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430*)NULL);
			// hostAllocationId = allocation.AllocationId;
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_22 = __this->___U3CU3E4__this_2;
			Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_23 = __this->___U3CallocationU3E5__2_4;
			NullCheck(L_23);
			Guid_t L_24;
			L_24 = Allocation_get_AllocationId_mF3672B7F013E1E320C40C273C6ED9658874C3987_inline(L_23, NULL);
			NullCheck(L_22);
			L_22->___hostAllocationId_10 = L_24;
			// allocationRegion = allocation.Region;
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_25 = __this->___U3CU3E4__this_2;
			Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_26 = __this->___U3CallocationU3E5__2_4;
			NullCheck(L_26);
			String_t* L_27;
			L_27 = Allocation_get_Region_m95FE20650E766F398F55847EA6347970DD24EA3E_inline(L_26, NULL);
			NullCheck(L_25);
			L_25->___allocationRegion_12 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&L_25->___allocationRegion_12), (void*)L_27);
			// Debug.Log($"Host Allocation ID: {hostAllocationId}, region: {allocationRegion}");
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_28 = __this->___U3CU3E4__this_2;
			NullCheck(L_28);
			Guid_t L_29 = L_28->___hostAllocationId_10;
			Guid_t L_30 = L_29;
			RuntimeObject* L_31 = Box(Guid_t_il2cpp_TypeInfo_var, &L_30);
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_32 = __this->___U3CU3E4__this_2;
			NullCheck(L_32);
			String_t* L_33 = L_32->___allocationRegion_12;
			String_t* L_34;
			L_34 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFB16DAE0C3BC1C5068CCC20605D2F508FA303FF1, L_31, L_33, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_34, NULL);
			// UpdateUI();
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_35 = __this->___U3CU3E4__this_2;
			NullCheck(L_35);
			SimpleRelay_UpdateUI_mBD43C0A8BD58451BDDAE3AE7851570131F20A5EA(L_35, NULL);
			goto IL_0161;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013b;
		}
		throw e;
	}

CATCH_013b:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CregionU3E5__1_3 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CregionU3E5__1_3), (void*)(String_t*)NULL);
		__this->___U3CallocationU3E5__2_4 = (Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallocationU3E5__2_4), (void*)(Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_36 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_37 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_36, L_37, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0183;
	}// end catch (depth: 1)

IL_0161:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CregionU3E5__1_3 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CregionU3E5__1_3), (void*)(String_t*)NULL);
		__this->___U3CallocationU3E5__2_4 = (Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallocationU3E5__2_4), (void*)(Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_38 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_38, NULL);
	}

IL_0183:
	{
		return;
	}
}
// System.Void SimpleRelay/<OnAllocate>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAllocateU3Ed__19_SetStateMachine_mBE478E8932CD4EA7E6FD87CAD34CEAE832A78508 (U3COnAllocateU3Ed__19_t63865055794C7469D2C22FA5DC6F680C1FE6BFA0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void SimpleRelay/<OnJoinCode>d__21::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnJoinCodeU3Ed__21__ctor_mADEF9ADDE48A43F0F6C0DB6805BAFB420C623277 (U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SimpleRelay/<OnJoinCode>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnJoinCodeU3Ed__21_MoveNext_m2B1A6DA5285B8917339008F2FA90802ACCAB415C (U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_m6BE63D967EE6D6DE8B2A3005E5D612F6987D92DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FB5F1EA124B878254EBA479A3C38707B82068BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0FA4833352F2788254AE46A2BA8918C909991EB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82* V_2 = NULL;
	RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_001a_1;
		}

IL_000e_1:
		{
			// Debug.Log("Host - Getting a join code for my allocation. I would share that join code with the other players so they can join my session.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD0FA4833352F2788254AE46A2BA8918C909991EB, NULL);
		}

IL_001a_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0020_2;
				}
			}
			{
				goto IL_0022_2;
			}

IL_0020_2:
			{
				goto IL_006e_2;
			}

IL_0022_2:
			{
				// joinCode = await RelayService.Instance.GetJoinCodeAsync(hostAllocationId);
				RuntimeObject* L_3;
				L_3 = RelayService_get_Instance_m6034E42B7046AFAEF11623931B56ADC3DBFF20AD(NULL);
				SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_4 = __this->___U3CU3E4__this_2;
				NullCheck(L_4);
				Guid_t L_5 = L_4->___hostAllocationId_10;
				NullCheck(L_3);
				Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_6;
				L_6 = InterfaceFuncInvoker1< Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, Guid_t >::Invoke(1 /* System.Threading.Tasks.Task`1<System.String> Unity.Services.Relay.IRelayService::GetJoinCodeAsync(System.Guid) */, IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var, L_3, L_5);
				NullCheck(L_6);
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_7;
				L_7 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_6, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
				V_1 = L_7;
				bool L_8;
				L_8 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_1), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_008a_2;
				}
			}
			{
				int32_t L_9 = 0;
				V_0 = L_9;
				__this->___U3CU3E1__state_0 = L_9;
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_10 = V_1;
				__this->___U3CU3Eu__1_5 = L_10;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				V_2 = __this;
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_11 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_m6BE63D967EE6D6DE8B2A3005E5D612F6987D92DD(L_11, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82_m6BE63D967EE6D6DE8B2A3005E5D612F6987D92DD_RuntimeMethod_var);
				goto IL_013b;
			}

IL_006e_2:
			{
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_12 = __this->___U3CU3Eu__1_5;
				V_1 = L_12;
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_13 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
				int32_t L_14 = (-1);
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
			}

IL_008a_2:
			{
				String_t* L_15;
				L_15 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_1), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
				__this->___U3CU3Es__1_3 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_3), (void*)L_15);
				SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_16 = __this->___U3CU3E4__this_2;
				String_t* L_17 = __this->___U3CU3Es__1_3;
				NullCheck(L_16);
				L_16->___joinCode_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&L_16->___joinCode_13), (void*)L_17);
				__this->___U3CU3Es__1_3 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_3), (void*)(String_t*)NULL);
				// Debug.Log("Host - Got join code: " + joinCode);
				SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_18 = __this->___U3CU3E4__this_2;
				NullCheck(L_18);
				String_t* L_19 = L_18->___joinCode_13;
				String_t* L_20;
				L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2FB5F1EA124B878254EBA479A3C38707B82068BD, L_19, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
				goto IL_00ff_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00cd_1;
			}
			throw e;
		}

CATCH_00cd_1:
		{// begin catch(Unity.Services.Relay.RelayServiceException)
			// catch (RelayServiceException ex)
			V_3 = ((RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199*)IL2CPP_GET_ACTIVE_EXCEPTION(RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199*));
			RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199* L_21 = V_3;
			__this->___U3CexU3E5__2_4 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__2_4), (void*)L_21);
			// Debug.LogError(ex.Message + "\n" + ex.StackTrace);
			RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199* L_22 = __this->___U3CexU3E5__2_4;
			NullCheck(L_22);
			String_t* L_23;
			L_23 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_22);
			RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199* L_24 = __this->___U3CexU3E5__2_4;
			NullCheck(L_24);
			String_t* L_25;
			L_25 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_StackTrace() */, L_24);
			String_t* L_26;
			L_26 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_25, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_26, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ff_1;
		}// end catch (depth: 2)

IL_00ff_1:
		{
			// UpdateUI();
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_27 = __this->___U3CU3E4__this_2;
			NullCheck(L_27);
			SimpleRelay_UpdateUI_mBD43C0A8BD58451BDDAE3AE7851570131F20A5EA(L_27, NULL);
			goto IL_0127;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010d;
		}
		throw e;
	}

CATCH_010d:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_28 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_29 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_28, L_29, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_013b;
	}// end catch (depth: 1)

IL_0127:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_30 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_30, NULL);
	}

IL_013b:
	{
		return;
	}
}
// System.Void SimpleRelay/<OnJoinCode>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnJoinCodeU3Ed__21_SetStateMachine_m6375F03E0668D5A4DD53A00589F5DC9BB50D0572 (U3COnJoinCodeU3Ed__21_t3AC3BE0ACD889AF6D5A48A2B41FB41B622D6DA82* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void SimpleRelay/<OnJoin>d__22::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnJoinU3Ed__22__ctor_mFE9DE899657AA02B2FBAA94341B7AEB452E8B4E0 (U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SimpleRelay/<OnJoin>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnJoinU3Ed__22_MoveNext_m7BB1F9759170E1AE0D78F4720A218A949D0DB3F7 (U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_mB51225DB3B17DA225536B4EF376AE284E93721BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D474748CDCC8009816095D343D151B2D58D0CEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77AD363DA84A6C73353C052DF4B2247029FE99B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8* V_2 = NULL;
	RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0034_1;
		}

IL_000e_1:
		{
			// Debug.Log($"Client - Joining host allocation using join code {JoinCodeField.text}.");
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = L_2->___JoinCodeField_9;
			NullCheck(L_3);
			String_t* L_4;
			L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_3, NULL);
			String_t* L_5;
			L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0D474748CDCC8009816095D343D151B2D58D0CEE, L_4, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		}

IL_0034_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_003a_2;
				}
			}
			{
				goto IL_003c_2;
			}

IL_003a_2:
			{
				goto IL_008d_2;
			}

IL_003c_2:
			{
				// var joinAllocation = await RelayService.Instance.JoinAllocationAsync(JoinCodeField.text);
				RuntimeObject* L_7;
				L_7 = RelayService_get_Instance_m6034E42B7046AFAEF11623931B56ADC3DBFF20AD(NULL);
				SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_8 = __this->___U3CU3E4__this_2;
				NullCheck(L_8);
				InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = L_8->___JoinCodeField_9;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_9, NULL);
				NullCheck(L_7);
				Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* L_11;
				L_11 = InterfaceFuncInvoker1< Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC*, String_t* >::Invoke(2 /* System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.JoinAllocation> Unity.Services.Relay.IRelayService::JoinAllocationAsync(System.String) */, IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var, L_7, L_10);
				NullCheck(L_11);
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D L_12;
				L_12 = Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B(L_11, Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B_RuntimeMethod_var);
				V_1 = L_12;
				bool L_13;
				L_13 = TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5((&V_1), TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00a9_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D L_15 = V_1;
				__this->___U3CU3Eu__1_6 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
				V_2 = __this;
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_mB51225DB3B17DA225536B4EF376AE284E93721BE(L_16, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8_mB51225DB3B17DA225536B4EF376AE284E93721BE_RuntimeMethod_var);
				goto IL_017d;
			}

IL_008d_2:
			{
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D L_17 = __this->___U3CU3Eu__1_6;
				V_1 = L_17;
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D* L_18 = (&__this->___U3CU3Eu__1_6);
				il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_00a9_2:
			{
				JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* L_20;
				L_20 = TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F((&V_1), TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F_RuntimeMethod_var);
				__this->___U3CU3Es__2_4 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_4), (void*)L_20);
				JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* L_21 = __this->___U3CU3Es__2_4;
				__this->___U3CjoinAllocationU3E5__1_3 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjoinAllocationU3E5__1_3), (void*)L_21);
				__this->___U3CU3Es__2_4 = (JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_4), (void*)(JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A*)NULL);
				// playerAllocationId = joinAllocation.AllocationId;
				SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_22 = __this->___U3CU3E4__this_2;
				JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* L_23 = __this->___U3CjoinAllocationU3E5__1_3;
				NullCheck(L_23);
				Guid_t L_24;
				L_24 = JoinAllocation_get_AllocationId_m3E0A0DD0AC07DDBA08519B32CF77DCD30C69811F_inline(L_23, NULL);
				NullCheck(L_22);
				L_22->___playerAllocationId_11 = L_24;
				// Debug.Log("Client Allocation ID: " + playerAllocationId.ToString());
				SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_25 = __this->___U3CU3E4__this_2;
				NullCheck(L_25);
				Guid_t* L_26 = (&L_25->___playerAllocationId_11);
				String_t* L_27;
				L_27 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C(L_26, NULL);
				String_t* L_28;
				L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral77AD363DA84A6C73353C052DF4B2247029FE99B5, L_27, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_28, NULL);
				__this->___U3CjoinAllocationU3E5__1_3 = (JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjoinAllocationU3E5__1_3), (void*)(JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A*)NULL);
				goto IL_0141_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_010f_1;
			}
			throw e;
		}

CATCH_010f_1:
		{// begin catch(Unity.Services.Relay.RelayServiceException)
			// catch (RelayServiceException ex)
			V_3 = ((RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199*)IL2CPP_GET_ACTIVE_EXCEPTION(RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199*));
			RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199* L_29 = V_3;
			__this->___U3CexU3E5__3_5 = L_29;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__3_5), (void*)L_29);
			// Debug.LogError(ex.Message + "\n" + ex.StackTrace);
			RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199* L_30 = __this->___U3CexU3E5__3_5;
			NullCheck(L_30);
			String_t* L_31;
			L_31 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_30);
			RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199* L_32 = __this->___U3CexU3E5__3_5;
			NullCheck(L_32);
			String_t* L_33;
			L_33 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_StackTrace() */, L_32);
			String_t* L_34;
			L_34 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_33, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_34, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0141_1;
		}// end catch (depth: 2)

IL_0141_1:
		{
			// UpdateUI();
			SimpleRelay_t5DF7CFAB59F5961BFB13ACB6DDEFDF155A0D46FB* L_35 = __this->___U3CU3E4__this_2;
			NullCheck(L_35);
			SimpleRelay_UpdateUI_mBD43C0A8BD58451BDDAE3AE7851570131F20A5EA(L_35, NULL);
			goto IL_0169;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_014f;
		}
		throw e;
	}

CATCH_014f:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_36 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_37 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_36, L_37, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_017d;
	}// end catch (depth: 1)

IL_0169:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_38 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_38, NULL);
	}

IL_017d:
	{
		return;
	}
}
// System.Void SimpleRelay/<OnJoin>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnJoinU3Ed__22_SetStateMachine_m1DF7AFBA364F7DFB06FD3E299DC886E12798F169 (U3COnJoinU3Ed__22_t94C3C40E45F92D2C7AEBE34FBDE406A4C1ACB7A8* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Id_m3B8F0B3F3D79AB330CBED83CBA294572122BF5AA_inline (Region_t8172769DB65850A4297B1E224084B92E63E49C22* __this, const RuntimeMethod* method) 
{
	{
		// public string Id{ get; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Description_mB9095EEFE0D61A84AFCB1B9947BE9E22136F8655_inline (Region_t8172769DB65850A4297B1E224084B92E63E49C22* __this, const RuntimeMethod* method) 
{
	{
		// public string Description{ get; }
		String_t* L_0 = __this->___U3CDescriptionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Allocation_get_AllocationId_mF3672B7F013E1E320C40C273C6ED9658874C3987_inline (Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* __this, const RuntimeMethod* method) 
{
	{
		// public System.Guid AllocationId{ get; }
		Guid_t L_0 = __this->___U3CAllocationIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Allocation_get_Region_m95FE20650E766F398F55847EA6347970DD24EA3E_inline (Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* __this, const RuntimeMethod* method) 
{
	{
		// public string Region{ get; }
		String_t* L_0 = __this->___U3CRegionU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t JoinAllocation_get_AllocationId_m3E0A0DD0AC07DDBA08519B32CF77DCD30C69811F_inline (JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* __this, const RuntimeMethod* method) 
{
	{
		// public System.Guid AllocationId{ get; }
		Guid_t L_0 = __this->___U3CAllocationIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
