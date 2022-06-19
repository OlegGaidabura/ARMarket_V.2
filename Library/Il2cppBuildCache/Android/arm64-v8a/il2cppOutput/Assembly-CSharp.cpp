#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>
struct Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0D7774CBEE7827744440205CF327276346298BD3;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Sprite>
struct KeyCollection_t53F5497143F09947914563DA625139636D768FAA;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<Model>
struct List_1_t870A276983448F5860BD04A1B217087C58F71CA9;
// System.Collections.Generic.List`1<ModelName>
struct List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_tAE84735071B78277703DB9996DE2E5C4456317C5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Sprite>
struct ValueCollection_t52CC7E487FA7D0F114AADF3213052650ED356702;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GameObject>[]
struct EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Sprite>[]
struct EntryU5BU5D_t8E31B5AB3E55D4A57FD7343F1CF5AD23F212F26A;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Model[]
struct ModelU5BU5D_t38519ABA10732B511BD62BBC471BE49F1175F8DE;
// ModelName[]
struct ModelNameU5BU5D_tFBCE47164A0A972F76540CE1B95416C7EF07B267;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ARPlacemente
struct ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3;
// AcceptAllCertificatesSignedWithASpecificPublicKey
struct AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.AssetBundle
struct AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// InstantiateBlock
struct InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// JsonArray
struct JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Model
struct Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3;
// ModelName
struct ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A;
// ModelsContainer
struct ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Threading.Mutex
struct Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// RotateSlider
struct RotateSlider_t99CBE9B6BF140367070F66FD2E019423977A6788;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TextureScale
struct TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// WebClient
struct WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// InstantiateBlock/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// TextureScale/ThreadData
struct ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A;

IL2CPP_EXTERN_C RuntimeClass* ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01DABAEA1038CE94C68EC1934C99F3FAE1140A8B;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0F55A3C2AA2BCC9E0915B06806995BE11A35FDC0;
IL2CPP_EXTERN_C String_t* _stringLiteral5ECC919903D2DD4C68EF56FAF041FEF024AB3E50;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral804AE67BCBC7117847629258D7AC2F17D94527D9;
IL2CPP_EXTERN_C String_t* _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9;
IL2CPP_EXTERN_C String_t* _stringLiteral9B29F50BBF760FB8A957DA3A28B3A4A4E29ED6A0;
IL2CPP_EXTERN_C String_t* _stringLiteralB59B44731EA69DAEEA77A27D27FEEB5479325B82;
IL2CPP_EXTERN_C String_t* _stringLiteralB7078D33C2A9D11DB80AA9070C372F5677BBAB79;
IL2CPP_EXTERN_C String_t* _stringLiteralBA3216124D377523ADC283D9C29B47790F6D5839;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAD0E775C667A0F97729CA515E4E9AA3E12C554;
IL2CPP_EXTERN_C String_t* _stringLiteralC072AC4DE4E35912B5F0AEE9CFEDA10AD224FBDC;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE37EE53DA49C672C6A121DD86793F800129D6449;
IL2CPP_EXTERN_C String_t* _stringLiteralE7F669514B29CCC7885A94671929CF9656906564;
IL2CPP_EXTERN_C const RuntimeMethod* ARPlacemente_Update_m5D406E764F914541BA0198C9BD049311AD165CC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_mBC3BD1B6408DE56E3204718A2C32322051408000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_m490D805FCB3252F22F774022B982F39019B0F0F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_mB287AE9B6FE521D83D8451DDCFD01FAE0CC42ED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m87F5EABDD4E8ACD63D9C795B26FFD2340923E866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_mF9B226FF6174553DD9DDEDE3BE5C6FB996E8DD0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_m24CF8751D071F731181F414484846708D927AA64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m1C3CF23E0C97E266B55A1A5DDDB81238230F6783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_m4DD63793C18DA06302A3682E484D83C37D6775BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m97023CDF699845937B60AE8D20C727F6C7ED726C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m74A10C19AD420EAD8CB421C484EE63501985E018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m91C7214CAD77724AD4FE720D63B104B36FF34A1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBBF36701EFA0270EA9E653A818DA663C6240AE52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA49802F179570EEF637F4C0C01097D8612957556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m91EC1610D4E2B7B204C3976A153B7D18FDE0B708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m519F964D26066BCC627EE11996766EC8DF6587D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4B512A8595D0D2687B35674DC2663825023070C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisInstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B_m30F9B9BE01F9895577F390EF74E7DD97D016268A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisModel_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3_mA785070F9F5ABA6C5DBCFC2276920E482168BB80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m8A0BE3E4A8DA437230E6FE6E553BD482586250CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_m44EA63B15DE385E2957744D7AD17C24D2188FAAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m144F637C05E409AFEE7DF8F181DDEE48716672B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD1B388B56D39750B3DBBD9E61CF2AD64E6E86182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFB6F2451E4FDD679E1EA161B27E29F1DC4E9B5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m29F7B988F9ED1EF7F0FEF4BEF4F4559A956C3092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m196F69700C4EF7BF4681F9174F4A64CB8BFC6123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAA479BD8AD731B1E955E4DE0EFECA470C0A1C172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m6A902A704FB4C6D5065587BC64EA71B2213114A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RotateSlider_SliderUpdate_m5ACAF7160BD8D68A8033279AFBCDD175B0AD340C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CCreateBlockU3Eb__0_mA804A003832755FA7C98242C6533B95EA58615BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

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


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___entries_1)); }
	inline EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___keys_7)); }
	inline KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___values_8)); }
	inline ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>
struct Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8E31B5AB3E55D4A57FD7343F1CF5AD23F212F26A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t53F5497143F09947914563DA625139636D768FAA * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t52CC7E487FA7D0F114AADF3213052650ED356702 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D, ___entries_1)); }
	inline EntryU5BU5D_t8E31B5AB3E55D4A57FD7343F1CF5AD23F212F26A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8E31B5AB3E55D4A57FD7343F1CF5AD23F212F26A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8E31B5AB3E55D4A57FD7343F1CF5AD23F212F26A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D, ___keys_7)); }
	inline KeyCollection_t53F5497143F09947914563DA625139636D768FAA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t53F5497143F09947914563DA625139636D768FAA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t53F5497143F09947914563DA625139636D768FAA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D, ___values_8)); }
	inline ValueCollection_t52CC7E487FA7D0F114AADF3213052650ED356702 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t52CC7E487FA7D0F114AADF3213052650ED356702 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t52CC7E487FA7D0F114AADF3213052650ED356702 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____items_1)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__items_1() const { return ____items_1; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields, ____emptyArray_5)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Model>
struct List_1_t870A276983448F5860BD04A1B217087C58F71CA9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ModelU5BU5D_t38519ABA10732B511BD62BBC471BE49F1175F8DE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t870A276983448F5860BD04A1B217087C58F71CA9, ____items_1)); }
	inline ModelU5BU5D_t38519ABA10732B511BD62BBC471BE49F1175F8DE* get__items_1() const { return ____items_1; }
	inline ModelU5BU5D_t38519ABA10732B511BD62BBC471BE49F1175F8DE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ModelU5BU5D_t38519ABA10732B511BD62BBC471BE49F1175F8DE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t870A276983448F5860BD04A1B217087C58F71CA9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t870A276983448F5860BD04A1B217087C58F71CA9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t870A276983448F5860BD04A1B217087C58F71CA9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t870A276983448F5860BD04A1B217087C58F71CA9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ModelU5BU5D_t38519ABA10732B511BD62BBC471BE49F1175F8DE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t870A276983448F5860BD04A1B217087C58F71CA9_StaticFields, ____emptyArray_5)); }
	inline ModelU5BU5D_t38519ABA10732B511BD62BBC471BE49F1175F8DE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ModelU5BU5D_t38519ABA10732B511BD62BBC471BE49F1175F8DE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ModelU5BU5D_t38519ABA10732B511BD62BBC471BE49F1175F8DE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ModelName>
struct List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ModelNameU5BU5D_tFBCE47164A0A972F76540CE1B95416C7EF07B267* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C, ____items_1)); }
	inline ModelNameU5BU5D_tFBCE47164A0A972F76540CE1B95416C7EF07B267* get__items_1() const { return ____items_1; }
	inline ModelNameU5BU5D_tFBCE47164A0A972F76540CE1B95416C7EF07B267** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ModelNameU5BU5D_tFBCE47164A0A972F76540CE1B95416C7EF07B267* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ModelNameU5BU5D_tFBCE47164A0A972F76540CE1B95416C7EF07B267* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C_StaticFields, ____emptyArray_5)); }
	inline ModelNameU5BU5D_tFBCE47164A0A972F76540CE1B95416C7EF07B267* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ModelNameU5BU5D_tFBCE47164A0A972F76540CE1B95416C7EF07B267** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ModelNameU5BU5D_tFBCE47164A0A972F76540CE1B95416C7EF07B267* value)
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

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// JsonArray
struct JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15  : public RuntimeObject
{
public:
	// System.String JsonArray::json
	String_t* ___json_0;
	// System.Collections.Generic.List`1<ModelName> JsonArray::names
	List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * ___names_1;

public:
	inline static int32_t get_offset_of_json_0() { return static_cast<int32_t>(offsetof(JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15, ___json_0)); }
	inline String_t* get_json_0() const { return ___json_0; }
	inline String_t** get_address_of_json_0() { return &___json_0; }
	inline void set_json_0(String_t* value)
	{
		___json_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_0), (void*)value);
	}

	inline static int32_t get_offset_of_names_1() { return static_cast<int32_t>(offsetof(JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15, ___names_1)); }
	inline List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * get_names_1() const { return ___names_1; }
	inline List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C ** get_address_of_names_1() { return &___names_1; }
	inline void set_names_1(List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * value)
	{
		___names_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___names_1), (void*)value);
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

// ModelName
struct ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A  : public RuntimeObject
{
public:
	// System.String ModelName::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String ModelName::<Plane>k__BackingField
	String_t* ___U3CPlaneU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlaneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A, ___U3CPlaneU3Ek__BackingField_1)); }
	inline String_t* get_U3CPlaneU3Ek__BackingField_1() const { return ___U3CPlaneU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPlaneU3Ek__BackingField_1() { return &___U3CPlaneU3Ek__BackingField_1; }
	inline void set_U3CPlaneU3Ek__BackingField_1(String_t* value)
	{
		___U3CPlaneU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlaneU3Ek__BackingField_1), (void*)value);
	}
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


// TextureScale
struct TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6  : public RuntimeObject
{
public:

public:
};

struct TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields
{
public:
	// UnityEngine.Color[] TextureScale::texColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___texColors_0;
	// UnityEngine.Color[] TextureScale::newColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___newColors_1;
	// System.Int32 TextureScale::w
	int32_t ___w_2;
	// System.Single TextureScale::ratioX
	float ___ratioX_3;
	// System.Single TextureScale::ratioY
	float ___ratioY_4;
	// System.Int32 TextureScale::w2
	int32_t ___w2_5;
	// System.Int32 TextureScale::finishCount
	int32_t ___finishCount_6;
	// System.Threading.Mutex TextureScale::mutex
	Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * ___mutex_7;

public:
	inline static int32_t get_offset_of_texColors_0() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___texColors_0)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_texColors_0() const { return ___texColors_0; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_texColors_0() { return &___texColors_0; }
	inline void set_texColors_0(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___texColors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texColors_0), (void*)value);
	}

	inline static int32_t get_offset_of_newColors_1() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___newColors_1)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_newColors_1() const { return ___newColors_1; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_newColors_1() { return &___newColors_1; }
	inline void set_newColors_1(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___newColors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newColors_1), (void*)value);
	}

	inline static int32_t get_offset_of_w_2() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___w_2)); }
	inline int32_t get_w_2() const { return ___w_2; }
	inline int32_t* get_address_of_w_2() { return &___w_2; }
	inline void set_w_2(int32_t value)
	{
		___w_2 = value;
	}

	inline static int32_t get_offset_of_ratioX_3() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___ratioX_3)); }
	inline float get_ratioX_3() const { return ___ratioX_3; }
	inline float* get_address_of_ratioX_3() { return &___ratioX_3; }
	inline void set_ratioX_3(float value)
	{
		___ratioX_3 = value;
	}

	inline static int32_t get_offset_of_ratioY_4() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___ratioY_4)); }
	inline float get_ratioY_4() const { return ___ratioY_4; }
	inline float* get_address_of_ratioY_4() { return &___ratioY_4; }
	inline void set_ratioY_4(float value)
	{
		___ratioY_4 = value;
	}

	inline static int32_t get_offset_of_w2_5() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___w2_5)); }
	inline int32_t get_w2_5() const { return ___w2_5; }
	inline int32_t* get_address_of_w2_5() { return &___w2_5; }
	inline void set_w2_5(int32_t value)
	{
		___w2_5 = value;
	}

	inline static int32_t get_offset_of_finishCount_6() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___finishCount_6)); }
	inline int32_t get_finishCount_6() const { return ___finishCount_6; }
	inline int32_t* get_address_of_finishCount_6() { return &___finishCount_6; }
	inline void set_finishCount_6(int32_t value)
	{
		___finishCount_6 = value;
	}

	inline static int32_t get_offset_of_mutex_7() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___mutex_7)); }
	inline Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * get_mutex_7() const { return ___mutex_7; }
	inline Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 ** get_address_of_mutex_7() { return &___mutex_7; }
	inline void set_mutex_7(Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * value)
	{
		___mutex_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mutex_7), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// InstantiateBlock/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA  : public RuntimeObject
{
public:
	// ARPlacemente InstantiateBlock/<>c__DisplayClass1_0::arPlacemente
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * ___arPlacemente_0;
	// InstantiateBlock InstantiateBlock/<>c__DisplayClass1_0::<>4__this
	InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_arPlacemente_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA, ___arPlacemente_0)); }
	inline ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * get_arPlacemente_0() const { return ___arPlacemente_0; }
	inline ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 ** get_address_of_arPlacemente_0() { return &___arPlacemente_0; }
	inline void set_arPlacemente_0(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * value)
	{
		___arPlacemente_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arPlacemente_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA, ___U3CU3E4__this_1)); }
	inline InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// TextureScale/ThreadData
struct ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A  : public RuntimeObject
{
public:
	// System.Int32 TextureScale/ThreadData::start
	int32_t ___start_0;
	// System.Int32 TextureScale/ThreadData::end
	int32_t ___end_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A, ___end_1)); }
	inline int32_t get_end_1() const { return ___end_1; }
	inline int32_t* get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(int32_t value)
	{
		___end_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<ModelName>
struct Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9, ___list_0)); }
	inline List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * get_list_0() const { return ___list_0; }
	inline List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9, ___current_3)); }
	inline ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * get_current_3() const { return ___current_3; }
	inline ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * value)
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


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE__padding[1];
	};

public:
};

struct YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields
{
public:
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___s_sendOrPostCallbackRunAction_1;

public:
	inline static int32_t get_offset_of_s_waitCallbackRunAction_0() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_waitCallbackRunAction_0)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_s_waitCallbackRunAction_0() const { return ___s_waitCallbackRunAction_0; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_s_waitCallbackRunAction_0() { return &___s_waitCallbackRunAction_0; }
	inline void set_s_waitCallbackRunAction_0(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___s_waitCallbackRunAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_waitCallbackRunAction_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_sendOrPostCallbackRunAction_1() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_sendOrPostCallbackRunAction_1)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_s_sendOrPostCallbackRunAction_1() const { return ___s_sendOrPostCallbackRunAction_1; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_s_sendOrPostCallbackRunAction_1() { return &___s_sendOrPostCallbackRunAction_1; }
	inline void set_s_sendOrPostCallbackRunAction_1(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___s_sendOrPostCallbackRunAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_sendOrPostCallbackRunAction_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_task_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
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
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

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

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
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
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

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

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
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


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// ARPlacemente/PlacementType
struct PlacementType_t94E94A38A40921E22251F253F7D52742FA58326B 
{
public:
	// System.Int32 ARPlacemente/PlacementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlacementType_t94E94A38A40921E22251F253F7D52742FA58326B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// AcceptAllCertificatesSignedWithASpecificPublicKey
struct AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD  : public CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E
{
public:

public:
};

struct AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_StaticFields
{
public:
	// System.String AcceptAllCertificatesSignedWithASpecificPublicKey::PUB_KEY
	String_t* ___PUB_KEY_1;

public:
	inline static int32_t get_offset_of_PUB_KEY_1() { return static_cast<int32_t>(offsetof(AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_StaticFields, ___PUB_KEY_1)); }
	inline String_t* get_PUB_KEY_1() const { return ___PUB_KEY_1; }
	inline String_t** get_address_of_PUB_KEY_1() { return &___PUB_KEY_1; }
	inline void set_PUB_KEY_1(String_t* value)
	{
		___PUB_KEY_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PUB_KEY_1), (void*)value);
	}
};


// UnityEngine.AssetBundle
struct AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
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

// System.Threading.Mutex
struct Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// ARPlacemente/<EnterURL>d__40
struct U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 
{
public:
	// System.Int32 ARPlacemente/<EnterURL>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder ARPlacemente/<EnterURL>d__40::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// ARPlacemente ARPlacemente/<EnterURL>d__40::<>4__this
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> ARPlacemente/<EnterURL>d__40::<>u__1
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095, ___U3CU3E4__this_2)); }
	inline ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// WebClient/<GetModelsCoroutine>d__11
struct U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F 
{
public:
	// System.Int32 WebClient/<GetModelsCoroutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> WebClient/<GetModelsCoroutine>d__11::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// WebClient WebClient/<GetModelsCoroutine>d__11::<>4__this
	WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * ___U3CU3E4__this_2;
	// System.String WebClient/<GetModelsCoroutine>d__11::name
	String_t* ___name_3;
	// UnityEngine.Networking.UnityWebRequest WebClient/<GetModelsCoroutine>d__11::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_4;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation WebClient/<GetModelsCoroutine>d__11::<operation>5__3
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * ___U3CoperationU3E5__3_5;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter WebClient/<GetModelsCoroutine>d__11::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F, ___U3CU3E4__this_2)); }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F, ___U3CrequestU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_4() const { return ___U3CrequestU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_4() { return &___U3CrequestU3E5__2_4; }
	inline void set_U3CrequestU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoperationU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F, ___U3CoperationU3E5__3_5)); }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * get_U3CoperationU3E5__3_5() const { return ___U3CoperationU3E5__3_5; }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 ** get_address_of_U3CoperationU3E5__3_5() { return &___U3CoperationU3E5__3_5; }
	inline void set_U3CoperationU3E5__3_5(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * value)
	{
		___U3CoperationU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoperationU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F, ___U3CU3Eu__1_6)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_6 = value;
	}
};


// WebClient/<GetNamesCoroutine>d__9
struct U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 
{
public:
	// System.Int32 WebClient/<GetNamesCoroutine>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> WebClient/<GetNamesCoroutine>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// WebClient WebClient/<GetNamesCoroutine>d__9::<>4__this
	WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest WebClient/<GetNamesCoroutine>d__9::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_3;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation WebClient/<GetNamesCoroutine>d__9::<operation>5__3
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * ___U3CoperationU3E5__3_4;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter WebClient/<GetNamesCoroutine>d__9::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9, ___U3CU3E4__this_2)); }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9, ___U3CrequestU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_3() const { return ___U3CrequestU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_3() { return &___U3CrequestU3E5__2_3; }
	inline void set_U3CrequestU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoperationU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9, ___U3CoperationU3E5__3_4)); }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * get_U3CoperationU3E5__3_4() const { return ___U3CoperationU3E5__3_4; }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 ** get_address_of_U3CoperationU3E5__3_4() { return &___U3CoperationU3E5__3_4; }
	inline void set_U3CoperationU3E5__3_4(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * value)
	{
		___U3CoperationU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoperationU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9, ___U3CU3Eu__1_5)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_5 = value;
	}
};


