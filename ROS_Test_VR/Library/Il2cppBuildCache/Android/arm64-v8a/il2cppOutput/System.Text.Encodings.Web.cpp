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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Pinnable`1<System.Byte>
struct Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110;
// System.Pinnable`1<System.Char>
struct Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C;
// System.Pinnable`1<System.UInt32>
struct Pinnable_1_t4E40323FD6DE85A9C83E29C1A0CFB7EFDE2B1424;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Text.Unicode.UnicodeRange[]
struct UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.Encodings.Web.DefaultHtmlEncoder
struct DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73;
// System.Text.Encodings.Web.DefaultJavaScriptEncoder
struct DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tF9216AD110260C92ADC6FBB5182F91F5AEDE02E6;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Text.Encodings.Web.HtmlEncoder
struct HtmlEncoder_tAFE8FC9473B3A4CB07247A859E897073785624A3;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tAA14F9A2061B0FEACD851D992D6468E54E64C0F1;
// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_tE173755410094288661D4C65215A7C8607C46ED5;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.Encodings.Web.TextEncoder
struct TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7;
// System.Text.Encodings.Web.TextEncoderSettings
struct TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA;
// System.Type
struct Type_t;
// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15;
// System.Text.Unicode.UnicodeRange
struct UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPrivateImplementationDetailsU3E_tDEF1328605117E6D1E250D3B89F309127B0B94BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRanges_t4847C03484F8FC64902385275DC7357E777F6F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDEF1328605117E6D1E250D3B89F309127B0B94BE____B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09EAD6A50C87B14995000A914300979F01096C97;
IL2CPP_EXTERN_C String_t* _stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4FC0613DB074A9C5DAB592FE3F86B3EDD439F7E5;
IL2CPP_EXTERN_C String_t* _stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118;
IL2CPP_EXTERN_C String_t* _stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2;
IL2CPP_EXTERN_C String_t* _stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E;
IL2CPP_EXTERN_C String_t* _stringLiteralA7724F58887AE658863220F8D9138F5AC5532B2C;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralCDB258E32AF5134A2B31FE4D1EE6C0E30C9B5E29;
IL2CPP_EXTERN_C String_t* _stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8;
IL2CPP_EXTERN_C String_t* _stringLiteralE3D7E554C2FD3D52D9690E3D5BB7B7321C3FA52B;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C const RuntimeMethod* AllowedCharactersBitmap__ctor_mF3DD6C06A3F1E58380A347C91EC5176F536A93C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultHtmlEncoder_TryEncodeUnicodeScalar_mDCFAD2924D36EF21F11EF76F6974405D6E907CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultHtmlEncoder__ctor_m5861A583A09759D968AC9476DB0EDC1BD602F2EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultJavaScriptEncoder_FindFirstCharacterToEncode_m12E67D4004968C9908D392C2645D8CC63144CB9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultJavaScriptEncoder_TryEncodeUnicodeScalar_m96DB737674CC494573B83328B440C1DFD0A7D9D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultJavaScriptEncoder__ctor_mA3F1E2333EF4733750C89B1218FBE6DED493D283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAAB6228322DAC99EC663AF8EC8F7A9E640455F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9855119A435C11C8E1E288C0CC4FAD02E4CF2824_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m833630665CFD238E8565314AC52CFADD215AB189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mA3E694A8690805F9E6406654FCFEC2DAA17C0D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m9E84B12A700AF06C8799D688EDE83C1BEE4381E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m2197C58C1985A610F59DDC311861DDAA36642E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_m5BB7C3F8AAB56CE5B0E88EC50C24455C10198D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_ToArray_m417BC72E6DBE40B5E87B8F5E8319C570D1560D7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_TryCopyTo_m710444CA077294DBF5F11D94CDEFB195E9BFCDC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_TryCopyTo_m95BD073B73E9D5239BC5A665536D3C06FC9897E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m52E53BB8862F26B1C23ED6BF8DE68F97F9BEFDDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_IsEmpty_m42772AEFB3C5778AC760E95D3D24EDF45179469D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_IsEmpty_m979A3AE3BF7796824619B1FF2DA0847A0C82433D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Item_m8946B3269543BA8320E2637F18B4650D0611AE14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_m2FE6132AB7EC7629BEAB9302201118BDD12912C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_m6A6064DE553AEA08017468938076DDB19712E2AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_GetPinnableReference_mF0F32BAB71A38A2EBC9832D4E382649180760C03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_IsEmpty_mDB67D262DE62F89A2C557062CE73384C8E8921D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m102A7AD9B8F41CC1099A041EE9CA4EB824471429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings_AllowRange_mF65E74D608E98B9E1F5839CAA552F7D333470C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings_AllowRanges_m7BB39186432D98EBF4CAD73EFD07FB5A86B45480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings__ctor_mE935C030DD513103150FD00B24043252B1DB7687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnicodeRange_Create_mF57560525688BC0FE724E1200443EE7DB3DFDCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnicodeRange__ctor_m8FEA703296C54314A0A2DF880B80CADDDCDD1B3F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC5CAB604454936570F00362FB3C20B0C5C682B94 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Byte>
struct EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333_StaticFields, ___Value_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Value_0() const { return ___Value_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Pinnable`1<System.Byte>
struct Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110  : public RuntimeObject
{
public:
	// T System.Pinnable`1::Data
	uint8_t ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110, ___Data_0)); }
	inline uint8_t get_Data_0() const { return ___Data_0; }
	inline uint8_t* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(uint8_t value)
	{
		___Data_0 = value;
	}
};


// System.Pinnable`1<System.UInt32>
struct Pinnable_1_t4E40323FD6DE85A9C83E29C1A0CFB7EFDE2B1424  : public RuntimeObject
{
public:
	// T System.Pinnable`1::Data
	uint32_t ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Pinnable_1_t4E40323FD6DE85A9C83E29C1A0CFB7EFDE2B1424, ___Data_0)); }
	inline uint32_t get_Data_0() const { return ___Data_0; }
	inline uint32_t* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(uint32_t value)
	{
		___Data_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.BitConverter
struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Text.Encodings.Web.HexUtil
struct HexUtil_tDC1BDC487C4B59549323F2EF75D3998358BFD2A5  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// System.Text.Encodings.Web.TextEncoder
struct TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7  : public RuntimeObject
{
public:
	// System.Byte[][] System.Text.Encodings.Web.TextEncoder::_asciiEscape
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____asciiEscape_0;

public:
	inline static int32_t get_offset_of__asciiEscape_0() { return static_cast<int32_t>(offsetof(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7, ____asciiEscape_0)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__asciiEscape_0() const { return ____asciiEscape_0; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__asciiEscape_0() { return &____asciiEscape_0; }
	inline void set__asciiEscape_0(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____asciiEscape_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asciiEscape_0), (void*)value);
	}
};

struct TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_StaticFields
{
public:
	// System.Byte[] System.Text.Encodings.Web.TextEncoder::s_noEscape
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_noEscape_1;

public:
	inline static int32_t get_offset_of_s_noEscape_1() { return static_cast<int32_t>(offsetof(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_StaticFields, ___s_noEscape_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_noEscape_1() const { return ___s_noEscape_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_noEscape_1() { return &___s_noEscape_1; }
	inline void set_s_noEscape_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_noEscape_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_noEscape_1), (void*)value);
	}
};


// System.Text.Unicode.UnicodeHelpers
struct UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860  : public RuntimeObject
{
public:

public:
};

struct UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_StaticFields
{
public:
	// System.UInt32[] System.Text.Unicode.UnicodeHelpers::_definedCharacterBitmapBigEndian
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____definedCharacterBitmapBigEndian_0;

public:
	inline static int32_t get_offset_of__definedCharacterBitmapBigEndian_0() { return static_cast<int32_t>(offsetof(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_StaticFields, ____definedCharacterBitmapBigEndian_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__definedCharacterBitmapBigEndian_0() const { return ____definedCharacterBitmapBigEndian_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__definedCharacterBitmapBigEndian_0() { return &____definedCharacterBitmapBigEndian_0; }
	inline void set__definedCharacterBitmapBigEndian_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____definedCharacterBitmapBigEndian_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____definedCharacterBitmapBigEndian_0), (void*)value);
	}
};


// System.Text.Unicode.UnicodeRange
struct UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Unicode.UnicodeRange::<FirstCodePoint>k__BackingField
	int32_t ___U3CFirstCodePointU3Ek__BackingField_0;
	// System.Int32 System.Text.Unicode.UnicodeRange::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CFirstCodePointU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E, ___U3CFirstCodePointU3Ek__BackingField_0)); }
	inline int32_t get_U3CFirstCodePointU3Ek__BackingField_0() const { return ___U3CFirstCodePointU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CFirstCodePointU3Ek__BackingField_0() { return &___U3CFirstCodePointU3Ek__BackingField_0; }
	inline void set_U3CFirstCodePointU3Ek__BackingField_0(int32_t value)
	{
		___U3CFirstCodePointU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E, ___U3CLengthU3Ek__BackingField_1)); }
	inline int32_t get_U3CLengthU3Ek__BackingField_1() const { return ___U3CLengthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLengthU3Ek__BackingField_1() { return &___U3CLengthU3Ek__BackingField_1; }
	inline void set_U3CLengthU3Ek__BackingField_1(int32_t value)
	{
		___U3CLengthU3Ek__BackingField_1 = value;
	}
};


// System.Text.Unicode.UnicodeRanges
struct UnicodeRanges_t4847C03484F8FC64902385275DC7357E777F6F1F  : public RuntimeObject
{
public:

public:
};

struct UnicodeRanges_t4847C03484F8FC64902385275DC7357E777F6F1F_StaticFields
{
public:
	// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::_u0000
	UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * ____u0000_0;

public:
	inline static int32_t get_offset_of__u0000_0() { return static_cast<int32_t>(offsetof(UnicodeRanges_t4847C03484F8FC64902385275DC7357E777F6F1F_StaticFields, ____u0000_0)); }
	inline UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * get__u0000_0() const { return ____u0000_0; }
	inline UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E ** get_address_of__u0000_0() { return &____u0000_0; }
	inline void set__u0000_0(UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * value)
	{
		____u0000_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____u0000_0), (void*)value);
	}
};


// System.Text.UnicodeUtility
struct UnicodeUtility_t817443493E52C451BD47D87CF794DB21C2C8E0B2  : public RuntimeObject
{
public:

public:
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

// System.Nullable`1<System.Char>
struct Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 
{
public:
	// T System.Nullable`1::value
	Il2CppChar ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95, ___value_0)); }
	inline Il2CppChar get_value_0() const { return ___value_0; }
	inline Il2CppChar* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Il2CppChar value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 
{
public:
	// System.UInt32[] System.Text.Internal.AllowedCharactersBitmap::_allowedCharacters
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____allowedCharacters_0;

public:
	inline static int32_t get_offset_of__allowedCharacters_0() { return static_cast<int32_t>(offsetof(AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32, ____allowedCharacters_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__allowedCharacters_0() const { return ____allowedCharacters_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__allowedCharacters_0() { return &____allowedCharacters_0; }
	inline void set__allowedCharacters_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____allowedCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allowedCharacters_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____allowedCharacters_0;
};
// Native definition for COM marshalling of System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____allowedCharacters_0;
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


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tF9216AD110260C92ADC6FBB5182F91F5AEDE02E6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

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

// System.Text.Encodings.Web.HtmlEncoder
struct HtmlEncoder_tAFE8FC9473B3A4CB07247A859E897073785624A3  : public TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7
{
public:

public:
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tAA14F9A2061B0FEACD851D992D6468E54E64C0F1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_tE173755410094288661D4C65215A7C8607C46ED5  : public TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7
{
public:

public:
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192
struct __StaticArrayInitTypeSizeU3D8192_t2D478B513D602F116F23C411245375A225AAECF7 
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
		uint8_t __StaticArrayInitTypeSizeU3D8192_t2D478B513D602F116F23C411245375A225AAECF7__padding[8192];
	};

public:
};


// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 
{
public:
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726, ____pinnable_0)); }
	inline Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 
{
public:
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3, ____pinnable_0)); }
	inline Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.ReadOnlySpan`1<System.UInt32>
struct ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8 
{
public:
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_t4E40323FD6DE85A9C83E29C1A0CFB7EFDE2B1424 * ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8, ____pinnable_0)); }
	inline Pinnable_1_t4E40323FD6DE85A9C83E29C1A0CFB7EFDE2B1424 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_t4E40323FD6DE85A9C83E29C1A0CFB7EFDE2B1424 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_t4E40323FD6DE85A9C83E29C1A0CFB7EFDE2B1424 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Span`1<System.Byte>
