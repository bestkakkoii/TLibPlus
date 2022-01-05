

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for TLibPlus.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "TLibPlus_i.h"

#define TYPE_FORMAT_STRING_SIZE   1263                              
#define PROC_FORMAT_STRING_SIZE   15517                             
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _TLibPlus_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } TLibPlus_MIDL_TYPE_FORMAT_STRING;

typedef struct _TLibPlus_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } TLibPlus_MIDL_PROC_FORMAT_STRING;

typedef struct _TLibPlus_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } TLibPlus_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
static unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, pObject);\
}\
static unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, pObject);\
}\
static unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, pObject);\
}\
static void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
static unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, pObject);\
}\
static unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, pObject);\
}\
static unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, pObject);\
}\
static void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#endif


extern const TLibPlus_MIDL_TYPE_FORMAT_STRING TLibPlus__MIDL_TypeFormatString;
extern const TLibPlus_MIDL_PROC_FORMAT_STRING TLibPlus__MIDL_ProcFormatString;
extern const TLibPlus_MIDL_EXPR_FORMAT_STRING TLibPlus__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITLibPlusInterface_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITLibPlusInterface_ProxyInfo;

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_交换高低8位_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD 变量,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[5556],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_交换高低16位_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 变量,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[5598],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_交换高低32位_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONGLONG 变量,
    /* [retval][out] */ LONGLONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[5640],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_进制字符串转长整形_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR 某进制字符串,
    /* [in] */ LONG 进制数,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[5682],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_进制字符串转超长整形_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [in] */ LONG _Radix,
    /* [out][in] */ VARIANT *llret,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[5730],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_十进制字符串转十进制长整形_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR 整数字符串,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[5784],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_十进制字符串转十进制超长整形_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [out][in] */ VARIANT *llret,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[5826],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_十进制长整形转进制字符串_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [in] */ LONG 进制数,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[5874],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_十进制超长整形进制转字符串_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONGLONG 超长整数,
    /* [in] */ LONG 进制数,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[5922],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_字符串转双精度浮点数_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[5970],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_字符串转浮点数_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ FLOAT *fret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6012],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转WORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数a,
    /* [in] */ LONG 整数b,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6054],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转LONG_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数a,
    /* [in] */ LONG 整数b,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6102],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取低WORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6150],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取高WORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6192],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取低BYTE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD 短整数,
    /* [retval][out] */ BYTE *byret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6234],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取高BYTE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD 短整数,
    /* [retval][out] */ BYTE *byret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6276],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_是否资源标识符_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6318],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转资源管理类型_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6360],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转W参数_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 低位整数,
    /* [in] */ LONG 高位整数,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6402],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转L参数_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 低位整数,
    /* [in] */ LONG 高位整数,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6450],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转LRESULT_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 低位整数,
    /* [in] */ LONG 高位整数,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6498],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转LGID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 子语言标识符,
    /* [in] */ LONG 主语言标识符,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6546],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取主语言标识符_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG lgid,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6594],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取子语言标识符_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG lgid,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6636],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取LCID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG srtid,
    /* [in] */ LONG lgid,
    /* [retval][out] */ DWORD *dwret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6678],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_L参数转XY_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG L参数,
    /* [out] */ VARIANT *返回X,
    /* [out] */ VARIANT *返回Y,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6726],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取图像索引_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6780],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_繁简体转换_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR 字符串内容,
    /* [in] */ LONG 语系模式,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6822],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GB2312转UTF8_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR GB2312字符串,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6870],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_UTF8转GB2312_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR UTF8字符串,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6912],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GB2312转BIG5_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR GB2312字符串,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6954],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_BIG5转GB2312_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR BIG5字符串,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[6996],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_UTF8转BIG5_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR UTF8字符串,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7038],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_BIG5转UTF8_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR BIG5字符串,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7080],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络初始化_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7122],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络关闭_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7158],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络套接字_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR 类型,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7194],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络关闭套接字_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7236],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络连接_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [in] */ BSTR IP地址,
    /* [in] */ USHORT 端口,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7278],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络绑定_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [in] */ USHORT serv_port,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7332],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络监听_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字e,
    /* [in] */ LONG ncout,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7380],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络接受_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [out] */ VARIANT *nret,
    /* [retval][out] */ BSTR *serv_ip)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7428],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络接收_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [retval][out] */ BSTR *Recvbuff)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7476],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络发送_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [in] */ BSTR 发送内容,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7518],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络发送到_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [in] */ BSTR 发送内容,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7566],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络接收来自_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [in] */ LONG 长度,
    /* [in] */ BSTR IP地址,
    /* [in] */ USHORT rPort,
    /* [retval][out] */ BSTR *data)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7614],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_获取IP_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG type,
    /* [in] */ BSTR param,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7674],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TEST_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG pvoid,
    /* [in] */ LONG count,
    /* [in] */ LONG p0,
    /* [in] */ LONG p1,
    /* [in] */ LONG p2,
    /* [in] */ LONG p3,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7722],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Ver_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ BSTR *retver)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7794],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_InputBox_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ LONG Color,
    /* [in] */ BSTR szCaption,
    /* [in] */ BSTR szPrompt,
    /* [in] */ BSTR szDefaultText,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7830],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AntiDebuger_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7896],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AntiVEHCallBack_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7932],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_InitExceptionCallback_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ LONG en,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[7968],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GetLastException_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8016],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Delay_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ ULONG s,
    /* [in] */ LONG en,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8052],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Exit_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR fileName,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8100],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Sizeof_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR type,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8142],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_EnablePrivilege_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR dwPrivilege,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8184],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_FreeProcessMemory_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8226],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AsmAdd_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR asm_ins,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8268],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AsmCall_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hwnd,
    /* [in] */ LONG mode,
    /* [in] */ LONG timeout,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8310],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AsmClear_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8364],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Assemble_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG base_addr,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8400],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_DisAssemble_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR asm_code,
    /* [in] */ LONG base_addr,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8442],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GetFindDataAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ BSTR strs,
    /* [out][in] */ VARIANT *pret,
    /* [retval][out] */ LONG *dwret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8490],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ReadIntAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ LONGLONG addr,
    /* [in] */ LONG type,
    /* [retval][out] */ LONGLONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8544],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ReadDataAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hwnd,
    /* [in] */ LONGLONG addr,
    /* [in] */ LONG len,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8598],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_WriteIntAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ LONGLONG addr,
    /* [in] */ LONG type,
    /* [in] */ LONGLONG value,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8652],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ReadIntTraverseAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ LONGLONG addr,
    /* [in] */ LONGLONG offest,
    /* [in] */ LONG count,
    /* [in] */ LONG type,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8712],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_WriteDataAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hwnd,
    /* [in] */ LONGLONG addr,
    /* [in] */ BSTR data,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8778],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Memset_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ VARIANT *_Dst,
    /* [in] */ LONG Val,
    /* [in] */ LONG Size,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8832],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Memcpy_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ VARIANT *_Dst,
    /* [in] */ VARIANT *_Src,
    /* [in] */ LONG Size,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8886],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_New_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR sztype,
    /* [in] */ LONG size,
    /* [retval][out] */ VARIANT *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8940],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Malloc_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR sztype,
    /* [in] */ LONG size,
    /* [retval][out] */ VARIANT *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[8988],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Delete_Proxy( 
    ITLibPlusInterface * This,
    /* [out][in] */ VARIANT *_Block,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9036],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Deletes_Proxy( 
    ITLibPlusInterface * This,
    /* [out][in] */ VARIANT *_Block,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9078],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Free_Proxy( 
    ITLibPlusInterface * This,
    /* [out][in] */ VARIANT *_Block,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9120],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Set_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ VARIANT *Pvoid,
    /* [in] */ BSTR type,
    /* [in] */ VARIANT *value,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9162],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Get_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ VARIANT *Pvoid,
    /* [in] */ BSTR type,
    /* [retval][out] */ VARIANT *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9216],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Rand_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG MIN,
    /* [in] */ LONG MAX,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9264],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_RandDouble_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE DOUBLE_MIN,
    /* [in] */ DOUBLE DOUBLE_MAX,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9312],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ShiftRight_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [in] */ LONG _Radix,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9360],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ShiftLeft_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    LONG _Radix,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9408],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AND_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9456],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_OR_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9498],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_XOR_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9540],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NOT_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG a,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9582],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_PI_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9624],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Acos_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9660],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Acosh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9702],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Asin_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9744],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Asinh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9786],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Atan_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9828],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Atan2_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _Y,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9870],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Atanh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9918],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Cbrt_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[9960],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Ceil_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10002],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Copysign_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _Number,
    /* [in] */ DOUBLE _Sign,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10044],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Cos_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10092],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Cosh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10134],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Exp_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10176],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Exp2_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10218],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Expm1_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10260],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fabs_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10302],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fdim_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10344],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Floor_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10392],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fma_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [in] */ DOUBLE _Z,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10434],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fmax_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10488],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fmin_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10536],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fmod_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10584],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Frexp_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [out] */ VARIANT *_Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10632],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Hypot_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10680],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Ilogb_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10728],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Ldexp_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ LONG _Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10770],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Log_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10818],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Log10_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10860],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Log2_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10902],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Logb_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10944],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Log1p_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[10986],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Lrint_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11028],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Lround_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11070],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Modf_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE x,
    /* [out] */ VARIANT *intpart,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11112],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Nan_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11160],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Nearbyint_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11202],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Nextafter_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11244],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Pow_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11292],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Remainder_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11340],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Remquo_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [out] */ VARIANT *_Z,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11388],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Rint_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11442],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Round_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11484],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Scalbln_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ LONG _Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11526],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Scalbn_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ LONG _Y,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11574],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Sin_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11622],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Sinh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11664],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Sqrt_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11706],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Tan_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11748],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Tanh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11790],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Trunc_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11832],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayGetHighest_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ LONG en,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11874],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayGetLowest_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ LONG en,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11922],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayUniqueInt_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[11970],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayUnique_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12012],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArraySortInt_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ LONG en,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12054],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArraySort_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12102],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayFilter_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ BSTR str,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12144],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayAlloc_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG dim,
    /* [in] */ BSTR szsize,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12192],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayReverse_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12240],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayRotate_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ LONG mov,
    /* [in] */ LONG en,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12282],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayShift_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ LONG mov,
    /* [in] */ LONG en,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12336],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringSplit_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [in] */ BSTR delimit,
    /* [out] */ VARIANT *nret,
    /* [retval][out] */ BSTR *outs)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12390],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringSort_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12444],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringShuffle_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12486],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringUnique_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12528],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringReverse_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12570],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringRotate_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [in] */ LONG mov,
    /* [in] */ LONG en,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12612],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringShift_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [in] */ LONG mov,
    /* [in] */ LONG en,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12666],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringXml2Json_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _Src,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12720],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringJson2Xml_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _Src,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12762],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fwopen_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _FileName,
    /* [in] */ BSTR _Mode,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12804],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fseek_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _Stream,
    /* [in] */ LONG _Offset,
    /* [in] */ BSTR dst,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12852],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fread_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _ElementSize,
    /* [in] */ LONG _ElementCount,
    /* [in] */ LONG _Stream,
    /* [out] */ VARIANT *nret,
    /* [retval][out] */ BSTR *_Buffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12906],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fwrite_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _Buffer,
    /* [in] */ LONG _ElementSize,
    /* [in] */ LONG _ElementCount,
    /* [in] */ LONG _Stream,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[12966],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fgetws_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _Buffer,
    /* [in] */ LONG _BufferCount,
    LONG _Stream,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13026],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fclose_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _Stream,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13080],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Mmap_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _FileName,
    /* [out] */ VARIANT *dwret,
    /* [retval][out] */ BSTR *buf)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13122],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_EnumIniSection_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _FileName,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13170],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_EnumIniKey_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _Key,
    /* [in] */ BSTR _FileName,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13212],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Swap_Proxy( 
    ITLibPlusInterface * This,
    /* [out][in] */ VARIANT *a,
    /* [out][in] */ VARIANT *b,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13260],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_SwapByte_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BYTE a,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13308],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_SwapWord_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD a,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13350],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_SwapLong_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG a,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13392],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_SwapInt64_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONGLONG a,
    /* [retval][out] */ LONGLONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13434],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_XStringToL_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [in] */ LONG _Radix,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13476],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_XStringToI64_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [in] */ LONG _Radix,
    /* [out][in] */ VARIANT *llret,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13524],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringToL_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13578],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringToI64_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [out][in] */ VARIANT *llret,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13620],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_LToXString_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _Value,
    /* [in] */ LONG _Radix,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13668],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_I64ToXString_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONGLONG _Value,
    /* [in] */ LONG _Radix,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13716],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringToDbl_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ DOUBLE *dret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13764],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringToFlt_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ FLOAT *fret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13806],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKEWORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG a,
    /* [in] */ LONG b,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13848],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKELONG_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG a,
    /* [in] */ LONG b,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13896],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TLOWORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13944],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_THIWORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[13986],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TLOBYTE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD w,
    /* [retval][out] */ BYTE *byret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14028],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_THIBYTE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD w,
    /* [retval][out] */ BYTE *byret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14070],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TIS_INTRESOURCE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _r,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14112],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKEINTRESOURCE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG i,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14154],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKEWPARAM_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [in] */ LONG h,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14196],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKELPARAM_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [in] */ LONG h,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14244],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKELRESULT_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [in] */ LONG h,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14292],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKELANGID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG s,
    /* [in] */ LONG p,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14340],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TPRIMARYLANGID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG lgid,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14388],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TSUBLANGID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG lgid,
    /* [retval][out] */ WORD *wret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14430],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKELCID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG srtid,
    /* [in] */ LONG lgid,
    /* [retval][out] */ DWORD *dwret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14472],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKEPOINTS_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [out] */ VARIANT *x,
    /* [out] */ VARIANT *y,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14520],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TINDEXTOSTATEIMAGEMASK_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG i,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14574],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ConvertLanguage_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR str,
    /* [in] */ LONG type,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14616],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GB2312ToUTF8_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrGB2312,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14664],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_UTF8ToGB2312_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrUTF8,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14706],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GB2312ToBIG5_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrGB2312,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14748],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_BIG5ToGB2312_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrBIG5,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14790],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_UTF8ToBIG5_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrUTF8,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14832],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_BIG5ToUTF8_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrBIG5,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14874],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetWSAStartup_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14916],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetClose_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14952],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetSocket_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR sztype,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[14988],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetCloseSocket_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[15030],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetConnect_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ BSTR serv_ip,
    /* [in] */ USHORT serv_port,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[15072],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetBind_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ USHORT serv_port,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[15126],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetListen_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ LONG ncout,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[15174],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetAccept_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [out] */ VARIANT *nret,
    /* [retval][out] */ BSTR *serv_ip)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[15222],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetRecv_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [retval][out] */ BSTR *Recvbuff)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[15270],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetSend_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ BSTR data,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[15312],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetSendTo_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ BSTR data,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[15360],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetRecvFrom_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ LONG length,
    /* [in] */ BSTR serv_ip,
    /* [in] */ USHORT rPort,
    /* [retval][out] */ BSTR *data)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[15408],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GetIP_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG type,
    /* [in] */ BSTR param,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TLibPlus__MIDL_ProcFormatString.Format[15468],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const TLibPlus_MIDL_PROC_FORMAT_STRING TLibPlus__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure 版本 */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 版本号 */

/* 24 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 输入框 */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 46 */	NdrFcShort( 0x10 ),	/* 16 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 52 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 窗口句柄 */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 颜色 */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 标题 */

/* 72 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 74 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 76 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 显示文本 */

/* 78 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 80 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 82 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 预设文本 */

/* 84 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 86 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 88 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 内容 */

/* 90 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 92 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 94 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 98 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 扫描调试器 */

/* 102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x9 ),	/* 9 */
/* 110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x24 ),	/* 36 */
/* 116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 118 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 反向量化异常处理初始化 */

/* 138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0xa ),	/* 10 */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x24 ),	/* 36 */
/* 152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 154 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 162 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 异常回调初始化 */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0xb ),	/* 11 */
/* 182 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 184 */	NdrFcShort( 0x10 ),	/* 16 */
/* 186 */	NdrFcShort( 0x24 ),	/* 36 */
/* 188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 190 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 窗口句柄 */

/* 198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 是否自动抛出 */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 210 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 获取最后异常信息 */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0xc ),	/* 12 */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 238 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 异常类型 */

/* 246 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 250 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 延时 */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0xd ),	/* 13 */
/* 266 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 268 */	NdrFcShort( 0x10 ),	/* 16 */
/* 270 */	NdrFcShort( 0x24 ),	/* 36 */
/* 272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 274 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 毫秒 */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 是否阻塞 */

/* 288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 294 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 302 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 退出 */

/* 306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0xe ),	/* 14 */
/* 314 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x24 ),	/* 36 */
/* 320 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 322 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 资源目录 */

/* 330 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 334 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 336 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取类型大小 */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0xf ),	/* 15 */
/* 356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x24 ),	/* 36 */
/* 362 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 364 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 变量类型字符串 */

