#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Action`1<System.Byte[]>
struct Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90;
// System.Action`1<System.Int64>
struct Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941;
// System.Action`1<WebSocketSharp.MessageEventArgs>
struct Action_1_tF078D157D77B5694A712F59E2E4A4D7ADE990F2E;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02;
// System.Action`2<WebSocketSharp.LogData,System.String>
struct Action_2_t55452A343E3D7D73FB8E23ACEAD77D3D160BEFF6;
// System.Action`4<WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean>
struct Action_4_t1D5E542190ACAADFE8E719B5E016BCBC605FA441;
// System.Action`4<System.Object,System.Boolean,System.Boolean,System.Boolean>
struct Action_4_tE50FFD0BB0F77FE2B45FE9BF667F41B666FD4E00;
// System.Action`4<System.Object,System.Object,System.Object,System.Object>
struct Action_4_tDB82015AB9EE6C7A4D051C5068F94F41BD15DE0D;
// System.Action`4<System.String,System.String,System.String,System.String>
struct Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Net.HttpHeaderInfo>
struct Dictionary_2_t4C6DC1C9072F05154CC53CEA564A3AC12E5ADA2D;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t2E947DB23EE64EEE2B512336DD7BB0E591883CB6;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t27DA8150778433533B0AB540A065C80984342C9D;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t699FE1A0F8839063F4C9519AA26DAD63C77E3DE3;
// System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>
struct Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`3<System.ByteEnum,System.Object,System.Boolean>
struct Func_3_tA5841EEA02A558675A9CA874D6110EB908B71771;
// System.Func`3<WebSocketSharp.Opcode,System.IO.Stream,System.Boolean>
struct Func_3_t22C0949025AC6DA80FDDEC56C8D1CA36E2454873;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t9C161AD4E982EC01062A5E052662E7862A7874F4;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_tACD33A888CFCF2127A7B26465315CBEA3B6C04C4;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t6C1E0E3AABC79A70BE666512DA0911B87CAF2E6A;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t672195CF1999A662D43AEE28E5EB3DB75595064B;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t7A59E19AD4BA586EA9CE194F98385E542A25430D;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t3AE1D39D54DA4C2BEE3DF15A12A8A48CCA20A2A9;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// WebSocketSharp.Logger
struct Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t79BC9810F4D4D94E23AD37996F68628C59443F80;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// WebSocketSharp.PayloadData
struct PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C;
// WebSocketSharp.WebSocket
struct WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_tDBC6378C7C7A32F7DB9C33B4BB01EC93034796C0;
// WebSocketSharp.WebSocketException
struct WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D;
// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B;
// WebSocketSharp.Ext/<>c__DisplayClass3
struct U3CU3Ec__DisplayClass3_t14BC25D14C2D83A7C0F2F240F3261AC6DCEB3334;
// WebSocketSharp.Ext/<>c__DisplayClass9
struct U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C;
// WebSocketSharp.Ext/<>c__DisplayClassd
struct U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7;
// WebSocketSharp.Ext/<SplitHeaderValue>d__11
struct U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C;
// WebSocketSharp.HttpBase/<>c__DisplayClass1
struct U3CU3Ec__DisplayClass1_t35BECD7A4529EBBDCA339FC21D687BE55DDEC410;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22;
// WebSocketSharp.PayloadData/<GetEnumerator>d__0
struct U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass5
struct U3CU3Ec__DisplayClass5_t611410DDEE43EF9A45F746C359B0BF11548B9EF6;
// WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass8
struct U3CU3Ec__DisplayClass8_t636EBDAC818ED6C9B5EC7C904B857D93A3B8ACC4;
// WebSocketSharp.WebSocket/<>c__DisplayClass12
struct U3CU3Ec__DisplayClass12_tBCD59DCD2348E3E530E1B1D017F10832F8A82379;
// WebSocketSharp.WebSocket/<>c__DisplayClass17
struct U3CU3Ec__DisplayClass17_tB40AAC9FC771B26FE75B4D37D022DBD0DBC88E07;
// WebSocketSharp.WebSocket/<>c__DisplayClass1a
struct U3CU3Ec__DisplayClass1a_t586F63A993CAB0FDFB10281297258EEC1F2E1AD0;
// WebSocketSharp.WebSocket/<>c__DisplayClass1d
struct U3CU3Ec__DisplayClass1d_t3D447AB975A5828E68A8453CCDB12969CD8C0D15;
// WebSocketSharp.WebSocket/<>c__DisplayClass23
struct U3CU3Ec__DisplayClass23_tFAE90F7826D24887D2523335CD00493FA7A1C15E;
// WebSocketSharp.WebSocket/<>c__DisplayClassa
struct U3CU3Ec__DisplayClassa_t0074BEC8098E2D28D6BA817940D896676F3AC726;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass10
struct U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass16
struct U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass2
struct U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass7
struct U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClassa
struct U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClassd
struct U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90;
// WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18
struct U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723;
// WebSocketSharp.Ext/<>c__DisplayClassd/<>c__DisplayClassf
struct U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass2/<>c__DisplayClass4
struct U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Fin_t43C4CB840631B2D987228800481F7E20F8070632_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mask_t2A377C4316C0E21185DE5BD53CA6235C02C5EB87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Opcode_t631B280506A965B3FB98FDDA2FEBDAB4E250E59A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rsv_t5F407D9A45D461192284639E76EB6C2AE4A3439C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral089CEAF9555BAF2295EDAC24268380608D558B60;
IL2CPP_EXTERN_C String_t* _stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544;
IL2CPP_EXTERN_C String_t* _stringLiteral20EE8CAA934A2767F12EC9152C5C08F7305A69EC;
IL2CPP_EXTERN_C String_t* _stringLiteral32AEDBA5ABFB4295F10BE09DF88D586017ECF587;
IL2CPP_EXTERN_C String_t* _stringLiteral3C7879F4D6EBE4C971F9DA574586D2AC5910DCEE;
IL2CPP_EXTERN_C String_t* _stringLiteral3EA52E9C94B4B03D5535BC2F0558A4341C7C3AAD;
IL2CPP_EXTERN_C String_t* _stringLiteral5F856E3E9A0448BFF607B2DC7B844B23FAA69675;
IL2CPP_EXTERN_C String_t* _stringLiteral62F57AD061852AB53745F2E49C914CC9E4340133;
IL2CPP_EXTERN_C String_t* _stringLiteral63488589AE4F4AB55FD0EB2F6715E45C4001A9E4;
IL2CPP_EXTERN_C String_t* _stringLiteral834606D724EFC1323366C1AF3A0A89F88DDC2719;
IL2CPP_EXTERN_C String_t* _stringLiteral872863942A17DEDCD0300265682277E23AC55930;
IL2CPP_EXTERN_C String_t* _stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C693C3184E95017FD139BC3E466ACD5B78665;
IL2CPP_EXTERN_C String_t* _stringLiteralA545047F18B3FC58954677EB7F12A1370C59CE77;
IL2CPP_EXTERN_C String_t* _stringLiteralB7745A740C0A1346D860F22A7638EF5A029B56E5;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA319F9F1E632AB28C6BEB7F0B9516E66AD975A;
IL2CPP_EXTERN_C String_t* _stringLiteralC2E30E3C87DD2064DD314F4919D041A3A4592D97;
IL2CPP_EXTERN_C String_t* _stringLiteralC581DEB1B468818DF317A8FD12CF12C6032C6A1F;
IL2CPP_EXTERN_C String_t* _stringLiteralCABD34D7CF39245177859A0BC4C6FF68D6972CF6;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A0DD08EB1B611313645CAC79DE1BA8FDDCDA7D;
IL2CPP_EXTERN_C String_t* _stringLiteralDB3DAB5A0D06D5129783FDA885A5E18016C1C1F1;
IL2CPP_EXTERN_C String_t* _stringLiteralF70977E04C6969298AB79C3A8C5A49A3D04C36CD;
IL2CPP_EXTERN_C String_t* _stringLiteralFBB12FE24FDF92D6FF3F85D052D307A04C170B49;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA0FE5EFE11CE511380CD18905A6354DA75C508;
IL2CPP_EXTERN_C String_t* _stringLiteralFF31A798F77EB74F37FE8821EE17F12CDF6905B4;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_4_EndInvoke_m7BEF2C1A8C243E7A11ABFEA150A715DB4344018D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF08EE78AAD28B15DAA368D0728D7DE661C3D922A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD4E991296E96614D54847DA8E9C7F7C1C4525E6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mFA7CE0231236E9D2D93B07782B199357061CE3FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_EndInvoke_m5F9899907DB91084A4AE5D117DAE9A7EBBAD9003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_m55F8A861B22812FE15179E2CF8841AD5B8DC14A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_m91D4553A8BBD7B1FAD7FFBFF7595400FB64A4F87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSplitHeaderValueU3Ed__11_System_Collections_IEnumerator_Reset_m15C9DF61C2FED0E19FAF8ECA78E8D1139D258BE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_U3CreadPayloadDataAsyncU3Eb__f_m52C89854896F8523A33D98BE03EC67D9D8462BF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__12_m275E06110FE6B19B941302489F73D1FE86488D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__13_m93BF5A97C50EBEF01D30C26D8478EB58A8194748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__14_m3751C1633CED4E0FE945783D9F37398551A8DF2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__15_mF702ADB1DD69BB06A398279E99BC0D334B7B8AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_U3CstartReceivingU3Eb__15_mD5D2DA1DE6B0B32402D5DF89B6D6473A4B7303BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_U3CstartReceivingU3Eb__16_m5320CB63BA053A88DFDF78801824C3C3D931E1A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_U3CreadHeadersU3Eb__0_mCADC280C0709C12742F10CBCD90DA4511FF217C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_U3CdumpU3Eb__0_mC21527F7F7B555C61307DE02785D365CE583AC56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_U3CdumpU3Eb__1_m1AADBDCCBA32EDB90AAB19F898213870876C1221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_U3CreadExtendedPayloadLengthAsyncU3Eb__6_mBF0CFCED2F79B910E29B2952F69106A07AA0735B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClassa_U3CreadHeaderAsyncU3Eb__9_m5DED9E72B93F63021F0B726D603C2169E57D8E64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClassd_U3CreadMaskingKeyAsyncU3Eb__c_mC8F91C41AE4352182C41272D5DD28EE41AD0FBB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClassf_U3CReadBytesAsyncU3Eb__c_m3C086B6870D751FFE06FEDC510FEE6BD80D0307A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFrame_processHeader_mB08E4A854AA2128113647342BDA88A49CC22BAA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFrame_readPayloadDataAsync_m7805598A20E181352E18B2DEB7725C215D38EB3A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____items_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
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


// WebSocketSharp.Ext
struct Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64  : public RuntimeObject
{
public:

public:
};

struct Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.Ext::_last
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____last_0;
	// System.Int32 WebSocketSharp.Ext::_retry
	int32_t ____retry_1;
	// System.Func`2<System.String,System.Boolean> WebSocketSharp.Ext::CS$<>9__CachedAnonymousMethodDelegate1
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2;

public:
	inline static int32_t get_offset_of__last_0() { return static_cast<int32_t>(offsetof(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_StaticFields, ____last_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__last_0() const { return ____last_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__last_0() { return &____last_0; }
	inline void set__last_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____last_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____last_0), (void*)value);
	}

	inline static int32_t get_offset_of__retry_1() { return static_cast<int32_t>(offsetof(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_StaticFields, ____retry_1)); }
	inline int32_t get__retry_1() const { return ____retry_1; }
	inline int32_t* get_address_of__retry_1() { return &____retry_1; }
	inline void set__retry_1(int32_t value)
	{
		____retry_1 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2() { return static_cast<int32_t>(offsetof(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2), (void*)value);
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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesArray_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesArray_1), (void*)value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyComparer_2), (void*)value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesTable_3)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesTable_3), (void*)value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____nullKeyEntry_4)); }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyEntry_4), (void*)value);
	}

	inline static int32_t get_offset_of__serializationInfo_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____serializationInfo_5)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__serializationInfo_5() const { return ____serializationInfo_5; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__serializationInfo_5() { return &____serializationInfo_5; }
	inline void set__serializationInfo_5(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____serializationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____version_6)); }
	inline int32_t get__version_6() const { return ____version_6; }
	inline int32_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int32_t value)
	{
		____version_6 = value;
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};

struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___defaultComparer_8;

public:
	inline static int32_t get_offset_of_defaultComparer_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields, ___defaultComparer_8)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_defaultComparer_8() const { return ___defaultComparer_8; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_defaultComparer_8() { return &___defaultComparer_8; }
	inline void set_defaultComparer_8(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___defaultComparer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_8), (void*)value);
	}
};


// WebSocketSharp.PayloadData
struct PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.PayloadData::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_0;
	// System.Int64 WebSocketSharp.PayloadData::_extDataLength
	int64_t ____extDataLength_1;
	// System.Int64 WebSocketSharp.PayloadData::_length
	int64_t ____length_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208, ____data_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_0() const { return ____data_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_0), (void*)value);
	}

	inline static int32_t get_offset_of__extDataLength_1() { return static_cast<int32_t>(offsetof(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208, ____extDataLength_1)); }
	inline int64_t get__extDataLength_1() const { return ____extDataLength_1; }
	inline int64_t* get_address_of__extDataLength_1() { return &____extDataLength_1; }
	inline void set__extDataLength_1(int64_t value)
	{
		____extDataLength_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208, ____length_2)); }
	inline int64_t get__length_2() const { return ____length_2; }
	inline int64_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int64_t value)
	{
		____length_2 = value;
	}
};

struct PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_StaticFields
{
public:
	// WebSocketSharp.PayloadData WebSocketSharp.PayloadData::Empty
	PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * ___Empty_3;
	// System.UInt64 WebSocketSharp.PayloadData::MaxLength
	uint64_t ___MaxLength_4;

public:
	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_StaticFields, ___Empty_3)); }
	inline PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * get_Empty_3() const { return ___Empty_3; }
	inline PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 ** get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * value)
	{
		___Empty_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_3), (void*)value);
	}

	inline static int32_t get_offset_of_MaxLength_4() { return static_cast<int32_t>(offsetof(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_StaticFields, ___MaxLength_4)); }
	inline uint64_t get_MaxLength_4() const { return ___MaxLength_4; }
	inline uint64_t* get_address_of_MaxLength_4() { return &___MaxLength_4; }
	inline void set_MaxLength_4(uint64_t value)
	{
		___MaxLength_4 = value;
	}
};


// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_tDBC6378C7C7A32F7DB9C33B4BB01EC93034796C0  : public RuntimeObject
{
public:

public:
};


// WebSocketSharp.Ext/<>c__DisplayClass3
struct U3CU3Ec__DisplayClass3_t14BC25D14C2D83A7C0F2F240F3261AC6DCEB3334  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass3::len
	int32_t ___len_0;
	// System.Func`2<System.Int32,System.Boolean> WebSocketSharp.Ext/<>c__DisplayClass3::contains
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___contains_1;
	// System.String[] WebSocketSharp.Ext/<>c__DisplayClass3::values
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values_2;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_t14BC25D14C2D83A7C0F2F240F3261AC6DCEB3334, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_contains_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_t14BC25D14C2D83A7C0F2F240F3261AC6DCEB3334, ___contains_1)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_contains_1() const { return ___contains_1; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_contains_1() { return &___contains_1; }
	inline void set_contains_1(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___contains_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contains_1), (void*)value);
	}

	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_t14BC25D14C2D83A7C0F2F240F3261AC6DCEB3334, ___values_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_values_2() const { return ___values_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_2), (void*)value);
	}
};


// WebSocketSharp.Ext/<>c__DisplayClass9
struct U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.Ext/<>c__DisplayClass9::buff
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buff_0;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass9::offset
	int32_t ___offset_1;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass9::retry
	int32_t ___retry_2;
	// System.AsyncCallback WebSocketSharp.Ext/<>c__DisplayClass9::callback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback_3;
	// System.IO.Stream WebSocketSharp.Ext/<>c__DisplayClass9::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_4;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass9::length
	int32_t ___length_5;
	// System.Action`1<System.Byte[]> WebSocketSharp.Ext/<>c__DisplayClass9::completed
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___completed_6;
	// System.Action`1<System.Exception> WebSocketSharp.Ext/<>c__DisplayClass9::error
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error_7;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C, ___buff_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buff_0() const { return ___buff_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buff_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_0), (void*)value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_retry_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C, ___retry_2)); }
	inline int32_t get_retry_2() const { return ___retry_2; }
	inline int32_t* get_address_of_retry_2() { return &___retry_2; }
	inline void set_retry_2(int32_t value)
	{
		___retry_2 = value;
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C, ___callback_3)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_callback_3() const { return ___callback_3; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_stream_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C, ___stream_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_4() const { return ___stream_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_4() { return &___stream_4; }
	inline void set_stream_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_4), (void*)value);
	}

	inline static int32_t get_offset_of_length_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C, ___length_5)); }
	inline int32_t get_length_5() const { return ___length_5; }
	inline int32_t* get_address_of_length_5() { return &___length_5; }
	inline void set_length_5(int32_t value)
	{
		___length_5 = value;
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C, ___completed_6)); }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * get_completed_6() const { return ___completed_6; }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 ** get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * value)
	{
		___completed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_6), (void*)value);
	}

	inline static int32_t get_offset_of_error_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C, ___error_7)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_error_7() const { return ___error_7; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_error_7() { return &___error_7; }
	inline void set_error_7(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___error_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_7), (void*)value);
	}
};


// WebSocketSharp.Ext/<>c__DisplayClassd
struct U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7  : public RuntimeObject
{
public:
	// System.IO.MemoryStream WebSocketSharp.Ext/<>c__DisplayClassd::dest
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___dest_0;
	// System.Byte[] WebSocketSharp.Ext/<>c__DisplayClassd::buff
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buff_1;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClassd::retry
	int32_t ___retry_2;
	// System.Action`1<System.Int64> WebSocketSharp.Ext/<>c__DisplayClassd::read
	Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * ___read_3;
	// System.IO.Stream WebSocketSharp.Ext/<>c__DisplayClassd::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_4;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClassd::bufferLength
	int32_t ___bufferLength_5;
	// System.Action`1<System.Byte[]> WebSocketSharp.Ext/<>c__DisplayClassd::completed
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___completed_6;
	// System.Action`1<System.Exception> WebSocketSharp.Ext/<>c__DisplayClassd::error
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error_7;

public:
	inline static int32_t get_offset_of_dest_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7, ___dest_0)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get_dest_0() const { return ___dest_0; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of_dest_0() { return &___dest_0; }
	inline void set_dest_0(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		___dest_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dest_0), (void*)value);
	}

	inline static int32_t get_offset_of_buff_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7, ___buff_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buff_1() const { return ___buff_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buff_1() { return &___buff_1; }
	inline void set_buff_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buff_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_1), (void*)value);
	}

	inline static int32_t get_offset_of_retry_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7, ___retry_2)); }
	inline int32_t get_retry_2() const { return ___retry_2; }
	inline int32_t* get_address_of_retry_2() { return &___retry_2; }
	inline void set_retry_2(int32_t value)
	{
		___retry_2 = value;
	}

	inline static int32_t get_offset_of_read_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7, ___read_3)); }
	inline Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * get_read_3() const { return ___read_3; }
	inline Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 ** get_address_of_read_3() { return &___read_3; }
	inline void set_read_3(Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * value)
	{
		___read_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_3), (void*)value);
	}

	inline static int32_t get_offset_of_stream_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7, ___stream_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_4() const { return ___stream_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_4() { return &___stream_4; }
	inline void set_stream_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_4), (void*)value);
	}

	inline static int32_t get_offset_of_bufferLength_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7, ___bufferLength_5)); }
	inline int32_t get_bufferLength_5() const { return ___bufferLength_5; }
	inline int32_t* get_address_of_bufferLength_5() { return &___bufferLength_5; }
	inline void set_bufferLength_5(int32_t value)
	{
		___bufferLength_5 = value;
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7, ___completed_6)); }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * get_completed_6() const { return ___completed_6; }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 ** get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * value)
	{
		___completed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_6), (void*)value);
	}

	inline static int32_t get_offset_of_error_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7, ___error_7)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_error_7() const { return ___error_7; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_error_7() { return &___error_7; }
	inline void set_error_7(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___error_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_7), (void*)value);
	}
};


// WebSocketSharp.Ext/<SplitHeaderValue>d__11
struct U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__11::<>2__current
	String_t* ___U3CU3E2__current_0;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__11::<>1__state
	int32_t ___U3CU3E1__state_1;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__11::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__11::value
	String_t* ___value_3;
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__11::<>3__value
	String_t* ___U3CU3E3__value_4;
	// System.Char[] WebSocketSharp.Ext/<SplitHeaderValue>d__11::separators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators_5;
	// System.Char[] WebSocketSharp.Ext/<SplitHeaderValue>d__11::<>3__separators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CU3E3__separators_6;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__11::<len>5__12
	int32_t ___U3ClenU3E5__12_7;
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__11::<seps>5__13
	String_t* ___U3CsepsU3E5__13_8;
	// System.Text.StringBuilder WebSocketSharp.Ext/<SplitHeaderValue>d__11::<buff>5__14
	StringBuilder_t * ___U3CbuffU3E5__14_9;
	// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>d__11::<escaped>5__15
	bool ___U3CescapedU3E5__15_10;
	// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>d__11::<quoted>5__16
	bool ___U3CquotedU3E5__16_11;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__11::<i>5__17
	int32_t ___U3CiU3E5__17_12;
	// System.Char WebSocketSharp.Ext/<SplitHeaderValue>d__11::<c>5__18
	Il2CppChar ___U3CcU3E5__18_13;

public:
	inline static int32_t get_offset_of_U3CU3E2__current_0() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3CU3E2__current_0)); }
	inline String_t* get_U3CU3E2__current_0() const { return ___U3CU3E2__current_0; }
	inline String_t** get_address_of_U3CU3E2__current_0() { return &___U3CU3E2__current_0; }
	inline void set_U3CU3E2__current_0(String_t* value)
	{
		___U3CU3E2__current_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E1__state_1() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3CU3E1__state_1)); }
	inline int32_t get_U3CU3E1__state_1() const { return ___U3CU3E1__state_1; }
	inline int32_t* get_address_of_U3CU3E1__state_1() { return &___U3CU3E1__state_1; }
	inline void set_U3CU3E1__state_1(int32_t value)
	{
		___U3CU3E1__state_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__value_4() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3CU3E3__value_4)); }
	inline String_t* get_U3CU3E3__value_4() const { return ___U3CU3E3__value_4; }
	inline String_t** get_address_of_U3CU3E3__value_4() { return &___U3CU3E3__value_4; }
	inline void set_U3CU3E3__value_4(String_t* value)
	{
		___U3CU3E3__value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__value_4), (void*)value);
	}

	inline static int32_t get_offset_of_separators_5() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___separators_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_separators_5() const { return ___separators_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_separators_5() { return &___separators_5; }
	inline void set_separators_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___separators_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___separators_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__separators_6() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3CU3E3__separators_6)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CU3E3__separators_6() const { return ___U3CU3E3__separators_6; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CU3E3__separators_6() { return &___U3CU3E3__separators_6; }
	inline void set_U3CU3E3__separators_6(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CU3E3__separators_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__separators_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClenU3E5__12_7() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3ClenU3E5__12_7)); }
	inline int32_t get_U3ClenU3E5__12_7() const { return ___U3ClenU3E5__12_7; }
	inline int32_t* get_address_of_U3ClenU3E5__12_7() { return &___U3ClenU3E5__12_7; }
	inline void set_U3ClenU3E5__12_7(int32_t value)
	{
		___U3ClenU3E5__12_7 = value;
	}

	inline static int32_t get_offset_of_U3CsepsU3E5__13_8() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3CsepsU3E5__13_8)); }
	inline String_t* get_U3CsepsU3E5__13_8() const { return ___U3CsepsU3E5__13_8; }
	inline String_t** get_address_of_U3CsepsU3E5__13_8() { return &___U3CsepsU3E5__13_8; }
	inline void set_U3CsepsU3E5__13_8(String_t* value)
	{
		___U3CsepsU3E5__13_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsepsU3E5__13_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbuffU3E5__14_9() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3CbuffU3E5__14_9)); }
	inline StringBuilder_t * get_U3CbuffU3E5__14_9() const { return ___U3CbuffU3E5__14_9; }
	inline StringBuilder_t ** get_address_of_U3CbuffU3E5__14_9() { return &___U3CbuffU3E5__14_9; }
	inline void set_U3CbuffU3E5__14_9(StringBuilder_t * value)
	{
		___U3CbuffU3E5__14_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbuffU3E5__14_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CescapedU3E5__15_10() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3CescapedU3E5__15_10)); }
	inline bool get_U3CescapedU3E5__15_10() const { return ___U3CescapedU3E5__15_10; }
	inline bool* get_address_of_U3CescapedU3E5__15_10() { return &___U3CescapedU3E5__15_10; }
	inline void set_U3CescapedU3E5__15_10(bool value)
	{
		___U3CescapedU3E5__15_10 = value;
	}

	inline static int32_t get_offset_of_U3CquotedU3E5__16_11() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3CquotedU3E5__16_11)); }
	inline bool get_U3CquotedU3E5__16_11() const { return ___U3CquotedU3E5__16_11; }
	inline bool* get_address_of_U3CquotedU3E5__16_11() { return &___U3CquotedU3E5__16_11; }
	inline void set_U3CquotedU3E5__16_11(bool value)
	{
		___U3CquotedU3E5__16_11 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__17_12() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3CiU3E5__17_12)); }
	inline int32_t get_U3CiU3E5__17_12() const { return ___U3CiU3E5__17_12; }
	inline int32_t* get_address_of_U3CiU3E5__17_12() { return &___U3CiU3E5__17_12; }
	inline void set_U3CiU3E5__17_12(int32_t value)
	{
		___U3CiU3E5__17_12 = value;
	}

	inline static int32_t get_offset_of_U3CcU3E5__18_13() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C, ___U3CcU3E5__18_13)); }
	inline Il2CppChar get_U3CcU3E5__18_13() const { return ___U3CcU3E5__18_13; }
	inline Il2CppChar* get_address_of_U3CcU3E5__18_13() { return &___U3CcU3E5__18_13; }
	inline void set_U3CcU3E5__18_13(Il2CppChar value)
	{
		___U3CcU3E5__18_13 = value;
	}
};