struct Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 
{
public:
	// System.Pinnable`1<T> System.Span`1::_pinnable
	Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ____pinnable_0;
	// System.IntPtr System.Span`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.Span`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83, ____pinnable_0)); }
	inline Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Span`1<System.Char>
struct Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D 
{
public:
	// System.Pinnable`1<T> System.Span`1::_pinnable
	Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * ____pinnable_0;
	// System.IntPtr System.Span`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.Span`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D, ____pinnable_0)); }
	inline Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDEF1328605117E6D1E250D3B89F309127B0B94BE  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tDEF1328605117E6D1E250D3B89F309127B0B94BE_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192 <PrivateImplementationDetails>::B834DC34C55D9E54905161E0ED4AF27E7F1C49AF
	__StaticArrayInitTypeSizeU3D8192_t2D478B513D602F116F23C411245375A225AAECF7  ___B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0;

public:
	inline static int32_t get_offset_of_B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDEF1328605117E6D1E250D3B89F309127B0B94BE_StaticFields, ___B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0)); }
	inline __StaticArrayInitTypeSizeU3D8192_t2D478B513D602F116F23C411245375A225AAECF7  get_B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0() const { return ___B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0; }
	inline __StaticArrayInitTypeSizeU3D8192_t2D478B513D602F116F23C411245375A225AAECF7 * get_address_of_B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0() { return &___B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0; }
	inline void set_B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0(__StaticArrayInitTypeSizeU3D8192_t2D478B513D602F116F23C411245375A225AAECF7  value)
	{
		___B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.Encodings.Web.DefaultHtmlEncoder
struct DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73  : public HtmlEncoder_tAFE8FC9473B3A4CB07247A859E897073785624A3
{
public:
	// System.Text.Internal.AllowedCharactersBitmap System.Text.Encodings.Web.DefaultHtmlEncoder::_allowedCharacters
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  ____allowedCharacters_2;

public:
	inline static int32_t get_offset_of__allowedCharacters_2() { return static_cast<int32_t>(offsetof(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73, ____allowedCharacters_2)); }
	inline AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  get__allowedCharacters_2() const { return ____allowedCharacters_2; }
	inline AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * get_address_of__allowedCharacters_2() { return &____allowedCharacters_2; }
	inline void set__allowedCharacters_2(AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  value)
	{
		____allowedCharacters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____allowedCharacters_2))->____allowedCharacters_0), (void*)NULL);
	}
};

struct DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields
{
public:
	// System.Text.Encodings.Web.DefaultHtmlEncoder System.Text.Encodings.Web.DefaultHtmlEncoder::Singleton
	DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73 * ___Singleton_3;
	// System.Char[] System.Text.Encodings.Web.DefaultHtmlEncoder::s_quote
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_quote_4;
	// System.Char[] System.Text.Encodings.Web.DefaultHtmlEncoder::s_ampersand
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_ampersand_5;
	// System.Char[] System.Text.Encodings.Web.DefaultHtmlEncoder::s_lessthan
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_lessthan_6;
	// System.Char[] System.Text.Encodings.Web.DefaultHtmlEncoder::s_greaterthan
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_greaterthan_7;

public:
	inline static int32_t get_offset_of_Singleton_3() { return static_cast<int32_t>(offsetof(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields, ___Singleton_3)); }
	inline DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73 * get_Singleton_3() const { return ___Singleton_3; }
	inline DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73 ** get_address_of_Singleton_3() { return &___Singleton_3; }
	inline void set_Singleton_3(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73 * value)
	{
		___Singleton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Singleton_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_quote_4() { return static_cast<int32_t>(offsetof(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields, ___s_quote_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_quote_4() const { return ___s_quote_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_quote_4() { return &___s_quote_4; }
	inline void set_s_quote_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_quote_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_quote_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_ampersand_5() { return static_cast<int32_t>(offsetof(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields, ___s_ampersand_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_ampersand_5() const { return ___s_ampersand_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_ampersand_5() { return &___s_ampersand_5; }
	inline void set_s_ampersand_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_ampersand_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ampersand_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_lessthan_6() { return static_cast<int32_t>(offsetof(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields, ___s_lessthan_6)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_lessthan_6() const { return ___s_lessthan_6; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_lessthan_6() { return &___s_lessthan_6; }
	inline void set_s_lessthan_6(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_lessthan_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lessthan_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_greaterthan_7() { return static_cast<int32_t>(offsetof(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields, ___s_greaterthan_7)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_greaterthan_7() const { return ___s_greaterthan_7; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_greaterthan_7() { return &___s_greaterthan_7; }
	inline void set_s_greaterthan_7(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_greaterthan_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_greaterthan_7), (void*)value);
	}
};


// System.Text.Encodings.Web.DefaultJavaScriptEncoder
struct DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C  : public JavaScriptEncoder_tE173755410094288661D4C65215A7C8607C46ED5
{
public:
	// System.Text.Internal.AllowedCharactersBitmap System.Text.Encodings.Web.DefaultJavaScriptEncoder::_allowedCharacters
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  ____allowedCharacters_2;

public:
	inline static int32_t get_offset_of__allowedCharacters_2() { return static_cast<int32_t>(offsetof(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C, ____allowedCharacters_2)); }
	inline AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  get__allowedCharacters_2() const { return ____allowedCharacters_2; }
	inline AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * get_address_of__allowedCharacters_2() { return &____allowedCharacters_2; }
	inline void set__allowedCharacters_2(AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  value)
	{
		____allowedCharacters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____allowedCharacters_2))->____allowedCharacters_0), (void*)NULL);
	}
};

struct DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields
{
public:
	// System.Text.Encodings.Web.DefaultJavaScriptEncoder System.Text.Encodings.Web.DefaultJavaScriptEncoder::Singleton
	DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C * ___Singleton_3;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_b
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_b_4;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_t
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_t_5;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_n
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_n_6;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_f
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_f_7;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_r
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_r_8;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_back
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_back_9;

public:
	inline static int32_t get_offset_of_Singleton_3() { return static_cast<int32_t>(offsetof(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields, ___Singleton_3)); }
	inline DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C * get_Singleton_3() const { return ___Singleton_3; }
	inline DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C ** get_address_of_Singleton_3() { return &___Singleton_3; }
	inline void set_Singleton_3(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C * value)
	{
		___Singleton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Singleton_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_b_4() { return static_cast<int32_t>(offsetof(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields, ___s_b_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_b_4() const { return ___s_b_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_b_4() { return &___s_b_4; }
	inline void set_s_b_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_b_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_b_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_t_5() { return static_cast<int32_t>(offsetof(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields, ___s_t_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_t_5() const { return ___s_t_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_t_5() { return &___s_t_5; }
	inline void set_s_t_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_t_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_t_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_n_6() { return static_cast<int32_t>(offsetof(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields, ___s_n_6)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_n_6() const { return ___s_n_6; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_n_6() { return &___s_n_6; }
	inline void set_s_n_6(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_n_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_n_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_f_7() { return static_cast<int32_t>(offsetof(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields, ___s_f_7)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_f_7() const { return ___s_f_7; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_f_7() { return &___s_f_7; }
	inline void set_s_f_7(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_f_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_f_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_r_8() { return static_cast<int32_t>(offsetof(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields, ___s_r_8)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_r_8() const { return ___s_r_8; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_r_8() { return &___s_r_8; }
	inline void set_s_r_8(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_r_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_r_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_back_9() { return static_cast<int32_t>(offsetof(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields, ___s_back_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_back_9() const { return ___s_back_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_back_9() { return &___s_back_9; }
	inline void set_s_back_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_back_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_back_9), (void*)value);
	}
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

// System.ExceptionArgument
struct ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Buffers.OperationStatus
struct OperationStatus_tA6C99AAB10F117093813373E98AA420F44108A47 
{
public:
	// System.Int32 System.Buffers.OperationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperationStatus_tA6C99AAB10F117093813373E98AA420F44108A47, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Text.Encodings.Web.TextEncoderSettings
struct TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA  : public RuntimeObject
{
public:
	// System.Text.Internal.AllowedCharactersBitmap System.Text.Encodings.Web.TextEncoderSettings::_allowedCharactersBitmap
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  ____allowedCharactersBitmap_0;

public:
	inline static int32_t get_offset_of__allowedCharactersBitmap_0() { return static_cast<int32_t>(offsetof(TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA, ____allowedCharactersBitmap_0)); }
	inline AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  get__allowedCharactersBitmap_0() const { return ____allowedCharactersBitmap_0; }
	inline AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * get_address_of__allowedCharactersBitmap_0() { return &____allowedCharactersBitmap_0; }
	inline void set__allowedCharactersBitmap_0(AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  value)
	{
		____allowedCharactersBitmap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____allowedCharactersBitmap_0))->____allowedCharacters_0), (void*)NULL);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
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
// System.Text.Unicode.UnicodeRange[]
struct UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * m_Items[1];

public:
	inline UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * value)
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
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* m_Items[1];

public:
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.UInt32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t* ReadOnlySpan_1_get_Item_m8946B3269543BA8320E2637F18B4650D0611AE14_gshared_inline (ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Char>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mA3E694A8690805F9E6406654FCFEC2DAA17C0D28_gshared (Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, const RuntimeMethod* method);
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, const RuntimeMethod* method);
// !0& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_gshared (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, const RuntimeMethod* method);
// System.Span`1<!0> System.Span`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, int32_t ___start0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.Byte>::op_Implicit(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_op_Implicit_m2FE6132AB7EC7629BEAB9302201118BDD12912C5_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method);
// System.Boolean System.ReadOnlySpan`1<System.Byte>::TryCopyTo(System.Span`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m95BD073B73E9D5239BC5A665536D3C06FC9897E6_gshared (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination0, const RuntimeMethod* method);
// System.Boolean System.ReadOnlySpan`1<System.Byte>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m42772AEFB3C5778AC760E95D3D24EDF45179469D_gshared (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m52E53BB8862F26B1C23ED6BF8DE68F97F9BEFDDF_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method);
// !0[] System.ReadOnlySpan`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ReadOnlySpan_1_ToArray_m417BC72E6DBE40B5E87B8F5E8319C570D1560D7B_gshared (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, const RuntimeMethod* method);
// !0& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Char>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_GetPinnableReference_m5BB7C3F8AAB56CE5B0E88EC50C24455C10198D0A_gshared (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 * __this, const RuntimeMethod* method);
// System.Boolean System.ReadOnlySpan`1<System.Char>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m979A3AE3BF7796824619B1FF2DA0847A0C82433D_gshared (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 * __this, const RuntimeMethod* method);
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_gshared_inline (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 * __this, const RuntimeMethod* method);
// System.Boolean System.ReadOnlySpan`1<System.Char>::TryCopyTo(System.Span`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m710444CA077294DBF5F11D94CDEFB195E9BFCDC7_gshared (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 * __this, Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D  ___destination0, const RuntimeMethod* method);
// System.Boolean System.Span`1<System.Char>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_get_IsEmpty_mDB67D262DE62F89A2C557062CE73384C8E8921D6_gshared (Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D * __this, const RuntimeMethod* method);
// !0& System.Span`1<System.Char>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_GetPinnableReference_mF0F32BAB71A38A2EBC9832D4E382649180760C03_gshared (Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D * __this, const RuntimeMethod* method);
// System.Int32 System.Span`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m102A7AD9B8F41CC1099A041EE9CA4EB824471429_gshared_inline (Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Byte>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_gshared_inline (const RuntimeMethod* method);
// System.ReadOnlySpan`1<!!1> System.Runtime.InteropServices.MemoryMarshal::Cast<System.Byte,System.UInt32>(System.ReadOnlySpan`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAAB6228322DAC99EC663AF8EC8F7A9E640455F16_gshared (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___span0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.UInt32>::op_Implicit(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  ReadOnlySpan_1_op_Implicit_m6A6064DE553AEA08017468938076DDB19712E2AC_gshared (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___array0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Char>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9E84B12A700AF06C8799D688EDE83C1BEE4381E3_gshared_inline (Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Char>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Nullable_1_get_Value_m2197C58C1985A610F59DDC311861DDAA36642E2A_gshared (Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 * __this, const RuntimeMethod* method);
// T System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt32>(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m833630665CFD238E8565314AC52CFADD215AB189_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFF8F544A7E3798F8239A0FEB4D32301758CBFCCA_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method);
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9855119A435C11C8E1E288C0CC4FAD02E4CF2824_gshared (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___span0, const RuntimeMethod* method);

// System.Void System.Text.Internal.AllowedCharactersBitmap::.ctor(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap__ctor_mF3DD6C06A3F1E58380A347C91EC5176F536A93C6 (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___allowedCharacters0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Text.Internal.AllowedCharactersBitmap::AllowCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_AllowCharacter_mFDB18DA4FB0BCC807F7981A820B0DA8AD0D860F4 (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, Il2CppChar ___character0, const RuntimeMethod* method);
// System.Void System.Text.Internal.AllowedCharactersBitmap::ForbidCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79 (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, Il2CppChar ___character0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<System.UInt32> System.Text.Unicode.UnicodeHelpers::GetDefinedCharacterBitmap()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  UnicodeHelpers_GetDefinedCharacterBitmap_mF2614CE8402C3AD0D597B2467AA10C1187EECBB2_inline (const RuntimeMethod* method);
// !0& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.UInt32>::get_Item(System.Int32)
inline uint32_t* ReadOnlySpan_1_get_Item_m8946B3269543BA8320E2637F18B4650D0611AE14_inline (ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint32_t* (*) (ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8 *, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_m8946B3269543BA8320E2637F18B4650D0611AE14_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Text.Internal.AllowedCharactersBitmap::ForbidUndefinedCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_ForbidUndefinedCharacters_mB80D5726324E5C13F2165322820799C87642316A (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, const RuntimeMethod* method);
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C (RuntimeArray * __this, const RuntimeMethod* method);
// System.Text.Internal.AllowedCharactersBitmap System.Text.Internal.AllowedCharactersBitmap::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  AllowedCharactersBitmap_Clone_mD443E91B80B3A74BAD5BB1ADFD17D18A1EB5BCCF (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.Internal.AllowedCharactersBitmap::IsCharacterAllowed(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllowedCharactersBitmap_IsCharacterAllowed_m983FAA035CC1BE68D78EBDF9169EFD0BE2A9C14A (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, Il2CppChar ___character0, const RuntimeMethod* method);
// System.Boolean System.Text.Internal.AllowedCharactersBitmap::IsUnicodeScalarAllowed(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedCharactersBitmap_IsUnicodeScalarAllowed_mBBF4654B17B5B9B894C393A16E6FB7D08EF84E34_inline (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, int32_t ___unicodeScalar0, const RuntimeMethod* method);
// System.Int32 System.Text.Internal.AllowedCharactersBitmap::FindFirstCharacterToEncode(System.Char*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AllowedCharactersBitmap_FindFirstCharacterToEncode_m3F245BEF781348852865BB264D940B503D420EDB_inline (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method);
// System.Void System.Text.Encodings.Web.HtmlEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlEncoder__ctor_m161CFB9A325F7D321947F105E3E470ED5EAE5D6B (HtmlEncoder_tAFE8FC9473B3A4CB07247A859E897073785624A3 * __this, const RuntimeMethod* method);
// System.Text.Internal.AllowedCharactersBitmap System.Text.Encodings.Web.TextEncoderSettings::GetAllowedCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  TextEncoderSettings_GetAllowedCharacters_m7326CF417D59BC1B4AC1CB65C94075AEF9D0D508 (TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * __this, const RuntimeMethod* method);
// System.Void System.Text.Encodings.Web.DefaultHtmlEncoder::ForbidHtmlCharacters(System.Text.Internal.AllowedCharactersBitmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultHtmlEncoder_ForbidHtmlCharacters_mB07F4EFD3A49B8A6A8CD72D745676142E0941404 (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  ___allowedCharacters0, const RuntimeMethod* method);
// System.Boolean System.Text.Unicode.UnicodeHelpers::IsSupplementaryCodePoint(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeHelpers_IsSupplementaryCodePoint_m81291E409B6A7CBB820B0076BA9E76A3796FAD24_inline (int32_t ___scalar0, const RuntimeMethod* method);
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryWriteScalarAsChar(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextEncoder_TryWriteScalarAsChar_m063A70791C8578683389989AC4A245809D0A30FD_inline (int32_t ___unicodeScalar0, Il2CppChar* ___destination1, int32_t ___destinationLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method);
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryCopyCharacters(System.Char[],System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryCopyCharacters_mF10274C7421F58B9BB0B2F3FEEE4B68A17876083 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___source0, Il2CppChar* ___destination1, int32_t ___destinationLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method);
// System.Boolean System.Text.Encodings.Web.DefaultHtmlEncoder::TryWriteEncodedScalarAsNumericEntity(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultHtmlEncoder_TryWriteEncodedScalarAsNumericEntity_m4FE6AA1B3A6AF0CAA631E48AFB9A3392671BC794 (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___bufferLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method);
// System.Char System.Text.Encodings.Web.HexUtil::Int32LsbToHexDigit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar HexUtil_Int32LsbToHexDigit_mB8E80ED63D8443ADFEB9BC62D4ED8CF50F4657DF_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::get_BasicLatin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * UnicodeRanges_get_BasicLatin_mD27B8D9C7221DA81F2724B7C9230CCF882D4E02E (const RuntimeMethod* method);
// System.Void System.Text.Encodings.Web.TextEncoderSettings::.ctor(System.Text.Unicode.UnicodeRange[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings__ctor_mE935C030DD513103150FD00B24043252B1DB7687 (TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * __this, UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* ___allowedRanges0, const RuntimeMethod* method);
// System.Void System.Text.Encodings.Web.DefaultHtmlEncoder::.ctor(System.Text.Encodings.Web.TextEncoderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultHtmlEncoder__ctor_m5861A583A09759D968AC9476DB0EDC1BD602F2EB (DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73 * __this, TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * ___settings0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Void System.Text.Encodings.Web.JavaScriptEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptEncoder__ctor_m694F65300FE2A4C4FC014E43DDEF0F46FF1D617E (JavaScriptEncoder_tE173755410094288661D4C65215A7C8607C46ED5 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoder::TryWriteEncodedScalarAsNumericEntity(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoder_TryWriteEncodedScalarAsNumericEntity_m485EDB1CA53D0B4CE0F7ABED7D9B3273F0D848B2 (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___length2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method);
// System.Void System.Text.Unicode.UnicodeHelpers::GetUtf16SurrogatePairFromAstralScalarValue(System.Int32,System.Char&,System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_m24F8FC28935ACED6DD83D08495D80181FC045030 (int32_t ___scalar0, Il2CppChar* ___highSurrogate1, Il2CppChar* ___lowSurrogate2, const RuntimeMethod* method);
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoder::TryWriteEncodedSingleCharacter(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoder_TryWriteEncodedSingleCharacter_m148681724C44098E51DF1D9769B192643BF4D57C (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___length2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method);
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoder::.ctor(System.Text.Encodings.Web.TextEncoderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__ctor_mA3F1E2333EF4733750C89B1218FBE6DED493D283 (DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C * __this, TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * ___filter0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Text.Encodings.Web.TextEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder__ctor_m44443D2D8E5E0DE1A08CA571F175F89BE4C84800 (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * __this, const RuntimeMethod* method);
// System.Void System.Buffer::MemoryCopy(System.Void*,System.Void*,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_MemoryCopy_mE01AC047B4205B692320FE13621CC28F6900E5E1 (void* ___source0, void* ___destination1, int64_t ___destinationSizeInBytes2, int64_t ___sourceBytesToCopy3, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Char>::.ctor(!0)
inline void Nullable_1__ctor_mA3E694A8690805F9E6406654FCFEC2DAA17C0D28 (Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 *, Il2CppChar, const RuntimeMethod*))Nullable_1__ctor_mA3E694A8690805F9E6406654FCFEC2DAA17C0D28_gshared)(__this, ___value0, method);
}
// System.Int32 System.Text.Unicode.UnicodeHelpers::GetScalarValueFromUtf16(System.Char,System.Nullable`1<System.Char>,System.Boolean&,System.Boolean&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_GetScalarValueFromUtf16_m7CE3698BFFC5FD0C99E25BD8BDE9DD8315419AB1_inline (Il2CppChar ___first0, Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95  ___second1, bool* ___wasSurrogatePair2, bool* ___needsMoreData3, const RuntimeMethod* method);
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_gshared_inline)(__this, method);
}
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *, const RuntimeMethod*))Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_gshared_inline)(__this, method);
}
// !0& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::get_Item(System.Int32)
inline uint8_t* ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.Text.UnicodeUtility::IsAsciiCodePoint(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_m5F1C9C11917639977FA1A634E3BFF18039D9D91B_inline (uint32_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.Text.Encodings.Web.TextEncoder::GetAsciiEncoding(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* TextEncoder_GetAsciiEncoding_mB89B4D79E87D8BCCAD5B71508B7D871775DF9C4D_inline (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<!0>)
inline void ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 , const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_gshared)(__this, ___destination0, method);
}
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
inline ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_gshared_inline)(__this, ___start0, method);
}
// System.Span`1<!0> System.Span`1<System.Byte>::Slice(System.Int32)
inline Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *, int32_t, const RuntimeMethod*))Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_gshared_inline)(__this, ___start0, method);
}
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.Byte>::op_Implicit(!0[])
inline ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_op_Implicit_m2FE6132AB7EC7629BEAB9302201118BDD12912C5 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_m2FE6132AB7EC7629BEAB9302201118BDD12912C5_gshared)(___array0, method);
}
// System.Boolean System.ReadOnlySpan`1<System.Byte>::TryCopyTo(System.Span`1<!0>)
inline bool ReadOnlySpan_1_TryCopyTo_m95BD073B73E9D5239BC5A665536D3C06FC9897E6 (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination0, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 , const RuntimeMethod*))ReadOnlySpan_1_TryCopyTo_m95BD073B73E9D5239BC5A665536D3C06FC9897E6_gshared)(__this, ___destination0, method);
}
// System.Buffers.OperationStatus System.Text.Unicode.UnicodeHelpers::DecodeScalarValueFromUtf8(System.ReadOnlySpan`1<System.Byte>,System.UInt32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_DecodeScalarValueFromUtf8_mDE1BBD5F544A5FC12417E11907D71541CA1F34AA (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, uint32_t* ___result1, int32_t* ___bytesConsumed2, const RuntimeMethod* method);
// System.Boolean System.ReadOnlySpan`1<System.Byte>::get_IsEmpty()
inline bool ReadOnlySpan_1_get_IsEmpty_m42772AEFB3C5778AC760E95D3D24EDF45179469D (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, const RuntimeMethod*))ReadOnlySpan_1_get_IsEmpty_m42772AEFB3C5778AC760E95D3D24EDF45179469D_gshared)(__this, method);
}
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void ReadOnlySpan_1__ctor_m52E53BB8862F26B1C23ED6BF8DE68F97F9BEFDDF_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m52E53BB8862F26B1C23ED6BF8DE68F97F9BEFDDF_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// !0[] System.ReadOnlySpan`1<System.Byte>::ToArray()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ReadOnlySpan_1_ToArray_m417BC72E6DBE40B5E87B8F5E8319C570D1560D7B (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, const RuntimeMethod*))ReadOnlySpan_1_ToArray_m417BC72E6DBE40B5E87B8F5E8319C570D1560D7B_gshared)(__this, method);
}
// !0& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Char>::GetPinnableReference()
inline Il2CppChar* ReadOnlySpan_1_GetPinnableReference_m5BB7C3F8AAB56CE5B0E88EC50C24455C10198D0A (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 * __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 *, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m5BB7C3F8AAB56CE5B0E88EC50C24455C10198D0A_gshared)(__this, method);
}
// System.Boolean System.ReadOnlySpan`1<System.Char>::get_IsEmpty()
inline bool ReadOnlySpan_1_get_IsEmpty_m979A3AE3BF7796824619B1FF2DA0847A0C82433D (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 *, const RuntimeMethod*))ReadOnlySpan_1_get_IsEmpty_m979A3AE3BF7796824619B1FF2DA0847A0C82433D_gshared)(__this, method);
}
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_inline (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 *, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_gshared_inline)(__this, method);
}
// System.Boolean System.ReadOnlySpan`1<System.Char>::TryCopyTo(System.Span`1<!0>)
inline bool ReadOnlySpan_1_TryCopyTo_m710444CA077294DBF5F11D94CDEFB195E9BFCDC7 (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 * __this, Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D  ___destination0, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 *, Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D , const RuntimeMethod*))ReadOnlySpan_1_TryCopyTo_m710444CA077294DBF5F11D94CDEFB195E9BFCDC7_gshared)(__this, ___destination0, method);
}
// System.Boolean System.Span`1<System.Char>::get_IsEmpty()
inline bool Span_1_get_IsEmpty_mDB67D262DE62F89A2C557062CE73384C8E8921D6 (Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D *, const RuntimeMethod*))Span_1_get_IsEmpty_mDB67D262DE62F89A2C557062CE73384C8E8921D6_gshared)(__this, method);
}
// !0& System.Span`1<System.Char>::GetPinnableReference()
inline Il2CppChar* Span_1_GetPinnableReference_mF0F32BAB71A38A2EBC9832D4E382649180760C03 (Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D * __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D *, const RuntimeMethod*))Span_1_GetPinnableReference_mF0F32BAB71A38A2EBC9832D4E382649180760C03_gshared)(__this, method);
}
// System.Int32 System.Span`1<System.Char>::get_Length()
inline int32_t Span_1_get_Length_m102A7AD9B8F41CC1099A041EE9CA4EB824471429_inline (Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D *, const RuntimeMethod*))Span_1_get_Length_m102A7AD9B8F41CC1099A041EE9CA4EB824471429_gshared_inline)(__this, method);
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeIntoBuffer(System.Char*,System.Int32,System.Char*,System.Int32,System.Int32&,System.Int32&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_EncodeIntoBuffer_mC265CDC53C0F91C880F90549DFCD20B53BDB8477 (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * __this, Il2CppChar* ___buffer0, int32_t ___bufferLength1, Il2CppChar* ___value2, int32_t ___valueLength3, int32_t* ___charsConsumed4, int32_t* ___charsWritten5, int32_t ___firstCharacterToEncode6, bool ___isFinalBlock7, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Byte>()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (const RuntimeMethod*))Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_gshared_inline)(method);
}
// System.Text.Internal.AllowedCharactersBitmap System.Text.Internal.AllowedCharactersBitmap::CreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  AllowedCharactersBitmap_CreateNew_m14169BF831F7B523DD8A9C33E88809F95D5F6C72 (const RuntimeMethod* method);
// System.Int32 System.Text.Unicode.UnicodeRange::get_FirstCodePoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_m11B49A8567F3925B1821CF33A2B608D63D0D3E41_inline (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, const RuntimeMethod* method);
// System.Int32 System.Text.Unicode.UnicodeRange::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_mF07FA37630B3A651B42578F2A5457A0A7EA565FD_inline (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, const RuntimeMethod* method);
// System.ReadOnlySpan`1<System.Byte> System.Text.Unicode.UnicodeHelpers::get_DefinedCharsBitmapSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  UnicodeHelpers_get_DefinedCharsBitmapSpan_m9B4E705E8157319B27641279BD71A6479338C711 (const RuntimeMethod* method);
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReadUInt32LittleEndian(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_mEE46641BC73CAACA64F2952CD791BE96F5DB44F4_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, const RuntimeMethod* method);
// System.Boolean System.Text.UnicodeUtility::IsInRangeInclusive(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_m356E6851FA9CC18A1156863D05810C0DC5DE45CF_inline (uint32_t ___value0, uint32_t ___lowerBound1, uint32_t ___upperBound2, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!!1> System.Runtime.InteropServices.MemoryMarshal::Cast<System.Byte,System.UInt32>(System.ReadOnlySpan`1<!!0>)
inline ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAAB6228322DAC99EC663AF8EC8F7A9E640455F16 (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 , const RuntimeMethod*))MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAAB6228322DAC99EC663AF8EC8F7A9E640455F16_gshared)(___span0, method);
}
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.UInt32>::op_Implicit(!0[])
inline ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  ReadOnlySpan_1_op_Implicit_m6A6064DE553AEA08017468938076DDB19712E2AC (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  (*) (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_m6A6064DE553AEA08017468938076DDB19712E2AC_gshared)(___array0, method);
}
// System.Boolean System.Char::IsSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.Text.Unicode.UnicodeHelpers::GetScalarValueFromUtf16Slow(System.Char,System.Nullable`1<System.Char>,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_GetScalarValueFromUtf16Slow_mF4CC469F6B5CDF1745AD96AD3DFA901A08CEFFE2 (Il2CppChar ___first0, Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95  ___second1, bool* ___wasSurrogatePair2, bool* ___needMoreData3, const RuntimeMethod* method);
// System.Boolean System.Char::IsHighSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsHighSurrogate_m7BECD1C98C902946F069D8936F8A557F1F7DFF01 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Char>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9E84B12A700AF06C8799D688EDE83C1BEE4381E3_inline (Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 *, const RuntimeMethod*))Nullable_1_get_HasValue_m9E84B12A700AF06C8799D688EDE83C1BEE4381E3_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Char>::get_Value()
inline Il2CppChar Nullable_1_get_Value_m2197C58C1985A610F59DDC311861DDAA36642E2A (Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 * __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 *, const RuntimeMethod*))Nullable_1_get_Value_m2197C58C1985A610F59DDC311861DDAA36642E2A_gshared)(__this, method);
}
// System.Boolean System.Char::IsLowSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLowSurrogate_m44FA7AA923FDA925E1D536F3DA0A7E1E049E936E (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.Text.Unicode.UnicodeHelpers::GetScalarValueFromUtf16SurrogatePair(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_GetScalarValueFromUtf16SurrogatePair_mAF28A8A92E4CC9F36CE16141B3CE68E5957666EA (Il2CppChar ___highSurrogate0, Il2CppChar ___lowSurrogate1, const RuntimeMethod* method);
// System.UInt32[] System.Text.Unicode.UnicodeHelpers::CreateDefinedCharacterBitmapMachineEndian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* UnicodeHelpers_CreateDefinedCharacterBitmapMachineEndian_mAAD623D1287FD103187E45A83449C550EF5CDE25 (const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Text.Unicode.UnicodeRange::set_FirstCodePoint(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m137A5051BEF90AF87488EC74807E292B5C56B33D_inline (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Text.Unicode.UnicodeRange::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m6B3F5E3A53101D2623993EDF4F4B84EB724C7D36_inline (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Text.Unicode.UnicodeRange::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange__ctor_m8FEA703296C54314A0A2DF880B80CADDDCDD1B3F (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, int32_t ___firstCodePoint0, int32_t ___length1, const RuntimeMethod* method);
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRange::Create(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * UnicodeRange_Create_mF57560525688BC0FE724E1200443EE7DB3DFDCE8 (Il2CppChar ___firstCharacter0, Il2CppChar ___lastCharacter1, const RuntimeMethod* method);
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::CreateRange(System.Text.Unicode.UnicodeRange&,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * UnicodeRanges_CreateRange_mFCF51562597A3A1DEAAFADE7AFE4B51FB7F8BD1F (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E ** ___range0, Il2CppChar ___first1, Il2CppChar ___last2, const RuntimeMethod* method);
// T System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt32>(System.ReadOnlySpan`1<System.Byte>)
inline uint32_t MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m833630665CFD238E8565314AC52CFADD215AB189_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 , const RuntimeMethod*))MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m833630665CFD238E8565314AC52CFADD215AB189_gshared_inline)(___source0, method);
}
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m7C562C76F215F77432B9600686CB25A54E88CC20_inline (uint32_t ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m4D1EB8558F17DFE372ECF87D9BCAD112A7F5E6BC (const RuntimeMethod* method);
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void Span_1__ctor_mFF8F544A7E3798F8239A0FEB4D32301758CBFCCA_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *, intptr_t, int32_t, const RuntimeMethod*))Span_1__ctor_mFF8F544A7E3798F8239A0FEB4D32301758CBFCCA_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m4A71872D4B069AF36758A61E4CA3FB663B4E8EC4 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method);
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9855119A435C11C8E1E288C0CC4FAD02E4CF2824 (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 , const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9855119A435C11C8E1E288C0CC4FAD02E4CF2824_gshared)(___span0, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Text.Internal.AllowedCharactersBitmap
IL2CPP_EXTERN_C void AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshal_pinvoke(const AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32& unmarshaled, AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshaled_pinvoke& marshaled)
{
	marshaled.____allowedCharacters_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_UI4, unmarshaled.get__allowedCharacters_0());
}
IL2CPP_EXTERN_C void AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshal_pinvoke_back(const AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshaled_pinvoke& marshaled, AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set__allowedCharacters_0((UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_UI4, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, marshaled.____allowedCharacters_0));
}
// Conversion method for clean up from marshalling of: System.Text.Internal.AllowedCharactersBitmap
IL2CPP_EXTERN_C void AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshal_pinvoke_cleanup(AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____allowedCharacters_0);
	marshaled.____allowedCharacters_0 = NULL;
}
// Conversion methods for marshalling of: System.Text.Internal.AllowedCharactersBitmap
IL2CPP_EXTERN_C void AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshal_com(const AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32& unmarshaled, AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshaled_com& marshaled)
{
	marshaled.____allowedCharacters_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_UI4, unmarshaled.get__allowedCharacters_0());
}
IL2CPP_EXTERN_C void AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshal_com_back(const AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshaled_com& marshaled, AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set__allowedCharacters_0((UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_UI4, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, marshaled.____allowedCharacters_0));
}
// Conversion method for clean up from marshalling of: System.Text.Internal.AllowedCharactersBitmap
IL2CPP_EXTERN_C void AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshal_com_cleanup(AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____allowedCharacters_0);
	marshaled.____allowedCharacters_0 = NULL;
}
// System.Text.Internal.AllowedCharactersBitmap System.Text.Internal.AllowedCharactersBitmap::CreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  AllowedCharactersBitmap_CreateNew_m14169BF831F7B523DD8A9C33E88809F95D5F6C72 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AllowedCharactersBitmap__ctor_mF3DD6C06A3F1E58380A347C91EC5176F536A93C6((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.Internal.AllowedCharactersBitmap::.ctor(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap__ctor_mF3DD6C06A3F1E58380A347C91EC5176F536A93C6 (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___allowedCharacters0, const RuntimeMethod* method)
{
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___allowedCharacters0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDB258E32AF5134A2B31FE4D1EE6C0E30C9B5E29)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AllowedCharactersBitmap__ctor_mF3DD6C06A3F1E58380A347C91EC5176F536A93C6_RuntimeMethod_var)));
	}