/* 372 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 376 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 进程提权 */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x10 ),	/* 16 */
/* 398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x24 ),	/* 36 */
/* 404 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 406 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 权限标识字符串 */

/* 414 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 418 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 清理内存 */

/* 432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x11 ),	/* 17 */
/* 440 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 444 */	NdrFcShort( 0x24 ),	/* 36 */
/* 446 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 448 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 窗口句柄 */

/* 456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 462 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 汇编加入 */

/* 474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x12 ),	/* 18 */
/* 482 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x24 ),	/* 36 */
/* 488 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 490 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串汇编代码 */

/* 498 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 502 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 汇编注入 */

/* 516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x13 ),	/* 19 */
/* 524 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 526 */	NdrFcShort( 0x18 ),	/* 24 */
/* 528 */	NdrFcShort( 0x24 ),	/* 36 */
/* 530 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 532 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 窗口句柄 */

/* 540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 注入模式 */

/* 546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 超时毫秒 */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 560 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 566 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 汇编清空 */

/* 570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x14 ),	/* 20 */
/* 578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x24 ),	/* 36 */
/* 584 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 586 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 594 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 汇编转十六进制机器码 */

/* 606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x15 ),	/* 21 */
/* 614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 620 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 622 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 624 */	NdrFcShort( 0x1 ),	/* 1 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 十进制存放地址 */

/* 630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 636 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 640 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 十六进制机器码转汇编 */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x16 ),	/* 22 */
/* 656 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 664 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串汇编代码 */

/* 672 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 十进制存放地址 */

/* 678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 684 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 688 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 692 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存字符串取十进制地址 */

/* 696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x17 ),	/* 23 */
/* 704 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 708 */	NdrFcShort( 0x24 ),	/* 36 */
/* 710 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 712 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 714 */	NdrFcShort( 0x1 ),	/* 1 */
/* 716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 窗口句柄 */

/* 720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 字符串地址 */

/* 726 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 730 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 接收超長整形指針 */

/* 732 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 736 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter dwret */

/* 738 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存遍历读整数 */

/* 750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x18 ),	/* 24 */
/* 758 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 760 */	NdrFcShort( 0x38 ),	/* 56 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 766 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 窗口句柄 */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 十进制地址 */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 784 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter 十进制偏移增量 */

/* 786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 790 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter 次数 */

/* 792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 794 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 读取类型 */

/* 798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 800 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 804 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 806 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 808 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 812 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存读整数 */

/* 816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x19 ),	/* 25 */
/* 824 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 826 */	NdrFcShort( 0x20 ),	/* 32 */
/* 828 */	NdrFcShort( 0x2c ),	/* 44 */
/* 830 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 832 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 窗口句柄 */

/* 840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 十进制地址 */

/* 846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 850 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter 读取类型 */

/* 852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 858 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 860 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 862 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存读十六进制数据 */

/* 870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0x1a ),	/* 26 */
/* 878 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 880 */	NdrFcShort( 0x20 ),	/* 32 */
/* 882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 884 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 886 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 窗口句柄 */

/* 894 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 十进制地址 */

/* 900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 904 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter 长度 */

/* 906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 908 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 912 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 914 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 916 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 920 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存写整数 */

/* 924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x1b ),	/* 27 */
/* 932 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 934 */	NdrFcShort( 0x30 ),	/* 48 */
/* 936 */	NdrFcShort( 0x24 ),	/* 36 */
/* 938 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 940 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 窗口句柄 */

/* 948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 950 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 十进制地址 */

/* 954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 956 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 958 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter 写入类型 */

/* 960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 962 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 写入数值 */

/* 966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 968 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 970 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter nret */

/* 972 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 974 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存写十六进制数据 */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x1c ),	/* 28 */
/* 992 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 994 */	NdrFcShort( 0x18 ),	/* 24 */
/* 996 */	NdrFcShort( 0x24 ),	/* 36 */
/* 998 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1000 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 窗口句柄 */

/* 1008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 十进制地址 */

/* 1014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter 十六进制字符串字节集 */

/* 1020 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1022 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1024 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 1026 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1028 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1034 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存填充 */

/* 1038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1046 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1048 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1050 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1052 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1054 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 目标地址 */

/* 1062 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1066 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter 填充数值 */

/* 1068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 大小 */

/* 1074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 1080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1088 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存複製 */

/* 1092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1100 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1104 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1106 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1108 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 目标地址 */

/* 1116 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1120 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter 来源地址 */

/* 1122 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1126 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter 大小 */

/* 1128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 1134 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1136 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1142 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存申请空间 */

/* 1146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1154 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1160 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1162 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 类型字符串 */

/* 1170 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1174 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 大小 */

/* 1176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 1182 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1186 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 1188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1190 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存申请堆 */

/* 1194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1202 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1208 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1210 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 类型字符串 */

/* 1218 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1222 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 大小 */

/* 1224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 1230 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1234 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 1236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1238 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存释放空间 */

/* 1242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1250 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1256 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1258 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1262 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 指针 */

/* 1266 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1270 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 1272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存数组释放空间 */

/* 1284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1298 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1300 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1304 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 指针 */

/* 1308 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1312 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 1314 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1322 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存堆释放 */

/* 1326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1334 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1340 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1342 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1344 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1346 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 指针 */

/* 1350 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1354 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 1356 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 指针写 */

/* 1368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1376 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1382 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1384 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 内存指针 */

/* 1392 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1396 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter 类型 */

/* 1398 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1400 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1402 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 写入数值 */

/* 1404 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1406 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1408 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter nret */

/* 1410 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1412 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1418 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 指针读 */

/* 1422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1430 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1436 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1438 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 内存指针 */

/* 1446 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1448 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1450 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter 类型 */

/* 1452 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1454 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1456 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 1458 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1462 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 1464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1466 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 随机数 */

/* 1470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1478 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1480 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1482 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1484 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1486 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 最小值 */

/* 1494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1496 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 最大值 */

/* 1500 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1502 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 1506 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1508 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1514 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 随机浮点数 */

/* 1518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1526 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1528 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1530 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1532 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1534 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 浮点数_最小值 */

/* 1542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1546 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter 浮点数_最大值 */

/* 1548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1550 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1552 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 1554 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1556 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1558 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1562 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 位右移 */

/* 1566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1574 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1576 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1578 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1580 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1582 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数值 */

/* 1590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 移动量 */

/* 1596 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1598 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 1602 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1610 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 位左移 */

/* 1614 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1620 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1622 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1624 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1626 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1628 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1630 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数值 */

/* 1638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1640 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 移动量 */

/* 1644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1646 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 1650 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 位与 */

/* 1662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1670 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1676 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1678 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 格式字符串 */

/* 1686 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1688 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1690 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 1692 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1694 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1700 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 位或 */

/* 1704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1712 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1716 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1718 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1720 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 格式字符串 */

/* 1728 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1732 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 1734 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 位异或 */

/* 1746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1754 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1760 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1762 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 格式字符串 */

/* 1770 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1774 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 1776 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 位反 */

/* 1788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1794 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1796 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1802 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1804 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数值 */

/* 1812 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 1818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 圆周率 */

/* 1830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1836 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1838 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1844 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1846 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dret */

/* 1854 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1858 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 反余弦 */

/* 1866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1874 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1876 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1878 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1880 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1882 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 1890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1894 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 1896 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1898 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1900 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1904 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 反双曲余弦 */

/* 1908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1916 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1918 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1920 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1922 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1924 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 1932 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1936 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 1938 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1942 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1946 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 反正弦 */

/* 1950 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1956 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1958 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1960 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1962 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1964 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1966 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 1974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1976 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1978 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 1980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1984 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 反双曲正弦 */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2000 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2002 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2004 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2006 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2008 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2020 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2022 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2026 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2030 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 反正切 */

/* 2034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2042 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2044 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2046 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2048 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2050 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2062 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2064 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2066 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2068 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2072 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 坐标反正切 */

/* 2076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2084 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2086 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2088 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2090 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2092 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Y */

/* 2100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2104 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _X */

/* 2106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2110 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2114 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2116 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2120 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 弧双曲正切 */

/* 2124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2132 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2134 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2136 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2138 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2140 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2152 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2154 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2156 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2158 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2162 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 立方根 */

/* 2166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2172 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2174 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2176 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2178 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2182 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2194 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2196 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2198 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2200 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2204 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数上限值 */

/* 2208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2214 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2216 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2218 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2220 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2224 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2236 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2238 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2242 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2246 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 以y符返x */

/* 2250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2258 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2260 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2262 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2266 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Number */

/* 2274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2276 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2278 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Sign */

/* 2280 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2282 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2284 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2286 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2288 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2290 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2294 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 余弦 */

/* 2298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x39 ),	/* 57 */
/* 2306 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2308 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2310 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2312 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2314 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2326 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2330 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2332 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2336 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 双曲余弦 */

/* 2340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x3a ),	/* 58 */
/* 2348 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2350 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2352 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2354 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2356 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2368 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2370 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2374 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2378 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数幂指数 */

/* 2382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x3b ),	/* 59 */
/* 2390 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2392 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2394 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2396 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2398 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2406 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2410 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2416 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2420 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数幂指数2底 */

/* 2424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2432 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2434 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2436 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2438 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2440 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2448 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2452 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2454 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2458 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2462 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数幂指数x减1 */

/* 2466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2472 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2474 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2476 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2478 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2480 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2482 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2490 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2492 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2494 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2496 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2500 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2504 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数绝对值 */

/* 2508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x3e ),	/* 62 */
/* 2516 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2518 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2520 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2522 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2524 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2532 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2534 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2536 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2538 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2542 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2546 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数xy正差 */

/* 2550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x3f ),	/* 63 */
/* 2558 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2560 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2562 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2564 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2566 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2574 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2576 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2578 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 2580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2584 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2586 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2588 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2590 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2594 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数下限值 */

/* 2598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2606 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2608 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2610 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2612 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2614 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2622 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2624 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2626 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2630 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2632 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2636 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数x乘以y加z */

/* 2640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x41 ),	/* 65 */
/* 2648 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2650 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2652 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2654 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 2656 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2668 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 2670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2672 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2674 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Z */

/* 2676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2678 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2680 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2682 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2684 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2686 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2690 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数两数取最大 */

/* 2694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x42 ),	/* 66 */
/* 2702 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2704 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2706 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2708 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2710 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2722 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 2724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2726 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2728 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2730 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2732 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2734 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2738 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数两数取最小 */

/* 2742 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x43 ),	/* 67 */
/* 2750 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2752 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2754 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2756 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2758 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2770 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 2772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2776 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2778 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2780 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2782 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2786 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数取余数 */

/* 2790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2798 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2800 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2802 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2804 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2806 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2818 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 2820 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2822 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2824 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2826 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2828 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2830 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2834 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数取尾数与指数 */

/* 2838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2844 */	NdrFcShort( 0x45 ),	/* 69 */
/* 2846 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2848 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2850 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2852 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2854 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2862 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2864 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2866 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 2868 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2872 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter dret */

/* 2874 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2876 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2878 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2882 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数平方和的平方根 */

/* 2886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2892 */	NdrFcShort( 0x46 ),	/* 70 */
/* 2894 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2896 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2898 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2900 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2902 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2914 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 2916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2918 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2920 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2922 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2924 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2926 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2930 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数绝对值对数 */

/* 2934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2940 */	NdrFcShort( 0x47 ),	/* 71 */
/* 2942 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2944 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2946 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2948 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2950 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 2958 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2960 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2962 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 2964 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2966 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2968 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2972 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数x乘以2的e幂 */

/* 2976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2982 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2984 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2986 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2988 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2990 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2992 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3004 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 3006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3012 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3014 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3016 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3020 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数取对数 */

/* 3024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3032 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3034 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3036 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3038 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3040 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3048 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3050 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3052 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3054 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3058 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3060 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3062 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数取对数10底 */

/* 3066 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3072 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3074 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3076 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3078 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3080 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3082 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3090 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3092 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3094 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3096 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3098 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3100 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3104 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数取对数2底 */

/* 3108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3114 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3116 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3118 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3120 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3124 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3136 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3138 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3142 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数取绝对值对数b */

/* 3150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3156 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3160 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3162 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3166 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3178 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3180 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3184 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数x加1对数 */

/* 3192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x4d ),	/* 77 */
/* 3200 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3202 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3204 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3208 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3220 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3226 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3230 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数舍入整参数 */

/* 3234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3240 */	NdrFcShort( 0x4e ),	/* 78 */
/* 3242 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3244 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3246 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3250 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3262 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter nret */

/* 3264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数四捨五入成整数 */

/* 3276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x4f ),	/* 79 */
/* 3284 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3286 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3288 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3292 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3304 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter nret */

/* 3306 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3314 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数拆解整数与小数 */

/* 3318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x50 ),	/* 80 */
/* 3326 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3328 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3330 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3332 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3334 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 3342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3346 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter intpart */

/* 3348 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3352 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter dret */

/* 3354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3358 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3362 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取NaN值 */

/* 3366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x51 ),	/* 81 */
/* 3374 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3380 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3382 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3390 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3394 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter dret */

/* 3396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3400 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数参数舍入 */

/* 3408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x52 ),	/* 82 */
/* 3416 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3418 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3420 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3424 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3436 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3442 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3446 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数下一个表示值 */

/* 3450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x53 ),	/* 83 */
/* 3458 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3460 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3462 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3464 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3466 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3478 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 3480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3484 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3488 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3490 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3494 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 求幂 */

/* 3498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0x54 ),	/* 84 */
/* 3506 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3508 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3510 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3514 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3526 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 3528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3532 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3534 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3536 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3538 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3542 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 求余数 */

/* 3546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3552 */	NdrFcShort( 0x55 ),	/* 85 */
/* 3554 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3556 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3558 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3560 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3562 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3574 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 3576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3580 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3582 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3584 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3586 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3590 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 求商 */

/* 3594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x56 ),	/* 86 */
/* 3602 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3604 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3606 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3608 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 3610 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3612 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3622 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 3624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3626 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3628 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Z */

/* 3630 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3632 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3634 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter dret */

/* 3636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3638 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3640 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3644 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数舍入参数 */

/* 3648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x57 ),	/* 87 */
/* 3656 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3658 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3660 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3664 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3676 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3678 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3682 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3686 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数四捨五入至最接近整数位 */

/* 3690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0x58 ),	/* 88 */
/* 3698 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3700 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3702 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3704 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3706 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3718 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3720 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3724 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3728 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure x和FLT_RADX乘以n的乘积长整 */

/* 3732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3738 */	NdrFcShort( 0x59 ),	/* 89 */
/* 3740 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3742 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3744 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3746 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3748 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3760 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 3762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3768 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3770 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3772 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3776 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure x和FLT_RADX乘以n的乘积 */

/* 3780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0x5a ),	/* 90 */
/* 3788 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3790 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3792 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3794 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3796 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3808 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 3810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3818 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3820 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3824 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 正弦 */

/* 3828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3834 */	NdrFcShort( 0x5b ),	/* 91 */
/* 3836 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3838 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3840 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3842 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3844 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3856 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3858 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3862 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 双曲正弦 */

/* 3870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x5c ),	/* 92 */
/* 3878 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3880 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3882 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3886 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3894 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3898 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3900 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3902 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3904 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3908 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 平方根 */

/* 3912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3918 */	NdrFcShort( 0x5d ),	/* 93 */
/* 3920 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3922 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3924 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3926 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3928 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3940 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3942 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3946 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取切线 */

/* 3954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x5e ),	/* 94 */
/* 3962 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3964 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3966 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3970 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 3978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3980 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3982 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 3984 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3986 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3988 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 3990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3992 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取双曲正切 */

/* 3996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4002 */	NdrFcShort( 0x5f ),	/* 95 */
/* 4004 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4006 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4008 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4010 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4012 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 4020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4022 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4024 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 4026 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4030 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 4032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4034 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 浮点数符号截断 */

/* 4038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4044 */	NdrFcShort( 0x60 ),	/* 96 */
/* 4046 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4048 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4050 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4052 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4054 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 4062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4066 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 4068 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4070 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4072 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 4074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4076 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 数组整型取最大 */

/* 4080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x61 ),	/* 97 */
/* 4088 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4092 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4094 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4096 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数组字符串 */

/* 4104 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4108 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter en */

/* 4110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 4116 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4124 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 数组整型取最小 */

/* 4128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4134 */	NdrFcShort( 0x62 ),	/* 98 */
/* 4136 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4140 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4142 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4144 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数组字符串 */

/* 4152 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4156 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter en */

/* 4158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 4164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 数组整型去重 */

/* 4176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4182 */	NdrFcShort( 0x63 ),	/* 99 */
/* 4184 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4190 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4192 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数组字符串 */

/* 4200 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4204 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4206 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4210 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4214 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 数组去重 */

/* 4218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4224 */	NdrFcShort( 0x64 ),	/* 100 */
/* 4226 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4232 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4234 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4236 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数组字符串 */

/* 4242 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4246 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4248 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4250 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4252 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4256 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 数组整型排序 */

/* 4260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0x65 ),	/* 101 */
/* 4268 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4274 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4276 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数组字符串 */