// WebSocketSharp.HttpBase/<>c__DisplayClass1
struct U3CU3Ec__DisplayClass1_t35BECD7A4529EBBDCA339FC21D687BE55DDEC410  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte> WebSocketSharp.HttpBase/<>c__DisplayClass1::buff
	List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * ___buff_0;
	// System.Int32 WebSocketSharp.HttpBase/<>c__DisplayClass1::cnt
	int32_t ___cnt_1;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_t35BECD7A4529EBBDCA339FC21D687BE55DDEC410, ___buff_0)); }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * get_buff_0() const { return ___buff_0; }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF ** get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * value)
	{
		___buff_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_0), (void*)value);
	}

	inline static int32_t get_offset_of_cnt_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_t35BECD7A4529EBBDCA339FC21D687BE55DDEC410, ___cnt_1)); }
	inline int32_t get_cnt_1() const { return ___cnt_1; }
	inline int32_t* get_address_of_cnt_1() { return &___cnt_1; }
	inline void set_cnt_1(int32_t value)
	{
		___cnt_1 = value;
	}
};


// WebSocketSharp.PayloadData/<GetEnumerator>d__0
struct U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB  : public RuntimeObject
{
public:
	// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>d__0::<>2__current
	uint8_t ___U3CU3E2__current_0;
	// System.Int32 WebSocketSharp.PayloadData/<GetEnumerator>d__0::<>1__state
	int32_t ___U3CU3E1__state_1;
	// WebSocketSharp.PayloadData WebSocketSharp.PayloadData/<GetEnumerator>d__0::<>4__this
	PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * ___U3CU3E4__this_2;
	// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>d__0::<b>5__1
	uint8_t ___U3CbU3E5__1_3;
	// System.Byte[] WebSocketSharp.PayloadData/<GetEnumerator>d__0::<>7__wrap3
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CU3E7__wrap3_4;
	// System.Int32 WebSocketSharp.PayloadData/<GetEnumerator>d__0::<>7__wrap4
	int32_t ___U3CU3E7__wrap4_5;

public:
	inline static int32_t get_offset_of_U3CU3E2__current_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB, ___U3CU3E2__current_0)); }
	inline uint8_t get_U3CU3E2__current_0() const { return ___U3CU3E2__current_0; }
	inline uint8_t* get_address_of_U3CU3E2__current_0() { return &___U3CU3E2__current_0; }
	inline void set_U3CU3E2__current_0(uint8_t value)
	{
		___U3CU3E2__current_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E1__state_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB, ___U3CU3E1__state_1)); }
	inline int32_t get_U3CU3E1__state_1() const { return ___U3CU3E1__state_1; }
	inline int32_t* get_address_of_U3CU3E1__state_1() { return &___U3CU3E1__state_1; }
	inline void set_U3CU3E1__state_1(int32_t value)
	{
		___U3CU3E1__state_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB, ___U3CU3E4__this_2)); }
	inline PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB, ___U3CbU3E5__1_3)); }
	inline uint8_t get_U3CbU3E5__1_3() const { return ___U3CbU3E5__1_3; }
	inline uint8_t* get_address_of_U3CbU3E5__1_3() { return &___U3CbU3E5__1_3; }
	inline void set_U3CbU3E5__1_3(uint8_t value)
	{
		___U3CbU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB, ___U3CU3E7__wrap3_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CU3E7__wrap3_4() const { return ___U3CU3E7__wrap3_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CU3E7__wrap3_4() { return &___U3CU3E7__wrap3_4; }
	inline void set_U3CU3E7__wrap3_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CU3E7__wrap3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap4_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB, ___U3CU3E7__wrap4_5)); }
	inline int32_t get_U3CU3E7__wrap4_5() const { return ___U3CU3E7__wrap4_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap4_5() { return &___U3CU3E7__wrap4_5; }
	inline void set_U3CU3E7__wrap4_5(int32_t value)
	{
		___U3CU3E7__wrap4_5 = value;
	}
};


// WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass5
struct U3CU3Ec__DisplayClass5_t611410DDEE43EF9A45F746C359B0BF11548B9EF6  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass5::cnt
	int32_t ___cnt_0;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass5::<>4__this
	WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C * ___U3CU3E4__this_1;
	// System.Runtime.Serialization.SerializationInfo WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass5::serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___serializationInfo_2;

public:
	inline static int32_t get_offset_of_cnt_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_t611410DDEE43EF9A45F746C359B0BF11548B9EF6, ___cnt_0)); }
	inline int32_t get_cnt_0() const { return ___cnt_0; }
	inline int32_t* get_address_of_cnt_0() { return &___cnt_0; }
	inline void set_cnt_0(int32_t value)
	{
		___cnt_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_t611410DDEE43EF9A45F746C359B0BF11548B9EF6, ___U3CU3E4__this_1)); }
	inline WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_serializationInfo_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_t611410DDEE43EF9A45F746C359B0BF11548B9EF6, ___serializationInfo_2)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get_serializationInfo_2() const { return ___serializationInfo_2; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of_serializationInfo_2() { return &___serializationInfo_2; }
	inline void set_serializationInfo_2(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		___serializationInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializationInfo_2), (void*)value);
	}
};


// WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass8
struct U3CU3Ec__DisplayClass8_t636EBDAC818ED6C9B5EC7C904B857D93A3B8ACC4  : public RuntimeObject
{
public:
	// System.Text.StringBuilder WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass8::buff
	StringBuilder_t * ___buff_0;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass8::<>4__this
	WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_t636EBDAC818ED6C9B5EC7C904B857D93A3B8ACC4, ___buff_0)); }
	inline StringBuilder_t * get_buff_0() const { return ___buff_0; }
	inline StringBuilder_t ** get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(StringBuilder_t * value)
	{
		___buff_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_t636EBDAC818ED6C9B5EC7C904B857D93A3B8ACC4, ___U3CU3E4__this_1)); }
	inline WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass12
struct U3CU3Ec__DisplayClass12_tBCD59DCD2348E3E530E1B1D017F10832F8A82379  : public RuntimeObject
{
public:
	// System.Func`3<WebSocketSharp.Opcode,System.IO.Stream,System.Boolean> WebSocketSharp.WebSocket/<>c__DisplayClass12::sender
	Func_3_t22C0949025AC6DA80FDDEC56C8D1CA36E2454873 * ___sender_0;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<>c__DisplayClass12::<>4__this
	WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * ___U3CU3E4__this_1;
	// System.Action`1<System.Boolean> WebSocketSharp.WebSocket/<>c__DisplayClass12::completed
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___completed_2;

public:
	inline static int32_t get_offset_of_sender_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_tBCD59DCD2348E3E530E1B1D017F10832F8A82379, ___sender_0)); }
	inline Func_3_t22C0949025AC6DA80FDDEC56C8D1CA36E2454873 * get_sender_0() const { return ___sender_0; }
	inline Func_3_t22C0949025AC6DA80FDDEC56C8D1CA36E2454873 ** get_address_of_sender_0() { return &___sender_0; }
	inline void set_sender_0(Func_3_t22C0949025AC6DA80FDDEC56C8D1CA36E2454873 * value)
	{
		___sender_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sender_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_tBCD59DCD2348E3E530E1B1D017F10832F8A82379, ___U3CU3E4__this_1)); }
	inline WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_tBCD59DCD2348E3E530E1B1D017F10832F8A82379, ___completed_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_completed_2() const { return ___completed_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass17
struct U3CU3Ec__DisplayClass17_tB40AAC9FC771B26FE75B4D37D022DBD0DBC88E07  : public RuntimeObject
{
public:
	// System.Action WebSocketSharp.WebSocket/<>c__DisplayClass17::receive
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___receive_0;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<>c__DisplayClass17::<>4__this
	WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_receive_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_tB40AAC9FC771B26FE75B4D37D022DBD0DBC88E07, ___receive_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_receive_0() const { return ___receive_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_receive_0() { return &___receive_0; }
	inline void set_receive_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___receive_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receive_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_tB40AAC9FC771B26FE75B4D37D022DBD0DBC88E07, ___U3CU3E4__this_1)); }
	inline WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass1a
struct U3CU3Ec__DisplayClass1a_t586F63A993CAB0FDFB10281297258EEC1F2E1AD0  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.WebSocket/<>c__DisplayClass1a::method
	String_t* ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1a_t586F63A993CAB0FDFB10281297258EEC1F2E1AD0, ___method_0)); }
	inline String_t* get_method_0() const { return ___method_0; }
	inline String_t** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(String_t* value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_0), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass1d
struct U3CU3Ec__DisplayClass1d_t3D447AB975A5828E68A8453CCDB12969CD8C0D15  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.WebSocket/<>c__DisplayClass1d::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1d_t3D447AB975A5828E68A8453CCDB12969CD8C0D15, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass23
struct U3CU3Ec__DisplayClass23_tFAE90F7826D24887D2523335CD00493FA7A1C15E  : public RuntimeObject
{
public:
	// System.Func`1<System.Boolean> WebSocketSharp.WebSocket/<>c__DisplayClass23::connector
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___connector_0;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<>c__DisplayClass23::<>4__this
	WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_connector_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_tFAE90F7826D24887D2523335CD00493FA7A1C15E, ___connector_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_connector_0() const { return ___connector_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_connector_0() { return &___connector_0; }
	inline void set_connector_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___connector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connector_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_tFAE90F7826D24887D2523335CD00493FA7A1C15E, ___U3CU3E4__this_1)); }
	inline WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClassa
struct U3CU3Ec__DisplayClassa_t0074BEC8098E2D28D6BA817940D896676F3AC726  : public RuntimeObject
{
public:
	// System.Action`4<WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean> WebSocketSharp.WebSocket/<>c__DisplayClassa::closer
	Action_4_t1D5E542190ACAADFE8E719B5E016BCBC605FA441 * ___closer_0;

public:
	inline static int32_t get_offset_of_closer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassa_t0074BEC8098E2D28D6BA817940D896676F3AC726, ___closer_0)); }
	inline Action_4_t1D5E542190ACAADFE8E719B5E016BCBC605FA441 * get_closer_0() const { return ___closer_0; }
	inline Action_4_t1D5E542190ACAADFE8E719B5E016BCBC605FA441 ** get_address_of_closer_0() { return &___closer_0; }
	inline void set_closer_0(Action_4_t1D5E542190ACAADFE8E719B5E016BCBC605FA441 * value)
	{
		___closer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closer_0), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass10
struct U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A  : public RuntimeObject
{
public:
	// System.Int64 WebSocketSharp.WebSocketFrame/<>c__DisplayClass10::llen
	int64_t ___llen_0;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<>c__DisplayClass10::frame
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass10::completed
	Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed_2;

public:
	inline static int32_t get_offset_of_llen_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A, ___llen_0)); }
	inline int64_t get_llen_0() const { return ___llen_0; }
	inline int64_t* get_address_of_llen_0() { return &___llen_0; }
	inline void set_llen_0(int64_t value)
	{
		___llen_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A, ___frame_1)); }
	inline WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * get_frame_1() const { return ___frame_1; }
	inline WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B ** get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * value)
	{
		___frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_1), (void*)value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A, ___completed_2)); }
	inline Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass16
struct U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA  : public RuntimeObject
{
public:
	// System.IO.Stream WebSocketSharp.WebSocketFrame/<>c__DisplayClass16::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_0;
	// System.Boolean WebSocketSharp.WebSocketFrame/<>c__DisplayClass16::unmask
	bool ___unmask_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass16::completed
	Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed_2;
	// System.Action`1<System.Exception> WebSocketSharp.WebSocketFrame/<>c__DisplayClass16::error
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error_3;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA, ___stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_0() const { return ___stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_unmask_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA, ___unmask_1)); }
	inline bool get_unmask_1() const { return ___unmask_1; }
	inline bool* get_address_of_unmask_1() { return &___unmask_1; }
	inline void set_unmask_1(bool value)
	{
		___unmask_1 = value;
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA, ___completed_2)); }
	inline Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}

	inline static int32_t get_offset_of_error_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA, ___error_3)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_error_3() const { return ___error_3; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_error_3() { return &___error_3; }
	inline void set_error_3(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___error_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_3), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass2
struct U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.WebSocketFrame/<>c__DisplayClass2::lineFmt
	String_t* ___lineFmt_0;
	// System.Text.StringBuilder WebSocketSharp.WebSocketFrame/<>c__DisplayClass2::output
	StringBuilder_t * ___output_1;

public:
	inline static int32_t get_offset_of_lineFmt_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA, ___lineFmt_0)); }
	inline String_t* get_lineFmt_0() const { return ___lineFmt_0; }
	inline String_t** get_address_of_lineFmt_0() { return &___lineFmt_0; }
	inline void set_lineFmt_0(String_t* value)
	{
		___lineFmt_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineFmt_0), (void*)value);
	}

	inline static int32_t get_offset_of_output_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA, ___output_1)); }
	inline StringBuilder_t * get_output_1() const { return ___output_1; }
	inline StringBuilder_t ** get_address_of_output_1() { return &___output_1; }
	inline void set_output_1(StringBuilder_t * value)
	{
		___output_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_1), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass7
struct U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.WebSocketFrame/<>c__DisplayClass7::len
	int32_t ___len_0;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<>c__DisplayClass7::frame
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass7::completed
	Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed_2;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D, ___frame_1)); }
	inline WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * get_frame_1() const { return ___frame_1; }
	inline WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B ** get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * value)
	{
		___frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_1), (void*)value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D, ___completed_2)); }
	inline Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClassa
struct U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11  : public RuntimeObject
{
public:
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClassa::completed
	Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed_0;

public:
	inline static int32_t get_offset_of_completed_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11, ___completed_0)); }
	inline Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * get_completed_0() const { return ___completed_0; }
	inline Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 ** get_address_of_completed_0() { return &___completed_0; }
	inline void set_completed_0(Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * value)
	{
		___completed_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_0), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClassd
struct U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.WebSocketFrame/<>c__DisplayClassd::len
	int32_t ___len_0;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<>c__DisplayClassd::frame
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClassd::completed
	Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed_2;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90, ___frame_1)); }
	inline WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * get_frame_1() const { return ___frame_1; }
	inline WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B ** get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * value)
	{
		___frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_1), (void*)value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90, ___completed_2)); }
	inline Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18
struct U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723  : public RuntimeObject
{
public:
	// System.Byte WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::<>2__current
	uint8_t ___U3CU3E2__current_0;
	// System.Int32 WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::<>1__state
	int32_t ___U3CU3E1__state_1;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::<>4__this
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___U3CU3E4__this_2;
	// System.Byte WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::<b>5__19
	uint8_t ___U3CbU3E5__19_3;
	// System.Byte[] WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::<>7__wrap1b
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CU3E7__wrap1b_4;
	// System.Int32 WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::<>7__wrap1c
	int32_t ___U3CU3E7__wrap1c_5;

public:
	inline static int32_t get_offset_of_U3CU3E2__current_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723, ___U3CU3E2__current_0)); }
	inline uint8_t get_U3CU3E2__current_0() const { return ___U3CU3E2__current_0; }
	inline uint8_t* get_address_of_U3CU3E2__current_0() { return &___U3CU3E2__current_0; }
	inline void set_U3CU3E2__current_0(uint8_t value)
	{
		___U3CU3E2__current_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E1__state_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723, ___U3CU3E1__state_1)); }
	inline int32_t get_U3CU3E1__state_1() const { return ___U3CU3E1__state_1; }
	inline int32_t* get_address_of_U3CU3E1__state_1() { return &___U3CU3E1__state_1; }
	inline void set_U3CU3E1__state_1(int32_t value)
	{
		___U3CU3E1__state_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723, ___U3CU3E4__this_2)); }
	inline WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3E5__19_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723, ___U3CbU3E5__19_3)); }
	inline uint8_t get_U3CbU3E5__19_3() const { return ___U3CbU3E5__19_3; }
	inline uint8_t* get_address_of_U3CbU3E5__19_3() { return &___U3CbU3E5__19_3; }
	inline void set_U3CbU3E5__19_3(uint8_t value)
	{
		___U3CbU3E5__19_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1b_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723, ___U3CU3E7__wrap1b_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CU3E7__wrap1b_4() const { return ___U3CU3E7__wrap1b_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CU3E7__wrap1b_4() { return &___U3CU3E7__wrap1b_4; }
	inline void set_U3CU3E7__wrap1b_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CU3E7__wrap1b_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1b_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1c_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723, ___U3CU3E7__wrap1c_5)); }
	inline int32_t get_U3CU3E7__wrap1c_5() const { return ___U3CU3E7__wrap1c_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap1c_5() { return &___U3CU3E7__wrap1c_5; }
	inline void set_U3CU3E7__wrap1c_5(int32_t value)
	{
		___U3CU3E7__wrap1c_5 = value;
	}
};


// WebSocketSharp.Ext/<>c__DisplayClassd/<>c__DisplayClassf
struct U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA  : public RuntimeObject
{
public:
	// WebSocketSharp.Ext/<>c__DisplayClassd WebSocketSharp.Ext/<>c__DisplayClassd/<>c__DisplayClassf::CS$<>8__localse
	U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * ___CSU24U3CU3E8__localse_0;
	// System.Int64 WebSocketSharp.Ext/<>c__DisplayClassd/<>c__DisplayClassf::len
	int64_t ___len_1;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E8__localse_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA, ___CSU24U3CU3E8__localse_0)); }
	inline U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * get_CSU24U3CU3E8__localse_0() const { return ___CSU24U3CU3E8__localse_0; }
	inline U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 ** get_address_of_CSU24U3CU3E8__localse_0() { return &___CSU24U3CU3E8__localse_0; }
	inline void set_CSU24U3CU3E8__localse_0(U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * value)
	{
		___CSU24U3CU3E8__localse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__localse_0), (void*)value);
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA, ___len_1)); }
	inline int64_t get_len_1() const { return ___len_1; }
	inline int64_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(int64_t value)
	{
		___len_1 = value;
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass2/<>c__DisplayClass4
struct U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A  : public RuntimeObject
{
public:
	// WebSocketSharp.WebSocketFrame/<>c__DisplayClass2 WebSocketSharp.WebSocketFrame/<>c__DisplayClass2/<>c__DisplayClass4::CS$<>8__locals3
	U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * ___CSU24U3CU3E8__locals3_0;
	// System.Int64 WebSocketSharp.WebSocketFrame/<>c__DisplayClass2/<>c__DisplayClass4::lineCnt
	int64_t ___lineCnt_1;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E8__locals3_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A, ___CSU24U3CU3E8__locals3_0)); }
	inline U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * get_CSU24U3CU3E8__locals3_0() const { return ___CSU24U3CU3E8__locals3_0; }
	inline U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA ** get_address_of_CSU24U3CU3E8__locals3_0() { return &___CSU24U3CU3E8__locals3_0; }
	inline void set_CSU24U3CU3E8__locals3_0(U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * value)
	{
		___CSU24U3CU3E8__locals3_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals3_0), (void*)value);
	}

	inline static int32_t get_offset_of_lineCnt_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A, ___lineCnt_1)); }
	inline int64_t get_lineCnt_1() const { return ___lineCnt_1; }
	inline int64_t* get_address_of_lineCnt_1() { return &___lineCnt_1; }
	inline void set_lineCnt_1(int64_t value)
	{
		___lineCnt_1 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D  : public NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____allKeys_10;

public:
	inline static int32_t get_offset_of__all_9() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____all_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__all_9() const { return ____all_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__all_9() { return &____all_9; }
	inline void set__all_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____all_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____all_9), (void*)value);
	}

	inline static int32_t get_offset_of__allKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____allKeys_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__allKeys_10() const { return ____allKeys_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__allKeys_10() { return &____allKeys_10; }
	inline void set__allKeys_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____allKeys_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allKeys_10), (void*)value);
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// <PrivateImplementationDetails>{38D3CEF1-4C5A-4FC9-A92D-E0991034BC1A}/__StaticArrayInitTypeSize=14
struct __StaticArrayInitTypeSizeU3D14_tC3744000FBB3C1B8EE73A959886F45E0B0AC631F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_tC3744000FBB3C1B8EE73A959886F45E0B0AC631F__padding[14];
	};

public:
};


// WebSocketSharp.ByteOrder
struct ByteOrder_t03AE982585A6479A58B38753E3D05F0B35CA3238 
{
public:
	// System.Int32 WebSocketSharp.ByteOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteOrder_t03AE982585A6479A58B38753E3D05F0B35CA3238, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.CloseStatusCode
struct CloseStatusCode_tB4062A6C4D3A0E2B85D1707B6F5E7D02A1E20F3D 
{
public:
	// System.UInt16 WebSocketSharp.CloseStatusCode::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CloseStatusCode_tB4062A6C4D3A0E2B85D1707B6F5E7D02A1E20F3D, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.CompressionMethod
struct CompressionMethod_tA33E3D2094A28EFAD701F9F3B35A7EA775E0980C 
{
public:
	// System.Byte WebSocketSharp.CompressionMethod::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMethod_tA33E3D2094A28EFAD701F9F3B35A7EA775E0980C, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
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

// WebSocketSharp.Fin
struct Fin_t43C4CB840631B2D987228800481F7E20F8070632 
{
public:
	// System.Byte WebSocketSharp.Fin::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Fin_t43C4CB840631B2D987228800481F7E20F8070632, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Net.HttpHeaderType
struct HttpHeaderType_t35F0EEF419AD66C0933EAFBF315345CD12943542 
{
public:
	// System.Int32 WebSocketSharp.Net.HttpHeaderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpHeaderType_t35F0EEF419AD66C0933EAFBF315345CD12943542, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.LogLevel
struct LogLevel_t885B651BB5A1B8123B5D153C6FA039945CB04E1F 
{
public:
	// System.Int32 WebSocketSharp.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t885B651BB5A1B8123B5D153C6FA039945CB04E1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Mask
struct Mask_t2A377C4316C0E21185DE5BD53CA6235C02C5EB87 
{
public:
	// System.Byte WebSocketSharp.Mask::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mask_t2A377C4316C0E21185DE5BD53CA6235C02C5EB87, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// WebSocketSharp.Opcode
struct Opcode_t631B280506A965B3FB98FDDA2FEBDAB4E250E59A 
{
public:
	// System.Byte WebSocketSharp.Opcode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Opcode_t631B280506A965B3FB98FDDA2FEBDAB4E250E59A, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Rsv
struct Rsv_t5F407D9A45D461192284639E76EB6C2AE4A3439C 
{
public:
	// System.Byte WebSocketSharp.Rsv::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Rsv_t5F407D9A45D461192284639E76EB6C2AE4A3439C, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
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

// WebSocketSharp.WebSocketState
struct WebSocketState_tE5B06ED0158E14F5D7744256C62B613FCBFE7080 
{
public:
	// System.UInt16 WebSocketSharp.WebSocketState::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketState_tE5B06ED0158E14F5D7744256C62B613FCBFE7080, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// WebSocketSharp.Logger
struct Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE  : public RuntimeObject
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_file
	String_t* ____file_0;
	// WebSocketSharp.LogLevel modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_level
	int32_t ____level_1;
	// System.Action`2<WebSocketSharp.LogData,System.String> WebSocketSharp.Logger::_output
	Action_2_t55452A343E3D7D73FB8E23ACEAD77D3D160BEFF6 * ____output_2;
	// System.Object WebSocketSharp.Logger::_sync
	RuntimeObject * ____sync_3;

public:
	inline static int32_t get_offset_of__file_0() { return static_cast<int32_t>(offsetof(Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE, ____file_0)); }
	inline String_t* get__file_0() const { return ____file_0; }
	inline String_t** get_address_of__file_0() { return &____file_0; }
	inline void set__file_0(String_t* value)
	{
		____file_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____file_0), (void*)value);
	}

	inline static int32_t get_offset_of__level_1() { return static_cast<int32_t>(offsetof(Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE, ____level_1)); }
	inline int32_t get__level_1() const { return ____level_1; }
	inline int32_t* get_address_of__level_1() { return &____level_1; }
	inline void set__level_1(int32_t value)
	{
		____level_1 = value;
	}

	inline static int32_t get_offset_of__output_2() { return static_cast<int32_t>(offsetof(Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE, ____output_2)); }
	inline Action_2_t55452A343E3D7D73FB8E23ACEAD77D3D160BEFF6 * get__output_2() const { return ____output_2; }
	inline Action_2_t55452A343E3D7D73FB8E23ACEAD77D3D160BEFF6 ** get_address_of__output_2() { return &____output_2; }
	inline void set__output_2(Action_2_t55452A343E3D7D73FB8E23ACEAD77D3D160BEFF6 * value)
	{
		____output_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____output_2), (void*)value);
	}