IL_000e:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = ___allowedCharacters0;
		__this->set__allowedCharacters_0(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedCharactersBitmap__ctor_mF3DD6C06A3F1E58380A347C91EC5176F536A93C6_AdjustorThunk (RuntimeObject * __this, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___allowedCharacters0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * _thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *>(__this + _offset);
	AllowedCharactersBitmap__ctor_mF3DD6C06A3F1E58380A347C91EC5176F536A93C6(_thisAdjusted, ___allowedCharacters0, method);
}
// System.Void System.Text.Internal.AllowedCharactersBitmap::AllowCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_AllowCharacter_mFDB18DA4FB0BCC807F7981A820B0DA8AD0D860F4 (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, Il2CppChar ___character0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Il2CppChar L_0 = ___character0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)((int32_t)L_1>>(int32_t)5));
		int32_t L_2 = V_0;
		V_2 = ((int32_t)((int32_t)L_2&(int32_t)((int32_t)31)));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = __this->get__allowedCharacters_0();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		uint32_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		int32_t L_6 = *((uint32_t*)L_5);
		int32_t L_7 = V_2;
		*((int32_t*)L_5) = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))))));
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedCharactersBitmap_AllowCharacter_mFDB18DA4FB0BCC807F7981A820B0DA8AD0D860F4_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___character0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * _thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *>(__this + _offset);
	AllowedCharactersBitmap_AllowCharacter_mFDB18DA4FB0BCC807F7981A820B0DA8AD0D860F4(_thisAdjusted, ___character0, method);
}
// System.Void System.Text.Internal.AllowedCharactersBitmap::ForbidCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79 (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, Il2CppChar ___character0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Il2CppChar L_0 = ___character0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)((int32_t)L_1>>(int32_t)5));
		int32_t L_2 = V_0;
		V_2 = ((int32_t)((int32_t)L_2&(int32_t)((int32_t)31)));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = __this->get__allowedCharacters_0();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		uint32_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		int32_t L_6 = *((uint32_t*)L_5);
		int32_t L_7 = V_2;
		*((int32_t*)L_5) = (int32_t)((int32_t)((int32_t)L_6&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))))))));
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___character0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * _thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *>(__this + _offset);
	AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79(_thisAdjusted, ___character0, method);
}
// System.Void System.Text.Internal.AllowedCharactersBitmap::ForbidUndefinedCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedCharactersBitmap_ForbidUndefinedCharacters_mB80D5726324E5C13F2165322820799C87642316A (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m8946B3269543BA8320E2637F18B4650D0611AE14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  L_0;
		L_0 = UnicodeHelpers_GetDefinedCharacterBitmap_mF2614CE8402C3AD0D597B2467AA10C1187EECBB2_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0027;
	}