/* 4284 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4288 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter en */

/* 4290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4296 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4300 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4304 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 数组排序 */

/* 4308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4314 */	NdrFcShort( 0x66 ),	/* 102 */
/* 4316 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4322 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4324 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4328 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数组字符串 */

/* 4332 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4336 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4338 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4342 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4346 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 数组过滤 */

/* 4350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4356 */	NdrFcShort( 0x67 ),	/* 103 */
/* 4358 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4364 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4366 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数组字符串 */

/* 4374 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4378 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter str */

/* 4380 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4384 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4386 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4390 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4394 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 数组多维初始化 */

/* 4398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4404 */	NdrFcShort( 0x68 ),	/* 104 */
/* 4406 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4412 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4414 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 维数 */

/* 4422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 大小 */

/* 4428 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4430 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4432 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4434 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4438 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4442 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 数组倒序 */

/* 4446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x69 ),	/* 105 */
/* 4454 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4460 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4462 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4464 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数组字符串 */

/* 4470 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4472 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4474 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4476 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4478 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4480 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 数组旋转 */

/* 4488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4494 */	NdrFcShort( 0x6a ),	/* 106 */
/* 4496 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4498 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4502 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4504 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数组字符串 */

/* 4512 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4516 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 移动量 */

/* 4518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 是否向右 */

/* 4524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4530 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4532 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4534 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4538 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 数组移位 */

/* 4542 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4548 */	NdrFcShort( 0x6b ),	/* 107 */
/* 4550 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4552 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4556 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4558 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4562 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 数组字符串 */

/* 4566 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4568 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4570 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 移动量 */

/* 4572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4574 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 是否向右 */

/* 4578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4580 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4584 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4586 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4588 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4592 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 字符串分割 */

/* 4596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4602 */	NdrFcShort( 0x6c ),	/* 108 */
/* 4604 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4610 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4612 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串内容 */

/* 4620 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4624 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 分隔符 */

/* 4626 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4630 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 返回数量 */

/* 4632 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 4634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4636 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter outs */

/* 4638 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4640 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4642 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4646 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 字符串排序 */

/* 4650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0x6d ),	/* 109 */
/* 4658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4664 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4666 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串内容 */

/* 4674 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4678 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4680 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4682 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4684 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 字符串洗牌 */

/* 4692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4698 */	NdrFcShort( 0x6e ),	/* 110 */
/* 4700 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4706 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4708 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4710 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4712 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串内容 */

/* 4716 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4720 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4722 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4726 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 字符串去重 */

/* 4734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4740 */	NdrFcShort( 0x6f ),	/* 111 */
/* 4742 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4748 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4750 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4752 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4754 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串内容 */

/* 4758 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4762 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4764 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4768 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4772 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 字符串倒序 */

/* 4776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4782 */	NdrFcShort( 0x70 ),	/* 112 */
/* 4784 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4790 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4792 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4794 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4796 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串内容 */

/* 4800 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4804 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4806 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4810 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 字符串旋转 */

/* 4818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4824 */	NdrFcShort( 0x71 ),	/* 113 */
/* 4826 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4828 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4832 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4834 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串内容 */

/* 4842 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4846 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 移动量 */

/* 4848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 是否向右 */

/* 4854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4860 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4862 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4864 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4868 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 字符串移位 */

/* 4872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4878 */	NdrFcShort( 0x72 ),	/* 114 */
/* 4880 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4882 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4886 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4888 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串内容 */

/* 4896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4900 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 移动量 */

/* 4902 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 是否向右 */

/* 4908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4914 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4916 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4918 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4922 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 字符串Xml转Json */

/* 4926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x73 ),	/* 115 */
/* 4934 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4940 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4942 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4944 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4946 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串内容 */

/* 4950 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4954 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4956 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4960 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 字符串Json转Xml */

/* 4968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4974 */	NdrFcShort( 0x74 ),	/* 116 */
/* 4976 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4982 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4984 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4986 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4988 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串内容 */

/* 4992 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4996 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 4998 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5002 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5006 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 文件流指针打开 */

/* 5010 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5016 */	NdrFcShort( 0x75 ),	/* 117 */
/* 5018 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5022 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5024 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5026 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5030 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 文件路径 */

/* 5034 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5036 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5038 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 模式字符串 */

/* 5040 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5042 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5044 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 5046 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5052 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5054 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 文件流指针移动 */

/* 5058 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5064 */	NdrFcShort( 0x76 ),	/* 118 */
/* 5066 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5068 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5070 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5072 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5074 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 文件指针 */

/* 5082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5084 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 位移量 */

/* 5088 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5090 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 起点常量字符串 */

/* 5094 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5096 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5098 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 5100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5102 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5108 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 文件流指针读取 */

/* 5112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5118 */	NdrFcShort( 0x77 ),	/* 119 */
/* 5120 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5122 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5126 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 5128 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字节大小 */

/* 5136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 数量 */

/* 5142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 文件指针 */

/* 5148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5150 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 5154 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 5156 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5158 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter _Buffer */

/* 5160 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5162 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5164 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5168 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 文件流指针写入 */

/* 5172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5178 */	NdrFcShort( 0x78 ),	/* 120 */
/* 5180 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5182 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5184 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5186 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 5188 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 内容 */

/* 5196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 字节大小 */

/* 5202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 数量 */

/* 5208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5210 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 文件指针 */

/* 5214 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5216 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 5220 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5222 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5228 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 文件流指针複製 */

/* 5232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5238 */	NdrFcShort( 0x79 ),	/* 121 */
/* 5240 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5242 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5246 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5248 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5250 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 内容 */

/* 5256 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5260 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 複製数量 */

/* 5262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 文件指针 */

/* 5268 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 5274 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5276 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5278 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5282 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 文件流指针关闭 */

/* 5286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5292 */	NdrFcShort( 0x7a ),	/* 122 */
/* 5294 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5298 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5300 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5302 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 文件指针 */

/* 5310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5312 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 5316 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5318 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5324 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 内存映射 */

/* 5328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5334 */	NdrFcShort( 0x7b ),	/* 123 */
/* 5336 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5342 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5344 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5346 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 文件路径 */

/* 5352 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5354 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5356 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 返回字节数量 */

/* 5358 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 5360 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5362 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter buf */

/* 5364 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5366 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5368 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5372 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 配置文件枚举小节 */

/* 5376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5382 */	NdrFcShort( 0x7c ),	/* 124 */
/* 5384 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5390 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5392 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5394 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 文件路径 */

/* 5400 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5404 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 5406 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5410 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 配置文件枚举键名 */

/* 5418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5424 */	NdrFcShort( 0x7d ),	/* 125 */
/* 5426 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5432 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5434 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5436 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5438 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 节名 */

/* 5442 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5446 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 文件路径 */

/* 5448 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5450 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5452 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 5454 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5458 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5462 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 交换变量 */

/* 5466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5472 */	NdrFcShort( 0x7e ),	/* 126 */
/* 5474 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5478 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5480 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5482 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5486 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 变量a */

/* 5490 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 5492 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5494 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter 变量b */

/* 5496 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 5498 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5500 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 5502 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5504 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5510 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 交换高低4位 */

/* 5514 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5520 */	NdrFcShort( 0x7f ),	/* 127 */
/* 5522 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5524 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5526 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5528 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5530 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 变量 */

/* 5538 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5540 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5542 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter nret */

/* 5544 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5552 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 交换高低8位 */

/* 5556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5562 */	NdrFcShort( 0x80 ),	/* 128 */
/* 5564 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5566 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5568 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5570 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5572 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 变量 */

/* 5580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5584 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter nret */

/* 5586 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5594 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 交换高低16位 */

/* 5598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5604 */	NdrFcShort( 0x81 ),	/* 129 */
/* 5606 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5610 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5612 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5614 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 变量 */

/* 5622 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5624 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 5628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5630 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5636 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 交换高低32位 */

/* 5640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5646 */	NdrFcShort( 0x82 ),	/* 130 */
/* 5648 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5650 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5652 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5654 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5656 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 变量 */

/* 5664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5668 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter nret */

/* 5670 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5672 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5674 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5678 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 进制字符串转长整形 */

/* 5682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5688 */	NdrFcShort( 0x83 ),	/* 131 */
/* 5690 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5694 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5696 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5698 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5702 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 某进制字符串 */

/* 5706 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5708 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5710 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 进制数 */

/* 5712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 5718 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5726 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 进制字符串转超长整形 */

/* 5730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5736 */	NdrFcShort( 0x84 ),	/* 132 */
/* 5738 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5742 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5744 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5746 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _String */

/* 5754 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5758 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter _Radix */

/* 5760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5762 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter llret */

/* 5766 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 5768 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5770 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 5772 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5774 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5780 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 十进制字符串转十进制长整形 */

/* 5784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5790 */	NdrFcShort( 0x85 ),	/* 133 */
/* 5792 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5796 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5798 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5800 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 整数字符串 */

/* 5808 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5812 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 5814 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5816 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5822 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 十进制字符串转十进制超长整形 */

/* 5826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5832 */	NdrFcShort( 0x86 ),	/* 134 */
/* 5834 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5838 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5840 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5842 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5844 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _String */

/* 5850 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5852 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5854 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter llret */

/* 5856 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 5858 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5860 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 5862 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5864 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5870 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 十进制长整形转进制字符串 */

/* 5874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5880 */	NdrFcShort( 0x87 ),	/* 135 */
/* 5882 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5884 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5888 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 5890 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 整数 */

/* 5898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 进制数 */

/* 5904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 5910 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5912 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5914 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5918 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 十进制超长整形进制转字符串 */

/* 5922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5928 */	NdrFcShort( 0x88 ),	/* 136 */
/* 5930 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5932 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5936 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 5938 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5940 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 超长整数 */

/* 5946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5948 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5950 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter 进制数 */

/* 5952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 5958 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5960 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5962 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5966 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 字符串转双精度浮点数 */

/* 5970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5976 */	NdrFcShort( 0x89 ),	/* 137 */
/* 5978 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5982 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5984 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5986 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _String */

/* 5994 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5996 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5998 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter dret */

/* 6000 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6002 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6004 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 6006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 字符串转浮点数 */

/* 6012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6018 */	NdrFcShort( 0x8a ),	/* 138 */
/* 6020 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6024 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6026 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6028 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 6030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6032 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _String */

/* 6036 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6040 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter fret */

/* 6042 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6046 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 6048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6050 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 转WORD */

/* 6054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6060 */	NdrFcShort( 0x8b ),	/* 139 */
/* 6062 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6064 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6066 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6068 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6070 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 整数a */

/* 6078 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 整数b */

/* 6084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 6090 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6094 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6098 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 转LONG */

/* 6102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6108 */	NdrFcShort( 0x8c ),	/* 140 */
/* 6110 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6112 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6114 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6118 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 整数a */

/* 6126 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 整数b */

/* 6132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6138 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取低WORD */

/* 6150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6156 */	NdrFcShort( 0x8d ),	/* 141 */
/* 6158 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6162 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6166 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 整数 */

/* 6174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 6180 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6184 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取高WORD */

/* 6192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6198 */	NdrFcShort( 0x8e ),	/* 142 */
/* 6200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6204 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6208 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 整数 */

/* 6216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 6222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6226 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取低BYTE */

/* 6234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6240 */	NdrFcShort( 0x8f ),	/* 143 */
/* 6242 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6244 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6246 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6250 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 短整数 */

/* 6258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6262 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter byret */

/* 6264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6268 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 6270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取高BYTE */

/* 6276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6282 */	NdrFcShort( 0x90 ),	/* 144 */
/* 6284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6286 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6288 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6292 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 短整数 */

/* 6300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6304 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter byret */

/* 6306 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6310 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 6312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 是否资源标识符 */

/* 6318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6324 */	NdrFcShort( 0x91 ),	/* 145 */
/* 6326 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6330 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6332 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6334 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 整数 */

/* 6342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 转资源管理类型 */

/* 6360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6366 */	NdrFcShort( 0x92 ),	/* 146 */
/* 6368 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6374 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6376 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 6378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 整数 */

/* 6384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 6390 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6394 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 6396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 转W参数 */

/* 6402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6408 */	NdrFcShort( 0x93 ),	/* 147 */
/* 6410 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6412 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6414 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6416 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6418 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 低位整数 */

/* 6426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 高位整数 */

/* 6432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6446 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 转L参数 */

/* 6450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6456 */	NdrFcShort( 0x94 ),	/* 148 */
/* 6458 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6460 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6462 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6464 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6466 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 低位整数 */

/* 6474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 高位整数 */

/* 6480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6488 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 转LRESULT */

/* 6498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6504 */	NdrFcShort( 0x95 ),	/* 149 */
/* 6506 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6508 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6510 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6514 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 低位整数 */

/* 6522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 高位整数 */

/* 6528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6534 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6542 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 转LGID */

/* 6546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6552 */	NdrFcShort( 0x96 ),	/* 150 */
/* 6554 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6556 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6558 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6560 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6562 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 子语言标识符 */

/* 6570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 主语言标识符 */

/* 6576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6578 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 6582 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6586 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6590 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取主语言标识符 */

/* 6594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6600 */	NdrFcShort( 0x97 ),	/* 151 */
/* 6602 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6606 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6608 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6610 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lgid */

/* 6618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 6624 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6626 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6628 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6632 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取子语言标识符 */

/* 6636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6642 */	NdrFcShort( 0x98 ),	/* 152 */
/* 6644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6648 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6650 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6652 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lgid */

/* 6660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 6666 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6670 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取LCID */

/* 6678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6684 */	NdrFcShort( 0x99 ),	/* 153 */
/* 6686 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6688 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6690 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6692 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6694 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter srtid */

/* 6702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lgid */

/* 6708 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwret */

/* 6714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6722 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure L参数转XY */

/* 6726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6732 */	NdrFcShort( 0x9a ),	/* 154 */
/* 6734 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6738 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6740 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 6742 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 6744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter L参数 */

/* 6750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6752 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 返回X */

/* 6756 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 6758 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6760 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter 返回Y */

/* 6762 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 6764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6766 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 6768 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6770 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6776 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 取图像索引 */

/* 6780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6786 */	NdrFcShort( 0x9b ),	/* 155 */
/* 6788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6792 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6794 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6796 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 整数 */

/* 6804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6810 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 繁简体转换 */

/* 6822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6828 */	NdrFcShort( 0x9c ),	/* 156 */
/* 6830 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6836 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6838 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 字符串内容 */

/* 6846 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6850 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 语系模式 */

/* 6852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 6858 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6862 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 6864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GB2312转UTF8 */

/* 6870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6876 */	NdrFcShort( 0x9d ),	/* 157 */
/* 6878 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6884 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6886 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter GB2312字符串 */

/* 6894 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6898 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 6900 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6904 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 6906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UTF8转GB2312 */

/* 6912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6918 */	NdrFcShort( 0x9e ),	/* 158 */
/* 6920 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6926 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6928 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UTF8字符串 */

/* 6936 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6940 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 6942 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6946 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 6948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6950 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GB2312转BIG5 */

/* 6954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6960 */	NdrFcShort( 0x9f ),	/* 159 */
/* 6962 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6968 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6970 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6972 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6974 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter GB2312字符串 */

/* 6978 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6980 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6982 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 6984 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6986 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6988 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 6990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BIG5转GB2312 */

/* 6996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7002 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 7004 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7010 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7012 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 7014 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter BIG5字符串 */

/* 7020 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7022 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7024 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 7026 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7028 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7030 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 7032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7034 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UTF8转BIG5 */

/* 7038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7044 */	NdrFcShort( 0xa1 ),	/* 161 */
/* 7046 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7052 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7054 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 7056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UTF8字符串 */

/* 7062 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7066 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 7068 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7072 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 7074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BIG5转UTF8 */

/* 7080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7086 */	NdrFcShort( 0xa2 ),	/* 162 */
/* 7088 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7094 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7096 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 7098 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter BIG5字符串 */

/* 7104 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7108 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 7110 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7114 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 7116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络初始化 */

/* 7122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7128 */	NdrFcShort( 0xa3 ),	/* 163 */
/* 7130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7134 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7136 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7138 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 7146 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络关闭 */

/* 7158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7164 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 7166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7170 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7172 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7174 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 7182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络套接字 */

/* 7194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7200 */	NdrFcShort( 0xa5 ),	/* 165 */
/* 7202 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7206 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7208 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7210 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 类型 */

/* 7218 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7222 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 7224 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络关闭套接字 */

/* 7236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7242 */	NdrFcShort( 0xa6 ),	/* 166 */
/* 7244 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7248 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7252 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 套接字 */

/* 7260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7266 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络连接 */

/* 7278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7284 */	NdrFcShort( 0xa7 ),	/* 167 */
/* 7286 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7288 */	NdrFcShort( 0xe ),	/* 14 */
/* 7290 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7292 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7294 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7298 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 套接字 */

/* 7302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7304 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter IP地址 */

/* 7308 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7310 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7312 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter 端口 */

/* 7314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7318 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7320 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7322 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7328 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络绑定 */