	inline static int32_t get_offset_of__sync_3() { return static_cast<int32_t>(offsetof(Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE, ____sync_3)); }
	inline RuntimeObject * get__sync_3() const { return ____sync_3; }
	inline RuntimeObject ** get_address_of__sync_3() { return &____sync_3; }
	inline void set__sync_3(RuntimeObject * value)
	{
		____sync_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sync_3), (void*)value);
	}
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C  : public NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D
{
public:
	// System.Boolean WebSocketSharp.Net.WebHeaderCollection::_internallyUsed
	bool ____internallyUsed_12;
	// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.WebHeaderCollection::_state
	int32_t ____state_13;

public:
	inline static int32_t get_offset_of__internallyUsed_12() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C, ____internallyUsed_12)); }
	inline bool get__internallyUsed_12() const { return ____internallyUsed_12; }
	inline bool* get_address_of__internallyUsed_12() { return &____internallyUsed_12; }
	inline void set__internallyUsed_12(bool value)
	{
		____internallyUsed_12 = value;
	}

	inline static int32_t get_offset_of__state_13() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C, ____state_13)); }
	inline int32_t get__state_13() const { return ____state_13; }
	inline int32_t* get_address_of__state_13() { return &____state_13; }
	inline void set__state_13(int32_t value)
	{
		____state_13 = value;
	}
};

struct WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Net.HttpHeaderInfo> WebSocketSharp.Net.WebHeaderCollection::_headers
	Dictionary_2_t4C6DC1C9072F05154CC53CEA564A3AC12E5ADA2D * ____headers_11;

public:
	inline static int32_t get_offset_of__headers_11() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C_StaticFields, ____headers_11)); }
	inline Dictionary_2_t4C6DC1C9072F05154CC53CEA564A3AC12E5ADA2D * get__headers_11() const { return ____headers_11; }
	inline Dictionary_2_t4C6DC1C9072F05154CC53CEA564A3AC12E5ADA2D ** get_address_of__headers_11() { return &____headers_11; }
	inline void set__headers_11(Dictionary_2_t4C6DC1C9072F05154CC53CEA564A3AC12E5ADA2D * value)
	{
		____headers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____headers_11), (void*)value);
	}
};


// WebSocketSharp.WebSocket
struct WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5  : public RuntimeObject
{
public:
	// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_t6C1E0E3AABC79A70BE666512DA0911B87CAF2E6A * ____authChallenge_0;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_1;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_2;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____closeContext_3;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_4;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_tDBC6378C7C7A32F7DB9C33B4BB01EC93034796C0 * ____context_5;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_t3AE1D39D54DA4C2BEE3DF15A12A8A48CCA20A2A9 * ____cookies_6;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_t79BC9810F4D4D94E23AD37996F68628C59443F80 * ____credentials_7;
	// System.Boolean WebSocketSharp.WebSocket::_emitOnPing
	bool ____emitOnPing_8;
	// System.Boolean WebSocketSharp.WebSocket::_enableRedirection
	bool ____enableRedirection_9;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_exitReceiving
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ____exitReceiving_10;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_11;
	// System.Boolean WebSocketSharp.WebSocket::_extensionsRequested
	bool ____extensionsRequested_12;
	// System.Object WebSocketSharp.WebSocket::_forConn
	RuntimeObject * ____forConn_13;
	// System.Object WebSocketSharp.WebSocket::_forMessageEventQueue
	RuntimeObject * ____forMessageEventQueue_14;
	// System.Object WebSocketSharp.WebSocket::_forSend
	RuntimeObject * ____forSend_15;
	// System.IO.MemoryStream WebSocketSharp.WebSocket::_fragmentsBuffer
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ____fragmentsBuffer_16;
	// System.Boolean WebSocketSharp.WebSocket::_fragmentsCompressed
	bool ____fragmentsCompressed_17;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocket::_fragmentsOpcode
	uint8_t ____fragmentsOpcode_18;
	// System.Boolean WebSocketSharp.WebSocket::_inContinuation
	bool ____inContinuation_19;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_inMessage
	bool ____inMessage_20;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_logger
	Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE * ____logger_21;
	// System.Action`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_message
	Action_1_tF078D157D77B5694A712F59E2E4A4D7ADE990F2E * ____message_22;
	// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_messageEventQueue
	Queue_1_tACD33A888CFCF2127A7B26465315CBEA3B6C04C4 * ____messageEventQueue_23;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_24;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_25;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_26;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_27;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____protocols_28;
	// System.Boolean WebSocketSharp.WebSocket::_protocolsRequested
	bool ____protocolsRequested_29;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_proxyCredentials
	NetworkCredential_t79BC9810F4D4D94E23AD37996F68628C59443F80 * ____proxyCredentials_30;
	// System.Uri WebSocketSharp.WebSocket::_proxyUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ____proxyUri_31;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_32;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_receivePong
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ____receivePong_33;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_34;
	// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::_sslConfig
	ClientSslConfiguration_t672195CF1999A662D43AEE28E5EB3DB75595064B * ____sslConfig_35;
	// System.IO.Stream WebSocketSharp.WebSocket::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_36;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ____tcpClient_37;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ____uri_38;
	// System.TimeSpan WebSocketSharp.WebSocket::_waitTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____waitTime_39;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_t2E947DB23EE64EEE2B512336DD7BB0E591883CB6 * ___OnClose_43;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_t27DA8150778433533B0AB540A065C80984342C9D * ___OnError_44;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_t699FE1A0F8839063F4C9519AA26DAD63C77E3DE3 * ___OnMessage_45;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnOpen_46;

public:
	inline static int32_t get_offset_of__authChallenge_0() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____authChallenge_0)); }
	inline AuthenticationChallenge_t6C1E0E3AABC79A70BE666512DA0911B87CAF2E6A * get__authChallenge_0() const { return ____authChallenge_0; }
	inline AuthenticationChallenge_t6C1E0E3AABC79A70BE666512DA0911B87CAF2E6A ** get_address_of__authChallenge_0() { return &____authChallenge_0; }
	inline void set__authChallenge_0(AuthenticationChallenge_t6C1E0E3AABC79A70BE666512DA0911B87CAF2E6A * value)
	{
		____authChallenge_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____authChallenge_0), (void*)value);
	}

	inline static int32_t get_offset_of__base64Key_1() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____base64Key_1)); }
	inline String_t* get__base64Key_1() const { return ____base64Key_1; }
	inline String_t** get_address_of__base64Key_1() { return &____base64Key_1; }
	inline void set__base64Key_1(String_t* value)
	{
		____base64Key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____base64Key_1), (void*)value);
	}

	inline static int32_t get_offset_of__client_2() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____client_2)); }
	inline bool get__client_2() const { return ____client_2; }
	inline bool* get_address_of__client_2() { return &____client_2; }
	inline void set__client_2(bool value)
	{
		____client_2 = value;
	}

	inline static int32_t get_offset_of__closeContext_3() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____closeContext_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__closeContext_3() const { return ____closeContext_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__closeContext_3() { return &____closeContext_3; }
	inline void set__closeContext_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____closeContext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____closeContext_3), (void*)value);
	}

	inline static int32_t get_offset_of__compression_4() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____compression_4)); }
	inline uint8_t get__compression_4() const { return ____compression_4; }
	inline uint8_t* get_address_of__compression_4() { return &____compression_4; }
	inline void set__compression_4(uint8_t value)
	{
		____compression_4 = value;
	}

	inline static int32_t get_offset_of__context_5() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____context_5)); }
	inline WebSocketContext_tDBC6378C7C7A32F7DB9C33B4BB01EC93034796C0 * get__context_5() const { return ____context_5; }
	inline WebSocketContext_tDBC6378C7C7A32F7DB9C33B4BB01EC93034796C0 ** get_address_of__context_5() { return &____context_5; }
	inline void set__context_5(WebSocketContext_tDBC6378C7C7A32F7DB9C33B4BB01EC93034796C0 * value)
	{
		____context_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_5), (void*)value);
	}

	inline static int32_t get_offset_of__cookies_6() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____cookies_6)); }
	inline CookieCollection_t3AE1D39D54DA4C2BEE3DF15A12A8A48CCA20A2A9 * get__cookies_6() const { return ____cookies_6; }
	inline CookieCollection_t3AE1D39D54DA4C2BEE3DF15A12A8A48CCA20A2A9 ** get_address_of__cookies_6() { return &____cookies_6; }
	inline void set__cookies_6(CookieCollection_t3AE1D39D54DA4C2BEE3DF15A12A8A48CCA20A2A9 * value)
	{
		____cookies_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cookies_6), (void*)value);
	}

	inline static int32_t get_offset_of__credentials_7() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____credentials_7)); }
	inline NetworkCredential_t79BC9810F4D4D94E23AD37996F68628C59443F80 * get__credentials_7() const { return ____credentials_7; }
	inline NetworkCredential_t79BC9810F4D4D94E23AD37996F68628C59443F80 ** get_address_of__credentials_7() { return &____credentials_7; }
	inline void set__credentials_7(NetworkCredential_t79BC9810F4D4D94E23AD37996F68628C59443F80 * value)
	{
		____credentials_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____credentials_7), (void*)value);
	}

	inline static int32_t get_offset_of__emitOnPing_8() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____emitOnPing_8)); }
	inline bool get__emitOnPing_8() const { return ____emitOnPing_8; }
	inline bool* get_address_of__emitOnPing_8() { return &____emitOnPing_8; }
	inline void set__emitOnPing_8(bool value)
	{
		____emitOnPing_8 = value;
	}

	inline static int32_t get_offset_of__enableRedirection_9() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____enableRedirection_9)); }
	inline bool get__enableRedirection_9() const { return ____enableRedirection_9; }
	inline bool* get_address_of__enableRedirection_9() { return &____enableRedirection_9; }
	inline void set__enableRedirection_9(bool value)
	{
		____enableRedirection_9 = value;
	}

	inline static int32_t get_offset_of__exitReceiving_10() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____exitReceiving_10)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get__exitReceiving_10() const { return ____exitReceiving_10; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of__exitReceiving_10() { return &____exitReceiving_10; }
	inline void set__exitReceiving_10(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		____exitReceiving_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exitReceiving_10), (void*)value);
	}

	inline static int32_t get_offset_of__extensions_11() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____extensions_11)); }
	inline String_t* get__extensions_11() const { return ____extensions_11; }
	inline String_t** get_address_of__extensions_11() { return &____extensions_11; }
	inline void set__extensions_11(String_t* value)
	{
		____extensions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extensions_11), (void*)value);
	}

	inline static int32_t get_offset_of__extensionsRequested_12() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____extensionsRequested_12)); }
	inline bool get__extensionsRequested_12() const { return ____extensionsRequested_12; }
	inline bool* get_address_of__extensionsRequested_12() { return &____extensionsRequested_12; }
	inline void set__extensionsRequested_12(bool value)
	{
		____extensionsRequested_12 = value;
	}

	inline static int32_t get_offset_of__forConn_13() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____forConn_13)); }
	inline RuntimeObject * get__forConn_13() const { return ____forConn_13; }
	inline RuntimeObject ** get_address_of__forConn_13() { return &____forConn_13; }
	inline void set__forConn_13(RuntimeObject * value)
	{
		____forConn_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forConn_13), (void*)value);
	}

	inline static int32_t get_offset_of__forMessageEventQueue_14() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____forMessageEventQueue_14)); }
	inline RuntimeObject * get__forMessageEventQueue_14() const { return ____forMessageEventQueue_14; }
	inline RuntimeObject ** get_address_of__forMessageEventQueue_14() { return &____forMessageEventQueue_14; }
	inline void set__forMessageEventQueue_14(RuntimeObject * value)
	{
		____forMessageEventQueue_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forMessageEventQueue_14), (void*)value);
	}

	inline static int32_t get_offset_of__forSend_15() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____forSend_15)); }
	inline RuntimeObject * get__forSend_15() const { return ____forSend_15; }
	inline RuntimeObject ** get_address_of__forSend_15() { return &____forSend_15; }
	inline void set__forSend_15(RuntimeObject * value)
	{
		____forSend_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forSend_15), (void*)value);
	}

	inline static int32_t get_offset_of__fragmentsBuffer_16() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____fragmentsBuffer_16)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get__fragmentsBuffer_16() const { return ____fragmentsBuffer_16; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of__fragmentsBuffer_16() { return &____fragmentsBuffer_16; }
	inline void set__fragmentsBuffer_16(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		____fragmentsBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fragmentsBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of__fragmentsCompressed_17() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____fragmentsCompressed_17)); }
	inline bool get__fragmentsCompressed_17() const { return ____fragmentsCompressed_17; }
	inline bool* get_address_of__fragmentsCompressed_17() { return &____fragmentsCompressed_17; }
	inline void set__fragmentsCompressed_17(bool value)
	{
		____fragmentsCompressed_17 = value;
	}

	inline static int32_t get_offset_of__fragmentsOpcode_18() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____fragmentsOpcode_18)); }
	inline uint8_t get__fragmentsOpcode_18() const { return ____fragmentsOpcode_18; }
	inline uint8_t* get_address_of__fragmentsOpcode_18() { return &____fragmentsOpcode_18; }
	inline void set__fragmentsOpcode_18(uint8_t value)
	{
		____fragmentsOpcode_18 = value;
	}

	inline static int32_t get_offset_of__inContinuation_19() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____inContinuation_19)); }
	inline bool get__inContinuation_19() const { return ____inContinuation_19; }
	inline bool* get_address_of__inContinuation_19() { return &____inContinuation_19; }
	inline void set__inContinuation_19(bool value)
	{
		____inContinuation_19 = value;
	}

	inline static int32_t get_offset_of__inMessage_20() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____inMessage_20)); }
	inline bool get__inMessage_20() const { return ____inMessage_20; }
	inline bool* get_address_of__inMessage_20() { return &____inMessage_20; }
	inline void set__inMessage_20(bool value)
	{
		____inMessage_20 = value;
	}

	inline static int32_t get_offset_of__logger_21() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____logger_21)); }
	inline Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE * get__logger_21() const { return ____logger_21; }
	inline Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE ** get_address_of__logger_21() { return &____logger_21; }
	inline void set__logger_21(Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE * value)
	{
		____logger_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logger_21), (void*)value);
	}

	inline static int32_t get_offset_of__message_22() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____message_22)); }
	inline Action_1_tF078D157D77B5694A712F59E2E4A4D7ADE990F2E * get__message_22() const { return ____message_22; }
	inline Action_1_tF078D157D77B5694A712F59E2E4A4D7ADE990F2E ** get_address_of__message_22() { return &____message_22; }
	inline void set__message_22(Action_1_tF078D157D77B5694A712F59E2E4A4D7ADE990F2E * value)
	{
		____message_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_22), (void*)value);
	}

	inline static int32_t get_offset_of__messageEventQueue_23() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____messageEventQueue_23)); }
	inline Queue_1_tACD33A888CFCF2127A7B26465315CBEA3B6C04C4 * get__messageEventQueue_23() const { return ____messageEventQueue_23; }
	inline Queue_1_tACD33A888CFCF2127A7B26465315CBEA3B6C04C4 ** get_address_of__messageEventQueue_23() { return &____messageEventQueue_23; }
	inline void set__messageEventQueue_23(Queue_1_tACD33A888CFCF2127A7B26465315CBEA3B6C04C4 * value)
	{
		____messageEventQueue_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____messageEventQueue_23), (void*)value);
	}

	inline static int32_t get_offset_of__nonceCount_24() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____nonceCount_24)); }
	inline uint32_t get__nonceCount_24() const { return ____nonceCount_24; }
	inline uint32_t* get_address_of__nonceCount_24() { return &____nonceCount_24; }
	inline void set__nonceCount_24(uint32_t value)
	{
		____nonceCount_24 = value;
	}

	inline static int32_t get_offset_of__origin_25() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____origin_25)); }
	inline String_t* get__origin_25() const { return ____origin_25; }
	inline String_t** get_address_of__origin_25() { return &____origin_25; }
	inline void set__origin_25(String_t* value)
	{
		____origin_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____origin_25), (void*)value);
	}

	inline static int32_t get_offset_of__preAuth_26() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____preAuth_26)); }
	inline bool get__preAuth_26() const { return ____preAuth_26; }
	inline bool* get_address_of__preAuth_26() { return &____preAuth_26; }
	inline void set__preAuth_26(bool value)
	{
		____preAuth_26 = value;
	}

	inline static int32_t get_offset_of__protocol_27() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____protocol_27)); }
	inline String_t* get__protocol_27() const { return ____protocol_27; }
	inline String_t** get_address_of__protocol_27() { return &____protocol_27; }
	inline void set__protocol_27(String_t* value)
	{
		____protocol_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____protocol_27), (void*)value);
	}

	inline static int32_t get_offset_of__protocols_28() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____protocols_28)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__protocols_28() const { return ____protocols_28; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__protocols_28() { return &____protocols_28; }
	inline void set__protocols_28(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____protocols_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____protocols_28), (void*)value);
	}

	inline static int32_t get_offset_of__protocolsRequested_29() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____protocolsRequested_29)); }
	inline bool get__protocolsRequested_29() const { return ____protocolsRequested_29; }
	inline bool* get_address_of__protocolsRequested_29() { return &____protocolsRequested_29; }
	inline void set__protocolsRequested_29(bool value)
	{
		____protocolsRequested_29 = value;
	}

	inline static int32_t get_offset_of__proxyCredentials_30() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____proxyCredentials_30)); }
	inline NetworkCredential_t79BC9810F4D4D94E23AD37996F68628C59443F80 * get__proxyCredentials_30() const { return ____proxyCredentials_30; }
	inline NetworkCredential_t79BC9810F4D4D94E23AD37996F68628C59443F80 ** get_address_of__proxyCredentials_30() { return &____proxyCredentials_30; }
	inline void set__proxyCredentials_30(NetworkCredential_t79BC9810F4D4D94E23AD37996F68628C59443F80 * value)
	{
		____proxyCredentials_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxyCredentials_30), (void*)value);
	}

	inline static int32_t get_offset_of__proxyUri_31() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____proxyUri_31)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get__proxyUri_31() const { return ____proxyUri_31; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of__proxyUri_31() { return &____proxyUri_31; }
	inline void set__proxyUri_31(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		____proxyUri_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxyUri_31), (void*)value);
	}

	inline static int32_t get_offset_of__readyState_32() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____readyState_32)); }
	inline uint16_t get__readyState_32() const { return ____readyState_32; }
	inline uint16_t* get_address_of__readyState_32() { return &____readyState_32; }
	inline void set__readyState_32(uint16_t value)
	{
		____readyState_32 = value;
	}

	inline static int32_t get_offset_of__receivePong_33() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____receivePong_33)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get__receivePong_33() const { return ____receivePong_33; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of__receivePong_33() { return &____receivePong_33; }
	inline void set__receivePong_33(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		____receivePong_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____receivePong_33), (void*)value);
	}

	inline static int32_t get_offset_of__secure_34() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____secure_34)); }
	inline bool get__secure_34() const { return ____secure_34; }
	inline bool* get_address_of__secure_34() { return &____secure_34; }
	inline void set__secure_34(bool value)
	{
		____secure_34 = value;
	}

	inline static int32_t get_offset_of__sslConfig_35() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____sslConfig_35)); }
	inline ClientSslConfiguration_t672195CF1999A662D43AEE28E5EB3DB75595064B * get__sslConfig_35() const { return ____sslConfig_35; }
	inline ClientSslConfiguration_t672195CF1999A662D43AEE28E5EB3DB75595064B ** get_address_of__sslConfig_35() { return &____sslConfig_35; }
	inline void set__sslConfig_35(ClientSslConfiguration_t672195CF1999A662D43AEE28E5EB3DB75595064B * value)
	{
		____sslConfig_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sslConfig_35), (void*)value);
	}

	inline static int32_t get_offset_of__stream_36() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____stream_36)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_36() const { return ____stream_36; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_36() { return &____stream_36; }
	inline void set__stream_36(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_36), (void*)value);
	}

	inline static int32_t get_offset_of__tcpClient_37() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____tcpClient_37)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get__tcpClient_37() const { return ____tcpClient_37; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of__tcpClient_37() { return &____tcpClient_37; }
	inline void set__tcpClient_37(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		____tcpClient_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tcpClient_37), (void*)value);
	}

	inline static int32_t get_offset_of__uri_38() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____uri_38)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get__uri_38() const { return ____uri_38; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of__uri_38() { return &____uri_38; }
	inline void set__uri_38(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		____uri_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uri_38), (void*)value);
	}

	inline static int32_t get_offset_of__waitTime_39() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ____waitTime_39)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__waitTime_39() const { return ____waitTime_39; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__waitTime_39() { return &____waitTime_39; }
	inline void set__waitTime_39(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____waitTime_39 = value;
	}

	inline static int32_t get_offset_of_OnClose_43() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ___OnClose_43)); }
	inline EventHandler_1_t2E947DB23EE64EEE2B512336DD7BB0E591883CB6 * get_OnClose_43() const { return ___OnClose_43; }
	inline EventHandler_1_t2E947DB23EE64EEE2B512336DD7BB0E591883CB6 ** get_address_of_OnClose_43() { return &___OnClose_43; }
	inline void set_OnClose_43(EventHandler_1_t2E947DB23EE64EEE2B512336DD7BB0E591883CB6 * value)
	{
		___OnClose_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClose_43), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_44() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ___OnError_44)); }
	inline EventHandler_1_t27DA8150778433533B0AB540A065C80984342C9D * get_OnError_44() const { return ___OnError_44; }
	inline EventHandler_1_t27DA8150778433533B0AB540A065C80984342C9D ** get_address_of_OnError_44() { return &___OnError_44; }
	inline void set_OnError_44(EventHandler_1_t27DA8150778433533B0AB540A065C80984342C9D * value)
	{
		___OnError_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_44), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessage_45() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ___OnMessage_45)); }
	inline EventHandler_1_t699FE1A0F8839063F4C9519AA26DAD63C77E3DE3 * get_OnMessage_45() const { return ___OnMessage_45; }
	inline EventHandler_1_t699FE1A0F8839063F4C9519AA26DAD63C77E3DE3 ** get_address_of_OnMessage_45() { return &___OnMessage_45; }
	inline void set_OnMessage_45(EventHandler_1_t699FE1A0F8839063F4C9519AA26DAD63C77E3DE3 * value)
	{
		___OnMessage_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_45), (void*)value);
	}

	inline static int32_t get_offset_of_OnOpen_46() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5, ___OnOpen_46)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnOpen_46() const { return ___OnOpen_46; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnOpen_46() { return &___OnOpen_46; }
	inline void set_OnOpen_46(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnOpen_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOpen_46), (void*)value);
	}
};

struct WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.WebSocket::EmptyBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EmptyBytes_40;
	// System.Int32 WebSocketSharp.WebSocket::FragmentLength
	int32_t ___FragmentLength_41;
	// System.Security.Cryptography.RandomNumberGenerator WebSocketSharp.WebSocket::RandomNumber
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ___RandomNumber_42;

public:
	inline static int32_t get_offset_of_EmptyBytes_40() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_StaticFields, ___EmptyBytes_40)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EmptyBytes_40() const { return ___EmptyBytes_40; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EmptyBytes_40() { return &___EmptyBytes_40; }
	inline void set_EmptyBytes_40(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EmptyBytes_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyBytes_40), (void*)value);
	}

	inline static int32_t get_offset_of_FragmentLength_41() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_StaticFields, ___FragmentLength_41)); }
	inline int32_t get_FragmentLength_41() const { return ___FragmentLength_41; }
	inline int32_t* get_address_of_FragmentLength_41() { return &___FragmentLength_41; }
	inline void set_FragmentLength_41(int32_t value)
	{
		___FragmentLength_41 = value;
	}

	inline static int32_t get_offset_of_RandomNumber_42() { return static_cast<int32_t>(offsetof(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_StaticFields, ___RandomNumber_42)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get_RandomNumber_42() const { return ___RandomNumber_42; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of_RandomNumber_42() { return &___RandomNumber_42; }
	inline void set_RandomNumber_42(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		___RandomNumber_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomNumber_42), (void*)value);
	}
};


// WebSocketSharp.WebSocketException
struct WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D  : public Exception_t
{
public:
	// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::_code
	uint16_t ____code_17;

public:
	inline static int32_t get_offset_of__code_17() { return static_cast<int32_t>(offsetof(WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D, ____code_17)); }
	inline uint16_t get__code_17() const { return ____code_17; }
	inline uint16_t* get_address_of__code_17() { return &____code_17; }
	inline void set__code_17(uint16_t value)
	{
		____code_17 = value;
	}
};


// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame::_extPayloadLength
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____extPayloadLength_0;
	// WebSocketSharp.Fin WebSocketSharp.WebSocketFrame::_fin
	uint8_t ____fin_1;
	// WebSocketSharp.Mask WebSocketSharp.WebSocketFrame::_mask
	uint8_t ____mask_2;
	// System.Byte[] WebSocketSharp.WebSocketFrame::_maskingKey
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____maskingKey_3;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocketFrame::_opcode
	uint8_t ____opcode_4;
	// WebSocketSharp.PayloadData WebSocketSharp.WebSocketFrame::_payloadData
	PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * ____payloadData_5;
	// System.Byte WebSocketSharp.WebSocketFrame::_payloadLength
	uint8_t ____payloadLength_6;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv1
	uint8_t ____rsv1_7;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv2
	uint8_t ____rsv2_8;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv3
	uint8_t ____rsv3_9;