// WebClient/<GetSpritesCoroutine>d__10
struct U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 
{
public:
	// System.Int32 WebClient/<GetSpritesCoroutine>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> WebClient/<GetSpritesCoroutine>d__10::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// WebClient WebClient/<GetSpritesCoroutine>d__10::<>4__this
	WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * ___U3CU3E4__this_2;
	// System.String WebClient/<GetSpritesCoroutine>d__10::name
	String_t* ___name_3;
	// UnityEngine.Networking.UnityWebRequest WebClient/<GetSpritesCoroutine>d__10::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_4;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation WebClient/<GetSpritesCoroutine>d__10::<operation>5__3
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * ___U3CoperationU3E5__3_5;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter WebClient/<GetSpritesCoroutine>d__10::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7, ___U3CU3E4__this_2)); }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7, ___U3CrequestU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_4() const { return ___U3CrequestU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_4() { return &___U3CrequestU3E5__2_4; }
	inline void set_U3CrequestU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoperationU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7, ___U3CoperationU3E5__3_5)); }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * get_U3CoperationU3E5__3_5() const { return ___U3CoperationU3E5__3_5; }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 ** get_address_of_U3CoperationU3E5__3_5() { return &___U3CoperationU3E5__3_5; }
	inline void set_U3CoperationU3E5__3_5(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * value)
	{
		___U3CoperationU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoperationU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7, ___U3CU3Eu__1_6)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_6 = value;
	}
};


// WebClient/<ServerStart>d__8
struct U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 
{
public:
	// System.Int32 WebClient/<ServerStart>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> WebClient/<ServerStart>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// WebClient WebClient/<ServerStart>d__8::<>4__this
	WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * ___U3CU3E4__this_2;
	// System.String WebClient/<ServerStart>d__8::url
	String_t* ___url_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> WebClient/<ServerStart>d__8::<>u__1
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  ___U3CU3Eu__1_4;
	// System.Collections.Generic.List`1/Enumerator<ModelName> WebClient/<ServerStart>d__8::<>7__wrap1
	Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9  ___U3CU3E7__wrap1_5;
	// ModelName WebClient/<ServerStart>d__8::<name>5__3
	ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * ___U3CnameU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105, ___U3CU3E4__this_2)); }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105, ___U3CU3E7__wrap1_5)); }
	inline Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9  get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 * get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9  value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_5))->___current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CnameU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105, ___U3CnameU3E5__3_6)); }
	inline ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * get_U3CnameU3E5__3_6() const { return ___U3CnameU3E5__3_6; }
	inline ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A ** get_address_of_U3CnameU3E5__3_6() { return &___U3CnameU3E5__3_6; }
	inline void set_U3CnameU3E5__3_6(ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * value)
	{
		___U3CnameU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3E5__3_6), (void*)value);
	}
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;

public:
	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CdistanceU3Ek__BackingField_0)); }
	inline float get_U3CdistanceU3Ek__BackingField_0() const { return ___U3CdistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_0() { return &___U3CdistanceU3Ek__BackingField_0; }
	inline void set_U3CdistanceU3Ek__BackingField_0(float value)
	{
		___U3CdistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtrackableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CtrackableU3Ek__BackingField_1)); }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * get_U3CtrackableU3Ek__BackingField_1() const { return ___U3CtrackableU3Ek__BackingField_1; }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 ** get_address_of_U3CtrackableU3Ek__BackingField_1() { return &___U3CtrackableU3Ek__BackingField_1; }
	inline void set_U3CtrackableU3Ek__BackingField_1(ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * value)
	{
		___U3CtrackableU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackableU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hit_2() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Hit_2)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_m_Hit_2() const { return ___m_Hit_2; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_m_Hit_2() { return &___m_Hit_2; }
	inline void set_m_Hit_2(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___m_Hit_2 = value;
	}

	inline static int32_t get_offset_of_m_Transform_3() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Transform_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Transform_3() const { return ___m_Transform_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Transform_3() { return &___m_Transform_3; }
	inline void set_m_Transform_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Transform_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// ARPlacemente
struct ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ARPlacemente::UICanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___UICanvas_4;
	// UnityEngine.GameObject ARPlacemente::CurrentCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CurrentCanvas_5;
	// UnityEngine.GameObject ARPlacemente::placmentIndicator
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___placmentIndicator_6;
	// UnityEngine.GameObject ARPlacemente::spawnedObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawnedObject_7;
	// UnityEngine.Pose ARPlacemente::PlacementPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___PlacementPose_8;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARPlacemente::aRRaycastManager
	ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * ___aRRaycastManager_9;
	// UnityEngine.XR.ARFoundation.ARPlaneManager ARPlacemente::planeManager
	ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * ___planeManager_10;
	// System.Boolean ARPlacemente::placementPoseIsValid
	bool ___placementPoseIsValid_11;
	// UnityEngine.XR.ARFoundation.ARPlane ARPlacemente::plane
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___plane_12;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment ARPlacemente::applyAlignment
	int32_t ___applyAlignment_13;
	// UnityEngine.GameObject[] ARPlacemente::hidableObjects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___hidableObjects_14;
	// UnityEngine.UI.Text ARPlacemente::modelName
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___modelName_15;
	// UnityEngine.GameObject ARPlacemente::block
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___block_16;
	// ModelsContainer ARPlacemente::horizontal
	ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * ___horizontal_17;
	// ModelsContainer ARPlacemente::wall
	ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * ___wall_18;
	// ModelsContainer ARPlacemente::ceiling
	ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * ___ceiling_19;
	// ModelsContainer ARPlacemente::currentModels
	ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * ___currentModels_20;
	// UnityEngine.GameObject ARPlacemente::catalog
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___catalog_22;
	// UnityEngine.GameObject ARPlacemente::parent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___parent_23;
	// UnityEngine.UI.InputField ARPlacemente::url
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___url_24;
	// UnityEngine.GameObject ARPlacemente::chooseCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___chooseCanvas_25;
	// WebClient ARPlacemente::client
	WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * ___client_26;
	// UnityEngine.UI.Text ARPlacemente::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_27;

public:
	inline static int32_t get_offset_of_UICanvas_4() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___UICanvas_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_UICanvas_4() const { return ___UICanvas_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_UICanvas_4() { return &___UICanvas_4; }
	inline void set_UICanvas_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___UICanvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UICanvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentCanvas_5() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___CurrentCanvas_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CurrentCanvas_5() const { return ___CurrentCanvas_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CurrentCanvas_5() { return &___CurrentCanvas_5; }
	inline void set_CurrentCanvas_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CurrentCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentCanvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_placmentIndicator_6() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___placmentIndicator_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_placmentIndicator_6() const { return ___placmentIndicator_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_placmentIndicator_6() { return &___placmentIndicator_6; }
	inline void set_placmentIndicator_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___placmentIndicator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placmentIndicator_6), (void*)value);
	}

	inline static int32_t get_offset_of_spawnedObject_7() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___spawnedObject_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawnedObject_7() const { return ___spawnedObject_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawnedObject_7() { return &___spawnedObject_7; }
	inline void set_spawnedObject_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawnedObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnedObject_7), (void*)value);
	}

	inline static int32_t get_offset_of_PlacementPose_8() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___PlacementPose_8)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_PlacementPose_8() const { return ___PlacementPose_8; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_PlacementPose_8() { return &___PlacementPose_8; }
	inline void set_PlacementPose_8(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___PlacementPose_8 = value;
	}

	inline static int32_t get_offset_of_aRRaycastManager_9() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___aRRaycastManager_9)); }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * get_aRRaycastManager_9() const { return ___aRRaycastManager_9; }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F ** get_address_of_aRRaycastManager_9() { return &___aRRaycastManager_9; }
	inline void set_aRRaycastManager_9(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * value)
	{
		___aRRaycastManager_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aRRaycastManager_9), (void*)value);
	}

	inline static int32_t get_offset_of_planeManager_10() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___planeManager_10)); }
	inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * get_planeManager_10() const { return ___planeManager_10; }
	inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 ** get_address_of_planeManager_10() { return &___planeManager_10; }
	inline void set_planeManager_10(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * value)
	{
		___planeManager_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planeManager_10), (void*)value);
	}

	inline static int32_t get_offset_of_placementPoseIsValid_11() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___placementPoseIsValid_11)); }
	inline bool get_placementPoseIsValid_11() const { return ___placementPoseIsValid_11; }
	inline bool* get_address_of_placementPoseIsValid_11() { return &___placementPoseIsValid_11; }
	inline void set_placementPoseIsValid_11(bool value)
	{
		___placementPoseIsValid_11 = value;
	}

	inline static int32_t get_offset_of_plane_12() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___plane_12)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_plane_12() const { return ___plane_12; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_plane_12() { return &___plane_12; }
	inline void set_plane_12(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___plane_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plane_12), (void*)value);
	}

	inline static int32_t get_offset_of_applyAlignment_13() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___applyAlignment_13)); }
	inline int32_t get_applyAlignment_13() const { return ___applyAlignment_13; }
	inline int32_t* get_address_of_applyAlignment_13() { return &___applyAlignment_13; }
	inline void set_applyAlignment_13(int32_t value)
	{
		___applyAlignment_13 = value;
	}

	inline static int32_t get_offset_of_hidableObjects_14() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___hidableObjects_14)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_hidableObjects_14() const { return ___hidableObjects_14; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_hidableObjects_14() { return &___hidableObjects_14; }
	inline void set_hidableObjects_14(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___hidableObjects_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hidableObjects_14), (void*)value);
	}

	inline static int32_t get_offset_of_modelName_15() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___modelName_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_modelName_15() const { return ___modelName_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_modelName_15() { return &___modelName_15; }
	inline void set_modelName_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___modelName_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modelName_15), (void*)value);
	}

	inline static int32_t get_offset_of_block_16() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___block_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_block_16() const { return ___block_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_block_16() { return &___block_16; }
	inline void set_block_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___block_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_16), (void*)value);
	}

	inline static int32_t get_offset_of_horizontal_17() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___horizontal_17)); }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * get_horizontal_17() const { return ___horizontal_17; }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 ** get_address_of_horizontal_17() { return &___horizontal_17; }
	inline void set_horizontal_17(ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * value)
	{
		___horizontal_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___horizontal_17), (void*)value);
	}

	inline static int32_t get_offset_of_wall_18() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___wall_18)); }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * get_wall_18() const { return ___wall_18; }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 ** get_address_of_wall_18() { return &___wall_18; }
	inline void set_wall_18(ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * value)
	{
		___wall_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wall_18), (void*)value);
	}

	inline static int32_t get_offset_of_ceiling_19() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___ceiling_19)); }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * get_ceiling_19() const { return ___ceiling_19; }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 ** get_address_of_ceiling_19() { return &___ceiling_19; }
	inline void set_ceiling_19(ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * value)
	{
		___ceiling_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ceiling_19), (void*)value);
	}

	inline static int32_t get_offset_of_currentModels_20() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___currentModels_20)); }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * get_currentModels_20() const { return ___currentModels_20; }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 ** get_address_of_currentModels_20() { return &___currentModels_20; }
	inline void set_currentModels_20(ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * value)
	{
		___currentModels_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentModels_20), (void*)value);
	}

	inline static int32_t get_offset_of_catalog_22() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___catalog_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_catalog_22() const { return ___catalog_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_catalog_22() { return &___catalog_22; }
	inline void set_catalog_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___catalog_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___catalog_22), (void*)value);
	}

	inline static int32_t get_offset_of_parent_23() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___parent_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_parent_23() const { return ___parent_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_parent_23() { return &___parent_23; }
	inline void set_parent_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___parent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_23), (void*)value);
	}

	inline static int32_t get_offset_of_url_24() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___url_24)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_url_24() const { return ___url_24; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_url_24() { return &___url_24; }
	inline void set_url_24(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___url_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_24), (void*)value);
	}

	inline static int32_t get_offset_of_chooseCanvas_25() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___chooseCanvas_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_chooseCanvas_25() const { return ___chooseCanvas_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_chooseCanvas_25() { return &___chooseCanvas_25; }
	inline void set_chooseCanvas_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___chooseCanvas_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chooseCanvas_25), (void*)value);
	}

	inline static int32_t get_offset_of_client_26() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___client_26)); }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * get_client_26() const { return ___client_26; }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 ** get_address_of_client_26() { return &___client_26; }
	inline void set_client_26(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * value)
	{
		___client_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_26), (void*)value);
	}

	inline static int32_t get_offset_of_text_27() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075, ___text_27)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_27() const { return ___text_27; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_27() { return &___text_27; }
	inline void set_text_27(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_27), (void*)value);
	}
};

struct ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields
{
public:
	// System.Int32 ARPlacemente::modelIndex
	int32_t ___modelIndex_21;

public:
	inline static int32_t get_offset_of_modelIndex_21() { return static_cast<int32_t>(offsetof(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields, ___modelIndex_21)); }
	inline int32_t get_modelIndex_21() const { return ___modelIndex_21; }
	inline int32_t* get_address_of_modelIndex_21() { return &___modelIndex_21; }
	inline void set_modelIndex_21(int32_t value)
	{
		___modelIndex_21 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// InstantiateBlock
struct InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 InstantiateBlock::index
	int32_t ___index_4;

public:
	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}
};


// Model
struct Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Model::name
	String_t* ___name_4;
	// UnityEngine.Sprite Model::image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___image_5;
	// UnityEngine.GameObject Model::model
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___model_6;

public:
	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_4), (void*)value);
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3, ___image_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_image_5() const { return ___image_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_5), (void*)value);
	}

	inline static int32_t get_offset_of_model_6() { return static_cast<int32_t>(offsetof(Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3, ___model_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_model_6() const { return ___model_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_model_6() { return &___model_6; }
	inline void set_model_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___model_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___model_6), (void*)value);
	}
};


// ModelsContainer
struct ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Model> ModelsContainer::models
	List_1_t870A276983448F5860BD04A1B217087C58F71CA9 * ___models_4;

public:
	inline static int32_t get_offset_of_models_4() { return static_cast<int32_t>(offsetof(ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586, ___models_4)); }
	inline List_1_t870A276983448F5860BD04A1B217087C58F71CA9 * get_models_4() const { return ___models_4; }
	inline List_1_t870A276983448F5860BD04A1B217087C58F71CA9 ** get_address_of_models_4() { return &___models_4; }
	inline void set_models_4(List_1_t870A276983448F5860BD04A1B217087C58F71CA9 * value)
	{
		___models_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___models_4), (void*)value);
	}
};


// RotateSlider
struct RotateSlider_t99CBE9B6BF140367070F66FD2E019423977A6788  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider RotateSlider::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_4;
	// System.Single RotateSlider::minValue
	float ___minValue_5;
	// System.Single RotateSlider::maxValue
	float ___maxValue_6;
	// System.Boolean RotateSlider::vertical
	bool ___vertical_7;

public:
	inline static int32_t get_offset_of_slider_4() { return static_cast<int32_t>(offsetof(RotateSlider_t99CBE9B6BF140367070F66FD2E019423977A6788, ___slider_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_4() const { return ___slider_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_4() { return &___slider_4; }
	inline void set_slider_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_4), (void*)value);
	}

	inline static int32_t get_offset_of_minValue_5() { return static_cast<int32_t>(offsetof(RotateSlider_t99CBE9B6BF140367070F66FD2E019423977A6788, ___minValue_5)); }
	inline float get_minValue_5() const { return ___minValue_5; }
	inline float* get_address_of_minValue_5() { return &___minValue_5; }
	inline void set_minValue_5(float value)
	{
		___minValue_5 = value;
	}

	inline static int32_t get_offset_of_maxValue_6() { return static_cast<int32_t>(offsetof(RotateSlider_t99CBE9B6BF140367070F66FD2E019423977A6788, ___maxValue_6)); }
	inline float get_maxValue_6() const { return ___maxValue_6; }
	inline float* get_address_of_maxValue_6() { return &___maxValue_6; }
	inline void set_maxValue_6(float value)
	{
		___maxValue_6 = value;
	}

	inline static int32_t get_offset_of_vertical_7() { return static_cast<int32_t>(offsetof(RotateSlider_t99CBE9B6BF140367070F66FD2E019423977A6788, ___vertical_7)); }
	inline bool get_vertical_7() const { return ___vertical_7; }
	inline bool* get_address_of_vertical_7() { return &___vertical_7; }
	inline void set_vertical_7(bool value)
	{
		___vertical_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WebClient
struct WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String WebClient::url
	String_t* ___url_4;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite> WebClient::sprites
	Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D * ___sprites_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> WebClient::models
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___models_6;
	// System.Collections.Generic.List`1<ModelName> WebClient::names
	List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * ___names_7;
	// ModelsContainer WebClient::horizontal
	ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * ___horizontal_8;
	// ModelsContainer WebClient::wall
	ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * ___wall_9;
	// ModelsContainer WebClient::ceiling
	ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * ___ceiling_10;
	// UnityEngine.UI.Text WebClient::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_11;

public:
	inline static int32_t get_offset_of_url_4() { return static_cast<int32_t>(offsetof(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542, ___url_4)); }
	inline String_t* get_url_4() const { return ___url_4; }
	inline String_t** get_address_of_url_4() { return &___url_4; }
	inline void set_url_4(String_t* value)
	{
		___url_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_4), (void*)value);
	}

	inline static int32_t get_offset_of_sprites_5() { return static_cast<int32_t>(offsetof(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542, ___sprites_5)); }
	inline Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D * get_sprites_5() const { return ___sprites_5; }
	inline Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D ** get_address_of_sprites_5() { return &___sprites_5; }
	inline void set_sprites_5(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D * value)
	{
		___sprites_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprites_5), (void*)value);
	}

	inline static int32_t get_offset_of_models_6() { return static_cast<int32_t>(offsetof(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542, ___models_6)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_models_6() const { return ___models_6; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_models_6() { return &___models_6; }
	inline void set_models_6(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___models_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___models_6), (void*)value);
	}

	inline static int32_t get_offset_of_names_7() { return static_cast<int32_t>(offsetof(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542, ___names_7)); }
	inline List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * get_names_7() const { return ___names_7; }
	inline List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C ** get_address_of_names_7() { return &___names_7; }
	inline void set_names_7(List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * value)
	{
		___names_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___names_7), (void*)value);
	}

	inline static int32_t get_offset_of_horizontal_8() { return static_cast<int32_t>(offsetof(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542, ___horizontal_8)); }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * get_horizontal_8() const { return ___horizontal_8; }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 ** get_address_of_horizontal_8() { return &___horizontal_8; }
	inline void set_horizontal_8(ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * value)
	{
		___horizontal_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___horizontal_8), (void*)value);
	}

	inline static int32_t get_offset_of_wall_9() { return static_cast<int32_t>(offsetof(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542, ___wall_9)); }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * get_wall_9() const { return ___wall_9; }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 ** get_address_of_wall_9() { return &___wall_9; }
	inline void set_wall_9(ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * value)
	{
		___wall_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wall_9), (void*)value);
	}

	inline static int32_t get_offset_of_ceiling_10() { return static_cast<int32_t>(offsetof(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542, ___ceiling_10)); }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * get_ceiling_10() const { return ___ceiling_10; }
	inline ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 ** get_address_of_ceiling_10() { return &___ceiling_10; }
	inline void set_ceiling_10(ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * value)
	{
		___ceiling_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ceiling_10), (void*)value);
	}

	inline static int32_t get_offset_of_text_11() { return static_cast<int32_t>(offsetof(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542, ___text_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_11() const { return ___text_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_11() { return &___text_11; }
	inline void set_text_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_11), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7  : public SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___m_Trackables_9)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___m_PendingAdds_10)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Added_11)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Updated_12)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Removed_13)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045  : public SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_Trackables_9)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_PendingAdds_10)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Added_11)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Updated_12)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Removed_13)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891  : public ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;