/* 7332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7338 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 7340 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7342 */	NdrFcShort( 0xe ),	/* 14 */
/* 7344 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7346 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 7348 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 套接字 */

/* 7356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter serv_port */

/* 7362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7366 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7368 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7376 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络监听 */

/* 7380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7386 */	NdrFcShort( 0xa9 ),	/* 169 */
/* 7388 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7390 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7392 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 7396 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 套接字e */

/* 7404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ncout */

/* 7410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7416 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7424 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络接受 */

/* 7428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7434 */	NdrFcShort( 0xaa ),	/* 170 */
/* 7436 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7442 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 7444 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 7446 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 套接字 */

/* 7452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7458 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 7460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7462 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter serv_ip */

/* 7464 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7468 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 7470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7472 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络接收 */

/* 7476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7482 */	NdrFcShort( 0xab ),	/* 171 */
/* 7484 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7490 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7492 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 7494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 套接字 */

/* 7500 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Recvbuff */

/* 7506 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7510 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 7512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7514 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络发送 */

/* 7518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7524 */	NdrFcShort( 0xac ),	/* 172 */
/* 7526 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7530 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7532 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7534 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 套接字 */

/* 7542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 发送内容 */

/* 7548 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7552 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 7554 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7556 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7562 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络发送到 */

/* 7566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7572 */	NdrFcShort( 0xad ),	/* 173 */
/* 7574 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7578 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7580 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7582 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 套接字 */

/* 7590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 发送内容 */

/* 7596 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7598 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7600 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 7602 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7610 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 网络接收来自 */

/* 7614 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7620 */	NdrFcShort( 0xae ),	/* 174 */
/* 7622 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7624 */	NdrFcShort( 0x16 ),	/* 22 */
/* 7626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7628 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7630 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 7632 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7634 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter 套接字 */

/* 7638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7640 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter 长度 */

/* 7644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7646 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter IP地址 */

/* 7650 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7654 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter rPort */

/* 7656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7660 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter data */

/* 7662 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7664 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7666 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 7668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7670 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure 获取IP */

/* 7674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7680 */	NdrFcShort( 0xaf ),	/* 175 */
/* 7682 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7688 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7690 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 7692 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 7698 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7700 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter param */

/* 7704 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7706 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7708 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 7710 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7714 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 7716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7718 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TEST */

/* 7722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7728 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 7730 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 7732 */	NdrFcShort( 0x30 ),	/* 48 */
/* 7734 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7736 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 7738 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvoid */

/* 7746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7748 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter count */

/* 7752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p0 */

/* 7758 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7760 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 7764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7766 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 7770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7772 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 7776 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7778 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7782 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7784 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7790 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Ver */

/* 7794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7800 */	NdrFcShort( 0xb1 ),	/* 177 */
/* 7802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7808 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7810 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 7812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retver */

/* 7818 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7822 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 7824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InputBox */

/* 7830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7836 */	NdrFcShort( 0xb2 ),	/* 178 */
/* 7838 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7840 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7844 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 7846 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 7848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 7854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Color */

/* 7860 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter szCaption */

/* 7866 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7868 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7870 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter szPrompt */

/* 7872 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7874 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7876 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter szDefaultText */

/* 7878 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7880 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7882 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 7884 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7886 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7888 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 7890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7892 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AntiDebuger */

/* 7896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7902 */	NdrFcShort( 0xb3 ),	/* 179 */
/* 7904 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7908 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7910 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7912 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 7920 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7922 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AntiVEHCallBack */

/* 7932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7938 */	NdrFcShort( 0xb4 ),	/* 180 */
/* 7940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7944 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7946 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7948 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 7956 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7958 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7964 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitExceptionCallback */

/* 7968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7974 */	NdrFcShort( 0xb5 ),	/* 181 */
/* 7976 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7978 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7980 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7982 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 7984 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 7992 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter en */

/* 7998 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 8004 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8006 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8012 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastException */

/* 8016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8022 */	NdrFcShort( 0xb6 ),	/* 182 */
/* 8024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8030 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8032 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 8034 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retstring */

/* 8040 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8044 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 8046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Delay */

/* 8052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8058 */	NdrFcShort( 0xb7 ),	/* 183 */
/* 8060 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8062 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8064 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8066 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 8068 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter s */

/* 8076 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8078 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter en */

/* 8082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8084 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 8088 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8090 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8096 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Exit */

/* 8100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8106 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 8108 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8112 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8114 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8116 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fileName */

/* 8124 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8128 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 8130 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Sizeof */

/* 8142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8148 */	NdrFcShort( 0xb9 ),	/* 185 */
/* 8150 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8154 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8156 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8158 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 8166 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8168 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8170 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 8172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8174 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnablePrivilege */

/* 8184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8190 */	NdrFcShort( 0xba ),	/* 186 */
/* 8192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8196 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8198 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8200 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwPrivilege */

/* 8208 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8212 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 8214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FreeProcessMemory */

/* 8226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8232 */	NdrFcShort( 0xbb ),	/* 187 */
/* 8234 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8238 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8242 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 8250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 8256 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AsmAdd */

/* 8268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8274 */	NdrFcShort( 0xbc ),	/* 188 */
/* 8276 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8280 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8282 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8284 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter asm_ins */

/* 8292 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8296 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 8298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8306 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AsmCall */

/* 8310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8316 */	NdrFcShort( 0xbd ),	/* 189 */
/* 8318 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8320 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8322 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8324 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 8326 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 8334 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mode */

/* 8340 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8342 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter timeout */

/* 8346 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 8352 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8354 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8360 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AsmClear */

/* 8364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8370 */	NdrFcShort( 0xbe ),	/* 190 */
/* 8372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8376 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8378 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8380 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 8388 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8390 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8396 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Assemble */

/* 8400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8406 */	NdrFcShort( 0xbf ),	/* 191 */
/* 8408 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8414 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 8416 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 8418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter base_addr */

/* 8424 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 8430 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8434 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 8436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8438 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisAssemble */

/* 8442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8448 */	NdrFcShort( 0xc0 ),	/* 192 */
/* 8450 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8456 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8458 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 8460 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter asm_code */

/* 8466 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8468 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8470 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter base_addr */

/* 8472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8474 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 8478 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8480 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8482 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 8484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8486 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFindDataAddr */

/* 8490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8496 */	NdrFcShort( 0xc1 ),	/* 193 */
/* 8498 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8502 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8504 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8506 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 8508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 8514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strs */

/* 8520 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8524 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter pret */

/* 8526 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 8528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8530 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter dwret */

/* 8532 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8534 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8540 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadIntAddr */

/* 8544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8550 */	NdrFcShort( 0xc2 ),	/* 194 */
/* 8552 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8554 */	NdrFcShort( 0x20 ),	/* 32 */
/* 8556 */	NdrFcShort( 0x2c ),	/* 44 */
/* 8558 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 8560 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 8568 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 8574 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8578 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 8580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8582 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 8586 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8588 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8590 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8594 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadDataAddr */

/* 8598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8604 */	NdrFcShort( 0xc3 ),	/* 195 */
/* 8606 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8608 */	NdrFcShort( 0x20 ),	/* 32 */
/* 8610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8612 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 8614 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 8616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 8622 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8624 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 8628 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8630 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8632 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter len */

/* 8634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8636 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 8640 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8642 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8644 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 8646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8648 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteIntAddr */

/* 8652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8658 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 8660 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 8662 */	NdrFcShort( 0x30 ),	/* 48 */
/* 8664 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8666 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 8668 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 8676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 8682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8684 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8686 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 8688 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8690 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 8694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8696 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8698 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter nret */

/* 8700 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8702 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8708 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadIntTraverseAddr */

/* 8712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8718 */	NdrFcShort( 0xc5 ),	/* 197 */
/* 8720 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 8722 */	NdrFcShort( 0x38 ),	/* 56 */
/* 8724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8726 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 8728 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 8730 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 8736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 8742 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8746 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter offest */

/* 8748 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8750 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8752 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter count */

/* 8754 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8756 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 8760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8762 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 8766 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8768 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8770 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 8772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8774 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 8776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteDataAddr */

/* 8778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8784 */	NdrFcShort( 0xc6 ),	/* 198 */
/* 8786 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8788 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8790 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8792 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8794 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 8802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8804 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 8808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8810 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8812 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter data */

/* 8814 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8816 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8818 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 8820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8822 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8828 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Memset */

/* 8832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8838 */	NdrFcShort( 0xc7 ),	/* 199 */
/* 8840 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8842 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8844 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8846 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8848 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Dst */

/* 8856 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8860 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter Val */

/* 8862 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Size */

/* 8868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 8874 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8876 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8882 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Memcpy */

/* 8886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8892 */	NdrFcShort( 0xc8 ),	/* 200 */
/* 8894 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8898 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8900 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8902 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Dst */

/* 8910 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8914 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter _Src */

/* 8916 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8918 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8920 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter Size */

/* 8922 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 8928 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8930 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8936 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure New */

/* 8940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8946 */	NdrFcShort( 0xc9 ),	/* 201 */
/* 8948 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8954 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8956 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 8958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sztype */

/* 8964 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8968 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter size */

/* 8970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 8976 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 8978 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8980 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 8982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8984 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Malloc */

/* 8988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8994 */	NdrFcShort( 0xca ),	/* 202 */
/* 8996 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9002 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9004 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 9006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sztype */

/* 9012 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9016 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter size */

/* 9018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 9024 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 9026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9028 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 9030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9032 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Delete */

/* 9036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9042 */	NdrFcShort( 0xcb ),	/* 203 */
/* 9044 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9048 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9050 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9052 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 9054 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Block */

/* 9060 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 9062 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9064 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 9066 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9068 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9074 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Deletes */

/* 9078 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9084 */	NdrFcShort( 0xcc ),	/* 204 */
/* 9086 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9090 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9092 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9094 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 9096 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9098 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Block */

/* 9102 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 9104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9106 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 9108 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Free */

/* 9120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9126 */	NdrFcShort( 0xcd ),	/* 205 */
/* 9128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9132 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9134 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9136 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 9138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Block */

/* 9144 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 9146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9148 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 9150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Set */

/* 9162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9168 */	NdrFcShort( 0xce ),	/* 206 */
/* 9170 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9174 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9176 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9178 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 9180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Pvoid */

/* 9186 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9190 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter type */

/* 9192 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9196 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter value */

/* 9198 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9202 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter nret */

/* 9204 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9206 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9212 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Get */

/* 9216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9222 */	NdrFcShort( 0xcf ),	/* 207 */
/* 9224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9230 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9232 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 9234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9236 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Pvoid */

/* 9240 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9244 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter type */

/* 9246 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9250 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 9252 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 9254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9256 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 9258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9260 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Rand */

/* 9264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9270 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 9272 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9274 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9276 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9278 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 9280 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MIN */

/* 9288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MAX */

/* 9294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 9300 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RandDouble */

/* 9312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9318 */	NdrFcShort( 0xd1 ),	/* 209 */
/* 9320 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9322 */	NdrFcShort( 0x20 ),	/* 32 */
/* 9324 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9326 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 9328 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOUBLE_MIN */

/* 9336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9340 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter DOUBLE_MAX */

/* 9342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9346 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 9348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9350 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9352 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9356 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShiftRight */

/* 9360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9366 */	NdrFcShort( 0xd2 ),	/* 210 */
/* 9368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9370 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9372 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9374 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 9376 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter l */

/* 9384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter _Radix */

/* 9390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 9396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9404 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShiftLeft */

/* 9408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9414 */	NdrFcShort( 0xd3 ),	/* 211 */
/* 9416 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9418 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9420 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 9424 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter l */

/* 9432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter _Radix */

/* 9438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 9444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9452 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AND */

/* 9456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9462 */	NdrFcShort( 0xd4 ),	/* 212 */
/* 9464 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9468 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9470 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9472 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 9474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ins */

/* 9480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9484 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 9486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OR */

/* 9498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9504 */	NdrFcShort( 0xd5 ),	/* 213 */
/* 9506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9510 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9512 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9514 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 9516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ins */

/* 9522 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9526 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 9528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure XOR */

/* 9540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9546 */	NdrFcShort( 0xd6 ),	/* 214 */
/* 9548 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9552 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9554 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9556 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 9558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ins */

/* 9564 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9568 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 9570 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NOT */

/* 9582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9588 */	NdrFcShort( 0xd7 ),	/* 215 */
/* 9590 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9594 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9596 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 9598 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter a */

/* 9606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 9612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9614 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PI */

/* 9624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9630 */	NdrFcShort( 0xd8 ),	/* 216 */
/* 9632 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9636 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9638 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9640 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dret */

/* 9648 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9652 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Acos */

/* 9660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9666 */	NdrFcShort( 0xd9 ),	/* 217 */
/* 9668 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9670 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9672 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9674 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 9676 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 9684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9688 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 9690 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9694 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Acosh */

/* 9702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9708 */	NdrFcShort( 0xda ),	/* 218 */
/* 9710 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9712 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9714 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9716 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 9718 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 9726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9730 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 9732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9736 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Asin */

/* 9744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9750 */	NdrFcShort( 0xdb ),	/* 219 */
/* 9752 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9754 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9756 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 9760 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 9768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9772 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 9774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9778 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9782 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Asinh */

/* 9786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9792 */	NdrFcShort( 0xdc ),	/* 220 */
/* 9794 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9796 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9798 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9800 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 9802 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 9810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9812 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9814 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 9816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9820 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9824 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Atan */

/* 9828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9834 */	NdrFcShort( 0xdd ),	/* 221 */
/* 9836 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9838 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9840 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9842 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 9844 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 9852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9856 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 9858 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9862 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Atan2 */

/* 9870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9876 */	NdrFcShort( 0xde ),	/* 222 */
/* 9878 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9880 */	NdrFcShort( 0x20 ),	/* 32 */
/* 9882 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 9886 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Y */

/* 9894 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9898 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _X */

/* 9900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9902 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9904 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 9906 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9908 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9910 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9912 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9914 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Atanh */

/* 9918 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9924 */	NdrFcShort( 0xdf ),	/* 223 */
/* 9926 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9928 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9930 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9932 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 9934 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 9942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9944 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9946 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 9948 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9950 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9952 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9956 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cbrt */

/* 9960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9966 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 9968 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9970 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9972 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9974 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 9976 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 9978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 9984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9986 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9988 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 9990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9994 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 9996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9998 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Ceil */

/* 10002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10008 */	NdrFcShort( 0xe1 ),	/* 225 */
/* 10010 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10012 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10014 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10016 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10018 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10028 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10030 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10032 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10034 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10036 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10040 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Copysign */

/* 10044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10050 */	NdrFcShort( 0xe2 ),	/* 226 */
/* 10052 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10054 */	NdrFcShort( 0x20 ),	/* 32 */
/* 10056 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10058 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10060 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Number */

/* 10068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10072 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Sign */

/* 10074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10078 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10082 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10084 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10088 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cos */

/* 10092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10098 */	NdrFcShort( 0xe3 ),	/* 227 */
/* 10100 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10102 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10104 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10106 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10108 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10120 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10122 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10124 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10126 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10130 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cosh */

/* 10134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10140 */	NdrFcShort( 0xe4 ),	/* 228 */
/* 10142 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10144 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10146 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10148 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10150 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10162 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10168 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Exp */

/* 10176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10182 */	NdrFcShort( 0xe5 ),	/* 229 */
/* 10184 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10186 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10188 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10190 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10192 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10204 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10206 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10210 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10214 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Exp2 */

/* 10218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10224 */	NdrFcShort( 0xe6 ),	/* 230 */
/* 10226 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10228 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10230 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10232 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10234 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10246 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10248 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10250 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10252 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10256 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Expm1 */

/* 10260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10266 */	NdrFcShort( 0xe7 ),	/* 231 */
/* 10268 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10270 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10272 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10276 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10288 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10290 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10294 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10298 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fabs */

/* 10302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10308 */	NdrFcShort( 0xe8 ),	/* 232 */
/* 10310 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10312 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10314 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10318 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10326 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10330 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10336 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10340 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fdim */

/* 10344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10350 */	NdrFcShort( 0xe9 ),	/* 233 */
/* 10352 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10354 */	NdrFcShort( 0x20 ),	/* 32 */
/* 10356 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10358 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10360 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10372 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 10374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10378 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10382 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10384 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10388 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Floor */

/* 10392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10398 */	NdrFcShort( 0xea ),	/* 234 */
/* 10400 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10402 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10404 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10406 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10408 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10420 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10426 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10430 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fma */

/* 10434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10440 */	NdrFcShort( 0xeb ),	/* 235 */
/* 10442 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 10444 */	NdrFcShort( 0x30 ),	/* 48 */
/* 10446 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10448 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 10450 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10462 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 10464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10468 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Z */

/* 10470 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10472 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10474 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10476 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10478 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10480 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10484 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fmax */

/* 10488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10494 */	NdrFcShort( 0xec ),	/* 236 */
/* 10496 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10498 */	NdrFcShort( 0x20 ),	/* 32 */
/* 10500 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10502 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10504 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10516 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 10518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10522 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10524 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10526 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10528 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10532 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fmin */