public:
	inline static int32_t get_offset_of__extPayloadLength_0() { return static_cast<int32_t>(offsetof(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B, ____extPayloadLength_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__extPayloadLength_0() const { return ____extPayloadLength_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__extPayloadLength_0() { return &____extPayloadLength_0; }
	inline void set__extPayloadLength_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____extPayloadLength_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extPayloadLength_0), (void*)value);
	}

	inline static int32_t get_offset_of__fin_1() { return static_cast<int32_t>(offsetof(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B, ____fin_1)); }
	inline uint8_t get__fin_1() const { return ____fin_1; }
	inline uint8_t* get_address_of__fin_1() { return &____fin_1; }
	inline void set__fin_1(uint8_t value)
	{
		____fin_1 = value;
	}

	inline static int32_t get_offset_of__mask_2() { return static_cast<int32_t>(offsetof(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B, ____mask_2)); }
	inline uint8_t get__mask_2() const { return ____mask_2; }
	inline uint8_t* get_address_of__mask_2() { return &____mask_2; }
	inline void set__mask_2(uint8_t value)
	{
		____mask_2 = value;
	}

	inline static int32_t get_offset_of__maskingKey_3() { return static_cast<int32_t>(offsetof(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B, ____maskingKey_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__maskingKey_3() const { return ____maskingKey_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__maskingKey_3() { return &____maskingKey_3; }
	inline void set__maskingKey_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____maskingKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maskingKey_3), (void*)value);
	}

	inline static int32_t get_offset_of__opcode_4() { return static_cast<int32_t>(offsetof(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B, ____opcode_4)); }
	inline uint8_t get__opcode_4() const { return ____opcode_4; }
	inline uint8_t* get_address_of__opcode_4() { return &____opcode_4; }
	inline void set__opcode_4(uint8_t value)
	{
		____opcode_4 = value;
	}

	inline static int32_t get_offset_of__payloadData_5() { return static_cast<int32_t>(offsetof(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B, ____payloadData_5)); }
	inline PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * get__payloadData_5() const { return ____payloadData_5; }
	inline PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 ** get_address_of__payloadData_5() { return &____payloadData_5; }
	inline void set__payloadData_5(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * value)
	{
		____payloadData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____payloadData_5), (void*)value);
	}

	inline static int32_t get_offset_of__payloadLength_6() { return static_cast<int32_t>(offsetof(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B, ____payloadLength_6)); }
	inline uint8_t get__payloadLength_6() const { return ____payloadLength_6; }
	inline uint8_t* get_address_of__payloadLength_6() { return &____payloadLength_6; }
	inline void set__payloadLength_6(uint8_t value)
	{
		____payloadLength_6 = value;
	}

	inline static int32_t get_offset_of__rsv1_7() { return static_cast<int32_t>(offsetof(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B, ____rsv1_7)); }
	inline uint8_t get__rsv1_7() const { return ____rsv1_7; }
	inline uint8_t* get_address_of__rsv1_7() { return &____rsv1_7; }
	inline void set__rsv1_7(uint8_t value)
	{
		____rsv1_7 = value;
	}

	inline static int32_t get_offset_of__rsv2_8() { return static_cast<int32_t>(offsetof(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B, ____rsv2_8)); }
	inline uint8_t get__rsv2_8() const { return ____rsv2_8; }
	inline uint8_t* get_address_of__rsv2_8() { return &____rsv2_8; }
	inline void set__rsv2_8(uint8_t value)
	{
		____rsv2_8 = value;
	}

	inline static int32_t get_offset_of__rsv3_9() { return static_cast<int32_t>(offsetof(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B, ____rsv3_9)); }
	inline uint8_t get__rsv3_9() const { return ____rsv3_9; }
	inline uint8_t* get_address_of__rsv3_9() { return &____rsv3_9; }
	inline void set__rsv3_9(uint8_t value)
	{
		____rsv3_9 = value;
	}
};

struct WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame::EmptyPingBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EmptyPingBytes_10;

public:
	inline static int32_t get_offset_of_EmptyPingBytes_10() { return static_cast<int32_t>(offsetof(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_StaticFields, ___EmptyPingBytes_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EmptyPingBytes_10() const { return ___EmptyPingBytes_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EmptyPingBytes_10() { return &___EmptyPingBytes_10; }
	inline void set_EmptyPingBytes_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EmptyPingBytes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyPingBytes_10), (void*)value);
	}
};


// System.Action`1<System.Byte[]>
struct Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int64>
struct Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`4<WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean>
struct Action_4_t1D5E542190ACAADFE8E719B5E016BCBC605FA441  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`4<System.String,System.String,System.String,System.String>
struct Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>
struct Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<WebSocketSharp.Opcode,System.IO.Stream,System.Boolean>
struct Func_3_t22C0949025AC6DA80FDDEC56C8D1CA36E2454873  : public MulticastDelegate_t
{
public:

public:
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


// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::Invoke(!0,!1,!2,!3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4_Invoke_mB0B985148B85078BF90C75ECB176475EABF127D5_gshared (Action_4_tDB82015AB9EE6C7A4D051C5068F94F41BD15DE0D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !1 System.Func`2<System.Int32,System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_gshared (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * __this, int32_t ___arg0, const RuntimeMethod* method);
// T[] WebSocketSharp.Ext::SubArray<System.Byte>(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF08EE78AAD28B15DAA368D0728D7DE661C3D922A_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method);
// !2 System.Func`3<System.ByteEnum,System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_3_EndInvoke_m3A33221A90EE35F9A853DE106A5CB9C0C57A17F9_gshared (Func_3_tA5841EEA02A558675A9CA874D6110EB908B71771 * __this, RuntimeObject* ___result0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject* ___result0, const RuntimeMethod* method);
// System.Void System.Action`4<System.Object,System.Boolean,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4_EndInvoke_mE7B30E56F29241909BC48AC7EA33046B2864A5DF_gshared (Action_4_tE50FFD0BB0F77FE2B45FE9BF667F41B666FD4E00 * __this, RuntimeObject* ___result0, const RuntimeMethod* method);
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4__ctor_m13BE596D4BB6EE74E7BABCD899B54676A90C51E5_gshared (Action_4_tDB82015AB9EE6C7A4D051C5068F94F41BD15DE0D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_gshared (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * __this, int64_t ___obj0, const RuntimeMethod* method);

// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mBAB01B135887BE014FC36B0812F00994DB850D6C (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * __this, uint16_t ___code0, String_t* ___message1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String WebSocketSharp.Ext::GetMessage(WebSocketSharp.CloseStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Ext_GetMessage_mB14E0F26F168EA2D6079F8A4ACD1699BE4F8A80B (uint16_t ___code0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreatePingFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * WebSocketFrame_CreatePingFrame_mC39FC347E824DFABFBC257562640968B024AD0F6 (bool ___mask0, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.WebSocketFrame::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocketFrame_ToArray_m4ECE2BBB7FB2494EAD5289EF838B6303DA5272CA (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_m89CD647B170C333A25411D42B8716A684305831E (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, uint8_t ___fin0, uint8_t ___opcode1, PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * ___payloadData2, bool ___compressed3, bool ___mask4, const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_m30A84F488884102D19EDB2BCCB3205CC2FD46F8E (PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsData(WebSocketSharp.Opcode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsData_m93BE51149CF0891E660D2F0E6E4DF315CF3A51F2 (uint8_t ___opcode0, const RuntimeMethod* method);
// System.UInt64 WebSocketSharp.PayloadData::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t PayloadData_get_Length_m5D7A339972600EBD98D6C79B94D9EB3C8B84A703 (PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * __this, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.Ext::InternalToByteArray(System.UInt16,WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Ext_InternalToByteArray_m33CF1973316A6A8B709602910B7B0F2F7F1D4F82 (uint16_t ___value0, int32_t ___order1, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.Ext::InternalToByteArray(System.UInt64,WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Ext_InternalToByteArray_mB2C6EE3E4CE15DA07419E09C241008586C4AC8FD (uint64_t ___value0, int32_t ___order1, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.WebSocketFrame::createMaskingKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocketFrame_createMaskingKey_mECFDDB65DFC301DA5FB3FB560291927CF8C3A851 (const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData::Mask(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData_Mask_m9D0C9B62DA60A919DD39A977C01C578FD7D0BEC5 (PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key0, const RuntimeMethod* method);
// System.UInt64 WebSocketSharp.Ext::ToUInt64(System.Byte[],WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Ext_ToUInt64_m99920F5EF8329F7960F05F89CA8000CA169E3D45 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___sourceOrder1, const RuntimeMethod* method);
// System.UInt16 WebSocketSharp.Ext::ToUInt16(System.Byte[],WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Ext_ToUInt16_m857E0330F8AE7FE82E1BD7D2ED4E8424E3585ED8 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___sourceOrder1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2__ctor_mECF5F4200DD313356F1BC6E94307369B98BC1AF1 (U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * __this, const RuntimeMethod* method);
// System.UInt64 WebSocketSharp.WebSocketFrame::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketFrame_get_Length_mA7CD12BE0CF7D43975694D3D24FAAE25EB655D56 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mFA7CE0231236E9D2D93B07782B199357061CE3FA (Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>::Invoke()
inline Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * Func_1_Invoke_mD4E991296E96614D54847DA8E9C7F7C1C4525E6A (Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED * __this, const RuntimeMethod* method)
{
	return ((  Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * (*) (Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7 (uint8_t ___value0, int32_t ___toBase1, const RuntimeMethod* method);
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method);
// System.Void System.Action`4<System.String,System.String,System.String,System.String>::Invoke(!0,!1,!2,!3)
inline void Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * __this, String_t* ___arg10, String_t* ___arg21, String_t* ___arg32, String_t* ___arg43, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E *, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))Action_4_Invoke_mB0B985148B85078BF90C75ECB176475EABF127D5_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method);
}
// System.UInt64 WebSocketSharp.WebSocketFrame::get_FullPayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketFrame_get_FullPayloadLength_m6FBF0F858B9878834CF8F0DC0E89E8E93876CCD8 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37 (uint64_t* __this, const RuntimeMethod* method);
// System.String System.BitConverter::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsText_mBAF9D65652655ADF257262A0DFEE86092B9A83D5 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFragment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsFragment_m559F32F878DF4804499302A361195E524AB95713 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsMasked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsMasked_mB06C03FCEC4D29BEF86361F24A03228CFF4E6247 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsCompressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsCompressed_m8BF8341448BC906BACE3E9E826AA588BA5F467AB (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.PayloadData::get_ApplicationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PayloadData_get_ApplicationData_m3ED474C2EDD4471368FF7ECA4730BA5A7F5F4A0F (PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * __this, const RuntimeMethod* method);
// System.String WebSocketSharp.Ext::UTF8Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Ext_UTF8Decode_m34E03A8B1859F115E318C0B8B63E9FD50D0DB72A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mEA2E7BE4C0AA9379C66E969CF9787BCD99DB61FA (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsSupported(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsSupported_mF04A36411AFBF8CCE96A2A1317789930870B0452 (uint8_t ___opcode0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsData(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsData_m45595C47FF59E159B9E0BAA7D556167AEFB7BC71 (uint8_t ___opcode0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsControl(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsControl_m0E57CDD45F6AD3F2711962A0A8CCB31935B35F6B (uint8_t ___opcode0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m612526244145077105FCCE745A3D04DD00CD94ED (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * __this, uint16_t ___code0, String_t* ___message1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_mB54FA2A50482BC1D88FECF241B0FB1D9BF4752FB (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7__ctor_mF050798B2A4D777FCC72721516A2949433848469 (U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * __this, const RuntimeMethod* method);
// System.Int32 WebSocketSharp.WebSocketFrame::get_ExtendedPayloadLengthCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFrame_get_ExtendedPayloadLengthCount_m866C1B7169E76218157093400BE7125CCE5A28B8 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method);
// System.Void System.Action`1<WebSocketSharp.WebSocketFrame>::Invoke(!0)
inline void Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49 (Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * __this, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 *, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243 (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.Ext::ReadBytesAsync(System.IO.Stream,System.Int32,System.Action`1<System.Byte[]>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ext_ReadBytesAsync_m0694288C1A7F67B92B2B018E439FFCC469DCFA5D (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___length1, Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClassa::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassa__ctor_m26EFCA04655B0156539F05A0E74A963A98042356 (U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClassd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassd__ctor_mA3F1CEA5F881C5B76F2FAF44CC9E62981ED01AAF (U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass10::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10__ctor_m58AC2C2EDC7FF5CFBA7A464B7D2E39F3574AADB8 (U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Ext::ReadBytesAsync(System.IO.Stream,System.Int64,System.Int32,System.Action`1<System.Byte[]>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ext_ReadBytesAsync_mA0BE181C65482215E5D585763C6EDD52A336806F (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int64_t ___length1, int32_t ___bufferLength2, Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___completed3, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error4, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16__ctor_mB38B437F7FF2E22EA2700AFC3A4E00B93C1F26D5 (U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * __this, const RuntimeMethod* method);
// System.Void System.Action`1<WebSocketSharp.WebSocketFrame>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205 (Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocketFrame::readHeaderAsync(System.IO.Stream,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readHeaderAsync_m0EF9532171A71AD88DE9BDAD528CD04D97DF5286 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed1, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error2, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18__ctor_m49B941829ECB4A795422002363E138933C173698 (U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String WebSocketSharp.WebSocketFrame::print(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_print_m8176DA6A9DFCFA59CFA84FE47239672453ABA9F1 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame0, const RuntimeMethod* method);
// System.String WebSocketSharp.WebSocketFrame::dump(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame0, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.PayloadData::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PayloadData_ToArray_m76BBCFF22275B0D44FEA8460F65DC68D11F53DBE (PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Ext::WriteBytes(System.IO.Stream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ext_WriteBytes_m32E5678631561C82EE9DAA2E13EACCDC36B4D199 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, int32_t ___bufferLength2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.WebSocketFrame::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketFrame_GetEnumerator_m049510243E97F571569C688F3E5431AF91E1644C (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !1 System.Func`2<System.Int32,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7 (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * __this, int32_t ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_gshared)(__this, ___arg0, method);
}
// T[] WebSocketSharp.Ext::SubArray<System.Byte>(T[],System.Int32,System.Int32)
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF08EE78AAD28B15DAA368D0728D7DE661C3D922A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF08EE78AAD28B15DAA368D0728D7DE661C3D922A_gshared)(___array0, ___startIndex1, ___length2, method);
}
// System.Void System.Action`1<System.Byte[]>::Invoke(!0)
inline void Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30 (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Exception>::Invoke(!0)
inline void Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * __this, Exception_t * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *, Exception_t *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClassd/<>c__DisplayClassf::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassf__ctor_mCD3709455395011689D7E503503C37248EBEBD09 (U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__11__ctor_mD5CE3D6B9FF1B35CEA2A78DC05E38D91D22A820C (U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Ext/<SplitHeaderValue>d__11::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitHeaderValueU3Ed__11_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m822503B16DACC6D981E7A4B073AA1A35BC9494AC (U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::Contains(System.String,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_Contains_m358CFAC688B1F473F9E42AA4EDEA1F4FF280AB97 (String_t* ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800 (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
inline void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, uint8_t, const RuntimeMethod*))List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared)(__this, ___item0, method);
}
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__0::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally2_mF31CD14FDD63FF1314DB31A70EA9683F3307433E (U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_System_IDisposable_Dispose_m02E337ED687FAF39E7AAE3993E4FCAC9B888989C (U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// !2 System.Func`3<WebSocketSharp.Opcode,System.IO.Stream,System.Boolean>::EndInvoke(System.IAsyncResult)
inline bool Func_3_EndInvoke_m5F9899907DB91084A4AE5D117DAE9A7EBBAD9003 (Func_3_t22C0949025AC6DA80FDDEC56C8D1CA36E2454873 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t22C0949025AC6DA80FDDEC56C8D1CA36E2454873 *, RuntimeObject*, const RuntimeMethod*))Func_3_EndInvoke_m3A33221A90EE35F9A853DE106A5CB9C0C57A17F9_gshared)(__this, ___result0, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void WebSocketSharp.Logger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Error_mB72635E604F44BFD961CCCEB0E064CC27C0FFF51 (Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket::error(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_error_m9DADFC97445F1A25152B3B5C407E96FF5E5036CF (WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * __this, String_t* ___message0, Exception_t * ___exception1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6 (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocketFrame::ReadFrameAsync(System.IO.Stream,System.Boolean,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_ReadFrameAsync_mFF8F2F003A0CE7477DBFA6A573668AA9F7453CE2 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, bool ___unmask1, Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocket::processReceivedFrame(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_processReceivedFrame_mF5E35B4F1A605DB732585D3492D9C79F8AB78A7E (WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * __this, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocket::get_HasMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_HasMessage_m663EE6272FAB7660881E843F51A6BF5495869725 (WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket::message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_message_mC522DC56B2D82E19AA20035765B51FFB2A3299CA (WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Logger::Fatal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Fatal_m9DC09547C19F1D1E3C6F91CFECE4641C0FE8F3A0 (Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket::fatal(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_fatal_m53A69400F5422D9982C0A1E81E27534E22E9278F (WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * __this, String_t* ___message0, Exception_t * ___exception1, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::EndInvoke(System.IAsyncResult)
inline bool Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject*, const RuntimeMethod*))Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6_gshared)(__this, ___result0, method);
}
// System.Void WebSocketSharp.WebSocket::open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_open_m48DC527818F3266C07F9ADD86C827FBBDFED81E4 (WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * __this, const RuntimeMethod* method);
// System.Void System.Action`4<WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
inline void Action_4_EndInvoke_m7BEF2C1A8C243E7A11ABFEA150A715DB4344018D (Action_4_t1D5E542190ACAADFE8E719B5E016BCBC605FA441 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t1D5E542190ACAADFE8E719B5E016BCBC605FA441 *, RuntimeObject*, const RuntimeMethod*))Action_4_EndInvoke_mE7B30E56F29241909BC48AC7EA33046B2864A5DF_gshared)(__this, ___result0, method);
}
// System.Int64 System.Array::get_LongLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Array_get_LongLength_m6858BC1C3D3B4FD5DEBFB3C9A426D89911FF3276 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_m042BC4C2D0673351793C139ACBBE1691FF869CED (PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int64_t ___length1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::readExtendedPayloadLengthAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readExtendedPayloadLengthAsync_m6FFABF85D3C2EC292ADB9069A33EC6C6D0E1B6DE (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame1, Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::readMaskingKeyAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readMaskingKeyAsync_m31947BEE09683CE8EACEFAE4980A831EEC7985C6 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame1, Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::readPayloadDataAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readPayloadDataAsync_m7805598A20E181352E18B2DEB7725C215D38EB3A (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame1, Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::Unmask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_Unmask_mABD2BB74713ACCCF6350940820EECC4447122845 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass2/<>c__DisplayClass4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4__ctor_m082362E64F72DB2F6B9E0E7B5667D75498A3311B (U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A * __this, const RuntimeMethod* method);
// System.Void System.Action`4<System.String,System.String,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_4__ctor_m13BE596D4BB6EE74E7BABCD899B54676A90C51E5_gshared)(__this, ___object0, ___method1, method);
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::processHeader(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * WebSocketFrame_processHeader_mB08E4A854AA2128113647342BDA88A49CC22BAA5 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___header0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::<>m__Finally1a()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1a_mEA62B5E0C084D51DE6C13A4F70A91DF20E334CB6 (U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_m4E0761040C1207F04F0718DDD249406D68590FEA (U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::Invoke(!0)
inline void Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39 (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * __this, int64_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 *, int64_t, const RuntimeMethod*))Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_gshared)(__this, ___obj0, method);
}
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
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
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mEA2E7BE4C0AA9379C66E969CF9787BCD99DB61FA (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		WebSocketException__ctor_mBAB01B135887BE014FC36B0812F00994DB850D6C(__this, ((int32_t)1006), L_0, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mF04C4778F6FB18D3EC318A0E77A84E45A11E542C (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * __this, uint16_t ___code0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___code0;
		WebSocketException__ctor_mBAB01B135887BE014FC36B0812F00994DB850D6C(__this, L_0, (String_t*)NULL, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m3FDCC0D36B9C8F07D03D5A473C19033292245771 (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		WebSocketException__ctor_mBAB01B135887BE014FC36B0812F00994DB850D6C(__this, ((int32_t)1006), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m8ED3F3F82C217AF00166D748C2EE7DF3C7192180 (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * __this, uint16_t ___code0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___code0;
		Exception_t * L_1 = ___innerException1;
		WebSocketException__ctor_mBAB01B135887BE014FC36B0812F00994DB850D6C(__this, L_0, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m612526244145077105FCCE745A3D04DD00CD94ED (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * __this, uint16_t ___code0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___code0;
		String_t* L_1 = ___message1;
		WebSocketException__ctor_mBAB01B135887BE014FC36B0812F00994DB850D6C(__this, L_0, L_1, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mBAB01B135887BE014FC36B0812F00994DB850D6C (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * __this, uint16_t ___code0, String_t* ___message1, Exception_t * ___innerException2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * G_B1_1 = NULL;
	{
		String_t* L_0 = ___message1;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000c;
		}
	}
	{
		uint16_t L_2 = ___code0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Ext_GetMessage_mB14E0F26F168EA2D6079F8A4ACD1699BE4F8A80B(L_2, /*hidden argument*/NULL);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_000c:
	{
		Exception_t * L_4 = ___innerException2;
		NullCheck(G_B2_1);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(G_B2_1, G_B2_0, L_4, /*hidden argument*/NULL);
		uint16_t L_5 = ___code0;
		__this->set__code_17(L_5);
		return;
	}
}
// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t WebSocketException_get_Code_m17E827268BDE27817859F2EEF136B05040BEC447 (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get__code_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
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
// System.Void WebSocketSharp.WebSocketFrame::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__cctor_m6FB7F117EB3B05FF50C4E6C7CBAB3F94545F1F5A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_0;
		L_0 = WebSocketFrame_CreatePingFrame_mC39FC347E824DFABFBC257562640968B024AD0F6((bool)0, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = WebSocketFrame_ToArray_m4ECE2BBB7FB2494EAD5289EF838B6303DA5272CA(L_0, /*hidden argument*/NULL);
		((WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var))->set_EmptyPingBytes_10(L_1);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_mB54FA2A50482BC1D88FECF241B0FB1D9BF4752FB (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_m0558CC590A6859C849C25206719515C040D29F35 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, uint8_t ___opcode0, PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * ___payloadData1, bool ___mask2, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___opcode0;
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_1 = ___payloadData1;
		bool L_2 = ___mask2;
		WebSocketFrame__ctor_m89CD647B170C333A25411D42B8716A684305831E(__this, 1, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,System.Byte[],System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_m03CCB0EC75CA9958380CEB0708D6F8DABD03B611 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, uint8_t ___fin0, uint8_t ___opcode1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data2, bool ___compressed3, bool ___mask4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___fin0;
		uint8_t L_1 = ___opcode1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data2;
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_3 = (PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 *)il2cpp_codegen_object_new(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var);
		PayloadData__ctor_m30A84F488884102D19EDB2BCCB3205CC2FD46F8E(L_3, L_2, /*hidden argument*/NULL);
		bool L_4 = ___compressed3;
		bool L_5 = ___mask4;
		WebSocketFrame__ctor_m89CD647B170C333A25411D42B8716A684305831E(__this, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_m89CD647B170C333A25411D42B8716A684305831E (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, uint8_t ___fin0, uint8_t ___opcode1, PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * ___payloadData2, bool ___compressed3, bool ___mask4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	bool V_1 = false;
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * G_B2_0 = NULL;
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * G_B1_0 = NULL;
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * G_B4_1 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		uint8_t L_0 = ___fin0;
		__this->set__fin_1(L_0);
		uint8_t L_1 = ___opcode1;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Ext_IsData_m93BE51149CF0891E660D2F0E6E4DF315CF3A51F2(L_1, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_001c;
		}
	}
	{
		bool L_3 = ___compressed3;
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_001f;
		}
	}

IL_001c:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0020:
	{
		NullCheck(G_B4_1);
		G_B4_1->set__rsv1_7(G_B4_0);
		__this->set__rsv2_8(0);
		__this->set__rsv3_9(0);
		uint8_t L_4 = ___opcode1;
		__this->set__opcode_4(L_4);
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_5 = ___payloadData2;
		NullCheck(L_5);
		uint64_t L_6;
		L_6 = PayloadData_get_Length_m5D7A339972600EBD98D6C79B94D9EB3C8B84A703(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		uint64_t L_7 = V_0;
		V_1 = (bool)((((int32_t)((!(((uint64_t)L_7) >= ((uint64_t)((int64_t)((int64_t)((int32_t)126))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0066;
		}
	}
	{
		uint64_t L_9 = V_0;
		__this->set__payloadLength_6((uint8_t)((int32_t)((uint8_t)L_9)));
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ((WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var))->get_EmptyBytes_40();
		__this->set__extPayloadLength_0(L_10);
		goto IL_00a7;
	}

IL_0066:
	{
		uint64_t L_11 = V_0;
		V_1 = (bool)((((int32_t)((!(((uint64_t)L_11) >= ((uint64_t)((int64_t)((int64_t)((int32_t)65536))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_0090;
		}
	}
	{
		__this->set__payloadLength_6((uint8_t)((int32_t)126));
		uint64_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = Ext_InternalToByteArray_m33CF1973316A6A8B709602910B7B0F2F7F1D4F82((uint16_t)((int32_t)((uint16_t)L_13)), 1, /*hidden argument*/NULL);
		__this->set__extPayloadLength_0(L_14);
		goto IL_00a7;
	}

IL_0090:
	{
		__this->set__payloadLength_6((uint8_t)((int32_t)127));
		uint64_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = Ext_InternalToByteArray_mB2C6EE3E4CE15DA07419E09C241008586C4AC8FD(L_15, 1, /*hidden argument*/NULL);
		__this->set__extPayloadLength_0(L_16);
	}

IL_00a7:
	{
		bool L_17 = ___mask4;
		V_1 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_1;
		if (L_18)
		{
			goto IL_00d3;
		}
	}
	{
		__this->set__mask_2(1);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19;
		L_19 = WebSocketFrame_createMaskingKey_mECFDDB65DFC301DA5FB3FB560291927CF8C3A851(/*hidden argument*/NULL);
		__this->set__maskingKey_3(L_19);
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_20 = ___payloadData2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get__maskingKey_3();
		NullCheck(L_20);
		PayloadData_Mask_m9D0C9B62DA60A919DD39A977C01C578FD7D0BEC5(L_20, L_21, /*hidden argument*/NULL);
		goto IL_00e7;
	}

IL_00d3:
	{
		__this->set__mask_2(0);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ((WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var))->get_EmptyBytes_40();
		__this->set__maskingKey_3(L_22);
	}

IL_00e7:
	{
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_23 = ___payloadData2;
		__this->set__payloadData_5(L_23);
		return;
	}
}
// System.Int32 WebSocketSharp.WebSocketFrame::get_ExtendedPayloadLengthCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFrame_get_ExtendedPayloadLengthCount_m866C1B7169E76218157093400BE7125CCE5A28B8 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		uint8_t L_0 = __this->get__payloadLength_6();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)126))))
		{
			goto IL_001c;
		}
	}
	{
		uint8_t L_1 = __this->get__payloadLength_6();
		if ((((int32_t)L_1) == ((int32_t)((int32_t)126))))
		{
			goto IL_0018;
		}
	}
	{
		G_B4_0 = 8;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 2;
	}

IL_0019:
	{
		G_B6_0 = G_B4_0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B6_0 = 0;
	}

IL_001d:
	{
		V_0 = G_B6_0;
		goto IL_0021;
	}

IL_0021:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.UInt64 WebSocketSharp.WebSocketFrame::get_FullPayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketFrame_get_FullPayloadLength_m6FBF0F858B9878834CF8F0DC0E89E8E93876CCD8 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t G_B4_0 = 0;
	uint64_t G_B6_0 = 0;
	{
		uint8_t L_0 = __this->get__payloadLength_6();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)126))))
		{
			goto IL_0033;
		}
	}
	{
		uint8_t L_1 = __this->get__payloadLength_6();
		if ((((int32_t)L_1) == ((int32_t)((int32_t)126))))
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get__extPayloadLength_0();
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = Ext_ToUInt64_m99920F5EF8329F7960F05F89CA8000CA169E3D45(L_2, 1, /*hidden argument*/NULL);
		G_B4_0 = L_3;
		goto IL_0030;
	}

IL_0023:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get__extPayloadLength_0();
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		uint16_t L_5;
		L_5 = Ext_ToUInt16_m857E0330F8AE7FE82E1BD7D2ED4E8424E3585ED8(L_4, 1, /*hidden argument*/NULL);
		G_B4_0 = ((uint64_t)(((int64_t)((uint64_t)L_5))));
	}

IL_0030:
	{
		G_B6_0 = G_B4_0;
		goto IL_003a;
	}

IL_0033:
	{
		uint8_t L_6 = __this->get__payloadLength_6();
		G_B6_0 = ((uint64_t)(((int64_t)((uint64_t)L_6))));
	}

IL_003a:
	{
		V_0 = G_B6_0;
		goto IL_003e;
	}

IL_003e:
	{
		uint64_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsClose_m484EF51F80DAA726E70FFB76263154C61DF3B2C0 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsCompressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsCompressed_m8BF8341448BC906BACE3E9E826AA588BA5F467AB (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__rsv1_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsContinuation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsContinuation_m1DBCE2616F5D6D665DB97778ABE94A49A9784418 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsData_m4D9422E1456375454690E2E39E70ABC36F59EF6F (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = __this->get__opcode_4();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		uint8_t L_1 = __this->get__opcode_4();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsFinal_m92343736B88854F48DD1FDC659373CCD6087909A (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__fin_1();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFragment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsFragment_m559F32F878DF4804499302A361195E524AB95713 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = __this->get__fin_1();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint8_t L_1 = __this->get__opcode_4();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsMasked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsMasked_mB06C03FCEC4D29BEF86361F24A03228CFF4E6247 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__mask_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsPing_m979B3D6A74CA50AF85553F96503E14FEFF3D79F1 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)9)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsPong_m9C3FFA1D8BBCCB43DEC30B72D2BB682347553A34 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsText_mBAF9D65652655ADF257262A0DFEE86092B9A83D5 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.UInt64 WebSocketSharp.WebSocketFrame::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketFrame_get_Length_mA7CD12BE0CF7D43975694D3D24FAAE25EB655D56 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__extPayloadLength_0();
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__maskingKey_3();
		NullCheck(L_1);
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_2 = __this->get__payloadData_5();
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = PayloadData_get_Length_m5D7A339972600EBD98D6C79B94D9EB3C8B84A703(L_2, /*hidden argument*/NULL);
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)2)), (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))))), (int64_t)L_3));
		goto IL_0025;
	}

IL_0025:
	{
		uint64_t L_4 = V_0;
		return L_4;
	}
}
// WebSocketSharp.Opcode WebSocketSharp.WebSocketFrame::get_Opcode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WebSocketFrame_get_Opcode_mBA43EB941DD0466876BC80343D2612B3E7E9E878 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// WebSocketSharp.PayloadData WebSocketSharp.WebSocketFrame::get_PayloadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * WebSocketFrame_get_PayloadData_m742516CED8F80DF9861A61811FEB020DCDA71A96 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * V_0 = NULL;
	{
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_0 = __this->get__payloadData_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_1 = V_0;
		return L_1;
	}
}
// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::get_Rsv2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WebSocketFrame_get_Rsv2_m4CE5EB4B2D044CF9A7F19F01279AD71E6C6C80B3 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		uint8_t L_0 = __this->get__rsv2_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::get_Rsv3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WebSocketFrame_get_Rsv3_mF67C07ABA290526472C58D489ACCD66841A0D98A (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		uint8_t L_0 = __this->get__rsv3_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] WebSocketSharp.WebSocketFrame::createMaskingKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocketFrame_createMaskingKey_mECFDDB65DFC301DA5FB3FB560291927CF8C3A851 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var);
		RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * L_1 = ((WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var))->get_RandomNumber_42();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_1, L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_1;
		return L_4;
	}
}
// System.String WebSocketSharp.WebSocketFrame::dump(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD4E991296E96614D54847DA8E9C7F7C1C4525E6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mFA7CE0231236E9D2D93B07782B199357061CE3FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_U3CdumpU3Eb__0_mC21527F7F7B555C61307DE02785D365CE583AC56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20EE8CAA934A2767F12EC9152C5C08F7305A69EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EA52E9C94B4B03D5535BC2F0558A4341C7C3AAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62F57AD061852AB53745F2E49C914CC9E4340133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63488589AE4F4AB55FD0EB2F6715E45C4001A9E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C693C3184E95017FD139BC3E466ACD5B78665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA545047F18B3FC58954677EB7F12A1370C59CE77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A0DD08EB1B611313645CAC79DE1BA8FDDCDA7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF31A798F77EB74F37FE8821EE17F12CDF6905B4);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED * V_8 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * V_9 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_10 = NULL;
	int64_t V_11 = 0;
	int64_t V_12 = 0;
	U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * V_13 = NULL;
	String_t* V_14 = NULL;
	bool V_15 = false;
	String_t* G_B13_0 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B13_1 = NULL;
	String_t* G_B12_0 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B12_1 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B14_2 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B16_2 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B15_2 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B17_3 = NULL;
	{
		U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * L_0 = (U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2__ctor_mECF5F4200DD313356F1BC6E94307369B98BC1AF1(L_0, /*hidden argument*/NULL);
		V_13 = L_0;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_1 = ___frame0;
		NullCheck(L_1);
		uint64_t L_2;
		L_2 = WebSocketFrame_get_Length_mA7CD12BE0CF7D43975694D3D24FAAE25EB655D56(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint64_t L_3 = V_0;
		V_1 = ((int64_t)((uint64_t)(int64_t)L_3/(uint64_t)(int64_t)((int64_t)((int64_t)4))));
		uint64_t L_4 = V_0;
		V_2 = ((int32_t)((int32_t)((int64_t)((uint64_t)(int64_t)L_4%(uint64_t)(int64_t)((int64_t)((int64_t)4))))));
		int64_t L_5 = V_1;
		V_15 = (bool)((((int32_t)((((int64_t)L_5) < ((int64_t)((int64_t)((int64_t)((int32_t)10000)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_15;
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		V_3 = 4;
		V_4 = _stringLiteral20EE8CAA934A2767F12EC9152C5C08F7305A69EC;
		goto IL_0086;
	}

IL_0039:
	{
		int64_t L_7 = V_1;
		V_15 = (bool)((((int32_t)((((int64_t)L_7) < ((int64_t)((int64_t)((int64_t)((int32_t)65536)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_15;
		if (L_8)
		{
			goto IL_0058;
		}
	}
	{
		V_3 = 4;
		V_4 = _stringLiteralA545047F18B3FC58954677EB7F12A1370C59CE77;
		goto IL_0086;
	}

IL_0058:
	{
		int64_t L_9 = V_1;
		V_15 = (bool)((((int32_t)((((int64_t)L_9) < ((int64_t)((int64_t)4294967296LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_15;
		if (L_10)
		{
			goto IL_007a;
		}
	}
	{
		V_3 = 8;
		V_4 = _stringLiteralD8A0DD08EB1B611313645CAC79DE1BA8FDDCDA7D;
		goto IL_0086;
	}

IL_007a:
	{
		V_3 = ((int32_t)16);
		V_4 = _stringLiteralFF31A798F77EB74F37FE8821EE17F12CDF6905B4;
	}

IL_0086:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3EA52E9C94B4B03D5535BC2F0558A4341C7C3AAD, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		String_t* L_15 = V_5;
		String_t* L_16;
		L_16 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralA15C693C3184E95017FD139BC3E466ACD5B78665, L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * L_17 = V_13;
		String_t* L_18 = V_4;
		String_t* L_19;
		L_19 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral63488589AE4F4AB55FD0EB2F6715E45C4001A9E4, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_lineFmt_0(L_19);
		String_t* L_20 = V_5;
		String_t* L_21;
		L_21 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral62F57AD061852AB53745F2E49C914CC9E4340133, L_20, /*hidden argument*/NULL);
		V_7 = L_21;
		U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * L_22 = V_13;
		StringBuilder_t * L_23 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_23, ((int32_t)64), /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_output_1(L_23);
		U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * L_24 = V_13;
		Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED * L_25 = (Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED *)il2cpp_codegen_object_new(Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED_il2cpp_TypeInfo_var);
		Func_1__ctor_mFA7CE0231236E9D2D93B07782B199357061CE3FA(L_25, L_24, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_U3CdumpU3Eb__0_mC21527F7F7B555C61307DE02785D365CE583AC56_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mFA7CE0231236E9D2D93B07782B199357061CE3FA_RuntimeMethod_var);
		V_8 = L_25;
		Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED * L_26 = V_8;
		NullCheck(L_26);
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_27;
		L_27 = Func_1_Invoke_mD4E991296E96614D54847DA8E9C7F7C1C4525E6A(L_26, /*hidden argument*/Func_1_Invoke_mD4E991296E96614D54847DA8E9C7F7C1C4525E6A_RuntimeMethod_var);
		V_9 = L_27;
		U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * L_28 = V_13;
		NullCheck(L_28);
		StringBuilder_t * L_29 = L_28->get_output_1();
		String_t* L_30 = V_6;
		String_t* L_31 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_29);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_29, L_30, L_31, /*hidden argument*/NULL);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_33 = ___frame0;
		NullCheck(L_33);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34;
		L_34 = WebSocketFrame_ToArray_m4ECE2BBB7FB2494EAD5289EF838B6303DA5272CA(L_33, /*hidden argument*/NULL);
		V_10 = L_34;
		V_11 = ((int64_t)((int64_t)0));
		goto IL_0208;
	}

IL_0112:
	{
		int64_t L_35 = V_11;
		V_12 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_35, (int64_t)((int64_t)((int64_t)4))));
		int64_t L_36 = V_11;
		int64_t L_37 = V_1;
		V_15 = (bool)((((int32_t)((((int64_t)L_36) < ((int64_t)L_37))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_15;
		if (L_38)
		{
			goto IL_018c;
		}
	}
	{
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_39 = V_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = V_10;
		int64_t L_41 = V_12;
		if ((int64_t)(L_41) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA_RuntimeMethod_var);
		NullCheck(L_40);
		intptr_t L_42 = ((intptr_t)L_41);
		uint8_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_44;
		L_44 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_43, 2, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_44, 8, ((int32_t)48), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = V_10;
		int64_t L_47 = V_12;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_47, (int64_t)((int64_t)((int64_t)1))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA_RuntimeMethod_var);
		NullCheck(L_46);
		intptr_t L_48 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_47, (int64_t)((int64_t)((int64_t)1)))));
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		String_t* L_50;
		L_50 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_49, 2, /*hidden argument*/NULL);
		NullCheck(L_50);
		String_t* L_51;
		L_51 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_50, 8, ((int32_t)48), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = V_10;
		int64_t L_53 = V_12;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_53, (int64_t)((int64_t)((int64_t)2))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA_RuntimeMethod_var);
		NullCheck(L_52);
		intptr_t L_54 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_53, (int64_t)((int64_t)((int64_t)2)))));
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		String_t* L_56;
		L_56 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_55, 2, /*hidden argument*/NULL);
		NullCheck(L_56);
		String_t* L_57;
		L_57 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_56, 8, ((int32_t)48), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = V_10;
		int64_t L_59 = V_12;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_59, (int64_t)((int64_t)((int64_t)3))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA_RuntimeMethod_var);
		NullCheck(L_58);
		intptr_t L_60 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_59, (int64_t)((int64_t)((int64_t)3)))));
		uint8_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		String_t* L_62;
		L_62 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_61, 2, /*hidden argument*/NULL);
		NullCheck(L_62);
		String_t* L_63;
		L_63 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_62, 8, ((int32_t)48), /*hidden argument*/NULL);
		NullCheck(L_39);
		Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B(L_39, L_45, L_51, L_57, L_63, /*hidden argument*/Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B_RuntimeMethod_var);
		goto IL_0201;
	}

IL_018c:
	{
		int32_t L_64 = V_2;
		V_15 = (bool)((((int32_t)((((int32_t)L_64) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_65 = V_15;
		if (L_65)
		{
			goto IL_0200;
		}
	}
	{
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_66 = V_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_67 = V_10;
		int64_t L_68 = V_12;
		if ((int64_t)(L_68) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA_RuntimeMethod_var);
		NullCheck(L_67);
		intptr_t L_69 = ((intptr_t)L_68);
		uint8_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_71;
		L_71 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_70, 2, /*hidden argument*/NULL);
		NullCheck(L_71);
		String_t* L_72;
		L_72 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_71, 8, ((int32_t)48), /*hidden argument*/NULL);
		int32_t L_73 = V_2;
		G_B12_0 = L_72;
		G_B12_1 = L_66;
		if ((((int32_t)L_73) >= ((int32_t)2)))
		{
			G_B13_0 = L_72;
			G_B13_1 = L_66;
			goto IL_01ba;
		}
	}
	{
		String_t* L_74 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B14_0 = L_74;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_01d1;
	}

IL_01ba:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_75 = V_10;
		int64_t L_76 = V_12;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_76, (int64_t)((int64_t)((int64_t)1))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA_RuntimeMethod_var);
		NullCheck(L_75);
		intptr_t L_77 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_76, (int64_t)((int64_t)((int64_t)1)))));
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_79;
		L_79 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_78, 2, /*hidden argument*/NULL);
		NullCheck(L_79);
		String_t* L_80;
		L_80 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_79, 8, ((int32_t)48), /*hidden argument*/NULL);
		G_B14_0 = L_80;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_01d1:
	{
		int32_t L_81 = V_2;
		G_B15_0 = G_B14_0;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		if ((((int32_t)L_81) == ((int32_t)3)))
		{
			G_B16_0 = G_B14_0;
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			goto IL_01dd;
		}
	}
	{
		String_t* L_82 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B17_0 = L_82;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		goto IL_01f4;
	}

IL_01dd:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83 = V_10;
		int64_t L_84 = V_12;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)((int64_t)((int64_t)2))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA_RuntimeMethod_var);
		NullCheck(L_83);
		intptr_t L_85 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)((int64_t)((int64_t)2)))));
		uint8_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_87;
		L_87 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_86, 2, /*hidden argument*/NULL);
		NullCheck(L_87);
		String_t* L_88;
		L_88 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_87, 8, ((int32_t)48), /*hidden argument*/NULL);
		G_B17_0 = L_88;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
	}

IL_01f4:
	{
		String_t* L_89 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(G_B17_3);
		Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B(G_B17_3, G_B17_2, G_B17_1, G_B17_0, L_89, /*hidden argument*/Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B_RuntimeMethod_var);
	}

IL_0200:
	{
	}

IL_0201:
	{
		int64_t L_90 = V_11;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_90, (int64_t)((int64_t)((int64_t)1))));
	}

IL_0208:
	{
		int64_t L_91 = V_11;
		int64_t L_92 = V_1;
		V_15 = (bool)((((int32_t)((((int64_t)L_91) > ((int64_t)L_92))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_93 = V_15;
		if (L_93)
		{
			goto IL_0112;
		}
	}
	{
		U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * L_94 = V_13;
		NullCheck(L_94);
		StringBuilder_t * L_95 = L_94->get_output_1();
		String_t* L_96 = V_7;
		String_t* L_97 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_95);
		StringBuilder_t * L_98;
		L_98 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_95, L_96, L_97, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * L_99 = V_13;
		NullCheck(L_99);
		StringBuilder_t * L_100 = L_99->get_output_1();
		NullCheck(L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_100);
		V_14 = L_101;
		goto IL_023d;
	}

IL_023d:
	{
		String_t* L_102 = V_14;
		return L_102;
	}
}
// System.String WebSocketSharp.WebSocketFrame::print(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_print_m8176DA6A9DFCFA59CFA84FE47239672453ABA9F1 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fin_t43C4CB840631B2D987228800481F7E20F8070632_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mask_t2A377C4316C0E21185DE5BD53CA6235C02C5EB87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Opcode_t631B280506A965B3FB98FDDA2FEBDAB4E250E59A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rsv_t5F407D9A45D461192284639E76EB6C2AE4A3439C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC581DEB1B468818DF317A8FD12CF12C6032C6A1F);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	uint64_t V_6 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_7 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B15_0 = NULL;
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_0 = ___frame0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get__payloadLength_6();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)125))))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_3;
		goto IL_0023;
	}

IL_0014:
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_4 = ___frame0;
		NullCheck(L_4);
		uint64_t L_5;
		L_5 = WebSocketFrame_get_FullPayloadLength_m6FBF0F858B9878834CF8F0DC0E89E8E93876CCD8(L_4, /*hidden argument*/NULL);
		V_6 = L_5;
		String_t* L_6;
		L_6 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&V_6), /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_7 = ___frame0;
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = L_7->get__maskingKey_3();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		uint8_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0081;
		}
	}
	{
		uint8_t L_11 = V_0;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)125))))
		{
			goto IL_0079;
		}
	}
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_12 = ___frame0;
		NullCheck(L_12);
		bool L_13;
		L_13 = WebSocketFrame_get_IsText_mBAF9D65652655ADF257262A0DFEE86092B9A83D5(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_14 = ___frame0;
		NullCheck(L_14);
		bool L_15;
		L_15 = WebSocketFrame_get_IsFragment_m559F32F878DF4804499302A361195E524AB95713(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0059;
		}
	}
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_16 = ___frame0;
		NullCheck(L_16);
		bool L_17;
		L_17 = WebSocketFrame_get_IsMasked_mB06C03FCEC4D29BEF86361F24A03228CFF4E6247(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0059;
		}
	}
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_18 = ___frame0;
		NullCheck(L_18);
		bool L_19;
		L_19 = WebSocketFrame_get_IsCompressed_m8BF8341448BC906BACE3E9E826AA588BA5F467AB(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0066;
		}
	}