IL_000a:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = __this->get__allowedCharacters_0();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		uint32_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		int32_t L_4 = *((uint32_t*)L_3);
		int32_t L_5 = V_1;
		uint32_t* L_6;
		L_6 = ReadOnlySpan_1_get_Item_m8946B3269543BA8320E2637F18B4650D0611AE14_inline((ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8 *)(&V_0), L_5, /*hidden argument*/ReadOnlySpan_1_get_Item_m8946B3269543BA8320E2637F18B4650D0611AE14_RuntimeMethod_var);
		int32_t L_7 = *((uint32_t*)L_6);
		*((int32_t*)L_3) = (int32_t)((int32_t)((int32_t)L_4&(int32_t)L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0027:
	{
		int32_t L_9 = V_1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = __this->get__allowedCharacters_0();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedCharactersBitmap_ForbidUndefinedCharacters_mB80D5726324E5C13F2165322820799C87642316A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * _thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *>(__this + _offset);
	AllowedCharactersBitmap_ForbidUndefinedCharacters_mB80D5726324E5C13F2165322820799C87642316A(_thisAdjusted, method);
}
// System.Text.Internal.AllowedCharactersBitmap System.Text.Internal.AllowedCharactersBitmap::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  AllowedCharactersBitmap_Clone_mD443E91B80B3A74BAD5BB1ADFD17D18A1EB5BCCF (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = __this->get__allowedCharacters_0();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		RuntimeObject * L_1;
		L_1 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  L_2;
		memset((&L_2), 0, sizeof(L_2));
		AllowedCharactersBitmap__ctor_mF3DD6C06A3F1E58380A347C91EC5176F536A93C6((&L_2), ((UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)Castclass((RuntimeObject*)L_1, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  AllowedCharactersBitmap_Clone_mD443E91B80B3A74BAD5BB1ADFD17D18A1EB5BCCF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * _thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *>(__this + _offset);
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  _returnValue;
	_returnValue = AllowedCharactersBitmap_Clone_mD443E91B80B3A74BAD5BB1ADFD17D18A1EB5BCCF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Text.Internal.AllowedCharactersBitmap::IsCharacterAllowed(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllowedCharactersBitmap_IsCharacterAllowed_m983FAA035CC1BE68D78EBDF9169EFD0BE2A9C14A (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, Il2CppChar ___character0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Il2CppChar L_0 = ___character0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)((int32_t)L_1>>(int32_t)5));
		int32_t L_2 = V_0;
		V_2 = ((int32_t)((int32_t)L_2&(int32_t)((int32_t)31)));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = __this->get__allowedCharacters_0();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_2;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_6>>((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))))&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool AllowedCharactersBitmap_IsCharacterAllowed_m983FAA035CC1BE68D78EBDF9169EFD0BE2A9C14A_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___character0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * _thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AllowedCharactersBitmap_IsCharacterAllowed_m983FAA035CC1BE68D78EBDF9169EFD0BE2A9C14A(_thisAdjusted, ___character0, method);
	return _returnValue;
}
// System.Boolean System.Text.Internal.AllowedCharactersBitmap::IsUnicodeScalarAllowed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllowedCharactersBitmap_IsUnicodeScalarAllowed_mBBF4654B17B5B9B894C393A16E6FB7D08EF84E34 (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, int32_t ___unicodeScalar0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___unicodeScalar0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)5));
		int32_t L_1 = ___unicodeScalar0;
		V_1 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = __this->get__allowedCharacters_0();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_5>>((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool AllowedCharactersBitmap_IsUnicodeScalarAllowed_mBBF4654B17B5B9B894C393A16E6FB7D08EF84E34_AdjustorThunk (RuntimeObject * __this, int32_t ___unicodeScalar0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * _thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AllowedCharactersBitmap_IsUnicodeScalarAllowed_mBBF4654B17B5B9B894C393A16E6FB7D08EF84E34_inline(_thisAdjusted, ___unicodeScalar0, method);
	return _returnValue;
}
// System.Int32 System.Text.Internal.AllowedCharactersBitmap::FindFirstCharacterToEncode(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllowedCharactersBitmap_FindFirstCharacterToEncode_m3F245BEF781348852865BB264D940B503D420EDB (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		Il2CppChar* L_0 = ___text0;
		int32_t L_1 = V_0;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)2)))));
		bool L_3;
		L_3 = AllowedCharactersBitmap_IsCharacterAllowed_m983FAA035CC1BE68D78EBDF9169EFD0BE2A9C14A((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)__this, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___textLength1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t AllowedCharactersBitmap_FindFirstCharacterToEncode_m3F245BEF781348852865BB264D940B503D420EDB_AdjustorThunk (RuntimeObject * __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * _thisAdjusted = reinterpret_cast<AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AllowedCharactersBitmap_FindFirstCharacterToEncode_m3F245BEF781348852865BB264D940B503D420EDB_inline(_thisAdjusted, ___text0, ___textLength1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Encodings.Web.DefaultHtmlEncoder::.ctor(System.Text.Encodings.Web.TextEncoderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultHtmlEncoder__ctor_m5861A583A09759D968AC9476DB0EDC1BD602F2EB (DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73 * __this, TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * ___settings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HtmlEncoder__ctor_m161CFB9A325F7D321947F105E3E470ED5EAE5D6B(__this, /*hidden argument*/NULL);
		TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * L_0 = ___settings0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultHtmlEncoder__ctor_m5861A583A09759D968AC9476DB0EDC1BD602F2EB_RuntimeMethod_var)));
	}

IL_0014:
	{
		TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * L_2 = ___settings0;
		NullCheck(L_2);
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  L_3;
		L_3 = TextEncoderSettings_GetAllowedCharacters_m7326CF417D59BC1B4AC1CB65C94075AEF9D0D508(L_2, /*hidden argument*/NULL);
		__this->set__allowedCharacters_2(L_3);
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * L_4 = __this->get_address_of__allowedCharacters_2();
		AllowedCharactersBitmap_ForbidUndefinedCharacters_mB80D5726324E5C13F2165322820799C87642316A((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)L_4, /*hidden argument*/NULL);
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  L_5 = __this->get__allowedCharacters_2();
		IL2CPP_RUNTIME_CLASS_INIT(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		DefaultHtmlEncoder_ForbidHtmlCharacters_mB07F4EFD3A49B8A6A8CD72D745676142E0941404(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.Encodings.Web.DefaultHtmlEncoder::ForbidHtmlCharacters(System.Text.Internal.AllowedCharactersBitmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultHtmlEncoder_ForbidHtmlCharacters_mB07F4EFD3A49B8A6A8CD72D745676142E0941404 (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  ___allowedCharacters0, const RuntimeMethod* method)
{
	{
		AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)(&___allowedCharacters0), ((int32_t)60), /*hidden argument*/NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)(&___allowedCharacters0), ((int32_t)62), /*hidden argument*/NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)(&___allowedCharacters0), ((int32_t)38), /*hidden argument*/NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)(&___allowedCharacters0), ((int32_t)39), /*hidden argument*/NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)(&___allowedCharacters0), ((int32_t)34), /*hidden argument*/NULL);
		AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)(&___allowedCharacters0), ((int32_t)43), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultHtmlEncoder::WillEncode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultHtmlEncoder_WillEncode_m823020E695794190843270385B531D09FB4DCD94 (DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73 * __this, int32_t ___unicodeScalar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___unicodeScalar0;
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = UnicodeHelpers_IsSupplementaryCodePoint_m81291E409B6A7CBB820B0076BA9E76A3796FAD24_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * L_2 = __this->get_address_of__allowedCharacters_2();
		int32_t L_3 = ___unicodeScalar0;
		bool L_4;
		L_4 = AllowedCharactersBitmap_IsUnicodeScalarAllowed_mBBF4654B17B5B9B894C393A16E6FB7D08EF84E34_inline((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)L_2, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultHtmlEncoder::FindFirstCharacterToEncode(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultHtmlEncoder_FindFirstCharacterToEncode_mD8C68B579D071CB1145D993A69B29A00775C1063 (DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73 * __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method)
{
	{
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * L_0 = __this->get_address_of__allowedCharacters_2();
		Il2CppChar* L_1 = ___text0;
		int32_t L_2 = ___textLength1;
		int32_t L_3;
		L_3 = AllowedCharactersBitmap_FindFirstCharacterToEncode_m3F245BEF781348852865BB264D940B503D420EDB_inline((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)L_0, (Il2CppChar*)(Il2CppChar*)L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultHtmlEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultHtmlEncoder_TryEncodeUnicodeScalar_mDCFAD2924D36EF21F11EF76F6974405D6E907CD7 (DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73 * __this, int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___bufferLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar* L_0 = ___buffer1;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultHtmlEncoder_TryEncodeUnicodeScalar_mDCFAD2924D36EF21F11EF76F6974405D6E907CD7_RuntimeMethod_var)));
	}

IL_0010:
	{
		int32_t L_2 = ___unicodeScalar0;
		bool L_3;
		L_3 = VirtFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_2);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = ___unicodeScalar0;
		Il2CppChar* L_5 = ___buffer1;
		int32_t L_6 = ___bufferLength2;
		int32_t* L_7 = ___numberOfCharactersWritten3;
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TextEncoder_TryWriteScalarAsChar_m063A70791C8578683389989AC4A245809D0A30FD_inline(L_4, (Il2CppChar*)(Il2CppChar*)L_5, L_6, (int32_t*)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = ___unicodeScalar0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = ((DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var))->get_s_quote_4();
		Il2CppChar* L_11 = ___buffer1;
		int32_t L_12 = ___bufferLength2;
		int32_t* L_13 = ___numberOfCharactersWritten3;
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = TextEncoder_TryCopyCharacters_mF10274C7421F58B9BB0B2F3FEEE4B68A17876083(L_10, (Il2CppChar*)(Il2CppChar*)L_11, L_12, (int32_t*)L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0038:
	{
		int32_t L_15 = ___unicodeScalar0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ((DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var))->get_s_ampersand_5();
		Il2CppChar* L_17 = ___buffer1;
		int32_t L_18 = ___bufferLength2;
		int32_t* L_19 = ___numberOfCharactersWritten3;
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = TextEncoder_TryCopyCharacters_mF10274C7421F58B9BB0B2F3FEEE4B68A17876083(L_16, (Il2CppChar*)(Il2CppChar*)L_17, L_18, (int32_t*)L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_004c:
	{
		int32_t L_21 = ___unicodeScalar0;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = ((DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var))->get_s_lessthan_6();
		Il2CppChar* L_23 = ___buffer1;
		int32_t L_24 = ___bufferLength2;
		int32_t* L_25 = ___numberOfCharactersWritten3;
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = TextEncoder_TryCopyCharacters_mF10274C7421F58B9BB0B2F3FEEE4B68A17876083(L_22, (Il2CppChar*)(Il2CppChar*)L_23, L_24, (int32_t*)L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_0060:
	{
		int32_t L_27 = ___unicodeScalar0;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = ((DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var))->get_s_greaterthan_7();
		Il2CppChar* L_29 = ___buffer1;
		int32_t L_30 = ___bufferLength2;
		int32_t* L_31 = ___numberOfCharactersWritten3;
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = TextEncoder_TryCopyCharacters_mF10274C7421F58B9BB0B2F3FEEE4B68A17876083(L_28, (Il2CppChar*)(Il2CppChar*)L_29, L_30, (int32_t*)L_31, /*hidden argument*/NULL);
		return L_32;
	}

IL_0074:
	{
		int32_t L_33 = ___unicodeScalar0;
		Il2CppChar* L_34 = ___buffer1;
		int32_t L_35 = ___bufferLength2;
		int32_t* L_36 = ___numberOfCharactersWritten3;
		IL2CPP_RUNTIME_CLASS_INIT(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = DefaultHtmlEncoder_TryWriteEncodedScalarAsNumericEntity_m4FE6AA1B3A6AF0CAA631E48AFB9A3392671BC794(L_33, (Il2CppChar*)(Il2CppChar*)L_34, L_35, (int32_t*)L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultHtmlEncoder::TryWriteEncodedScalarAsNumericEntity(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultHtmlEncoder_TryWriteEncodedScalarAsNumericEntity_m4FE6AA1B3A6AF0CAA631E48AFB9A3392671BC794 (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___bufferLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___unicodeScalar0;
		V_1 = L_0;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		int32_t L_2 = V_1;
		V_1 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		int32_t L_3 = V_1;
		if (L_3)
		{
			goto IL_0004;
		}
	}
	{
		int32_t* L_4 = ___numberOfCharactersWritten3;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4));
		int32_t L_6 = V_0;
		int32_t L_7 = ___bufferLength2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)4))) <= ((int32_t)L_7)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t* L_8 = ___numberOfCharactersWritten3;
		*((int32_t*)L_8) = (int32_t)0;
		return (bool)0;
	}

IL_001f:
	{
		Il2CppChar* L_9 = ___buffer1;
		*((int16_t*)L_9) = (int16_t)((int32_t)38);
		Il2CppChar* L_10 = ___buffer1;
		___buffer1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, (int32_t)2));
		Il2CppChar* L_11 = ___buffer1;
		*((int16_t*)L_11) = (int16_t)((int32_t)35);
		Il2CppChar* L_12 = ___buffer1;
		___buffer1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, (int32_t)2));
		Il2CppChar* L_13 = ___buffer1;
		*((int16_t*)L_13) = (int16_t)((int32_t)120);
		Il2CppChar* L_14 = ___buffer1;
		int32_t L_15 = V_0;
		___buffer1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_15), (int32_t)2))));
	}

IL_003d:
	{
		Il2CppChar* L_16 = ___buffer1;
		int32_t L_17 = ___unicodeScalar0;
		Il2CppChar L_18;
		L_18 = HexUtil_Int32LsbToHexDigit_mB8E80ED63D8443ADFEB9BC62D4ED8CF50F4657DF_inline(((int32_t)((int32_t)L_17&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		*((int16_t*)L_16) = (int16_t)L_18;
		int32_t L_19 = ___unicodeScalar0;
		___unicodeScalar0 = ((int32_t)((int32_t)L_19>>(int32_t)4));
		Il2CppChar* L_20 = ___buffer1;
		___buffer1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_20, (int32_t)2));
		int32_t L_21 = ___unicodeScalar0;
		if (L_21)
		{
			goto IL_003d;
		}
	}
	{
		Il2CppChar* L_22 = ___buffer1;
		int32_t L_23 = V_0;
		___buffer1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1))), (int32_t)2))));
		Il2CppChar* L_24 = ___buffer1;
		*((int16_t*)L_24) = (int16_t)((int32_t)59);
		return (bool)1;
	}
}
// System.Void System.Text.Encodings.Web.DefaultHtmlEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultHtmlEncoder__cctor_m1B91528BCC96432781ABA2F489DE6758AFA4B484 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* L_0 = (UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C*)(UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C*)SZArrayNew(UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C_il2cpp_TypeInfo_var, (uint32_t)1);
		UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* L_1 = L_0;
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_2;
		L_2 = UnicodeRanges_get_BasicLatin_mD27B8D9C7221DA81F2724B7C9230CCF882D4E02E(/*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E *)L_2);
		TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * L_3 = (TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA *)il2cpp_codegen_object_new(TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA_il2cpp_TypeInfo_var);
		TextEncoderSettings__ctor_mE935C030DD513103150FD00B24043252B1DB7687(L_3, L_1, /*hidden argument*/NULL);
		DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73 * L_4 = (DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73 *)il2cpp_codegen_object_new(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		DefaultHtmlEncoder__ctor_m5861A583A09759D968AC9476DB0EDC1BD602F2EB(L_4, L_3, /*hidden argument*/NULL);
		((DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var))->set_Singleton_3(L_4);
		NullCheck(_stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5;
		L_5 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(_stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E, /*hidden argument*/NULL);
		((DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var))->set_s_quote_4(L_5);
		NullCheck(_stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6;
		L_6 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(_stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387, /*hidden argument*/NULL);
		((DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var))->set_s_ampersand_5(L_6);
		NullCheck(_stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7;
		L_7 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(_stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8, /*hidden argument*/NULL);
		((DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var))->set_s_lessthan_6(L_7);
		NullCheck(_stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8;
		L_8 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(_stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837, /*hidden argument*/NULL);
		((DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_StaticFields*)il2cpp_codegen_static_fields_for(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var))->set_s_greaterthan_7(L_8);
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
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoder::.ctor(System.Text.Encodings.Web.TextEncoderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__ctor_mA3F1E2333EF4733750C89B1218FBE6DED493D283 (DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C * __this, TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * ___filter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JavaScriptEncoder__ctor_m694F65300FE2A4C4FC014E43DDEF0F46FF1D617E(__this, /*hidden argument*/NULL);
		TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * L_0 = ___filter0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultJavaScriptEncoder__ctor_mA3F1E2333EF4733750C89B1218FBE6DED493D283_RuntimeMethod_var)));
	}

IL_0014:
	{
		TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * L_2 = ___filter0;
		NullCheck(L_2);
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  L_3;
		L_3 = TextEncoderSettings_GetAllowedCharacters_m7326CF417D59BC1B4AC1CB65C94075AEF9D0D508(L_2, /*hidden argument*/NULL);
		__this->set__allowedCharacters_2(L_3);
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * L_4 = __this->get_address_of__allowedCharacters_2();
		AllowedCharactersBitmap_ForbidUndefinedCharacters_mB80D5726324E5C13F2165322820799C87642316A((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)L_4, /*hidden argument*/NULL);
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  L_5 = __this->get__allowedCharacters_2();
		IL2CPP_RUNTIME_CLASS_INIT(DefaultHtmlEncoder_t41F6BDE81B57777FD8A70B3F2E0CCA278EE78E73_il2cpp_TypeInfo_var);
		DefaultHtmlEncoder_ForbidHtmlCharacters_mB07F4EFD3A49B8A6A8CD72D745676142E0941404(L_5, /*hidden argument*/NULL);
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * L_6 = __this->get_address_of__allowedCharacters_2();
		AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)L_6, ((int32_t)92), /*hidden argument*/NULL);
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * L_7 = __this->get_address_of__allowedCharacters_2();
		AllowedCharactersBitmap_ForbidCharacter_mA6B284EC7E0A8C6065C60B8F9584C362094BEC79((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)L_7, ((int32_t)96), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoder::WillEncode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoder_WillEncode_m078FF90FC8050247EAC556F4FB9A5E0931CB4107 (DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C * __this, int32_t ___unicodeScalar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___unicodeScalar0;
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = UnicodeHelpers_IsSupplementaryCodePoint_m81291E409B6A7CBB820B0076BA9E76A3796FAD24_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * L_2 = __this->get_address_of__allowedCharacters_2();
		int32_t L_3 = ___unicodeScalar0;
		bool L_4;
		L_4 = AllowedCharactersBitmap_IsUnicodeScalarAllowed_mBBF4654B17B5B9B894C393A16E6FB7D08EF84E34_inline((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)L_2, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Text.Encodings.Web.DefaultJavaScriptEncoder::FindFirstCharacterToEncode(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoder_FindFirstCharacterToEncode_m12E67D4004968C9908D392C2645D8CC63144CB9D (DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C * __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___text0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultJavaScriptEncoder_FindFirstCharacterToEncode_m12E67D4004968C9908D392C2645D8CC63144CB9D_RuntimeMethod_var)));
	}

IL_0010:
	{
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * L_2 = __this->get_address_of__allowedCharacters_2();
		Il2CppChar* L_3 = ___text0;
		int32_t L_4 = ___textLength1;
		int32_t L_5;
		L_5 = AllowedCharactersBitmap_FindFirstCharacterToEncode_m3F245BEF781348852865BB264D940B503D420EDB_inline((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)L_2, (Il2CppChar*)(Il2CppChar*)L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoder_TryEncodeUnicodeScalar_m96DB737674CC494573B83328B440C1DFD0A7D9D4 (DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C * __this, int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___bufferLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	{
		Il2CppChar* L_0 = ___buffer1;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultJavaScriptEncoder_TryEncodeUnicodeScalar_m96DB737674CC494573B83328B440C1DFD0A7D9D4_RuntimeMethod_var)));
	}

IL_0010:
	{
		int32_t L_2 = ___unicodeScalar0;
		bool L_3;
		L_3 = VirtFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_2);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = ___unicodeScalar0;
		Il2CppChar* L_5 = ___buffer1;
		int32_t L_6 = ___bufferLength2;
		int32_t* L_7 = ___numberOfCharactersWritten3;
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TextEncoder_TryWriteScalarAsChar_m063A70791C8578683389989AC4A245809D0A30FD_inline(L_4, (Il2CppChar*)(Il2CppChar*)L_5, L_6, (int32_t*)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = ___unicodeScalar0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)8)))
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_007b;
			}
			case 4:
			{
				goto IL_0063;
			}
			case 5:
			{
				goto IL_006b;
			}
		}
	}
	{
		int32_t L_10 = ___unicodeScalar0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0073;
		}
	}
	{
		goto IL_007b;
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = ((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->get_s_b_4();
		V_0 = L_11;
		goto IL_0086;
	}

IL_0053:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = ((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->get_s_t_5();
		V_0 = L_12;
		goto IL_0086;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = ((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->get_s_n_6();
		V_0 = L_13;
		goto IL_0086;
	}

IL_0063:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = ((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->get_s_f_7();
		V_0 = L_14;
		goto IL_0086;
	}

IL_006b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->get_s_r_8();
		V_0 = L_15;
		goto IL_0086;
	}

IL_0073:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->get_s_back_9();
		V_0 = L_16;
		goto IL_0086;
	}

IL_007b:
	{
		int32_t L_17 = ___unicodeScalar0;
		Il2CppChar* L_18 = ___buffer1;
		int32_t L_19 = ___bufferLength2;
		int32_t* L_20 = ___numberOfCharactersWritten3;
		IL2CPP_RUNTIME_CLASS_INIT(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = DefaultJavaScriptEncoder_TryWriteEncodedScalarAsNumericEntity_m485EDB1CA53D0B4CE0F7ABED7D9B3273F0D848B2(L_17, (Il2CppChar*)(Il2CppChar*)L_18, L_19, (int32_t*)L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0086:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = V_0;
		Il2CppChar* L_23 = ___buffer1;
		int32_t L_24 = ___bufferLength2;
		int32_t* L_25 = ___numberOfCharactersWritten3;
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = TextEncoder_TryCopyCharacters_mF10274C7421F58B9BB0B2F3FEEE4B68A17876083(L_22, (Il2CppChar*)(Il2CppChar*)L_23, L_24, (int32_t*)L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoder::TryWriteEncodedScalarAsNumericEntity(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoder_TryWriteEncodedScalarAsNumericEntity_m485EDB1CA53D0B4CE0F7ABED7D9B3273F0D848B2 (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___length2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___unicodeScalar0;
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = UnicodeHelpers_IsSupplementaryCodePoint_m81291E409B6A7CBB820B0076BA9E76A3796FAD24_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_2 = ___unicodeScalar0;
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_m24F8FC28935ACED6DD83D08495D80181FC045030(L_2, (Il2CppChar*)(&V_0), (Il2CppChar*)(&V_1), /*hidden argument*/NULL);
		Il2CppChar L_3 = V_0;
		Il2CppChar* L_4 = ___buffer1;
		int32_t L_5 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = DefaultJavaScriptEncoder_TryWriteEncodedSingleCharacter_m148681724C44098E51DF1D9769B192643BF4D57C(L_3, (Il2CppChar*)(Il2CppChar*)L_4, L_5, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		Il2CppChar* L_8 = ___buffer1;
		int32_t L_9 = V_2;
		int32_t L_10 = ___length2;
		int32_t L_11 = V_2;
		int32_t* L_12 = ___numberOfCharactersWritten3;
		IL2CPP_RUNTIME_CLASS_INIT(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = DefaultJavaScriptEncoder_TryWriteEncodedSingleCharacter_m148681724C44098E51DF1D9769B192643BF4D57C(L_7, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_9), (int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)), (int32_t*)L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0038;
		}
	}
	{
		int32_t* L_14 = ___numberOfCharactersWritten3;
		int32_t* L_15 = ___numberOfCharactersWritten3;
		int32_t L_16 = *((int32_t*)L_15);
		int32_t L_17 = V_2;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17));
		return (bool)1;
	}

IL_0038:
	{
		int32_t* L_18 = ___numberOfCharactersWritten3;
		*((int32_t*)L_18) = (int32_t)0;
		return (bool)0;
	}

IL_003d:
	{
		int32_t L_19 = ___unicodeScalar0;
		Il2CppChar* L_20 = ___buffer1;
		int32_t L_21 = ___length2;
		int32_t* L_22 = ___numberOfCharactersWritten3;
		IL2CPP_RUNTIME_CLASS_INIT(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = DefaultJavaScriptEncoder_TryWriteEncodedSingleCharacter_m148681724C44098E51DF1D9769B192643BF4D57C(L_19, (Il2CppChar*)(Il2CppChar*)L_20, L_21, (int32_t*)L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Boolean System.Text.Encodings.Web.DefaultJavaScriptEncoder::TryWriteEncodedSingleCharacter(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoder_TryWriteEncodedSingleCharacter_m148681724C44098E51DF1D9769B192643BF4D57C (int32_t ___unicodeScalar0, Il2CppChar* ___buffer1, int32_t ___length2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length2;
		if ((((int32_t)L_0) >= ((int32_t)6)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_1 = ___numberOfCharactersWritten3;
		*((int32_t*)L_1) = (int32_t)0;
		return (bool)0;
	}

IL_0009:
	{
		Il2CppChar* L_2 = ___buffer1;
		*((int16_t*)L_2) = (int16_t)((int32_t)92);
		Il2CppChar* L_3 = ___buffer1;
		___buffer1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)2));
		Il2CppChar* L_4 = ___buffer1;
		*((int16_t*)L_4) = (int16_t)((int32_t)117);
		Il2CppChar* L_5 = ___buffer1;
		___buffer1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_5, (int32_t)2));
		Il2CppChar* L_6 = ___buffer1;
		int32_t L_7 = ___unicodeScalar0;
		Il2CppChar L_8;
		L_8 = HexUtil_Int32LsbToHexDigit_mB8E80ED63D8443ADFEB9BC62D4ED8CF50F4657DF_inline(((int32_t)((int32_t)L_7>>(int32_t)((int32_t)12))), /*hidden argument*/NULL);
		*((int16_t*)L_6) = (int16_t)L_8;
		Il2CppChar* L_9 = ___buffer1;
		___buffer1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, (int32_t)2));
		Il2CppChar* L_10 = ___buffer1;
		int32_t L_11 = ___unicodeScalar0;
		Il2CppChar L_12;
		L_12 = HexUtil_Int32LsbToHexDigit_mB8E80ED63D8443ADFEB9BC62D4ED8CF50F4657DF_inline(((int32_t)((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_11>>(int32_t)8))))&(int64_t)((int64_t)((int64_t)((int32_t)15))))))), /*hidden argument*/NULL);
		*((int16_t*)L_10) = (int16_t)L_12;
		Il2CppChar* L_13 = ___buffer1;
		___buffer1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, (int32_t)2));
		Il2CppChar* L_14 = ___buffer1;
		int32_t L_15 = ___unicodeScalar0;
		Il2CppChar L_16;
		L_16 = HexUtil_Int32LsbToHexDigit_mB8E80ED63D8443ADFEB9BC62D4ED8CF50F4657DF_inline(((int32_t)((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_15>>(int32_t)4))))&(int64_t)((int64_t)((int64_t)((int32_t)15))))))), /*hidden argument*/NULL);
		*((int16_t*)L_14) = (int16_t)L_16;
		Il2CppChar* L_17 = ___buffer1;
		___buffer1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_17, (int32_t)2));
		Il2CppChar* L_18 = ___buffer1;
		int32_t L_19 = ___unicodeScalar0;
		Il2CppChar L_20;
		L_20 = HexUtil_Int32LsbToHexDigit_mB8E80ED63D8443ADFEB9BC62D4ED8CF50F4657DF_inline(((int32_t)((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_19))&(int64_t)((int64_t)((int64_t)((int32_t)15))))))), /*hidden argument*/NULL);
		*((int16_t*)L_18) = (int16_t)L_20;
		Il2CppChar* L_21 = ___buffer1;
		___buffer1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_21, (int32_t)2));
		int32_t* L_22 = ___numberOfCharactersWritten3;
		*((int32_t*)L_22) = (int32_t)6;
		return (bool)1;
	}
}
// System.Void System.Text.Encodings.Web.DefaultJavaScriptEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__cctor_mDC07964613999EEA488E1501C43BA4EAFC841ED6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* L_0 = (UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C*)(UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C*)SZArrayNew(UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C_il2cpp_TypeInfo_var, (uint32_t)1);
		UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* L_1 = L_0;
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_2;
		L_2 = UnicodeRanges_get_BasicLatin_mD27B8D9C7221DA81F2724B7C9230CCF882D4E02E(/*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E *)L_2);
		TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * L_3 = (TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA *)il2cpp_codegen_object_new(TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA_il2cpp_TypeInfo_var);
		TextEncoderSettings__ctor_mE935C030DD513103150FD00B24043252B1DB7687(L_3, L_1, /*hidden argument*/NULL);
		DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C * L_4 = (DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C *)il2cpp_codegen_object_new(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		DefaultJavaScriptEncoder__ctor_mA3F1E2333EF4733750C89B1218FBE6DED493D283(L_4, L_3, /*hidden argument*/NULL);
		((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->set_Singleton_3(L_4);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)98));
		((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->set_s_b_4(L_7);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)116));
		((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->set_s_t_5(L_10);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)110));
		((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->set_s_n_6(L_13);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)102));
		((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->set_s_f_7(L_16);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)114));
		((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->set_s_r_8(L_19);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_20 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = L_20;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)92));
		((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->set_s_back_9(L_22);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m1D43C5E50094C4FDB17A08B023E95727E9CC3B21 (EmbeddedAttribute_tF9216AD110260C92ADC6FBB5182F91F5AEDE02E6 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Char System.Text.Encodings.Web.HexUtil::Int32LsbToHexDigit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar HexUtil_Int32LsbToHexDigit_mB8E80ED63D8443ADFEB9BC62D4ED8CF50F4657DF (int32_t ___value0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)10))))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___value0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)10)))));
		goto IL_0012;
	}