/* 10536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10542 */	NdrFcShort( 0xed ),	/* 237 */
/* 10544 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10546 */	NdrFcShort( 0x20 ),	/* 32 */
/* 10548 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10550 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10552 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10560 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10562 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10564 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 10566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10570 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10572 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10574 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10576 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10580 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fmod */

/* 10584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10590 */	NdrFcShort( 0xee ),	/* 238 */
/* 10592 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10594 */	NdrFcShort( 0x20 ),	/* 32 */
/* 10596 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10598 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10600 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10612 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 10614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10618 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10620 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10622 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10624 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10628 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Frexp */

/* 10632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10638 */	NdrFcShort( 0xef ),	/* 239 */
/* 10640 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10642 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10644 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10646 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 10648 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 10650 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10660 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 10662 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 10664 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10666 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter dret */

/* 10668 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10670 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10672 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10676 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Hypot */

/* 10680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10686 */	NdrFcShort( 0xf0 ),	/* 240 */
/* 10688 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10690 */	NdrFcShort( 0x20 ),	/* 32 */
/* 10692 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10694 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10696 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10708 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 10710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10714 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10716 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10718 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10720 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10724 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Ilogb */

/* 10728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10734 */	NdrFcShort( 0xf1 ),	/* 241 */
/* 10736 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10738 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10740 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10742 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10744 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10754 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10756 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10758 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10760 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10762 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10766 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Ldexp */

/* 10770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10776 */	NdrFcShort( 0xf2 ),	/* 242 */
/* 10778 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10780 */	NdrFcShort( 0x18 ),	/* 24 */
/* 10782 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10784 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10786 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10798 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 10800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10806 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10808 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10810 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10814 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Log */

/* 10818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10824 */	NdrFcShort( 0xf3 ),	/* 243 */
/* 10826 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10828 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10830 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10832 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10834 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10846 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10848 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10850 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10852 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10856 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Log10 */

/* 10860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10866 */	NdrFcShort( 0xf4 ),	/* 244 */
/* 10868 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10870 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10872 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10874 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10876 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10884 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10888 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10890 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10892 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10894 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10898 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Log2 */

/* 10902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10908 */	NdrFcShort( 0xf5 ),	/* 245 */
/* 10910 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10912 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10914 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10916 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10918 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10930 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10932 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10934 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10936 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10940 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Logb */

/* 10944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10950 */	NdrFcShort( 0xf6 ),	/* 246 */
/* 10952 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10954 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10956 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10958 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10960 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 10962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 10968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10972 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 10974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10976 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10978 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 10980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10982 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Log1p */

/* 10986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10992 */	NdrFcShort( 0xf7 ),	/* 247 */
/* 10994 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10996 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10998 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11000 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11002 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11012 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11014 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11018 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11020 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11024 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lrint */

/* 11028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11034 */	NdrFcShort( 0xf8 ),	/* 248 */
/* 11036 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11038 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11040 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11042 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11044 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11056 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter nret */

/* 11058 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11060 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11066 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lround */

/* 11070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11076 */	NdrFcShort( 0xf9 ),	/* 249 */
/* 11078 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11080 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11082 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11084 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11086 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11098 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter nret */

/* 11100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11102 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11108 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Modf */

/* 11112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11118 */	NdrFcShort( 0xfa ),	/* 250 */
/* 11120 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11122 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11124 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11126 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 11128 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 11130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 11136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11140 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter intpart */

/* 11142 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 11144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11146 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter dret */

/* 11148 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11150 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11152 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11156 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Nan */

/* 11160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11166 */	NdrFcShort( 0xfb ),	/* 251 */
/* 11168 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11172 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11174 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11176 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 11178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11184 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11188 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter dret */

/* 11190 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11192 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11194 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11198 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Nearbyint */

/* 11202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11208 */	NdrFcShort( 0xfc ),	/* 252 */
/* 11210 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11212 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11214 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11216 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11218 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11230 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11232 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11236 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11240 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Nextafter */

/* 11244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11250 */	NdrFcShort( 0xfd ),	/* 253 */
/* 11252 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11254 */	NdrFcShort( 0x20 ),	/* 32 */
/* 11256 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11258 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 11260 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11268 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11272 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 11274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11276 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11278 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11280 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11282 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11284 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11288 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Pow */

/* 11292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11298 */	NdrFcShort( 0xfe ),	/* 254 */
/* 11300 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11302 */	NdrFcShort( 0x20 ),	/* 32 */
/* 11304 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11306 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 11308 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11316 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11320 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 11322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11324 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11326 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11330 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11332 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11336 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Remainder */

/* 11340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11346 */	NdrFcShort( 0xff ),	/* 255 */
/* 11348 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11350 */	NdrFcShort( 0x20 ),	/* 32 */
/* 11352 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11354 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 11356 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11368 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 11370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11374 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11376 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11378 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11380 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11384 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Remquo */

/* 11388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11394 */	NdrFcShort( 0x100 ),	/* 256 */
/* 11396 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 11398 */	NdrFcShort( 0x20 ),	/* 32 */
/* 11400 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11402 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 11404 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 11406 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11412 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11416 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 11418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11422 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Z */

/* 11424 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 11426 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11428 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter dret */

/* 11430 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11432 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11434 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11438 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Rint */

/* 11442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11448 */	NdrFcShort( 0x101 ),	/* 257 */
/* 11450 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11452 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11454 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11456 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11458 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11466 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11468 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11470 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11474 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11476 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11480 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Round */

/* 11484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11490 */	NdrFcShort( 0x102 ),	/* 258 */
/* 11492 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11494 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11496 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11498 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11500 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11508 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11512 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11514 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11516 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11518 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11522 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Scalbln */

/* 11526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11532 */	NdrFcShort( 0x103 ),	/* 259 */
/* 11534 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11536 */	NdrFcShort( 0x18 ),	/* 24 */
/* 11538 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11540 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 11542 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11548 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11550 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11552 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11554 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 11556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11558 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11562 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11564 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11566 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11570 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Scalbn */

/* 11574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11580 */	NdrFcShort( 0x104 ),	/* 260 */
/* 11582 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11584 */	NdrFcShort( 0x18 ),	/* 24 */
/* 11586 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11588 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 11590 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11602 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _Y */

/* 11604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11606 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11610 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11612 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11614 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11618 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Sin */

/* 11622 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11628 */	NdrFcShort( 0x105 ),	/* 261 */
/* 11630 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11632 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11634 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11636 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11638 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11648 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11650 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11656 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11660 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Sinh */

/* 11664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11670 */	NdrFcShort( 0x106 ),	/* 262 */
/* 11672 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11674 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11676 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11678 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11680 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11688 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11690 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11692 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11694 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11696 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11698 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11702 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Sqrt */

/* 11706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11712 */	NdrFcShort( 0x107 ),	/* 263 */
/* 11714 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11716 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11718 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11720 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11722 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11732 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11734 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11736 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11740 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11744 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Tan */

/* 11748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11754 */	NdrFcShort( 0x108 ),	/* 264 */
/* 11756 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11758 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11760 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11762 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11764 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11776 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11778 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11782 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11786 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Tanh */

/* 11790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11796 */	NdrFcShort( 0x109 ),	/* 265 */
/* 11798 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11800 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11802 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11804 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11806 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11818 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11822 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11824 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11828 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Trunc */

/* 11832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11838 */	NdrFcShort( 0x10a ),	/* 266 */
/* 11840 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11842 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11844 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11848 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 11850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _X */

/* 11856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11860 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dret */

/* 11862 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11864 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11866 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 11868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11870 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArrayGetHighest */

/* 11874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11880 */	NdrFcShort( 0x10b ),	/* 267 */
/* 11882 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11886 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11888 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11890 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 11892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11894 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szArr */

/* 11898 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11902 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter en */

/* 11904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 11910 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11912 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11918 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArrayGetLowest */

/* 11922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11928 */	NdrFcShort( 0x10c ),	/* 268 */
/* 11930 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11934 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11936 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11938 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 11940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11942 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szArr */

/* 11946 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11948 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11950 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter en */

/* 11952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11954 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 11958 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11960 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11966 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArrayUniqueInt */

/* 11970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11976 */	NdrFcShort( 0x10d ),	/* 269 */
/* 11978 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11984 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11986 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 11988 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szArr */

/* 11994 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11996 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11998 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12000 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12002 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12004 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArrayUnique */

/* 12012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12018 */	NdrFcShort( 0x10e ),	/* 270 */
/* 12020 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12026 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12028 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12030 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12032 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szArr */

/* 12036 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12040 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12042 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12046 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12050 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArraySortInt */

/* 12054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12060 */	NdrFcShort( 0x10f ),	/* 271 */
/* 12062 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12068 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12070 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12074 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szArr */

/* 12078 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12082 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter en */

/* 12084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 12090 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12094 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12098 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArraySort */

/* 12102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12108 */	NdrFcShort( 0x110 ),	/* 272 */
/* 12110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12116 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12118 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szArr */

/* 12126 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12130 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12132 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12136 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArrayFilter */

/* 12144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12150 */	NdrFcShort( 0x111 ),	/* 273 */
/* 12152 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12158 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12160 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szArr */

/* 12168 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12172 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter str */

/* 12174 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12178 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12180 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12184 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArrayAlloc */

/* 12192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12198 */	NdrFcShort( 0x112 ),	/* 274 */
/* 12200 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12206 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12208 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12210 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dim */

/* 12216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter szsize */

/* 12222 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12226 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12228 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12232 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArrayReverse */

/* 12240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12246 */	NdrFcShort( 0x113 ),	/* 275 */
/* 12248 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12254 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12256 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12258 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szArr */

/* 12264 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12268 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12270 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12274 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12278 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArrayRotate */

/* 12282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12288 */	NdrFcShort( 0x114 ),	/* 276 */
/* 12290 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12292 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12296 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 12298 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szArr */

/* 12306 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12310 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter mov */

/* 12312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter en */

/* 12318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 12324 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12326 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12328 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12332 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArrayShift */

/* 12336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12342 */	NdrFcShort( 0x115 ),	/* 277 */
/* 12344 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12346 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12350 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 12352 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12354 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szArr */

/* 12360 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12364 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter mov */

/* 12366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter en */

/* 12372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 12378 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12380 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12382 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12386 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringSplit */

/* 12390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12396 */	NdrFcShort( 0x116 ),	/* 278 */
/* 12398 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12404 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 12406 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ins */

/* 12414 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12418 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter delimit */

/* 12420 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12424 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 12426 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 12428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12430 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter outs */

/* 12432 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12434 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12436 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12440 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringSort */

/* 12444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12450 */	NdrFcShort( 0x117 ),	/* 279 */
/* 12452 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12458 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12460 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12464 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ins */

/* 12468 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12472 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12474 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12478 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringShuffle */

/* 12486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12492 */	NdrFcShort( 0x118 ),	/* 280 */
/* 12494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12500 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12502 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ins */

/* 12510 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12514 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12516 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12520 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringUnique */

/* 12528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12534 */	NdrFcShort( 0x119 ),	/* 281 */
/* 12536 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12542 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12544 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12546 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12548 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ins */

/* 12552 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12556 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12558 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12562 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringReverse */

/* 12570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12576 */	NdrFcShort( 0x11a ),	/* 282 */
/* 12578 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12584 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12586 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12590 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ins */

/* 12594 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12598 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12600 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12604 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringRotate */

/* 12612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12618 */	NdrFcShort( 0x11b ),	/* 283 */
/* 12620 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12622 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12626 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 12628 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12630 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12632 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ins */

/* 12636 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12640 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter mov */

/* 12642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter en */

/* 12648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12650 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 12654 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12656 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12658 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12662 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringShift */

/* 12666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12672 */	NdrFcShort( 0x11c ),	/* 284 */
/* 12674 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12676 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12680 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 12682 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12684 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12686 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ins */

/* 12690 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12694 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter mov */

/* 12696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter en */

/* 12702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12704 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 12708 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12712 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12716 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringXml2Json */

/* 12720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12726 */	NdrFcShort( 0x11d ),	/* 285 */
/* 12728 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12734 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12736 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Src */

/* 12744 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12748 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12750 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12754 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12758 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringJson2Xml */

/* 12762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12768 */	NdrFcShort( 0x11e ),	/* 286 */
/* 12770 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12776 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12778 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 12780 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Src */

/* 12786 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12790 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 12792 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12794 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12796 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12800 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fwopen */

/* 12804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12810 */	NdrFcShort( 0x11f ),	/* 287 */
/* 12812 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12816 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12818 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12820 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 12822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _FileName */

/* 12828 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12832 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter _Mode */

/* 12834 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12838 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 12840 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12842 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12848 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fseek */

/* 12852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12858 */	NdrFcShort( 0x120 ),	/* 288 */
/* 12860 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12862 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12864 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12866 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 12868 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 12870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12872 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Stream */

/* 12876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter _Offset */

/* 12882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dst */

/* 12888 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12890 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12892 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 12894 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12902 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fread */

/* 12906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12912 */	NdrFcShort( 0x121 ),	/* 289 */
/* 12914 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 12916 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12920 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 12922 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 12924 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _ElementSize */

/* 12930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter _ElementCount */

/* 12936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter _Stream */

/* 12942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 12948 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 12950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12952 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter _Buffer */

/* 12954 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12956 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12958 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 12960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12962 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fwrite */

/* 12966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12972 */	NdrFcShort( 0x122 ),	/* 290 */
/* 12974 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 12976 */	NdrFcShort( 0x20 ),	/* 32 */
/* 12978 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12980 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 12982 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 12984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Buffer */

/* 12990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter _ElementSize */

/* 12996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter _ElementCount */

/* 13002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter _Stream */

/* 13008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13010 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 13014 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13016 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13022 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fgetws */

/* 13026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13032 */	NdrFcShort( 0x123 ),	/* 291 */
/* 13034 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13036 */	NdrFcShort( 0x10 ),	/* 16 */
/* 13038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13040 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 13042 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 13044 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Buffer */

/* 13050 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13054 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter _BufferCount */

/* 13056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter _Stream */

/* 13062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 13068 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13070 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13072 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 13074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13076 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fclose */

/* 13080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13086 */	NdrFcShort( 0x124 ),	/* 292 */
/* 13088 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13092 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13094 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 13096 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 13098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Stream */

/* 13104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 13110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Mmap */

/* 13122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13128 */	NdrFcShort( 0x125 ),	/* 293 */
/* 13130 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13136 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 13138 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 13140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _FileName */

/* 13146 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13150 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter dwret */

/* 13152 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 13154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13156 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter buf */

/* 13158 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13162 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 13164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13166 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumIniSection */

/* 13170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13176 */	NdrFcShort( 0x126 ),	/* 294 */
/* 13178 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13184 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 13186 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 13188 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _FileName */

/* 13194 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13196 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13198 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 13200 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13202 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13204 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 13206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumIniKey */

/* 13212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13218 */	NdrFcShort( 0x127 ),	/* 295 */
/* 13220 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13226 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 13228 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 13230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Key */

/* 13236 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13240 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter _FileName */

/* 13242 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13246 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 13248 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13250 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13252 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 13254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13256 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Swap */

/* 13260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13266 */	NdrFcShort( 0x128 ),	/* 296 */
/* 13268 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13272 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13274 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 13276 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 13278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter a */

/* 13284 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 13286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13288 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter b */

/* 13290 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 13292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13294 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 13296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13304 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SwapByte */

/* 13308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13314 */	NdrFcShort( 0x129 ),	/* 297 */
/* 13316 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13318 */	NdrFcShort( 0x5 ),	/* 5 */
/* 13320 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13322 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 13324 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 13326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter a */

/* 13332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13336 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter nret */

/* 13338 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13346 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SwapWord */

/* 13350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13356 */	NdrFcShort( 0x12a ),	/* 298 */
/* 13358 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13360 */	NdrFcShort( 0x6 ),	/* 6 */
/* 13362 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13364 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 13366 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 13368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter a */

/* 13374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13378 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter nret */

/* 13380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SwapLong */

/* 13392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13398 */	NdrFcShort( 0x12b ),	/* 299 */
/* 13400 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13404 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13406 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 13408 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 13410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter a */

/* 13416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 13422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SwapInt64 */

/* 13434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13440 */	NdrFcShort( 0x12c ),	/* 300 */
/* 13442 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13444 */	NdrFcShort( 0x10 ),	/* 16 */
/* 13446 */	NdrFcShort( 0x2c ),	/* 44 */
/* 13448 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 13450 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 13452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter a */

/* 13458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13462 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter nret */

/* 13464 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13468 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 13470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13472 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure XStringToL */

/* 13476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13482 */	NdrFcShort( 0x12d ),	/* 301 */
/* 13484 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13488 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13490 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 13492 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 13494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _String */

/* 13500 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13504 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter _Radix */

/* 13506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 13512 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13514 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13520 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure XStringToI64 */

/* 13524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13530 */	NdrFcShort( 0x12e ),	/* 302 */
/* 13532 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13536 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13538 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 13540 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 13542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13544 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _String */