IL_0059:
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_20 = ___frame0;
		NullCheck(L_20);
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_21 = L_20->get__payloadData_5();
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		G_B11_0 = L_22;
		goto IL_0076;
	}

IL_0066:
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_23 = ___frame0;
		NullCheck(L_23);
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_24 = L_23->get__payloadData_5();
		NullCheck(L_24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25;
		L_25 = PayloadData_get_ApplicationData_m3ED474C2EDD4471368FF7ECA4730BA5A7F5F4A0F(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = Ext_UTF8Decode_m34E03A8B1859F115E318C0B8B63E9FD50D0DB72A(L_25, /*hidden argument*/NULL);
		G_B11_0 = L_26;
	}

IL_0076:
	{
		G_B13_0 = G_B11_0;
		goto IL_007e;
	}

IL_0079:
	{
		G_B13_0 = _stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544;
	}

IL_007e:
	{
		G_B15_0 = G_B13_0;
		goto IL_0086;
	}

IL_0081:
	{
		String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B15_0 = L_27;
	}

IL_0086:
	{
		V_3 = G_B15_0;
		V_4 = _stringLiteralC581DEB1B468818DF317A8FD12CF12C6032C6A1F;
		String_t* L_28 = V_4;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		V_7 = L_29;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = V_7;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_31 = ___frame0;
		NullCheck(L_31);
		uint8_t L_32 = L_31->get__fin_1();
		uint8_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Fin_t43C4CB840631B2D987228800481F7E20F8070632_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_34);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = V_7;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_36 = ___frame0;
		NullCheck(L_36);
		uint8_t L_37 = L_36->get__rsv1_7();
		uint8_t L_38 = L_37;
		RuntimeObject * L_39 = Box(Rsv_t5F407D9A45D461192284639E76EB6C2AE4A3439C_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_39);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = V_7;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_41 = ___frame0;
		NullCheck(L_41);
		uint8_t L_42 = L_41->get__rsv2_8();
		uint8_t L_43 = L_42;
		RuntimeObject * L_44 = Box(Rsv_t5F407D9A45D461192284639E76EB6C2AE4A3439C_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_44);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_44);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_45 = V_7;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_46 = ___frame0;
		NullCheck(L_46);
		uint8_t L_47 = L_46->get__rsv3_9();
		uint8_t L_48 = L_47;
		RuntimeObject * L_49 = Box(Rsv_t5F407D9A45D461192284639E76EB6C2AE4A3439C_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_49);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_49);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_50 = V_7;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_51 = ___frame0;
		NullCheck(L_51);
		uint8_t L_52 = L_51->get__opcode_4();
		uint8_t L_53 = L_52;
		RuntimeObject * L_54 = Box(Opcode_t631B280506A965B3FB98FDDA2FEBDAB4E250E59A_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_54);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_54);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_55 = V_7;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_56 = ___frame0;
		NullCheck(L_56);
		uint8_t L_57 = L_56->get__mask_2();
		uint8_t L_58 = L_57;
		RuntimeObject * L_59 = Box(Mask_t2A377C4316C0E21185DE5BD53CA6235C02C5EB87_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_59);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_59);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = V_7;
		uint8_t L_61 = V_0;
		uint8_t L_62 = L_61;
		RuntimeObject * L_63 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_63);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_63);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_64 = V_7;
		String_t* L_65 = V_1;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_65);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_66 = V_7;
		String_t* L_67 = V_2;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_67);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_68 = V_7;
		String_t* L_69 = V_3;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_69);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_70 = V_7;
		String_t* L_71;
		L_71 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(L_28, L_70, /*hidden argument*/NULL);
		V_5 = L_71;
		goto IL_0119;
	}

IL_0119:
	{
		String_t* L_72 = V_5;
		return L_72;
	}
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::processHeader(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * WebSocketFrame_processHeader_mB08E4A854AA2128113647342BDA88A49CC22BAA5 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___header0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32AEDBA5ABFB4295F10BE09DF88D586017ECF587);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral834606D724EFC1323366C1AF3A0A89F88DDC2719);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB3DAB5A0D06D5129783FDA885A5E18016C1C1F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA0FE5EFE11CE511380CD18905A6354DA75C508);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	uint8_t V_1 = 0;
	uint8_t V_2 = 0;
	uint8_t V_3 = 0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0;
	uint8_t V_6 = 0x0;
	String_t* V_7 = NULL;
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * V_8 = NULL;
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * V_9 = NULL;
	bool V_10 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B17_0 = 0;
	String_t* G_B26_0 = NULL;
	String_t* G_B28_0 = NULL;
	String_t* G_B30_0 = NULL;
	String_t* G_B32_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___header0;
		NullCheck(L_0);
		V_10 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_10;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * L_2 = (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_mEA2E7BE4C0AA9379C66E969CF9787BCD99DB61FA(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C7879F4D6EBE4C971F9DA574586D2AC5910DCEE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketFrame_processHeader_mB08E4A854AA2128113647342BDA88A49CC22BAA5_RuntimeMethod_var)));
	}

IL_0018:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___header0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_002b;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B5_0 = 1;
	}

IL_002c:
	{
		V_0 = G_B5_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___header0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)64)))) == ((int32_t)((int32_t)64))))
		{
			goto IL_003b;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_003c;
	}