public:
	inline static int32_t get_offset_of_m_VertexChangedThreshold_7() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_VertexChangedThreshold_7)); }
	inline float get_m_VertexChangedThreshold_7() const { return ___m_VertexChangedThreshold_7; }
	inline float* get_address_of_m_VertexChangedThreshold_7() { return &___m_VertexChangedThreshold_7; }
	inline void set_m_VertexChangedThreshold_7(float value)
	{
		___m_VertexChangedThreshold_7 = value;
	}

	inline static int32_t get_offset_of_boundaryChanged_8() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___boundaryChanged_8)); }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * get_boundaryChanged_8() const { return ___boundaryChanged_8; }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 ** get_address_of_boundaryChanged_8() { return &___boundaryChanged_8; }
	inline void set_boundaryChanged_8(Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * value)
	{
		___boundaryChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsumedByU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___U3CsubsumedByU3Ek__BackingField_9)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_U3CsubsumedByU3Ek__BackingField_9() const { return ___U3CsubsumedByU3Ek__BackingField_9; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_U3CsubsumedByU3Ek__BackingField_9() { return &___U3CsubsumedByU3Ek__BackingField_9; }
	inline void set_U3CsubsumedByU3Ek__BackingField_9(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___U3CsubsumedByU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsumedByU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Boundary_10() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_Boundary_10)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_Boundary_10() const { return ___m_Boundary_10; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_Boundary_10() { return &___m_Boundary_10; }
	inline void set_m_Boundary_10(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_Boundary_10 = value;
	}

	inline static int32_t get_offset_of_m_OldBoundary_11() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_OldBoundary_11)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_OldBoundary_11() const { return ___m_OldBoundary_11; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_OldBoundary_11() { return &___m_OldBoundary_11; }
	inline void set_m_OldBoundary_11(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_OldBoundary_11 = value;
	}

	inline static int32_t get_offset_of_m_HasBoundaryChanged_12() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_HasBoundaryChanged_12)); }
	inline bool get_m_HasBoundaryChanged_12() const { return ___m_HasBoundaryChanged_12; }
	inline bool* get_address_of_m_HasBoundaryChanged_12() { return &___m_HasBoundaryChanged_12; }
	inline void set_m_HasBoundaryChanged_12(bool value)
	{
		___m_HasBoundaryChanged_12 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4  : public ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * ___planesChanged_16;

public:
	inline static int32_t get_offset_of_m_PlanePrefab_14() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___m_PlanePrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PlanePrefab_14() const { return ___m_PlanePrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PlanePrefab_14() { return &___m_PlanePrefab_14; }
	inline void set_m_PlanePrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PlanePrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlanePrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_DetectionMode_15() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___m_DetectionMode_15)); }
	inline int32_t get_m_DetectionMode_15() const { return ___m_DetectionMode_15; }
	inline int32_t* get_address_of_m_DetectionMode_15() { return &___m_DetectionMode_15; }
	inline void set_m_DetectionMode_15(int32_t value)
	{
		___m_DetectionMode_15 = value;
	}

	inline static int32_t get_offset_of_planesChanged_16() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___planesChanged_16)); }
	inline Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * get_planesChanged_16() const { return ___planesChanged_16; }
	inline Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 ** get_address_of_planesChanged_16() { return &___planesChanged_16; }
	inline void set_planesChanged_16(Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * value)
	{
		___planesChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planesChanged_16), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F  : public ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * ___m_Raycasters_19;

public:
	inline static int32_t get_offset_of_m_RaycastPrefab_14() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_RaycastPrefab_14() const { return ___m_RaycastPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_RaycastPrefab_14() { return &___m_RaycastPrefab_14; }
	inline void set_m_RaycastPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_RaycastPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastViewportDelegate_17() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastViewportDelegate_17)); }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * get_m_RaycastViewportDelegate_17() const { return ___m_RaycastViewportDelegate_17; }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 ** get_address_of_m_RaycastViewportDelegate_17() { return &___m_RaycastViewportDelegate_17; }
	inline void set_m_RaycastViewportDelegate_17(Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * value)
	{
		___m_RaycastViewportDelegate_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastViewportDelegate_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastRayDelegate_18() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastRayDelegate_18)); }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * get_m_RaycastRayDelegate_18() const { return ___m_RaycastRayDelegate_18; }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 ** get_address_of_m_RaycastRayDelegate_18() { return &___m_RaycastRayDelegate_18; }
	inline void set_m_RaycastRayDelegate_18(Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * value)
	{
		___m_RaycastRayDelegate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastRayDelegate_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Raycasters_19() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_Raycasters_19)); }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * get_m_Raycasters_19() const { return ___m_Raycasters_19; }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 ** get_address_of_m_Raycasters_19() { return &___m_Raycasters_19; }
	inline void set_m_Raycasters_19(List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * value)
	{
		___m_Raycasters_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Raycasters_19), (void*)value);
	}
};

struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * ___s_NativeRaycastHits_16;

public:
	inline static int32_t get_offset_of_s_RaycastHitComparer_15() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_RaycastHitComparer_15)); }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * get_s_RaycastHitComparer_15() const { return ___s_RaycastHitComparer_15; }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE ** get_address_of_s_RaycastHitComparer_15() { return &___s_RaycastHitComparer_15; }
	inline void set_s_RaycastHitComparer_15(Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * value)
	{
		___s_RaycastHitComparer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastHitComparer_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_NativeRaycastHits_16() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_NativeRaycastHits_16)); }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * get_s_NativeRaycastHits_16() const { return ___s_NativeRaycastHits_16; }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 ** get_address_of_s_NativeRaycastHits_16() { return &___s_NativeRaycastHits_16; }
	inline void set_s_NativeRaycastHits_16(List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * value)
	{
		___s_NativeRaycastHits_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NativeRaycastHits_16), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  m_Items[1];