/* 13548 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13552 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter _Radix */

/* 13554 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter llret */

/* 13560 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 13562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13564 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 13566 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13568 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13572 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13574 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringToL */

/* 13578 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13584 */	NdrFcShort( 0x12f ),	/* 303 */
/* 13586 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13590 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13592 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 13594 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 13596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13598 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _String */

/* 13602 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13606 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 13608 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13610 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringToI64 */

/* 13620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13626 */	NdrFcShort( 0x130 ),	/* 304 */
/* 13628 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13632 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13634 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 13636 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 13638 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13640 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _String */

/* 13644 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13648 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter llret */

/* 13650 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 13652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13654 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 13656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13658 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13664 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LToXString */

/* 13668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13674 */	NdrFcShort( 0x131 ),	/* 305 */
/* 13676 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13678 */	NdrFcShort( 0x10 ),	/* 16 */
/* 13680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13682 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 13684 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 13686 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Value */

/* 13692 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter _Radix */

/* 13698 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 13704 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13706 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13708 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 13710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13712 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure I64ToXString */

/* 13716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13722 */	NdrFcShort( 0x132 ),	/* 306 */
/* 13724 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13726 */	NdrFcShort( 0x18 ),	/* 24 */
/* 13728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13730 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 13732 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 13734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _Value */

/* 13740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13744 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter _Radix */

/* 13746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13748 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 13752 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13754 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13756 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 13758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13760 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringToDbl */

/* 13764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13770 */	NdrFcShort( 0x133 ),	/* 307 */
/* 13772 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13776 */	NdrFcShort( 0x2c ),	/* 44 */
/* 13778 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 13780 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 13782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13784 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _String */

/* 13788 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13790 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13792 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter dret */

/* 13794 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13796 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13798 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 13800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringToFlt */

/* 13806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13812 */	NdrFcShort( 0x134 ),	/* 308 */
/* 13814 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13818 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13820 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 13822 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 13824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13826 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _String */

/* 13830 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13834 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter fret */

/* 13836 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13840 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 13842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TMAKEWORD */

/* 13848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13854 */	NdrFcShort( 0x135 ),	/* 309 */
/* 13856 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13858 */	NdrFcShort( 0x10 ),	/* 16 */
/* 13860 */	NdrFcShort( 0x22 ),	/* 34 */
/* 13862 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 13864 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 13866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter a */

/* 13872 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter b */

/* 13878 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 13884 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13886 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13888 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 13890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13892 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TMAKELONG */

/* 13896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13902 */	NdrFcShort( 0x136 ),	/* 310 */
/* 13904 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13906 */	NdrFcShort( 0x10 ),	/* 16 */
/* 13908 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13910 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 13912 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 13914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter a */

/* 13920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13922 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter b */

/* 13926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 13932 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13934 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13940 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TLOWORD */

/* 13944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13950 */	NdrFcShort( 0x137 ),	/* 311 */
/* 13952 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13956 */	NdrFcShort( 0x22 ),	/* 34 */
/* 13958 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 13960 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 13962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter l */

/* 13968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 13974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13978 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 13980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure THIWORD */

/* 13986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13992 */	NdrFcShort( 0x138 ),	/* 312 */
/* 13994 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13998 */	NdrFcShort( 0x22 ),	/* 34 */
/* 14000 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 14002 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter l */

/* 14010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14012 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 14016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14018 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14020 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 14022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TLOBYTE */

/* 14028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14034 */	NdrFcShort( 0x139 ),	/* 313 */
/* 14036 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14038 */	NdrFcShort( 0x6 ),	/* 6 */
/* 14040 */	NdrFcShort( 0x21 ),	/* 33 */
/* 14042 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 14044 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter w */

/* 14052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14056 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter byret */

/* 14058 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14062 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 14064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14066 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure THIBYTE */

/* 14070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14076 */	NdrFcShort( 0x13a ),	/* 314 */
/* 14078 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14080 */	NdrFcShort( 0x6 ),	/* 6 */
/* 14082 */	NdrFcShort( 0x21 ),	/* 33 */
/* 14084 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 14086 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter w */

/* 14094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14098 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter byret */

/* 14100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14102 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14104 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 14106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TIS_INTRESOURCE */

/* 14112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14118 */	NdrFcShort( 0x13b ),	/* 315 */
/* 14120 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14124 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14126 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 14128 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _r */

/* 14136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 14142 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14150 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TMAKEINTRESOURCE */

/* 14154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14160 */	NdrFcShort( 0x13c ),	/* 316 */
/* 14162 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14168 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 14170 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 14172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter i */

/* 14178 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 14184 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14188 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 14190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TMAKEWPARAM */

/* 14196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14202 */	NdrFcShort( 0x13d ),	/* 317 */
/* 14204 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14206 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14208 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14210 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 14212 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter l */

/* 14220 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14222 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter h */

/* 14226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14228 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 14232 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14240 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TMAKELPARAM */

/* 14244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14250 */	NdrFcShort( 0x13e ),	/* 318 */
/* 14252 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14254 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14256 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14258 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 14260 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter l */

/* 14268 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter h */

/* 14274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 14280 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14282 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14288 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TMAKELRESULT */

/* 14292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14298 */	NdrFcShort( 0x13f ),	/* 319 */
/* 14300 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14302 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14304 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14306 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 14308 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter l */

/* 14316 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter h */

/* 14322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14324 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 14328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14330 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14336 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TMAKELANGID */

/* 14340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14346 */	NdrFcShort( 0x140 ),	/* 320 */
/* 14348 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14350 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14352 */	NdrFcShort( 0x22 ),	/* 34 */
/* 14354 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 14356 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter s */

/* 14364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p */

/* 14370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 14376 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14380 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 14382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14384 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TPRIMARYLANGID */

/* 14388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14394 */	NdrFcShort( 0x141 ),	/* 321 */
/* 14396 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14400 */	NdrFcShort( 0x22 ),	/* 34 */
/* 14402 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 14404 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lgid */

/* 14412 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 14418 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14422 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 14424 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14426 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TSUBLANGID */

/* 14430 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14436 */	NdrFcShort( 0x142 ),	/* 322 */
/* 14438 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14442 */	NdrFcShort( 0x22 ),	/* 34 */
/* 14444 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 14446 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lgid */

/* 14454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14456 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wret */

/* 14460 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14462 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14464 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 14466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14468 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TMAKELCID */

/* 14472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14478 */	NdrFcShort( 0x143 ),	/* 323 */
/* 14480 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14482 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14484 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14486 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 14488 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter srtid */

/* 14496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14498 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lgid */

/* 14502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14504 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwret */

/* 14508 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14510 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14516 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TMAKEPOINTS */

/* 14520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14526 */	NdrFcShort( 0x144 ),	/* 324 */
/* 14528 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 14530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14532 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14534 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 14536 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 14538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter l */

/* 14544 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x */

/* 14550 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 14552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14554 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter y */

/* 14556 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 14558 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14560 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter nret */

/* 14562 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14564 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14570 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TINDEXTOSTATEIMAGEMASK */

/* 14574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14580 */	NdrFcShort( 0x145 ),	/* 325 */
/* 14582 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14586 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14588 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 14590 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter i */

/* 14598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 14604 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConvertLanguage */

/* 14616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14622 */	NdrFcShort( 0x146 ),	/* 326 */
/* 14624 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14630 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 14632 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 14634 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter str */

/* 14640 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14642 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14644 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter type */

/* 14646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 14652 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14656 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 14658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14660 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GB2312ToUTF8 */

/* 14664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14670 */	NdrFcShort( 0x147 ),	/* 327 */
/* 14672 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14678 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14680 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 14682 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14684 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStrGB2312 */

/* 14688 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14690 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14692 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 14694 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14696 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14698 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 14700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14702 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UTF8ToGB2312 */

/* 14706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14712 */	NdrFcShort( 0x148 ),	/* 328 */
/* 14714 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14720 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14722 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 14724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14726 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStrUTF8 */

/* 14730 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14732 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14734 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 14736 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14738 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14740 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 14742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14744 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GB2312ToBIG5 */

/* 14748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14754 */	NdrFcShort( 0x149 ),	/* 329 */
/* 14756 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14762 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14764 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 14766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStrGB2312 */

/* 14772 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14776 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 14778 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14782 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 14784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14786 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BIG5ToGB2312 */

/* 14790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14796 */	NdrFcShort( 0x14a ),	/* 330 */
/* 14798 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14804 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14806 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 14808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStrBIG5 */

/* 14814 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14818 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 14820 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14822 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14824 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 14826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14828 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UTF8ToBIG5 */

/* 14832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14838 */	NdrFcShort( 0x14b ),	/* 331 */
/* 14840 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14846 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14848 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 14850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStrUTF8 */

/* 14856 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14860 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 14862 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14866 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 14868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BIG5ToUTF8 */

/* 14874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14880 */	NdrFcShort( 0x14c ),	/* 332 */
/* 14882 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14888 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14890 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 14892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14894 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStrBIG5 */

/* 14898 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14902 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 14904 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14908 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 14910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14912 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetWSAStartup */

/* 14916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14922 */	NdrFcShort( 0x14d ),	/* 333 */
/* 14924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14928 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14930 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14932 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 14940 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetClose */

/* 14952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14958 */	NdrFcShort( 0x14e ),	/* 334 */
/* 14960 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14964 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14966 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14968 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 14970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 14976 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14978 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14984 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetSocket */

/* 14988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14994 */	NdrFcShort( 0x14f ),	/* 335 */
/* 14996 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15000 */	NdrFcShort( 0x24 ),	/* 36 */
/* 15002 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 15004 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 15006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sztype */

/* 15012 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 15014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15016 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 15018 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 15020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetCloseSocket */

/* 15030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15036 */	NdrFcShort( 0x150 ),	/* 336 */
/* 15038 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15042 */	NdrFcShort( 0x24 ),	/* 36 */
/* 15044 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 15046 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 15048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sockhandle */

/* 15054 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15056 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 15060 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 15062 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetConnect */

/* 15072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15078 */	NdrFcShort( 0x151 ),	/* 337 */
/* 15080 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 15082 */	NdrFcShort( 0xe ),	/* 14 */
/* 15084 */	NdrFcShort( 0x24 ),	/* 36 */
/* 15086 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 15088 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 15090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sockhandle */

/* 15096 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15098 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter serv_ip */

/* 15102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 15104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15106 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter serv_port */

/* 15108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15112 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter nret */

/* 15114 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 15116 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15122 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetBind */

/* 15126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15132 */	NdrFcShort( 0x152 ),	/* 338 */
/* 15134 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15136 */	NdrFcShort( 0xe ),	/* 14 */
/* 15138 */	NdrFcShort( 0x24 ),	/* 36 */
/* 15140 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 15142 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 15144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sockhandle */

/* 15150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter serv_port */

/* 15156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15160 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter nret */

/* 15162 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 15164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15170 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetListen */

/* 15174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15180 */	NdrFcShort( 0x153 ),	/* 339 */
/* 15182 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15184 */	NdrFcShort( 0x10 ),	/* 16 */
/* 15186 */	NdrFcShort( 0x24 ),	/* 36 */
/* 15188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 15190 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 15192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sockhandle */

/* 15198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ncout */

/* 15204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 15210 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 15212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15218 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetAccept */

/* 15222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15228 */	NdrFcShort( 0x154 ),	/* 340 */
/* 15230 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15236 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 15238 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 15240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sockhandle */

/* 15246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 15252 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15256 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Parameter serv_ip */

/* 15258 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15262 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 15264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetRecv */

/* 15270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15276 */	NdrFcShort( 0x155 ),	/* 341 */
/* 15278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15284 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 15286 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 15288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sockhandle */

/* 15294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Recvbuff */

/* 15300 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15302 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15304 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 15306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetSend */

/* 15312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15318 */	NdrFcShort( 0x156 ),	/* 342 */
/* 15320 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 15326 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 15328 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 15330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sockhandle */

/* 15336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter data */

/* 15342 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 15344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15346 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 15348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 15350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetSendTo */

/* 15360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15366 */	NdrFcShort( 0x157 ),	/* 343 */
/* 15368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15372 */	NdrFcShort( 0x24 ),	/* 36 */
/* 15374 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 15376 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 15378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15380 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sockhandle */

/* 15384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter data */

/* 15390 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 15392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15394 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter nret */

/* 15396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 15398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15404 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetRecvFrom */

/* 15408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15414 */	NdrFcShort( 0x158 ),	/* 344 */
/* 15416 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 15418 */	NdrFcShort( 0x16 ),	/* 22 */
/* 15420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15422 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 15424 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 15426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sockhandle */

/* 15432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter length */

/* 15438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter serv_ip */

/* 15444 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 15446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15448 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter rPort */

/* 15450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15452 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15454 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter data */

/* 15456 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15458 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15460 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 15462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15464 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 15466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIP */

/* 15468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15474 */	NdrFcShort( 0x159 ),	/* 345 */
/* 15476 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15482 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 15484 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 15486 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15488 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 15492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter param */

/* 15498 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 15500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15502 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter retstring */

/* 15504 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15508 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 15510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15512 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const TLibPlus_MIDL_TYPE_FORMAT_STRING TLibPlus__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x26 ),	/* Offset= 38 (42) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0x18 ),	/* Offset= 24 (32) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x0 , 
			0x0,		/* 0 */
/* 22 */	NdrFcLong( 0x0 ),	/* 0 */
/* 26 */	NdrFcLong( 0x0 ),	/* 0 */
/* 30 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 32 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 34 */	NdrFcShort( 0x8 ),	/* 8 */
/* 36 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (10) */
/* 38 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 40 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 42 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x4 ),	/* 4 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (6) */
/* 52 */	
			0x12, 0x0,	/* FC_UP */
/* 54 */	NdrFcShort( 0xffea ),	/* Offset= -22 (32) */
/* 56 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x4 ),	/* 4 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (52) */
/* 66 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 68 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 70 */	
			0x11, 0x0,	/* FC_RP */
/* 72 */	NdrFcShort( 0x472 ),	/* Offset= 1138 (1210) */
/* 74 */	
			0x13, 0x0,	/* FC_OP */
/* 76 */	NdrFcShort( 0x45a ),	/* Offset= 1114 (1190) */
/* 78 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 80 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 82 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 84 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 86 */	0x0 , 
			0x0,		/* 0 */