IL_003b:
	{
		G_B8_0 = 1;
	}

IL_003c:
	{
		V_1 = G_B8_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___header0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)32)))) == ((int32_t)((int32_t)32))))
		{
			goto IL_004b;
		}
	}
	{
		G_B11_0 = 0;
		goto IL_004c;
	}

IL_004b:
	{
		G_B11_0 = 1;
	}

IL_004c:
	{
		V_2 = G_B11_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___header0;
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)16)))) == ((int32_t)((int32_t)16))))
		{
			goto IL_005b;
		}
	}
	{
		G_B14_0 = 0;
		goto IL_005c;
	}

IL_005b:
	{
		G_B14_0 = 1;
	}

IL_005c:
	{
		V_3 = G_B14_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___header0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)15)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___header0;
		NullCheck(L_18);
		int32_t L_19 = 1;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_007a;
		}
	}
	{
		G_B17_0 = 0;
		goto IL_007b;
	}

IL_007a:
	{
		G_B17_0 = 1;
	}

IL_007b:
	{
		V_5 = G_B17_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ___header0;
		NullCheck(L_21);
		int32_t L_22 = 1;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_6 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_23&(int32_t)((int32_t)127)))));
		uint8_t L_24 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Ext_IsSupported_mF04A36411AFBF8CCE96A2A1317789930870B0452(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00d3;
		}
	}
	{
		uint8_t L_26 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Ext_IsData_m45595C47FF59E159B9E0BAA7D556167AEFB7BC71(L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_009d;
		}
	}
	{
		uint8_t L_28 = V_1;
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00cb;
		}
	}

IL_009d:
	{
		uint8_t L_29 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Ext_IsControl_m0E57CDD45F6AD3F2711962A0A8CCB31935B35F6B(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00a9;
		}
	}
	{
		uint8_t L_31 = V_0;
		if (!L_31)
		{
			goto IL_00c3;
		}
	}

IL_00a9:
	{
		uint8_t L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Ext_IsControl_m0E57CDD45F6AD3F2711962A0A8CCB31935B35F6B(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00b8;
		}
	}
	{
		uint8_t L_34 = V_6;
		if ((((int32_t)L_34) > ((int32_t)((int32_t)125))))
		{
			goto IL_00bb;
		}
	}

IL_00b8:
	{
		G_B26_0 = ((String_t*)(NULL));
		goto IL_00c0;
	}

IL_00bb:
	{
		G_B26_0 = _stringLiteralFCA0FE5EFE11CE511380CD18905A6354DA75C508;
	}

IL_00c0:
	{
		G_B28_0 = G_B26_0;
		goto IL_00c8;
	}

IL_00c3:
	{
		G_B28_0 = _stringLiteralDB3DAB5A0D06D5129783FDA885A5E18016C1C1F1;
	}

IL_00c8:
	{
		G_B30_0 = G_B28_0;
		goto IL_00d0;
	}

IL_00cb:
	{
		G_B30_0 = _stringLiteral834606D724EFC1323366C1AF3A0A89F88DDC2719;
	}

IL_00d0:
	{
		G_B32_0 = G_B30_0;
		goto IL_00d8;
	}

IL_00d3:
	{
		G_B32_0 = _stringLiteral32AEDBA5ABFB4295F10BE09DF88D586017ECF587;
	}