IL_000e:
	{
		int32_t L_2 = ___value0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_2));
	}

IL_0012:
	{
		return ((int32_t)((uint16_t)G_B3_0));
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
// System.Void System.Text.Encodings.Web.HtmlEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlEncoder__ctor_m161CFB9A325F7D321947F105E3E470ED5EAE5D6B (HtmlEncoder_tAFE8FC9473B3A4CB07247A859E897073785624A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		TextEncoder__ctor_m44443D2D8E5E0DE1A08CA571F175F89BE4C84800(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m966BB4DCDAD2CEDEF56EFCFBE233C83391B4110C (IsReadOnlyAttribute_tAA14F9A2061B0FEACD851D992D6468E54E64C0F1 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Encodings.Web.JavaScriptEncoder::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JavaScriptEncoder_tE173755410094288661D4C65215A7C8607C46ED5 * JavaScriptEncoder_get_Default_mDE08DCECD3A58CCF6B9D0FF052FBD831B16185BB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var);
		DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C * L_0 = ((DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tD96A2C1C0AA2B8F1E47355122EF4322F5C22512C_il2cpp_TypeInfo_var))->get_Singleton_3();
		return L_0;
	}
}
// System.Void System.Text.Encodings.Web.JavaScriptEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptEncoder__ctor_m694F65300FE2A4C4FC014E43DDEF0F46FF1D617E (JavaScriptEncoder_tE173755410094288661D4C65215A7C8607C46ED5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		TextEncoder__ctor_m44443D2D8E5E0DE1A08CA571F175F89BE4C84800(__this, /*hidden argument*/NULL);
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
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeIntoBuffer(System.Char*,System.Int32,System.Char*,System.Int32,System.Int32&,System.Int32&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_EncodeIntoBuffer_mC265CDC53C0F91C880F90549DFCD20B53BDB8477 (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * __this, Il2CppChar* ___buffer0, int32_t ___bufferLength1, Il2CppChar* ___value2, int32_t ___valueLength3, int32_t* ___charsConsumed4, int32_t* ___charsWritten5, int32_t ___firstCharacterToEncode6, bool ___isFinalBlock7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mA3E694A8690805F9E6406654FCFEC2DAA17C0D28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95  V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		Il2CppChar* L_0 = ___buffer0;
		V_0 = (Il2CppChar*)L_0;
		int32_t* L_1 = ___charsWritten5;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t L_2 = ___firstCharacterToEncode6;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		Il2CppChar* L_3 = ___value2;
		Il2CppChar* L_4 = ___buffer0;
		int32_t L_5 = ___bufferLength1;
		int32_t L_6 = ___firstCharacterToEncode6;
		Buffer_MemoryCopy_mE01AC047B4205B692320FE13621CC28F6900E5E1((void*)(void*)L_3, (void*)(void*)L_4, ((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_5)))), ((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_6)))), /*hidden argument*/NULL);
		int32_t* L_7 = ___charsWritten5;
		int32_t* L_8 = ___charsWritten5;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = ___firstCharacterToEncode6;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		int32_t L_11 = ___bufferLength1;
		int32_t L_12 = ___firstCharacterToEncode6;
		___bufferLength1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12));
		Il2CppChar* L_13 = ___buffer0;
		int32_t L_14 = ___firstCharacterToEncode6;
		___buffer0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_14), (int32_t)2))));
	}

IL_0033:
	{
		int32_t L_15 = ___firstCharacterToEncode6;
		V_1 = L_15;
		Il2CppChar* L_16 = ___value2;
		int32_t L_17 = V_1;
		int32_t L_18 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_17), (int32_t)2)))));
		V_2 = L_18;
		Il2CppChar L_19 = V_2;
		V_3 = L_19;
		V_4 = (bool)0;
		int32_t L_20 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		goto IL_00e0;
	}

IL_004d:
	{
		bool L_21 = V_4;
		if (L_21)
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_22 = V_3;
		V_2 = L_22;
		goto IL_0060;
	}

IL_0055:
	{
		Il2CppChar* L_23 = ___value2;
		int32_t L_24 = V_5;
		int32_t L_25 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_23, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1))), (int32_t)2)))));
		V_2 = L_25;
	}

IL_0060:
	{
		Il2CppChar* L_26 = ___value2;
		int32_t L_27 = V_5;
		int32_t L_28 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_26, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_27), (int32_t)2)))));
		V_3 = L_28;
		Il2CppChar L_29 = V_2;
		bool L_30;
		L_30 = VirtFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_29);
		if (L_30)
		{
			goto IL_008c;
		}
	}
	{
		V_4 = (bool)0;
		Il2CppChar* L_31 = ___buffer0;
		Il2CppChar L_32 = V_2;
		*((int16_t*)L_31) = (int16_t)L_32;
		Il2CppChar* L_33 = ___buffer0;
		___buffer0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_33, (int32_t)2));
		int32_t L_34 = ___bufferLength1;
		___bufferLength1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1));
		int32_t* L_35 = ___charsWritten5;
		int32_t* L_36 = ___charsWritten5;
		int32_t L_37 = *((int32_t*)L_36);
		*((int32_t*)L_35) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		goto IL_00da;
	}

IL_008c:
	{
		Il2CppChar L_38 = V_2;
		Il2CppChar L_39 = V_3;
		Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Nullable_1__ctor_mA3E694A8690805F9E6406654FCFEC2DAA17C0D28((&L_40), L_39, /*hidden argument*/Nullable_1__ctor_mA3E694A8690805F9E6406654FCFEC2DAA17C0D28_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = UnicodeHelpers_GetScalarValueFromUtf16_m7CE3698BFFC5FD0C99E25BD8BDE9DD8315419AB1_inline(L_38, L_40, (bool*)(&V_4), (bool*)(&V_8), /*hidden argument*/NULL);
		V_6 = L_41;
		int32_t L_42 = V_6;
		Il2CppChar* L_43 = ___buffer0;
		int32_t L_44 = ___bufferLength1;
		bool L_45;
		L_45 = VirtFuncInvoker4< bool, int32_t, Il2CppChar*, int32_t, int32_t* >::Invoke(4 /* System.Boolean System.Text.Encodings.Web.TextEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&) */, __this, L_42, (Il2CppChar*)(Il2CppChar*)L_43, L_44, (int32_t*)(&V_7));
		if (L_45)
		{
			goto IL_00b8;
		}
	}
	{
		int32_t* L_46 = ___charsConsumed4;
		Il2CppChar* L_47 = V_0;
		Il2CppChar* L_48 = ___buffer0;
		*((int32_t*)L_46) = (int32_t)((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_47, (intptr_t)L_48))/(int32_t)2))))));
		return (int32_t)(1);
	}

IL_00b8:
	{
		bool L_49 = V_4;
		if (!L_49)
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00c2:
	{
		Il2CppChar* L_51 = ___buffer0;
		int32_t L_52 = V_7;
		___buffer0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_51, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_52), (int32_t)2))));
		int32_t L_53 = ___bufferLength1;
		int32_t L_54 = V_7;
		___bufferLength1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)L_54));
		int32_t* L_55 = ___charsWritten5;
		int32_t* L_56 = ___charsWritten5;
		int32_t L_57 = *((int32_t*)L_56);
		int32_t L_58 = V_7;
		*((int32_t*)L_55) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_58));
	}

IL_00da:
	{
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_00e0:
	{
		int32_t L_60 = V_5;
		int32_t L_61 = ___valueLength3;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_62 = V_5;
		int32_t L_63 = ___valueLength3;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0158;
		}
	}
	{
		Il2CppChar* L_64 = ___value2;
		int32_t L_65 = ___valueLength3;
		int32_t L_66 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_64, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1))), (int32_t)2)))));
		V_2 = L_66;
		Il2CppChar L_67 = V_2;
		il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 ));
		Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95  L_68 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		int32_t L_69;
		L_69 = UnicodeHelpers_GetScalarValueFromUtf16_m7CE3698BFFC5FD0C99E25BD8BDE9DD8315419AB1_inline(L_67, L_68, (bool*)(&V_4), (bool*)(&V_10), /*hidden argument*/NULL);
		V_9 = L_69;
		bool L_70 = ___isFinalBlock7;
		bool L_71 = V_10;
		if (!((int32_t)((int32_t)((((int32_t)L_70) == ((int32_t)0))? 1 : 0)&(int32_t)L_71)))
		{
			goto IL_0126;
		}
	}
	{
		int32_t* L_72 = ___charsConsumed4;
		Il2CppChar* L_73 = ___buffer0;
		Il2CppChar* L_74 = V_0;
		*((int32_t*)L_72) = (int32_t)((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_73, (intptr_t)L_74))/(int32_t)2))))));
		return (int32_t)(2);
	}

IL_0126:
	{
		int32_t L_75 = V_9;
		Il2CppChar* L_76 = ___buffer0;
		int32_t L_77 = ___bufferLength1;
		bool L_78;
		L_78 = VirtFuncInvoker4< bool, int32_t, Il2CppChar*, int32_t, int32_t* >::Invoke(4 /* System.Boolean System.Text.Encodings.Web.TextEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&) */, __this, L_75, (Il2CppChar*)(Il2CppChar*)L_76, L_77, (int32_t*)(&V_11));
		if (L_78)
		{
			goto IL_0140;
		}
	}
	{
		int32_t* L_79 = ___charsConsumed4;
		Il2CppChar* L_80 = ___buffer0;
		Il2CppChar* L_81 = V_0;
		*((int32_t*)L_79) = (int32_t)((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_80, (intptr_t)L_81))/(int32_t)2))))));
		return (int32_t)(1);
	}

IL_0140:
	{
		Il2CppChar* L_82 = ___buffer0;
		int32_t L_83 = V_11;
		___buffer0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_82, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_83), (int32_t)2))));
		int32_t L_84 = ___bufferLength1;
		int32_t L_85 = V_11;
		___bufferLength1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_84, (int32_t)L_85));
		int32_t* L_86 = ___charsWritten5;
		int32_t* L_87 = ___charsWritten5;
		int32_t L_88 = *((int32_t*)L_87);
		int32_t L_89 = V_11;
		*((int32_t*)L_86) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)L_89));
	}

IL_0158:
	{
		int32_t* L_90 = ___charsConsumed4;
		int32_t L_91 = ___valueLength3;
		*((int32_t*)L_90) = (int32_t)L_91;
		return (int32_t)(0);
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeUtf8(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_EncodeUtf8_m56A06AF547B45E69B5DFFDB1B8BAE2AE1514F956 (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * __this, ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___utf8Source0, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___utf8Destination1, int32_t* ___bytesConsumed2, int32_t* ___bytesWritten3, bool ___isFinalBlock4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_ToArray_m417BC72E6DBE40B5E87B8F5E8319C570D1560D7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_TryCopyTo_m95BD073B73E9D5239BC5A665536D3C06FC9897E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m52E53BB8862F26B1C23ED6BF8DE68F97F9BEFDDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m42772AEFB3C5778AC760E95D3D24EDF45179469D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m2FE6132AB7EC7629BEAB9302201118BDD12912C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_9 = NULL;
	ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___utf8Destination1), /*hidden argument*/Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		V_1 = L_1;
		int8_t* L_2 = (int8_t*) alloca(((uintptr_t)((int32_t)48)));
		memset(L_2, 0, ((uintptr_t)((int32_t)48)));
		V_2 = (Il2CppChar*)(L_2);
		int8_t* L_3 = (int8_t*) alloca(((uintptr_t)((int32_t)72)));
		memset(L_3, 0, ((uintptr_t)((int32_t)72)));
		V_3 = (uint8_t*)(L_3);
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		goto IL_0222;
	}

IL_002a:
	{
		int32_t L_4 = V_6;
		uint8_t* L_5;
		L_5 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), L_4, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_6 = *((uint8_t*)L_5);
		V_4 = L_6;
		uint32_t L_7 = V_4;
		bool L_8;
		L_8 = UnicodeUtility_IsAsciiCodePoint_m5F1C9C11917639977FA1A634E3BFF18039D9D91B_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00e9;
		}
	}
	{
		uint32_t L_9 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = TextEncoder_GetAsciiEncoding_mB89B4D79E87D8BCCAD5B71508B7D871775DF9C4D_inline(__this, (uint8_t)((int32_t)((uint8_t)L_9)), /*hidden argument*/NULL);
		V_9 = L_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ((TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_StaticFields*)il2cpp_codegen_static_fields_for(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var))->get_s_noEscape_1();
		if ((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_11) == ((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_12))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_13 = V_6;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		V_6 = L_14;
		int32_t L_15;
		L_15 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___utf8Destination1), /*hidden argument*/Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_16 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		V_7 = 1;
		goto IL_0137;
	}

IL_0077:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_9;
		if (L_17)
		{
			goto IL_0086;
		}
	}
	{
		V_7 = 0;
		V_5 = 1;
		goto IL_0137;
	}

IL_0086:
	{
		int32_t L_18 = V_6;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_19 = V_6;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_20;
		L_20 = ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), 0, L_19, /*hidden argument*/ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_RuntimeMethod_var);
		V_10 = L_20;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_21 = ___utf8Destination1;
		ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_10), L_21, /*hidden argument*/ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_RuntimeMethod_var);
		int32_t L_22 = V_6;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_23;
		L_23 = ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), L_22, /*hidden argument*/ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		___utf8Source0 = L_23;
		int32_t L_24 = V_6;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_25;
		L_25 = Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___utf8Destination1), L_24, /*hidden argument*/Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_RuntimeMethod_var);
		___utf8Destination1 = L_25;
		V_6 = 0;
	}