/* 88 */	NdrFcLong( 0x0 ),	/* 0 */
/* 92 */	NdrFcLong( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	NdrFcShort( 0x10 ),	/* 16 */
/* 100 */	NdrFcShort( 0x2f ),	/* 47 */
/* 102 */	NdrFcLong( 0x14 ),	/* 20 */
/* 106 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 108 */	NdrFcLong( 0x3 ),	/* 3 */
/* 112 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 114 */	NdrFcLong( 0x11 ),	/* 17 */
/* 118 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 120 */	NdrFcLong( 0x2 ),	/* 2 */
/* 124 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 126 */	NdrFcLong( 0x4 ),	/* 4 */
/* 130 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 132 */	NdrFcLong( 0x5 ),	/* 5 */
/* 136 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 138 */	NdrFcLong( 0xb ),	/* 11 */
/* 142 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 144 */	NdrFcLong( 0xa ),	/* 10 */
/* 148 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 150 */	NdrFcLong( 0x6 ),	/* 6 */
/* 154 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (386) */
/* 156 */	NdrFcLong( 0x7 ),	/* 7 */
/* 160 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 162 */	NdrFcLong( 0x8 ),	/* 8 */
/* 166 */	NdrFcShort( 0xff60 ),	/* Offset= -160 (6) */
/* 168 */	NdrFcLong( 0xd ),	/* 13 */
/* 172 */	NdrFcShort( 0xdc ),	/* Offset= 220 (392) */
/* 174 */	NdrFcLong( 0x9 ),	/* 9 */
/* 178 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (410) */
/* 180 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 184 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (428) */
/* 186 */	NdrFcLong( 0x24 ),	/* 36 */
/* 190 */	NdrFcShort( 0x39e ),	/* Offset= 926 (1116) */
/* 192 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 196 */	NdrFcShort( 0x398 ),	/* Offset= 920 (1116) */
/* 198 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 202 */	NdrFcShort( 0x396 ),	/* Offset= 918 (1120) */
/* 204 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 208 */	NdrFcShort( 0x394 ),	/* Offset= 916 (1124) */
/* 210 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 214 */	NdrFcShort( 0x392 ),	/* Offset= 914 (1128) */
/* 216 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 220 */	NdrFcShort( 0x390 ),	/* Offset= 912 (1132) */
/* 222 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 226 */	NdrFcShort( 0x38e ),	/* Offset= 910 (1136) */
/* 228 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 232 */	NdrFcShort( 0x38c ),	/* Offset= 908 (1140) */
/* 234 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 238 */	NdrFcShort( 0x376 ),	/* Offset= 886 (1124) */
/* 240 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 244 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1128) */
/* 246 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 250 */	NdrFcShort( 0x37e ),	/* Offset= 894 (1144) */
/* 252 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 256 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1140) */
/* 258 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 262 */	NdrFcShort( 0x376 ),	/* Offset= 886 (1148) */
/* 264 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 268 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1152) */
/* 270 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 274 */	NdrFcShort( 0x372 ),	/* Offset= 882 (1156) */
/* 276 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 280 */	NdrFcShort( 0x370 ),	/* Offset= 880 (1160) */
/* 282 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 286 */	NdrFcShort( 0x36e ),	/* Offset= 878 (1164) */
/* 288 */	NdrFcLong( 0x10 ),	/* 16 */
/* 292 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 294 */	NdrFcLong( 0x12 ),	/* 18 */
/* 298 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 300 */	NdrFcLong( 0x13 ),	/* 19 */
/* 304 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 306 */	NdrFcLong( 0x15 ),	/* 21 */
/* 310 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 312 */	NdrFcLong( 0x16 ),	/* 22 */
/* 316 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 318 */	NdrFcLong( 0x17 ),	/* 23 */
/* 322 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 324 */	NdrFcLong( 0xe ),	/* 14 */
/* 328 */	NdrFcShort( 0x34c ),	/* Offset= 844 (1172) */
/* 330 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 334 */	NdrFcShort( 0x350 ),	/* Offset= 848 (1182) */
/* 336 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 340 */	NdrFcShort( 0x34e ),	/* Offset= 846 (1186) */
/* 342 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 346 */	NdrFcShort( 0x30a ),	/* Offset= 778 (1124) */
/* 348 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 352 */	NdrFcShort( 0x308 ),	/* Offset= 776 (1128) */
/* 354 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 358 */	NdrFcShort( 0x306 ),	/* Offset= 774 (1132) */
/* 360 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 364 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (1128) */
/* 366 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 370 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (1128) */
/* 372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* Offset= 0 (376) */
/* 378 */	NdrFcLong( 0x1 ),	/* 1 */
/* 382 */	NdrFcShort( 0x0 ),	/* Offset= 0 (382) */
/* 384 */	NdrFcShort( 0xffff ),	/* Offset= -1 (383) */
/* 386 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 390 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 392 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 404 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 406 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 408 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 410 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 412 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 420 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 422 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 424 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 426 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 428 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 430 */	NdrFcShort( 0x2 ),	/* Offset= 2 (432) */
/* 432 */	
			0x13, 0x0,	/* FC_OP */
/* 434 */	NdrFcShort( 0x298 ),	/* Offset= 664 (1098) */
/* 436 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 438 */	NdrFcShort( 0x18 ),	/* 24 */
/* 440 */	NdrFcShort( 0xa ),	/* 10 */
/* 442 */	NdrFcLong( 0x8 ),	/* 8 */
/* 446 */	NdrFcShort( 0x64 ),	/* Offset= 100 (546) */
/* 448 */	NdrFcLong( 0xd ),	/* 13 */
/* 452 */	NdrFcShort( 0x9c ),	/* Offset= 156 (608) */
/* 454 */	NdrFcLong( 0x9 ),	/* 9 */
/* 458 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (666) */
/* 460 */	NdrFcLong( 0xc ),	/* 12 */
/* 464 */	NdrFcShort( 0x104 ),	/* Offset= 260 (724) */
/* 466 */	NdrFcLong( 0x24 ),	/* 36 */
/* 470 */	NdrFcShort( 0x174 ),	/* Offset= 372 (842) */
/* 472 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 476 */	NdrFcShort( 0x190 ),	/* Offset= 400 (876) */
/* 478 */	NdrFcLong( 0x10 ),	/* 16 */
/* 482 */	NdrFcShort( 0x1b4 ),	/* Offset= 436 (918) */
/* 484 */	NdrFcLong( 0x2 ),	/* 2 */
/* 488 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (960) */
/* 490 */	NdrFcLong( 0x3 ),	/* 3 */
/* 494 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (1002) */
/* 496 */	NdrFcLong( 0x14 ),	/* 20 */
/* 500 */	NdrFcShort( 0x220 ),	/* Offset= 544 (1044) */
/* 502 */	NdrFcShort( 0xffff ),	/* Offset= -1 (501) */
/* 504 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 506 */	NdrFcShort( 0x4 ),	/* 4 */
/* 508 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 514 */	0x0 , 
			0x0,		/* 0 */
/* 516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 524 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 526 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 528 */	NdrFcShort( 0x4 ),	/* 4 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	0x13, 0x0,	/* FC_OP */
/* 540 */	NdrFcShort( 0xfe04 ),	/* Offset= -508 (32) */
/* 542 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 544 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 546 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 550 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 552 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 554 */	NdrFcShort( 0x4 ),	/* 4 */
/* 556 */	NdrFcShort( 0x4 ),	/* 4 */
/* 558 */	0x11, 0x0,	/* FC_RP */
/* 560 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (504) */
/* 562 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 564 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 566 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 576 */	0x0 , 
			0x0,		/* 0 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 586 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 590 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 592 */	0x0 , 
			0x0,		/* 0 */
/* 594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 602 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 604 */	NdrFcShort( 0xff2c ),	/* Offset= -212 (392) */
/* 606 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 608 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x6 ),	/* Offset= 6 (620) */
/* 616 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 618 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 620 */	
			0x11, 0x0,	/* FC_RP */
/* 622 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (566) */
/* 624 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 634 */	0x0 , 
			0x0,		/* 0 */
/* 636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 644 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 648 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 650 */	0x0 , 
			0x0,		/* 0 */
/* 652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 660 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 662 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (410) */
/* 664 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 666 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x6 ),	/* Offset= 6 (678) */
/* 674 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 676 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 678 */	
			0x11, 0x0,	/* FC_RP */
/* 680 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (624) */
/* 682 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 684 */	NdrFcShort( 0x4 ),	/* 4 */
/* 686 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 692 */	0x0 , 
			0x0,		/* 0 */
/* 694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 704 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 706 */	NdrFcShort( 0x4 ),	/* 4 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x1 ),	/* 1 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	0x13, 0x0,	/* FC_OP */
/* 718 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (1190) */
/* 720 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 722 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 724 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x6 ),	/* Offset= 6 (736) */
/* 732 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 734 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 736 */	
			0x11, 0x0,	/* FC_RP */
/* 738 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (682) */
/* 740 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 742 */	NdrFcLong( 0x2f ),	/* 47 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 752 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 754 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 756 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 758 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 760 */	NdrFcShort( 0x1 ),	/* 1 */
/* 762 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 764 */	NdrFcShort( 0x4 ),	/* 4 */
/* 766 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 768 */	0x0 , 
			0x0,		/* 0 */
/* 770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 778 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 780 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 782 */	NdrFcShort( 0x10 ),	/* 16 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0xa ),	/* Offset= 10 (796) */
/* 788 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 790 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 792 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (740) */
/* 794 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 796 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 798 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (758) */
/* 800 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 802 */	NdrFcShort( 0x4 ),	/* 4 */
/* 804 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 810 */	0x0 , 
			0x0,		/* 0 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 820 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 822 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 824 */	NdrFcShort( 0x4 ),	/* 4 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	0x13, 0x0,	/* FC_OP */
/* 836 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (780) */
/* 838 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 840 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 842 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0x6 ),	/* Offset= 6 (854) */
/* 850 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 852 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 854 */	
			0x11, 0x0,	/* FC_RP */
/* 856 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (800) */
/* 858 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 862 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 864 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 866 */	NdrFcShort( 0x10 ),	/* 16 */
/* 868 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 870 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 872 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (858) */
			0x5b,		/* FC_END */
/* 876 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 878 */	NdrFcShort( 0x18 ),	/* 24 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0xa ),	/* Offset= 10 (892) */
/* 884 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 886 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 888 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (864) */
/* 890 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 892 */	
			0x11, 0x0,	/* FC_RP */
/* 894 */	NdrFcShort( 0xfeb8 ),	/* Offset= -328 (566) */
/* 896 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 900 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 906 */	0x0 , 
			0x0,		/* 0 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 916 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 918 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 922 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 924 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 926 */	NdrFcShort( 0x4 ),	/* 4 */
/* 928 */	NdrFcShort( 0x4 ),	/* 4 */
/* 930 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 932 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (896) */
/* 934 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 936 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 938 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 940 */	NdrFcShort( 0x2 ),	/* 2 */
/* 942 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 948 */	0x0 , 
			0x0,		/* 0 */
/* 950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 958 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 960 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 964 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 966 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 968 */	NdrFcShort( 0x4 ),	/* 4 */
/* 970 */	NdrFcShort( 0x4 ),	/* 4 */
/* 972 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 974 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (938) */
/* 976 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 978 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 980 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 982 */	NdrFcShort( 0x4 ),	/* 4 */
/* 984 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 990 */	0x0 , 
			0x0,		/* 0 */
/* 992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1000 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1002 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1006 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1008 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1010 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1012 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1014 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1016 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (980) */
/* 1018 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1020 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1022 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1026 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1032 */	0x0 , 
			0x0,		/* 0 */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1042 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1044 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1048 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1050 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1052 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1054 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1056 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1058 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1022) */
/* 1060 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1062 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1064 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1068 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1070 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1072 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1076 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1078 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1080 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1082 */	0x0 , 
			0x0,		/* 0 */
/* 1084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1094 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1064) */
/* 1096 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1098 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1100 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1102 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1072) */
/* 1104 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1104) */
/* 1106 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1108 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1110 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1112 */	NdrFcShort( 0xfd5c ),	/* Offset= -676 (436) */
/* 1114 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1116 */	
			0x13, 0x0,	/* FC_OP */
/* 1118 */	NdrFcShort( 0xfeae ),	/* Offset= -338 (780) */
/* 1120 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1122 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1124 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1126 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1128 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1130 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1132 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1134 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1136 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1138 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1140 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1142 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1144 */	
			0x13, 0x0,	/* FC_OP */
/* 1146 */	NdrFcShort( 0xfd08 ),	/* Offset= -760 (386) */
/* 1148 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1150 */	NdrFcShort( 0xfb88 ),	/* Offset= -1144 (6) */
/* 1152 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1154 */	NdrFcShort( 0xfd06 ),	/* Offset= -762 (392) */
/* 1156 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1158 */	NdrFcShort( 0xfd14 ),	/* Offset= -748 (410) */
/* 1160 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1162 */	NdrFcShort( 0xfd22 ),	/* Offset= -734 (428) */
/* 1164 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1166 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1168) */
/* 1168 */	
			0x13, 0x0,	/* FC_OP */
/* 1170 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1190) */
/* 1172 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1174 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1176 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1178 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1180 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1182 */	
			0x13, 0x0,	/* FC_OP */
/* 1184 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1172) */
/* 1186 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1188 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1190 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1192 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1196) */
/* 1198 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1200 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1202 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1204 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1206 */	NdrFcShort( 0xfb98 ),	/* Offset= -1128 (78) */
/* 1208 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1210 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1214 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0xfb88 ),	/* Offset= -1144 (74) */
/* 1220 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1222 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1224 */	
			0x11, 0x0,	/* FC_RP */
/* 1226 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1232) */
/* 1228 */	
			0x12, 0x0,	/* FC_UP */
/* 1230 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1190) */
/* 1232 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1236 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1228) */
/* 1242 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1244 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1210) */
/* 1246 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1248 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1250 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1252 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1254 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1256 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1258 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1260 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

XFG_TRAMPOLINES(BSTR)
XFG_TRAMPOLINES(VARIANT)

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            XFG_TRAMPOLINE_FPTR(BSTR_UserSize)
            ,XFG_TRAMPOLINE_FPTR(BSTR_UserMarshal)
            ,XFG_TRAMPOLINE_FPTR(BSTR_UserUnmarshal)
            ,XFG_TRAMPOLINE_FPTR(BSTR_UserFree)
            
            }
            ,
            {
            XFG_TRAMPOLINE_FPTR(VARIANT_UserSize)
            ,XFG_TRAMPOLINE_FPTR(VARIANT_UserMarshal)
            ,XFG_TRAMPOLINE_FPTR(VARIANT_UserUnmarshal)
            ,XFG_TRAMPOLINE_FPTR(VARIANT_UserFree)
            
            }
            

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITLibPlusInterface, ver. 0.0,
   GUID={0xb4a55b6f,0x59e3,0x4d0d,{0xbc,0x48,0x29,0x95,0xe6,0x6d,0x93,0xda}} */

#pragma code_seg(".orpc")
static const unsigned short ITLibPlusInterface_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    102,
    138,
    174,
    222,
    258,
    306,
    348,
    390,
    432,
    474,
    516,
    570,
    606,
    648,
    696,
    750,
    816,
    870,
    924,
    984,
    1038,
    1092,
    1146,
    1194,
    1242,
    1284,
    1326,
    1368,
    1422,
    1470,
    1518,
    1566,
    1614,
    1662,
    1704,
    1746,
    1788,
    1830,
    1866,
    1908,
    1950,
    1992,
    2034,
    2076,
    2124,
    2166,
    2208,
    2250,
    2298,
    2340,
    2382,
    2424,
    2466,
    2508,
    2550,
    2598,
    2640,
    2694,
    2742,
    2790,
    2838,
    2886,
    2934,
    2976,
    3024,
    3066,
    3108,
    3150,
    3192,
    3234,
    3276,
    3318,
    3366,
    3408,
    3450,
    3498,
    3546,
    3594,
    3648,
    3690,
    3732,
    3780,
    3828,
    3870,
    3912,
    3954,
    3996,
    4038,
    4080,
    4128,
    4176,
    4218,
    4260,
    4308,
    4350,
    4398,
    4446,
    4488,
    4542,
    4596,
    4650,
    4692,
    4734,
    4776,
    4818,
    4872,
    4926,
    4968,
    5010,
    5058,
    5112,
    5172,
    5232,
    5286,
    5328,
    5376,
    5418,
    5466,
    5514,
    5556,
    5598,
    5640,
    5682,
    5730,
    5784,
    5826,
    5874,
    5922,
    5970,
    6012,
    6054,
    6102,
    6150,
    6192,
    6234,
    6276,
    6318,
    6360,
    6402,
    6450,
    6498,
    6546,
    6594,
    6636,
    6678,
    6726,
    6780,
    6822,
    6870,
    6912,
    6954,
    6996,
    7038,
    7080,
    7122,
    7158,
    7194,
    7236,
    7278,
    7332,
    7380,
    7428,
    7476,
    7518,
    7566,
    7614,
    7674,
    7722,
    7794,
    7830,
    7896,
    7932,
    7968,
    8016,
    8052,
    8100,
    8142,
    8184,
    8226,
    8268,
    8310,
    8364,
    8400,
    8442,
    8490,
    8544,
    8598,
    8652,
    8712,
    8778,
    8832,
    8886,
    8940,
    8988,
    9036,
    9078,
    9120,
    9162,
    9216,
    9264,
    9312,
    9360,
    9408,
    9456,
    9498,
    9540,
    9582,
    9624,
    9660,
    9702,
    9744,
    9786,
    9828,
    9870,
    9918,
    9960,
    10002,
    10044,
    10092,
    10134,
    10176,
    10218,
    10260,
    10302,
    10344,
    10392,
    10434,
    10488,
    10536,
    10584,
    10632,
    10680,
    10728,
    10770,
    10818,
    10860,
    10902,
    10944,
    10986,
    11028,
    11070,
    11112,
    11160,
    11202,
    11244,
    11292,
    11340,
    11388,
    11442,
    11484,
    11526,
    11574,
    11622,
    11664,
    11706,
    11748,
    11790,
    11832,
    11874,
    11922,
    11970,
    12012,
    12054,
    12102,
    12144,
    12192,
    12240,
    12282,
    12336,
    12390,
    12444,
    12486,
    12528,
    12570,
    12612,
    12666,
    12720,
    12762,
    12804,
    12852,
    12906,
    12966,
    13026,
    13080,
    13122,
    13170,
    13212,
    13260,
    13308,
    13350,
    13392,
    13434,
    13476,
    13524,
    13578,
    13620,
    13668,
    13716,
    13764,
    13806,
    13848,
    13896,
    13944,
    13986,
    14028,
    14070,
    14112,
    14154,
    14196,
    14244,
    14292,
    14340,
    14388,
    14430,
    14472,
    14520,
    14574,
    14616,
    14664,
    14706,
    14748,
    14790,
    14832,
    14874,
    14916,
    14952,
    14988,
    15030,
    15072,
    15126,
    15174,
    15222,
    15270,
    15312,
    15360,
    15408,
    15468
    };