public:
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
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


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ARPlacemente/<EnterURL>d__40>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m74A10C19AD420EAD8CB421C484EE63501985E018_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 * ___stateMachine0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WebClient/<ServerStart>d__8>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_m4DD63793C18DA06302A3682E484D83C37D6775BF_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WebClient/<GetNamesCoroutine>d__9>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_m24CF8751D071F731181F414484846708D927AA64_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WebClient/<GetSpritesCoroutine>d__10>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m1C3CF23E0C97E266B55A1A5DDDB81238230F6783_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WebClient/<GetModelsCoroutine>d__11>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_mF9B226FF6174553DD9DDEDE3BE5C6FB996E8DD0D_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,ARPlacemente/<EnterURL>d__40>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m97023CDF699845937B60AE8D20C727F6C7ED726C_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,WebClient/<GetModelsCoroutine>d__11>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_m490D805FCB3252F22F774022B982F39019B0F0F1_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,WebClient/<GetNamesCoroutine>d__9>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_mB287AE9B6FE521D83D8451DDCFD01FAE0CC42ED2_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,WebClient/<GetSpritesCoroutine>d__10>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m87F5EABDD4E8ACD63D9C795B26FFD2340923E866_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WebClient/<ServerStart>d__8>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_mBC3BD1B6408DE56E3204718A2C32322051408000_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 * ___stateMachine1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void ARPlacemente::ShowTagedObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_ShowTagedObjects_mF6556E00A9137F806F78FAF938DC4EE379BFCC5F (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, bool ___hide0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * Object_FindObjectOfType_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m6A902A704FB4C6D5065587BC64EA71B2213114A9 (const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB (const RuntimeMethod* method)
{
	return ((  ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void ARPlacemente::ARPlaceObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_ARPlaceObject_mBD2C4362A32838D94338F557C7EBE07EA115FF50 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void ARPlacemente::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_UpdatePlacementPose_m396C4604EFDD60582E6340D91B8C98F136B0073E (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method);
// System.Void ARPlacemente::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_UpdatePlacementIndicator_m6D1D84D474585E96E716848A531D54F544A86F31 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method);
// System.Void ARPlacemente::UpdateModelName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_UpdateModelName_mDF5D81B07140A167F7B8653EE022F8B8EC196AF0 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ViewportToScreenPoint_mE22A3D0085E534EF4D0591439EF15DDDB3181DF8 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201 (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, const RuntimeMethod*))List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650 (ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
inline int32_t List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, const RuntimeMethod*))List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, int32_t, const RuntimeMethod*))List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARRaycastHit_get_trackableId_mCC2447AD8425B92F2E25E74812D6F50DE588D16A (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneManager::GetPlane(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ARPlaneManager_GetPlane_m2863C99ED9ACEE22F720067A1E0AC6C55E743442 (ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARFoundation.ARPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlane_get_alignment_mE98AB13AA23A17118D57E28213955B32F96B7046 (ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// Model ModelsContainer::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * ModelsContainer_get_Item_mFAAAF555B7175360663C8012930D5EDB00E84008 (ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 ModelsContainer::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModelsContainer_get_Count_m6581174AA83451130FE71FD906D056B56A74D2B0 (ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARPlaneManager::set_detectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlaneManager_set_detectionMode_m9751E405615DF5749E5CABFF3AD5178A907AB540 (ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ARPlacemente::GoTo(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_GoTo_mE4EC6D6CDE3E01E260FB88DF2240F71617549779 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___nextCanvas0, const RuntimeMethod* method);
// System.Void ARPlacemente::DeleteObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_DeleteObject_mA97210280D837AA4FDB86AFCEF92625179CA21E6 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<InstantiateBlock>()
inline InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B * GameObject_AddComponent_TisInstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B_m30F9B9BE01F9895577F390EF74E7DD97D016268A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void InstantiateBlock::CreateBlock(UnityEngine.Sprite,System.String,System.Int32,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateBlock_CreateBlock_m238137E17A5366346F721ACB114931C1DB21284B (InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite0, String_t* ___name1, int32_t ___id2, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___block3, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___parent4, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ARPlacemente/<EnterURL>d__40>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m74A10C19AD420EAD8CB421C484EE63501985E018 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m74A10C19AD420EAD8CB421C484EE63501985E018_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler__ctor_mEDF27CA23966C563C5E5AE7F90D423AC8CF634D1 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method);
// System.Void InstantiateBlock/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mCCEA3ABDA201AAF15A4E00AB3145BF143F6D7C92 (U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform,System.Boolean)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponentInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m8A0BE3E4A8DA437230E6FE6E553BD482586250CB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<ARPlacemente>()
inline ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * GameObject_GetComponent_TisARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_m44EA63B15DE385E2957744D7AD17C24D2188FAAF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ModelName>::.ctor()
inline void List_1__ctor_m29F7B988F9ED1EF7F0FEF4BEF4F4559A956C3092 (List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String JsonArray::RemoveFirstAndLast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonArray_RemoveFirstAndLast_mF1BA08070E505C0251BBB8C409B6FFC0253C2FFD (JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void ModelName::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelName__ctor_m9E39318D628246827974840B16514BA1682656F6 (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, String_t* ___name0, String_t* ___plane1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ModelName>::Add(!0)
inline void List_1_Add_m144F637C05E409AFEE7DF8F181DDEE48716672B0 (List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * __this, ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C *, ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void ModelName::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModelName_set_Name_m74645EAF3F0774D56603ECFC1BAC5D00EA24A7A7_inline (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ModelName::set_Plane(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModelName_set_Plane_mB360435698A1C844DF921347E2BD6966D15180D3_inline (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, String_t* ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Model>::get_Item(System.Int32)
inline Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * List_1_get_Item_mAA479BD8AD731B1E955E4DE0EFECA470C0A1C172_inline (List_1_t870A276983448F5860BD04A1B217087C58F71CA9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * (*) (List_1_t870A276983448F5860BD04A1B217087C58F71CA9 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Model>::get_Count()
inline int32_t List_1_get_Count_m196F69700C4EF7BF4681F9174F4A64CB8BFC6123_inline (List_1_t870A276983448F5860BD04A1B217087C58F71CA9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t870A276983448F5860BD04A1B217087C58F71CA9 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Model>::Add(!0)
inline void List_1_Add_mD1B388B56D39750B3DBBD9E61CF2AD64E6E86182 (List_1_t870A276983448F5860BD04A1B217087C58F71CA9 * __this, Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t870A276983448F5860BD04A1B217087C58F71CA9 *, Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_minValue_m253C0E27C8B0275EDAAFD9E97F6DC1E426460F93 (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * Slider_get_onValueChanged_m7F480C569A6D668952BE1436691850D13825E129_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, const RuntimeMethod*))UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_gshared)(__this, ___call0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void TextureScale::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_ThreadedScale_m64614D8D733CF2D471F557C822F9ABFF70FE9C26 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, bool ___useBilinear3, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_mBAA6A01218CF7F03638A6016B6881466830FD0D5 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void System.Threading.Mutex::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mutex__ctor_mE64D51F0538989539F6C059AB7E247423B699BBE (Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * __this, bool ___initiallyOwned0, const RuntimeMethod* method);
// System.Void TextureScale/ThreadData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadData__ctor_mA2E955D69EA603EB22B6B27718C8F195C3825D83 (ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * __this, int32_t ___s0, int32_t ___e1, const RuntimeMethod* method);
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m6F49448AAE802068CE1DB1BE519962708DA871B0 (ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m4E8C9D36164CFCFD65989CAE0F6456AC40BC4492 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m11EE2B4E0C1BC8520655644C1C31C0CFFC23B5B7 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, RuntimeObject * ___parameter0, const RuntimeMethod* method);
// System.Void TextureScale::BilinearScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void TextureScale::PointScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2D_Resize_m3B472A6ED37D683DC4162504F6DCF42E1FA2195C (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// UnityEngine.Color TextureScale::ColorLerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextureScale_ColorLerpUnclamped_m17AEA77F6A498CAC07EA55DF16E7A46774D31138 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c10, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c21, float ___value2, const RuntimeMethod* method);
// System.Void System.Threading.Mutex::ReleaseMutex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mutex_ReleaseMutex_mDF6C95C5F169F7345539CAECFA264A4D4687B190 (Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WebClient/<ServerStart>d__8>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_m4DD63793C18DA06302A3682E484D83C37D6775BF (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_m4DD63793C18DA06302A3682E484D83C37D6775BF_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WebClient/<GetNamesCoroutine>d__9>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_m24CF8751D071F731181F414484846708D927AA64 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_m24CF8751D071F731181F414484846708D927AA64_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WebClient/<GetSpritesCoroutine>d__10>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m1C3CF23E0C97E266B55A1A5DDDB81238230F6783 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m1C3CF23E0C97E266B55A1A5DDDB81238230F6783_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WebClient/<GetModelsCoroutine>d__11>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_mF9B226FF6174553DD9DDEDE3BE5C6FB996E8DD0D (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_mF9B226FF6174553DD9DDEDE3BE5C6FB996E8DD0D_gshared)(__this, ___stateMachine0, method);
}
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Boolean> WebClient::ServerStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * WebClient_ServerStart_m6EDC257869FD07B5AB183DF0ABDDA6B2954EA920 (WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041 (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, const RuntimeMethod*))Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1 (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,ARPlacemente/<EnterURL>d__40>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m97023CDF699845937B60AE8D20C727F6C7ED726C (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m97023CDF699845937B60AE8D20C727F6C7ED726C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void ARPlacemente/<EnterURL>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnterURLU3Ed__40_MoveNext_mBF12E93FEA10F83AA30F62E2AF1814E403D7F500 (U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void ARPlacemente/<EnterURL>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnterURLU3Ed__40_SetStateMachine_m8EED9F0FFDB447544E8E0ACC48B5C660AD3D4D50 (U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void ARPlacemente::ChangeIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_ChangeIndex_m157349FF01E9845527E95EEAE62E881F4A556551 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestAssetBundle_GetAssetBundle_m59D1CAF6EBF34A45A33EE4627AFED7109FF99B26 (String_t* ___uri0, const RuntimeMethod* method);
// System.Void AcceptAllCertificatesSignedWithASpecificPublicKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcceptAllCertificatesSignedWithASpecificPublicKey__ctor_mDD36C555CF22D169AE827E0243850C99BE35A99D (AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_certificateHandler(UnityEngine.Networking.CertificateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_certificateHandler_mBB6DDBB83B2639B1D47EFCDDDCC56E1217D139F7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B (const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8 (YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,WebClient/<GetModelsCoroutine>d__11>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_m490D805FCB3252F22F774022B982F39019B0F0F1 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_m490D805FCB3252F22F774022B982F39019B0F0F1_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * DownloadHandlerAssetBundle_GetContent_mB1D51000A1B402A8045228FC6399315D82916463 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___www0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * AssetBundle_LoadAsset_m598BB4E86B07C2BADAE6ED6FFBE5BB5E7A3392D5 (AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(!0,!1)
inline void Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78 (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, String_t* ___key0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, String_t*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared)(__this, ___result0, method);
}
// System.Void WebClient/<GetModelsCoroutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetModelsCoroutineU3Ed__11_MoveNext_m85EA1D6413D311BD9DC1D675CFABE4E5852B9F64 (U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_gshared)(__this, ___stateMachine0, method);
}
// System.Void WebClient/<GetModelsCoroutine>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetModelsCoroutineU3Ed__11_SetStateMachine_m65CCD0AAC7E671E6F615353B282C0440AEC14236 (U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,WebClient/<GetNamesCoroutine>d__9>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_mB287AE9B6FE521D83D8451DDCFD01FAE0CC42ED2 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_mB287AE9B6FE521D83D8451DDCFD01FAE0CC42ED2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void JsonArray::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray__ctor_m93D4B6B96FD6E34F0245C27C77D90FC8B970C99F (JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15 * __this, String_t* ___json0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<ModelName> JsonArray::Deserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * JsonArray_Deserialize_mDEC85FD88B6A1D08CBC2A62E80ED00B6818952C8 (JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void WebClient/<GetNamesCoroutine>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNamesCoroutineU3Ed__9_MoveNext_m7ADF2267AFCBB4D1EFAD32005FD9A4241EAA21C9 (U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 * __this, const RuntimeMethod* method);
// System.Void WebClient/<GetNamesCoroutine>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNamesCoroutineU3Ed__9_SetStateMachine_m4C0BB4403D11AAB2C6AF7DB7AB9DD44A16E505ED (U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37 (String_t* ___uri0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,WebClient/<GetSpritesCoroutine>d__10>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m87F5EABDD4E8ACD63D9C795B26FFD2340923E866 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m87F5EABDD4E8ACD63D9C795B26FFD2340923E866_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___www0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Sprite_Create_mB35E2D3FF3906606000D6682E465CC4773ADBACC (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot2, float ___pixelsPerUnit3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>::Add(!0,!1)
inline void Dictionary_2_Add_m91C7214CAD77724AD4FE720D63B104B36FF34A1B (Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D * __this, String_t* ___key0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D *, String_t*, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void WebClient/<GetSpritesCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSpritesCoroutineU3Ed__10_MoveNext_m9A631756224F1A6E281F7C0FC5DE228375674851 (U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 * __this, const RuntimeMethod* method);
// System.Void WebClient/<GetSpritesCoroutine>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSpritesCoroutineU3Ed__10_SetStateMachine_m1CD4B857211C6AE5568311B9BE33E7B3486FD990 (U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>::.ctor()
inline void Dictionary_2__ctor_mBBF36701EFA0270EA9E653A818DA663C6240AE52 (Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> WebClient::GetNamesCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * WebClient_GetNamesCoroutine_m2B88C7A003D4AD36DFD622825015D2959B224AB4 (WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WebClient/<ServerStart>d__8>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_mBC3BD1B6408DE56E3204718A2C32322051408000 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_mBC3BD1B6408DE56E3204718A2C32322051408000_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<ModelName>::GetEnumerator()
inline Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9  List_1_GetEnumerator_mFB6F2451E4FDD679E1EA161B27E29F1DC4E9B5B2 (List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9  (*) (List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<ModelName>::get_Current()
inline ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * Enumerator_get_Current_m4B512A8595D0D2687B35674DC2663825023070C7_inline (Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 * __this, const RuntimeMethod* method)
{
	return ((  ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * (*) (Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String ModelName::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ModelName_get_Name_m0C62D22D40D681315808073FAD6D8526636533A3_inline (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Boolean> WebClient::GetSpritesCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * WebClient_GetSpritesCoroutine_m48A02EF93A99AE4951F8F4EEFD8DC2AF19963022 (WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Boolean> WebClient::GetModelsCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * WebClient_GetModelsCoroutine_m6D09773E81AB31793BC2B961828E88717B4DCA72 (WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<ModelName>::MoveNext()
inline bool Enumerator_MoveNext_m519F964D26066BCC627EE11996766EC8DF6587D0 (Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ModelName>::Dispose()
inline void Enumerator_Dispose_m91EC1610D4E2B7B204C3976A153B7D18FDE0B708 (Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Model>()
inline Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * GameObject_AddComponent_TisModel_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3_mA785070F9F5ABA6C5DBCFC2276920E482168BB80 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>::get_Item(!0)
inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Dictionary_2_get_Item_mA49802F179570EEF637F4C0C01097D8612957556 (Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * (*) (Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Item(!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.String ModelName::get_Plane()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ModelName_get_Plane_m3D3A8375DD14A35A35CC51798537AE90119BE855_inline (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void ModelsContainer::Add(Model)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelsContainer_Add_mA86C1839010463E8F5008F018E7AB11E4B876FD8 (ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * __this, Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * ___model0, const RuntimeMethod* method);
// System.Void WebClient/<ServerStart>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerStartU3Ed__8_MoveNext_m1884DC99ADF30D388A9CAB91AFAFAE6D066F4BDC (U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 * __this, const RuntimeMethod* method);
// System.Void WebClient/<ServerStart>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerStartU3Ed__8_SetStateMachine_mB445740875BD5F89526B53E593010C9E425256E5 (U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.Void ARPlacemente::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_Start_mB27D2652BD90298D6FA002C9AFBBCA4F5B344B79 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m6A902A704FB4C6D5065587BC64EA71B2213114A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral804AE67BCBC7117847629258D7AC2F17D94527D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7078D33C2A9D11DB80AA9070C372F5677BBAB79);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// modelName = GameObject.FindGameObjectWithTag("NameModel").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralB7078D33C2A9D11DB80AA9070C372F5677BBAB79, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_modelName_15(L_1);
		// hidableObjects = GameObject.FindGameObjectsWithTag("Hidable");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2;
		L_2 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral804AE67BCBC7117847629258D7AC2F17D94527D9, /*hidden argument*/NULL);
		__this->set_hidableObjects_14(L_2);
		// ShowTagedObjects(false);
		ARPlacemente_ShowTagedObjects_mF6556E00A9137F806F78FAF938DC4EE379BFCC5F(__this, (bool)0, /*hidden argument*/NULL);
		// planeManager = FindObjectOfType<ARPlaneManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_3;
		L_3 = Object_FindObjectOfType_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m6A902A704FB4C6D5065587BC64EA71B2213114A9(/*hidden argument*/Object_FindObjectOfType_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m6A902A704FB4C6D5065587BC64EA71B2213114A9_RuntimeMethod_var);
		__this->set_planeManager_10(L_3);
		// aRRaycastManager = FindObjectOfType<ARRaycastManager>();
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_4;
		L_4 = Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB(/*hidden argument*/Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB_RuntimeMethod_var);
		__this->set_aRRaycastManager_9(L_4);
		// var menu = GameObject.FindGameObjectsWithTag("Menu"); // ������� ��� ��������� Canvas Menu
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5;
		L_5 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, /*hidden argument*/NULL);
		// foreach (var obj in menu)
		V_0 = L_5;
		V_1 = 0;
		goto IL_005e;
	}

IL_0051:
	{
		// foreach (var obj in menu)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		// obj.SetActive(false); // ��������� ����������� UI, ����� �� ����������� ���������
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_005e:
	{
		// foreach (var obj in menu)
		int32_t L_11 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		// CurrentCanvas.gameObject.SetActive(true); // �������� ������� ����
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_CurrentCanvas_5();
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// UICanvas.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_UICanvas_4();
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARPlacemente::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_Update_m5D406E764F914541BA0198C9BD049311AD165CC4 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if( spawnedObject == null
		// && placementPoseIsValid
		// && Input.touchCount > 0
		// && Input.GetTouch(0).phase == TouchPhase.Began
		// && CurrentCanvas.Equals(UICanvas)){ // ��� ������� ������ ������ (���� ���������)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_spawnedObject_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		bool L_2 = __this->get_placementPoseIsValid_11();
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_3;
		L_3 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_4;
		L_4 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0058;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_CurrentCanvas_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_UICanvas_4();
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_7);
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		// ARPlaceObject();
		ARPlacemente_ARPlaceObject_mBD2C4362A32838D94338F557C7EBE07EA115FF50(__this, /*hidden argument*/NULL);
		// UICanvas.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_UICanvas_4();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if (Camera.main == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11;
		L_11 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		// throw new System.Exception();
		Exception_t * L_13 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARPlacemente_Update_m5D406E764F914541BA0198C9BD049311AD165CC4_RuntimeMethod_var)));
	}

IL_006b:
	{
		// UpdatePlacementPose();
		ARPlacemente_UpdatePlacementPose_m396C4604EFDD60582E6340D91B8C98F136B0073E(__this, /*hidden argument*/NULL);
		// UpdatePlacementIndicator();
		ARPlacemente_UpdatePlacementIndicator_m6D1D84D474585E96E716848A531D54F544A86F31(__this, /*hidden argument*/NULL);
		// UpdateModelName();
		ARPlacemente_UpdateModelName_mDF5D81B07140A167F7B8653EE022F8B8EC196AF0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARPlacemente::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_UpdatePlacementIndicator_m6D1D84D474585E96E716848A531D54F544A86F31 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	{
		// if(placementPoseIsValid){
		bool L_0 = __this->get_placementPoseIsValid_11();
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// placmentIndicator.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_placmentIndicator_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// placmentIndicator.transform.SetPositionAndRotation(PlacementPose.position, PlacementPose.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_placmentIndicator_6();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_4 = __this->get_address_of_PlacementPose_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4->get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_6 = __this->get_address_of_PlacementPose_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = L_6->get_rotation_1();
		NullCheck(L_3);
		Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE(L_3, L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003b:
	{
		// placmentIndicator.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_placmentIndicator_6();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARPlacemente::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_UpdatePlacementPose_m396C4604EFDD60582E6340D91B8C98F136B0073E (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * V_1 = NULL;
	ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var screenCenter = Camera.main.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ViewportToScreenPoint_mE22A3D0085E534EF4D0591439EF15DDDB3181DF8(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var hits = new List<ARRaycastHit>();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_3 = (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *)il2cpp_codegen_object_new(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201(L_3, /*hidden argument*/List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		V_1 = L_3;
		// aRRaycastManager.Raycast(screenCenter, hits, TrackableType.Planes);
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_4 = __this->get_aRRaycastManager_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_7 = V_1;
		NullCheck(L_4);
		bool L_8;
		L_8 = ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650(L_4, L_6, L_7, ((int32_t)15), /*hidden argument*/NULL);
		// if (spawnedObject == null && hits.Count > 0 && planeManager.GetPlane(hits[0].trackableId).alignment == applyAlignment)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_spawnedObject_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0090;
		}
	}
	{
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_inline(L_11, /*hidden argument*/List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_13 = __this->get_planeManager_10();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_14 = V_1;
		NullCheck(L_14);
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_15;
		L_15 = List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline(L_14, 0, /*hidden argument*/List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		V_2 = L_15;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_16;
		L_16 = ARRaycastHit_get_trackableId_mCC2447AD8425B92F2E25E74812D6F50DE588D16A((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_13);
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_17;
		L_17 = ARPlaneManager_GetPlane_m2863C99ED9ACEE22F720067A1E0AC6C55E743442(L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ARPlane_get_alignment_mE98AB13AA23A17118D57E28213955B32F96B7046(L_17, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_applyAlignment_13();
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0090;
		}
	}
	{
		// PlacementPose = hits[0].pose;
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_20 = V_1;
		NullCheck(L_20);
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_21;
		L_21 = List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline(L_20, 0, /*hidden argument*/List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		V_2 = L_21;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_22;
		L_22 = ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&V_2), /*hidden argument*/NULL);
		__this->set_PlacementPose_8(L_22);
		// placementPoseIsValid = true;
		__this->set_placementPoseIsValid_11((bool)1);
		// }
		return;
	}

IL_0090:
	{
		// placementPoseIsValid = false;
		__this->set_placementPoseIsValid_11((bool)0);
		// }
		return;
	}
}
// System.Void ARPlacemente::ARPlaceObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_ARPlaceObject_mBD2C4362A32838D94338F557C7EBE07EA115FF50 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE37EE53DA49C672C6A121DD86793F800129D6449);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShowTagedObjects(true);
		ARPlacemente_ShowTagedObjects_mF6556E00A9137F806F78FAF938DC4EE379BFCC5F(__this, (bool)1, /*hidden argument*/NULL);
		// var clearUp = GameObject.FindGameObjectWithTag("ARMultiModel");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE37EE53DA49C672C6A121DD86793F800129D6449, /*hidden argument*/NULL);
		// Destroy(clearUp);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// if (applyAlignment == PlaneAlignment.HorizontalDown)
		int32_t L_1 = __this->get_applyAlignment_13();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_00c2;
		}
	}
	{
		// spawnedObject = Instantiate(currentModels[modelIndex].model, PlacementPose.position, currentModels[modelIndex].model.transform.rotation);
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_2 = __this->get_currentModels_20();
		IL2CPP_RUNTIME_CLASS_INIT(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->get_modelIndex_21();
		NullCheck(L_2);
		Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_4;
		L_4 = ModelsContainer_get_Item_mFAAAF555B7175360663C8012930D5EDB00E84008(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_model_6();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_6 = __this->get_address_of_PlacementPose_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6->get_position_0();
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_8 = __this->get_currentModels_20();
		int32_t L_9 = ((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->get_modelIndex_21();
		NullCheck(L_8);
		Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_10;
		L_10 = ModelsContainer_get_Item_mFAAAF555B7175360663C8012930D5EDB00E84008(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_model_6();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_7, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_spawnedObject_7(L_14);
		// spawnedObject.transform.localEulerAngles = new Vector3(spawnedObject.transform.rotation.x,
		//                                                        spawnedObject.transform.rotation.y,
		//                                                        spawnedObject.transform.rotation.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_spawnedObject_7();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_spawnedObject_7();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_spawnedObject_7();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_1();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_spawnedObject_7();
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_29), L_20, L_24, L_28, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_16, L_29, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c2:
	{
		// spawnedObject = Instantiate(currentModels[modelIndex].model, PlacementPose.position, PlacementPose.rotation);
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_30 = __this->get_currentModels_20();
		IL2CPP_RUNTIME_CLASS_INIT(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		int32_t L_31 = ((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->get_modelIndex_21();
		NullCheck(L_30);
		Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_32;
		L_32 = ModelsContainer_get_Item_mFAAAF555B7175360663C8012930D5EDB00E84008(L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = L_32->get_model_6();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_34 = __this->get_address_of_PlacementPose_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = L_34->get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_36 = __this->get_address_of_PlacementPose_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37 = L_36->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_33, L_35, L_37, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_spawnedObject_7(L_38);
		// }
		return;
	}
}
// System.Void ARPlacemente::ModelChangeRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_ModelChangeRight_m566711408395CF599DDA0ED388BE731581581DF5 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// modelIndex = modelIndex + 1 >= currentModels.Count ? 0 : modelIndex + 1;
		IL2CPP_RUNTIME_CLASS_INIT(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->get_modelIndex_21();
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_1 = __this->get_currentModels_20();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ModelsContainer_get_Count_m6581174AA83451130FE71FD906D056B56A74D2B0(L_1, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) >= ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->get_modelIndex_21();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->set_modelIndex_21(G_B3_0);
		// ARPlaceObject();
		ARPlacemente_ARPlaceObject_mBD2C4362A32838D94338F557C7EBE07EA115FF50(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARPlacemente::ModelChangeLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_ModelChangeLeft_m9AC3E778FC6975D37A036C35F3C76D0CD08A40D9 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// modelIndex = modelIndex - 1 < 0 ? currentModels.Count - 1 : modelIndex - 1;
		IL2CPP_RUNTIME_CLASS_INIT(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->get_modelIndex_21();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->get_modelIndex_21();
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0020;
	}

IL_0013:
	{
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_2 = __this->get_currentModels_20();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ModelsContainer_get_Count_m6581174AA83451130FE71FD906D056B56A74D2B0(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->set_modelIndex_21(G_B3_0);
		// ARPlaceObject();
		ARPlacemente_ARPlaceObject_mBD2C4362A32838D94338F557C7EBE07EA115FF50(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARPlacemente::DeleteObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_DeleteObject_mA97210280D837AA4FDB86AFCEF92625179CA21E6 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE37EE53DA49C672C6A121DD86793F800129D6449);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShowTagedObjects(false);
		ARPlacemente_ShowTagedObjects_mF6556E00A9137F806F78FAF938DC4EE379BFCC5F(__this, (bool)0, /*hidden argument*/NULL);
		// var clearUp = GameObject.FindGameObjectWithTag("ARMultiModel");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE37EE53DA49C672C6A121DD86793F800129D6449, /*hidden argument*/NULL);
		// Destroy(clearUp);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// modelIndex = 0;
		IL2CPP_RUNTIME_CLASS_INIT(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->set_modelIndex_21(0);
		// }
		return;
	}
}
// System.Void ARPlacemente::GoTo(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_GoTo_mE4EC6D6CDE3E01E260FB88DF2240F71617549779 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___nextCanvas0, const RuntimeMethod* method)
{
	{
		// CurrentCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_CurrentCanvas_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// nextCanvas.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___nextCanvas0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// CurrentCanvas = nextCanvas;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___nextCanvas0;
		__this->set_CurrentCanvas_5(L_3);
		// }
		return;
	}
}
// System.Void ARPlacemente::GoToCamera(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_GoToCamera_m348952046508E2F0DF215AE65C1BF9AC5CBFB3A8 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, int32_t ___alignment0, const RuntimeMethod* method)
{
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * G_B4_0 = NULL;
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * G_B1_0 = NULL;
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * G_B3_0 = NULL;
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * G_B2_0 = NULL;
	int32_t G_B5_0 = 0;
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * G_B5_1 = NULL;
	ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * G_B7_0 = NULL;
	ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * G_B8_1 = NULL;
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * G_B12_0 = NULL;
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * G_B9_0 = NULL;
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * G_B11_0 = NULL;
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * G_B10_0 = NULL;
	ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * G_B13_0 = NULL;
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * G_B13_1 = NULL;
	{
		// CurrentCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_CurrentCanvas_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// applyAlignment = alignment == 0 ? PlaneAlignment.HorizontalUp : alignment == 1
		//                                 ? PlaneAlignment.Vertical : PlaneAlignment.HorizontalDown;
		int32_t L_1 = ___alignment0;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B4_0 = __this;
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = ___alignment0;
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B3_0 = G_B1_0;
			goto IL_0018;
		}
	}
	{
		G_B5_0 = ((int32_t)101);
		G_B5_1 = G_B2_0;
		goto IL_0021;
	}

IL_0018:
	{
		G_B5_0 = ((int32_t)200);
		G_B5_1 = G_B3_0;
		goto IL_0021;
	}

IL_001f:
	{
		G_B5_0 = ((int32_t)100);
		G_B5_1 = G_B4_0;
	}

IL_0021:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_applyAlignment_13(G_B5_0);
		// planeManager.detectionMode = applyAlignment == PlaneAlignment.Vertical ?
		//     PlaneDetectionMode.Vertical
		//     : PlaneDetectionMode.Horizontal;
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_3 = __this->get_planeManager_10();
		int32_t L_4 = __this->get_applyAlignment_13();
		G_B6_0 = L_3;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)200))))
		{
			G_B7_0 = L_3;
			goto IL_003c;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_003d;
	}

IL_003c:
	{
		G_B8_0 = 2;
		G_B8_1 = G_B7_0;
	}

IL_003d:
	{
		NullCheck(G_B8_1);
		ARPlaneManager_set_detectionMode_m9751E405615DF5749E5CABFF3AD5178A907AB540(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// currentModels = alignment == 0 ? horizontal : alignment == 1 ? wall : ceiling;
		int32_t L_5 = ___alignment0;
		G_B9_0 = __this;
		if (!L_5)
		{
			G_B12_0 = __this;
			goto IL_005a;
		}
	}
	{
		int32_t L_6 = ___alignment0;
		G_B10_0 = G_B9_0;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			G_B11_0 = G_B9_0;
			goto IL_0052;
		}
	}
	{
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_7 = __this->get_ceiling_19();
		G_B13_0 = L_7;
		G_B13_1 = G_B10_0;
		goto IL_0060;
	}

IL_0052:
	{
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_8 = __this->get_wall_18();
		G_B13_0 = L_8;
		G_B13_1 = G_B11_0;
		goto IL_0060;
	}

IL_005a:
	{
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_9 = __this->get_horizontal_17();
		G_B13_0 = L_9;
		G_B13_1 = G_B12_0;
	}

IL_0060:
	{
		NullCheck(G_B13_1);
		G_B13_1->set_currentModels_20(G_B13_0);
		// UICanvas.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_UICanvas_4();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// CurrentCanvas = UICanvas;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_UICanvas_4();
		__this->set_CurrentCanvas_5(L_11);
		// }
		return;
	}
}
// System.Void ARPlacemente::ChangeIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_ChangeIndex_m157349FF01E9845527E95EEAE62E881F4A556551 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// modelIndex = index;
		int32_t L_0 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->set_modelIndex_21(L_0);
		// GoTo(UICanvas);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_UICanvas_4();
		ARPlacemente_GoTo_mE4EC6D6CDE3E01E260FB88DF2240F71617549779(__this, L_1, /*hidden argument*/NULL);
		// ARPlaceObject();
		ARPlacemente_ARPlaceObject_mBD2C4362A32838D94338F557C7EBE07EA115FF50(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARPlacemente::ChangePlanePanel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_ChangePlanePanel_m5F6BE3CE2CF72600F63D490FB6F8E88F0E61EC18 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___canvas0, const RuntimeMethod* method)
{
	{
		// DeleteObject();
		ARPlacemente_DeleteObject_mA97210280D837AA4FDB86AFCEF92625179CA21E6(__this, /*hidden argument*/NULL);
		// GoTo(canvas);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___canvas0;
		ARPlacemente_GoTo_mE4EC6D6CDE3E01E260FB88DF2240F71617549779(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARPlacemente::ShowTagedObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_ShowTagedObjects_mF6556E00A9137F806F78FAF938DC4EE379BFCC5F (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, bool ___hide0, const RuntimeMethod* method)
{
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach(var hidableObject in hidableObjects)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_hidableObjects_14();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach(var hidableObject in hidableObjects)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// hidableObject.SetActive(hide);
		bool L_5 = ___hide0;
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0018:
	{
		// foreach(var hidableObject in hidableObjects)
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
// System.Void ARPlacemente::UpdateModelName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_UpdateModelName_mDF5D81B07140A167F7B8653EE022F8B8EC196AF0 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// modelName.text = currentModels[modelIndex].name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_modelName_15();
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_1 = __this->get_currentModels_20();
		IL2CPP_RUNTIME_CLASS_INIT(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var);
		int32_t L_2 = ((ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_StaticFields*)il2cpp_codegen_static_fields_for(ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_il2cpp_TypeInfo_var))->get_modelIndex_21();
		NullCheck(L_1);
		Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_3;
		L_3 = ModelsContainer_get_Item_mFAAAF555B7175360663C8012930D5EDB00E84008(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = L_3->get_name_4();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void ARPlacemente::OpenCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_OpenCatalog_mD411E08D4D627D207D9D83306DA5D71681925179 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisInstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B_m30F9B9BE01F9895577F390EF74E7DD97D016268A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for(var i = 0; i < parent.transform.childCount; ++i)
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		// Destroy(parent.transform.GetChild(i).gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_parent_23();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// for(var i = 0; i < parent.transform.childCount; ++i)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0023:
	{
		// for(var i = 0; i < parent.transform.childCount; ++i)
		int32_t L_6 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_parent_23();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// for(var i = 0; i < currentModels.Count; i++)
		V_1 = 0;
		goto IL_007d;
	}

IL_003a:
	{
		// var obj = gameObject.AddComponent<InstantiateBlock>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B * L_11;
		L_11 = GameObject_AddComponent_TisInstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B_m30F9B9BE01F9895577F390EF74E7DD97D016268A(L_10, /*hidden argument*/GameObject_AddComponent_TisInstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B_m30F9B9BE01F9895577F390EF74E7DD97D016268A_RuntimeMethod_var);
		// obj.CreateBlock(currentModels[i].image, currentModels[i].name, i, block, parent);
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_12 = __this->get_currentModels_20();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_14;
		L_14 = ModelsContainer_get_Item_mFAAAF555B7175360663C8012930D5EDB00E84008(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_15 = L_14->get_image_5();
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_16 = __this->get_currentModels_20();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_18;
		L_18 = ModelsContainer_get_Item_mFAAAF555B7175360663C8012930D5EDB00E84008(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = L_18->get_name_4();
		int32_t L_20 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_block_16();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_parent_23();
		NullCheck(L_11);
		InstantiateBlock_CreateBlock_m238137E17A5366346F721ACB114931C1DB21284B(L_11, L_15, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		// for(var i = 0; i < currentModels.Count; i++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_007d:
	{
		// for(var i = 0; i < currentModels.Count; i++)
		int32_t L_24 = V_1;
		ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_25 = __this->get_currentModels_20();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = ModelsContainer_get_Count_m6581174AA83451130FE71FD906D056B56A74D2B0(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_003a;
		}
	}
	{
		// GoTo(catalog);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_catalog_22();
		ARPlacemente_GoTo_mE4EC6D6CDE3E01E260FB88DF2240F71617549779(__this, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARPlacemente::EnterURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente_EnterURL_m1F65A7BFE202AEDF7741E929D98B4D3F9D4BDFB4 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m74A10C19AD420EAD8CB421C484EE63501985E018_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m74A10C19AD420EAD8CB421C484EE63501985E018((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m74A10C19AD420EAD8CB421C484EE63501985E018_RuntimeMethod_var);
		return;
	}
}
// System.Void ARPlacemente::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente__ctor_mA1B2467116A4F1FEDF55D3B866B83D891E9AE491 (ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ARPlacemente::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacemente__cctor_m0C687D84556F23B90BB0F67F50E17329A0FA19C6 (const RuntimeMethod* method)
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
// System.Boolean AcceptAllCertificatesSignedWithASpecificPublicKey::ValidateCertificate(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AcceptAllCertificatesSignedWithASpecificPublicKey_ValidateCertificate_mF374C174A4C047EC24E9AB1EBDFF0FDBDCF014E0 (AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___certificateData0, const RuntimeMethod* method)
{
	{
		// return true; // pk.Equals(PUB_KEY);
		return (bool)1;
	}
}
// System.Void AcceptAllCertificatesSignedWithASpecificPublicKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcceptAllCertificatesSignedWithASpecificPublicKey__ctor_mDD36C555CF22D169AE827E0243850C99BE35A99D (AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD * __this, const RuntimeMethod* method)
{
	{
		CertificateHandler__ctor_mEDF27CA23966C563C5E5AE7F90D423AC8CF634D1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AcceptAllCertificatesSignedWithASpecificPublicKey::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcceptAllCertificatesSignedWithASpecificPublicKey__cctor_m1352636C727D04EAC4AA3D6AB813D380BDC61872 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F55A3C2AA2BCC9E0915B06806995BE11A35FDC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string PUB_KEY = "somepublickey";
		((AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_StaticFields*)il2cpp_codegen_static_fields_for(AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_il2cpp_TypeInfo_var))->set_PUB_KEY_1(_stringLiteral0F55A3C2AA2BCC9E0915B06806995BE11A35FDC0);
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
// System.Void InstantiateBlock::CreateBlock(UnityEngine.Sprite,System.String,System.Int32,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateBlock_CreateBlock_m238137E17A5366346F721ACB114931C1DB21284B (InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite0, String_t* ___name1, int32_t ___id2, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___block3, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___parent4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m8A0BE3E4A8DA437230E6FE6E553BD482586250CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_m44EA63B15DE385E2957744D7AD17C24D2188FAAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CCreateBlockU3Eb__0_mA804A003832755FA7C98242C6533B95EA58615BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA * V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA * L_0 = (U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_mCCEA3ABDA201AAF15A4E00AB3145BF143F6D7C92(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_1(__this);
		// print(parent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___parent4;
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_2, /*hidden argument*/NULL);
		// var p = parent.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___parent4;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// print(p);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_1;
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_5, /*hidden argument*/NULL);
		// GameObject newBlock = Instantiate(block, p, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___block3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7(L_6, L_7, (bool)0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		// index = id;
		int32_t L_9 = ___id2;
		__this->set_index_4(L_9);
		// var spriteRenderer = newBlock.transform.GetChild(2).GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_8;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_11, 2, /*hidden argument*/NULL);
		NullCheck(L_12);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13;
		L_13 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_12, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		// spriteRenderer.sprite = sprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_14 = ___sprite0;
		NullCheck(L_13);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_13, L_14, /*hidden argument*/NULL);
		// var myText = newBlock.GetComponentInChildren<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_10;
		NullCheck(L_15);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16;
		L_16 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_15, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		// myText.text = name;
		String_t* L_17 = ___name1;
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_17);
		// var myButton = newBlock.GetComponentInChildren<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_15;
		NullCheck(L_18);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_19;
		L_19 = GameObject_GetComponentInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m8A0BE3E4A8DA437230E6FE6E553BD482586250CB(L_18, /*hidden argument*/GameObject_GetComponentInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m8A0BE3E4A8DA437230E6FE6E553BD482586250CB_RuntimeMethod_var);
		// var arPlacemente = GameObject.FindGameObjectWithTag("Player").GetComponent<ARPlacemente>();
		U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA * L_20 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_21);
		ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * L_22;
		L_22 = GameObject_GetComponent_TisARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_m44EA63B15DE385E2957744D7AD17C24D2188FAAF(L_21, /*hidden argument*/GameObject_GetComponent_TisARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075_m44EA63B15DE385E2957744D7AD17C24D2188FAAF_RuntimeMethod_var);
		NullCheck(L_20);
		L_20->set_arPlacemente_0(L_22);
		// print(arPlacemente);
		U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA * L_23 = V_0;
		NullCheck(L_23);
		ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * L_24 = L_23->get_arPlacemente_0();
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_24, /*hidden argument*/NULL);
		// myButton.onClick.AddListener(() => arPlacemente.ChangeIndex(index));
		NullCheck(L_19);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_25;
		L_25 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_19, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA * L_26 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_27 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_27, L_26, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CCreateBlockU3Eb__0_mA804A003832755FA7C98242C6533B95EA58615BE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_25, L_27, /*hidden argument*/NULL);
		// print(newBlock);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InstantiateBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateBlock__ctor_m60CFC577526AFAF2CD649753AF8FACD3F29AD26D (InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B * __this, const RuntimeMethod* method)
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
// System.Void JsonArray::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray__ctor_m93D4B6B96FD6E34F0245C27C77D90FC8B970C99F (JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m29F7B988F9ED1EF7F0FEF4BEF4F4559A956C3092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JsonArray(string json)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.json = json;
		String_t* L_0 = ___json0;
		__this->set_json_0(L_0);
		// names = new List<ModelName>();
		List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * L_1 = (List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C *)il2cpp_codegen_object_new(List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C_il2cpp_TypeInfo_var);
		List_1__ctor_m29F7B988F9ED1EF7F0FEF4BEF4F4559A956C3092(L_1, /*hidden argument*/List_1__ctor_m29F7B988F9ED1EF7F0FEF4BEF4F4559A956C3092_RuntimeMethod_var);
		__this->set_names_1(L_1);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<ModelName> JsonArray::Deserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * JsonArray_Deserialize_mDEC85FD88B6A1D08CBC2A62E80ED00B6818952C8 (JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m144F637C05E409AFEE7DF8F181DDEE48716672B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	{
		// json = RemoveFirstAndLast(json);
		String_t* L_0 = __this->get_json_0();
		String_t* L_1;
		L_1 = JsonArray_RemoveFirstAndLast_mF1BA08070E505C0251BBB8C409B6FFC0253C2FFD(__this, L_0, /*hidden argument*/NULL);
		__this->set_json_0(L_1);
		// var jsonArray = json.Split(',');
		String_t* L_2 = __this->get_json_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5;
		L_5 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_2, L_4, /*hidden argument*/NULL);
		// foreach(var name in jsonArray)
		V_0 = L_5;
		V_1 = 0;
		goto IL_006f;
	}

IL_002d:
	{
		// foreach(var name in jsonArray)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// var models = RemoveFirstAndLast(name).Split(':');
		String_t* L_10 = V_2;
		String_t* L_11;
		L_11 = JsonArray_RemoveFirstAndLast_mF1BA08070E505C0251BBB8C409B6FFC0253C2FFD(__this, L_10, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		NullCheck(L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14;
		L_14 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_11, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// names.Add(new ModelName(RemoveFirstAndLast(models[0]), RemoveFirstAndLast(models[1])));
		List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * L_15 = __this->get_names_1();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17 = 0;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		String_t* L_19;
		L_19 = JsonArray_RemoveFirstAndLast_mF1BA08070E505C0251BBB8C409B6FFC0253C2FFD(__this, L_18, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		String_t* L_23;
		L_23 = JsonArray_RemoveFirstAndLast_mF1BA08070E505C0251BBB8C409B6FFC0253C2FFD(__this, L_22, /*hidden argument*/NULL);
		ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * L_24 = (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A *)il2cpp_codegen_object_new(ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A_il2cpp_TypeInfo_var);
		ModelName__ctor_m9E39318D628246827974840B16514BA1682656F6(L_24, L_19, L_23, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m144F637C05E409AFEE7DF8F181DDEE48716672B0(L_15, L_24, /*hidden argument*/List_1_Add_m144F637C05E409AFEE7DF8F181DDEE48716672B0_RuntimeMethod_var);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_006f:
	{
		// foreach(var name in jsonArray)
		int32_t L_26 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_002d;
		}
	}
	{
		// return names;
		List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * L_28 = __this->get_names_1();
		return L_28;
	}
}
// System.String JsonArray::RemoveFirstAndLast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonArray_RemoveFirstAndLast_mF1BA08070E505C0251BBB8C409B6FFC0253C2FFD (JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// value = value.Remove(0, 1);
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0(L_0, 0, 1, /*hidden argument*/NULL);
		___value0 = L_1;
		// value = value.Remove(value.Length - 1, 1);
		String_t* L_2 = ___value0;
		String_t* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_5;
		L_5 = String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), 1, /*hidden argument*/NULL);
		___value0 = L_5;
		// return value;
		String_t* L_6 = ___value0;
		return L_6;
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
// System.Void Model::.ctor(System.String,UnityEngine.Sprite,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model__ctor_m95E99F2D3C2D2C922E0138CD7B16404682A799BF (Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * __this, String_t* ___name0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___image1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___model2, const RuntimeMethod* method)
{
	{
		// public Model(string name, Sprite image, GameObject model)
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->set_name_4(L_0);
		// this.image = image;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = ___image1;
		__this->set_image_5(L_1);
		// this.model = model;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___model2;
		__this->set_model_6(L_2);
		// }
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
// System.String ModelName::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModelName_get_Name_m0C62D22D40D681315808073FAD6D8526636533A3 (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ModelName::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelName_set_Name_m74645EAF3F0774D56603ECFC1BAC5D00EA24A7A7 (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String ModelName::get_Plane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModelName_get_Plane_m3D3A8375DD14A35A35CC51798537AE90119BE855 (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, const RuntimeMethod* method)
{
	{
		// public string Plane { get; set; }
		String_t* L_0 = __this->get_U3CPlaneU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ModelName::set_Plane(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelName_set_Plane_mB360435698A1C844DF921347E2BD6966D15180D3 (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Plane { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CPlaneU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void ModelName::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelName__ctor_m9E39318D628246827974840B16514BA1682656F6 (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, String_t* ___name0, String_t* ___plane1, const RuntimeMethod* method)
{
	{
		// public ModelName(string name, string plane)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Name = name;
		String_t* L_0 = ___name0;
		ModelName_set_Name_m74645EAF3F0774D56603ECFC1BAC5D00EA24A7A7_inline(__this, L_0, /*hidden argument*/NULL);
		// Plane = plane;
		String_t* L_1 = ___plane1;
		ModelName_set_Plane_mB360435698A1C844DF921347E2BD6966D15180D3_inline(__this, L_1, /*hidden argument*/NULL);
		// }
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
// Model ModelsContainer::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * ModelsContainer_get_Item_mFAAAF555B7175360663C8012930D5EDB00E84008 (ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAA479BD8AD731B1E955E4DE0EFECA470C0A1C172_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => models[index];
		List_1_t870A276983448F5860BD04A1B217087C58F71CA9 * L_0 = __this->get_models_4();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_2;
		L_2 = List_1_get_Item_mAA479BD8AD731B1E955E4DE0EFECA470C0A1C172_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mAA479BD8AD731B1E955E4DE0EFECA470C0A1C172_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 ModelsContainer::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModelsContainer_get_Count_m6581174AA83451130FE71FD906D056B56A74D2B0 (ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m196F69700C4EF7BF4681F9174F4A64CB8BFC6123_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Count => models.Count;
		List_1_t870A276983448F5860BD04A1B217087C58F71CA9 * L_0 = __this->get_models_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m196F69700C4EF7BF4681F9174F4A64CB8BFC6123_inline(L_0, /*hidden argument*/List_1_get_Count_m196F69700C4EF7BF4681F9174F4A64CB8BFC6123_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void ModelsContainer::Add(Model)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelsContainer_Add_mA86C1839010463E8F5008F018E7AB11E4B876FD8 (ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * __this, Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * ___model0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD1B388B56D39750B3DBBD9E61CF2AD64E6E86182_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Add(Model model) => models.Add(model);
		List_1_t870A276983448F5860BD04A1B217087C58F71CA9 * L_0 = __this->get_models_4();
		Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_1 = ___model0;
		NullCheck(L_0);
		List_1_Add_mD1B388B56D39750B3DBBD9E61CF2AD64E6E86182(L_0, L_1, /*hidden argument*/List_1_Add_mD1B388B56D39750B3DBBD9E61CF2AD64E6E86182_RuntimeMethod_var);
		return;
	}
}
// System.Void ModelsContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelsContainer__ctor_mEA72E8D116706137192C815BC47C49E437AFDCD6 (ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * __this, const RuntimeMethod* method)
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
// System.Void RotateSlider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSlider_Start_m87F73585F5BDD527C155BACC96D2ECC0501BF30D (RotateSlider_t99CBE9B6BF140367070F66FD2E019423977A6788 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotateSlider_SliderUpdate_m5ACAF7160BD8D68A8033279AFBCDD175B0AD340C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ECC919903D2DD4C68EF56FAF041FEF024AB3E50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GameObject.Find("RotateSlider").GetComponent<Slider>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5ECC919903D2DD4C68EF56FAF041FEF024AB3E50, /*hidden argument*/NULL);
		NullCheck(L_0);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1;
		L_1 = GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9(L_0, /*hidden argument*/GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		__this->set_slider_4(L_1);
		// slider.minValue = minValue;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_slider_4();
		float L_3 = __this->get_minValue_5();
		NullCheck(L_2);
		Slider_set_minValue_m253C0E27C8B0275EDAAFD9E97F6DC1E426460F93(L_2, L_3, /*hidden argument*/NULL);
		// slider.maxValue = maxValue;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_slider_4();
		float L_5 = __this->get_maxValue_6();
		NullCheck(L_4);
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_4, L_5, /*hidden argument*/NULL);
		// slider.onValueChanged.AddListener(SliderUpdate);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_6 = __this->get_slider_4();
		NullCheck(L_6);
		SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * L_7;
		L_7 = Slider_get_onValueChanged_m7F480C569A6D668952BE1436691850D13825E129_inline(L_6, /*hidden argument*/NULL);
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_8 = (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)il2cpp_codegen_object_new(UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B(L_8, __this, (intptr_t)((intptr_t)RotateSlider_SliderUpdate_m5ACAF7160BD8D68A8033279AFBCDD175B0AD340C_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_RuntimeMethod_var);
		NullCheck(L_7);
		UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C(L_7, L_8, /*hidden argument*/UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RotateSlider::SliderUpdate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSlider_SliderUpdate_m5ACAF7160BD8D68A8033279AFBCDD175B0AD340C (RotateSlider_t99CBE9B6BF140367070F66FD2E019423977A6788 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// if (!vertical)
		bool L_0 = __this->get_vertical_7();
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		// transform.localEulerAngles = new Vector3(transform.rotation.x, value, transform.rotation.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		float L_5 = ___value0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_4, L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_1, L_9, /*hidden argument*/NULL);
		return;
	}

IL_003a:
	{
		// transform.localEulerAngles = new Vector3(value, transform.rotation.y - 90, transform.rotation.z + 90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_11 = ___value0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), L_11, ((float)il2cpp_codegen_subtract((float)L_14, (float)(90.0f))), ((float)il2cpp_codegen_add((float)L_17, (float)(90.0f))), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_10, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RotateSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSlider__ctor_mA31981D984F24E36EEFB836364D3FAE5EDB9A360 (RotateSlider_t99CBE9B6BF140367070F66FD2E019423977A6788 * __this, const RuntimeMethod* method)
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
// System.Void TextureScale::Point(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_Point_m7E6DCAA95F1A388FDB08AB9D57F2675CC72BA657 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, const RuntimeMethod* method)
{
	{
		// ThreadedScale(tex, newWidth, newHeight, false);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex0;
		int32_t L_1 = ___newWidth1;
		int32_t L_2 = ___newHeight2;
		TextureScale_ThreadedScale_m64614D8D733CF2D471F557C822F9ABFF70FE9C26(L_0, L_1, L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TextureScale::Bilinear(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_Bilinear_mD4AEEF3577915E32E5F2697F7B3DB17A7955E7DD (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, const RuntimeMethod* method)
{
	{
		// ThreadedScale(tex, newWidth, newHeight, true);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex0;
		int32_t L_1 = ___newWidth1;
		int32_t L_2 = ___newHeight2;
		TextureScale_ThreadedScale_m64614D8D733CF2D471F557C822F9ABFF70FE9C26(L_0, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TextureScale::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_ThreadedScale_m64614D8D733CF2D471F557C822F9ABFF70FE9C26 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, bool ___useBilinear3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * V_3 = NULL;
	ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * V_4 = NULL;
	ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * G_B10_0 = NULL;
	{
		// texColors = tex.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1;
		L_1 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_0, /*hidden argument*/NULL);
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_texColors_0(L_1);
		// newColors = new Color[newWidth * newHeight];
		int32_t L_2 = ___newWidth1;
		int32_t L_3 = ___newHeight2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_4 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)));
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_newColors_1(L_4);
		// if (useBilinear)
		bool L_5 = ___useBilinear3;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// ratioX = 1.0f / ((float)newWidth / (tex.width - 1));
		int32_t L_6 = ___newWidth1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___tex0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_ratioX_3(((float)((float)(1.0f)/(float)((float)((float)((float)((float)L_6))/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)))))))));
		// ratioY = 1.0f / ((float)newHeight / (tex.height - 1));
		int32_t L_9 = ___newHeight2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = ___tex0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_ratioY_4(((float)((float)(1.0f)/(float)((float)((float)((float)((float)L_9))/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)))))))));
		// }
		goto IL_0069;
	}

IL_004b:
	{
		// ratioX = ((float)tex.width) / newWidth;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = ___tex0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		int32_t L_14 = ___newWidth1;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_ratioX_3(((float)((float)((float)((float)L_13))/(float)((float)((float)L_14)))));
		// ratioY = ((float)tex.height) / newHeight;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = ___tex0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		int32_t L_17 = ___newHeight2;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_ratioY_4(((float)((float)((float)((float)L_16))/(float)((float)((float)L_17)))));
	}

IL_0069:
	{
		// w = tex.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = ___tex0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_w_2(L_19);
		// w2 = newWidth;
		int32_t L_20 = ___newWidth1;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_w2_5(L_20);
		// var cores = Mathf.Min(SystemInfo.processorCount, newHeight);
		int32_t L_21;
		L_21 = SystemInfo_get_processorCount_mBAA6A01218CF7F03638A6016B6881466830FD0D5(/*hidden argument*/NULL);
		int32_t L_22 = ___newHeight2;
		int32_t L_23;
		L_23 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		// var slice = newHeight / cores;
		int32_t L_24 = ___newHeight2;
		int32_t L_25 = V_0;
		V_1 = ((int32_t)((int32_t)L_24/(int32_t)L_25));
		// finishCount = 0;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_finishCount_6(0);
		// if (mutex == null)
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_26 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_mutex_7();
		if (L_26)
		{
			goto IL_00a2;
		}
	}
	{
		// mutex = new Mutex(false);
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_27 = (Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 *)il2cpp_codegen_object_new(Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_il2cpp_TypeInfo_var);
		Mutex__ctor_mE64D51F0538989539F6C059AB7E247423B699BBE(L_27, (bool)0, /*hidden argument*/NULL);
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_mutex_7(L_27);
	}

IL_00a2:
	{
		// if (cores > 1)
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) <= ((int32_t)1)))
		{
			goto IL_0119;
		}
	}
	{
		// int i = 0;
		V_2 = 0;
		// for (i = 0; i < cores - 1; i++)
		V_2 = 0;
		goto IL_00e6;
	}

IL_00ac:
	{
		// threadData = new ThreadData(slice * i, slice * (i + 1));
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		int32_t L_31 = V_1;
		int32_t L_32 = V_2;
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_33 = (ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A *)il2cpp_codegen_object_new(ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		ThreadData__ctor_mA2E955D69EA603EB22B6B27718C8F195C3825D83(L_33, ((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)L_30)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)))), /*hidden argument*/NULL);
		V_3 = L_33;
		// ParameterizedThreadStart ts = useBilinear ? new ParameterizedThreadStart(BilinearScale) : new ParameterizedThreadStart(PointScale);
		bool L_34 = ___useBilinear3;
		if (L_34)
		{
			goto IL_00cb;
		}
	}
	{
		ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * L_35 = (ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 *)il2cpp_codegen_object_new(ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m6F49448AAE802068CE1DB1BE519962708DA871B0(L_35, NULL, (intptr_t)((intptr_t)TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B10_0 = L_35;
		goto IL_00d7;
	}

IL_00cb:
	{
		ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * L_36 = (ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 *)il2cpp_codegen_object_new(ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m6F49448AAE802068CE1DB1BE519962708DA871B0(L_36, NULL, (intptr_t)((intptr_t)TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B10_0 = L_36;
	}

IL_00d7:
	{
		// Thread thread = new Thread(ts);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_37 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_m4E8C9D36164CFCFD65989CAE0F6456AC40BC4492(L_37, G_B10_0, /*hidden argument*/NULL);
		// thread.Start(threadData);
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_38 = V_3;
		NullCheck(L_37);
		Thread_Start_m11EE2B4E0C1BC8520655644C1C31C0CFFC23B5B7(L_37, L_38, /*hidden argument*/NULL);
		// for (i = 0; i < cores - 1; i++)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00e6:
	{
		// for (i = 0; i < cores - 1; i++)
		int32_t L_40 = V_2;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)))))
		{
			goto IL_00ac;
		}
	}
	{
		// threadData = new ThreadData(slice * i, newHeight);
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		int32_t L_44 = ___newHeight2;
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_45 = (ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A *)il2cpp_codegen_object_new(ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		ThreadData__ctor_mA2E955D69EA603EB22B6B27718C8F195C3825D83(L_45, ((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)L_43)), L_44, /*hidden argument*/NULL);
		V_3 = L_45;
		// if (useBilinear)
		bool L_46 = ___useBilinear3;
		if (!L_46)
		{
			goto IL_0101;
		}
	}
	{
		// BilinearScale(threadData);
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_47 = V_3;
		TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5(L_47, /*hidden argument*/NULL);
		// }
		goto IL_010f;
	}

IL_0101:
	{
		// PointScale(threadData);
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_48 = V_3;
		TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331(L_48, /*hidden argument*/NULL);
		goto IL_010f;
	}

IL_0109:
	{
		// Thread.Sleep(1);
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
	}

IL_010f:
	{
		// while (finishCount < cores)
		int32_t L_49 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_finishCount_6();
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0109;
		}
	}
	{
		// }
		goto IL_0135;
	}

IL_0119:
	{
		// ThreadData threadData = new ThreadData(0, newHeight);
		int32_t L_51 = ___newHeight2;
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_52 = (ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A *)il2cpp_codegen_object_new(ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		ThreadData__ctor_mA2E955D69EA603EB22B6B27718C8F195C3825D83(L_52, 0, L_51, /*hidden argument*/NULL);
		V_4 = L_52;
		// if (useBilinear)
		bool L_53 = ___useBilinear3;
		if (!L_53)
		{
			goto IL_012e;
		}
	}
	{
		// BilinearScale(threadData);
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_54 = V_4;
		TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5(L_54, /*hidden argument*/NULL);
		// }
		goto IL_0135;
	}

IL_012e:
	{
		// PointScale(threadData);
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_55 = V_4;
		TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331(L_55, /*hidden argument*/NULL);
	}

IL_0135:
	{
		// tex.Resize(newWidth, newHeight);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_56 = ___tex0;
		int32_t L_57 = ___newWidth1;
		int32_t L_58 = ___newHeight2;
		NullCheck(L_56);
		bool L_59;
		L_59 = Texture2D_Resize_m3B472A6ED37D683DC4162504F6DCF42E1FA2195C(L_56, L_57, L_58, /*hidden argument*/NULL);
		// tex.SetPixels(newColors);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_60 = ___tex0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_61 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_newColors_1();
		NullCheck(L_60);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_60, L_61, /*hidden argument*/NULL);
		// tex.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_62 = ___tex0;
		NullCheck(L_62);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_62, /*hidden argument*/NULL);
		// texColors = null;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_texColors_0((ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)NULL);
		// newColors = null;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_newColors_1((ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)NULL);
		// }
		return;
	}
}
// System.Void TextureScale::BilinearScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	{
		// ThreadData threadData = (ThreadData)obj;
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A *)CastclassClass((RuntimeObject*)L_0, ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var));
		// for (var y = threadData.start; y < threadData.end; y++)
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_start_0();
		V_1 = L_2;
		goto IL_00e7;
	}

IL_0013:
	{
		// int yFloor = (int)Mathf.Floor(y * ratioY);
		int32_t L_3 = V_1;
		float L_4 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioY_4();
		float L_5;
		L_5 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_3)), (float)L_4)));
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		// var y1 = yFloor * w;
		int32_t L_6 = V_2;
		int32_t L_7 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w_2();
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_7));
		// var y2 = (yFloor + 1) * w;
		int32_t L_8 = V_2;
		int32_t L_9 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w_2();
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), (int32_t)L_9));
		// var yw = y * w2;
		int32_t L_10 = V_1;
		int32_t L_11 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w2_5();
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11));
		// for (var x = 0; x < w2; x++)
		V_6 = 0;
		goto IL_00d7;
	}

IL_0046:
	{
		// int xFloor = (int)Mathf.Floor(x * ratioX);
		int32_t L_12 = V_6;
		float L_13 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioX_3();
		float L_14;
		L_14 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_12)), (float)L_13)));
		V_7 = il2cpp_codegen_cast_double_to_int<int32_t>(L_14);
		// var xLerp = x * ratioX - xFloor;
		int32_t L_15 = V_6;
		float L_16 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioX_3();
		int32_t L_17 = V_7;
		V_8 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_15)), (float)L_16)), (float)((float)((float)L_17))));
		// newColors[yw + x] = ColorLerpUnclamped(ColorLerpUnclamped(texColors[y1 + xFloor], texColors[y1 + xFloor + 1], xLerp),
		//                                        ColorLerpUnclamped(texColors[y2 + xFloor], texColors[y2 + xFloor + 1], xLerp),
		//                                        y * ratioY - yFloor);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_18 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_newColors_1();
		int32_t L_19 = V_5;
		int32_t L_20 = V_6;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_21 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_texColors_0();
		int32_t L_22 = V_3;
		int32_t L_23 = V_7;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_26 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_texColors_0();
		int32_t L_27 = V_3;
		int32_t L_28 = V_7;
		NullCheck(L_26);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28)), (int32_t)1));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = V_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = TextureScale_ColorLerpUnclamped_m17AEA77F6A498CAC07EA55DF16E7A46774D31138(L_25, L_30, L_31, /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_33 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_texColors_0();
		int32_t L_34 = V_4;
		int32_t L_35 = V_7;
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_38 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_texColors_0();
		int32_t L_39 = V_4;
		int32_t L_40 = V_7;
		NullCheck(L_38);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40)), (int32_t)1));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		float L_43 = V_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44;
		L_44 = TextureScale_ColorLerpUnclamped_m17AEA77F6A498CAC07EA55DF16E7A46774D31138(L_37, L_42, L_43, /*hidden argument*/NULL);
		int32_t L_45 = V_1;
		float L_46 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioY_4();
		int32_t L_47 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		L_48 = TextureScale_ColorLerpUnclamped_m17AEA77F6A498CAC07EA55DF16E7A46774D31138(L_32, L_44, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_45)), (float)L_46)), (float)((float)((float)L_47)))), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_48);
		// for (var x = 0; x < w2; x++)
		int32_t L_49 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00d7:
	{
		// for (var x = 0; x < w2; x++)
		int32_t L_50 = V_6;
		int32_t L_51 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w2_5();
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0046;
		}
	}
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00e7:
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_53 = V_1;
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_end_1();
		if ((((int32_t)L_53) < ((int32_t)L_55)))
		{
			goto IL_0013;
		}
	}
	{
		// mutex.WaitOne();
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_56 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_mutex_7();
		NullCheck(L_56);
		bool L_57;
		L_57 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_56);
		// finishCount++;
		int32_t L_58 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_finishCount_6();
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_finishCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1)));
		// mutex.ReleaseMutex();
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_59 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_mutex_7();
		NullCheck(L_59);
		Mutex_ReleaseMutex_mDF6C95C5F169F7345539CAECFA264A4D4687B190(L_59, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TextureScale::PointScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// ThreadData threadData = (ThreadData)obj;
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A *)CastclassClass((RuntimeObject*)L_0, ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var));
		// for (var y = threadData.start; y < threadData.end; y++)
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_start_0();
		V_1 = L_2;
		goto IL_0065;
	}

IL_0010:
	{
		// var thisY = (int)(ratioY * y) * w;
		float L_3 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioY_4();
		int32_t L_4 = V_1;
		int32_t L_5 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w_2();
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)L_3, (float)((float)((float)L_4))))), (int32_t)L_5));
		// var yw = y * w2;
		int32_t L_6 = V_1;
		int32_t L_7 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w2_5();
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_7));
		// for (var x = 0; x < w2; x++)
		V_4 = 0;
		goto IL_0058;
	}