IL_00b8:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = V_9;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_27;
		L_27 = ReadOnlySpan_1_op_Implicit_m2FE6132AB7EC7629BEAB9302201118BDD12912C5(L_26, /*hidden argument*/ReadOnlySpan_1_op_Implicit_m2FE6132AB7EC7629BEAB9302201118BDD12912C5_RuntimeMethod_var);
		V_10 = L_27;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_28 = ___utf8Destination1;
		bool L_29;
		L_29 = ReadOnlySpan_1_TryCopyTo_m95BD073B73E9D5239BC5A665536D3C06FC9897E6((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_10), L_28, /*hidden argument*/ReadOnlySpan_1_TryCopyTo_m95BD073B73E9D5239BC5A665536D3C06FC9897E6_RuntimeMethod_var);
		if (L_29)
		{
			goto IL_00d0;
		}
	}
	{
		V_7 = 1;
		goto IL_0137;
	}

IL_00d0:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = V_9;
		NullCheck(L_30);
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_31;
		L_31 = Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___utf8Destination1), ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))), /*hidden argument*/Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_RuntimeMethod_var);
		___utf8Destination1 = L_31;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_32;
		L_32 = ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), 1, /*hidden argument*/ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		___utf8Source0 = L_32;
		goto IL_0129;
	}

IL_00e9:
	{
		int32_t L_33 = V_6;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_34;
		L_34 = ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), L_33, /*hidden argument*/ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = UnicodeHelpers_DecodeScalarValueFromUtf8_mDE1BBD5F544A5FC12417E11907D71541CA1F34AA(L_34, (uint32_t*)(&V_4), (int32_t*)(&V_5), /*hidden argument*/NULL);
		V_7 = L_35;
		int32_t L_36 = V_7;
		if (L_36)
		{
			goto IL_0137;
		}
	}
	{
		uint32_t L_37 = V_4;
		bool L_38;
		L_38 = VirtFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_37);
		if (L_38)
		{
			goto IL_0137;
		}
	}
	{
		int32_t L_39 = V_6;
		int32_t L_40 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40));
		int32_t L_41 = V_6;
		int32_t L_42;
		L_42 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___utf8Destination1), /*hidden argument*/Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		if ((((int32_t)L_41) <= ((int32_t)L_42)))
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_43 = V_6;
		int32_t L_44 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)L_44));
		V_7 = 1;
		goto IL_0137;
	}

IL_0129:
	{
		int32_t L_45 = V_6;
		int32_t L_46;
		L_46 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_002a;
		}
	}

IL_0137:
	{
		int32_t L_47 = V_6;
		if ((((int32_t)L_47) <= ((int32_t)0)))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_48 = V_6;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_49;
		L_49 = ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), 0, L_48, /*hidden argument*/ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_RuntimeMethod_var);
		V_10 = L_49;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_50 = ___utf8Destination1;
		ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_10), L_50, /*hidden argument*/ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_RuntimeMethod_var);
		int32_t L_51 = V_6;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_52;
		L_52 = ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), L_51, /*hidden argument*/ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		___utf8Source0 = L_52;
		int32_t L_53 = V_6;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_54;
		L_54 = Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___utf8Destination1), L_53, /*hidden argument*/Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_RuntimeMethod_var);
		___utf8Destination1 = L_54;
		V_6 = 0;
	}

IL_0169:
	{
		bool L_55;
		L_55 = ReadOnlySpan_1_get_IsEmpty_m42772AEFB3C5778AC760E95D3D24EDF45179469D((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), /*hidden argument*/ReadOnlySpan_1_get_IsEmpty_m42772AEFB3C5778AC760E95D3D24EDF45179469D_RuntimeMethod_var);
		if (L_55)
		{
			goto IL_022e;
		}
	}
	{
		int32_t L_56 = V_7;
		if (!L_56)
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_57 = V_7;
		if ((!(((uint32_t)L_57) == ((uint32_t)2))))
		{
			goto IL_019b;
		}
	}
	{
		bool L_58 = ___isFinalBlock4;
		if (L_58)
		{
			goto IL_01a3;
		}
	}
	{
		int32_t* L_59 = ___bytesConsumed2;
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)L_61));
		int32_t* L_62 = ___bytesWritten3;
		int32_t L_63 = V_1;
		int32_t L_64;
		L_64 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___utf8Destination1), /*hidden argument*/Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_63, (int32_t)L_64));
		return (int32_t)(2);
	}

IL_019b:
	{
		int32_t L_65 = V_7;
		if ((((int32_t)L_65) == ((int32_t)1)))
		{
			goto IL_023f;
		}
	}

IL_01a3:
	{
		uint32_t L_66 = V_4;
		Il2CppChar* L_67 = V_2;
		bool L_68;
		L_68 = VirtFuncInvoker4< bool, int32_t, Il2CppChar*, int32_t, int32_t* >::Invoke(4 /* System.Boolean System.Text.Encodings.Web.TextEncoder::TryEncodeUnicodeScalar(System.Int32,System.Char*,System.Int32,System.Int32&) */, __this, L_66, (Il2CppChar*)(Il2CppChar*)L_67, ((int32_t)24), (int32_t*)(&V_8));
		if (!L_68)
		{
			goto IL_01fe;
		}
	}
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_69;
		L_69 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Il2CppChar* L_70 = V_2;
		int32_t L_71 = V_8;
		uint8_t* L_72 = V_3;
		NullCheck(L_69);
		int32_t L_73;
		L_73 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(20 /* System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32) */, L_69, (Il2CppChar*)(Il2CppChar*)L_70, L_71, (uint8_t*)(uint8_t*)L_72, ((int32_t)72));
		V_11 = L_73;
		uint8_t* L_74 = V_3;
		int32_t L_75 = V_11;
		ReadOnlySpan_1__ctor_m52E53BB8862F26B1C23ED6BF8DE68F97F9BEFDDF_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_12), (void*)(void*)L_74, L_75, /*hidden argument*/ReadOnlySpan_1__ctor_m52E53BB8862F26B1C23ED6BF8DE68F97F9BEFDDF_RuntimeMethod_var);
		uint32_t L_76 = V_4;
		bool L_77;
		L_77 = UnicodeUtility_IsAsciiCodePoint_m5F1C9C11917639977FA1A634E3BFF18039D9D91B_inline(L_76, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_01e7;
		}
	}
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_78 = __this->get__asciiEscape_0();
		uint32_t L_79 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_80;
		L_80 = ReadOnlySpan_1_ToArray_m417BC72E6DBE40B5E87B8F5E8319C570D1560D7B((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_12), /*hidden argument*/ReadOnlySpan_1_ToArray_m417BC72E6DBE40B5E87B8F5E8319C570D1560D7B_RuntimeMethod_var);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_80);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_80);
	}

IL_01e7:
	{
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_81 = ___utf8Destination1;
		bool L_82;
		L_82 = ReadOnlySpan_1_TryCopyTo_m95BD073B73E9D5239BC5A665536D3C06FC9897E6((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_12), L_81, /*hidden argument*/ReadOnlySpan_1_TryCopyTo_m95BD073B73E9D5239BC5A665536D3C06FC9897E6_RuntimeMethod_var);
		if (!L_82)
		{
			goto IL_023f;
		}
	}
	{
		int32_t L_83 = V_11;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_84;
		L_84 = Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___utf8Destination1), L_83, /*hidden argument*/Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_RuntimeMethod_var);
		___utf8Destination1 = L_84;
		goto IL_0217;
	}

IL_01fe:
	{
		int32_t* L_85 = ___bytesConsumed2;
		int32_t L_86 = V_0;
		int32_t L_87;
		L_87 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		*((int32_t*)L_85) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)L_87));
		int32_t* L_88 = ___bytesWritten3;
		int32_t L_89 = V_1;
		int32_t L_90;
		L_90 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___utf8Destination1), /*hidden argument*/Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)L_90));
		return (int32_t)(3);
	}

IL_0217:
	{
		int32_t L_91 = V_5;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_92;
		L_92 = ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), L_91, /*hidden argument*/ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		___utf8Source0 = L_92;
	}

IL_0222:
	{
		bool L_93;
		L_93 = ReadOnlySpan_1_get_IsEmpty_m42772AEFB3C5778AC760E95D3D24EDF45179469D((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), /*hidden argument*/ReadOnlySpan_1_get_IsEmpty_m42772AEFB3C5778AC760E95D3D24EDF45179469D_RuntimeMethod_var);
		if (!L_93)
		{
			goto IL_002a;
		}
	}

IL_022e:
	{
		int32_t* L_94 = ___bytesConsumed2;
		int32_t L_95 = V_0;
		*((int32_t*)L_94) = (int32_t)L_95;
		int32_t* L_96 = ___bytesWritten3;
		int32_t L_97 = V_1;
		int32_t L_98;
		L_98 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___utf8Destination1), /*hidden argument*/Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		*((int32_t*)L_96) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_97, (int32_t)L_98));
		return (int32_t)(0);
	}

IL_023f:
	{
		int32_t* L_99 = ___bytesConsumed2;
		int32_t L_100 = V_0;
		int32_t L_101;
		L_101 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		*((int32_t*)L_99) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_100, (int32_t)L_101));
		int32_t* L_102 = ___bytesWritten3;
		int32_t L_103 = V_1;
		int32_t L_104;
		L_104 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___utf8Destination1), /*hidden argument*/Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		*((int32_t*)L_102) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_103, (int32_t)L_104));
		return (int32_t)(1);
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeUtf8Shim(System.Text.Encodings.Web.TextEncoder,System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_EncodeUtf8Shim_m684972BA34BD163457EB3DE758CB17F18A0B1E9F (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * ___encoder0, ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___utf8Source1, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___utf8Destination2, int32_t* ___bytesConsumed3, int32_t* ___bytesWritten4, bool ___isFinalBlock5, const RuntimeMethod* method)
{
	{
		TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * L_0 = ___encoder0;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_1 = ___utf8Source1;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_2 = ___utf8Destination2;
		int32_t* L_3 = ___bytesConsumed3;
		int32_t* L_4 = ___bytesWritten4;
		bool L_5 = ___isFinalBlock5;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker5< int32_t, ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 , Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 , int32_t*, int32_t*, bool >::Invoke(7 /* System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeUtf8(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean) */, L_0, L_1, L_2, (int32_t*)L_3, (int32_t*)L_4, L_5);
		return L_6;
	}
}
// System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::Encode(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_Encode_mDF413194DAB470D500D4F0A2533E61C1853231D2 (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * __this, ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3  ___source0, Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D  ___destination1, int32_t* ___charsConsumed2, int32_t* ___charsWritten3, bool ___isFinalBlock4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m5BB7C3F8AAB56CE5B0E88EC50C24455C10198D0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_TryCopyTo_m710444CA077294DBF5F11D94CDEFB195E9BFCDC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m979A3AE3BF7796824619B1FF2DA0847A0C82433D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_mF0F32BAB71A38A2EBC9832D4E382649180760C03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_IsEmpty_mDB67D262DE62F89A2C557062CE73384C8E8921D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m102A7AD9B8F41CC1099A041EE9CA4EB824471429_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar* V_3 = NULL;
	Il2CppChar* V_4 = NULL;
	{
		Il2CppChar* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m5BB7C3F8AAB56CE5B0E88EC50C24455C10198D0A((ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_GetPinnableReference_m5BB7C3F8AAB56CE5B0E88EC50C24455C10198D0A_RuntimeMethod_var);
		V_1 = (Il2CppChar*)L_0;
		Il2CppChar* L_1 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_1);
		bool L_2;
		L_2 = ReadOnlySpan_1_get_IsEmpty_m979A3AE3BF7796824619B1FF2DA0847A0C82433D((ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_IsEmpty_m979A3AE3BF7796824619B1FF2DA0847A0C82433D_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar* L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_inline((ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_RuntimeMethod_var);
		int32_t L_5;
		L_5 = VirtFuncInvoker2< int32_t, Il2CppChar*, int32_t >::Invoke(5 /* System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncode(System.Char*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_3, L_4);
		int32_t L_6 = L_5;
		V_2 = L_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_004f;
		}
	}

IL_0027:
	{
		Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D  L_7 = ___destination1;
		bool L_8;
		L_8 = ReadOnlySpan_1_TryCopyTo_m710444CA077294DBF5F11D94CDEFB195E9BFCDC7((ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 *)(&___source0), L_7, /*hidden argument*/ReadOnlySpan_1_TryCopyTo_m710444CA077294DBF5F11D94CDEFB195E9BFCDC7_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t* L_9 = ___charsConsumed2;
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_inline((ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_RuntimeMethod_var);
		*((int32_t*)L_9) = (int32_t)L_10;
		int32_t* L_11 = ___charsWritten3;
		int32_t L_12;
		L_12 = ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_inline((ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_RuntimeMethod_var);
		*((int32_t*)L_11) = (int32_t)L_12;
		return (int32_t)(0);
	}

IL_0046:
	{
		int32_t* L_13 = ___charsConsumed2;
		*((int32_t*)L_13) = (int32_t)0;
		int32_t* L_14 = ___charsWritten3;
		*((int32_t*)L_14) = (int32_t)0;
		return (int32_t)(1);
	}

IL_004f:
	{
		bool L_15;
		L_15 = Span_1_get_IsEmpty_mDB67D262DE62F89A2C557062CE73384C8E8921D6((Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D *)(&___destination1), /*hidden argument*/Span_1_get_IsEmpty_mDB67D262DE62F89A2C557062CE73384C8E8921D6_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		int32_t* L_16 = ___charsConsumed2;
		*((int32_t*)L_16) = (int32_t)0;
		int32_t* L_17 = ___charsWritten3;
		*((int32_t*)L_17) = (int32_t)0;
		return (int32_t)(1);
	}

IL_0061:
	{
		Il2CppChar* L_18;
		L_18 = Span_1_GetPinnableReference_mF0F32BAB71A38A2EBC9832D4E382649180760C03((Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D *)(&___destination1), /*hidden argument*/Span_1_GetPinnableReference_mF0F32BAB71A38A2EBC9832D4E382649180760C03_RuntimeMethod_var);
		V_4 = (Il2CppChar*)L_18;
		Il2CppChar* L_19 = V_4;
		V_3 = (Il2CppChar*)((uintptr_t)L_19);
		Il2CppChar* L_20 = V_3;
		int32_t L_21;
		L_21 = Span_1_get_Length_m102A7AD9B8F41CC1099A041EE9CA4EB824471429_inline((Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D *)(&___destination1), /*hidden argument*/Span_1_get_Length_m102A7AD9B8F41CC1099A041EE9CA4EB824471429_RuntimeMethod_var);
		Il2CppChar* L_22 = V_0;
		int32_t L_23;
		L_23 = ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_inline((ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_RuntimeMethod_var);
		int32_t* L_24 = ___charsConsumed2;
		int32_t* L_25 = ___charsWritten3;
		int32_t L_26 = V_2;
		bool L_27 = ___isFinalBlock4;
		int32_t L_28;
		L_28 = TextEncoder_EncodeIntoBuffer_mC265CDC53C0F91C880F90549DFCD20B53BDB8477(__this, (Il2CppChar*)(Il2CppChar*)L_20, L_21, (Il2CppChar*)(Il2CppChar*)L_22, L_23, (int32_t*)L_24, (int32_t*)L_25, L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncodeUtf8(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_FindFirstCharacterToEncodeUtf8_m826C81094940DA8C08DEF27582009BCA1C7ACD66 (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * __this, ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___utf8Text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Text0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_006e;
	}

IL_000c:
	{
		int32_t L_1 = V_1;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Text0), L_1, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_2 = (uint8_t)L_3;
		uint8_t L_4 = V_2;
		bool L_5;
		L_5 = UnicodeUtility_IsAsciiCodePoint_m5F1C9C11917639977FA1A634E3BFF18039D9D91B_inline(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		uint8_t L_6 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = TextEncoder_GetAsciiEncoding_mB89B4D79E87D8BCCAD5B71508B7D871775DF9C4D_inline(__this, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ((TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_StaticFields*)il2cpp_codegen_static_fields_for(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var))->get_s_noEscape_1();
		if ((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_7) == ((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Text0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		int32_t L_11 = V_1;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10)), (int32_t)L_11));
	}

IL_0038:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		goto IL_006e;
	}

IL_003e:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_14 = V_1;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_15;
		L_15 = ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Text0), L_14, /*hidden argument*/ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		___utf8Text0 = L_15;
	}

IL_004c:
	{
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_16 = ___utf8Text0;
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = UnicodeHelpers_DecodeScalarValueFromUtf8_mDE1BBD5F544A5FC12417E11907D71541CA1F34AA(L_16, (uint32_t*)(&V_3), (int32_t*)(&V_4), /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0061;
		}
	}
	{
		uint32_t L_18 = V_3;
		bool L_19;
		L_19 = VirtFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_18);
		if (!L_19)
		{
			goto IL_006b;
		}
	}

IL_0061:
	{
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Text0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21));
	}

IL_006b:
	{
		int32_t L_22 = V_4;
		V_1 = L_22;
	}

IL_006e:
	{
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___utf8Text0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}
}
// System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncodeUtf8Shim(System.Text.Encodings.Web.TextEncoder,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_FindFirstCharacterToEncodeUtf8Shim_mFCC30ABA97005CA45EBCBEA49E4E4999C415FC89 (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * ___encoder0, ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___utf8Text1, const RuntimeMethod* method)
{
	{
		TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * L_0 = ___encoder0;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_1 = ___utf8Text1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker1< int32_t, ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  >::Invoke(9 /* System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncodeUtf8(System.ReadOnlySpan`1<System.Byte>) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryCopyCharacters(System.Char[],System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryCopyCharacters_mF10274C7421F58B9BB0B2F3FEEE4B68A17876083 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___source0, Il2CppChar* ___destination1, int32_t ___destinationLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___destinationLength2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___source0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_2 = ___numberOfCharactersWritten3;
		*((int32_t*)L_2) = (int32_t)0;
		return (bool)0;
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_001d;
	}

IL_000f:
	{
		Il2CppChar* L_3 = ___destination1;
		int32_t L_4 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___source0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)2))))) = (int16_t)L_8;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_10 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = ___source0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		int32_t* L_12 = ___numberOfCharactersWritten3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = ___source0;
		NullCheck(L_13);
		*((int32_t*)L_12) = (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)));
		return (bool)1;
	}
}
// System.Boolean System.Text.Encodings.Web.TextEncoder::TryWriteScalarAsChar(System.Int32,System.Char*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryWriteScalarAsChar_m063A70791C8578683389989AC4A245809D0A30FD (int32_t ___unicodeScalar0, Il2CppChar* ___destination1, int32_t ___destinationLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___destinationLength2;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_1 = ___numberOfCharactersWritten3;
		*((int32_t*)L_1) = (int32_t)0;
		return (bool)0;
	}

IL_0009:
	{
		Il2CppChar* L_2 = ___destination1;
		int32_t L_3 = ___unicodeScalar0;
		*((int16_t*)L_2) = (int16_t)((int32_t)((uint16_t)L_3));
		int32_t* L_4 = ___numberOfCharactersWritten3;
		*((int32_t*)L_4) = (int32_t)1;
		return (bool)1;
	}
}
// System.Byte[] System.Text.Encodings.Web.TextEncoder::GetAsciiEncoding(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* TextEncoder_GetAsciiEncoding_mB89B4D79E87D8BCCAD5B71508B7D871775DF9C4D (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_0 = __this->get__asciiEscape_0();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		uint8_t L_2 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_5 = ___value0;
		bool L_6;
		L_6 = VirtFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_5);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ((TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_StaticFields*)il2cpp_codegen_static_fields_for(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var))->get_s_noEscape_1();
		V_0 = L_7;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_8 = __this->get__asciiEscape_0();
		uint8_t L_9 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_10);
	}

IL_0024:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder__ctor_m44443D2D8E5E0DE1A08CA571F175F89BE4C84800 (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_0 = (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D*)(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D*)SZArrayNew(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->set__asciiEscape_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder__cctor_m5847FCA1E2F6EE21B07093A50C0ABB62395F7E69 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_inline(/*hidden argument*/Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_RuntimeMethod_var);
		((TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_StaticFields*)il2cpp_codegen_static_fields_for(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var))->set_s_noEscape_1(L_0);
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
// System.Void System.Text.Encodings.Web.TextEncoderSettings::.ctor(System.Text.Unicode.UnicodeRange[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings__ctor_mE935C030DD513103150FD00B24043252B1DB7687 (TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * __this, UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* ___allowedRanges0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* L_0 = ___allowedRanges0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3D7E554C2FD3D52D9690E3D5BB7B7321C3FA52B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings__ctor_mE935C030DD513103150FD00B24043252B1DB7687_RuntimeMethod_var)));
	}

IL_0014:
	{
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  L_2;
		L_2 = AllowedCharactersBitmap_CreateNew_m14169BF831F7B523DD8A9C33E88809F95D5F6C72(/*hidden argument*/NULL);
		__this->set__allowedCharactersBitmap_0(L_2);
		UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* L_3 = ___allowedRanges0;
		VirtActionInvoker1< UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* >::Invoke(5 /* System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRanges(System.Text.Unicode.UnicodeRange[]) */, __this, L_3);
		return;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRange(System.Text.Unicode.UnicodeRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings_AllowRange_mF65E74D608E98B9E1F5839CAA552F7D333470C79 (TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * __this, UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * ___range0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_0 = ___range0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings_AllowRange_mF65E74D608E98B9E1F5839CAA552F7D333470C79_RuntimeMethod_var)));
	}

IL_000e:
	{
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_2 = ___range0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnicodeRange_get_FirstCodePoint_m11B49A8567F3925B1821CF33A2B608D63D0D3E41_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_4 = ___range0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UnicodeRange_get_Length_mF07FA37630B3A651B42578F2A5457A0A7EA565FD_inline(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0033;
	}

IL_0020:
	{
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * L_6 = __this->get_address_of__allowedCharactersBitmap_0();
		int32_t L_7 = V_0;
		int32_t L_8 = V_2;
		AllowedCharactersBitmap_AllowCharacter_mFDB18DA4FB0BCC807F7981A820B0DA8AD0D860F4((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)L_6, ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)))), /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRanges(System.Text.Unicode.UnicodeRange[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings_AllowRanges_m7BB39186432D98EBF4CAD73EFD07FB5A86B45480 (TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * __this, UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* ___ranges0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* L_0 = ___ranges0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FC0613DB074A9C5DAB592FE3F86B3EDD439F7E5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings_AllowRanges_m7BB39186432D98EBF4CAD73EFD07FB5A86B45480_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* L_2 = ___ranges0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		VirtActionInvoker1< UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * >::Invoke(4 /* System.Void System.Text.Encodings.Web.TextEncoderSettings::AllowRange(System.Text.Unicode.UnicodeRange) */, __this, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		UnicodeRangeU5BU5D_t51FA61BA8802B18294BE1F7AACFE1540A3E09F7C* L_8 = ___ranges0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Text.Internal.AllowedCharactersBitmap System.Text.Encodings.Web.TextEncoderSettings::GetAllowedCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  TextEncoderSettings_GetAllowedCharacters_m7326CF417D59BC1B4AC1CB65C94075AEF9D0D508 (TextEncoderSettings_t735BC067FCBA717901A0F321D1DF0F8C5BB07EEA * __this, const RuntimeMethod* method)
{
	{
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * L_0 = __this->get_address_of__allowedCharactersBitmap_0();
		AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32  L_1;
		L_1 = AllowedCharactersBitmap_Clone_mD443E91B80B3A74BAD5BB1ADFD17D18A1EB5BCCF((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)L_0, /*hidden argument*/NULL);
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
// System.UInt32[] System.Text.Unicode.UnicodeHelpers::CreateDefinedCharacterBitmapMachineEndian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* UnicodeHelpers_CreateDefinedCharacterBitmapMachineEndian_mAAD623D1287FD103187E45A83449C550EF5CDE25 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_0;
		L_0 = UnicodeHelpers_get_DefinedCharsBitmapSpan_m9B4E705E8157319B27641279BD71A6479338C711(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_1/(int32_t)4)));
		V_1 = L_2;
		V_2 = 0;
		goto IL_002f;
	}

IL_0019:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = V_1;
		int32_t L_4 = V_2;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_5 = V_0;
		uint32_t L_6;
		L_6 = BinaryPrimitives_ReadUInt32LittleEndian_mEE46641BC73CAACA64F2952CD791BE96F5DB44F4_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)L_6);
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_7;
		L_7 = ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_0), 4, /*hidden argument*/ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		V_0 = L_7;
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_2;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0019;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_11 = V_1;
		return L_11;
	}
}
// System.Buffers.OperationStatus System.Text.Unicode.UnicodeHelpers::DecodeScalarValueFromUtf8(System.ReadOnlySpan`1<System.Byte>,System.UInt32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_DecodeScalarValueFromUtf8_mDE1BBD5F544A5FC12417E11907D71541CA1F34AA (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, uint32_t* ___result1, int32_t* ___bytesConsumed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_2 = V_0;
		uint8_t* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_2, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_4 = *((uint8_t*)L_3);
		V_1 = L_4;
		uint32_t L_5 = V_1;
		bool L_6;
		L_6 = UnicodeUtility_IsAsciiCodePoint_m5F1C9C11917639977FA1A634E3BFF18039D9D91B_inline(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}

IL_0021:
	{
		int32_t* L_7 = ___bytesConsumed2;
		int32_t L_8 = V_0;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		uint32_t* L_9 = ___result1;
		uint32_t L_10 = V_1;
		*((int32_t*)L_9) = (int32_t)L_10;
		return (int32_t)(0);
	}

IL_002b:
	{
		uint32_t L_11 = V_1;
		bool L_12;
		L_12 = UnicodeUtility_IsInRangeInclusive_m356E6851FA9CC18A1156863D05810C0DC5DE45CF_inline(L_11, ((int32_t)194), ((int32_t)244), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0142;
		}
	}
	{
		uint32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)194)))<<(int32_t)6));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_0;
		int32_t L_16;
		L_16 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_15) < ((uint32_t)L_16))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_17 = V_0;
		uint8_t* L_18;
		L_18 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_17, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_19 = *((uint8_t*)L_18);
		V_2 = ((int8_t)((int8_t)L_19));
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0144;
		}
	}
	{
		uint32_t L_21 = V_1;
		int32_t L_22 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22));
		uint32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)((int32_t)128)));
		uint32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)((int32_t)128)));
		uint32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) >= ((uint32_t)((int32_t)2048)))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_26 = V_1;
		bool L_27;
		L_27 = UnicodeUtility_IsInRangeInclusive_m356E6851FA9CC18A1156863D05810C0DC5DE45CF_inline(L_26, ((int32_t)2080), ((int32_t)3343), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0144;
		}
	}
	{
		uint32_t L_28 = V_1;
		bool L_29;
		L_29 = UnicodeUtility_IsInRangeInclusive_m356E6851FA9CC18A1156863D05810C0DC5DE45CF_inline(L_28, ((int32_t)2912), ((int32_t)2943), /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0144;
		}
	}
	{
		uint32_t L_30 = V_1;
		bool L_31;
		L_31 = UnicodeUtility_IsInRangeInclusive_m356E6851FA9CC18A1156863D05810C0DC5DE45CF_inline(L_30, ((int32_t)3072), ((int32_t)3087), /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0144;
		}
	}
	{
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		int32_t L_33 = V_0;
		int32_t L_34;
		L_34 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_33) < ((uint32_t)L_34))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_35 = V_0;
		uint8_t* L_36;
		L_36 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_35, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_37 = *((uint8_t*)L_36);
		V_2 = ((int8_t)((int8_t)L_37));
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0144;
		}
	}
	{
		uint32_t L_39 = V_1;
		V_1 = ((int32_t)((int32_t)L_39<<(int32_t)6));
		uint32_t L_40 = V_1;
		int32_t L_41 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_41));
		uint32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)((int32_t)128)));
		uint32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)((int32_t)131072)));
		uint32_t L_44 = V_1;
		if ((!(((uint32_t)L_44) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		int32_t L_46 = V_0;
		int32_t L_47;
		L_47 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_46) < ((uint32_t)L_47))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_48 = V_0;
		uint8_t* L_49;
		L_49 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_48, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_50 = *((uint8_t*)L_49);
		V_2 = ((int8_t)((int8_t)L_50));
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0144;
		}
	}
	{
		uint32_t L_52 = V_1;
		V_1 = ((int32_t)((int32_t)L_52<<(int32_t)6));
		uint32_t L_53 = V_1;
		int32_t L_54 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54));
		uint32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)((int32_t)128)));
		uint32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)((int32_t)4194304)));
		goto IL_0021;
	}