static const MIDL_STUBLESS_PROXY_INFO ITLibPlusInterface_ProxyInfo =
    {
    &Object_StubDesc,
    TLibPlus__MIDL_ProcFormatString.Format,
    &ITLibPlusInterface_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITLibPlusInterface_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TLibPlus__MIDL_ProcFormatString.Format,
    &ITLibPlusInterface_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(346) _ITLibPlusInterfaceProxyVtbl = 
{
    &ITLibPlusInterface_ProxyInfo,
    &IID_ITLibPlusInterface,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::版本 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::输入框 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::扫描调试器 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::反向量化异常处理初始化 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::异常回调初始化 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::获取最后异常信息 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::延时 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::退出 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::取类型大小 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::进程提权 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::清理内存 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::汇编加入 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::汇编注入 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::汇编清空 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::汇编转十六进制机器码 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::十六进制机器码转汇编 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存字符串取十进制地址 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存遍历读整数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存读整数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存读十六进制数据 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存写整数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存写十六进制数据 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存填充 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存複製 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存申请空间 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存申请堆 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存释放空间 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存数组释放空间 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存堆释放 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::指针写 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::指针读 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::随机数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::随机浮点数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::位右移 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::位左移 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::位与 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::位或 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::位异或 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::位反 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::圆周率 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::反余弦 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::反双曲余弦 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::反正弦 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::反双曲正弦 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::反正切 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::坐标反正切 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::弧双曲正切 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::立方根 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数上限值 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::以y符返x */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::余弦 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::双曲余弦 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数幂指数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数幂指数2底 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数幂指数x减1 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数绝对值 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数xy正差 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数下限值 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数x乘以y加z */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数两数取最大 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数两数取最小 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数取余数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数取尾数与指数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数平方和的平方根 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数绝对值对数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数x乘以2的e幂 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数取对数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数取对数10底 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数取对数2底 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数取绝对值对数b */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数x加1对数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数舍入整参数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数四捨五入成整数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数拆解整数与小数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::取NaN值 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数参数舍入 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数下一个表示值 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::求幂 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::求余数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::求商 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数舍入参数 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数四捨五入至最接近整数位 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::x和FLT_RADX乘以n的乘积长整 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::x和FLT_RADX乘以n的乘积 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::正弦 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::双曲正弦 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::平方根 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::取切线 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::取双曲正切 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::浮点数符号截断 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::数组整型取最大 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::数组整型取最小 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::数组整型去重 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::数组去重 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::数组整型排序 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::数组排序 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::数组过滤 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::数组多维初始化 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::数组倒序 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::数组旋转 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::数组移位 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::字符串分割 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::字符串排序 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::字符串洗牌 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::字符串去重 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::字符串倒序 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::字符串旋转 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::字符串移位 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::字符串Xml转Json */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::字符串Json转Xml */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::文件流指针打开 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::文件流指针移动 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::文件流指针读取 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::文件流指针写入 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::文件流指针複製 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::文件流指针关闭 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::内存映射 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::配置文件枚举小节 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::配置文件枚举键名 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::交换变量 */ ,
    (void *) (INT_PTR) -1 /* ITLibPlusInterface::交换高低4位 */ ,
    ITLibPlusInterface_交换高低8位_Proxy ,
    ITLibPlusInterface_交换高低16位_Proxy ,
    ITLibPlusInterface_交换高低32位_Proxy ,
    ITLibPlusInterface_进制字符串转长整形_Proxy ,
    ITLibPlusInterface_进制字符串转超长整形_Proxy ,
    ITLibPlusInterface_十进制字符串转十进制长整形_Proxy ,
    ITLibPlusInterface_十进制字符串转十进制超长整形_Proxy ,
    ITLibPlusInterface_十进制长整形转进制字符串_Proxy ,
    ITLibPlusInterface_十进制超长整形进制转字符串_Proxy ,
    ITLibPlusInterface_字符串转双精度浮点数_Proxy ,
    ITLibPlusInterface_字符串转浮点数_Proxy ,
    ITLibPlusInterface_转WORD_Proxy ,
    ITLibPlusInterface_转LONG_Proxy ,
    ITLibPlusInterface_取低WORD_Proxy ,
    ITLibPlusInterface_取高WORD_Proxy ,
    ITLibPlusInterface_取低BYTE_Proxy ,
    ITLibPlusInterface_取高BYTE_Proxy ,
    ITLibPlusInterface_是否资源标识符_Proxy ,
    ITLibPlusInterface_转资源管理类型_Proxy ,
    ITLibPlusInterface_转W参数_Proxy ,
    ITLibPlusInterface_转L参数_Proxy ,
    ITLibPlusInterface_转LRESULT_Proxy ,
    ITLibPlusInterface_转LGID_Proxy ,
    ITLibPlusInterface_取主语言标识符_Proxy ,
    ITLibPlusInterface_取子语言标识符_Proxy ,
    ITLibPlusInterface_取LCID_Proxy ,
    ITLibPlusInterface_L参数转XY_Proxy ,
    ITLibPlusInterface_取图像索引_Proxy ,
    ITLibPlusInterface_繁简体转换_Proxy ,
    ITLibPlusInterface_GB2312转UTF8_Proxy ,
    ITLibPlusInterface_UTF8转GB2312_Proxy ,
    ITLibPlusInterface_GB2312转BIG5_Proxy ,
    ITLibPlusInterface_BIG5转GB2312_Proxy ,
    ITLibPlusInterface_UTF8转BIG5_Proxy ,
    ITLibPlusInterface_BIG5转UTF8_Proxy ,
    ITLibPlusInterface_网络初始化_Proxy ,
    ITLibPlusInterface_网络关闭_Proxy ,
    ITLibPlusInterface_网络套接字_Proxy ,
    ITLibPlusInterface_网络关闭套接字_Proxy ,
    ITLibPlusInterface_网络连接_Proxy ,
    ITLibPlusInterface_网络绑定_Proxy ,
    ITLibPlusInterface_网络监听_Proxy ,
    ITLibPlusInterface_网络接受_Proxy ,
    ITLibPlusInterface_网络接收_Proxy ,
    ITLibPlusInterface_网络发送_Proxy ,
    ITLibPlusInterface_网络发送到_Proxy ,
    ITLibPlusInterface_网络接收来自_Proxy ,
    ITLibPlusInterface_获取IP_Proxy ,
    ITLibPlusInterface_TEST_Proxy ,
    ITLibPlusInterface_Ver_Proxy ,
    ITLibPlusInterface_InputBox_Proxy ,
    ITLibPlusInterface_AntiDebuger_Proxy ,
    ITLibPlusInterface_AntiVEHCallBack_Proxy ,
    ITLibPlusInterface_InitExceptionCallback_Proxy ,
    ITLibPlusInterface_GetLastException_Proxy ,
    ITLibPlusInterface_Delay_Proxy ,
    ITLibPlusInterface_Exit_Proxy ,
    ITLibPlusInterface_Sizeof_Proxy ,
    ITLibPlusInterface_EnablePrivilege_Proxy ,
    ITLibPlusInterface_FreeProcessMemory_Proxy ,
    ITLibPlusInterface_AsmAdd_Proxy ,
    ITLibPlusInterface_AsmCall_Proxy ,
    ITLibPlusInterface_AsmClear_Proxy ,
    ITLibPlusInterface_Assemble_Proxy ,
    ITLibPlusInterface_DisAssemble_Proxy ,
    ITLibPlusInterface_GetFindDataAddr_Proxy ,
    ITLibPlusInterface_ReadIntAddr_Proxy ,
    ITLibPlusInterface_ReadDataAddr_Proxy ,
    ITLibPlusInterface_WriteIntAddr_Proxy ,
    ITLibPlusInterface_ReadIntTraverseAddr_Proxy ,
    ITLibPlusInterface_WriteDataAddr_Proxy ,
    ITLibPlusInterface_Memset_Proxy ,
    ITLibPlusInterface_Memcpy_Proxy ,
    ITLibPlusInterface_New_Proxy ,
    ITLibPlusInterface_Malloc_Proxy ,
    ITLibPlusInterface_Delete_Proxy ,
    ITLibPlusInterface_Deletes_Proxy ,
    ITLibPlusInterface_Free_Proxy ,
    ITLibPlusInterface_Set_Proxy ,
    ITLibPlusInterface_Get_Proxy ,
    ITLibPlusInterface_Rand_Proxy ,
    ITLibPlusInterface_RandDouble_Proxy ,
    ITLibPlusInterface_ShiftRight_Proxy ,
    ITLibPlusInterface_ShiftLeft_Proxy ,
    ITLibPlusInterface_AND_Proxy ,
    ITLibPlusInterface_OR_Proxy ,
    ITLibPlusInterface_XOR_Proxy ,
    ITLibPlusInterface_NOT_Proxy ,
    ITLibPlusInterface_PI_Proxy ,
    ITLibPlusInterface_Acos_Proxy ,
    ITLibPlusInterface_Acosh_Proxy ,
    ITLibPlusInterface_Asin_Proxy ,
    ITLibPlusInterface_Asinh_Proxy ,
    ITLibPlusInterface_Atan_Proxy ,
    ITLibPlusInterface_Atan2_Proxy ,
    ITLibPlusInterface_Atanh_Proxy ,
    ITLibPlusInterface_Cbrt_Proxy ,
    ITLibPlusInterface_Ceil_Proxy ,
    ITLibPlusInterface_Copysign_Proxy ,
    ITLibPlusInterface_Cos_Proxy ,
    ITLibPlusInterface_Cosh_Proxy ,
    ITLibPlusInterface_Exp_Proxy ,
    ITLibPlusInterface_Exp2_Proxy ,
    ITLibPlusInterface_Expm1_Proxy ,
    ITLibPlusInterface_Fabs_Proxy ,
    ITLibPlusInterface_Fdim_Proxy ,
    ITLibPlusInterface_Floor_Proxy ,
    ITLibPlusInterface_Fma_Proxy ,
    ITLibPlusInterface_Fmax_Proxy ,
    ITLibPlusInterface_Fmin_Proxy ,
    ITLibPlusInterface_Fmod_Proxy ,
    ITLibPlusInterface_Frexp_Proxy ,
    ITLibPlusInterface_Hypot_Proxy ,
    ITLibPlusInterface_Ilogb_Proxy ,
    ITLibPlusInterface_Ldexp_Proxy ,
    ITLibPlusInterface_Log_Proxy ,
    ITLibPlusInterface_Log10_Proxy ,
    ITLibPlusInterface_Log2_Proxy ,
    ITLibPlusInterface_Logb_Proxy ,
    ITLibPlusInterface_Log1p_Proxy ,
    ITLibPlusInterface_Lrint_Proxy ,
    ITLibPlusInterface_Lround_Proxy ,
    ITLibPlusInterface_Modf_Proxy ,
    ITLibPlusInterface_Nan_Proxy ,
    ITLibPlusInterface_Nearbyint_Proxy ,
    ITLibPlusInterface_Nextafter_Proxy ,
    ITLibPlusInterface_Pow_Proxy ,
    ITLibPlusInterface_Remainder_Proxy ,
    ITLibPlusInterface_Remquo_Proxy ,
    ITLibPlusInterface_Rint_Proxy ,
    ITLibPlusInterface_Round_Proxy ,
    ITLibPlusInterface_Scalbln_Proxy ,
    ITLibPlusInterface_Scalbn_Proxy ,
    ITLibPlusInterface_Sin_Proxy ,
    ITLibPlusInterface_Sinh_Proxy ,
    ITLibPlusInterface_Sqrt_Proxy ,
    ITLibPlusInterface_Tan_Proxy ,
    ITLibPlusInterface_Tanh_Proxy ,
    ITLibPlusInterface_Trunc_Proxy ,
    ITLibPlusInterface_ArrayGetHighest_Proxy ,
    ITLibPlusInterface_ArrayGetLowest_Proxy ,
    ITLibPlusInterface_ArrayUniqueInt_Proxy ,
    ITLibPlusInterface_ArrayUnique_Proxy ,
    ITLibPlusInterface_ArraySortInt_Proxy ,
    ITLibPlusInterface_ArraySort_Proxy ,
    ITLibPlusInterface_ArrayFilter_Proxy ,
    ITLibPlusInterface_ArrayAlloc_Proxy ,
    ITLibPlusInterface_ArrayReverse_Proxy ,
    ITLibPlusInterface_ArrayRotate_Proxy ,
    ITLibPlusInterface_ArrayShift_Proxy ,
    ITLibPlusInterface_StringSplit_Proxy ,
    ITLibPlusInterface_StringSort_Proxy ,
    ITLibPlusInterface_StringShuffle_Proxy ,
    ITLibPlusInterface_StringUnique_Proxy ,
    ITLibPlusInterface_StringReverse_Proxy ,
    ITLibPlusInterface_StringRotate_Proxy ,
    ITLibPlusInterface_StringShift_Proxy ,
    ITLibPlusInterface_StringXml2Json_Proxy ,
    ITLibPlusInterface_StringJson2Xml_Proxy ,
    ITLibPlusInterface_Fwopen_Proxy ,
    ITLibPlusInterface_Fseek_Proxy ,
    ITLibPlusInterface_Fread_Proxy ,
    ITLibPlusInterface_Fwrite_Proxy ,
    ITLibPlusInterface_Fgetws_Proxy ,
    ITLibPlusInterface_Fclose_Proxy ,
    ITLibPlusInterface_Mmap_Proxy ,
    ITLibPlusInterface_EnumIniSection_Proxy ,
    ITLibPlusInterface_EnumIniKey_Proxy ,
    ITLibPlusInterface_Swap_Proxy ,
    ITLibPlusInterface_SwapByte_Proxy ,
    ITLibPlusInterface_SwapWord_Proxy ,
    ITLibPlusInterface_SwapLong_Proxy ,
    ITLibPlusInterface_SwapInt64_Proxy ,
    ITLibPlusInterface_XStringToL_Proxy ,
    ITLibPlusInterface_XStringToI64_Proxy ,
    ITLibPlusInterface_StringToL_Proxy ,
    ITLibPlusInterface_StringToI64_Proxy ,
    ITLibPlusInterface_LToXString_Proxy ,
    ITLibPlusInterface_I64ToXString_Proxy ,
    ITLibPlusInterface_StringToDbl_Proxy ,
    ITLibPlusInterface_StringToFlt_Proxy ,
    ITLibPlusInterface_TMAKEWORD_Proxy ,
    ITLibPlusInterface_TMAKELONG_Proxy ,
    ITLibPlusInterface_TLOWORD_Proxy ,
    ITLibPlusInterface_THIWORD_Proxy ,
    ITLibPlusInterface_TLOBYTE_Proxy ,
    ITLibPlusInterface_THIBYTE_Proxy ,
    ITLibPlusInterface_TIS_INTRESOURCE_Proxy ,
    ITLibPlusInterface_TMAKEINTRESOURCE_Proxy ,
    ITLibPlusInterface_TMAKEWPARAM_Proxy ,
    ITLibPlusInterface_TMAKELPARAM_Proxy ,
    ITLibPlusInterface_TMAKELRESULT_Proxy ,
    ITLibPlusInterface_TMAKELANGID_Proxy ,
    ITLibPlusInterface_TPRIMARYLANGID_Proxy ,
    ITLibPlusInterface_TSUBLANGID_Proxy ,
    ITLibPlusInterface_TMAKELCID_Proxy ,
    ITLibPlusInterface_TMAKEPOINTS_Proxy ,
    ITLibPlusInterface_TINDEXTOSTATEIMAGEMASK_Proxy ,
    ITLibPlusInterface_ConvertLanguage_Proxy ,
    ITLibPlusInterface_GB2312ToUTF8_Proxy ,
    ITLibPlusInterface_UTF8ToGB2312_Proxy ,
    ITLibPlusInterface_GB2312ToBIG5_Proxy ,
    ITLibPlusInterface_BIG5ToGB2312_Proxy ,
    ITLibPlusInterface_UTF8ToBIG5_Proxy ,
    ITLibPlusInterface_BIG5ToUTF8_Proxy ,
    ITLibPlusInterface_NetWSAStartup_Proxy ,
    ITLibPlusInterface_NetClose_Proxy ,
    ITLibPlusInterface_NetSocket_Proxy ,
    ITLibPlusInterface_NetCloseSocket_Proxy ,
    ITLibPlusInterface_NetConnect_Proxy ,
    ITLibPlusInterface_NetBind_Proxy ,
    ITLibPlusInterface_NetListen_Proxy ,
    ITLibPlusInterface_NetAccept_Proxy ,
    ITLibPlusInterface_NetRecv_Proxy ,
    ITLibPlusInterface_NetSend_Proxy ,
    ITLibPlusInterface_NetSendTo_Proxy ,
    ITLibPlusInterface_NetRecvFrom_Proxy ,
    ITLibPlusInterface_GetIP_Proxy
};


static const PRPC_STUB_FUNCTION ITLibPlusInterface_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITLibPlusInterfaceStubVtbl =
{
    &IID_ITLibPlusInterface,
    &ITLibPlusInterface_ServerInfo,
    346,
    &ITLibPlusInterface_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    TLibPlus__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010272, /* MIDL Version 8.1.626 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _TLibPlus_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ITLibPlusInterfaceProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _TLibPlus_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ITLibPlusInterfaceStubVtbl,
    0
};

PCInterfaceName const _TLibPlus_InterfaceNamesList[] = 
{
    "ITLibPlusInterface",
    0
};

const IID *  const _TLibPlus_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _TLibPlus_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _TLibPlus, pIID, n)

int __stdcall _TLibPlus_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_TLibPlus_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo TLibPlus_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _TLibPlus_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _TLibPlus_StubVtblList,
    (const PCInterfaceName * ) & _TLibPlus_InterfaceNamesList,
    (const IID ** ) & _TLibPlus_BaseIIDList,
    & _TLibPlus_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