IL_002d:
	{
		// newColors[yw + x] = texColors[(int)(thisY + ratioX * x)];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_newColors_1();
		int32_t L_9 = V_3;
		int32_t L_10 = V_4;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_texColors_0();
		int32_t L_12 = V_2;
		float L_13 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioX_3();
		int32_t L_14 = V_4;
		NullCheck(L_11);
		int32_t L_15 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add((float)((float)((float)L_12)), (float)((float)il2cpp_codegen_multiply((float)L_13, (float)((float)((float)L_14)))))));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_16);
		// for (var x = 0; x < w2; x++)
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0058:
	{
		// for (var x = 0; x < w2; x++)
		int32_t L_18 = V_4;
		int32_t L_19 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w2_5();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_002d;
		}
	}
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0065:
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_21 = V_1;
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_end_1();
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0010;
		}
	}
	{
		// mutex.WaitOne();
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_24 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_mutex_7();
		NullCheck(L_24);
		bool L_25;
		L_25 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_24);
		// finishCount++;
		int32_t L_26 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_finishCount_6();
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_finishCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
		// mutex.ReleaseMutex();
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_27 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_mutex_7();
		NullCheck(L_27);
		Mutex_ReleaseMutex_mDF6C95C5F169F7345539CAECFA264A4D4687B190(L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Color TextureScale::ColorLerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextureScale_ColorLerpUnclamped_m17AEA77F6A498CAC07EA55DF16E7A46774D31138 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c10, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c21, float ___value2, const RuntimeMethod* method)
{
	{
		// return new Color(c1.r + (c2.r - c1.r) * value,
		//                   c1.g + (c2.g - c1.g) * value,
		//                   c1.b + (c2.b - c1.b) * value,
		//                   c1.a + (c2.a - c1.a) * value);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___c10;
		float L_1 = L_0.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___c21;
		float L_3 = L_2.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___c10;
		float L_5 = L_4.get_r_0();
		float L_6 = ___value2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___c10;
		float L_8 = L_7.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ___c21;
		float L_10 = L_9.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11 = ___c10;
		float L_12 = L_11.get_g_1();
		float L_13 = ___value2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = ___c10;
		float L_15 = L_14.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = ___c21;
		float L_17 = L_16.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = ___c10;
		float L_19 = L_18.get_b_2();
		float L_20 = ___value2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = ___c10;
		float L_22 = L_21.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = ___c21;
		float L_24 = L_23.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = ___c10;
		float L_26 = L_25.get_a_3();
		float L_27 = ___value2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_28), ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), (float)L_6)))), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)), (float)L_13)))), ((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), (float)L_20)))), ((float)il2cpp_codegen_add((float)L_22, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)), (float)L_27)))), /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void TextureScale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale__ctor_m85BC47BFDE3895789BA670CD1BCADD254BFB88D0 (TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Threading.Tasks.Task`1<System.Boolean> WebClient::ServerStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * WebClient_ServerStart_m6EDC257869FD07B5AB183DF0ABDDA6B2954EA920 (WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_m4DD63793C18DA06302A3682E484D83C37D6775BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___url0;
		(&V_0)->set_url_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  L_1;
		L_1 = AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105  L_2 = V_0;
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_1_Start_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_m4DD63793C18DA06302A3682E484D83C37D6775BF((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)(&V_1), (U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_m4DD63793C18DA06302A3682E484D83C37D6775BF_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> WebClient::GetNamesCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * WebClient_GetNamesCoroutine_m2B88C7A003D4AD36DFD622825015D2959B224AB4 (WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_m24CF8751D071F731181F414484846708D927AA64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9  L_1 = V_0;
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_m24CF8751D071F731181F414484846708D927AA64((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)(&V_1), (U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_m24CF8751D071F731181F414484846708D927AA64_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> WebClient::GetSpritesCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * WebClient_GetSpritesCoroutine_m48A02EF93A99AE4951F8F4EEFD8DC2AF19963022 (WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m1C3CF23E0C97E266B55A1A5DDDB81238230F6783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___name0;
		(&V_0)->set_name_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  L_1;
		L_1 = AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7  L_2 = V_0;
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m1C3CF23E0C97E266B55A1A5DDDB81238230F6783((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)(&V_1), (U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m1C3CF23E0C97E266B55A1A5DDDB81238230F6783_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> WebClient::GetModelsCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * WebClient_GetModelsCoroutine_m6D09773E81AB31793BC2B961828E88717B4DCA72 (WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_mF9B226FF6174553DD9DDEDE3BE5C6FB996E8DD0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___name0;
		(&V_0)->set_name_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  L_1;
		L_1 = AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F  L_2 = V_0;
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_mF9B226FF6174553DD9DDEDE3BE5C6FB996E8DD0D((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)(&V_1), (U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_mF9B226FF6174553DD9DDEDE3BE5C6FB996E8DD0D_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void WebClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebClient__ctor_m60FCABE971731D6CF7F142F4F49D6A7F90CD0CDF (WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * __this, const RuntimeMethod* method)
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
// System.Void ARPlacemente/<EnterURL>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnterURLU3Ed__40_MoveNext_mBF12E93FEA10F83AA30F62E2AF1814E403D7F500 (U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m97023CDF699845937B60AE8D20C727F6C7ED726C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59B44731EA69DAEEA77A27D27FEEB5479325B82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC072AC4DE4E35912B5F0AEE9CFEDA10AD224FBDC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * V_1 = NULL;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0072;
			}
		}

IL_0011:
		{
			// GoTo(chooseCanvas);
			ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * L_3 = V_1;
			ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * L_4 = V_1;
			NullCheck(L_4);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_chooseCanvas_25();
			NullCheck(L_3);
			ARPlacemente_GoTo_mE4EC6D6CDE3E01E260FB88DF2240F71617549779(L_3, L_5, /*hidden argument*/NULL);
			// text.text = "Loading Models";
			ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * L_6 = V_1;
			NullCheck(L_6);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = L_6->get_text_27();
			NullCheck(L_7);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteralB59B44731EA69DAEEA77A27D27FEEB5479325B82);
			// await client.ServerStart(url.text);
			ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * L_8 = V_1;
			NullCheck(L_8);
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_9 = L_8->get_client_26();
			ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * L_10 = V_1;
			NullCheck(L_10);
			InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_11 = L_10->get_url_24();
			NullCheck(L_11);
			String_t* L_12;
			L_12 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_11, /*hidden argument*/NULL);
			NullCheck(L_9);
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_13;
			L_13 = WebClient_ServerStart_m6EDC257869FD07B5AB183DF0ABDDA6B2954EA920(L_9, L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_14;
			L_14 = Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041(L_13, /*hidden argument*/Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
			V_2 = L_14;
			bool L_15;
			L_15 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_008e;
			}
		}

IL_0052:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_17 = V_2;
			__this->set_U3CU3Eu__1_3(L_17);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m97023CDF699845937B60AE8D20C727F6C7ED726C((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_18, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_2), (U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095_m97023CDF699845937B60AE8D20C727F6C7ED726C_RuntimeMethod_var);
			goto IL_00d2;
		}

IL_0072:
		{
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_19 = __this->get_U3CU3Eu__1_3();
			V_2 = L_19;
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_20 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
		}

IL_008e:
		{
			bool L_22;
			L_22 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
			// text.text = "Models were loaded";
			ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * L_23 = V_1;
			NullCheck(L_23);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = L_23->get_text_27();
			NullCheck(L_24);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, _stringLiteralC072AC4DE4E35912B5F0AEE9CFEDA10AD224FBDC);
			goto IL_00bf;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a8;
		}
		throw e;
	}

CATCH_00a8:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_26 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_25, L_26, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d2;
	} // end catch (depth: 1)

IL_00bf:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_27, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnterURLU3Ed__40_MoveNext_mBF12E93FEA10F83AA30F62E2AF1814E403D7F500_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 * _thisAdjusted = reinterpret_cast<U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 *>(__this + _offset);
	U3CEnterURLU3Ed__40_MoveNext_mBF12E93FEA10F83AA30F62E2AF1814E403D7F500(_thisAdjusted, method);
}
// System.Void ARPlacemente/<EnterURL>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnterURLU3Ed__40_SetStateMachine_m8EED9F0FFDB447544E8E0ACC48B5C660AD3D4D50 (U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnterURLU3Ed__40_SetStateMachine_m8EED9F0FFDB447544E8E0ACC48B5C660AD3D4D50_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 * _thisAdjusted = reinterpret_cast<U3CEnterURLU3Ed__40_tE60AFF875EDF9600442E050C42004CB54FB7E095 *>(__this + _offset);
	U3CEnterURLU3Ed__40_SetStateMachine_m8EED9F0FFDB447544E8E0ACC48B5C660AD3D4D50(_thisAdjusted, ___stateMachine0, method);
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
// System.Void InstantiateBlock/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mCCEA3ABDA201AAF15A4E00AB3145BF143F6D7C92 (U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InstantiateBlock/<>c__DisplayClass1_0::<CreateBlock>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CCreateBlockU3Eb__0_mA804A003832755FA7C98242C6533B95EA58615BE (U3CU3Ec__DisplayClass1_0_t47E6E4C821B26937FFA81C5A835F74C3D6D74CFA * __this, const RuntimeMethod* method)
{
	{
		// myButton.onClick.AddListener(() => arPlacemente.ChangeIndex(index));
		ARPlacemente_t95D8EC9D4EADB60E99DC5ECC14C1E26A0FC87075 * L_0 = __this->get_arPlacemente_0();
		InstantiateBlock_tC0F5F8E12C0365EF5064D9F27F680BDE66F6DC7B * L_1 = __this->get_U3CU3E4__this_1();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_index_4();
		NullCheck(L_0);
		ARPlacemente_ChangeIndex_m157349FF01E9845527E95EEAE62E881F4A556551(L_0, L_2, /*hidden argument*/NULL);
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
// System.Void TextureScale/ThreadData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadData__ctor_mA2E955D69EA603EB22B6B27718C8F195C3825D83 (ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * __this, int32_t ___s0, int32_t ___e1, const RuntimeMethod* method)
{
	{
		// public ThreadData(int s, int e)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// start = s;
		int32_t L_0 = ___s0;
		__this->set_start_0(L_0);
		// end = e;
		int32_t L_1 = ___e1;
		__this->set_end_1(L_1);
		// }
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
// System.Void WebClient/<GetModelsCoroutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetModelsCoroutineU3Ed__11_MoveNext_m85EA1D6413D311BD9DC1D675CFABE4E5852B9F64 (U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_m490D805FCB3252F22F774022B982F39019B0F0F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA3216124D377523ADC283D9C29B47790F6D5839);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * V_1 = NULL;
	bool V_2 = false;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00ab;
			}
		}

IL_0014:
		{
			// var request = UnityWebRequestAssetBundle.GetAssetBundle(url + "/asset/" + name);
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_url_4();
			String_t* L_5 = __this->get_name_3();
			String_t* L_6;
			L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_4, _stringLiteralBA3216124D377523ADC283D9C29B47790F6D5839, L_5, /*hidden argument*/NULL);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7;
			L_7 = UnityWebRequestAssetBundle_GetAssetBundle_m59D1CAF6EBF34A45A33EE4627AFED7109FF99B26(L_6, /*hidden argument*/NULL);
			__this->set_U3CrequestU3E5__2_4(L_7);
			// request.certificateHandler = new AcceptAllCertificatesSignedWithASpecificPublicKey();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_U3CrequestU3E5__2_4();
			AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD * L_9 = (AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD *)il2cpp_codegen_object_new(AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_il2cpp_TypeInfo_var);
			AcceptAllCertificatesSignedWithASpecificPublicKey__ctor_mDD36C555CF22D169AE827E0243850C99BE35A99D(L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			UnityWebRequest_set_certificateHandler_mBB6DDBB83B2639B1D47EFCDDDCC56E1217D139F7(L_8, L_9, /*hidden argument*/NULL);
			// print(4);
			int32_t L_10 = 4;
			RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_11, /*hidden argument*/NULL);
			// var operation = request.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CrequestU3E5__2_4();
			NullCheck(L_12);
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_13;
			L_13 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_12, /*hidden argument*/NULL);
			__this->set_U3CoperationU3E5__3_5(L_13);
			// print(3);
			int32_t L_14 = 3;
			RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_15, /*hidden argument*/NULL);
			goto IL_00cf;
		}

IL_006e:
		{
			// await Task.Yield();
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_16;
			L_16 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
			V_5 = L_16;
			YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_17;
			L_17 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_5), /*hidden argument*/NULL);
			V_4 = L_17;
			bool L_18;
			L_18 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_00c8;
			}
		}

IL_0087:
		{
			int32_t L_19 = 0;
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
			YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_20 = V_4;
			__this->set_U3CU3Eu__1_6(L_20);
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_m490D805FCB3252F22F774022B982F39019B0F0F1((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_21, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), (U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F_m490D805FCB3252F22F774022B982F39019B0F0F1_RuntimeMethod_var);
			goto IL_015d;
		}

IL_00ab:
		{
			YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_22 = __this->get_U3CU3Eu__1_6();
			V_4 = L_22;
			YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_23 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_23, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->set_U3CU3E1__state_0(L_24);
		}

IL_00c8:
		{
			YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
		}

IL_00cf:
		{
			// while (!operation.isDone)
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_25 = __this->get_U3CoperationU3E5__3_5();
			NullCheck(L_25);
			bool L_26;
			L_26 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_25, /*hidden argument*/NULL);
			if (!L_26)
			{
				goto IL_006e;
			}
		}

IL_00dc:
		{
			// var model = DownloadHandlerAssetBundle.GetContent(request).LoadAsset(name) as GameObject;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_27 = __this->get_U3CrequestU3E5__2_4();
			AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_28;
			L_28 = DownloadHandlerAssetBundle_GetContent_mB1D51000A1B402A8045228FC6399315D82916463(L_27, /*hidden argument*/NULL);
			String_t* L_29 = __this->get_name_3();
			NullCheck(L_28);
			Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_30;
			L_30 = AssetBundle_LoadAsset_m598BB4E86B07C2BADAE6ED6FFBE5BB5E7A3392D5(L_28, L_29, /*hidden argument*/NULL);
			V_3 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_30, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
			// print(model);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_3;
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_31, /*hidden argument*/NULL);
			// models.Add(name, model);
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_32 = V_1;
			NullCheck(L_32);
			Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_33 = L_32->get_models_6();
			String_t* L_34 = __this->get_name_3();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_3;
			NullCheck(L_33);
			Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78(L_33, L_34, L_35, /*hidden argument*/Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var);
			// return true;
			V_2 = (bool)1;
			goto IL_013b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0114;
		}
		throw e;
	}

CATCH_0114:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrequestU3E5__2_4((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
		__this->set_U3CoperationU3E5__3_5((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)NULL);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_36 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_37 = V_6;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_36, L_37, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_015d;
	} // end catch (depth: 1)

IL_013b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrequestU3E5__2_4((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
		__this->set_U3CoperationU3E5__3_5((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)NULL);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_38 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_39 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_38, L_39, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_015d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetModelsCoroutineU3Ed__11_MoveNext_m85EA1D6413D311BD9DC1D675CFABE4E5852B9F64_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F * _thisAdjusted = reinterpret_cast<U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F *>(__this + _offset);
	U3CGetModelsCoroutineU3Ed__11_MoveNext_m85EA1D6413D311BD9DC1D675CFABE4E5852B9F64(_thisAdjusted, method);
}
// System.Void WebClient/<GetModelsCoroutine>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetModelsCoroutineU3Ed__11_SetStateMachine_m65CCD0AAC7E671E6F615353B282C0440AEC14236 (U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetModelsCoroutineU3Ed__11_SetStateMachine_m65CCD0AAC7E671E6F615353B282C0440AEC14236_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F * _thisAdjusted = reinterpret_cast<U3CGetModelsCoroutineU3Ed__11_tFE00B30931A6B16F0BC3E7E29B3BF5C96B88BA5F *>(__this + _offset);
	U3CGetModelsCoroutineU3Ed__11_SetStateMachine_m65CCD0AAC7E671E6F615353B282C0440AEC14236(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebClient/<GetNamesCoroutine>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNamesCoroutineU3Ed__9_MoveNext_m7ADF2267AFCBB4D1EFAD32005FD9A4241EAA21C9 (U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_mB287AE9B6FE521D83D8451DDCFD01FAE0CC42ED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m29F7B988F9ED1EF7F0FEF4BEF4F4559A956C3092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAAD0E775C667A0F97729CA515E4E9AA3E12C554);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * V_1 = NULL;
	bool V_2 = false;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_4;
	memset((&V_4), 0, sizeof(V_4));
	JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15 * V_5 = NULL;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0042;
			}
		}

IL_0011:
		{
			// print(2);
			int32_t L_3 = 2;
			RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_4, /*hidden argument*/NULL);
			// names = new List<ModelName>();
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_5 = V_1;
			List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * L_6 = (List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C *)il2cpp_codegen_object_new(List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C_il2cpp_TypeInfo_var);
			List_1__ctor_m29F7B988F9ED1EF7F0FEF4BEF4F4559A956C3092(L_6, /*hidden argument*/List_1__ctor_m29F7B988F9ED1EF7F0FEF4BEF4F4559A956C3092_RuntimeMethod_var);
			NullCheck(L_5);
			L_5->set_names_7(L_6);
			// using var request = UnityWebRequest.Get(url + "/start");
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = L_7->get_url_4();
			String_t* L_9;
			L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_8, _stringLiteralBAAD0E775C667A0F97729CA515E4E9AA3E12C554, /*hidden argument*/NULL);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10;
			L_10 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_9, /*hidden argument*/NULL);
			__this->set_U3CrequestU3E5__2_3(L_10);
		}

IL_0042:
		{
		}

IL_0043:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_11 = V_0;
				if (!L_11)
				{
					goto IL_00a4;
				}
			}

IL_0046:
			{
				// request.certificateHandler = new AcceptAllCertificatesSignedWithASpecificPublicKey();
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CrequestU3E5__2_3();
				AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD * L_13 = (AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD *)il2cpp_codegen_object_new(AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_il2cpp_TypeInfo_var);
				AcceptAllCertificatesSignedWithASpecificPublicKey__ctor_mDD36C555CF22D169AE827E0243850C99BE35A99D(L_13, /*hidden argument*/NULL);
				NullCheck(L_12);
				UnityWebRequest_set_certificateHandler_mBB6DDBB83B2639B1D47EFCDDDCC56E1217D139F7(L_12, L_13, /*hidden argument*/NULL);
				// var operation = request.SendWebRequest();
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CrequestU3E5__2_3();
				NullCheck(L_14);
				UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_15;
				L_15 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_14, /*hidden argument*/NULL);
				__this->set_U3CoperationU3E5__3_4(L_15);
				goto IL_00c7;
			}

IL_0069:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_16;
				L_16 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_4 = L_16;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_17;
				L_17 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_4), /*hidden argument*/NULL);
				V_3 = L_17;
				bool L_18;
				L_18 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_3), /*hidden argument*/NULL);
				if (L_18)
				{
					goto IL_00c0;
				}
			}

IL_0081:
			{
				int32_t L_19 = 0;
				V_0 = L_19;
				__this->set_U3CU3E1__state_0(L_19);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_20 = V_3;
				__this->set_U3CU3Eu__1_5(L_20);
				AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_mB287AE9B6FE521D83D8451DDCFD01FAE0CC42ED2((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_21, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_3), (U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9_mB287AE9B6FE521D83D8451DDCFD01FAE0CC42ED2_RuntimeMethod_var);
				IL2CPP_LEAVE(0x187, FINALLY_0126);
			}

IL_00a4:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_22 = __this->get_U3CU3Eu__1_5();
				V_3 = L_22;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_23 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_23, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_24 = (-1);
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
			}

IL_00c0:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_3), /*hidden argument*/NULL);
			}

IL_00c7:
			{
				// while (!operation.isDone)
				UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_25 = __this->get_U3CoperationU3E5__3_4();
				NullCheck(L_25);
				bool L_26;
				L_26 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_25, /*hidden argument*/NULL);
				if (!L_26)
				{
					goto IL_0069;
				}
			}

IL_00d4:
			{
				// if (request.result == UnityWebRequest.Result.Success)
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_27 = __this->get_U3CrequestU3E5__2_3();
				NullCheck(L_27);
				int32_t L_28;
				L_28 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_27, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_28) == ((uint32_t)1))))
				{
					goto IL_0112;
				}
			}

IL_00e2:
			{
				// var jsonArray = new JsonArray(request.downloadHandler.text);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_29 = __this->get_U3CrequestU3E5__2_3();
				NullCheck(L_29);
				DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_30;
				L_30 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_29, /*hidden argument*/NULL);
				NullCheck(L_30);
				String_t* L_31;
				L_31 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_30, /*hidden argument*/NULL);
				JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15 * L_32 = (JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15 *)il2cpp_codegen_object_new(JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15_il2cpp_TypeInfo_var);
				JsonArray__ctor_m93D4B6B96FD6E34F0245C27C77D90FC8B970C99F(L_32, L_31, /*hidden argument*/NULL);
				V_5 = L_32;
				// jsonArray.Deserialize();
				JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15 * L_33 = V_5;
				NullCheck(L_33);
				List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * L_34;
				L_34 = JsonArray_Deserialize_mDEC85FD88B6A1D08CBC2A62E80ED00B6818952C8(L_33, /*hidden argument*/NULL);
				// names = jsonArray.names;
				WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_35 = V_1;
				JsonArray_t74CC3EF812B3DC1D80265058D54D9101349B2A15 * L_36 = V_5;
				NullCheck(L_36);
				List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * L_37 = L_36->get_names_1();
				NullCheck(L_35);
				L_35->set_names_7(L_37);
				// return true;
				V_2 = (bool)1;
				IL2CPP_LEAVE(0x165, FINALLY_0126);
			}

IL_0112:
			{
				// print(request.error);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_38 = __this->get_U3CrequestU3E5__2_3();
				NullCheck(L_38);
				String_t* L_39;
				L_39 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_38, /*hidden argument*/NULL);
				MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_39, /*hidden argument*/NULL);
				// return false;
				V_2 = (bool)0;
				IL2CPP_LEAVE(0x165, FINALLY_0126);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0126;
		}

FINALLY_0126:
		{ // begin finally (depth: 2)
			{
				int32_t L_40 = V_0;
				if ((((int32_t)L_40) >= ((int32_t)0)))
				{
					goto IL_013d;
				}
			}

IL_012a:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_41 = __this->get_U3CrequestU3E5__2_3();
				if (!L_41)
				{
					goto IL_013d;
				}
			}

IL_0132:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_42 = __this->get_U3CrequestU3E5__2_3();
				NullCheck(L_42);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_42);
			}

IL_013d:
			{
				IL2CPP_END_FINALLY(294)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(294)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x187, IL_0187)
			IL2CPP_JUMP_TBL(0x165, IL_0165)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013e;
		}
		throw e;
	}

CATCH_013e:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrequestU3E5__2_3((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
		__this->set_U3CoperationU3E5__3_4((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)NULL);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_43 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_44 = V_6;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_43, L_44, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0187;
	} // end catch (depth: 1)

IL_0165:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrequestU3E5__2_3((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
		__this->set_U3CoperationU3E5__3_4((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)NULL);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_46 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_45, L_46, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_0187:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNamesCoroutineU3Ed__9_MoveNext_m7ADF2267AFCBB4D1EFAD32005FD9A4241EAA21C9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 * _thisAdjusted = reinterpret_cast<U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 *>(__this + _offset);
	U3CGetNamesCoroutineU3Ed__9_MoveNext_m7ADF2267AFCBB4D1EFAD32005FD9A4241EAA21C9(_thisAdjusted, method);
}
// System.Void WebClient/<GetNamesCoroutine>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNamesCoroutineU3Ed__9_SetStateMachine_m4C0BB4403D11AAB2C6AF7DB7AB9DD44A16E505ED (U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNamesCoroutineU3Ed__9_SetStateMachine_m4C0BB4403D11AAB2C6AF7DB7AB9DD44A16E505ED_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 * _thisAdjusted = reinterpret_cast<U3CGetNamesCoroutineU3Ed__9_t3D8329F99C463D1B0352013D7F5E40674FE898D9 *>(__this + _offset);
	U3CGetNamesCoroutineU3Ed__9_SetStateMachine_m4C0BB4403D11AAB2C6AF7DB7AB9DD44A16E505ED(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebClient/<GetSpritesCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSpritesCoroutineU3Ed__10_MoveNext_m9A631756224F1A6E281F7C0FC5DE228375674851 (U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m87F5EABDD4E8ACD63D9C795B26FFD2340923E866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m91C7214CAD77724AD4FE720D63B104B36FF34A1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7F669514B29CCC7885A94671929CF9656906564);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * V_1 = NULL;
	bool V_2 = false;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_3 = NULL;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0032;
			}
		}

IL_0011:
		{
			// using var request = UnityWebRequestTexture.GetTexture(url + "/catalog/" + name);
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_url_4();
			String_t* L_5 = __this->get_name_3();
			String_t* L_6;
			L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_4, _stringLiteralE7F669514B29CCC7885A94671929CF9656906564, L_5, /*hidden argument*/NULL);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7;
			L_7 = UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37(L_6, /*hidden argument*/NULL);
			__this->set_U3CrequestU3E5__2_4(L_7);
		}

IL_0032:
		{
		}

IL_0033:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_8 = V_0;
				if (!L_8)
				{
					goto IL_0096;
				}
			}

IL_0036:
			{
				// request.certificateHandler = new AcceptAllCertificatesSignedWithASpecificPublicKey();
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CrequestU3E5__2_4();
				AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD * L_10 = (AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD *)il2cpp_codegen_object_new(AcceptAllCertificatesSignedWithASpecificPublicKey_t69D07A5E873DBAAF9AECE520A4F2651E78AC1DDD_il2cpp_TypeInfo_var);
				AcceptAllCertificatesSignedWithASpecificPublicKey__ctor_mDD36C555CF22D169AE827E0243850C99BE35A99D(L_10, /*hidden argument*/NULL);
				NullCheck(L_9);
				UnityWebRequest_set_certificateHandler_mBB6DDBB83B2639B1D47EFCDDDCC56E1217D139F7(L_9, L_10, /*hidden argument*/NULL);
				// var operation = request.SendWebRequest();
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CrequestU3E5__2_4();
				NullCheck(L_11);
				UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_12;
				L_12 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_11, /*hidden argument*/NULL);
				__this->set_U3CoperationU3E5__3_5(L_12);
				goto IL_00ba;
			}

IL_0059:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_13;
				L_13 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_5 = L_13;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_14;
				L_14 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_5), /*hidden argument*/NULL);
				V_4 = L_14;
				bool L_15;
				L_15 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
				if (L_15)
				{
					goto IL_00b3;
				}
			}

IL_0072:
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_17 = V_4;
				__this->set_U3CU3Eu__1_6(L_17);
				AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m87F5EABDD4E8ACD63D9C795B26FFD2340923E866((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_18, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), (U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7_m87F5EABDD4E8ACD63D9C795B26FFD2340923E866_RuntimeMethod_var);
				IL2CPP_LEAVE(0x19B, FINALLY_013a);
			}

IL_0096:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_19 = __this->get_U3CU3Eu__1_6();
				V_4 = L_19;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_20 = __this->get_address_of_U3CU3Eu__1_6();
				il2cpp_codegen_initobj(L_20, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->set_U3CU3E1__state_0(L_21);
			}

IL_00b3:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
			}

IL_00ba:
			{
				// while (!operation.isDone)
				UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_22 = __this->get_U3CoperationU3E5__3_5();
				NullCheck(L_22);
				bool L_23;
				L_23 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_22, /*hidden argument*/NULL);
				if (!L_23)
				{
					goto IL_0059;
				}
			}

IL_00c7:
			{
				// print(url + "/catalog/" + name);
				WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_24 = V_1;
				NullCheck(L_24);
				String_t* L_25 = L_24->get_url_4();
				String_t* L_26 = __this->get_name_3();
				String_t* L_27;
				L_27 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_25, _stringLiteralE7F669514B29CCC7885A94671929CF9656906564, L_26, /*hidden argument*/NULL);
				MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_27, /*hidden argument*/NULL);
				// var texture = DownloadHandlerTexture.GetContent(request);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_28 = __this->get_U3CrequestU3E5__2_4();
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_29;
				L_29 = DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6(L_28, /*hidden argument*/NULL);
				V_3 = L_29;
				// sprites.Add(name, Sprite.Create(texture, new Rect(0.0f, 0.0f, texture.width, texture.height), new Vector2(0.5f, 0.5f), 100.0f));
				WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_30 = V_1;
				NullCheck(L_30);
				Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D * L_31 = L_30->get_sprites_5();
				String_t* L_32 = __this->get_name_3();
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_33 = V_3;
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_34 = V_3;
				NullCheck(L_34);
				int32_t L_35;
				L_35 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_34);
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = V_3;
				NullCheck(L_36);
				int32_t L_37;
				L_37 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_36);
				Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_38;
				memset((&L_38), 0, sizeof(L_38));
				Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_38), (0.0f), (0.0f), ((float)((float)L_35)), ((float)((float)L_37)), /*hidden argument*/NULL);
				Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
				memset((&L_39), 0, sizeof(L_39));
				Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_39), (0.5f), (0.5f), /*hidden argument*/NULL);
				Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_40;
				L_40 = Sprite_Create_mB35E2D3FF3906606000D6682E465CC4773ADBACC(L_33, L_38, L_39, (100.0f), /*hidden argument*/NULL);
				NullCheck(L_31);
				Dictionary_2_Add_m91C7214CAD77724AD4FE720D63B104B36FF34A1B(L_31, L_32, L_40, /*hidden argument*/Dictionary_2_Add_m91C7214CAD77724AD4FE720D63B104B36FF34A1B_RuntimeMethod_var);
				// return true;
				V_2 = (bool)1;
				IL2CPP_LEAVE(0x179, FINALLY_013a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_013a;
		}

FINALLY_013a:
		{ // begin finally (depth: 2)
			{
				int32_t L_41 = V_0;
				if ((((int32_t)L_41) >= ((int32_t)0)))
				{
					goto IL_0151;
				}
			}

IL_013e:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_42 = __this->get_U3CrequestU3E5__2_4();
				if (!L_42)
				{
					goto IL_0151;
				}
			}

IL_0146:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_43 = __this->get_U3CrequestU3E5__2_4();
				NullCheck(L_43);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_43);
			}

IL_0151:
			{
				IL2CPP_END_FINALLY(314)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(314)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x19B, IL_019b)
			IL2CPP_JUMP_TBL(0x179, IL_0179)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0152;
		}
		throw e;
	}

CATCH_0152:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrequestU3E5__2_4((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
		__this->set_U3CoperationU3E5__3_5((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)NULL);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_44 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_45 = V_6;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_44, L_45, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_019b;
	} // end catch (depth: 1)

IL_0179:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrequestU3E5__2_4((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
		__this->set_U3CoperationU3E5__3_5((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)NULL);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_46 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_47 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_46, L_47, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_019b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSpritesCoroutineU3Ed__10_MoveNext_m9A631756224F1A6E281F7C0FC5DE228375674851_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 * _thisAdjusted = reinterpret_cast<U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 *>(__this + _offset);
	U3CGetSpritesCoroutineU3Ed__10_MoveNext_m9A631756224F1A6E281F7C0FC5DE228375674851(_thisAdjusted, method);
}
// System.Void WebClient/<GetSpritesCoroutine>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSpritesCoroutineU3Ed__10_SetStateMachine_m1CD4B857211C6AE5568311B9BE33E7B3486FD990 (U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSpritesCoroutineU3Ed__10_SetStateMachine_m1CD4B857211C6AE5568311B9BE33E7B3486FD990_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 * _thisAdjusted = reinterpret_cast<U3CGetSpritesCoroutineU3Ed__10_t333924F4666B656AEA592C75DF32E878610D77D7 *>(__this + _offset);
	U3CGetSpritesCoroutineU3Ed__10_SetStateMachine_m1CD4B857211C6AE5568311B9BE33E7B3486FD990(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebClient/<ServerStart>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerStartU3Ed__8_MoveNext_m1884DC99ADF30D388A9CAB91AFAFAE6D066F4BDC (U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_mBC3BD1B6408DE56E3204718A2C32322051408000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBBF36701EFA0270EA9E653A818DA663C6240AE52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA49802F179570EEF637F4C0C01097D8612957556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m91EC1610D4E2B7B204C3976A153B7D18FDE0B708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m519F964D26066BCC627EE11996766EC8DF6587D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B512A8595D0D2687B35674DC2663825023070C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisModel_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3_mA785070F9F5ABA6C5DBCFC2276920E482168BB80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFB6F2451E4FDD679E1EA161B27E29F1DC4E9B5B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01DABAEA1038CE94C68EC1934C99F3FAE1140A8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B29F50BBF760FB8A957DA3A28B3A4A4E29ED6A0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * V_1 = NULL;
	bool V_2 = false;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * V_5 = NULL;
	Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * V_6 = NULL;
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00ad;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1))) > ((uint32_t)1))))
			{
				goto IL_00e2;
			}
		}

IL_001d:
		{
			// sprites = new Dictionary<string, Sprite>();
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_4 = V_1;
			Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D * L_5 = (Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D *)il2cpp_codegen_object_new(Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mBBF36701EFA0270EA9E653A818DA663C6240AE52(L_5, /*hidden argument*/Dictionary_2__ctor_mBBF36701EFA0270EA9E653A818DA663C6240AE52_RuntimeMethod_var);
			NullCheck(L_4);
			L_4->set_sprites_5(L_5);
			// models = new Dictionary<string, GameObject>();
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_6 = V_1;
			Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_7 = (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *)il2cpp_codegen_object_new(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A(L_7, /*hidden argument*/Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var);
			NullCheck(L_6);
			L_6->set_models_6(L_7);
			// print(horizontal);
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_8 = V_1;
			NullCheck(L_8);
			ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_9 = L_8->get_horizontal_8();
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_9, /*hidden argument*/NULL);
			// print(wall);
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_10 = V_1;
			NullCheck(L_10);
			ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_11 = L_10->get_wall_9();
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_11, /*hidden argument*/NULL);
			// print(ceiling);
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_12 = V_1;
			NullCheck(L_12);
			ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_13 = L_12->get_ceiling_10();
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_13, /*hidden argument*/NULL);
			// this.url = url + "/api/todoitems";
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_14 = V_1;
			String_t* L_15 = __this->get_url_3();
			String_t* L_16;
			L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, _stringLiteral9B29F50BBF760FB8A957DA3A28B3A4A4E29ED6A0, /*hidden argument*/NULL);
			NullCheck(L_14);
			L_14->set_url_4(L_16);
			// print(1);
			int32_t L_17 = 1;
			RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_18, /*hidden argument*/NULL);
			// await GetNamesCoroutine();
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_19 = V_1;
			NullCheck(L_19);
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_20;
			L_20 = WebClient_GetNamesCoroutine_m2B88C7A003D4AD36DFD622825015D2959B224AB4(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_21;
			L_21 = Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041(L_20, /*hidden argument*/Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
			V_3 = L_21;
			bool L_22;
			L_22 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_00c9;
			}
		}

IL_008a:
		{
			int32_t L_23 = 0;
			V_0 = L_23;
			__this->set_U3CU3E1__state_0(L_23);
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_24 = V_3;
			__this->set_U3CU3Eu__1_4(L_24);
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_25 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_mBC3BD1B6408DE56E3204718A2C32322051408000((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_25, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), (U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_mBC3BD1B6408DE56E3204718A2C32322051408000_RuntimeMethod_var);
			goto IL_033b;
		}

IL_00ad:
		{
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_26 = __this->get_U3CU3Eu__1_4();
			V_3 = L_26;
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_27 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_27, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->set_U3CU3E1__state_0(L_28);
		}

IL_00c9:
		{
			bool L_29;
			L_29 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
			// foreach(var name in names)
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_30 = V_1;
			NullCheck(L_30);
			List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * L_31 = L_30->get_names_7();
			NullCheck(L_31);
			Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9  L_32;
			L_32 = List_1_GetEnumerator_mFB6F2451E4FDD679E1EA161B27E29F1DC4E9B5B2(L_31, /*hidden argument*/List_1_GetEnumerator_mFB6F2451E4FDD679E1EA161B27E29F1DC4E9B5B2_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_5(L_32);
		}

IL_00e2:
		{
		}

IL_00e3:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_33 = V_0;
				if ((((int32_t)L_33) == ((int32_t)1)))
				{
					goto IL_0147;
				}
			}

IL_00e7:
			{
				int32_t L_34 = V_0;
				if ((((int32_t)L_34) == ((int32_t)2)))
				{
					goto IL_01ae;
				}
			}

IL_00ee:
			{
				goto IL_01d9;
			}

IL_00f3:
			{
				// foreach(var name in names)
				Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 * L_35 = __this->get_address_of_U3CU3E7__wrap1_5();
				ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * L_36;
				L_36 = Enumerator_get_Current_m4B512A8595D0D2687B35674DC2663825023070C7_inline((Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 *)L_35, /*hidden argument*/Enumerator_get_Current_m4B512A8595D0D2687B35674DC2663825023070C7_RuntimeMethod_var);
				__this->set_U3CnameU3E5__3_6(L_36);
				// await GetSpritesCoroutine(name.Name);
				WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_37 = V_1;
				ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * L_38 = __this->get_U3CnameU3E5__3_6();
				NullCheck(L_38);
				String_t* L_39;
				L_39 = ModelName_get_Name_m0C62D22D40D681315808073FAD6D8526636533A3_inline(L_38, /*hidden argument*/NULL);
				NullCheck(L_37);
				Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_40;
				L_40 = WebClient_GetSpritesCoroutine_m48A02EF93A99AE4951F8F4EEFD8DC2AF19963022(L_37, L_39, /*hidden argument*/NULL);
				NullCheck(L_40);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_41;
				L_41 = Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041(L_40, /*hidden argument*/Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
				V_3 = L_41;
				bool L_42;
				L_42 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_0163;
				}
			}

IL_0124:
			{
				int32_t L_43 = 1;
				V_0 = L_43;
				__this->set_U3CU3E1__state_0(L_43);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_44 = V_3;
				__this->set_U3CU3Eu__1_4(L_44);
				AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_mBC3BD1B6408DE56E3204718A2C32322051408000((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_45, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), (U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_mBC3BD1B6408DE56E3204718A2C32322051408000_RuntimeMethod_var);
				IL2CPP_LEAVE(0x33B, FINALLY_01eb);
			}

IL_0147:
			{
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_46 = __this->get_U3CU3Eu__1_4();
				V_3 = L_46;
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_47 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_47, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->set_U3CU3E1__state_0(L_48);
			}

IL_0163:
			{
				bool L_49;
				L_49 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
				// await GetModelsCoroutine(name.Name);
				WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_50 = V_1;
				ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * L_51 = __this->get_U3CnameU3E5__3_6();
				NullCheck(L_51);
				String_t* L_52;
				L_52 = ModelName_get_Name_m0C62D22D40D681315808073FAD6D8526636533A3_inline(L_51, /*hidden argument*/NULL);
				NullCheck(L_50);
				Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_53;
				L_53 = WebClient_GetModelsCoroutine_m6D09773E81AB31793BC2B961828E88717B4DCA72(L_50, L_52, /*hidden argument*/NULL);
				NullCheck(L_53);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_54;
				L_54 = Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041(L_53, /*hidden argument*/Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
				V_3 = L_54;
				bool L_55;
				L_55 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
				if (L_55)
				{
					goto IL_01ca;
				}
			}

IL_018b:
			{
				int32_t L_56 = 2;
				V_0 = L_56;
				__this->set_U3CU3E1__state_0(L_56);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_57 = V_3;
				__this->set_U3CU3Eu__1_4(L_57);
				AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_58 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_mBC3BD1B6408DE56E3204718A2C32322051408000((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_58, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), (U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105_mBC3BD1B6408DE56E3204718A2C32322051408000_RuntimeMethod_var);
				IL2CPP_LEAVE(0x33B, FINALLY_01eb);
			}

IL_01ae:
			{
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_59 = __this->get_U3CU3Eu__1_4();
				V_3 = L_59;
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_60 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_60, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
				int32_t L_61 = (-1);
				V_0 = L_61;
				__this->set_U3CU3E1__state_0(L_61);
			}

IL_01ca:
			{
				bool L_62;
				L_62 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
				// }
				__this->set_U3CnameU3E5__3_6((ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A *)NULL);
			}

IL_01d9:
			{
				// foreach(var name in names)
				Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 * L_63 = __this->get_address_of_U3CU3E7__wrap1_5();
				bool L_64;
				L_64 = Enumerator_MoveNext_m519F964D26066BCC627EE11996766EC8DF6587D0((Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 *)L_63, /*hidden argument*/Enumerator_MoveNext_m519F964D26066BCC627EE11996766EC8DF6587D0_RuntimeMethod_var);
				if (L_64)
				{
					goto IL_00f3;
				}
			}

IL_01e9:
			{
				IL2CPP_LEAVE(0x201, FINALLY_01eb);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01eb;
		}

FINALLY_01eb:
		{ // begin finally (depth: 2)
			{
				int32_t L_65 = V_0;
				if ((((int32_t)L_65) >= ((int32_t)0)))
				{
					goto IL_0200;
				}
			}

IL_01ef:
			{
				Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 * L_66 = __this->get_address_of_U3CU3E7__wrap1_5();
				Enumerator_Dispose_m91EC1610D4E2B7B204C3976A153B7D18FDE0B708((Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 *)L_66, /*hidden argument*/Enumerator_Dispose_m91EC1610D4E2B7B204C3976A153B7D18FDE0B708_RuntimeMethod_var);
			}

IL_0200:
			{
				IL2CPP_END_FINALLY(491)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(491)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x33B, IL_033b)
			IL2CPP_JUMP_TBL(0x201, IL_0201)
		}

IL_0201:
		{
			Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 * L_67 = __this->get_address_of_U3CU3E7__wrap1_5();
			il2cpp_codegen_initobj(L_67, sizeof(Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 ));
			// foreach(var name in names)
			WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_68 = V_1;
			NullCheck(L_68);
			List_1_tBCDEB1D3C0FF169FFD189F010F0CD8399F6B804C * L_69 = L_68->get_names_7();
			NullCheck(L_69);
			Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9  L_70;
			L_70 = List_1_GetEnumerator_mFB6F2451E4FDD679E1EA161B27E29F1DC4E9B5B2(L_69, /*hidden argument*/List_1_GetEnumerator_mFB6F2451E4FDD679E1EA161B27E29F1DC4E9B5B2_RuntimeMethod_var);
			V_4 = L_70;
		}

IL_021a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_02ea;
			}

IL_021f:
			{
				// foreach(var name in names)
				ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * L_71;
				L_71 = Enumerator_get_Current_m4B512A8595D0D2687B35674DC2663825023070C7_inline((Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m4B512A8595D0D2687B35674DC2663825023070C7_RuntimeMethod_var);
				V_5 = L_71;
				// GameObject a = new GameObject();
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
				GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_72, /*hidden argument*/NULL);
				// Model m = a.AddComponent<Model>();
				NullCheck(L_72);
				Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_73;
				L_73 = GameObject_AddComponent_TisModel_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3_mA785070F9F5ABA6C5DBCFC2276920E482168BB80(L_72, /*hidden argument*/GameObject_AddComponent_TisModel_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3_mA785070F9F5ABA6C5DBCFC2276920E482168BB80_RuntimeMethod_var);
				V_6 = L_73;
				// m.name = name.Name;
				Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_74 = V_6;
				ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * L_75 = V_5;
				NullCheck(L_75);
				String_t* L_76;
				L_76 = ModelName_get_Name_m0C62D22D40D681315808073FAD6D8526636533A3_inline(L_75, /*hidden argument*/NULL);
				NullCheck(L_74);
				L_74->set_name_4(L_76);
				// m.image = sprites[name.Name];
				Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_77 = V_6;
				WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_78 = V_1;
				NullCheck(L_78);
				Dictionary_2_t25CEE683B20ACF6398C3718DF163CF651693326D * L_79 = L_78->get_sprites_5();
				ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * L_80 = V_5;
				NullCheck(L_80);
				String_t* L_81;
				L_81 = ModelName_get_Name_m0C62D22D40D681315808073FAD6D8526636533A3_inline(L_80, /*hidden argument*/NULL);
				NullCheck(L_79);
				Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_82;
				L_82 = Dictionary_2_get_Item_mA49802F179570EEF637F4C0C01097D8612957556(L_79, L_81, /*hidden argument*/Dictionary_2_get_Item_mA49802F179570EEF637F4C0C01097D8612957556_RuntimeMethod_var);
				NullCheck(L_77);
				L_77->set_image_5(L_82);
				// m.model = models[name.Name];
				Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_83 = V_6;
				WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_84 = V_1;
				NullCheck(L_84);
				Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_85 = L_84->get_models_6();
				ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * L_86 = V_5;
				NullCheck(L_86);
				String_t* L_87;
				L_87 = ModelName_get_Name_m0C62D22D40D681315808073FAD6D8526636533A3_inline(L_86, /*hidden argument*/NULL);
				NullCheck(L_85);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88;
				L_88 = Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A(L_85, L_87, /*hidden argument*/Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A_RuntimeMethod_var);
				NullCheck(L_83);
				L_83->set_model_6(L_88);
				// print(m);
				Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_89 = V_6;
				MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_89, /*hidden argument*/NULL);
				// print(ceiling);
				WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_90 = V_1;
				NullCheck(L_90);
				ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_91 = L_90->get_ceiling_10();
				MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_91, /*hidden argument*/NULL);
				// if (name.Plane == "Floor")
				ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * L_92 = V_5;
				NullCheck(L_92);
				String_t* L_93;
				L_93 = ModelName_get_Plane_m3D3A8375DD14A35A35CC51798537AE90119BE855_inline(L_92, /*hidden argument*/NULL);
				bool L_94;
				L_94 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_93, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, /*hidden argument*/NULL);
				if (!L_94)
				{
					goto IL_02a8;
				}
			}

IL_0299:
			{
				// horizontal.Add(m);
				WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_95 = V_1;
				NullCheck(L_95);
				ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_96 = L_95->get_horizontal_8();
				Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_97 = V_6;
				NullCheck(L_96);
				ModelsContainer_Add_mA86C1839010463E8F5008F018E7AB11E4B876FD8(L_96, L_97, /*hidden argument*/NULL);
				goto IL_02ea;
			}

IL_02a8:
			{
				// else if (name.Plane == "Wall")
				ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * L_98 = V_5;
				NullCheck(L_98);
				String_t* L_99;
				L_99 = ModelName_get_Plane_m3D3A8375DD14A35A35CC51798537AE90119BE855_inline(L_98, /*hidden argument*/NULL);
				bool L_100;
				L_100 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_99, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
				if (!L_100)
				{
					goto IL_02ca;
				}
			}

IL_02bb:
			{
				// wall.Add(m);
				WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_101 = V_1;
				NullCheck(L_101);
				ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_102 = L_101->get_wall_9();
				Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_103 = V_6;
				NullCheck(L_102);
				ModelsContainer_Add_mA86C1839010463E8F5008F018E7AB11E4B876FD8(L_102, L_103, /*hidden argument*/NULL);
				goto IL_02ea;
			}

IL_02ca:
			{
				// else if (name.Plane == "Ceiling")
				ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * L_104 = V_5;
				NullCheck(L_104);
				String_t* L_105;
				L_105 = ModelName_get_Plane_m3D3A8375DD14A35A35CC51798537AE90119BE855_inline(L_104, /*hidden argument*/NULL);
				bool L_106;
				L_106 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_105, _stringLiteral01DABAEA1038CE94C68EC1934C99F3FAE1140A8B, /*hidden argument*/NULL);
				if (!L_106)
				{
					goto IL_02ea;
				}
			}

IL_02dd:
			{
				// ceiling.Add(m);
				WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_107 = V_1;
				NullCheck(L_107);
				ModelsContainer_tC125A1CB40B7F82B1CBF3EE3C15D5C2DC5A98586 * L_108 = L_107->get_ceiling_10();
				Model_t3FFE1F2CF72724B33C32B577F22C6F096384EDD3 * L_109 = V_6;
				NullCheck(L_108);
				ModelsContainer_Add_mA86C1839010463E8F5008F018E7AB11E4B876FD8(L_108, L_109, /*hidden argument*/NULL);
			}

IL_02ea:
			{
				// foreach(var name in names)
				bool L_110;
				L_110 = Enumerator_MoveNext_m519F964D26066BCC627EE11996766EC8DF6587D0((Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m519F964D26066BCC627EE11996766EC8DF6587D0_RuntimeMethod_var);
				if (L_110)
				{
					goto IL_021f;
				}
			}

IL_02f6:
			{
				IL2CPP_LEAVE(0x30A, FINALLY_02f8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_02f8;
		}

FINALLY_02f8:
		{ // begin finally (depth: 2)
			{
				int32_t L_111 = V_0;
				if ((((int32_t)L_111) >= ((int32_t)0)))
				{
					goto IL_0309;
				}
			}

IL_02fc:
			{
				Enumerator_Dispose_m91EC1610D4E2B7B204C3976A153B7D18FDE0B708((Enumerator_t9DC403A7762A98C3A3B97676F656CEE738426DE9 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m91EC1610D4E2B7B204C3976A153B7D18FDE0B708_RuntimeMethod_var);
			}

IL_0309:
			{
				IL2CPP_END_FINALLY(760)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(760)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x30A, IL_030a)
		}

IL_030a:
		{
			// return true;
			V_2 = (bool)1;
			goto IL_0327;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_030e;
		}
		throw e;
	}

CATCH_030e:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_112 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_113 = V_7;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_112, L_113, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_033b;
	} // end catch (depth: 1)

IL_0327:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_114 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_115 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_114, L_115, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_033b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CServerStartU3Ed__8_MoveNext_m1884DC99ADF30D388A9CAB91AFAFAE6D066F4BDC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 * _thisAdjusted = reinterpret_cast<U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 *>(__this + _offset);
	U3CServerStartU3Ed__8_MoveNext_m1884DC99ADF30D388A9CAB91AFAFAE6D066F4BDC(_thisAdjusted, method);
}
// System.Void WebClient/<ServerStart>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerStartU3Ed__8_SetStateMachine_mB445740875BD5F89526B53E593010C9E425256E5 (U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CServerStartU3Ed__8_SetStateMachine_mB445740875BD5F89526B53E593010C9E425256E5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 * _thisAdjusted = reinterpret_cast<U3CServerStartU3Ed__8_t71B49B70032C25C25DD853C212EE9F0F3C085105 *>(__this + _offset);
	U3CServerStartU3Ed__8_SetStateMachine_mB445740875BD5F89526B53E593010C9E425256E5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModelName_set_Name_m74645EAF3F0774D56603ECFC1BAC5D00EA24A7A7_inline (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModelName_set_Plane_mB360435698A1C844DF921347E2BD6966D15180D3_inline (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Plane { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CPlaneU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * Slider_get_onValueChanged_m7F480C569A6D668952BE1436691850D13825E129_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method)
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * L_0 = __this->get_m_OnValueChanged_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ModelName_get_Name_m0C62D22D40D681315808073FAD6D8526636533A3_inline (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ModelName_get_Plane_m3D3A8375DD14A35A35CC51798537AE90119BE855_inline (ModelName_t646CBB2ADC39099A93E7CAA679B460BBF2D99B7A * __this, const RuntimeMethod* method)
{
	{
		// public string Plane { get; set; }
		String_t* L_0 = __this->get_U3CPlaneU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* L_2 = (ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)L_2, (int32_t)L_3);
		return (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E )L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