IL_0142:
	{
		V_0 = 1;
	}

IL_0144:
	{
		int32_t* L_57 = ___bytesConsumed2;
		int32_t L_58 = V_0;
		*((int32_t*)L_57) = (int32_t)L_58;
		uint32_t* L_59 = ___result1;
		*((int32_t*)L_59) = (int32_t)((int32_t)65533);
		return (int32_t)(3);
	}

IL_0150:
	{
		int32_t* L_60 = ___bytesConsumed2;
		int32_t L_61 = V_0;
		*((int32_t*)L_60) = (int32_t)L_61;
		uint32_t* L_62 = ___result1;
		*((int32_t*)L_62) = (int32_t)((int32_t)65533);
		return (int32_t)(2);
	}
}
// System.ReadOnlySpan`1<System.UInt32> System.Text.Unicode.UnicodeHelpers::GetDefinedCharacterBitmap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  UnicodeHelpers_GetDefinedCharacterBitmap_mF2614CE8402C3AD0D597B2467AA10C1187EECBB2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAAB6228322DAC99EC663AF8EC8F7A9E640455F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m6A6064DE553AEA08017468938076DDB19712E2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_1;
		L_1 = UnicodeHelpers_get_DefinedCharsBitmapSpan_m9B4E705E8157319B27641279BD71A6479338C711(/*hidden argument*/NULL);
		ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  L_2;
		L_2 = MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAAB6228322DAC99EC663AF8EC8F7A9E640455F16(L_1, /*hidden argument*/MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAAB6228322DAC99EC663AF8EC8F7A9E640455F16_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = ((UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var))->get__definedCharacterBitmapBigEndian_0();
		ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  L_4;
		L_4 = ReadOnlySpan_1_op_Implicit_m6A6064DE553AEA08017468938076DDB19712E2AC(L_3, /*hidden argument*/ReadOnlySpan_1_op_Implicit_m6A6064DE553AEA08017468938076DDB19712E2AC_RuntimeMethod_var);
		return L_4;
	}
}
// System.Int32 System.Text.Unicode.UnicodeHelpers::GetScalarValueFromUtf16(System.Char,System.Nullable`1<System.Char>,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_GetScalarValueFromUtf16_m7CE3698BFFC5FD0C99E25BD8BDE9DD8315419AB1 (Il2CppChar ___first0, Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95  ___second1, bool* ___wasSurrogatePair2, bool* ___needsMoreData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___first0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		bool* L_2 = ___wasSurrogatePair2;
		*((int8_t*)L_2) = (int8_t)0;
		bool* L_3 = ___needsMoreData3;
		*((int8_t*)L_3) = (int8_t)0;
		Il2CppChar L_4 = ___first0;
		return L_4;
	}