IL_00d8:
	{
		V_7 = G_B32_0;
		String_t* L_35 = V_7;
		V_10 = (bool)((((RuntimeObject*)(String_t*)L_35) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_36 = V_10;
		if (L_36)
		{
			goto IL_00f3;
		}
	}
	{
		String_t* L_37 = V_7;
		WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * L_38 = (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m612526244145077105FCCE745A3D04DD00CD94ED(L_38, ((int32_t)1002), L_37, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketFrame_processHeader_mB08E4A854AA2128113647342BDA88A49CC22BAA5_RuntimeMethod_var)));
	}

IL_00f3:
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_39 = (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B *)il2cpp_codegen_object_new(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		WebSocketFrame__ctor_mB54FA2A50482BC1D88FECF241B0FB1D9BF4752FB(L_39, /*hidden argument*/NULL);
		V_8 = L_39;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_40 = V_8;
		uint8_t L_41 = V_0;
		NullCheck(L_40);
		L_40->set__fin_1(L_41);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_42 = V_8;
		uint8_t L_43 = V_1;
		NullCheck(L_42);
		L_42->set__rsv1_7(L_43);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_44 = V_8;
		uint8_t L_45 = V_2;
		NullCheck(L_44);
		L_44->set__rsv2_8(L_45);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_46 = V_8;
		uint8_t L_47 = V_3;
		NullCheck(L_46);
		L_46->set__rsv3_9(L_47);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_48 = V_8;
		uint8_t L_49 = V_4;
		NullCheck(L_48);
		L_48->set__opcode_4(L_49);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_50 = V_8;
		uint8_t L_51 = V_5;
		NullCheck(L_50);
		L_50->set__mask_2(L_51);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_52 = V_8;
		uint8_t L_53 = V_6;
		NullCheck(L_52);
		L_52->set__payloadLength_6(L_53);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_54 = V_8;
		V_9 = L_54;
		goto IL_013b;
	}

IL_013b:
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_55 = V_9;
		return L_55;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::readExtendedPayloadLengthAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readExtendedPayloadLengthAsync_m6FFABF85D3C2EC292ADB9069A33EC6C6D0E1B6DE (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame1, Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_U3CreadExtendedPayloadLengthAsyncU3Eb__6_mBF0CFCED2F79B910E29B2952F69106A07AA0735B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * L_0 = (U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7__ctor_mF050798B2A4D777FCC72721516A2949433848469(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * L_1 = V_0;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_2 = ___frame1;
		NullCheck(L_1);
		L_1->set_frame_1(L_2);
		U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * L_3 = V_0;
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_4 = ___completed2;
		NullCheck(L_3);
		L_3->set_completed_2(L_4);
		U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * L_5 = V_0;
		U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * L_6 = V_0;
		NullCheck(L_6);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_7 = L_6->get_frame_1();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = WebSocketFrame_get_ExtendedPayloadLengthCount_m866C1B7169E76218157093400BE7125CCE5A28B8(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_len_0(L_8);
		U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_len_0();
		V_1 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * L_12 = V_0;
		NullCheck(L_12);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_13 = L_12->get_frame_1();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ((WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var))->get_EmptyBytes_40();
		NullCheck(L_13);
		L_13->set__extPayloadLength_0(L_14);
		U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * L_15 = V_0;
		NullCheck(L_15);
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_16 = L_15->get_completed_2();
		U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * L_17 = V_0;
		NullCheck(L_17);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_18 = L_17->get_frame_1();
		NullCheck(L_16);
		Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49(L_16, L_18, /*hidden argument*/Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
		goto IL_0076;
	}

IL_005b:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_19 = ___stream0;
		U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_len_0();
		U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * L_22 = V_0;
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_23 = (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)il2cpp_codegen_object_new(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_U3CreadExtendedPayloadLengthAsyncU3Eb__6_mBF0CFCED2F79B910E29B2952F69106A07AA0735B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_24 = ___error3;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		Ext_ReadBytesAsync_m0694288C1A7F67B92B2B018E439FFCC469DCFA5D(L_19, L_21, L_23, L_24, /*hidden argument*/NULL);
	}

IL_0076:
	{
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::readHeaderAsync(System.IO.Stream,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readHeaderAsync_m0EF9532171A71AD88DE9BDAD528CD04D97DF5286 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed1, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClassa_U3CreadHeaderAsyncU3Eb__9_m5DED9E72B93F63021F0B726D603C2169E57D8E64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11 * L_0 = (U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClassa__ctor_m26EFCA04655B0156539F05A0E74A963A98042356(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11 * L_1 = V_0;
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_2 = ___completed1;
		NullCheck(L_1);
		L_1->set_completed_0(L_2);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = ___stream0;
		U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11 * L_4 = V_0;
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_5 = (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)il2cpp_codegen_object_new(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClassa_U3CreadHeaderAsyncU3Eb__9_m5DED9E72B93F63021F0B726D603C2169E57D8E64_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_6 = ___error2;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		Ext_ReadBytesAsync_m0694288C1A7F67B92B2B018E439FFCC469DCFA5D(L_3, 2, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::readMaskingKeyAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readMaskingKeyAsync_m31947BEE09683CE8EACEFAE4980A831EEC7985C6 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame1, Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClassd_U3CreadMaskingKeyAsyncU3Eb__c_mC8F91C41AE4352182C41272D5DD28EE41AD0FBB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * V_0 = NULL;
	bool V_1 = false;
	U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * G_B2_0 = NULL;
	U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * L_0 = (U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClassd__ctor_mA3F1CEA5F881C5B76F2FAF44CC9E62981ED01AAF(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * L_1 = V_0;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_2 = ___frame1;
		NullCheck(L_1);
		L_1->set_frame_1(L_2);
		U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * L_3 = V_0;
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_4 = ___completed2;
		NullCheck(L_3);
		L_3->set_completed_2(L_4);
		U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * L_5 = V_0;
		U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * L_6 = V_0;
		NullCheck(L_6);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_7 = L_6->get_frame_1();
		NullCheck(L_7);
		bool L_8;
		L_8 = WebSocketFrame_get_IsMasked_mB06C03FCEC4D29BEF86361F24A03228CFF4E6247(L_7, /*hidden argument*/NULL);
		G_B1_0 = L_5;
		if (L_8)
		{
			G_B2_0 = L_5;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_0027:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_len_0(G_B3_0);
		U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_len_0();
		V_1 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0062;
		}
	}
	{
		U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * L_12 = V_0;
		NullCheck(L_12);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_13 = L_12->get_frame_1();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ((WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var))->get_EmptyBytes_40();
		NullCheck(L_13);
		L_13->set__maskingKey_3(L_14);
		U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * L_15 = V_0;
		NullCheck(L_15);
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_16 = L_15->get_completed_2();
		U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * L_17 = V_0;
		NullCheck(L_17);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_18 = L_17->get_frame_1();
		NullCheck(L_16);
		Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49(L_16, L_18, /*hidden argument*/Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
		goto IL_007d;
	}

IL_0062:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_19 = ___stream0;
		U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_len_0();
		U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * L_22 = V_0;
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_23 = (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)il2cpp_codegen_object_new(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec__DisplayClassd_U3CreadMaskingKeyAsyncU3Eb__c_mC8F91C41AE4352182C41272D5DD28EE41AD0FBB7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_24 = ___error3;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		Ext_ReadBytesAsync_m0694288C1A7F67B92B2B018E439FFCC469DCFA5D(L_19, L_21, L_23, L_24, /*hidden argument*/NULL);
	}

IL_007d:
	{
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::readPayloadDataAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readPayloadDataAsync_m7805598A20E181352E18B2DEB7725C215D38EB3A (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame1, Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_U3CreadPayloadDataAsyncU3Eb__f_m52C89854896F8523A33D98BE03EC67D9D8462BF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * V_1 = NULL;
	U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * V_2 = NULL;
	bool V_3 = false;
	{
		U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * L_0 = (U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10__ctor_m58AC2C2EDC7FF5CFBA7A464B7D2E39F3574AADB8(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * L_1 = V_2;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_2 = ___frame1;
		NullCheck(L_1);
		L_1->set_frame_1(L_2);
		U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * L_3 = V_2;
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_4 = ___completed2;
		NullCheck(L_3);
		L_3->set_completed_2(L_4);
		U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * L_5 = V_2;
		NullCheck(L_5);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_6 = L_5->get_frame_1();
		NullCheck(L_6);
		uint64_t L_7;
		L_7 = WebSocketFrame_get_FullPayloadLength_m6FBF0F858B9878834CF8F0DC0E89E8E93876CCD8(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		uint64_t L_8 = V_0;
		V_3 = (bool)((((int32_t)((((int64_t)L_8) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0052;
		}
	}
	{
		U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * L_10 = V_2;
		NullCheck(L_10);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_11 = L_10->get_frame_1();
		IL2CPP_RUNTIME_CLASS_INIT(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var);
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_12 = ((PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_StaticFields*)il2cpp_codegen_static_fields_for(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var))->get_Empty_3();
		NullCheck(L_11);
		L_11->set__payloadData_5(L_12);
		U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * L_13 = V_2;
		NullCheck(L_13);
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_14 = L_13->get_completed_2();
		U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * L_15 = V_2;
		NullCheck(L_15);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_16 = L_15->get_frame_1();
		NullCheck(L_14);
		Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49(L_14, L_16, /*hidden argument*/Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
		goto IL_00be;
	}

IL_0052:
	{
		uint64_t L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var);
		uint64_t L_18 = ((PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_StaticFields*)il2cpp_codegen_static_fields_for(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var))->get_MaxLength_4();
		V_3 = (bool)((((int32_t)((!(((uint64_t)L_17) <= ((uint64_t)L_18)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * L_20 = (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m612526244145077105FCCE745A3D04DD00CD94ED(L_20, ((int32_t)1009), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF70977E04C6969298AB79C3A8C5A49A3D04C36CD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketFrame_readPayloadDataAsync_m7805598A20E181352E18B2DEB7725C215D38EB3A_RuntimeMethod_var)));
	}

IL_0071:
	{
		U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * L_21 = V_2;
		uint64_t L_22 = V_0;
		NullCheck(L_21);
		L_21->set_llen_0(L_22);
		U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * L_23 = V_2;
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_24 = (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)il2cpp_codegen_object_new(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243(L_24, L_23, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_U3CreadPayloadDataAsyncU3Eb__f_m52C89854896F8523A33D98BE03EC67D9D8462BF8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		V_1 = L_24;
		U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * L_25 = V_2;
		NullCheck(L_25);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_26 = L_25->get_frame_1();
		NullCheck(L_26);
		uint8_t L_27 = L_26->get__payloadLength_6();
		V_3 = (bool)((((int32_t)((((int32_t)L_27) < ((int32_t)((int32_t)127)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (L_28)
		{
			goto IL_00a9;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_29 = ___stream0;
		uint64_t L_30 = V_0;
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_31 = V_1;
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_32 = ___error3;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		Ext_ReadBytesAsync_m0694288C1A7F67B92B2B018E439FFCC469DCFA5D(L_29, ((int32_t)((int32_t)L_30)), L_31, L_32, /*hidden argument*/NULL);
		goto IL_00be;
	}

IL_00a9:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_33 = ___stream0;
		U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * L_34 = V_2;
		NullCheck(L_34);
		int64_t L_35 = L_34->get_llen_0();
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_36 = V_1;
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_37 = ___error3;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		Ext_ReadBytesAsync_mA0BE181C65482215E5D585763C6EDD52A336806F(L_33, L_35, ((int32_t)1024), L_36, L_37, /*hidden argument*/NULL);
	}

IL_00be:
	{
		return;
	}
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreateCloseFrame(WebSocketSharp.PayloadData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * WebSocketFrame_CreateCloseFrame_mFF759CF82A907F504F95F568E8A4F23DE01BD1FD (PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * ___payloadData0, bool ___mask1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * V_0 = NULL;
	{
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_0 = ___payloadData0;
		bool L_1 = ___mask1;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_2 = (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B *)il2cpp_codegen_object_new(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		WebSocketFrame__ctor_m89CD647B170C333A25411D42B8716A684305831E(L_2, 1, 8, L_0, (bool)0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_3 = V_0;
		return L_3;
	}
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreatePingFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * WebSocketFrame_CreatePingFrame_mC39FC347E824DFABFBC257562640968B024AD0F6 (bool ___mask0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var);
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_0 = ((PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_StaticFields*)il2cpp_codegen_static_fields_for(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var))->get_Empty_3();
		bool L_1 = ___mask0;
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_2 = (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B *)il2cpp_codegen_object_new(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		WebSocketFrame__ctor_m89CD647B170C333A25411D42B8716A684305831E(L_2, 1, ((int32_t)9), L_0, (bool)0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_3 = V_0;
		return L_3;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::ReadFrameAsync(System.IO.Stream,System.Boolean,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_ReadFrameAsync_mFF8F2F003A0CE7477DBFA6A573668AA9F7453CE2 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, bool ___unmask1, Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__12_m275E06110FE6B19B941302489F73D1FE86488D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * L_0 = (U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass16__ctor_mB38B437F7FF2E22EA2700AFC3A4E00B93C1F26D5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * L_1 = V_0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		NullCheck(L_1);
		L_1->set_stream_0(L_2);
		U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * L_3 = V_0;
		bool L_4 = ___unmask1;
		NullCheck(L_3);
		L_3->set_unmask_1(L_4);
		U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * L_5 = V_0;
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_6 = ___completed2;
		NullCheck(L_5);
		L_5->set_completed_2(L_6);
		U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * L_7 = V_0;
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_8 = ___error3;
		NullCheck(L_7);
		L_7->set_error_3(L_8);
		U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * L_9 = V_0;
		NullCheck(L_9);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = L_9->get_stream_0();
		U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * L_11 = V_0;
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_12 = (Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 *)il2cpp_codegen_object_new(Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02_il2cpp_TypeInfo_var);
		Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__12_m275E06110FE6B19B941302489F73D1FE86488D6C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205_RuntimeMethod_var);
		U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * L_13 = V_0;
		NullCheck(L_13);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_14 = L_13->get_error_3();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		WebSocketFrame_readHeaderAsync_m0EF9532171A71AD88DE9BDAD528CD04D97DF5286(L_10, L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::Unmask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_Unmask_mABD2BB74713ACCCF6350940820EECC4447122845 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__mask_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0037;
	}

IL_0013:
	{
		__this->set__mask_2(0);
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_2 = __this->get__payloadData_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get__maskingKey_3();
		NullCheck(L_2);
		PayloadData_Mask_m9D0C9B62DA60A919DD39A977C01C578FD7D0BEC5(L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ((WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5_il2cpp_TypeInfo_var))->get_EmptyBytes_40();
		__this->set__maskingKey_3(L_4);
	}

IL_0037:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.WebSocketFrame::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketFrame_GetEnumerator_m049510243E97F571569C688F3E5431AF91E1644C (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * L_0 = (U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__18__ctor_m49B941829ECB4A795422002363E138933C173698(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
// System.String WebSocketSharp.WebSocketFrame::PrintToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_PrintToString_mF2A68EC015D06FD159DFFA665C2529575F507FEC (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, bool ___dumped0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___dumped0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = WebSocketFrame_print_m8176DA6A9DFCFA59CFA84FE47239672453ABA9F1(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = WebSocketFrame_dump_m6902E20A4623AF08569E13FBF739761A8E7AB9BA(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] WebSocketSharp.WebSocketFrame::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocketFrame_ToArray_m4ECE2BBB7FB2494EAD5289EF838B6303DA5272CA (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B4_1 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_1 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B5_2 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * G_B5_3 = NULL;
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			uint8_t L_1 = __this->get__fin_1();
			V_1 = L_1;
			int32_t L_2 = V_1;
			uint8_t L_3 = __this->get__rsv1_7();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_2<<(int32_t)1)), (int32_t)L_3));
			int32_t L_4 = V_1;
			uint8_t L_5 = __this->get__rsv2_8();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_4<<(int32_t)1)), (int32_t)L_5));
			int32_t L_6 = V_1;
			uint8_t L_7 = __this->get__rsv3_9();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_6<<(int32_t)1)), (int32_t)L_7));
			int32_t L_8 = V_1;
			uint8_t L_9 = __this->get__opcode_4();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_8<<(int32_t)4)), (int32_t)L_9));
			int32_t L_10 = V_1;
			uint8_t L_11 = __this->get__mask_2();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_10<<(int32_t)1)), (int32_t)L_11));
			int32_t L_12 = V_1;
			uint8_t L_13 = __this->get__payloadLength_6();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_12<<(int32_t)7)), (int32_t)L_13));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_14 = V_0;
			int32_t L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
			L_16 = Ext_InternalToByteArray_m33CF1973316A6A8B709602910B7B0F2F7F1D4F82((uint16_t)((int32_t)((uint16_t)L_15)), 1, /*hidden argument*/NULL);
			NullCheck(L_14);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_16, 0, 2);
			uint8_t L_17 = __this->get__payloadLength_6();
			V_4 = (bool)((((int32_t)((((int32_t)L_17) > ((int32_t)((int32_t)125)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_18 = V_4;
			if (L_18)
			{
				goto IL_0092;
			}
		}

IL_0075:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_19 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get__extPayloadLength_0();
			uint8_t L_21 = __this->get__payloadLength_6();
			G_B3_0 = 0;
			G_B3_1 = L_20;
			G_B3_2 = L_19;
			if ((((int32_t)L_21) == ((int32_t)((int32_t)126))))
			{
				G_B4_0 = 0;
				G_B4_1 = L_20;
				G_B4_2 = L_19;
				goto IL_008a;
			}
		}

IL_0087:
		{
			G_B5_0 = 8;
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			G_B5_3 = G_B3_2;
			goto IL_008b;
		}

IL_008a:
		{
			G_B5_0 = 2;
			G_B5_1 = G_B4_0;
			G_B5_2 = G_B4_1;
			G_B5_3 = G_B4_2;
		}

IL_008b:
		{
			NullCheck(G_B5_3);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, G_B5_3, G_B5_2, G_B5_1, G_B5_0);
		}

IL_0092:
		{
			uint8_t L_22 = __this->get__mask_2();
			V_4 = (bool)((((int32_t)((((int32_t)L_22) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_23 = V_4;
			if (L_23)
			{
				goto IL_00b3;
			}
		}

IL_00a4:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_24 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get__maskingKey_3();
			NullCheck(L_24);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_24, L_25, 0, 4);
		}

IL_00b3:
		{
			uint8_t L_26 = __this->get__payloadLength_6();
			V_4 = (bool)((((int32_t)((((int32_t)L_26) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_27 = V_4;
			if (L_27)
			{
				goto IL_0101;
			}
		}

IL_00c5:
		{
			PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_28 = __this->get__payloadData_5();
			NullCheck(L_28);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29;
			L_29 = PayloadData_ToArray_m76BBCFF22275B0D44FEA8460F65DC68D11F53DBE(L_28, /*hidden argument*/NULL);
			V_2 = L_29;
			uint8_t L_30 = __this->get__payloadLength_6();
			V_4 = (bool)((((int32_t)((((int32_t)L_30) < ((int32_t)((int32_t)127)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_31 = V_4;
			if (L_31)
			{
				goto IL_00f3;
			}
		}

IL_00e5:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_32 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_2;
			NullCheck(L_34);
			NullCheck(L_32);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_32, L_33, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))));
			goto IL_0100;
		}

IL_00f3:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_35 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
			Ext_WriteBytes_m32E5678631561C82EE9DAA2E13EACCDC36B4D199(L_35, L_36, ((int32_t)1024), /*hidden argument*/NULL);
		}

IL_0100:
		{
		}

IL_0101:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_37 = V_0;
			NullCheck(L_37);
			VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_37);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_38 = V_0;
			NullCheck(L_38);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39;
			L_39 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_38);
			V_3 = L_39;
			IL2CPP_LEAVE(0x123, FINALLY_0111);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0111;
	}

FINALLY_0111:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_40 = V_0;
			V_4 = (bool)((((RuntimeObject*)(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)L_40) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_41 = V_4;
			if (L_41)
			{
				goto IL_0122;
			}
		}

IL_011b:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_42 = V_0;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_42);
		}

IL_0122:
		{
			IL2CPP_END_FINALLY(273)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(273)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x123, IL_0123)
	}

IL_0123:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_3;
		return L_43;
	}
}
// System.String WebSocketSharp.WebSocketFrame::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_ToString_mC99E0803030096856FEAFC17F836A42AD34689DC (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = WebSocketFrame_ToArray_m4ECE2BBB7FB2494EAD5289EF838B6303DA5272CA(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator WebSocketSharp.WebSocketFrame::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketFrame_System_Collections_IEnumerable_GetEnumerator_m0B4A58D1616D8618E686E929FDC39E2CFA479221 (WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = WebSocketFrame_GetEnumerator_m049510243E97F571569C688F3E5431AF91E1644C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClass3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3__ctor_mB6D447A4BB05B8634E701995B847133557FC5F64 (U3CU3Ec__DisplayClass3_t14BC25D14C2D83A7C0F2F240F3261AC6DCEB3334 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.Ext/<>c__DisplayClass3::<ContainsTwice>b__2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_U3CContainsTwiceU3Eb__2_mD498573BD3B117170432C0432AA73BE47BE22441 (U3CU3Ec__DisplayClass3_t14BC25D14C2D83A7C0F2F240F3261AC6DCEB3334 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___idx0;
		int32_t L_1 = __this->get_len_0();
		V_2 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_3 = ___idx0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		goto IL_003e;
	}

IL_001a:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = __this->get_values_2();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = __this->get_values_2();
		int32_t L_9 = ___idx0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, L_11, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_003a;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0063;
	}

IL_003a:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = __this->get_len_0();
		V_2 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_001a;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_18 = __this->get_contains_1();
		int32_t L_19 = ___idx0;
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		___idx0 = L_20;
		NullCheck(L_18);
		bool L_21;
		L_21 = Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7(L_18, L_20, /*hidden argument*/Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_RuntimeMethod_var);
		V_1 = L_21;
		goto IL_0063;
	}

IL_005f:
	{
		V_1 = (bool)0;
		goto IL_0063;
	}

IL_0063:
	{
		bool L_22 = V_1;
		return L_22;
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClass9::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9__ctor_m9117075954C73956E7449064C231AAAE024E5112 (U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClass9::<ReadBytesAsync>b__8(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_U3CReadBytesAsyncU3Eb__8_m7CDAABD27927F417FA475F578C3C7757F49B6312 (U3CU3Ec__DisplayClass9_t42D7EB0E39E0F95017EDA0416B0DB3C2E8F26A3C * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF08EE78AAD28B15DAA368D0728D7DE661C3D922A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_4();
			RuntimeObject* L_1 = ___ar0;
			NullCheck(L_0);
			int32_t L_2;
			L_2 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(20 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_0, L_1);
			V_0 = L_2;
			int32_t L_3 = V_0;
			if (L_3)
			{
				goto IL_0024;
			}
		}

IL_0012:
		{
			int32_t L_4 = __this->get_retry_2();
			IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
			int32_t L_5 = ((Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_StaticFields*)il2cpp_codegen_static_fields_for(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var))->get__retry_1();
			G_B4_0 = ((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0025;
		}

IL_0024:
		{
			G_B4_0 = 1;
		}

IL_0025:
		{
			V_2 = (bool)G_B4_0;
			bool L_6 = V_2;
			if (L_6)
			{
				goto IL_0063;
			}
		}

IL_002a:
		{
			int32_t L_7 = __this->get_retry_2();
			__this->set_retry_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = __this->get_stream_4();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_buff_0();
			int32_t L_10 = __this->get_offset_1();
			int32_t L_11 = __this->get_length_5();
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_12 = __this->get_callback_3();
			NullCheck(L_8);
			RuntimeObject* L_13;
			L_13 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(19 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_8, L_9, L_10, L_11, L_12, NULL);
			goto IL_0115;
		}

IL_0063:
		{
			int32_t L_14 = V_0;
			if (!L_14)
			{
				goto IL_0074;
			}
		}

IL_0066:
		{
			int32_t L_15 = V_0;
			int32_t L_16 = __this->get_length_5();
			G_B9_0 = ((((int32_t)((((int32_t)L_15) == ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0075;
		}

IL_0074:
		{
			G_B9_0 = 0;
		}

IL_0075:
		{
			V_2 = (bool)G_B9_0;
			bool L_17 = V_2;
			if (L_17)
			{
				goto IL_00aa;
			}
		}

IL_007a:
		{
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_18 = __this->get_completed_6();
			V_2 = (bool)((((RuntimeObject*)(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)L_18) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_19 = V_2;
			if (L_19)
			{
				goto IL_00a8;
			}
		}

IL_0088:
		{
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_20 = __this->get_completed_6();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_buff_0();
			int32_t L_22 = __this->get_offset_1();
			int32_t L_23 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24;
			L_24 = Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF08EE78AAD28B15DAA368D0728D7DE661C3D922A(L_21, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF08EE78AAD28B15DAA368D0728D7DE661C3D922A_RuntimeMethod_var);
			NullCheck(L_20);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_20, L_24, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_00a8:
		{
			goto IL_0115;
		}

IL_00aa:
		{
			__this->set_retry_2(0);
			int32_t L_25 = __this->get_offset_1();
			int32_t L_26 = V_0;
			__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26)));
			int32_t L_27 = __this->get_length_5();
			int32_t L_28 = V_0;
			__this->set_length_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28)));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_29 = __this->get_stream_4();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = __this->get_buff_0();
			int32_t L_31 = __this->get_offset_1();
			int32_t L_32 = __this->get_length_5();
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_33 = __this->get_callback_3();
			NullCheck(L_29);
			RuntimeObject* L_34;
			L_34 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(19 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_29, L_30, L_31, L_32, L_33, NULL);
			goto IL_0114;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f5;
		}
		throw e;
	}

CATCH_00f5:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_35 = __this->get_error_7();
			V_2 = (bool)((((RuntimeObject*)(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)L_35) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_36 = V_2;
			if (L_36)
			{
				goto IL_0111;
			}
		}

IL_0104:
		{
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_37 = __this->get_error_7();
			Exception_t * L_38 = V_1;
			NullCheck(L_37);
			Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C(L_37, L_38, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var)));
		}

IL_0111:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0114;
		}
	} // end catch (depth: 1)

IL_0114:
	{
	}

IL_0115:
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClassd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassd__ctor_m4350C78E79E8E642120689E7E084DDD9AC1519FB (U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClassd::<ReadBytesAsync>b__b(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassd_U3CReadBytesAsyncU3Eb__b_m1B18AC9C065A28AAC766129C2965428F6831828F (U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * __this, int64_t ___len0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClassf_U3CReadBytesAsyncU3Eb__c_m3C086B6870D751FFE06FEDC510FEE6BD80D0307A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA * V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA * L_0 = (U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClassf__ctor_mCD3709455395011689D7E503503C37248EBEBD09(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_CSU24U3CU3E8__localse_0(__this);
		U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA * L_2 = V_0;
		int64_t L_3 = ___len0;
		NullCheck(L_2);
		L_2->set_len_1(L_3);
		U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA * L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_len_1();
		int32_t L_6 = __this->get_bufferLength_5();
		V_1 = (bool)((((int32_t)((((int64_t)L_5) < ((int64_t)((int64_t)((int64_t)L_6))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA * L_8 = V_0;
		NullCheck(L_8);
		int64_t L_9 = L_8->get_len_1();
		__this->set_bufferLength_5(((int32_t)((int32_t)L_9)));
	}

IL_0038:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = __this->get_stream_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_buff_1();
		int32_t L_12 = __this->get_bufferLength_5();
		U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA * L_13 = V_0;
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_14 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec__DisplayClassf_U3CReadBytesAsyncU3Eb__c_m3C086B6870D751FFE06FEDC510FEE6BD80D0307A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_15;
		L_15 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(19 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_10, L_11, 0, L_12, L_14, NULL);
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
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Ext/<SplitHeaderValue>d__11::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitHeaderValueU3Ed__11_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m822503B16DACC6D981E7A4B073AA1A35BC9494AC (U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0;
		L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_U3CU3El__initialThreadId_2();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = __this->get_U3CU3E1__state_1();
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		__this->set_U3CU3E1__state_1(0);
		V_0 = __this;
		goto IL_0039;
	}

IL_0032:
	{
		U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * L_5 = (U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C *)il2cpp_codegen_object_new(U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C_il2cpp_TypeInfo_var);
		U3CSplitHeaderValueU3Ed__11__ctor_mD5CE3D6B9FF1B35CEA2A78DC05E38D91D22A820C(L_5, 0, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0039:
	{
		U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * L_6 = V_0;
		String_t* L_7 = __this->get_U3CU3E3__value_4();
		NullCheck(L_6);
		L_6->set_value_3(L_7);
		U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * L_8 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = __this->get_U3CU3E3__separators_6();
		NullCheck(L_8);
		L_8->set_separators_5(L_9);
		U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * L_10 = V_0;
		V_1 = L_10;
		goto IL_0055;
	}

IL_0055:
	{
		RuntimeObject* L_11 = V_1;
		return L_11;
	}
}
// System.Collections.IEnumerator WebSocketSharp.Ext/<SplitHeaderValue>d__11::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitHeaderValueU3Ed__11_System_Collections_IEnumerable_GetEnumerator_mE6508619AB7B1DDB3FBB95E1EFE2DF55776FC329 (U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = U3CSplitHeaderValueU3Ed__11_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m822503B16DACC6D981E7A4B073AA1A35BC9494AC(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSplitHeaderValueU3Ed__11_MoveNext_m208BF203C2BCBC114AB348CC5C748DCBE81EE323 (U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_3 = NULL;
	int32_t G_B16_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_1();
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_001b;
			}
			case 2:
			{
				goto IL_0020;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0176;
	}

IL_0020:
	{
		goto IL_01f8;
	}

IL_0025:
	{
		goto IL_002c;
	}

IL_0027:
	{
		goto IL_0200;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_1((-1));
		String_t* L_2 = __this->get_value_3();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		__this->set_U3ClenU3E5__12_7(L_3);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = __this->get_separators_5();
		String_t* L_5;
		L_5 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_4, /*hidden argument*/NULL);
		__this->set_U3CsepsU3E5__13_8(L_5);
		StringBuilder_t * L_6 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_6, ((int32_t)32), /*hidden argument*/NULL);
		__this->set_U3CbuffU3E5__14_9(L_6);
		__this->set_U3CescapedU3E5__15_10((bool)0);
		__this->set_U3CquotedU3E5__16_11((bool)0);
		__this->set_U3CiU3E5__17_12(0);
		goto IL_01b2;
	}

IL_007d:
	{
		String_t* L_7 = __this->get_value_3();
		int32_t L_8 = __this->get_U3CiU3E5__17_12();
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_7, L_8, /*hidden argument*/NULL);
		__this->set_U3CcU3E5__18_13(L_9);
		Il2CppChar L_10 = __this->get_U3CcU3E5__18_13();
		V_2 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)((int32_t)34)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_00da;
		}
	}
	{
		bool L_12 = __this->get_U3CescapedU3E5__15_10();
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_00c5;
		}
	}
	{
		bool L_14 = __this->get_U3CescapedU3E5__15_10();
		__this->set_U3CescapedU3E5__15_10((bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0));
		goto IL_00d4;
	}

IL_00c5:
	{
		bool L_15 = __this->get_U3CquotedU3E5__16_11();
		__this->set_U3CquotedU3E5__16_11((bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0));
	}

IL_00d4:
	{
		goto IL_0191;
	}

IL_00da:
	{
		Il2CppChar L_16 = __this->get_U3CcU3E5__18_13();
		V_2 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)((int32_t)92)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_18 = __this->get_U3CiU3E5__17_12();
		int32_t L_19 = __this->get_U3ClenU3E5__12_7();
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)))))
		{
			goto IL_0118;
		}
	}
	{
		String_t* L_20 = __this->get_value_3();
		int32_t L_21 = __this->get_U3CiU3E5__17_12();
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_20, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)((((int32_t)L_22) == ((int32_t)((int32_t)34)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0119;
	}

IL_0118:
	{
		G_B16_0 = 1;
	}

IL_0119:
	{
		V_2 = (bool)G_B16_0;
		bool L_23 = V_2;
		if (L_23)
		{
			goto IL_0125;
		}
	}
	{
		__this->set_U3CescapedU3E5__15_10((bool)1);
	}

IL_0125:
	{
		goto IL_0191;
	}

IL_0128:
	{
		String_t* L_24 = __this->get_U3CsepsU3E5__13_8();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_25 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		V_3 = L_25;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = V_3;
		Il2CppChar L_27 = __this->get_U3CcU3E5__18_13();
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_27);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Ext_Contains_m358CFAC688B1F473F9E42AA4EDEA1F4FF280AB97(L_24, L_28, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_2;
		if (L_30)
		{
			goto IL_018f;
		}
	}
	{
		bool L_31 = __this->get_U3CquotedU3E5__16_11();
		V_2 = L_31;
		bool L_32 = V_2;
		if (L_32)
		{
			goto IL_018c;
		}
	}
	{
		StringBuilder_t * L_33 = __this->get_U3CbuffU3E5__14_9();
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		__this->set_U3CU3E2__current_0(L_34);
		__this->set_U3CU3E1__state_1(1);
		V_0 = (bool)1;
		goto IL_0204;
	}

IL_0176:
	{
		__this->set_U3CU3E1__state_1((-1));
		StringBuilder_t * L_35 = __this->get_U3CbuffU3E5__14_9();
		NullCheck(L_35);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_35, 0, /*hidden argument*/NULL);
		goto IL_01a4;
	}

IL_018c:
	{
		goto IL_0191;
	}

IL_018f:
	{
	}

IL_0191:
	{
		StringBuilder_t * L_36 = __this->get_U3CbuffU3E5__14_9();
		Il2CppChar L_37 = __this->get_U3CcU3E5__18_13();
		NullCheck(L_36);
		StringBuilder_t * L_38;
		L_38 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_36, L_37, /*hidden argument*/NULL);
	}

IL_01a4:
	{
		int32_t L_39 = __this->get_U3CiU3E5__17_12();
		__this->set_U3CiU3E5__17_12(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
	}

IL_01b2:
	{
		int32_t L_40 = __this->get_U3CiU3E5__17_12();
		int32_t L_41 = __this->get_U3ClenU3E5__12_7();
		V_2 = (bool)((((int32_t)L_40) < ((int32_t)L_41))? 1 : 0);
		bool L_42 = V_2;
		if (L_42)
		{
			goto IL_007d;
		}
	}
	{
		StringBuilder_t * L_43 = __this->get_U3CbuffU3E5__14_9();
		NullCheck(L_43);
		int32_t L_44;
		L_44 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_43, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_44) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_2;
		if (L_45)
		{
			goto IL_01ff;
		}
	}
	{
		StringBuilder_t * L_46 = __this->get_U3CbuffU3E5__14_9();
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
		__this->set_U3CU3E2__current_0(L_47);
		__this->set_U3CU3E1__state_1(2);
		V_0 = (bool)1;
		goto IL_0204;
	}

IL_01f8:
	{
		__this->set_U3CU3E1__state_1((-1));
	}

IL_01ff:
	{
	}

IL_0200:
	{
		V_0 = (bool)0;
		goto IL_0204;
	}

IL_0204:
	{
		bool L_48 = V_0;
		return L_48;
	}
}
// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__11::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CSplitHeaderValueU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_mE5631865356243890DFE2ECA23BDA8337744D3B0 (U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CU3E2__current_0();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__11_System_Collections_IEnumerator_Reset_m15C9DF61C2FED0E19FAF8ECA78E8D1139D258BE0 (U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSplitHeaderValueU3Ed__11_System_Collections_IEnumerator_Reset_m15C9DF61C2FED0E19FAF8ECA78E8D1139D258BE0_RuntimeMethod_var)));
	}
}
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__11_System_IDisposable_Dispose_mD1D285DD8F2688E0D6AD6BABE664DCD06E5AF445 (U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Object WebSocketSharp.Ext/<SplitHeaderValue>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSplitHeaderValueU3Ed__11_System_Collections_IEnumerator_get_Current_m359F7FEC4561185B3DD90E6983E45382D8D1FCD2 (U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CU3E2__current_0();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__11__ctor_mD5CE3D6B9FF1B35CEA2A78DC05E38D91D22A820C (U3CSplitHeaderValueU3Ed__11_t3BA754469E0D886ADFA183EC873C5F0EE994262C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_1(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
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
// System.Void WebSocketSharp.HttpBase/<>c__DisplayClass1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1__ctor_m7854C3207AD8298B8EA43550FEAA45FB9350B6C6 (U3CU3Ec__DisplayClass1_t35BECD7A4529EBBDCA339FC21D687BE55DDEC410 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.HttpBase/<>c__DisplayClass1::<readHeaders>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_U3CreadHeadersU3Eb__0_mCADC280C0709C12742F10CBCD90DA4511FF217C2 (U3CU3Ec__DisplayClass1_t35BECD7A4529EBBDCA339FC21D687BE55DDEC410 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___i0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_2 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral089CEAF9555BAF2295EDAC24268380608D558B60)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass1_U3CreadHeadersU3Eb__0_mCADC280C0709C12742F10CBCD90DA4511FF217C2_RuntimeMethod_var)));
	}

IL_0017:
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_3 = __this->get_buff_0();
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED(L_3, (uint8_t)((int32_t)((uint8_t)L_4)), /*hidden argument*/List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		int32_t L_5 = __this->get_cnt_1();
		__this->set_cnt_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
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
// System.Boolean WebSocketSharp.PayloadData/<GetEnumerator>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__0_MoveNext_mAAC7B5F3D8085B8472766CF66CFE99648549D255 (U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_1();
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_001d;
				}
				case 1:
				{
					goto IL_001f;
				}
				case 2:
				{
					goto IL_001b;
				}
			}
		}

IL_0019:
		{
			goto IL_001f;
		}

IL_001b:
		{
			goto IL_0078;
		}

IL_001d:
		{
			goto IL_0024;
		}

IL_001f:
		{
			goto IL_00a9;
		}

IL_0024:
		{
			__this->set_U3CU3E1__state_1((-1));
			__this->set_U3CU3E1__state_1(1);
			PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get__data_0();
			__this->set_U3CU3E7__wrap3_4(L_3);
			__this->set_U3CU3E7__wrap4_5(0);
			goto IL_008d;
		}

IL_004e:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_U3CU3E7__wrap3_4();
			int32_t L_5 = __this->get_U3CU3E7__wrap4_5();
			NullCheck(L_4);
			int32_t L_6 = L_5;
			uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			__this->set_U3CbU3E5__1_3(L_7);
			uint8_t L_8 = __this->get_U3CbU3E5__1_3();
			__this->set_U3CU3E2__current_0(L_8);
			__this->set_U3CU3E1__state_1(2);
			V_0 = (bool)1;
			goto IL_00b5;
		}

IL_0078:
		{
			__this->set_U3CU3E1__state_1(1);
			int32_t L_9 = __this->get_U3CU3E7__wrap4_5();
			__this->set_U3CU3E7__wrap4_5(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		}

IL_008d:
		{
			int32_t L_10 = __this->get_U3CU3E7__wrap4_5();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_U3CU3E7__wrap3_4();
			NullCheck(L_11);
			V_2 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0);
			bool L_12 = V_2;
			if (L_12)
			{
				goto IL_004e;
			}
		}

IL_00a1:
		{
			U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally2_mF31CD14FDD63FF1314DB31A70EA9683F3307433E(__this, /*hidden argument*/NULL);
		}

IL_00a9:
		{
			V_0 = (bool)0;
			goto IL_00b5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ad;
	}

FAULT_00ad:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__0_System_IDisposable_Dispose_m02E337ED687FAF39E7AAE3993E4FCAC9B888989C(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(173)
	} // end fault
	IL2CPP_CLEANUP(173)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b5:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>d__0::System.Collections.Generic.IEnumerator<System.Byte>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U3CGetEnumeratorU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ByteU3E_get_Current_mDFB1DC192E7215C93C1C9F560024767EA004506F (U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_0();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_m55F8A861B22812FE15179E2CF8841AD5B8DC14A2 (U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_m55F8A861B22812FE15179E2CF8841AD5B8DC14A2_RuntimeMethod_var)));
	}
}
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_System_IDisposable_Dispose_m02E337ED687FAF39E7AAE3993E4FCAC9B888989C (U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0019;
			}
		}
	}
	{
		goto IL_001d;
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		goto IL_001f;
	}

IL_001d:
	{
		goto IL_0026;
	}

IL_001f:
	{
		U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally2_mF31CD14FDD63FF1314DB31A70EA9683F3307433E(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Object WebSocketSharp.PayloadData/<GetEnumerator>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__0_System_Collections_IEnumerator_get_Current_m990ABE8110AF39B040ED2DB4D9090948C23F90C1 (U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_0();
		uint8_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_1);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0__ctor_m96A5412A2E2348B53CAE24D29A8C06A8D0B53D3D (U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_1(L_0);
		return;
	}
}
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__0::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally2_mF31CD14FDD63FF1314DB31A70EA9683F3307433E (U3CGetEnumeratorU3Ed__0_t31AC54A72D5AC2C0E40A81AE6CB2622019C926CB * __this, const RuntimeMethod* method)
{
	{
		__this->set_U3CU3E1__state_1((-1));
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
// System.Void WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5__ctor_mB03271E17D6B75E2759E928F705CB8BFCE810215 (U3CU3Ec__DisplayClass5_t611410DDEE43EF9A45F746C359B0BF11548B9EF6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass5::<GetObjectData>b__4(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_U3CGetObjectDataU3Eb__4_m60C6AB79D348786852F6B76CA380B1B3DD6365E5 (U3CU3Ec__DisplayClass5_t611410DDEE43EF9A45F746C359B0BF11548B9EF6 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = __this->get_serializationInfo_2();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___i0), /*hidden argument*/NULL);
		WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C * L_2 = __this->get_U3CU3E4__this_1();
		int32_t L_3 = ___i0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32) */, L_2, L_3);
		NullCheck(L_0);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_0, L_1, L_4, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_5 = __this->get_serializationInfo_2();
		int32_t L_6 = __this->get_cnt_0();
		int32_t L_7 = ___i0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C * L_9 = __this->get_U3CU3E4__this_1();
		int32_t L_10 = ___i0;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(19 /* System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32) */, L_9, L_10);
		NullCheck(L_5);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_5, L_8, L_11, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8__ctor_mA5F9E1CC3954099056754B1EEABADBF31BD17FFC (U3CU3Ec__DisplayClass8_t636EBDAC818ED6C9B5EC7C904B857D93A3B8ACC4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass8::<ToString>b__7(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_U3CToStringU3Eb__7_mFA22500F33ECBE26D0E8187CD709E7116580B99C (U3CU3Ec__DisplayClass8_t636EBDAC818ED6C9B5EC7C904B857D93A3B8ACC4 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = __this->get_buff_0();
		WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C * L_1 = __this->get_U3CU3E4__this_1();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32) */, L_1, L_2);
		WebHeaderCollection_t832E8502EC241D3D558BA2B4CEE090B507C9899C * L_4 = __this->get_U3CU3E4__this_1();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(19 /* System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32) */, L_4, L_5);
		NullCheck(L_0);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_0, _stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182, L_3, L_6, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass12::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12__ctor_mBB8A5175A37A88139C20880CAD6F9F2FD6F22AF1 (U3CU3Ec__DisplayClass12_tBCD59DCD2348E3E530E1B1D017F10832F8A82379 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass12::<sendAsync>b__11(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_U3CsendAsyncU3Eb__11_mAB82FBC5FD1B1F94F91C77FE920889D5AEA07505 (U3CU3Ec__DisplayClass12_tBCD59DCD2348E3E530E1B1D017F10832F8A82379 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_EndInvoke_m5F9899907DB91084A4AE5D117DAE9A7EBBAD9003_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Func_3_t22C0949025AC6DA80FDDEC56C8D1CA36E2454873 * L_0 = __this->get_sender_0();
			RuntimeObject* L_1 = ___ar0;
			NullCheck(L_0);
			bool L_2;
			L_2 = Func_3_EndInvoke_m5F9899907DB91084A4AE5D117DAE9A7EBBAD9003(L_0, L_1, /*hidden argument*/Func_3_EndInvoke_m5F9899907DB91084A4AE5D117DAE9A7EBBAD9003_RuntimeMethod_var);
			V_0 = L_2;
			Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = __this->get_completed_2();
			V_2 = (bool)((((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_4 = V_2;
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_001c:
		{
			Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_5 = __this->get_completed_2();
			bool L_6 = V_0;
			NullCheck(L_5);
			Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_5, L_6, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		}

IL_0029:
		{
			goto IL_005c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_7 = __this->get_U3CU3E4__this_1();
		NullCheck(L_7);
		Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE * L_8 = L_7->get__logger_21();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		NullCheck(L_8);
		Logger_Error_mB72635E604F44BFD961CCCEB0E064CC27C0FFF51(L_8, L_10, /*hidden argument*/NULL);
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_11 = __this->get_U3CU3E4__this_1();
		Exception_t * L_12 = V_1;
		NullCheck(L_11);
		WebSocket_error_m9DADFC97445F1A25152B3B5C407E96FF5E5036CF(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBA319F9F1E632AB28C6BEB7F0B9516E66AD975A)), L_12, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005c;
	} // end catch (depth: 1)

IL_005c:
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17__ctor_mBEE754A4AA1AB2AADD72E360E55AD241E0CD9A67 (U3CU3Ec__DisplayClass17_tB40AAC9FC771B26FE75B4D37D022DBD0DBC88E07 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass17::<startReceiving>b__14()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_U3CstartReceivingU3Eb__14_m05A78552138BB6E0556A3A8D6FCA3FE52800FE79 (U3CU3Ec__DisplayClass17_tB40AAC9FC771B26FE75B4D37D022DBD0DBC88E07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_U3CstartReceivingU3Eb__15_mD5D2DA1DE6B0B32402D5DF89B6D6473A4B7303BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_U3CstartReceivingU3Eb__16_m5320CB63BA053A88DFDF78801824C3C3D931E1A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = L_0->get__stream_36();
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_2 = (Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 *)il2cpp_codegen_object_new(Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02_il2cpp_TypeInfo_var);
		Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205(L_2, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass17_U3CstartReceivingU3Eb__15_mD5D2DA1DE6B0B32402D5DF89B6D6473A4B7303BB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_3 = (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)il2cpp_codegen_object_new(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var);
		Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6(L_3, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass17_U3CstartReceivingU3Eb__16_m5320CB63BA053A88DFDF78801824C3C3D931E1A6_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		WebSocketFrame_ReadFrameAsync_mFF8F2F003A0CE7477DBFA6A573668AA9F7453CE2(L_1, (bool)0, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass17::<startReceiving>b__15(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_U3CstartReceivingU3Eb__15_mD5D2DA1DE6B0B32402D5DF89B6D6473A4B7303BB (U3CU3Ec__DisplayClass17_tB40AAC9FC771B26FE75B4D37D022DBD0DBC88E07 * __this, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame0, const RuntimeMethod* method)
{
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	{
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_0 = __this->get_U3CU3E4__this_1();
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_1 = ___frame0;
		NullCheck(L_0);
		bool L_2;
		L_2 = WebSocket_processReceivedFrame_mF5E35B4F1A605DB732585D3492D9C79F8AB78A7E(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_3 = __this->get_U3CU3E4__this_1();
		NullCheck(L_3);
		uint16_t L_4 = L_3->get__readyState_32();
		il2cpp_codegen_memory_barrier();
		G_B3_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0048;
		}
	}
	{
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_6 = __this->get_U3CU3E4__this_1();
		NullCheck(L_6);
		AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * L_7 = L_6->get__exitReceiving_10();
		V_0 = L_7;
		AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * L_8 = V_0;
		V_1 = (bool)((((RuntimeObject*)(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0046;
		}
	}
	{
		AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_10, /*hidden argument*/NULL);
	}

IL_0046:
	{
		goto IL_0096;
	}

IL_0048:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = __this->get_receive_0();
		NullCheck(L_12);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_12, /*hidden argument*/NULL);
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_13 = __this->get_U3CU3E4__this_1();
		NullCheck(L_13);
		bool L_14 = L_13->get__inMessage_20();
		il2cpp_codegen_memory_barrier();
		if (L_14)
		{
			goto IL_0082;
		}
	}
	{
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_15 = __this->get_U3CU3E4__this_1();
		NullCheck(L_15);
		bool L_16;
		L_16 = WebSocket_get_HasMessage_m663EE6272FAB7660881E843F51A6BF5495869725(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0082;
		}
	}
	{
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_17 = __this->get_U3CU3E4__this_1();
		NullCheck(L_17);
		uint16_t L_18 = L_17->get__readyState_32();
		il2cpp_codegen_memory_barrier();
		G_B11_0 = ((((int32_t)L_18) == ((int32_t)1))? 1 : 0);
		goto IL_0083;
	}

IL_0082:
	{
		G_B11_0 = 0;
	}

IL_0083:
	{
		V_1 = (bool)G_B11_0;
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0096;
	}

IL_008a:
	{
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_20 = __this->get_U3CU3E4__this_1();
		NullCheck(L_20);
		WebSocket_message_mC522DC56B2D82E19AA20035765B51FFB2A3299CA(L_20, /*hidden argument*/NULL);
	}

IL_0096:
	{
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass17::<startReceiving>b__16(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_U3CstartReceivingU3Eb__16_m5320CB63BA053A88DFDF78801824C3C3D931E1A6 (U3CU3Ec__DisplayClass17_tB40AAC9FC771B26FE75B4D37D022DBD0DBC88E07 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCABD34D7CF39245177859A0BC4C6FF68D6972CF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		Logger_tCDE314655F0CB6B39E5C7867F979396BDECE73DE * L_1 = L_0->get__logger_21();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_2 = ___ex0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		Logger_Fatal_m9DC09547C19F1D1E3C6F91CFECE4641C0FE8F3A0(L_1, L_3, /*hidden argument*/NULL);
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_4 = __this->get_U3CU3E4__this_1();
		Exception_t * L_5 = ___ex0;
		NullCheck(L_4);
		WebSocket_fatal_m53A69400F5422D9982C0A1E81E27534E22E9278F(L_4, _stringLiteralCABD34D7CF39245177859A0BC4C6FF68D6972CF6, L_5, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass1a::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1a__ctor_m8455E0DDA46F9CE1CD31C981683AC308AF907A05 (U3CU3Ec__DisplayClass1a_t586F63A993CAB0FDFB10281297258EEC1F2E1AD0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.WebSocket/<>c__DisplayClass1a::<validateSecWebSocketExtensionsServerHeader>b__19(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1a_U3CvalidateSecWebSocketExtensionsServerHeaderU3Eb__19_mD0CB2241E50E492AFE0A768C287A8302619B1C66 (U3CU3Ec__DisplayClass1a_t586F63A993CAB0FDFB10281297258EEC1F2E1AD0 * __this, String_t* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872863942A17DEDCD0300265682277E23AC55930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7745A740C0A1346D860F22A7638EF5A029B56E5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_0, /*hidden argument*/NULL);
		___t0 = L_1;
		String_t* L_2 = ___t0;
		String_t* L_3 = __this->get_method_0();
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_5 = ___t0;
		bool L_6;
		L_6 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_5, _stringLiteral872863942A17DEDCD0300265682277E23AC55930, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_7 = ___t0;
		bool L_8;
		L_8 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_7, _stringLiteralB7745A740C0A1346D860F22A7638EF5A029B56E5, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 0;
	}

IL_0032:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_9 = V_0;
		return L_9;
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass1d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1d__ctor_m351AD0A56374FA71084DEDCC46FFC04596A75AF2 (U3CU3Ec__DisplayClass1d_t3D447AB975A5828E68A8453CCDB12969CD8C0D15 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.WebSocket/<>c__DisplayClass1d::<validateSecWebSocketProtocolServerHeader>b__1c(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1d_U3CvalidateSecWebSocketProtocolServerHeaderU3Eb__1c_m107B48E1A9D0FFECA2FD71BF5AFB06B6A31A3127 (U3CU3Ec__DisplayClass1d_t3D447AB975A5828E68A8453CCDB12969CD8C0D15 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___p0;
		String_t* L_1 = __this->get_value_0();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass23::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23__ctor_m99BC83957B85F40320ADBD356B6F4C6E0A9CD91E (U3CU3Ec__DisplayClass23_tFAE90F7826D24887D2523335CD00493FA7A1C15E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass23::<ConnectAsync>b__22(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_U3CConnectAsyncU3Eb__22_mEC125D81B149DA50A32040A1876B8EEDF32BEFF2 (U3CU3Ec__DisplayClass23_tFAE90F7826D24887D2523335CD00493FA7A1C15E * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = __this->get_connector_0();
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6(L_0, L_1, /*hidden argument*/Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		WebSocket_t753A6AB01919AB44DF52FB19BA5AE26C13FEB1A5 * L_4 = __this->get_U3CU3E4__this_1();
		NullCheck(L_4);
		WebSocket_open_m48DC527818F3266C07F9ADD86C827FBBDFED81E4(L_4, /*hidden argument*/NULL);
	}

IL_0020:
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClassa::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassa__ctor_mD2BF8B1EF067013D73265CB5C4FCC20BE7F017DD (U3CU3Ec__DisplayClassa_t0074BEC8098E2D28D6BA817940D896676F3AC726 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClassa::<closeAsync>b__9(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassa_U3CcloseAsyncU3Eb__9_m9C684FC9763721D1B79C9A8D8661371B44A0555E (U3CU3Ec__DisplayClassa_t0074BEC8098E2D28D6BA817940D896676F3AC726 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_EndInvoke_m7BEF2C1A8C243E7A11ABFEA150A715DB4344018D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_4_t1D5E542190ACAADFE8E719B5E016BCBC605FA441 * L_0 = __this->get_closer_0();
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		Action_4_EndInvoke_m7BEF2C1A8C243E7A11ABFEA150A715DB4344018D(L_0, L_1, /*hidden argument*/Action_4_EndInvoke_m7BEF2C1A8C243E7A11ABFEA150A715DB4344018D_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass10::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10__ctor_m58AC2C2EDC7FF5CFBA7A464B7D2E39F3574AADB8 (U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass10::<readPayloadDataAsync>b__f(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_U3CreadPayloadDataAsyncU3Eb__f_m52C89854896F8523A33D98BE03EC67D9D8462BF8 (U3CU3Ec__DisplayClass10_tAE79418B1364EA6A74D1C57F1F03D82E3E303F3A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int64_t L_1;
		L_1 = Array_get_LongLength_m6858BC1C3D3B4FD5DEBFB3C9A426D89911FF3276((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		int64_t L_2 = __this->get_llen_0();
		V_0 = (bool)((((int64_t)L_1) == ((int64_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * L_4 = (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_mEA2E7BE4C0AA9379C66E969CF9787BCD99DB61FA(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F856E3E9A0448BFF607B2DC7B844B23FAA69675)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass10_U3CreadPayloadDataAsyncU3Eb__f_m52C89854896F8523A33D98BE03EC67D9D8462BF8_RuntimeMethod_var)));
	}

IL_001e:
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_5 = __this->get_frame_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		int64_t L_7 = __this->get_llen_0();
		PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 * L_8 = (PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208 *)il2cpp_codegen_object_new(PayloadData_t72FDFF9662425066172B1280971F85DEEF41E208_il2cpp_TypeInfo_var);
		PayloadData__ctor_m042BC4C2D0673351793C139ACBBE1691FF869CED(L_8, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set__payloadData_5(L_8);
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_9 = __this->get_completed_2();
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_10 = __this->get_frame_1();
		NullCheck(L_9);
		Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49(L_9, L_10, /*hidden argument*/Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16__ctor_mB38B437F7FF2E22EA2700AFC3A4E00B93C1F26D5 (U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass16::<ReadFrameAsync>b__12(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__12_m275E06110FE6B19B941302489F73D1FE86488D6C (U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * __this, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__13_m93BF5A97C50EBEF01D30C26D8478EB58A8194748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_1 = ___frame0;
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_2 = (Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 *)il2cpp_codegen_object_new(Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02_il2cpp_TypeInfo_var);
		Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205(L_2, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__13_m93BF5A97C50EBEF01D30C26D8478EB58A8194748_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_3 = __this->get_error_3();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		WebSocketFrame_readExtendedPayloadLengthAsync_m6FFABF85D3C2EC292ADB9069A33EC6C6D0E1B6DE(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass16::<ReadFrameAsync>b__13(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__13_m93BF5A97C50EBEF01D30C26D8478EB58A8194748 (U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * __this, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__14_m3751C1633CED4E0FE945783D9F37398551A8DF2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_1 = ___frame10;
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_2 = (Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 *)il2cpp_codegen_object_new(Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02_il2cpp_TypeInfo_var);
		Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205(L_2, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__14_m3751C1633CED4E0FE945783D9F37398551A8DF2E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_3 = __this->get_error_3();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		WebSocketFrame_readMaskingKeyAsync_m31947BEE09683CE8EACEFAE4980A831EEC7985C6(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass16::<ReadFrameAsync>b__14(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__14_m3751C1633CED4E0FE945783D9F37398551A8DF2E (U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * __this, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame20, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__15_mF702ADB1DD69BB06A398279E99BC0D334B7B8AD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_1 = ___frame20;
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_2 = (Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 *)il2cpp_codegen_object_new(Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02_il2cpp_TypeInfo_var);
		Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205(L_2, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__15_mF702ADB1DD69BB06A398279E99BC0D334B7B8AD9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m16754C8AB0401AC471A25F942C92C49EC9F5E205_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_3 = __this->get_error_3();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		WebSocketFrame_readPayloadDataAsync_m7805598A20E181352E18B2DEB7725C215D38EB3A(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass16::<ReadFrameAsync>b__15(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_U3CReadFrameAsyncU3Eb__15_mF702ADB1DD69BB06A398279E99BC0D334B7B8AD9 (U3CU3Ec__DisplayClass16_t21032620E413A3CCF2AFEF4E99D1A6B6276730DA * __this, WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * ___frame30, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->get_unmask_1();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_2 = ___frame30;
		NullCheck(L_2);
		WebSocketFrame_Unmask_mABD2BB74713ACCCF6350940820EECC4447122845(L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_3 = __this->get_completed_2();
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_4 = ___frame30;
		NullCheck(L_3);
		Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49(L_3, L_4, /*hidden argument*/Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2__ctor_mECF5F4200DD313356F1BC6E94307369B98BC1AF1 (U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Action`4<System.String,System.String,System.String,System.String> WebSocketSharp.WebSocketFrame/<>c__DisplayClass2::<dump>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * U3CU3Ec__DisplayClass2_U3CdumpU3Eb__0_mC21527F7F7B555C61307DE02785D365CE583AC56 (U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_U3CdumpU3Eb__1_m1AADBDCCBA32EDB90AAB19F898213870876C1221_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A * V_0 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A * L_0 = (U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4__ctor_m082362E64F72DB2F6B9E0E7B5667D75498A3311B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_CSU24U3CU3E8__locals3_0(__this);
		U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A * L_2 = V_0;
		NullCheck(L_2);
		L_2->set_lineCnt_1(((int64_t)((int64_t)0)));
		U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A * L_3 = V_0;
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_4 = (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E *)il2cpp_codegen_object_new(Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E_il2cpp_TypeInfo_var);
		Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_U3CdumpU3Eb__1_m1AADBDCCBA32EDB90AAB19F898213870876C1221_RuntimeMethod_var), /*hidden argument*/Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_0025;
	}

IL_0025:
	{
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_5 = V_1;
		return L_5;
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7__ctor_mF050798B2A4D777FCC72721516A2949433848469 (U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass7::<readExtendedPayloadLengthAsync>b__6(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_U3CreadExtendedPayloadLengthAsyncU3Eb__6_mBF0CFCED2F79B910E29B2952F69106A07AA0735B (U3CU3Ec__DisplayClass7_tE913D756AC93D19560E50FCDBC7D5EC1383EFF6D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		int32_t L_1 = __this->get_len_0();
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * L_3 = (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_mEA2E7BE4C0AA9379C66E969CF9787BCD99DB61FA(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2E30E3C87DD2064DD314F4919D041A3A4592D97)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass7_U3CreadExtendedPayloadLengthAsyncU3Eb__6_mBF0CFCED2F79B910E29B2952F69106A07AA0735B_RuntimeMethod_var)));
	}

IL_001b:
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_4 = __this->get_frame_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bytes0;
		NullCheck(L_4);
		L_4->set__extPayloadLength_0(L_5);
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_6 = __this->get_completed_2();
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_7 = __this->get_frame_1();
		NullCheck(L_6);
		Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49(L_6, L_7, /*hidden argument*/Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClassa::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassa__ctor_m26EFCA04655B0156539F05A0E74A963A98042356 (U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClassa::<readHeaderAsync>b__9(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassa_U3CreadHeaderAsyncU3Eb__9_m5DED9E72B93F63021F0B726D603C2169E57D8E64 (U3CU3Ec__DisplayClassa_t1C431C7F5D07957629EB6C0C74BC726836956B11 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_0 = __this->get_completed_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B_il2cpp_TypeInfo_var);
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_2;
		L_2 = WebSocketFrame_processHeader_mB08E4A854AA2128113647342BDA88A49CC22BAA5(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49(L_0, L_2, /*hidden argument*/Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClassd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassd__ctor_mA3F1CEA5F881C5B76F2FAF44CC9E62981ED01AAF (U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClassd::<readMaskingKeyAsync>b__c(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassd_U3CreadMaskingKeyAsyncU3Eb__c_mC8F91C41AE4352182C41272D5DD28EE41AD0FBB7 (U3CU3Ec__DisplayClassd_tC4668B0F888E1EBE0BB628F473BEDE7E37C73E90 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		int32_t L_1 = __this->get_len_0();
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D * L_3 = (WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_tF53065B682DC3782F927FA4EDBBAE1BB2B9DC73D_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_mEA2E7BE4C0AA9379C66E969CF9787BCD99DB61FA(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBB12FE24FDF92D6FF3F85D052D307A04C170B49)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClassd_U3CreadMaskingKeyAsyncU3Eb__c_mC8F91C41AE4352182C41272D5DD28EE41AD0FBB7_RuntimeMethod_var)));
	}

IL_001b:
	{
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_4 = __this->get_frame_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bytes0;
		NullCheck(L_4);
		L_4->set__maskingKey_3(L_5);
		Action_1_t424C0FEF390FAC712F97D3B503860895194D7A02 * L_6 = __this->get_completed_2();
		WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_7 = __this->get_frame_1();
		NullCheck(L_6);
		Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49(L_6, L_7, /*hidden argument*/Action_1_Invoke_m71F8A3FD392D033FF50DDE82312AE0725066FD49_RuntimeMethod_var);
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
// System.Boolean WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__18_MoveNext_mEB928E95F3F555C55BDD96D1A0422C19C147EBEF (U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_1();
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_001d;
				}
				case 1:
				{
					goto IL_001f;
				}
				case 2:
				{
					goto IL_001b;
				}
			}
		}

IL_0019:
		{
			goto IL_001f;
		}

IL_001b:
		{
			goto IL_0078;
		}

IL_001d:
		{
			goto IL_0024;
		}

IL_001f:
		{
			goto IL_00a9;
		}

IL_0024:
		{
			__this->set_U3CU3E1__state_1((-1));
			__this->set_U3CU3E1__state_1(1);
			WebSocketFrame_t7F4C1EF8506FD3A1A777253449DBA63ED826C24B * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
			L_3 = WebSocketFrame_ToArray_m4ECE2BBB7FB2494EAD5289EF838B6303DA5272CA(L_2, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1b_4(L_3);
			__this->set_U3CU3E7__wrap1c_5(0);
			goto IL_008d;
		}

IL_004e:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_U3CU3E7__wrap1b_4();
			int32_t L_5 = __this->get_U3CU3E7__wrap1c_5();
			NullCheck(L_4);
			int32_t L_6 = L_5;
			uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			__this->set_U3CbU3E5__19_3(L_7);
			uint8_t L_8 = __this->get_U3CbU3E5__19_3();
			__this->set_U3CU3E2__current_0(L_8);
			__this->set_U3CU3E1__state_1(2);
			V_0 = (bool)1;
			goto IL_00b5;
		}

IL_0078:
		{
			__this->set_U3CU3E1__state_1(1);
			int32_t L_9 = __this->get_U3CU3E7__wrap1c_5();
			__this->set_U3CU3E7__wrap1c_5(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		}

IL_008d:
		{
			int32_t L_10 = __this->get_U3CU3E7__wrap1c_5();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_U3CU3E7__wrap1b_4();
			NullCheck(L_11);
			V_2 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0);
			bool L_12 = V_2;
			if (L_12)
			{
				goto IL_004e;
			}
		}

IL_00a1:
		{
			U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1a_mEA62B5E0C084D51DE6C13A4F70A91DF20E334CB6(__this, /*hidden argument*/NULL);
		}

IL_00a9:
		{
			V_0 = (bool)0;
			goto IL_00b5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ad;
	}

FAULT_00ad:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_m4E0761040C1207F04F0718DDD249406D68590FEA(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(173)
	} // end fault
	IL2CPP_CLEANUP(173)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b5:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Byte WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::System.Collections.Generic.IEnumerator<System.Byte>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U3CGetEnumeratorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ByteU3E_get_Current_mF69C56C45779E6B9BC0EB1E8A2394C8A6651BEE4 (U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_0();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_m91D4553A8BBD7B1FAD7FFBFF7595400FB64A4F87 (U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_m91D4553A8BBD7B1FAD7FFBFF7595400FB64A4F87_RuntimeMethod_var)));
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_m4E0761040C1207F04F0718DDD249406D68590FEA (U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0019;
			}
		}
	}
	{
		goto IL_001d;
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		goto IL_001f;
	}

IL_001d:
	{
		goto IL_0026;
	}

IL_001f:
	{
		U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1a_mEA62B5E0C084D51DE6C13A4F70A91DF20E334CB6(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Object WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_get_Current_m30464238FCC0CF1786A15A7191A1C618A3A5F33A (U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_0();
		uint8_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_1);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18__ctor_m49B941829ECB4A795422002363E138933C173698 (U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_1(L_0);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__18::<>m__Finally1a()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1a_mEA62B5E0C084D51DE6C13A4F70A91DF20E334CB6 (U3CGetEnumeratorU3Ed__18_tFF172A5F8A734470F5D8323D8E8407FC9C0D4723 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U3CU3E1__state_1((-1));
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClassd/<>c__DisplayClassf::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassf__ctor_mCD3709455395011689D7E503503C37248EBEBD09 (U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClassd/<>c__DisplayClassf::<ReadBytesAsync>b__c(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClassf_U3CReadBytesAsyncU3Eb__c_m3C086B6870D751FFE06FEDC510FEE6BD80D0307A (U3CU3Ec__DisplayClassf_tDFE24BFCCF4FE3C2B5494E30E194D714A396D0DA * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_0 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_0);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = L_0->get_stream_4();
			RuntimeObject* L_2 = ___ar0;
			NullCheck(L_1);
			int32_t L_3;
			L_3 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(20 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_1, L_2);
			V_0 = L_3;
			int32_t L_4 = V_0;
			V_2 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_2;
			if (L_5)
			{
				goto IL_003d;
			}
		}

IL_001f:
		{
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_6 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_6);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_7 = L_6->get_dest_0();
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_8 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_8);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8->get_buff_1();
			int32_t L_10 = V_0;
			NullCheck(L_7);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_7, L_9, 0, L_10);
		}

IL_003d:
		{
			int32_t L_11 = V_0;
			if (L_11)
			{
				goto IL_0057;
			}
		}

IL_0040:
		{
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_12 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_12);
			int32_t L_13 = L_12->get_retry_2();
			IL2CPP_RUNTIME_CLASS_INIT(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var);
			int32_t L_14 = ((Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_StaticFields*)il2cpp_codegen_static_fields_for(Ext_t53563BF798F018EB143B39EAFB01D6899AEA0A64_il2cpp_TypeInfo_var))->get__retry_1();
			G_B6_0 = ((((int32_t)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0058;
		}

IL_0057:
		{
			G_B6_0 = 1;
		}

IL_0058:
		{
			V_2 = (bool)G_B6_0;
			bool L_15 = V_2;
			if (L_15)
			{
				goto IL_008d;
			}
		}

IL_005d:
		{
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_16 = __this->get_CSU24U3CU3E8__localse_0();
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_17 = L_16;
			NullCheck(L_17);
			int32_t L_18 = L_17->get_retry_2();
			NullCheck(L_17);
			L_17->set_retry_2(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_19 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_19);
			Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_20 = L_19->get_read_3();
			int64_t L_21 = __this->get_len_1();
			NullCheck(L_20);
			Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39(L_20, L_21, /*hidden argument*/Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
			goto IL_0163;
		}

IL_008d:
		{
			int32_t L_22 = V_0;
			if (!L_22)
			{
				goto IL_009f;
			}
		}

IL_0090:
		{
			int32_t L_23 = V_0;
			int64_t L_24 = __this->get_len_1();
			G_B11_0 = ((((int32_t)((((int64_t)((int64_t)((int64_t)L_23))) == ((int64_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_00a0;
		}

IL_009f:
		{
			G_B11_0 = 0;
		}

IL_00a0:
		{
			V_2 = (bool)G_B11_0;
			bool L_25 = V_2;
			if (L_25)
			{
				goto IL_00ff;
			}
		}

IL_00a5:
		{
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_26 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_26);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_27 = L_26->get_completed_6();
			V_2 = (bool)((((RuntimeObject*)(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)L_27) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_28 = V_2;
			if (L_28)
			{
				goto IL_00ec;
			}
		}

IL_00b8:
		{
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_29 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_29);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_30 = L_29->get_dest_0();
			NullCheck(L_30);
			VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_30);
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_31 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_31);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_32 = L_31->get_completed_6();
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_33 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_33);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_34 = L_33->get_dest_0();
			NullCheck(L_34);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35;
			L_35 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_34);
			NullCheck(L_32);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_32, L_35, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_00ec:
		{
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_36 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_36);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_37 = L_36->get_dest_0();
			NullCheck(L_37);
			Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_37, /*hidden argument*/NULL);
			goto IL_0163;
		}

IL_00ff:
		{
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_38 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_38);
			L_38->set_retry_2(0);
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_39 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_39);
			Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_40 = L_39->get_read_3();
			int64_t L_41 = __this->get_len_1();
			int32_t L_42 = V_0;
			NullCheck(L_40);
			Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39(L_40, ((int64_t)il2cpp_codegen_subtract((int64_t)L_41, (int64_t)((int64_t)((int64_t)L_42)))), /*hidden argument*/Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
			goto IL_0162;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0128;
		}
		throw e;
	}

CATCH_0128:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_43 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_43);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_44 = L_43->get_dest_0();
			NullCheck(L_44);
			Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_44, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_45 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_45);
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_46 = L_45->get_error_7();
			V_2 = (bool)((((RuntimeObject*)(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)L_46) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_47 = V_2;
			if (L_47)
			{
				goto IL_015f;
			}
		}

IL_014d:
		{
			U3CU3Ec__DisplayClassd_t46D9BBC8A6A1BCE3777B4526B35801A5BA69ECE7 * L_48 = __this->get_CSU24U3CU3E8__localse_0();
			NullCheck(L_48);
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_49 = L_48->get_error_7();
			Exception_t * L_50 = V_1;
			NullCheck(L_49);
			Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C(L_49, L_50, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var)));
		}

IL_015f:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0162;
		}
	} // end catch (depth: 1)

IL_0162:
	{
	}

IL_0163:
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass2/<>c__DisplayClass4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4__ctor_m082362E64F72DB2F6B9E0E7B5667D75498A3311B (U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass2/<>c__DisplayClass4::<dump>b__1(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_U3CdumpU3Eb__1_m1AADBDCCBA32EDB90AAB19F898213870876C1221 (U3CU3Ec__DisplayClass4_t3113536F920C27840A5F6DA14F4D0C4065BD179A * __this, String_t* ___arg10, String_t* ___arg21, String_t* ___arg32, String_t* ___arg43, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	int64_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * L_0 = __this->get_CSU24U3CU3E8__locals3_0();
		NullCheck(L_0);
		StringBuilder_t * L_1 = L_0->get_output_1();
		U3CU3Ec__DisplayClass2_t5AC4B19A20F9558C8162F4F2241C5FEBE93258BA * L_2 = __this->get_CSU24U3CU3E8__locals3_0();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_lineFmt_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_4;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = V_0;
		int64_t L_6 = __this->get_lineCnt_1();
		int64_t L_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)((int64_t)((int64_t)1))));
		V_1 = L_7;
		__this->set_lineCnt_1(L_7);
		int64_t L_8 = V_1;
		int64_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_10);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_0;
		String_t* L_12 = ___arg10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_0;
		String_t* L_14 = ___arg21;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_0;
		String_t* L_16 = ___arg32;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = V_0;
		String_t* L_18 = ___arg43;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = V_0;
		NullCheck(L_1);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(L_1, L_3, L_19, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