IL_0010:
	{
		Il2CppChar L_5 = ___first0;
		Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95  L_6 = ___second1;
		bool* L_7 = ___wasSurrogatePair2;
		bool* L_8 = ___needsMoreData3;
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = UnicodeHelpers_GetScalarValueFromUtf16Slow_mF4CC469F6B5CDF1745AD96AD3DFA901A08CEFFE2(L_5, L_6, (bool*)L_7, (bool*)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 System.Text.Unicode.UnicodeHelpers::GetScalarValueFromUtf16Slow(System.Char,System.Nullable`1<System.Char>,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_GetScalarValueFromUtf16Slow_mF4CC469F6B5CDF1745AD96AD3DFA901A08CEFFE2 (Il2CppChar ___first0, Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95  ___second1, bool* ___wasSurrogatePair2, bool* ___needMoreData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9E84B12A700AF06C8799D688EDE83C1BEE4381E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m2197C58C1985A610F59DDC311861DDAA36642E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___first0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsHighSurrogate_m7BECD1C98C902946F069D8936F8A557F1F7DFF01(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m9E84B12A700AF06C8799D688EDE83C1BEE4381E3_inline((Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 *)(&___second1), /*hidden argument*/Nullable_1_get_HasValue_m9E84B12A700AF06C8799D688EDE83C1BEE4381E3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		Il2CppChar L_3;
		L_3 = Nullable_1_get_Value_m2197C58C1985A610F59DDC311861DDAA36642E2A((Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 *)(&___second1), /*hidden argument*/Nullable_1_get_Value_m2197C58C1985A610F59DDC311861DDAA36642E2A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Char_IsLowSurrogate_m44FA7AA923FDA925E1D536F3DA0A7E1E049E936E(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		bool* L_5 = ___wasSurrogatePair2;
		*((int8_t*)L_5) = (int8_t)1;
		bool* L_6 = ___needMoreData3;
		*((int8_t*)L_6) = (int8_t)0;
		Il2CppChar L_7 = ___first0;
		Il2CppChar L_8;
		L_8 = Nullable_1_get_Value_m2197C58C1985A610F59DDC311861DDAA36642E2A((Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 *)(&___second1), /*hidden argument*/Nullable_1_get_Value_m2197C58C1985A610F59DDC311861DDAA36642E2A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = UnicodeHelpers_GetScalarValueFromUtf16SurrogatePair_mAF28A8A92E4CC9F36CE16141B3CE68E5957666EA(L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0033:
	{
		bool* L_10 = ___wasSurrogatePair2;
		*((int8_t*)L_10) = (int8_t)0;
		bool* L_11 = ___needMoreData3;
		*((int8_t*)L_11) = (int8_t)0;
		return ((int32_t)65533);
	}

IL_003f:
	{
		bool* L_12 = ___wasSurrogatePair2;
		*((int8_t*)L_12) = (int8_t)0;
		bool* L_13 = ___needMoreData3;
		*((int8_t*)L_13) = (int8_t)1;
		return ((int32_t)65533);
	}

IL_004b:
	{
		bool* L_14 = ___wasSurrogatePair2;
		*((int8_t*)L_14) = (int8_t)0;
		bool* L_15 = ___needMoreData3;
		*((int8_t*)L_15) = (int8_t)0;
		return ((int32_t)65533);
	}
}
// System.Int32 System.Text.Unicode.UnicodeHelpers::GetScalarValueFromUtf16SurrogatePair(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_GetScalarValueFromUtf16SurrogatePair_mAF28A8A92E4CC9F36CE16141B3CE68E5957666EA (Il2CppChar ___highSurrogate0, Il2CppChar ___lowSurrogate1, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___lowSurrogate1;
		Il2CppChar L_1 = ___highSurrogate0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)1023)))|(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)1023))), (int32_t)((int32_t)64)))<<(int32_t)((int32_t)10)))));
	}
}
// System.Void System.Text.Unicode.UnicodeHelpers::GetUtf16SurrogatePairFromAstralScalarValue(System.Int32,System.Char&,System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_m24F8FC28935ACED6DD83D08495D80181FC045030 (int32_t ___scalar0, Il2CppChar* ___highSurrogate1, Il2CppChar* ___lowSurrogate2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___scalar0;
		V_0 = ((int32_t)((int32_t)L_0&(int32_t)((int32_t)65535)));
		int32_t L_1 = ___scalar0;
		V_1 = ((int32_t)((int32_t)L_1>>(int32_t)((int32_t)16)));
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		Il2CppChar* L_3 = ___highSurrogate1;
		int32_t L_4 = V_2;
		int32_t L_5 = V_0;
		*((int16_t*)L_3) = (int16_t)((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)55296)|(int32_t)((int32_t)((int32_t)L_4<<(int32_t)6))))|(int32_t)((int32_t)((int32_t)L_5>>(int32_t)((int32_t)10)))))));
		Il2CppChar* L_6 = ___lowSurrogate2;
		int32_t L_7 = V_0;
		*((int16_t*)L_6) = (int16_t)((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)56320)|(int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)1023)))))));
		return;
	}
}
// System.Boolean System.Text.Unicode.UnicodeHelpers::IsSupplementaryCodePoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeHelpers_IsSupplementaryCodePoint_m81291E409B6A7CBB820B0076BA9E76A3796FAD24 (int32_t ___scalar0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___scalar0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)-65536)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.ReadOnlySpan`1<System.Byte> System.Text.Unicode.UnicodeHelpers::get_DefinedCharsBitmapSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  UnicodeHelpers_get_DefinedCharsBitmapSpan_m9B4E705E8157319B27641279BD71A6479338C711 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m52E53BB8862F26B1C23ED6BF8DE68F97F9BEFDDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDEF1328605117E6D1E250D3B89F309127B0B94BE____B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDEF1328605117E6D1E250D3B89F309127B0B94BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ReadOnlySpan_1__ctor_m52E53BB8862F26B1C23ED6BF8DE68F97F9BEFDDF_inline((&L_0), (void*)(void*)(il2cpp_codegen_get_field_data(U3CPrivateImplementationDetailsU3E_tDEF1328605117E6D1E250D3B89F309127B0B94BE____B834DC34C55D9E54905161E0ED4AF27E7F1C49AF_0_FieldInfo_var)), ((int32_t)8192), /*hidden argument*/ReadOnlySpan_1__ctor_m52E53BB8862F26B1C23ED6BF8DE68F97F9BEFDDF_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void System.Text.Unicode.UnicodeHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeHelpers__cctor_m4882706A4D227216FF73C63AFCA582BBDA918AE0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1;
		L_1 = UnicodeHelpers_CreateDefinedCharacterBitmapMachineEndian_mAAD623D1287FD103187E45A83449C550EF5CDE25(/*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = ((UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(NULL));
	}

IL_000f:
	{
		((UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var))->set__definedCharacterBitmapBigEndian_0(G_B3_0);
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
// System.Void System.Text.Unicode.UnicodeRange::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange__ctor_m8FEA703296C54314A0A2DF880B80CADDDCDD1B3F (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, int32_t ___firstCodePoint0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___firstCodePoint0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___firstCodePoint0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09EAD6A50C87B14995000A914300979F01096C97)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange__ctor_m8FEA703296C54314A0A2DF880B80CADDDCDD1B3F_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_3 = ___length1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = ___firstCodePoint0;
		int32_t L_5 = ___length1;
		if ((((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_4)), (int64_t)((int64_t)((int64_t)L_5))))) <= ((int64_t)((int64_t)((int64_t)((int32_t)65536))))))
		{
			goto IL_0039;
		}
	}

IL_002e:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange__ctor_m8FEA703296C54314A0A2DF880B80CADDDCDD1B3F_RuntimeMethod_var)));
	}

IL_0039:
	{
		int32_t L_7 = ___firstCodePoint0;
		UnicodeRange_set_FirstCodePoint_m137A5051BEF90AF87488EC74807E292B5C56B33D_inline(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___length1;
		UnicodeRange_set_Length_m6B3F5E3A53101D2623993EDF4F4B84EB724C7D36_inline(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Text.Unicode.UnicodeRange::get_FirstCodePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_m11B49A8567F3925B1821CF33A2B608D63D0D3E41 (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFirstCodePointU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void System.Text.Unicode.UnicodeRange::set_FirstCodePoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m137A5051BEF90AF87488EC74807E292B5C56B33D (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFirstCodePointU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 System.Text.Unicode.UnicodeRange::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_mF07FA37630B3A651B42578F2A5457A0A7EA565FD (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void System.Text.Unicode.UnicodeRange::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m6B3F5E3A53101D2623993EDF4F4B84EB724C7D36 (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRange::Create(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * UnicodeRange_Create_mF57560525688BC0FE724E1200443EE7DB3DFDCE8 (Il2CppChar ___firstCharacter0, Il2CppChar ___lastCharacter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___lastCharacter1;
		Il2CppChar L_1 = ___firstCharacter0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7724F58887AE658863220F8D9138F5AC5532B2C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange_Create_mF57560525688BC0FE724E1200443EE7DB3DFDCE8_RuntimeMethod_var)));
	}

IL_000f:
	{
		Il2CppChar L_3 = ___firstCharacter0;
		Il2CppChar L_4 = ___lastCharacter1;
		Il2CppChar L_5 = ___firstCharacter0;
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_6 = (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E *)il2cpp_codegen_object_new(UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E_il2cpp_TypeInfo_var);
		UnicodeRange__ctor_m8FEA703296C54314A0A2DF880B80CADDDCDD1B3F(L_6, L_3, ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)))), /*hidden argument*/NULL);
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
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::CreateRange(System.Text.Unicode.UnicodeRange&,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * UnicodeRanges_CreateRange_mFCF51562597A3A1DEAAFADE7AFE4B51FB7F8BD1F (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E ** ___range0, Il2CppChar ___first1, Il2CppChar ___last2, const RuntimeMethod* method)
{
	{
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E ** L_0 = ___range0;
		Il2CppChar L_1 = ___first1;
		Il2CppChar L_2 = ___last2;
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_3;
		L_3 = UnicodeRange_Create_mF57560525688BC0FE724E1200443EE7DB3DFDCE8(L_1, L_2, /*hidden argument*/NULL);
		VolatileWrite((UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E **)L_0, L_3);
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E ** L_4 = ___range0;
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_5 = *((UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E **)L_4);
		return L_5;
	}
}
// System.Text.Unicode.UnicodeRange System.Text.Unicode.UnicodeRanges::get_BasicLatin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * UnicodeRanges_get_BasicLatin_mD27B8D9C7221DA81F2724B7C9230CCF882D4E02E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRanges_t4847C03484F8FC64902385275DC7357E777F6F1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * G_B2_0 = NULL;
	UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * G_B1_0 = NULL;
	{
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_0 = ((UnicodeRanges_t4847C03484F8FC64902385275DC7357E777F6F1F_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_t4847C03484F8FC64902385275DC7357E777F6F1F_il2cpp_TypeInfo_var))->get__u0000_0();
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
	}
	{
		UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * L_2;
		L_2 = UnicodeRanges_CreateRange_mFCF51562597A3A1DEAAFADE7AFE4B51FB7F8BD1F((UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E **)(((UnicodeRanges_t4847C03484F8FC64902385275DC7357E777F6F1F_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_t4847C03484F8FC64902385275DC7357E777F6F1F_il2cpp_TypeInfo_var))->get_address_of__u0000_0()), 0, ((int32_t)127), /*hidden argument*/NULL);
		G_B2_0 = L_2;
	}

IL_0016:
	{
		return G_B2_0;
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
// System.Boolean System.Text.UnicodeUtility::IsAsciiCodePoint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_m5F1C9C11917639977FA1A634E3BFF18039D9D91B (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.UnicodeUtility::IsInRangeInclusive(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_m356E6851FA9CC18A1156863D05810C0DC5DE45CF (uint32_t ___value0, uint32_t ___lowerBound1, uint32_t ___upperBound2, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1 = ___lowerBound1;
		uint32_t L_2 = ___upperBound2;
		uint32_t L_3 = ___lowerBound1;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  UnicodeHelpers_GetDefinedCharacterBitmap_mF2614CE8402C3AD0D597B2467AA10C1187EECBB2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAAB6228322DAC99EC663AF8EC8F7A9E640455F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m6A6064DE553AEA08017468938076DDB19712E2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_1;
		L_1 = UnicodeHelpers_get_DefinedCharsBitmapSpan_m9B4E705E8157319B27641279BD71A6479338C711(/*hidden argument*/NULL);
		ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  L_2;
		L_2 = MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAAB6228322DAC99EC663AF8EC8F7A9E640455F16(L_1, /*hidden argument*/MemoryMarshal_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAAB6228322DAC99EC663AF8EC8F7A9E640455F16_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = ((UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var))->get__definedCharacterBitmapBigEndian_0();
		ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8  L_4;
		L_4 = ReadOnlySpan_1_op_Implicit_m6A6064DE553AEA08017468938076DDB19712E2AC(L_3, /*hidden argument*/ReadOnlySpan_1_op_Implicit_m6A6064DE553AEA08017468938076DDB19712E2AC_RuntimeMethod_var);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedCharactersBitmap_IsUnicodeScalarAllowed_mBBF4654B17B5B9B894C393A16E6FB7D08EF84E34_inline (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, int32_t ___unicodeScalar0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___unicodeScalar0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)5));
		int32_t L_1 = ___unicodeScalar0;
		V_1 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = __this->get__allowedCharacters_0();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_5>>((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AllowedCharactersBitmap_FindFirstCharacterToEncode_m3F245BEF781348852865BB264D940B503D420EDB_inline (AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 * __this, Il2CppChar* ___text0, int32_t ___textLength1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		Il2CppChar* L_0 = ___text0;
		int32_t L_1 = V_0;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)2)))));
		bool L_3;
		L_3 = AllowedCharactersBitmap_IsCharacterAllowed_m983FAA035CC1BE68D78EBDF9169EFD0BE2A9C14A((AllowedCharactersBitmap_t552D36436C3272806DC524F2D41D4FEF7457CC32 *)__this, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___textLength1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeHelpers_IsSupplementaryCodePoint_m81291E409B6A7CBB820B0076BA9E76A3796FAD24_inline (int32_t ___scalar0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___scalar0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)-65536)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextEncoder_TryWriteScalarAsChar_m063A70791C8578683389989AC4A245809D0A30FD_inline (int32_t ___unicodeScalar0, Il2CppChar* ___destination1, int32_t ___destinationLength2, int32_t* ___numberOfCharactersWritten3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___destinationLength2;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_1 = ___numberOfCharactersWritten3;
		*((int32_t*)L_1) = (int32_t)0;
		return (bool)0;
	}

IL_0009:
	{
		Il2CppChar* L_2 = ___destination1;
		int32_t L_3 = ___unicodeScalar0;
		*((int16_t*)L_2) = (int16_t)((int32_t)((uint16_t)L_3));
		int32_t* L_4 = ___numberOfCharactersWritten3;
		*((int32_t*)L_4) = (int32_t)1;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar HexUtil_Int32LsbToHexDigit_mB8E80ED63D8443ADFEB9BC62D4ED8CF50F4657DF_inline (int32_t ___value0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)10))))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___value0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)10)))));
		goto IL_0012;
	}

IL_000e:
	{
		int32_t L_2 = ___value0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_2));
	}

IL_0012:
	{
		return ((int32_t)((uint16_t)G_B3_0));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_GetScalarValueFromUtf16_m7CE3698BFFC5FD0C99E25BD8BDE9DD8315419AB1_inline (Il2CppChar ___first0, Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95  ___second1, bool* ___wasSurrogatePair2, bool* ___needsMoreData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___first0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		bool* L_2 = ___wasSurrogatePair2;
		*((int8_t*)L_2) = (int8_t)0;
		bool* L_3 = ___needsMoreData3;
		*((int8_t*)L_3) = (int8_t)0;
		Il2CppChar L_4 = ___first0;
		return L_4;
	}

IL_0010:
	{
		Il2CppChar L_5 = ___first0;
		Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95  L_6 = ___second1;
		bool* L_7 = ___wasSurrogatePair2;
		bool* L_8 = ___needsMoreData3;
		IL2CPP_RUNTIME_CLASS_INIT(UnicodeHelpers_tE5326072AEB3BA913AB86102283F22665614E860_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = UnicodeHelpers_GetScalarValueFromUtf16Slow_mF4CC469F6B5CDF1745AD96AD3DFA901A08CEFFE2(L_5, L_6, (bool*)L_7, (bool*)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_m5F1C9C11917639977FA1A634E3BFF18039D9D91B_inline (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* TextEncoder_GetAsciiEncoding_mB89B4D79E87D8BCCAD5B71508B7D871775DF9C4D_inline (TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_0 = __this->get__asciiEscape_0();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		uint8_t L_2 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_5 = ___value0;
		bool L_6;
		L_6 = VirtFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Text.Encodings.Web.TextEncoder::WillEncode(System.Int32) */, __this, L_5);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ((TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_StaticFields*)il2cpp_codegen_static_fields_for(TextEncoder_t579E44E04E075733152FF580AA180B13DCCED2B7_il2cpp_TypeInfo_var))->get_s_noEscape_1();
		V_0 = L_7;
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_8 = __this->get__asciiEscape_0();
		uint8_t L_9 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_10);
	}

IL_0024:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_m11B49A8567F3925B1821CF33A2B608D63D0D3E41_inline (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFirstCodePointU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_mF07FA37630B3A651B42578F2A5457A0A7EA565FD_inline (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_mEE46641BC73CAACA64F2952CD791BE96F5DB44F4_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m833630665CFD238E8565314AC52CFADD215AB189_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_0 = ___source0;
		uint32_t L_1;
		L_1 = MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m833630665CFD238E8565314AC52CFADD215AB189_inline(L_0, /*hidden argument*/MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m833630665CFD238E8565314AC52CFADD215AB189_RuntimeMethod_var);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_2 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		uint32_t L_3 = V_0;
		uint32_t L_4;
		L_4 = BinaryPrimitives_ReverseEndianness_m7C562C76F215F77432B9600686CB25A54E88CC20_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0015:
	{
		uint32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_m356E6851FA9CC18A1156863D05810C0DC5DE45CF_inline (uint32_t ___value0, uint32_t ___lowerBound1, uint32_t ___upperBound2, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1 = ___lowerBound1;
		uint32_t L_2 = ___upperBound2;
		uint32_t L_3 = ___lowerBound1;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m137A5051BEF90AF87488EC74807E292B5C56B33D_inline (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFirstCodePointU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m6B3F5E3A53101D2623993EDF4F4B84EB724C7D36_inline (UnicodeRange_tA9928B44AFEB5A72E8DC13852CD26B1B981EE52E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t* ReadOnlySpan_1_get_Item_m8946B3269543BA8320E2637F18B4650D0611AE14_gshared_inline (ReadOnlySpan_1_t9B1935E8B7D4B290267E8A535D027D55C09D42F8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m4D1EB8558F17DFE372ECF87D9BCAD112A7F5E6BC(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Pinnable_1_t4E40323FD6DE85A9C83E29C1A0CFB7EFDE2B1424 * L_2 = (Pinnable_1_t4E40323FD6DE85A9C83E29C1A0CFB7EFDE2B1424 *)__this->get__pinnable_0();
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = (intptr_t)__this->get__byteOffset_1();
		V_0 = (intptr_t)L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(intptr_t*)(&V_0), /*hidden argument*/NULL);
		uint32_t* L_5;
		L_5 = ((  uint32_t* (*) (void*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((void*)(void*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_6 = ___index0;
		uint32_t* L_7;
		L_7 = ((  uint32_t* (*) (uint32_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((uint32_t*)(uint32_t*)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (uint32_t*)(L_7);
	}

IL_0030:
	{
		Pinnable_1_t4E40323FD6DE85A9C83E29C1A0CFB7EFDE2B1424 * L_8 = (Pinnable_1_t4E40323FD6DE85A9C83E29C1A0CFB7EFDE2B1424 *)__this->get__pinnable_0();
		NullCheck(L_8);
		uint32_t* L_9 = (uint32_t*)L_8->get_address_of_Data_0();
		intptr_t L_10 = (intptr_t)__this->get__byteOffset_1();
		uint32_t* L_11;
		L_11 = ((  uint32_t* (*) (uint32_t*, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((uint32_t*)(uint32_t*)L_9, (intptr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		int32_t L_12 = ___index0;
		uint32_t* L_13;
		L_13 = ((  uint32_t* (*) (uint32_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((uint32_t*)(uint32_t*)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (uint32_t*)(L_13);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m4D1EB8558F17DFE372ECF87D9BCAD112A7F5E6BC(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_2 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = (intptr_t)__this->get__byteOffset_1();
		V_0 = (intptr_t)L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(intptr_t*)(&V_0), /*hidden argument*/NULL);
		uint8_t* L_5;
		L_5 = ((  uint8_t* (*) (void*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((void*)(void*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_6 = ___index0;
		uint8_t* L_7;
		L_7 = ((  uint8_t* (*) (uint8_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((uint8_t*)(uint8_t*)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (uint8_t*)(L_7);
	}

IL_0030:
	{
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_8 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		NullCheck(L_8);
		uint8_t* L_9 = (uint8_t*)L_8->get_address_of_Data_0();
		intptr_t L_10 = (intptr_t)__this->get__byteOffset_1();
		uint8_t* L_11;
		L_11 = ((  uint8_t* (*) (uint8_t*, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((uint8_t*)(uint8_t*)L_9, (intptr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		int32_t L_12 = ___index0;
		uint8_t* L_13;
		L_13 = ((  uint8_t* (*) (uint8_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((uint8_t*)(uint8_t*)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (uint8_t*)(L_13);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->get__length_2();
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4))))))
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5((int32_t)1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		intptr_t L_5 = (intptr_t)__this->get__byteOffset_1();
		int32_t L_6 = ___start0;
		intptr_t L_7;
		L_7 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((intptr_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (intptr_t)L_7;
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_8 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		intptr_t L_9 = V_0;
		int32_t L_10 = ___length1;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_11;
		memset((&L_11), 0, sizeof(L_11));
		ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_inline((&L_11), (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)L_8, (intptr_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 )L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5((int32_t)1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		intptr_t L_2 = (intptr_t)__this->get__byteOffset_1();
		int32_t L_3 = ___start0;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((intptr_t)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (intptr_t)L_4;
		int32_t L_5 = (int32_t)__this->get__length_2();
		int32_t L_6 = ___start0;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6));
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_7 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_inline((&L_10), (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)L_7, (intptr_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 )L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5((int32_t)1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		intptr_t L_2 = (intptr_t)__this->get__byteOffset_1();
		int32_t L_3 = ___start0;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((intptr_t)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = (intptr_t)L_4;
		int32_t L_5 = (int32_t)__this->get__length_2();
		int32_t L_6 = ___start0;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6));
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_7 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mFF8F544A7E3798F8239A0FEB4D32301758CBFCCA_inline((&L_10), (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)L_7, (intptr_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 )L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m52E53BB8862F26B1C23ED6BF8DE68F97F9BEFDDF_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m4A71872D4B069AF36758A61E4CA3FB663B4E8EC4((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___length1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5((int32_t)1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		int32_t L_4 = ___length1;
		__this->set__length_2(L_4);
		__this->set__pinnable_0((Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)NULL);
		void* L_5 = ___pointer0;
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline((&L_6), (void*)(void*)L_5, /*hidden argument*/NULL);
		__this->set__byteOffset_1((intptr_t)L_6);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m626D8806A4F947921582C93B00D24CA957C9FB13_gshared_inline (ReadOnlySpan_1_t89EC7F5A5B7253DA599EEFE0E19D147F376E9DC3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m102A7AD9B8F41CC1099A041EE9CA4EB824471429_gshared_inline (Span_1_tA75C255D430A726B7E037BEBB5B06E037194902D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ((EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9E84B12A700AF06C8799D688EDE83C1BEE4381E3_gshared_inline (Nullable_1_tFA8B8347F3975A7895A78FAE896D8D88E659AD95 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m7C562C76F215F77432B9600686CB25A54E88CC20_inline (uint32_t ___value0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		V_0 = ((int32_t)((int32_t)L_0&(int32_t)((int32_t)16711935)));
		uint32_t L_1 = ___value0;
		V_1 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_2>>8))|(int32_t)((int32_t)((int32_t)L_3<<(int32_t)((int32_t)24))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)8))|(int32_t)((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m833630665CFD238E8565314AC52CFADD215AB189_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9855119A435C11C8E1E288C0CC4FAD02E4CF2824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m4A71872D4B069AF36758A61E4CA3FB663B4E8EC4((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5((int32_t)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_5 = ___source0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9855119A435C11C8E1E288C0CC4FAD02E4CF2824((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 )L_5, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9855119A435C11C8E1E288C0CC4FAD02E4CF2824_RuntimeMethod_var);
		uint32_t L_7;
		L_7 = IL2CPP_UNSAFE_READ_UNALIGNED(uint32_t, (uint8_t*)(uint8_t*)L_6);
		return (uint32_t)L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length2;
		__this->set__length_2(L_0);
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_1 = ___pinnable0;
		__this->set__pinnable_0(L_1);
		intptr_t L_2 = ___byteOffset1;
		__this->set__byteOffset_1((intptr_t)L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFF8F544A7E3798F8239A0FEB4D32301758CBFCCA_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length2;
		__this->set__length_2(L_0);
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_1 = ___pinnable0;
		__this->set__pinnable_0(L_1);
		intptr_t L_2 = ___byteOffset1;
		__this->set__byteOffset_1((intptr_t)L_2);
		return;
	}
}
