

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __TLibPlus_i_h__
#define __TLibPlus_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ITLibPlusInterface_FWD_DEFINED__
#define __ITLibPlusInterface_FWD_DEFINED__
typedef interface ITLibPlusInterface ITLibPlusInterface;

#endif 	/* __ITLibPlusInterface_FWD_DEFINED__ */


#ifndef __TLibPlusInterface_FWD_DEFINED__
#define __TLibPlusInterface_FWD_DEFINED__

#ifdef __cplusplus
typedef class TLibPlusInterface TLibPlusInterface;
#else
typedef struct TLibPlusInterface TLibPlusInterface;
#endif /* __cplusplus */

#endif 	/* __TLibPlusInterface_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITLibPlusInterface_INTERFACE_DEFINED__
#define __ITLibPlusInterface_INTERFACE_DEFINED__

/* interface ITLibPlusInterface */
/* [unique][nonextensible][dual][uuid][object] */ 

#pragma region ����
#pragma region ϵͳ
#pragma endregion
#pragma region �ڴ�
#pragma endregion
#pragma region ����
#pragma endregion
#pragma region ����
#pragma endregion
#pragma region �ַ���
#pragma endregion
#pragma region �ļ�
#pragma endregion
#pragma region ת��
#pragma endregion
#pragma region ����
#pragma endregion
#pragma endregion
#pragma region Ӣ��
#pragma region ϵͳ
#pragma endregion
#pragma region �ڴ�
#pragma endregion
#pragma region ����
#pragma endregion
#pragma region ����
#pragma endregion
#pragma region �ַ���
#pragma endregion
#pragma region �ļ�
#pragma endregion
#pragma region ת��
#pragma endregion
#pragma region ����TCP/UDP
#pragma endregion
#pragma endregion

EXTERN_C const IID IID_ITLibPlusInterface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b4a55b6f-59e3-4d0d-bc48-2995e66d93da")
    ITLibPlusInterface : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �汾( 
            /* [retval][out] */ BSTR *�汾��) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����( 
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONG ��ɫ,
            /* [in] */ BSTR ����,
            /* [in] */ BSTR ��ʾ�ı�,
            /* [in] */ BSTR Ԥ���ı�,
            /* [retval][out] */ BSTR *����) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ɨ�������( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ���������쳣�����ʼ��( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �쳣�ص���ʼ��( 
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONG �Ƿ��Զ��׳�,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��ȡ����쳣��Ϣ( 
            /* [retval][out] */ BSTR *�쳣����) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��ʱ( 
            /* [in] */ ULONG ����,
            /* [in] */ LONG �Ƿ�����,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �˳�( 
            /* [in] */ BSTR ��ԴĿ¼,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡ���ʹ�С( 
            /* [in] */ BSTR ���������ַ���,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������Ȩ( 
            /* [in] */ BSTR Ȩ�ޱ�ʶ�ַ���,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����ڴ�( 
            /* [in] */ LONG ���ھ��,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������( 
            /* [in] */ BSTR �ַ���������,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ���ע��( 
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONG ע��ģʽ,
            /* [in] */ LONG ��ʱ����,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ���תʮ�����ƻ�����( 
            /* [in] */ LONG ʮ���ƴ�ŵ�ַ,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ʮ�����ƻ�����ת���( 
            /* [in] */ BSTR �ַ���������,
            /* [in] */ LONG ʮ���ƴ�ŵ�ַ,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ��ַ���ȡʮ���Ƶ�ַ( 
            /* [in] */ LONG ���ھ��,
            /* [in] */ BSTR �ַ�����ַ,
            /* [out][in] */ VARIANT *���ճ��L����ָ�,
            /* [retval][out] */ LONG *dwret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ����������( 
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONGLONG ʮ���Ƶ�ַ,
            /* [in] */ LONGLONG ʮ����ƫ������,
            /* [in] */ LONG ����,
            /* [in] */ LONG ��ȡ����,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ������( 
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONGLONG ʮ���Ƶ�ַ,
            /* [in] */ LONG ��ȡ����,
            /* [retval][out] */ LONGLONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ��ʮ����������( 
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONGLONG ʮ���Ƶ�ַ,
            /* [in] */ LONG ����,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ�д����( 
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONGLONG ʮ���Ƶ�ַ,
            /* [in] */ LONG д������,
            /* [in] */ LONGLONG д����ֵ,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ�дʮ����������( 
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONGLONG ʮ���Ƶ�ַ,
            /* [in] */ BSTR ʮ�������ַ����ֽڼ�,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ����( 
            /* [in] */ VARIANT *Ŀ���ַ,
            /* [in] */ LONG �����ֵ,
            /* [in] */ LONG ��С,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ��}�u( 
            /* [in] */ VARIANT *Ŀ���ַ,
            /* [in] */ VARIANT *��Դ��ַ,
            /* [in] */ LONG ��С,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ�����ռ�( 
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG ��С,
            /* [retval][out] */ VARIANT *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ������( 
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG ��С,
            /* [retval][out] */ VARIANT *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ��ͷſռ�( 
            /* [out][in] */ VARIANT *ָ��,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ������ͷſռ�( 
            /* [out][in] */ VARIANT *ָ��,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ���ͷ�( 
            /* [out][in] */ VARIANT *ָ��,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ָ��д( 
            /* [in] */ VARIANT *�ڴ�ָ��,
            /* [in] */ BSTR ����,
            /* [in] */ VARIANT *д����ֵ,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ָ���( 
            /* [in] */ VARIANT *�ڴ�ָ��,
            /* [in] */ BSTR ����,
            /* [retval][out] */ VARIANT *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����( 
            /* [in] */ LONG ��Сֵ,
            /* [in] */ LONG ���ֵ,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ���������( 
            /* [in] */ DOUBLE ������_��Сֵ,
            /* [in] */ DOUBLE ������_���ֵ,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE λ����( 
            /* [in] */ LONG ��ֵ,
            /* [in] */ LONG �ƶ���,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE λ����( 
            /* [in] */ LONG ��ֵ,
            /* [in] */ LONG �ƶ���,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE λ��( 
            /* [in] */ BSTR ��ʽ�ַ���,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE λ��( 
            /* [in] */ BSTR ��ʽ�ַ���,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE λ���( 
            /* [in] */ BSTR ��ʽ�ַ���,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE λ��( 
            /* [in] */ LONG ��ֵ,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Բ����( 
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��˫������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��˫������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ���귴����( 
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��˫������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����������ֵ( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��y����x( 
            /* [in] */ DOUBLE _Number,
            /* [in] */ DOUBLE _Sign,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ˫������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��������ָ��( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��������ָ��2��( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��������ָ��x��1( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����������ֵ( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������xy����( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����������ֵ( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������x����y��z( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _Z,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����������ȡ���( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����������ȡ��С( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������ȡ����( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������ȡβ����ָ��( 
            /* [in] */ DOUBLE _X,
            /* [out] */ VARIANT *_Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������ƽ���͵�ƽ����( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����������ֵ����( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������x����2��e��( 
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������ȡ����( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������ȡ����10��( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������ȡ����2��( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������ȡ����ֵ����b( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������x��1����( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����������������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �������Ē����������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ���������������С��( 
            /* [in] */ DOUBLE x,
            /* [out] */ VARIANT *intpart,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡNaNֵ( 
            /* [in] */ BSTR _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��������������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��������һ����ʾֵ( 
            /* [in] */ DOUBLE _X,
            DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [out] */ VARIANT *_Z,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �������������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �������Ē���������ӽ�����λ( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE x��FLT_RADX����n�ĳ˻�����( 
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE x��FLT_RADX����n�ĳ˻�( 
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ˫������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ƽ����( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡ����( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡ˫������( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ���������Žض�( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��������ȡ���( 
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��������ȡ��С( 
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��������ȥ��( 
            /* [in] */ BSTR �����ַ���,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����ȥ��( 
            /* [in] */ BSTR �����ַ���,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������������( 
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��������( 
            /* [in] */ BSTR �����ַ���,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �������( 
            /* [in] */ BSTR �����ַ���,
            /* [in] */ BSTR str,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����ά��ʼ��( 
            /* [in] */ LONG ά��,
            /* [in] */ BSTR ��С,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ���鵹��( 
            /* [in] */ BSTR �����ַ���,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������ת( 
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG �ƶ���,
            /* [in] */ LONG �Ƿ�����,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������λ( 
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG �ƶ���,
            /* [in] */ LONG �Ƿ�����,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ַ����ָ�( 
            /* [in] */ BSTR �ַ�������,
            /* [in] */ BSTR �ָ���,
            /* [out] */ VARIANT *��������,
            /* [retval][out] */ BSTR *outs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ַ�������( 
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ַ���ϴ��( 
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ַ���ȥ��( 
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ַ�������( 
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ַ�����ת( 
            /* [in] */ BSTR �ַ�������,
            /* [in] */ LONG �ƶ���,
            /* [in] */ LONG �Ƿ�����,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ַ�����λ( 
            /* [in] */ BSTR �ַ�������,
            /* [in] */ LONG �ƶ���,
            /* [in] */ LONG �Ƿ�����,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ַ���XmlתJson( 
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ַ���JsonתXml( 
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ļ���ָ���( 
            /* [in] */ BSTR �ļ�·��,
            /* [in] */ BSTR ģʽ�ַ���,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ļ���ָ���ƶ�( 
            /* [in] */ LONG �ļ�ָ��,
            /* [in] */ LONG λ����,
            /* [in] */ BSTR ��㳣���ַ���,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ļ���ָ���ȡ( 
            /* [in] */ LONG �ֽڴ�С,
            /* [in] */ LONG ����,
            /* [in] */ LONG �ļ�ָ��,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *_Buffer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ļ���ָ��д��( 
            /* [in] */ LONG ����,
            /* [in] */ LONG �ֽڴ�С,
            /* [in] */ LONG ����,
            /* [in] */ LONG �ļ�ָ��,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ļ���ָ���}�u( 
            /* [in] */ BSTR ����,
            /* [in] */ LONG �}�u����,
            LONG �ļ�ָ��,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ļ���ָ��ر�( 
            /* [in] */ LONG �ļ�ָ��,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ڴ�ӳ��( 
            /* [in] */ BSTR �ļ�·��,
            /* [out] */ VARIANT *�����ֽ�����,
            /* [retval][out] */ BSTR *buf) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����ļ�ö��С��( 
            /* [in] */ BSTR �ļ�·��,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����ļ�ö�ټ���( 
            /* [in] */ BSTR ����,
            /* [in] */ BSTR �ļ�·��,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��������( 
            /* [out][in] */ VARIANT *����a,
            /* [out][in] */ VARIANT *����b,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����ߵ�4λ( 
            /* [in] */ BYTE ����,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����ߵ�8λ( 
            /* [in] */ WORD ����,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����ߵ�16λ( 
            /* [in] */ LONG ����,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����ߵ�32λ( 
            /* [in] */ LONGLONG ����,
            /* [retval][out] */ LONGLONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����ַ���ת������( 
            /* [in] */ BSTR ĳ�����ַ���,
            /* [in] */ LONG ������,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����ַ���ת��������( 
            /* [in] */ BSTR _String,
            /* [in] */ LONG _Radix,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ʮ�����ַ���תʮ���Ƴ�����( 
            /* [in] */ BSTR �����ַ���,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ʮ�����ַ���תʮ���Ƴ�������( 
            /* [in] */ BSTR _String,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ʮ���Ƴ�����ת�����ַ���( 
            /* [in] */ LONG ����,
            /* [in] */ LONG ������,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ʮ���Ƴ������ν���ת�ַ���( 
            /* [in] */ LONGLONG ��������,
            /* [in] */ LONG ������,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ַ���ת˫���ȸ�����( 
            /* [in] */ BSTR _String,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �ַ���ת������( 
            /* [in] */ BSTR _String,
            /* [retval][out] */ FLOAT *fret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE תWORD( 
            /* [in] */ LONG ����a,
            /* [in] */ LONG ����b,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE תLONG( 
            /* [in] */ LONG ����a,
            /* [in] */ LONG ����b,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡ��WORD( 
            /* [in] */ LONG ����,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡ��WORD( 
            /* [in] */ LONG ����,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡ��BYTE( 
            /* [in] */ WORD ������,
            /* [retval][out] */ BYTE *byret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡ��BYTE( 
            /* [in] */ WORD ������,
            /* [retval][out] */ BYTE *byret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �Ƿ���Դ��ʶ��( 
            /* [in] */ LONG ����,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ת��Դ��������( 
            /* [in] */ LONG ����,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE תW����( 
            /* [in] */ LONG ��λ����,
            /* [in] */ LONG ��λ����,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE תL����( 
            /* [in] */ LONG ��λ����,
            /* [in] */ LONG ��λ����,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE תLRESULT( 
            /* [in] */ LONG ��λ����,
            /* [in] */ LONG ��λ����,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE תLGID( 
            /* [in] */ LONG �����Ա�ʶ��,
            /* [in] */ LONG �����Ա�ʶ��,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡ�����Ա�ʶ��( 
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡ�����Ա�ʶ��( 
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡLCID( 
            /* [in] */ LONG srtid,
            /* [in] */ LONG lgid,
            /* [retval][out] */ DWORD *dwret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE L����תXY( 
            /* [in] */ LONG L����,
            /* [out] */ VARIANT *����X,
            /* [out] */ VARIANT *����Y,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ȡͼ������( 
            /* [in] */ LONG ����,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ������ת��( 
            /* [in] */ BSTR �ַ�������,
            /* [in] */ LONG ��ϵģʽ,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GB2312תUTF8( 
            /* [in] */ BSTR GB2312�ַ���,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UTF8תGB2312( 
            /* [in] */ BSTR UTF8�ַ���,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GB2312תBIG5( 
            /* [in] */ BSTR GB2312�ַ���,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BIG5תGB2312( 
            /* [in] */ BSTR BIG5�ַ���,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UTF8תBIG5( 
            /* [in] */ BSTR UTF8�ַ���,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BIG5תUTF8( 
            /* [in] */ BSTR BIG5�ַ���,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����ʼ��( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����ر�( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����׽���( 
            /* [in] */ BSTR ����,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ����ر��׽���( 
            /* [in] */ LONG �׽���,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��������( 
            /* [in] */ LONG �׽���,
            /* [in] */ BSTR IP��ַ,
            /* [in] */ USHORT �˿�,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����( 
            /* [in] */ LONG �׽���,
            /* [in] */ USHORT serv_port,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �������( 
            /* [in] */ LONG �׽���e,
            /* [in] */ LONG ncout,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �������( 
            /* [in] */ LONG �׽���,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *serv_ip) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �������( 
            /* [in] */ LONG �׽���,
            /* [retval][out] */ BSTR *Recvbuff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ���緢��( 
            /* [in] */ LONG �׽���,
            /* [in] */ BSTR ��������,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ���緢�͵�( 
            /* [in] */ LONG �׽���,
            /* [in] */ BSTR ��������,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE �����������( 
            /* [in] */ LONG �׽���,
            /* [in] */ LONG ����,
            /* [in] */ BSTR IP��ַ,
            /* [in] */ USHORT rPort,
            /* [retval][out] */ BSTR *data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ��ȡIP( 
            /* [in] */ LONG type,
            /* [in] */ BSTR param,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TEST( 
            /* [in] */ LONG pvoid,
            /* [in] */ LONG count,
            /* [in] */ LONG p0,
            /* [in] */ LONG p1,
            /* [in] */ LONG p2,
            /* [in] */ LONG p3,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Ver( 
            /* [retval][out] */ BSTR *retver) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InputBox( 
            /* [in] */ LONG hWnd,
            /* [in] */ LONG Color,
            /* [in] */ BSTR szCaption,
            /* [in] */ BSTR szPrompt,
            /* [in] */ BSTR szDefaultText,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AntiDebuger( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AntiVEHCallBack( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitExceptionCallback( 
            /* [in] */ LONG hWnd,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLastException( 
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delay( 
            /* [in] */ ULONG s,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Exit( 
            /* [in] */ BSTR fileName,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sizeof( 
            /* [in] */ BSTR type,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnablePrivilege( 
            /* [in] */ BSTR dwPrivilege,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FreeProcessMemory( 
            /* [in] */ LONG hWnd,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AsmAdd( 
            /* [in] */ BSTR asm_ins,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AsmCall( 
            /* [in] */ LONG hwnd,
            /* [in] */ LONG mode,
            /* [in] */ LONG timeout,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AsmClear( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Assemble( 
            /* [in] */ LONG base_addr,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisAssemble( 
            /* [in] */ BSTR asm_code,
            /* [in] */ LONG base_addr,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFindDataAddr( 
            /* [in] */ LONG hWnd,
            /* [in] */ BSTR strs,
            /* [out][in] */ VARIANT *pret,
            /* [retval][out] */ LONG *dwret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadIntAddr( 
            /* [in] */ LONG hWnd,
            /* [in] */ LONGLONG addr,
            /* [in] */ LONG type,
            /* [retval][out] */ LONGLONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadDataAddr( 
            /* [in] */ LONG hwnd,
            /* [in] */ LONGLONG addr,
            /* [in] */ LONG len,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteIntAddr( 
            /* [in] */ LONG hWnd,
            /* [in] */ LONGLONG addr,
            /* [in] */ LONG type,
            /* [in] */ LONGLONG value,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadIntTraverseAddr( 
            /* [in] */ LONG hWnd,
            /* [in] */ LONGLONG addr,
            /* [in] */ LONGLONG offest,
            /* [in] */ LONG count,
            /* [in] */ LONG type,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteDataAddr( 
            /* [in] */ LONG hwnd,
            /* [in] */ LONGLONG addr,
            /* [in] */ BSTR data,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Memset( 
            /* [in] */ VARIANT *_Dst,
            /* [in] */ LONG Val,
            /* [in] */ LONG Size,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Memcpy( 
            /* [in] */ VARIANT *_Dst,
            /* [in] */ VARIANT *_Src,
            /* [in] */ LONG Size,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( 
            /* [in] */ BSTR sztype,
            /* [in] */ LONG size,
            /* [retval][out] */ VARIANT *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Malloc( 
            /* [in] */ BSTR sztype,
            /* [in] */ LONG size,
            /* [retval][out] */ VARIANT *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [out][in] */ VARIANT *_Block,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deletes( 
            /* [out][in] */ VARIANT *_Block,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Free( 
            /* [out][in] */ VARIANT *_Block,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Set( 
            /* [in] */ VARIANT *Pvoid,
            /* [in] */ BSTR type,
            /* [in] */ VARIANT *value,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ VARIANT *Pvoid,
            /* [in] */ BSTR type,
            /* [retval][out] */ VARIANT *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Rand( 
            /* [in] */ LONG MIN,
            /* [in] */ LONG MAX,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RandDouble( 
            /* [in] */ DOUBLE DOUBLE_MIN,
            /* [in] */ DOUBLE DOUBLE_MAX,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShiftRight( 
            /* [in] */ LONG l,
            /* [in] */ LONG _Radix,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShiftLeft( 
            /* [in] */ LONG l,
            LONG _Radix,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AND( 
            /* [in] */ BSTR ins,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OR( 
            /* [in] */ BSTR ins,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE XOR( 
            /* [in] */ BSTR ins,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NOT( 
            /* [in] */ LONG a,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PI( 
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Acos( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Acosh( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Asin( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Asinh( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Atan( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Atan2( 
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Atanh( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cbrt( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Ceil( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Copysign( 
            /* [in] */ DOUBLE _Number,
            /* [in] */ DOUBLE _Sign,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cos( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cosh( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Exp( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Exp2( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Expm1( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fabs( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fdim( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Floor( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fma( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _Z,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fmax( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fmin( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fmod( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Frexp( 
            /* [in] */ DOUBLE _X,
            /* [out] */ VARIANT *_Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Hypot( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Ilogb( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Ldexp( 
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Log( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Log10( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Log2( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Logb( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Log1p( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Lrint( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Lround( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Modf( 
            /* [in] */ DOUBLE x,
            /* [out] */ VARIANT *intpart,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Nan( 
            /* [in] */ BSTR _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Nearbyint( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Nextafter( 
            /* [in] */ DOUBLE _X,
            DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Pow( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remainder( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remquo( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [out] */ VARIANT *_Z,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Rint( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Round( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Scalbln( 
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Scalbn( 
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sin( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sinh( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sqrt( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Tan( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Tanh( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Trunc( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArrayGetHighest( 
            /* [in] */ BSTR szArr,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArrayGetLowest( 
            /* [in] */ BSTR szArr,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArrayUniqueInt( 
            /* [in] */ BSTR szArr,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArrayUnique( 
            /* [in] */ BSTR szArr,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArraySortInt( 
            /* [in] */ BSTR szArr,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArraySort( 
            /* [in] */ BSTR szArr,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArrayFilter( 
            /* [in] */ BSTR szArr,
            /* [in] */ BSTR str,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArrayAlloc( 
            /* [in] */ LONG dim,
            /* [in] */ BSTR szsize,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArrayReverse( 
            /* [in] */ BSTR szArr,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArrayRotate( 
            /* [in] */ BSTR szArr,
            /* [in] */ LONG mov,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArrayShift( 
            /* [in] */ BSTR szArr,
            /* [in] */ LONG mov,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringSplit( 
            /* [in] */ BSTR ins,
            /* [in] */ BSTR delimit,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *outs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringSort( 
            /* [in] */ BSTR ins,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringShuffle( 
            /* [in] */ BSTR ins,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringUnique( 
            /* [in] */ BSTR ins,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringReverse( 
            /* [in] */ BSTR ins,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringRotate( 
            /* [in] */ BSTR ins,
            /* [in] */ LONG mov,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringShift( 
            /* [in] */ BSTR ins,
            /* [in] */ LONG mov,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringXml2Json( 
            /* [in] */ BSTR _Src,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringJson2Xml( 
            /* [in] */ BSTR _Src,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fwopen( 
            /* [in] */ BSTR _FileName,
            /* [in] */ BSTR _Mode,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fseek( 
            /* [in] */ LONG _Stream,
            /* [in] */ LONG _Offset,
            /* [in] */ BSTR dst,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fread( 
            /* [in] */ LONG _ElementSize,
            /* [in] */ LONG _ElementCount,
            /* [in] */ LONG _Stream,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *_Buffer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fwrite( 
            /* [in] */ LONG _Buffer,
            /* [in] */ LONG _ElementSize,
            /* [in] */ LONG _ElementCount,
            /* [in] */ LONG _Stream,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fgetws( 
            /* [in] */ BSTR _Buffer,
            /* [in] */ LONG _BufferCount,
            LONG _Stream,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fclose( 
            /* [in] */ LONG _Stream,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Mmap( 
            /* [in] */ BSTR _FileName,
            /* [out] */ VARIANT *dwret,
            /* [retval][out] */ BSTR *buf) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumIniSection( 
            /* [in] */ BSTR _FileName,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumIniKey( 
            /* [in] */ BSTR _Key,
            /* [in] */ BSTR _FileName,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Swap( 
            /* [out][in] */ VARIANT *a,
            /* [out][in] */ VARIANT *b,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SwapByte( 
            /* [in] */ BYTE a,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SwapWord( 
            /* [in] */ WORD a,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SwapLong( 
            /* [in] */ LONG a,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SwapInt64( 
            /* [in] */ LONGLONG a,
            /* [retval][out] */ LONGLONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE XStringToL( 
            /* [in] */ BSTR _String,
            /* [in] */ LONG _Radix,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE XStringToI64( 
            /* [in] */ BSTR _String,
            /* [in] */ LONG _Radix,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringToL( 
            /* [in] */ BSTR _String,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringToI64( 
            /* [in] */ BSTR _String,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LToXString( 
            /* [in] */ LONG _Value,
            /* [in] */ LONG _Radix,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE I64ToXString( 
            /* [in] */ LONGLONG _Value,
            /* [in] */ LONG _Radix,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringToDbl( 
            /* [in] */ BSTR _String,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringToFlt( 
            /* [in] */ BSTR _String,
            /* [retval][out] */ FLOAT *fret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TMAKEWORD( 
            /* [in] */ LONG a,
            /* [in] */ LONG b,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TMAKELONG( 
            /* [in] */ LONG a,
            /* [in] */ LONG b,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TLOWORD( 
            /* [in] */ LONG l,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE THIWORD( 
            /* [in] */ LONG l,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TLOBYTE( 
            /* [in] */ WORD w,
            /* [retval][out] */ BYTE *byret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE THIBYTE( 
            /* [in] */ WORD w,
            /* [retval][out] */ BYTE *byret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TIS_INTRESOURCE( 
            /* [in] */ LONG _r,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TMAKEINTRESOURCE( 
            /* [in] */ LONG i,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TMAKEWPARAM( 
            /* [in] */ LONG l,
            /* [in] */ LONG h,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TMAKELPARAM( 
            /* [in] */ LONG l,
            /* [in] */ LONG h,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TMAKELRESULT( 
            /* [in] */ LONG l,
            /* [in] */ LONG h,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TMAKELANGID( 
            /* [in] */ LONG s,
            /* [in] */ LONG p,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TPRIMARYLANGID( 
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TSUBLANGID( 
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TMAKELCID( 
            /* [in] */ LONG srtid,
            /* [in] */ LONG lgid,
            /* [retval][out] */ DWORD *dwret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TMAKEPOINTS( 
            /* [in] */ LONG l,
            /* [out] */ VARIANT *x,
            /* [out] */ VARIANT *y,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TINDEXTOSTATEIMAGEMASK( 
            /* [in] */ LONG i,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConvertLanguage( 
            /* [in] */ BSTR str,
            /* [in] */ LONG type,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GB2312ToUTF8( 
            /* [in] */ BSTR pStrGB2312,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UTF8ToGB2312( 
            /* [in] */ BSTR pStrUTF8,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GB2312ToBIG5( 
            /* [in] */ BSTR pStrGB2312,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BIG5ToGB2312( 
            /* [in] */ BSTR pStrBIG5,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UTF8ToBIG5( 
            /* [in] */ BSTR pStrUTF8,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BIG5ToUTF8( 
            /* [in] */ BSTR pStrBIG5,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetWSAStartup( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetClose( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetSocket( 
            /* [in] */ BSTR sztype,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetCloseSocket( 
            /* [in] */ LONG sockhandle,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetConnect( 
            /* [in] */ LONG sockhandle,
            /* [in] */ BSTR serv_ip,
            /* [in] */ USHORT serv_port,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetBind( 
            /* [in] */ LONG sockhandle,
            /* [in] */ USHORT serv_port,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetListen( 
            /* [in] */ LONG sockhandle,
            /* [in] */ LONG ncout,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetAccept( 
            /* [in] */ LONG sockhandle,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *serv_ip) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetRecv( 
            /* [in] */ LONG sockhandle,
            /* [retval][out] */ BSTR *Recvbuff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetSend( 
            /* [in] */ LONG sockhandle,
            /* [in] */ BSTR data,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetSendTo( 
            /* [in] */ LONG sockhandle,
            /* [in] */ BSTR data,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NetRecvFrom( 
            /* [in] */ LONG sockhandle,
            /* [in] */ LONG length,
            /* [in] */ BSTR serv_ip,
            /* [in] */ USHORT rPort,
            /* [retval][out] */ BSTR *data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetIP( 
            /* [in] */ LONG type,
            /* [in] */ BSTR param,
            /* [retval][out] */ BSTR *retstring) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITLibPlusInterfaceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITLibPlusInterface * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITLibPlusInterface * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITLibPlusInterface * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITLibPlusInterface * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITLibPlusInterface * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITLibPlusInterface * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITLibPlusInterface * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �汾)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�汾 )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ BSTR *�汾��);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONG ��ɫ,
            /* [in] */ BSTR ����,
            /* [in] */ BSTR ��ʾ�ı�,
            /* [in] */ BSTR Ԥ���ı�,
            /* [retval][out] */ BSTR *����);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ɨ�������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ɨ������� )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ���������쳣�����ʼ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���������쳣�����ʼ�� )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �쳣�ص���ʼ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�쳣�ص���ʼ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONG �Ƿ��Զ��׳�,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��ȡ����쳣��Ϣ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��ȡ����쳣��Ϣ )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ BSTR *�쳣����);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��ʱ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��ʱ )( 
            ITLibPlusInterface * This,
            /* [in] */ ULONG ����,
            /* [in] */ LONG �Ƿ�����,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �˳�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�˳� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ��ԴĿ¼,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡ���ʹ�С)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡ���ʹ�С )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ���������ַ���,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������Ȩ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������Ȩ )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR Ȩ�ޱ�ʶ�ַ���,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����ڴ�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����ڴ� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ���ھ��,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ���������,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ���ע��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���ע�� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONG ע��ģʽ,
            /* [in] */ LONG ��ʱ����,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ���תʮ�����ƻ�����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���תʮ�����ƻ����� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ʮ���ƴ�ŵ�ַ,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ʮ�����ƻ�����ת���)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ʮ�����ƻ�����ת��� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ���������,
            /* [in] */ LONG ʮ���ƴ�ŵ�ַ,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ��ַ���ȡʮ���Ƶ�ַ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ��ַ���ȡʮ���Ƶ�ַ )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ���ھ��,
            /* [in] */ BSTR �ַ�����ַ,
            /* [out][in] */ VARIANT *���ճ��L����ָ�,
            /* [retval][out] */ LONG *dwret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ����������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ���������� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONGLONG ʮ���Ƶ�ַ,
            /* [in] */ LONGLONG ʮ����ƫ������,
            /* [in] */ LONG ����,
            /* [in] */ LONG ��ȡ����,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ������ )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONGLONG ʮ���Ƶ�ַ,
            /* [in] */ LONG ��ȡ����,
            /* [retval][out] */ LONGLONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ��ʮ����������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ��ʮ���������� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONGLONG ʮ���Ƶ�ַ,
            /* [in] */ LONG ����,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ�д����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ�д���� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONGLONG ʮ���Ƶ�ַ,
            /* [in] */ LONG д������,
            /* [in] */ LONGLONG д����ֵ,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ�дʮ����������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ�дʮ���������� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ���ھ��,
            /* [in] */ LONGLONG ʮ���Ƶ�ַ,
            /* [in] */ BSTR ʮ�������ַ����ֽڼ�,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ���� )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *Ŀ���ַ,
            /* [in] */ LONG �����ֵ,
            /* [in] */ LONG ��С,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ��}�u)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ��}�u )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *Ŀ���ַ,
            /* [in] */ VARIANT *��Դ��ַ,
            /* [in] */ LONG ��С,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ�����ռ�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ�����ռ� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG ��С,
            /* [retval][out] */ VARIANT *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ������ )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG ��С,
            /* [retval][out] */ VARIANT *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ��ͷſռ�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ��ͷſռ� )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *ָ��,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ������ͷſռ�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ������ͷſռ� )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *ָ��,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ���ͷ�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ���ͷ� )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *ָ��,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ָ��д)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ָ��д )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *�ڴ�ָ��,
            /* [in] */ BSTR ����,
            /* [in] */ VARIANT *д����ֵ,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ָ���)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ָ��� )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *�ڴ�ָ��,
            /* [in] */ BSTR ����,
            /* [retval][out] */ VARIANT *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ��Сֵ,
            /* [in] */ LONG ���ֵ,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ���������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��������� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE ������_��Сֵ,
            /* [in] */ DOUBLE ������_���ֵ,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, λ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *λ���� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ��ֵ,
            /* [in] */ LONG �ƶ���,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, λ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *λ���� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ��ֵ,
            /* [in] */ LONG �ƶ���,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, λ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *λ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ��ʽ�ַ���,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, λ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *λ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ��ʽ�ַ���,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, λ���)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *λ��� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ��ʽ�ַ���,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, λ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *λ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ��ֵ,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Բ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Բ���� )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��˫������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��˫������ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��˫������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��˫������ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ���귴����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���귴���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��˫������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��˫������ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����������ֵ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����������ֵ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��y����x)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��y����x )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _Number,
            /* [in] */ DOUBLE _Sign,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ˫������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *˫������ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��������ָ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��������ָ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��������ָ��2��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��������ָ��2�� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��������ָ��x��1)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��������ָ��x��1 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����������ֵ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����������ֵ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������xy����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������xy���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����������ֵ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����������ֵ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������x����y��z)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������x����y��z )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _Z,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����������ȡ���)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����������ȡ��� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����������ȡ��С)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����������ȡ��С )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������ȡ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ȡ���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������ȡβ����ָ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ȡβ����ָ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [out] */ VARIANT *_Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������ƽ���͵�ƽ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ƽ���͵�ƽ���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����������ֵ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����������ֵ���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������x����2��e��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������x����2��e�� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������ȡ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ȡ���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������ȡ����10��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ȡ����10�� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������ȡ����2��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ȡ����2�� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������ȡ����ֵ����b)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ȡ����ֵ����b )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������x��1����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������x��1���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����������������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���������������� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �������Ē����������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�������Ē���������� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ���������������С��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���������������С�� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE x,
            /* [out] */ VARIANT *intpart,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡNaNֵ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡNaNֵ )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��������������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�������������� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��������һ����ʾֵ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��������һ����ʾֵ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [out] */ VARIANT *_Z,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �������������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������������� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �������Ē���������ӽ�����λ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�������Ē���������ӽ�����λ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, x��FLT_RADX����n�ĳ˻�����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *x��FLT_RADX����n�ĳ˻����� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, x��FLT_RADX����n�ĳ˻�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *x��FLT_RADX����n�ĳ˻� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ˫������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *˫������ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ƽ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ƽ���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡ����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡ���� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡ˫������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡ˫������ )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ���������Žض�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���������Žض� )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��������ȡ���)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��������ȡ��� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��������ȡ��С)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��������ȡ��С )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��������ȥ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��������ȥ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����ȥ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����ȥ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������������ )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�������� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [in] */ BSTR str,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����ά��ʼ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����ά��ʼ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ά��,
            /* [in] */ BSTR ��С,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ���鵹��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���鵹�� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������ת)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ת )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG �ƶ���,
            /* [in] */ LONG �Ƿ�����,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������λ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������λ )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [in] */ LONG �ƶ���,
            /* [in] */ LONG �Ƿ�����,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ַ����ָ�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ַ����ָ� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ�������,
            /* [in] */ BSTR �ָ���,
            /* [out] */ VARIANT *��������,
            /* [retval][out] */ BSTR *outs);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ַ�������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ַ������� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ַ���ϴ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ַ���ϴ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ַ���ȥ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ַ���ȥ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ַ�������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ַ������� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ַ�����ת)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ַ�����ת )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ�������,
            /* [in] */ LONG �ƶ���,
            /* [in] */ LONG �Ƿ�����,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ַ�����λ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ַ�����λ )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ�������,
            /* [in] */ LONG �ƶ���,
            /* [in] */ LONG �Ƿ�����,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ַ���XmlתJson)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ַ���XmlתJson )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ַ���JsonתXml)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ַ���JsonתXml )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ�������,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ļ���ָ���)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ļ���ָ��� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ļ�·��,
            /* [in] */ BSTR ģʽ�ַ���,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ļ���ָ���ƶ�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ļ���ָ���ƶ� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �ļ�ָ��,
            /* [in] */ LONG λ����,
            /* [in] */ BSTR ��㳣���ַ���,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ļ���ָ���ȡ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ļ���ָ���ȡ )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �ֽڴ�С,
            /* [in] */ LONG ����,
            /* [in] */ LONG �ļ�ָ��,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *_Buffer);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ļ���ָ��д��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ļ���ָ��д�� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ����,
            /* [in] */ LONG �ֽڴ�С,
            /* [in] */ LONG ����,
            /* [in] */ LONG �ļ�ָ��,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ļ���ָ���}�u)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ļ���ָ���}�u )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ����,
            /* [in] */ LONG �}�u����,
            LONG �ļ�ָ��,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ļ���ָ��ر�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ļ���ָ��ر� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �ļ�ָ��,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ڴ�ӳ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ڴ�ӳ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ļ�·��,
            /* [out] */ VARIANT *�����ֽ�����,
            /* [retval][out] */ BSTR *buf);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����ļ�ö��С��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����ļ�ö��С�� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ļ�·��,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����ļ�ö�ټ���)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����ļ�ö�ټ��� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ����,
            /* [in] */ BSTR �ļ�·��,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�������� )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *����a,
            /* [out][in] */ VARIANT *����b,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����ߵ�4λ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����ߵ�4λ )( 
            ITLibPlusInterface * This,
            /* [in] */ BYTE ����,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����ߵ�8λ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����ߵ�8λ )( 
            ITLibPlusInterface * This,
            /* [in] */ WORD ����,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����ߵ�16λ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����ߵ�16λ )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ����,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����ߵ�32λ)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����ߵ�32λ )( 
            ITLibPlusInterface * This,
            /* [in] */ LONGLONG ����,
            /* [retval][out] */ LONGLONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����ַ���ת������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����ַ���ת������ )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ĳ�����ַ���,
            /* [in] */ LONG ������,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����ַ���ת��������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����ַ���ת�������� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [in] */ LONG _Radix,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ʮ�����ַ���תʮ���Ƴ�����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ʮ�����ַ���תʮ���Ƴ����� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �����ַ���,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ʮ�����ַ���תʮ���Ƴ�������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ʮ�����ַ���תʮ���Ƴ������� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ʮ���Ƴ�����ת�����ַ���)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ʮ���Ƴ�����ת�����ַ��� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ����,
            /* [in] */ LONG ������,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ʮ���Ƴ������ν���ת�ַ���)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ʮ���Ƴ������ν���ת�ַ��� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONGLONG ��������,
            /* [in] */ LONG ������,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ַ���ת˫���ȸ�����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ַ���ת˫���ȸ����� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �ַ���ת������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�ַ���ת������ )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [retval][out] */ FLOAT *fret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, תWORD)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *תWORD )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ����a,
            /* [in] */ LONG ����b,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, תLONG)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *תLONG )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ����a,
            /* [in] */ LONG ����b,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡ��WORD)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡ��WORD )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ����,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡ��WORD)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡ��WORD )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ����,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡ��BYTE)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡ��BYTE )( 
            ITLibPlusInterface * This,
            /* [in] */ WORD ������,
            /* [retval][out] */ BYTE *byret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡ��BYTE)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡ��BYTE )( 
            ITLibPlusInterface * This,
            /* [in] */ WORD ������,
            /* [retval][out] */ BYTE *byret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �Ƿ���Դ��ʶ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�Ƿ���Դ��ʶ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ����,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ת��Դ��������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ת��Դ�������� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ����,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, תW����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *תW���� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ��λ����,
            /* [in] */ LONG ��λ����,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, תL����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *תL���� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ��λ����,
            /* [in] */ LONG ��λ����,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, תLRESULT)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *תLRESULT )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ��λ����,
            /* [in] */ LONG ��λ����,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, תLGID)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *תLGID )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �����Ա�ʶ��,
            /* [in] */ LONG �����Ա�ʶ��,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡ�����Ա�ʶ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡ�����Ա�ʶ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡ�����Ա�ʶ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡ�����Ա�ʶ�� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡLCID)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡLCID )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG srtid,
            /* [in] */ LONG lgid,
            /* [retval][out] */ DWORD *dwret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, L����תXY)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *L����תXY )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG L����,
            /* [out] */ VARIANT *����X,
            /* [out] */ VARIANT *����Y,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ȡͼ������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ȡͼ������ )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG ����,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ������ת��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������ת�� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR �ַ�������,
            /* [in] */ LONG ��ϵģʽ,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, GB2312תUTF8)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GB2312תUTF8 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR GB2312�ַ���,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, UTF8תGB2312)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UTF8תGB2312 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR UTF8�ַ���,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, GB2312תBIG5)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GB2312תBIG5 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR GB2312�ַ���,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, BIG5תGB2312)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BIG5תGB2312 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR BIG5�ַ���,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, UTF8תBIG5)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UTF8תBIG5 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR UTF8�ַ���,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, BIG5תUTF8)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BIG5תUTF8 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR BIG5�ַ���,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����ʼ��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����ʼ�� )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����ر�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����ر� )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����׽���)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�����׽��� )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ����,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ����ر��׽���)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����ر��׽��� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �׽���,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *�������� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �׽���,
            /* [in] */ BSTR IP��ַ,
            /* [in] */ USHORT �˿�,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �׽���,
            /* [in] */ USHORT serv_port,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �׽���e,
            /* [in] */ LONG ncout,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �׽���,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *serv_ip);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *������� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �׽���,
            /* [retval][out] */ BSTR *Recvbuff);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ���緢��)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���緢�� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �׽���,
            /* [in] */ BSTR ��������,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ���緢�͵�)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *���緢�͵� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �׽���,
            /* [in] */ BSTR ��������,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, �����������)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *����������� )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG �׽���,
            /* [in] */ LONG ����,
            /* [in] */ BSTR IP��ַ,
            /* [in] */ USHORT rPort,
            /* [retval][out] */ BSTR *data);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ��ȡIP)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *��ȡIP )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG type,
            /* [in] */ BSTR param,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TEST)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TEST )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG pvoid,
            /* [in] */ LONG count,
            /* [in] */ LONG p0,
            /* [in] */ LONG p1,
            /* [in] */ LONG p2,
            /* [in] */ LONG p3,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Ver)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Ver )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ BSTR *retver);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, InputBox)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InputBox )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG hWnd,
            /* [in] */ LONG Color,
            /* [in] */ BSTR szCaption,
            /* [in] */ BSTR szPrompt,
            /* [in] */ BSTR szDefaultText,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, AntiDebuger)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AntiDebuger )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, AntiVEHCallBack)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AntiVEHCallBack )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, InitExceptionCallback)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitExceptionCallback )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG hWnd,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, GetLastException)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLastException )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Delay)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delay )( 
            ITLibPlusInterface * This,
            /* [in] */ ULONG s,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Exit)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Exit )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR fileName,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Sizeof)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sizeof )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR type,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, EnablePrivilege)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnablePrivilege )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR dwPrivilege,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, FreeProcessMemory)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FreeProcessMemory )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG hWnd,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, AsmAdd)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AsmAdd )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR asm_ins,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, AsmCall)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AsmCall )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG hwnd,
            /* [in] */ LONG mode,
            /* [in] */ LONG timeout,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, AsmClear)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AsmClear )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Assemble)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Assemble )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG base_addr,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, DisAssemble)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisAssemble )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR asm_code,
            /* [in] */ LONG base_addr,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, GetFindDataAddr)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFindDataAddr )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG hWnd,
            /* [in] */ BSTR strs,
            /* [out][in] */ VARIANT *pret,
            /* [retval][out] */ LONG *dwret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ReadIntAddr)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadIntAddr )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG hWnd,
            /* [in] */ LONGLONG addr,
            /* [in] */ LONG type,
            /* [retval][out] */ LONGLONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ReadDataAddr)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadDataAddr )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG hwnd,
            /* [in] */ LONGLONG addr,
            /* [in] */ LONG len,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, WriteIntAddr)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteIntAddr )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG hWnd,
            /* [in] */ LONGLONG addr,
            /* [in] */ LONG type,
            /* [in] */ LONGLONG value,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ReadIntTraverseAddr)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadIntTraverseAddr )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG hWnd,
            /* [in] */ LONGLONG addr,
            /* [in] */ LONGLONG offest,
            /* [in] */ LONG count,
            /* [in] */ LONG type,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, WriteDataAddr)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteDataAddr )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG hwnd,
            /* [in] */ LONGLONG addr,
            /* [in] */ BSTR data,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Memset)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Memset )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *_Dst,
            /* [in] */ LONG Val,
            /* [in] */ LONG Size,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Memcpy)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Memcpy )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *_Dst,
            /* [in] */ VARIANT *_Src,
            /* [in] */ LONG Size,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, New)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR sztype,
            /* [in] */ LONG size,
            /* [retval][out] */ VARIANT *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Malloc)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Malloc )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR sztype,
            /* [in] */ LONG size,
            /* [retval][out] */ VARIANT *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Delete)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *_Block,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Deletes)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Deletes )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *_Block,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Free)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Free )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *_Block,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Set)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Set )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *Pvoid,
            /* [in] */ BSTR type,
            /* [in] */ VARIANT *value,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Get)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *Pvoid,
            /* [in] */ BSTR type,
            /* [retval][out] */ VARIANT *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Rand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Rand )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG MIN,
            /* [in] */ LONG MAX,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, RandDouble)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RandDouble )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE DOUBLE_MIN,
            /* [in] */ DOUBLE DOUBLE_MAX,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ShiftRight)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShiftRight )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG l,
            /* [in] */ LONG _Radix,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ShiftLeft)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShiftLeft )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG l,
            LONG _Radix,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, AND)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AND )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ins,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, OR)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OR )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ins,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, XOR)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *XOR )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ins,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NOT)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NOT )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG a,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, PI)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PI )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Acos)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Acos )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Acosh)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Acosh )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Asin)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Asin )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Asinh)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Asinh )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Atan)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Atan )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Atan2)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Atan2 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Atanh)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Atanh )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Cbrt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cbrt )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Ceil)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Ceil )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Copysign)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Copysign )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _Number,
            /* [in] */ DOUBLE _Sign,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Cos)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cos )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Cosh)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cosh )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Exp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Exp )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Exp2)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Exp2 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Expm1)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Expm1 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fabs)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fabs )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fdim)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fdim )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Floor)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Floor )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fma)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fma )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _Z,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fmax)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fmax )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fmin)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fmin )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fmod)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fmod )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Frexp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Frexp )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [out] */ VARIANT *_Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Hypot)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Hypot )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Ilogb)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Ilogb )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Ldexp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Ldexp )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Log)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Log )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Log10)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Log10 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Log2)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Log2 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Logb)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Logb )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Log1p)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Log1p )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Lrint)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Lrint )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Lround)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Lround )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Modf)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Modf )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE x,
            /* [out] */ VARIANT *intpart,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Nan)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Nan )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Nearbyint)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Nearbyint )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Nextafter)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Nextafter )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Pow)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Pow )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Remainder)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remainder )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Remquo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remquo )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [out] */ VARIANT *_Z,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Rint)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Rint )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Round)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Round )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Scalbln)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Scalbln )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Scalbn)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Scalbn )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Sin)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sin )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Sinh)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sinh )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Sqrt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sqrt )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Tan)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Tan )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Tanh)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Tanh )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Trunc)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Trunc )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ArrayGetHighest)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArrayGetHighest )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR szArr,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ArrayGetLowest)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArrayGetLowest )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR szArr,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ArrayUniqueInt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArrayUniqueInt )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR szArr,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ArrayUnique)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArrayUnique )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR szArr,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ArraySortInt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArraySortInt )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR szArr,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ArraySort)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArraySort )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR szArr,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ArrayFilter)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArrayFilter )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR szArr,
            /* [in] */ BSTR str,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ArrayAlloc)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArrayAlloc )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG dim,
            /* [in] */ BSTR szsize,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ArrayReverse)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArrayReverse )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR szArr,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ArrayRotate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArrayRotate )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR szArr,
            /* [in] */ LONG mov,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ArrayShift)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ArrayShift )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR szArr,
            /* [in] */ LONG mov,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringSplit)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringSplit )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ins,
            /* [in] */ BSTR delimit,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *outs);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringSort)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringSort )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ins,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringShuffle)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringShuffle )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ins,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringUnique)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringUnique )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ins,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringReverse)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringReverse )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ins,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringRotate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringRotate )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ins,
            /* [in] */ LONG mov,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringShift)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringShift )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR ins,
            /* [in] */ LONG mov,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringXml2Json)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringXml2Json )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _Src,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringJson2Xml)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringJson2Xml )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _Src,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fwopen)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fwopen )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _FileName,
            /* [in] */ BSTR _Mode,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fseek)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fseek )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG _Stream,
            /* [in] */ LONG _Offset,
            /* [in] */ BSTR dst,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fread)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fread )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG _ElementSize,
            /* [in] */ LONG _ElementCount,
            /* [in] */ LONG _Stream,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *_Buffer);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fwrite)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fwrite )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG _Buffer,
            /* [in] */ LONG _ElementSize,
            /* [in] */ LONG _ElementCount,
            /* [in] */ LONG _Stream,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fgetws)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fgetws )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _Buffer,
            /* [in] */ LONG _BufferCount,
            LONG _Stream,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Fclose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fclose )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG _Stream,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Mmap)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Mmap )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _FileName,
            /* [out] */ VARIANT *dwret,
            /* [retval][out] */ BSTR *buf);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, EnumIniSection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumIniSection )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _FileName,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, EnumIniKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumIniKey )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _Key,
            /* [in] */ BSTR _FileName,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, Swap)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Swap )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *a,
            /* [out][in] */ VARIANT *b,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, SwapByte)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SwapByte )( 
            ITLibPlusInterface * This,
            /* [in] */ BYTE a,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, SwapWord)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SwapWord )( 
            ITLibPlusInterface * This,
            /* [in] */ WORD a,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, SwapLong)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SwapLong )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG a,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, SwapInt64)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SwapInt64 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONGLONG a,
            /* [retval][out] */ LONGLONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, XStringToL)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *XStringToL )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [in] */ LONG _Radix,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, XStringToI64)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *XStringToI64 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [in] */ LONG _Radix,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringToL)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringToL )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringToI64)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringToI64 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, LToXString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LToXString )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG _Value,
            /* [in] */ LONG _Radix,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, I64ToXString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *I64ToXString )( 
            ITLibPlusInterface * This,
            /* [in] */ LONGLONG _Value,
            /* [in] */ LONG _Radix,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringToDbl)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringToDbl )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, StringToFlt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringToFlt )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [retval][out] */ FLOAT *fret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TMAKEWORD)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TMAKEWORD )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG a,
            /* [in] */ LONG b,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TMAKELONG)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TMAKELONG )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG a,
            /* [in] */ LONG b,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TLOWORD)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TLOWORD )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG l,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, THIWORD)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *THIWORD )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG l,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TLOBYTE)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TLOBYTE )( 
            ITLibPlusInterface * This,
            /* [in] */ WORD w,
            /* [retval][out] */ BYTE *byret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, THIBYTE)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *THIBYTE )( 
            ITLibPlusInterface * This,
            /* [in] */ WORD w,
            /* [retval][out] */ BYTE *byret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TIS_INTRESOURCE)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TIS_INTRESOURCE )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG _r,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TMAKEINTRESOURCE)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TMAKEINTRESOURCE )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG i,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TMAKEWPARAM)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TMAKEWPARAM )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG l,
            /* [in] */ LONG h,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TMAKELPARAM)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TMAKELPARAM )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG l,
            /* [in] */ LONG h,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TMAKELRESULT)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TMAKELRESULT )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG l,
            /* [in] */ LONG h,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TMAKELANGID)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TMAKELANGID )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG s,
            /* [in] */ LONG p,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TPRIMARYLANGID)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TPRIMARYLANGID )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TSUBLANGID)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TSUBLANGID )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TMAKELCID)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TMAKELCID )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG srtid,
            /* [in] */ LONG lgid,
            /* [retval][out] */ DWORD *dwret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TMAKEPOINTS)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TMAKEPOINTS )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG l,
            /* [out] */ VARIANT *x,
            /* [out] */ VARIANT *y,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, TINDEXTOSTATEIMAGEMASK)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TINDEXTOSTATEIMAGEMASK )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG i,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, ConvertLanguage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConvertLanguage )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR str,
            /* [in] */ LONG type,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, GB2312ToUTF8)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GB2312ToUTF8 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR pStrGB2312,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, UTF8ToGB2312)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UTF8ToGB2312 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR pStrUTF8,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, GB2312ToBIG5)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GB2312ToBIG5 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR pStrGB2312,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, BIG5ToGB2312)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BIG5ToGB2312 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR pStrBIG5,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, UTF8ToBIG5)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UTF8ToBIG5 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR pStrUTF8,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, BIG5ToUTF8)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BIG5ToUTF8 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR pStrBIG5,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetWSAStartup)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetWSAStartup )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetClose )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetSocket)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetSocket )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR sztype,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetCloseSocket)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetCloseSocket )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG sockhandle,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetConnect)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetConnect )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG sockhandle,
            /* [in] */ BSTR serv_ip,
            /* [in] */ USHORT serv_port,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetBind)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetBind )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG sockhandle,
            /* [in] */ USHORT serv_port,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetListen)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetListen )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG sockhandle,
            /* [in] */ LONG ncout,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetAccept)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetAccept )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG sockhandle,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *serv_ip);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetRecv)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetRecv )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG sockhandle,
            /* [retval][out] */ BSTR *Recvbuff);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetSend)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetSend )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG sockhandle,
            /* [in] */ BSTR data,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetSendTo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetSendTo )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG sockhandle,
            /* [in] */ BSTR data,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, NetRecvFrom)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NetRecvFrom )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG sockhandle,
            /* [in] */ LONG length,
            /* [in] */ BSTR serv_ip,
            /* [in] */ USHORT rPort,
            /* [retval][out] */ BSTR *data);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, GetIP)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetIP )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG type,
            /* [in] */ BSTR param,
            /* [retval][out] */ BSTR *retstring);
        
        END_INTERFACE
    } ITLibPlusInterfaceVtbl;

    interface ITLibPlusInterface
    {
        CONST_VTBL struct ITLibPlusInterfaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITLibPlusInterface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITLibPlusInterface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITLibPlusInterface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITLibPlusInterface_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITLibPlusInterface_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITLibPlusInterface_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITLibPlusInterface_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITLibPlusInterface_�汾(This,�汾��)	\
    ( (This)->lpVtbl -> �汾(This,�汾��) ) 

#define ITLibPlusInterface_�����(This,���ھ��,��ɫ,����,��ʾ�ı�,Ԥ���ı�,����)	\
    ( (This)->lpVtbl -> �����(This,���ھ��,��ɫ,����,��ʾ�ı�,Ԥ���ı�,����) ) 

#define ITLibPlusInterface_ɨ�������(This,nret)	\
    ( (This)->lpVtbl -> ɨ�������(This,nret) ) 

#define ITLibPlusInterface_���������쳣�����ʼ��(This,nret)	\
    ( (This)->lpVtbl -> ���������쳣�����ʼ��(This,nret) ) 

#define ITLibPlusInterface_�쳣�ص���ʼ��(This,���ھ��,�Ƿ��Զ��׳�,nret)	\
    ( (This)->lpVtbl -> �쳣�ص���ʼ��(This,���ھ��,�Ƿ��Զ��׳�,nret) ) 

#define ITLibPlusInterface_��ȡ����쳣��Ϣ(This,�쳣����)	\
    ( (This)->lpVtbl -> ��ȡ����쳣��Ϣ(This,�쳣����) ) 

#define ITLibPlusInterface_��ʱ(This,����,�Ƿ�����,nret)	\
    ( (This)->lpVtbl -> ��ʱ(This,����,�Ƿ�����,nret) ) 

#define ITLibPlusInterface_�˳�(This,��ԴĿ¼,nret)	\
    ( (This)->lpVtbl -> �˳�(This,��ԴĿ¼,nret) ) 

#define ITLibPlusInterface_ȡ���ʹ�С(This,���������ַ���,nret)	\
    ( (This)->lpVtbl -> ȡ���ʹ�С(This,���������ַ���,nret) ) 

#define ITLibPlusInterface_������Ȩ(This,Ȩ�ޱ�ʶ�ַ���,nret)	\
    ( (This)->lpVtbl -> ������Ȩ(This,Ȩ�ޱ�ʶ�ַ���,nret) ) 

#define ITLibPlusInterface_�����ڴ�(This,���ھ��,nret)	\
    ( (This)->lpVtbl -> �����ڴ�(This,���ھ��,nret) ) 

#define ITLibPlusInterface_������(This,�ַ���������,nret)	\
    ( (This)->lpVtbl -> ������(This,�ַ���������,nret) ) 

#define ITLibPlusInterface_���ע��(This,���ھ��,ע��ģʽ,��ʱ����,nret)	\
    ( (This)->lpVtbl -> ���ע��(This,���ھ��,ע��ģʽ,��ʱ����,nret) ) 

#define ITLibPlusInterface_������(This,nret)	\
    ( (This)->lpVtbl -> ������(This,nret) ) 

#define ITLibPlusInterface_���תʮ�����ƻ�����(This,ʮ���ƴ�ŵ�ַ,retstring)	\
    ( (This)->lpVtbl -> ���תʮ�����ƻ�����(This,ʮ���ƴ�ŵ�ַ,retstring) ) 

#define ITLibPlusInterface_ʮ�����ƻ�����ת���(This,�ַ���������,ʮ���ƴ�ŵ�ַ,retstring)	\
    ( (This)->lpVtbl -> ʮ�����ƻ�����ת���(This,�ַ���������,ʮ���ƴ�ŵ�ַ,retstring) ) 

#define ITLibPlusInterface_�ڴ��ַ���ȡʮ���Ƶ�ַ(This,���ھ��,�ַ�����ַ,���ճ��L����ָ�,dwret)	\
    ( (This)->lpVtbl -> �ڴ��ַ���ȡʮ���Ƶ�ַ(This,���ھ��,�ַ�����ַ,���ճ��L����ָ�,dwret) ) 

#define ITLibPlusInterface_�ڴ����������(This,���ھ��,ʮ���Ƶ�ַ,ʮ����ƫ������,����,��ȡ����,retstring)	\
    ( (This)->lpVtbl -> �ڴ����������(This,���ھ��,ʮ���Ƶ�ַ,ʮ����ƫ������,����,��ȡ����,retstring) ) 

#define ITLibPlusInterface_�ڴ������(This,���ھ��,ʮ���Ƶ�ַ,��ȡ����,nret)	\
    ( (This)->lpVtbl -> �ڴ������(This,���ھ��,ʮ���Ƶ�ַ,��ȡ����,nret) ) 

#define ITLibPlusInterface_�ڴ��ʮ����������(This,���ھ��,ʮ���Ƶ�ַ,����,retstring)	\
    ( (This)->lpVtbl -> �ڴ��ʮ����������(This,���ھ��,ʮ���Ƶ�ַ,����,retstring) ) 

#define ITLibPlusInterface_�ڴ�д����(This,���ھ��,ʮ���Ƶ�ַ,д������,д����ֵ,nret)	\
    ( (This)->lpVtbl -> �ڴ�д����(This,���ھ��,ʮ���Ƶ�ַ,д������,д����ֵ,nret) ) 

#define ITLibPlusInterface_�ڴ�дʮ����������(This,���ھ��,ʮ���Ƶ�ַ,ʮ�������ַ����ֽڼ�,nret)	\
    ( (This)->lpVtbl -> �ڴ�дʮ����������(This,���ھ��,ʮ���Ƶ�ַ,ʮ�������ַ����ֽڼ�,nret) ) 

#define ITLibPlusInterface_�ڴ����(This,Ŀ���ַ,�����ֵ,��С,nret)	\
    ( (This)->lpVtbl -> �ڴ����(This,Ŀ���ַ,�����ֵ,��С,nret) ) 

#define ITLibPlusInterface_�ڴ��}�u(This,Ŀ���ַ,��Դ��ַ,��С,nret)	\
    ( (This)->lpVtbl -> �ڴ��}�u(This,Ŀ���ַ,��Դ��ַ,��С,nret) ) 

#define ITLibPlusInterface_�ڴ�����ռ�(This,�����ַ���,��С,nret)	\
    ( (This)->lpVtbl -> �ڴ�����ռ�(This,�����ַ���,��С,nret) ) 

#define ITLibPlusInterface_�ڴ������(This,�����ַ���,��С,nret)	\
    ( (This)->lpVtbl -> �ڴ������(This,�����ַ���,��С,nret) ) 

#define ITLibPlusInterface_�ڴ��ͷſռ�(This,ָ��,nret)	\
    ( (This)->lpVtbl -> �ڴ��ͷſռ�(This,ָ��,nret) ) 

#define ITLibPlusInterface_�ڴ������ͷſռ�(This,ָ��,nret)	\
    ( (This)->lpVtbl -> �ڴ������ͷſռ�(This,ָ��,nret) ) 

#define ITLibPlusInterface_�ڴ���ͷ�(This,ָ��,nret)	\
    ( (This)->lpVtbl -> �ڴ���ͷ�(This,ָ��,nret) ) 

#define ITLibPlusInterface_ָ��д(This,�ڴ�ָ��,����,д����ֵ,nret)	\
    ( (This)->lpVtbl -> ָ��д(This,�ڴ�ָ��,����,д����ֵ,nret) ) 

#define ITLibPlusInterface_ָ���(This,�ڴ�ָ��,����,nret)	\
    ( (This)->lpVtbl -> ָ���(This,�ڴ�ָ��,����,nret) ) 

#define ITLibPlusInterface_�����(This,��Сֵ,���ֵ,nret)	\
    ( (This)->lpVtbl -> �����(This,��Сֵ,���ֵ,nret) ) 

#define ITLibPlusInterface_���������(This,������_��Сֵ,������_���ֵ,dret)	\
    ( (This)->lpVtbl -> ���������(This,������_��Сֵ,������_���ֵ,dret) ) 

#define ITLibPlusInterface_λ����(This,��ֵ,�ƶ���,nret)	\
    ( (This)->lpVtbl -> λ����(This,��ֵ,�ƶ���,nret) ) 

#define ITLibPlusInterface_λ����(This,��ֵ,�ƶ���,nret)	\
    ( (This)->lpVtbl -> λ����(This,��ֵ,�ƶ���,nret) ) 

#define ITLibPlusInterface_λ��(This,��ʽ�ַ���,nret)	\
    ( (This)->lpVtbl -> λ��(This,��ʽ�ַ���,nret) ) 

#define ITLibPlusInterface_λ��(This,��ʽ�ַ���,nret)	\
    ( (This)->lpVtbl -> λ��(This,��ʽ�ַ���,nret) ) 

#define ITLibPlusInterface_λ���(This,��ʽ�ַ���,nret)	\
    ( (This)->lpVtbl -> λ���(This,��ʽ�ַ���,nret) ) 

#define ITLibPlusInterface_λ��(This,��ֵ,nret)	\
    ( (This)->lpVtbl -> λ��(This,��ֵ,nret) ) 

#define ITLibPlusInterface_Բ����(This,dret)	\
    ( (This)->lpVtbl -> Բ����(This,dret) ) 

#define ITLibPlusInterface_������(This,_X,dret)	\
    ( (This)->lpVtbl -> ������(This,_X,dret) ) 

#define ITLibPlusInterface_��˫������(This,_X,dret)	\
    ( (This)->lpVtbl -> ��˫������(This,_X,dret) ) 

#define ITLibPlusInterface_������(This,_X,dret)	\
    ( (This)->lpVtbl -> ������(This,_X,dret) ) 

#define ITLibPlusInterface_��˫������(This,_X,dret)	\
    ( (This)->lpVtbl -> ��˫������(This,_X,dret) ) 

#define ITLibPlusInterface_������(This,_X,dret)	\
    ( (This)->lpVtbl -> ������(This,_X,dret) ) 

#define ITLibPlusInterface_���귴����(This,_Y,_X,dret)	\
    ( (This)->lpVtbl -> ���귴����(This,_Y,_X,dret) ) 

#define ITLibPlusInterface_��˫������(This,_X,dret)	\
    ( (This)->lpVtbl -> ��˫������(This,_X,dret) ) 

#define ITLibPlusInterface_������(This,_X,dret)	\
    ( (This)->lpVtbl -> ������(This,_X,dret) ) 

#define ITLibPlusInterface_����������ֵ(This,_X,dret)	\
    ( (This)->lpVtbl -> ����������ֵ(This,_X,dret) ) 

#define ITLibPlusInterface_��y����x(This,_Number,_Sign,dret)	\
    ( (This)->lpVtbl -> ��y����x(This,_Number,_Sign,dret) ) 

#define ITLibPlusInterface_����(This,_X,dret)	\
    ( (This)->lpVtbl -> ����(This,_X,dret) ) 

#define ITLibPlusInterface_˫������(This,_X,dret)	\
    ( (This)->lpVtbl -> ˫������(This,_X,dret) ) 

#define ITLibPlusInterface_��������ָ��(This,_X,dret)	\
    ( (This)->lpVtbl -> ��������ָ��(This,_X,dret) ) 

#define ITLibPlusInterface_��������ָ��2��(This,_X,dret)	\
    ( (This)->lpVtbl -> ��������ָ��2��(This,_X,dret) ) 

#define ITLibPlusInterface_��������ָ��x��1(This,_X,dret)	\
    ( (This)->lpVtbl -> ��������ָ��x��1(This,_X,dret) ) 

#define ITLibPlusInterface_����������ֵ(This,_X,dret)	\
    ( (This)->lpVtbl -> ����������ֵ(This,_X,dret) ) 

#define ITLibPlusInterface_������xy����(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> ������xy����(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_����������ֵ(This,_X,dret)	\
    ( (This)->lpVtbl -> ����������ֵ(This,_X,dret) ) 

#define ITLibPlusInterface_������x����y��z(This,_X,_Y,_Z,dret)	\
    ( (This)->lpVtbl -> ������x����y��z(This,_X,_Y,_Z,dret) ) 

#define ITLibPlusInterface_����������ȡ���(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> ����������ȡ���(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_����������ȡ��С(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> ����������ȡ��С(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_������ȡ����(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> ������ȡ����(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_������ȡβ����ָ��(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> ������ȡβ����ָ��(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_������ƽ���͵�ƽ����(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> ������ƽ���͵�ƽ����(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_����������ֵ����(This,_X,dret)	\
    ( (This)->lpVtbl -> ����������ֵ����(This,_X,dret) ) 

#define ITLibPlusInterface_������x����2��e��(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> ������x����2��e��(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_������ȡ����(This,_X,dret)	\
    ( (This)->lpVtbl -> ������ȡ����(This,_X,dret) ) 

#define ITLibPlusInterface_������ȡ����10��(This,_X,dret)	\
    ( (This)->lpVtbl -> ������ȡ����10��(This,_X,dret) ) 

#define ITLibPlusInterface_������ȡ����2��(This,_X,dret)	\
    ( (This)->lpVtbl -> ������ȡ����2��(This,_X,dret) ) 

#define ITLibPlusInterface_������ȡ����ֵ����b(This,_X,dret)	\
    ( (This)->lpVtbl -> ������ȡ����ֵ����b(This,_X,dret) ) 

#define ITLibPlusInterface_������x��1����(This,_X,dret)	\
    ( (This)->lpVtbl -> ������x��1����(This,_X,dret) ) 

#define ITLibPlusInterface_����������������(This,_X,nret)	\
    ( (This)->lpVtbl -> ����������������(This,_X,nret) ) 

#define ITLibPlusInterface_�������Ē����������(This,_X,nret)	\
    ( (This)->lpVtbl -> �������Ē����������(This,_X,nret) ) 

#define ITLibPlusInterface_���������������С��(This,x,intpart,dret)	\
    ( (This)->lpVtbl -> ���������������С��(This,x,intpart,dret) ) 

#define ITLibPlusInterface_ȡNaNֵ(This,_X,dret)	\
    ( (This)->lpVtbl -> ȡNaNֵ(This,_X,dret) ) 

#define ITLibPlusInterface_��������������(This,_X,dret)	\
    ( (This)->lpVtbl -> ��������������(This,_X,dret) ) 

#define ITLibPlusInterface_��������һ����ʾֵ(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> ��������һ����ʾֵ(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_����(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> ����(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_������(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> ������(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_����(This,_X,_Y,_Z,dret)	\
    ( (This)->lpVtbl -> ����(This,_X,_Y,_Z,dret) ) 

#define ITLibPlusInterface_�������������(This,_X,dret)	\
    ( (This)->lpVtbl -> �������������(This,_X,dret) ) 

#define ITLibPlusInterface_�������Ē���������ӽ�����λ(This,_X,dret)	\
    ( (This)->lpVtbl -> �������Ē���������ӽ�����λ(This,_X,dret) ) 

#define ITLibPlusInterface_x��FLT_RADX����n�ĳ˻�����(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> x��FLT_RADX����n�ĳ˻�����(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_x��FLT_RADX����n�ĳ˻�(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> x��FLT_RADX����n�ĳ˻�(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_����(This,_X,dret)	\
    ( (This)->lpVtbl -> ����(This,_X,dret) ) 

#define ITLibPlusInterface_˫������(This,_X,dret)	\
    ( (This)->lpVtbl -> ˫������(This,_X,dret) ) 

#define ITLibPlusInterface_ƽ����(This,_X,dret)	\
    ( (This)->lpVtbl -> ƽ����(This,_X,dret) ) 

#define ITLibPlusInterface_ȡ����(This,_X,dret)	\
    ( (This)->lpVtbl -> ȡ����(This,_X,dret) ) 

#define ITLibPlusInterface_ȡ˫������(This,_X,dret)	\
    ( (This)->lpVtbl -> ȡ˫������(This,_X,dret) ) 

#define ITLibPlusInterface_���������Žض�(This,_X,dret)	\
    ( (This)->lpVtbl -> ���������Žض�(This,_X,dret) ) 

#define ITLibPlusInterface_��������ȡ���(This,�����ַ���,en,nret)	\
    ( (This)->lpVtbl -> ��������ȡ���(This,�����ַ���,en,nret) ) 

#define ITLibPlusInterface_��������ȡ��С(This,�����ַ���,en,nret)	\
    ( (This)->lpVtbl -> ��������ȡ��С(This,�����ַ���,en,nret) ) 

#define ITLibPlusInterface_��������ȥ��(This,�����ַ���,retstring)	\
    ( (This)->lpVtbl -> ��������ȥ��(This,�����ַ���,retstring) ) 

#define ITLibPlusInterface_����ȥ��(This,�����ַ���,retstring)	\
    ( (This)->lpVtbl -> ����ȥ��(This,�����ַ���,retstring) ) 

#define ITLibPlusInterface_������������(This,�����ַ���,en,retstring)	\
    ( (This)->lpVtbl -> ������������(This,�����ַ���,en,retstring) ) 

#define ITLibPlusInterface_��������(This,�����ַ���,retstring)	\
    ( (This)->lpVtbl -> ��������(This,�����ַ���,retstring) ) 

#define ITLibPlusInterface_�������(This,�����ַ���,str,retstring)	\
    ( (This)->lpVtbl -> �������(This,�����ַ���,str,retstring) ) 

#define ITLibPlusInterface_�����ά��ʼ��(This,ά��,��С,retstring)	\
    ( (This)->lpVtbl -> �����ά��ʼ��(This,ά��,��С,retstring) ) 

#define ITLibPlusInterface_���鵹��(This,�����ַ���,retstring)	\
    ( (This)->lpVtbl -> ���鵹��(This,�����ַ���,retstring) ) 

#define ITLibPlusInterface_������ת(This,�����ַ���,�ƶ���,�Ƿ�����,retstring)	\
    ( (This)->lpVtbl -> ������ת(This,�����ַ���,�ƶ���,�Ƿ�����,retstring) ) 

#define ITLibPlusInterface_������λ(This,�����ַ���,�ƶ���,�Ƿ�����,retstring)	\
    ( (This)->lpVtbl -> ������λ(This,�����ַ���,�ƶ���,�Ƿ�����,retstring) ) 

#define ITLibPlusInterface_�ַ����ָ�(This,�ַ�������,�ָ���,��������,outs)	\
    ( (This)->lpVtbl -> �ַ����ָ�(This,�ַ�������,�ָ���,��������,outs) ) 

#define ITLibPlusInterface_�ַ�������(This,�ַ�������,retstring)	\
    ( (This)->lpVtbl -> �ַ�������(This,�ַ�������,retstring) ) 

#define ITLibPlusInterface_�ַ���ϴ��(This,�ַ�������,retstring)	\
    ( (This)->lpVtbl -> �ַ���ϴ��(This,�ַ�������,retstring) ) 

#define ITLibPlusInterface_�ַ���ȥ��(This,�ַ�������,retstring)	\
    ( (This)->lpVtbl -> �ַ���ȥ��(This,�ַ�������,retstring) ) 

#define ITLibPlusInterface_�ַ�������(This,�ַ�������,retstring)	\
    ( (This)->lpVtbl -> �ַ�������(This,�ַ�������,retstring) ) 

#define ITLibPlusInterface_�ַ�����ת(This,�ַ�������,�ƶ���,�Ƿ�����,retstring)	\
    ( (This)->lpVtbl -> �ַ�����ת(This,�ַ�������,�ƶ���,�Ƿ�����,retstring) ) 

#define ITLibPlusInterface_�ַ�����λ(This,�ַ�������,�ƶ���,�Ƿ�����,retstring)	\
    ( (This)->lpVtbl -> �ַ�����λ(This,�ַ�������,�ƶ���,�Ƿ�����,retstring) ) 

#define ITLibPlusInterface_�ַ���XmlתJson(This,�ַ�������,retstring)	\
    ( (This)->lpVtbl -> �ַ���XmlתJson(This,�ַ�������,retstring) ) 

#define ITLibPlusInterface_�ַ���JsonתXml(This,�ַ�������,retstring)	\
    ( (This)->lpVtbl -> �ַ���JsonתXml(This,�ַ�������,retstring) ) 

#define ITLibPlusInterface_�ļ���ָ���(This,�ļ�·��,ģʽ�ַ���,nret)	\
    ( (This)->lpVtbl -> �ļ���ָ���(This,�ļ�·��,ģʽ�ַ���,nret) ) 

#define ITLibPlusInterface_�ļ���ָ���ƶ�(This,�ļ�ָ��,λ����,��㳣���ַ���,nret)	\
    ( (This)->lpVtbl -> �ļ���ָ���ƶ�(This,�ļ�ָ��,λ����,��㳣���ַ���,nret) ) 

#define ITLibPlusInterface_�ļ���ָ���ȡ(This,�ֽڴ�С,����,�ļ�ָ��,nret,_Buffer)	\
    ( (This)->lpVtbl -> �ļ���ָ���ȡ(This,�ֽڴ�С,����,�ļ�ָ��,nret,_Buffer) ) 

#define ITLibPlusInterface_�ļ���ָ��д��(This,����,�ֽڴ�С,����,�ļ�ָ��,nret)	\
    ( (This)->lpVtbl -> �ļ���ָ��д��(This,����,�ֽڴ�С,����,�ļ�ָ��,nret) ) 

#define ITLibPlusInterface_�ļ���ָ���}�u(This,����,�}�u����,�ļ�ָ��,retstring)	\
    ( (This)->lpVtbl -> �ļ���ָ���}�u(This,����,�}�u����,�ļ�ָ��,retstring) ) 

#define ITLibPlusInterface_�ļ���ָ��ر�(This,�ļ�ָ��,nret)	\
    ( (This)->lpVtbl -> �ļ���ָ��ر�(This,�ļ�ָ��,nret) ) 

#define ITLibPlusInterface_�ڴ�ӳ��(This,�ļ�·��,�����ֽ�����,buf)	\
    ( (This)->lpVtbl -> �ڴ�ӳ��(This,�ļ�·��,�����ֽ�����,buf) ) 

#define ITLibPlusInterface_�����ļ�ö��С��(This,�ļ�·��,retstring)	\
    ( (This)->lpVtbl -> �����ļ�ö��С��(This,�ļ�·��,retstring) ) 

#define ITLibPlusInterface_�����ļ�ö�ټ���(This,����,�ļ�·��,retstring)	\
    ( (This)->lpVtbl -> �����ļ�ö�ټ���(This,����,�ļ�·��,retstring) ) 

#define ITLibPlusInterface_��������(This,����a,����b,nret)	\
    ( (This)->lpVtbl -> ��������(This,����a,����b,nret) ) 

#define ITLibPlusInterface_�����ߵ�4λ(This,����,nret)	\
    ( (This)->lpVtbl -> �����ߵ�4λ(This,����,nret) ) 

#define ITLibPlusInterface_�����ߵ�8λ(This,����,nret)	\
    ( (This)->lpVtbl -> �����ߵ�8λ(This,����,nret) ) 

#define ITLibPlusInterface_�����ߵ�16λ(This,����,nret)	\
    ( (This)->lpVtbl -> �����ߵ�16λ(This,����,nret) ) 

#define ITLibPlusInterface_�����ߵ�32λ(This,����,nret)	\
    ( (This)->lpVtbl -> �����ߵ�32λ(This,����,nret) ) 

#define ITLibPlusInterface_�����ַ���ת������(This,ĳ�����ַ���,������,nret)	\
    ( (This)->lpVtbl -> �����ַ���ת������(This,ĳ�����ַ���,������,nret) ) 

#define ITLibPlusInterface_�����ַ���ת��������(This,_String,_Radix,llret,nret)	\
    ( (This)->lpVtbl -> �����ַ���ת��������(This,_String,_Radix,llret,nret) ) 

#define ITLibPlusInterface_ʮ�����ַ���תʮ���Ƴ�����(This,�����ַ���,nret)	\
    ( (This)->lpVtbl -> ʮ�����ַ���תʮ���Ƴ�����(This,�����ַ���,nret) ) 

#define ITLibPlusInterface_ʮ�����ַ���תʮ���Ƴ�������(This,_String,llret,nret)	\
    ( (This)->lpVtbl -> ʮ�����ַ���תʮ���Ƴ�������(This,_String,llret,nret) ) 

#define ITLibPlusInterface_ʮ���Ƴ�����ת�����ַ���(This,����,������,retstring)	\
    ( (This)->lpVtbl -> ʮ���Ƴ�����ת�����ַ���(This,����,������,retstring) ) 

#define ITLibPlusInterface_ʮ���Ƴ������ν���ת�ַ���(This,��������,������,retstring)	\
    ( (This)->lpVtbl -> ʮ���Ƴ������ν���ת�ַ���(This,��������,������,retstring) ) 

#define ITLibPlusInterface_�ַ���ת˫���ȸ�����(This,_String,dret)	\
    ( (This)->lpVtbl -> �ַ���ת˫���ȸ�����(This,_String,dret) ) 

#define ITLibPlusInterface_�ַ���ת������(This,_String,fret)	\
    ( (This)->lpVtbl -> �ַ���ת������(This,_String,fret) ) 

#define ITLibPlusInterface_תWORD(This,����a,����b,wret)	\
    ( (This)->lpVtbl -> תWORD(This,����a,����b,wret) ) 

#define ITLibPlusInterface_תLONG(This,����a,����b,nret)	\
    ( (This)->lpVtbl -> תLONG(This,����a,����b,nret) ) 

#define ITLibPlusInterface_ȡ��WORD(This,����,wret)	\
    ( (This)->lpVtbl -> ȡ��WORD(This,����,wret) ) 

#define ITLibPlusInterface_ȡ��WORD(This,����,wret)	\
    ( (This)->lpVtbl -> ȡ��WORD(This,����,wret) ) 

#define ITLibPlusInterface_ȡ��BYTE(This,������,byret)	\
    ( (This)->lpVtbl -> ȡ��BYTE(This,������,byret) ) 

#define ITLibPlusInterface_ȡ��BYTE(This,������,byret)	\
    ( (This)->lpVtbl -> ȡ��BYTE(This,������,byret) ) 

#define ITLibPlusInterface_�Ƿ���Դ��ʶ��(This,����,nret)	\
    ( (This)->lpVtbl -> �Ƿ���Դ��ʶ��(This,����,nret) ) 

#define ITLibPlusInterface_ת��Դ��������(This,����,retstring)	\
    ( (This)->lpVtbl -> ת��Դ��������(This,����,retstring) ) 

#define ITLibPlusInterface_תW����(This,��λ����,��λ����,nret)	\
    ( (This)->lpVtbl -> תW����(This,��λ����,��λ����,nret) ) 

#define ITLibPlusInterface_תL����(This,��λ����,��λ����,nret)	\
    ( (This)->lpVtbl -> תL����(This,��λ����,��λ����,nret) ) 

#define ITLibPlusInterface_תLRESULT(This,��λ����,��λ����,nret)	\
    ( (This)->lpVtbl -> תLRESULT(This,��λ����,��λ����,nret) ) 

#define ITLibPlusInterface_תLGID(This,�����Ա�ʶ��,�����Ա�ʶ��,wret)	\
    ( (This)->lpVtbl -> תLGID(This,�����Ա�ʶ��,�����Ա�ʶ��,wret) ) 

#define ITLibPlusInterface_ȡ�����Ա�ʶ��(This,lgid,wret)	\
    ( (This)->lpVtbl -> ȡ�����Ա�ʶ��(This,lgid,wret) ) 

#define ITLibPlusInterface_ȡ�����Ա�ʶ��(This,lgid,wret)	\
    ( (This)->lpVtbl -> ȡ�����Ա�ʶ��(This,lgid,wret) ) 

#define ITLibPlusInterface_ȡLCID(This,srtid,lgid,dwret)	\
    ( (This)->lpVtbl -> ȡLCID(This,srtid,lgid,dwret) ) 

#define ITLibPlusInterface_L����תXY(This,L����,����X,����Y,nret)	\
    ( (This)->lpVtbl -> L����תXY(This,L����,����X,����Y,nret) ) 

#define ITLibPlusInterface_ȡͼ������(This,����,nret)	\
    ( (This)->lpVtbl -> ȡͼ������(This,����,nret) ) 

#define ITLibPlusInterface_������ת��(This,�ַ�������,��ϵģʽ,retstring)	\
    ( (This)->lpVtbl -> ������ת��(This,�ַ�������,��ϵģʽ,retstring) ) 

#define ITLibPlusInterface_GB2312תUTF8(This,GB2312�ַ���,retstring)	\
    ( (This)->lpVtbl -> GB2312תUTF8(This,GB2312�ַ���,retstring) ) 

#define ITLibPlusInterface_UTF8תGB2312(This,UTF8�ַ���,retstring)	\
    ( (This)->lpVtbl -> UTF8תGB2312(This,UTF8�ַ���,retstring) ) 

#define ITLibPlusInterface_GB2312תBIG5(This,GB2312�ַ���,retstring)	\
    ( (This)->lpVtbl -> GB2312תBIG5(This,GB2312�ַ���,retstring) ) 

#define ITLibPlusInterface_BIG5תGB2312(This,BIG5�ַ���,retstring)	\
    ( (This)->lpVtbl -> BIG5תGB2312(This,BIG5�ַ���,retstring) ) 

#define ITLibPlusInterface_UTF8תBIG5(This,UTF8�ַ���,retstring)	\
    ( (This)->lpVtbl -> UTF8תBIG5(This,UTF8�ַ���,retstring) ) 

#define ITLibPlusInterface_BIG5תUTF8(This,BIG5�ַ���,retstring)	\
    ( (This)->lpVtbl -> BIG5תUTF8(This,BIG5�ַ���,retstring) ) 

#define ITLibPlusInterface_�����ʼ��(This,nret)	\
    ( (This)->lpVtbl -> �����ʼ��(This,nret) ) 

#define ITLibPlusInterface_����ر�(This,nret)	\
    ( (This)->lpVtbl -> ����ر�(This,nret) ) 

#define ITLibPlusInterface_�����׽���(This,����,nret)	\
    ( (This)->lpVtbl -> �����׽���(This,����,nret) ) 

#define ITLibPlusInterface_����ر��׽���(This,�׽���,nret)	\
    ( (This)->lpVtbl -> ����ر��׽���(This,�׽���,nret) ) 

#define ITLibPlusInterface_��������(This,�׽���,IP��ַ,�˿�,nret)	\
    ( (This)->lpVtbl -> ��������(This,�׽���,IP��ַ,�˿�,nret) ) 

#define ITLibPlusInterface_�����(This,�׽���,serv_port,nret)	\
    ( (This)->lpVtbl -> �����(This,�׽���,serv_port,nret) ) 

#define ITLibPlusInterface_�������(This,�׽���e,ncout,nret)	\
    ( (This)->lpVtbl -> �������(This,�׽���e,ncout,nret) ) 

#define ITLibPlusInterface_�������(This,�׽���,nret,serv_ip)	\
    ( (This)->lpVtbl -> �������(This,�׽���,nret,serv_ip) ) 

#define ITLibPlusInterface_�������(This,�׽���,Recvbuff)	\
    ( (This)->lpVtbl -> �������(This,�׽���,Recvbuff) ) 

#define ITLibPlusInterface_���緢��(This,�׽���,��������,nret)	\
    ( (This)->lpVtbl -> ���緢��(This,�׽���,��������,nret) ) 

#define ITLibPlusInterface_���緢�͵�(This,�׽���,��������,nret)	\
    ( (This)->lpVtbl -> ���緢�͵�(This,�׽���,��������,nret) ) 

#define ITLibPlusInterface_�����������(This,�׽���,����,IP��ַ,rPort,data)	\
    ( (This)->lpVtbl -> �����������(This,�׽���,����,IP��ַ,rPort,data) ) 

#define ITLibPlusInterface_��ȡIP(This,type,param,retstring)	\
    ( (This)->lpVtbl -> ��ȡIP(This,type,param,retstring) ) 

#define ITLibPlusInterface_TEST(This,pvoid,count,p0,p1,p2,p3,nret)	\
    ( (This)->lpVtbl -> TEST(This,pvoid,count,p0,p1,p2,p3,nret) ) 

#define ITLibPlusInterface_Ver(This,retver)	\
    ( (This)->lpVtbl -> Ver(This,retver) ) 

#define ITLibPlusInterface_InputBox(This,hWnd,Color,szCaption,szPrompt,szDefaultText,retstring)	\
    ( (This)->lpVtbl -> InputBox(This,hWnd,Color,szCaption,szPrompt,szDefaultText,retstring) ) 

#define ITLibPlusInterface_AntiDebuger(This,nret)	\
    ( (This)->lpVtbl -> AntiDebuger(This,nret) ) 

#define ITLibPlusInterface_AntiVEHCallBack(This,nret)	\
    ( (This)->lpVtbl -> AntiVEHCallBack(This,nret) ) 

#define ITLibPlusInterface_InitExceptionCallback(This,hWnd,en,nret)	\
    ( (This)->lpVtbl -> InitExceptionCallback(This,hWnd,en,nret) ) 

#define ITLibPlusInterface_GetLastException(This,retstring)	\
    ( (This)->lpVtbl -> GetLastException(This,retstring) ) 

#define ITLibPlusInterface_Delay(This,s,en,nret)	\
    ( (This)->lpVtbl -> Delay(This,s,en,nret) ) 

#define ITLibPlusInterface_Exit(This,fileName,nret)	\
    ( (This)->lpVtbl -> Exit(This,fileName,nret) ) 

#define ITLibPlusInterface_Sizeof(This,type,nret)	\
    ( (This)->lpVtbl -> Sizeof(This,type,nret) ) 

#define ITLibPlusInterface_EnablePrivilege(This,dwPrivilege,nret)	\
    ( (This)->lpVtbl -> EnablePrivilege(This,dwPrivilege,nret) ) 

#define ITLibPlusInterface_FreeProcessMemory(This,hWnd,nret)	\
    ( (This)->lpVtbl -> FreeProcessMemory(This,hWnd,nret) ) 

#define ITLibPlusInterface_AsmAdd(This,asm_ins,nret)	\
    ( (This)->lpVtbl -> AsmAdd(This,asm_ins,nret) ) 

#define ITLibPlusInterface_AsmCall(This,hwnd,mode,timeout,nret)	\
    ( (This)->lpVtbl -> AsmCall(This,hwnd,mode,timeout,nret) ) 

#define ITLibPlusInterface_AsmClear(This,nret)	\
    ( (This)->lpVtbl -> AsmClear(This,nret) ) 

#define ITLibPlusInterface_Assemble(This,base_addr,retstring)	\
    ( (This)->lpVtbl -> Assemble(This,base_addr,retstring) ) 

#define ITLibPlusInterface_DisAssemble(This,asm_code,base_addr,retstring)	\
    ( (This)->lpVtbl -> DisAssemble(This,asm_code,base_addr,retstring) ) 

#define ITLibPlusInterface_GetFindDataAddr(This,hWnd,strs,pret,dwret)	\
    ( (This)->lpVtbl -> GetFindDataAddr(This,hWnd,strs,pret,dwret) ) 

#define ITLibPlusInterface_ReadIntAddr(This,hWnd,addr,type,nret)	\
    ( (This)->lpVtbl -> ReadIntAddr(This,hWnd,addr,type,nret) ) 

#define ITLibPlusInterface_ReadDataAddr(This,hwnd,addr,len,retstring)	\
    ( (This)->lpVtbl -> ReadDataAddr(This,hwnd,addr,len,retstring) ) 

#define ITLibPlusInterface_WriteIntAddr(This,hWnd,addr,type,value,nret)	\
    ( (This)->lpVtbl -> WriteIntAddr(This,hWnd,addr,type,value,nret) ) 

#define ITLibPlusInterface_ReadIntTraverseAddr(This,hWnd,addr,offest,count,type,retstring)	\
    ( (This)->lpVtbl -> ReadIntTraverseAddr(This,hWnd,addr,offest,count,type,retstring) ) 

#define ITLibPlusInterface_WriteDataAddr(This,hwnd,addr,data,nret)	\
    ( (This)->lpVtbl -> WriteDataAddr(This,hwnd,addr,data,nret) ) 

#define ITLibPlusInterface_Memset(This,_Dst,Val,Size,nret)	\
    ( (This)->lpVtbl -> Memset(This,_Dst,Val,Size,nret) ) 

#define ITLibPlusInterface_Memcpy(This,_Dst,_Src,Size,nret)	\
    ( (This)->lpVtbl -> Memcpy(This,_Dst,_Src,Size,nret) ) 

#define ITLibPlusInterface_New(This,sztype,size,nret)	\
    ( (This)->lpVtbl -> New(This,sztype,size,nret) ) 

#define ITLibPlusInterface_Malloc(This,sztype,size,nret)	\
    ( (This)->lpVtbl -> Malloc(This,sztype,size,nret) ) 

#define ITLibPlusInterface_Delete(This,_Block,nret)	\
    ( (This)->lpVtbl -> Delete(This,_Block,nret) ) 

#define ITLibPlusInterface_Deletes(This,_Block,nret)	\
    ( (This)->lpVtbl -> Deletes(This,_Block,nret) ) 

#define ITLibPlusInterface_Free(This,_Block,nret)	\
    ( (This)->lpVtbl -> Free(This,_Block,nret) ) 

#define ITLibPlusInterface_Set(This,Pvoid,type,value,nret)	\
    ( (This)->lpVtbl -> Set(This,Pvoid,type,value,nret) ) 

#define ITLibPlusInterface_Get(This,Pvoid,type,nret)	\
    ( (This)->lpVtbl -> Get(This,Pvoid,type,nret) ) 

#define ITLibPlusInterface_Rand(This,MIN,MAX,nret)	\
    ( (This)->lpVtbl -> Rand(This,MIN,MAX,nret) ) 

#define ITLibPlusInterface_RandDouble(This,DOUBLE_MIN,DOUBLE_MAX,dret)	\
    ( (This)->lpVtbl -> RandDouble(This,DOUBLE_MIN,DOUBLE_MAX,dret) ) 

#define ITLibPlusInterface_ShiftRight(This,l,_Radix,nret)	\
    ( (This)->lpVtbl -> ShiftRight(This,l,_Radix,nret) ) 

#define ITLibPlusInterface_ShiftLeft(This,l,_Radix,nret)	\
    ( (This)->lpVtbl -> ShiftLeft(This,l,_Radix,nret) ) 

#define ITLibPlusInterface_AND(This,ins,nret)	\
    ( (This)->lpVtbl -> AND(This,ins,nret) ) 

#define ITLibPlusInterface_OR(This,ins,nret)	\
    ( (This)->lpVtbl -> OR(This,ins,nret) ) 

#define ITLibPlusInterface_XOR(This,ins,nret)	\
    ( (This)->lpVtbl -> XOR(This,ins,nret) ) 

#define ITLibPlusInterface_NOT(This,a,nret)	\
    ( (This)->lpVtbl -> NOT(This,a,nret) ) 

#define ITLibPlusInterface_PI(This,dret)	\
    ( (This)->lpVtbl -> PI(This,dret) ) 

#define ITLibPlusInterface_Acos(This,_X,dret)	\
    ( (This)->lpVtbl -> Acos(This,_X,dret) ) 

#define ITLibPlusInterface_Acosh(This,_X,dret)	\
    ( (This)->lpVtbl -> Acosh(This,_X,dret) ) 

#define ITLibPlusInterface_Asin(This,_X,dret)	\
    ( (This)->lpVtbl -> Asin(This,_X,dret) ) 

#define ITLibPlusInterface_Asinh(This,_X,dret)	\
    ( (This)->lpVtbl -> Asinh(This,_X,dret) ) 

#define ITLibPlusInterface_Atan(This,_X,dret)	\
    ( (This)->lpVtbl -> Atan(This,_X,dret) ) 

#define ITLibPlusInterface_Atan2(This,_Y,_X,dret)	\
    ( (This)->lpVtbl -> Atan2(This,_Y,_X,dret) ) 

#define ITLibPlusInterface_Atanh(This,_X,dret)	\
    ( (This)->lpVtbl -> Atanh(This,_X,dret) ) 

#define ITLibPlusInterface_Cbrt(This,_X,dret)	\
    ( (This)->lpVtbl -> Cbrt(This,_X,dret) ) 

#define ITLibPlusInterface_Ceil(This,_X,dret)	\
    ( (This)->lpVtbl -> Ceil(This,_X,dret) ) 

#define ITLibPlusInterface_Copysign(This,_Number,_Sign,dret)	\
    ( (This)->lpVtbl -> Copysign(This,_Number,_Sign,dret) ) 

#define ITLibPlusInterface_Cos(This,_X,dret)	\
    ( (This)->lpVtbl -> Cos(This,_X,dret) ) 

#define ITLibPlusInterface_Cosh(This,_X,dret)	\
    ( (This)->lpVtbl -> Cosh(This,_X,dret) ) 

#define ITLibPlusInterface_Exp(This,_X,dret)	\
    ( (This)->lpVtbl -> Exp(This,_X,dret) ) 

#define ITLibPlusInterface_Exp2(This,_X,dret)	\
    ( (This)->lpVtbl -> Exp2(This,_X,dret) ) 

#define ITLibPlusInterface_Expm1(This,_X,dret)	\
    ( (This)->lpVtbl -> Expm1(This,_X,dret) ) 

#define ITLibPlusInterface_Fabs(This,_X,dret)	\
    ( (This)->lpVtbl -> Fabs(This,_X,dret) ) 

#define ITLibPlusInterface_Fdim(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Fdim(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Floor(This,_X,dret)	\
    ( (This)->lpVtbl -> Floor(This,_X,dret) ) 

#define ITLibPlusInterface_Fma(This,_X,_Y,_Z,dret)	\
    ( (This)->lpVtbl -> Fma(This,_X,_Y,_Z,dret) ) 

#define ITLibPlusInterface_Fmax(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Fmax(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Fmin(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Fmin(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Fmod(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Fmod(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Frexp(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Frexp(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Hypot(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Hypot(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Ilogb(This,_X,dret)	\
    ( (This)->lpVtbl -> Ilogb(This,_X,dret) ) 

#define ITLibPlusInterface_Ldexp(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Ldexp(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Log(This,_X,dret)	\
    ( (This)->lpVtbl -> Log(This,_X,dret) ) 

#define ITLibPlusInterface_Log10(This,_X,dret)	\
    ( (This)->lpVtbl -> Log10(This,_X,dret) ) 

#define ITLibPlusInterface_Log2(This,_X,dret)	\
    ( (This)->lpVtbl -> Log2(This,_X,dret) ) 

#define ITLibPlusInterface_Logb(This,_X,dret)	\
    ( (This)->lpVtbl -> Logb(This,_X,dret) ) 

#define ITLibPlusInterface_Log1p(This,_X,dret)	\
    ( (This)->lpVtbl -> Log1p(This,_X,dret) ) 

#define ITLibPlusInterface_Lrint(This,_X,nret)	\
    ( (This)->lpVtbl -> Lrint(This,_X,nret) ) 

#define ITLibPlusInterface_Lround(This,_X,nret)	\
    ( (This)->lpVtbl -> Lround(This,_X,nret) ) 

#define ITLibPlusInterface_Modf(This,x,intpart,dret)	\
    ( (This)->lpVtbl -> Modf(This,x,intpart,dret) ) 

#define ITLibPlusInterface_Nan(This,_X,dret)	\
    ( (This)->lpVtbl -> Nan(This,_X,dret) ) 

#define ITLibPlusInterface_Nearbyint(This,_X,dret)	\
    ( (This)->lpVtbl -> Nearbyint(This,_X,dret) ) 

#define ITLibPlusInterface_Nextafter(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Nextafter(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Pow(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Pow(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Remainder(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Remainder(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Remquo(This,_X,_Y,_Z,dret)	\
    ( (This)->lpVtbl -> Remquo(This,_X,_Y,_Z,dret) ) 

#define ITLibPlusInterface_Rint(This,_X,dret)	\
    ( (This)->lpVtbl -> Rint(This,_X,dret) ) 

#define ITLibPlusInterface_Round(This,_X,dret)	\
    ( (This)->lpVtbl -> Round(This,_X,dret) ) 

#define ITLibPlusInterface_Scalbln(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Scalbln(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Scalbn(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> Scalbn(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_Sin(This,_X,dret)	\
    ( (This)->lpVtbl -> Sin(This,_X,dret) ) 

#define ITLibPlusInterface_Sinh(This,_X,dret)	\
    ( (This)->lpVtbl -> Sinh(This,_X,dret) ) 

#define ITLibPlusInterface_Sqrt(This,_X,dret)	\
    ( (This)->lpVtbl -> Sqrt(This,_X,dret) ) 

#define ITLibPlusInterface_Tan(This,_X,dret)	\
    ( (This)->lpVtbl -> Tan(This,_X,dret) ) 

#define ITLibPlusInterface_Tanh(This,_X,dret)	\
    ( (This)->lpVtbl -> Tanh(This,_X,dret) ) 

#define ITLibPlusInterface_Trunc(This,_X,dret)	\
    ( (This)->lpVtbl -> Trunc(This,_X,dret) ) 

#define ITLibPlusInterface_ArrayGetHighest(This,szArr,en,nret)	\
    ( (This)->lpVtbl -> ArrayGetHighest(This,szArr,en,nret) ) 

#define ITLibPlusInterface_ArrayGetLowest(This,szArr,en,nret)	\
    ( (This)->lpVtbl -> ArrayGetLowest(This,szArr,en,nret) ) 

#define ITLibPlusInterface_ArrayUniqueInt(This,szArr,retstring)	\
    ( (This)->lpVtbl -> ArrayUniqueInt(This,szArr,retstring) ) 

#define ITLibPlusInterface_ArrayUnique(This,szArr,retstring)	\
    ( (This)->lpVtbl -> ArrayUnique(This,szArr,retstring) ) 

#define ITLibPlusInterface_ArraySortInt(This,szArr,en,retstring)	\
    ( (This)->lpVtbl -> ArraySortInt(This,szArr,en,retstring) ) 

#define ITLibPlusInterface_ArraySort(This,szArr,retstring)	\
    ( (This)->lpVtbl -> ArraySort(This,szArr,retstring) ) 

#define ITLibPlusInterface_ArrayFilter(This,szArr,str,retstring)	\
    ( (This)->lpVtbl -> ArrayFilter(This,szArr,str,retstring) ) 

#define ITLibPlusInterface_ArrayAlloc(This,dim,szsize,retstring)	\
    ( (This)->lpVtbl -> ArrayAlloc(This,dim,szsize,retstring) ) 

#define ITLibPlusInterface_ArrayReverse(This,szArr,retstring)	\
    ( (This)->lpVtbl -> ArrayReverse(This,szArr,retstring) ) 

#define ITLibPlusInterface_ArrayRotate(This,szArr,mov,en,retstring)	\
    ( (This)->lpVtbl -> ArrayRotate(This,szArr,mov,en,retstring) ) 

#define ITLibPlusInterface_ArrayShift(This,szArr,mov,en,retstring)	\
    ( (This)->lpVtbl -> ArrayShift(This,szArr,mov,en,retstring) ) 

#define ITLibPlusInterface_StringSplit(This,ins,delimit,nret,outs)	\
    ( (This)->lpVtbl -> StringSplit(This,ins,delimit,nret,outs) ) 

#define ITLibPlusInterface_StringSort(This,ins,retstring)	\
    ( (This)->lpVtbl -> StringSort(This,ins,retstring) ) 

#define ITLibPlusInterface_StringShuffle(This,ins,retstring)	\
    ( (This)->lpVtbl -> StringShuffle(This,ins,retstring) ) 

#define ITLibPlusInterface_StringUnique(This,ins,retstring)	\
    ( (This)->lpVtbl -> StringUnique(This,ins,retstring) ) 

#define ITLibPlusInterface_StringReverse(This,ins,retstring)	\
    ( (This)->lpVtbl -> StringReverse(This,ins,retstring) ) 

#define ITLibPlusInterface_StringRotate(This,ins,mov,en,retstring)	\
    ( (This)->lpVtbl -> StringRotate(This,ins,mov,en,retstring) ) 

#define ITLibPlusInterface_StringShift(This,ins,mov,en,retstring)	\
    ( (This)->lpVtbl -> StringShift(This,ins,mov,en,retstring) ) 

#define ITLibPlusInterface_StringXml2Json(This,_Src,retstring)	\
    ( (This)->lpVtbl -> StringXml2Json(This,_Src,retstring) ) 

#define ITLibPlusInterface_StringJson2Xml(This,_Src,retstring)	\
    ( (This)->lpVtbl -> StringJson2Xml(This,_Src,retstring) ) 

#define ITLibPlusInterface_Fwopen(This,_FileName,_Mode,nret)	\
    ( (This)->lpVtbl -> Fwopen(This,_FileName,_Mode,nret) ) 

#define ITLibPlusInterface_Fseek(This,_Stream,_Offset,dst,nret)	\
    ( (This)->lpVtbl -> Fseek(This,_Stream,_Offset,dst,nret) ) 

#define ITLibPlusInterface_Fread(This,_ElementSize,_ElementCount,_Stream,nret,_Buffer)	\
    ( (This)->lpVtbl -> Fread(This,_ElementSize,_ElementCount,_Stream,nret,_Buffer) ) 

#define ITLibPlusInterface_Fwrite(This,_Buffer,_ElementSize,_ElementCount,_Stream,nret)	\
    ( (This)->lpVtbl -> Fwrite(This,_Buffer,_ElementSize,_ElementCount,_Stream,nret) ) 

#define ITLibPlusInterface_Fgetws(This,_Buffer,_BufferCount,_Stream,retstring)	\
    ( (This)->lpVtbl -> Fgetws(This,_Buffer,_BufferCount,_Stream,retstring) ) 

#define ITLibPlusInterface_Fclose(This,_Stream,nret)	\
    ( (This)->lpVtbl -> Fclose(This,_Stream,nret) ) 

#define ITLibPlusInterface_Mmap(This,_FileName,dwret,buf)	\
    ( (This)->lpVtbl -> Mmap(This,_FileName,dwret,buf) ) 

#define ITLibPlusInterface_EnumIniSection(This,_FileName,retstring)	\
    ( (This)->lpVtbl -> EnumIniSection(This,_FileName,retstring) ) 

#define ITLibPlusInterface_EnumIniKey(This,_Key,_FileName,retstring)	\
    ( (This)->lpVtbl -> EnumIniKey(This,_Key,_FileName,retstring) ) 

#define ITLibPlusInterface_Swap(This,a,b,nret)	\
    ( (This)->lpVtbl -> Swap(This,a,b,nret) ) 

#define ITLibPlusInterface_SwapByte(This,a,nret)	\
    ( (This)->lpVtbl -> SwapByte(This,a,nret) ) 

#define ITLibPlusInterface_SwapWord(This,a,nret)	\
    ( (This)->lpVtbl -> SwapWord(This,a,nret) ) 

#define ITLibPlusInterface_SwapLong(This,a,nret)	\
    ( (This)->lpVtbl -> SwapLong(This,a,nret) ) 

#define ITLibPlusInterface_SwapInt64(This,a,nret)	\
    ( (This)->lpVtbl -> SwapInt64(This,a,nret) ) 

#define ITLibPlusInterface_XStringToL(This,_String,_Radix,nret)	\
    ( (This)->lpVtbl -> XStringToL(This,_String,_Radix,nret) ) 

#define ITLibPlusInterface_XStringToI64(This,_String,_Radix,llret,nret)	\
    ( (This)->lpVtbl -> XStringToI64(This,_String,_Radix,llret,nret) ) 

#define ITLibPlusInterface_StringToL(This,_String,nret)	\
    ( (This)->lpVtbl -> StringToL(This,_String,nret) ) 

#define ITLibPlusInterface_StringToI64(This,_String,llret,nret)	\
    ( (This)->lpVtbl -> StringToI64(This,_String,llret,nret) ) 

#define ITLibPlusInterface_LToXString(This,_Value,_Radix,retstring)	\
    ( (This)->lpVtbl -> LToXString(This,_Value,_Radix,retstring) ) 

#define ITLibPlusInterface_I64ToXString(This,_Value,_Radix,retstring)	\
    ( (This)->lpVtbl -> I64ToXString(This,_Value,_Radix,retstring) ) 

#define ITLibPlusInterface_StringToDbl(This,_String,dret)	\
    ( (This)->lpVtbl -> StringToDbl(This,_String,dret) ) 

#define ITLibPlusInterface_StringToFlt(This,_String,fret)	\
    ( (This)->lpVtbl -> StringToFlt(This,_String,fret) ) 

#define ITLibPlusInterface_TMAKEWORD(This,a,b,wret)	\
    ( (This)->lpVtbl -> TMAKEWORD(This,a,b,wret) ) 

#define ITLibPlusInterface_TMAKELONG(This,a,b,nret)	\
    ( (This)->lpVtbl -> TMAKELONG(This,a,b,nret) ) 

#define ITLibPlusInterface_TLOWORD(This,l,wret)	\
    ( (This)->lpVtbl -> TLOWORD(This,l,wret) ) 

#define ITLibPlusInterface_THIWORD(This,l,wret)	\
    ( (This)->lpVtbl -> THIWORD(This,l,wret) ) 

#define ITLibPlusInterface_TLOBYTE(This,w,byret)	\
    ( (This)->lpVtbl -> TLOBYTE(This,w,byret) ) 

#define ITLibPlusInterface_THIBYTE(This,w,byret)	\
    ( (This)->lpVtbl -> THIBYTE(This,w,byret) ) 

#define ITLibPlusInterface_TIS_INTRESOURCE(This,_r,nret)	\
    ( (This)->lpVtbl -> TIS_INTRESOURCE(This,_r,nret) ) 

#define ITLibPlusInterface_TMAKEINTRESOURCE(This,i,retstring)	\
    ( (This)->lpVtbl -> TMAKEINTRESOURCE(This,i,retstring) ) 

#define ITLibPlusInterface_TMAKEWPARAM(This,l,h,nret)	\
    ( (This)->lpVtbl -> TMAKEWPARAM(This,l,h,nret) ) 

#define ITLibPlusInterface_TMAKELPARAM(This,l,h,nret)	\
    ( (This)->lpVtbl -> TMAKELPARAM(This,l,h,nret) ) 

#define ITLibPlusInterface_TMAKELRESULT(This,l,h,nret)	\
    ( (This)->lpVtbl -> TMAKELRESULT(This,l,h,nret) ) 

#define ITLibPlusInterface_TMAKELANGID(This,s,p,wret)	\
    ( (This)->lpVtbl -> TMAKELANGID(This,s,p,wret) ) 

#define ITLibPlusInterface_TPRIMARYLANGID(This,lgid,wret)	\
    ( (This)->lpVtbl -> TPRIMARYLANGID(This,lgid,wret) ) 

#define ITLibPlusInterface_TSUBLANGID(This,lgid,wret)	\
    ( (This)->lpVtbl -> TSUBLANGID(This,lgid,wret) ) 

#define ITLibPlusInterface_TMAKELCID(This,srtid,lgid,dwret)	\
    ( (This)->lpVtbl -> TMAKELCID(This,srtid,lgid,dwret) ) 

#define ITLibPlusInterface_TMAKEPOINTS(This,l,x,y,nret)	\
    ( (This)->lpVtbl -> TMAKEPOINTS(This,l,x,y,nret) ) 

#define ITLibPlusInterface_TINDEXTOSTATEIMAGEMASK(This,i,nret)	\
    ( (This)->lpVtbl -> TINDEXTOSTATEIMAGEMASK(This,i,nret) ) 

#define ITLibPlusInterface_ConvertLanguage(This,str,type,retstring)	\
    ( (This)->lpVtbl -> ConvertLanguage(This,str,type,retstring) ) 

#define ITLibPlusInterface_GB2312ToUTF8(This,pStrGB2312,retstring)	\
    ( (This)->lpVtbl -> GB2312ToUTF8(This,pStrGB2312,retstring) ) 

#define ITLibPlusInterface_UTF8ToGB2312(This,pStrUTF8,retstring)	\
    ( (This)->lpVtbl -> UTF8ToGB2312(This,pStrUTF8,retstring) ) 

#define ITLibPlusInterface_GB2312ToBIG5(This,pStrGB2312,retstring)	\
    ( (This)->lpVtbl -> GB2312ToBIG5(This,pStrGB2312,retstring) ) 

#define ITLibPlusInterface_BIG5ToGB2312(This,pStrBIG5,retstring)	\
    ( (This)->lpVtbl -> BIG5ToGB2312(This,pStrBIG5,retstring) ) 

#define ITLibPlusInterface_UTF8ToBIG5(This,pStrUTF8,retstring)	\
    ( (This)->lpVtbl -> UTF8ToBIG5(This,pStrUTF8,retstring) ) 

#define ITLibPlusInterface_BIG5ToUTF8(This,pStrBIG5,retstring)	\
    ( (This)->lpVtbl -> BIG5ToUTF8(This,pStrBIG5,retstring) ) 

#define ITLibPlusInterface_NetWSAStartup(This,nret)	\
    ( (This)->lpVtbl -> NetWSAStartup(This,nret) ) 

#define ITLibPlusInterface_NetClose(This,nret)	\
    ( (This)->lpVtbl -> NetClose(This,nret) ) 

#define ITLibPlusInterface_NetSocket(This,sztype,nret)	\
    ( (This)->lpVtbl -> NetSocket(This,sztype,nret) ) 

#define ITLibPlusInterface_NetCloseSocket(This,sockhandle,nret)	\
    ( (This)->lpVtbl -> NetCloseSocket(This,sockhandle,nret) ) 

#define ITLibPlusInterface_NetConnect(This,sockhandle,serv_ip,serv_port,nret)	\
    ( (This)->lpVtbl -> NetConnect(This,sockhandle,serv_ip,serv_port,nret) ) 

#define ITLibPlusInterface_NetBind(This,sockhandle,serv_port,nret)	\
    ( (This)->lpVtbl -> NetBind(This,sockhandle,serv_port,nret) ) 

#define ITLibPlusInterface_NetListen(This,sockhandle,ncout,nret)	\
    ( (This)->lpVtbl -> NetListen(This,sockhandle,ncout,nret) ) 

#define ITLibPlusInterface_NetAccept(This,sockhandle,nret,serv_ip)	\
    ( (This)->lpVtbl -> NetAccept(This,sockhandle,nret,serv_ip) ) 

#define ITLibPlusInterface_NetRecv(This,sockhandle,Recvbuff)	\
    ( (This)->lpVtbl -> NetRecv(This,sockhandle,Recvbuff) ) 

#define ITLibPlusInterface_NetSend(This,sockhandle,data,nret)	\
    ( (This)->lpVtbl -> NetSend(This,sockhandle,data,nret) ) 

#define ITLibPlusInterface_NetSendTo(This,sockhandle,data,nret)	\
    ( (This)->lpVtbl -> NetSendTo(This,sockhandle,data,nret) ) 

#define ITLibPlusInterface_NetRecvFrom(This,sockhandle,length,serv_ip,rPort,data)	\
    ( (This)->lpVtbl -> NetRecvFrom(This,sockhandle,length,serv_ip,rPort,data) ) 

#define ITLibPlusInterface_GetIP(This,type,param,retstring)	\
    ( (This)->lpVtbl -> GetIP(This,type,param,retstring) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�����ߵ�8λ_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD ����,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_�����ߵ�8λ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�����ߵ�16λ_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ����,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_�����ߵ�16λ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�����ߵ�32λ_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONGLONG ����,
    /* [retval][out] */ LONGLONG *nret);


void __RPC_STUB ITLibPlusInterface_�����ߵ�32λ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�����ַ���ת������_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ĳ�����ַ���,
    /* [in] */ LONG ������,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_�����ַ���ת������_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�����ַ���ת��������_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [in] */ LONG _Radix,
    /* [out][in] */ VARIANT *llret,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_�����ַ���ת��������_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ʮ�����ַ���תʮ���Ƴ�����_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR �����ַ���,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_ʮ�����ַ���תʮ���Ƴ�����_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ʮ�����ַ���תʮ���Ƴ�������_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [out][in] */ VARIANT *llret,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_ʮ�����ַ���תʮ���Ƴ�������_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ʮ���Ƴ�����ת�����ַ���_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ����,
    /* [in] */ LONG ������,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ʮ���Ƴ�����ת�����ַ���_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ʮ���Ƴ������ν���ת�ַ���_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONGLONG ��������,
    /* [in] */ LONG ������,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ʮ���Ƴ������ν���ת�ַ���_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�ַ���ת˫���ȸ�����_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_�ַ���ת˫���ȸ�����_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�ַ���ת������_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ FLOAT *fret);


void __RPC_STUB ITLibPlusInterface_�ַ���ת������_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_תWORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ����a,
    /* [in] */ LONG ����b,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_תWORD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_תLONG_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ����a,
    /* [in] */ LONG ����b,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_תLONG_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ȡ��WORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ����,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_ȡ��WORD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ȡ��WORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ����,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_ȡ��WORD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ȡ��BYTE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD ������,
    /* [retval][out] */ BYTE *byret);


void __RPC_STUB ITLibPlusInterface_ȡ��BYTE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ȡ��BYTE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD ������,
    /* [retval][out] */ BYTE *byret);


void __RPC_STUB ITLibPlusInterface_ȡ��BYTE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�Ƿ���Դ��ʶ��_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ����,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_�Ƿ���Դ��ʶ��_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ת��Դ��������_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ����,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ת��Դ��������_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_תW����_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ��λ����,
    /* [in] */ LONG ��λ����,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_תW����_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_תL����_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ��λ����,
    /* [in] */ LONG ��λ����,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_תL����_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_תLRESULT_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ��λ����,
    /* [in] */ LONG ��λ����,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_תLRESULT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_תLGID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG �����Ա�ʶ��,
    /* [in] */ LONG �����Ա�ʶ��,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_תLGID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ȡ�����Ա�ʶ��_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG lgid,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_ȡ�����Ա�ʶ��_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ȡ�����Ա�ʶ��_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG lgid,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_ȡ�����Ա�ʶ��_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ȡLCID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG srtid,
    /* [in] */ LONG lgid,
    /* [retval][out] */ DWORD *dwret);


void __RPC_STUB ITLibPlusInterface_ȡLCID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_L����תXY_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG L����,
    /* [out] */ VARIANT *����X,
    /* [out] */ VARIANT *����Y,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_L����תXY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ȡͼ������_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG ����,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_ȡͼ������_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_������ת��_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR �ַ�������,
    /* [in] */ LONG ��ϵģʽ,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_������ת��_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GB2312תUTF8_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR GB2312�ַ���,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_GB2312תUTF8_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_UTF8תGB2312_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR UTF8�ַ���,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_UTF8תGB2312_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GB2312תBIG5_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR GB2312�ַ���,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_GB2312תBIG5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_BIG5תGB2312_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR BIG5�ַ���,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_BIG5תGB2312_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_UTF8תBIG5_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR UTF8�ַ���,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_UTF8תBIG5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_BIG5תUTF8_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR BIG5�ַ���,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_BIG5תUTF8_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�����ʼ��_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_�����ʼ��_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_����ر�_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_����ر�_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�����׽���_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ����,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_�����׽���_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_����ر��׽���_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG �׽���,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_����ر��׽���_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_��������_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG �׽���,
    /* [in] */ BSTR IP��ַ,
    /* [in] */ USHORT �˿�,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_��������_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�����_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG �׽���,
    /* [in] */ USHORT serv_port,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_�����_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�������_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG �׽���e,
    /* [in] */ LONG ncout,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_�������_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�������_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG �׽���,
    /* [out] */ VARIANT *nret,
    /* [retval][out] */ BSTR *serv_ip);


void __RPC_STUB ITLibPlusInterface_�������_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�������_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG �׽���,
    /* [retval][out] */ BSTR *Recvbuff);


void __RPC_STUB ITLibPlusInterface_�������_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_���緢��_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG �׽���,
    /* [in] */ BSTR ��������,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_���緢��_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_���緢�͵�_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG �׽���,
    /* [in] */ BSTR ��������,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_���緢�͵�_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_�����������_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG �׽���,
    /* [in] */ LONG ����,
    /* [in] */ BSTR IP��ַ,
    /* [in] */ USHORT rPort,
    /* [retval][out] */ BSTR *data);


void __RPC_STUB ITLibPlusInterface_�����������_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_��ȡIP_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG type,
    /* [in] */ BSTR param,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_��ȡIP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TEST_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG pvoid,
    /* [in] */ LONG count,
    /* [in] */ LONG p0,
    /* [in] */ LONG p1,
    /* [in] */ LONG p2,
    /* [in] */ LONG p3,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_TEST_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Ver_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ BSTR *retver);


void __RPC_STUB ITLibPlusInterface_Ver_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_InputBox_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ LONG Color,
    /* [in] */ BSTR szCaption,
    /* [in] */ BSTR szPrompt,
    /* [in] */ BSTR szDefaultText,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_InputBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AntiDebuger_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_AntiDebuger_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AntiVEHCallBack_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_AntiVEHCallBack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_InitExceptionCallback_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ LONG en,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_InitExceptionCallback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GetLastException_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_GetLastException_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Delay_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ ULONG s,
    /* [in] */ LONG en,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Delay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Exit_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR fileName,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Exit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Sizeof_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR type,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Sizeof_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_EnablePrivilege_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR dwPrivilege,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_EnablePrivilege_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_FreeProcessMemory_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_FreeProcessMemory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AsmAdd_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR asm_ins,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_AsmAdd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AsmCall_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hwnd,
    /* [in] */ LONG mode,
    /* [in] */ LONG timeout,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_AsmCall_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AsmClear_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_AsmClear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Assemble_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG base_addr,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_Assemble_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_DisAssemble_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR asm_code,
    /* [in] */ LONG base_addr,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_DisAssemble_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GetFindDataAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ BSTR strs,
    /* [out][in] */ VARIANT *pret,
    /* [retval][out] */ LONG *dwret);


void __RPC_STUB ITLibPlusInterface_GetFindDataAddr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ReadIntAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ LONGLONG addr,
    /* [in] */ LONG type,
    /* [retval][out] */ LONGLONG *nret);


void __RPC_STUB ITLibPlusInterface_ReadIntAddr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ReadDataAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hwnd,
    /* [in] */ LONGLONG addr,
    /* [in] */ LONG len,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ReadDataAddr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_WriteIntAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ LONGLONG addr,
    /* [in] */ LONG type,
    /* [in] */ LONGLONG value,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_WriteIntAddr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ReadIntTraverseAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hWnd,
    /* [in] */ LONGLONG addr,
    /* [in] */ LONGLONG offest,
    /* [in] */ LONG count,
    /* [in] */ LONG type,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ReadIntTraverseAddr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_WriteDataAddr_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG hwnd,
    /* [in] */ LONGLONG addr,
    /* [in] */ BSTR data,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_WriteDataAddr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Memset_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ VARIANT *_Dst,
    /* [in] */ LONG Val,
    /* [in] */ LONG Size,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Memset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Memcpy_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ VARIANT *_Dst,
    /* [in] */ VARIANT *_Src,
    /* [in] */ LONG Size,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Memcpy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_New_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR sztype,
    /* [in] */ LONG size,
    /* [retval][out] */ VARIANT *nret);


void __RPC_STUB ITLibPlusInterface_New_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Malloc_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR sztype,
    /* [in] */ LONG size,
    /* [retval][out] */ VARIANT *nret);


void __RPC_STUB ITLibPlusInterface_Malloc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Delete_Proxy( 
    ITLibPlusInterface * This,
    /* [out][in] */ VARIANT *_Block,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Deletes_Proxy( 
    ITLibPlusInterface * This,
    /* [out][in] */ VARIANT *_Block,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Deletes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Free_Proxy( 
    ITLibPlusInterface * This,
    /* [out][in] */ VARIANT *_Block,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Free_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Set_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ VARIANT *Pvoid,
    /* [in] */ BSTR type,
    /* [in] */ VARIANT *value,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Set_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Get_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ VARIANT *Pvoid,
    /* [in] */ BSTR type,
    /* [retval][out] */ VARIANT *nret);


void __RPC_STUB ITLibPlusInterface_Get_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Rand_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG MIN,
    /* [in] */ LONG MAX,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Rand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_RandDouble_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE DOUBLE_MIN,
    /* [in] */ DOUBLE DOUBLE_MAX,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_RandDouble_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ShiftRight_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [in] */ LONG _Radix,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_ShiftRight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ShiftLeft_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    LONG _Radix,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_ShiftLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_AND_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_AND_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_OR_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_OR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_XOR_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_XOR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NOT_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG a,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_NOT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_PI_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_PI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Acos_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Acos_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Acosh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Acosh_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Asin_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Asin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Asinh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Asinh_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Atan_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Atan_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Atan2_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _Y,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Atan2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Atanh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Atanh_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Cbrt_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Cbrt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Ceil_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Ceil_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Copysign_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _Number,
    /* [in] */ DOUBLE _Sign,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Copysign_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Cos_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Cos_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Cosh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Cosh_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Exp_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Exp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Exp2_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Exp2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Expm1_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Expm1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fabs_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Fabs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fdim_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Fdim_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Floor_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Floor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fma_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [in] */ DOUBLE _Z,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Fma_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fmax_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Fmax_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fmin_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Fmin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fmod_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Fmod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Frexp_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [out] */ VARIANT *_Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Frexp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Hypot_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Hypot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Ilogb_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Ilogb_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Ldexp_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ LONG _Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Ldexp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Log_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Log_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Log10_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Log10_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Log2_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Log2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Logb_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Logb_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Log1p_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Log1p_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Lrint_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Lrint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Lround_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Lround_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Modf_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE x,
    /* [out] */ VARIANT *intpart,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Modf_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Nan_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Nan_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Nearbyint_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Nearbyint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Nextafter_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Nextafter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Pow_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Pow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Remainder_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Remainder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Remquo_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ DOUBLE _Y,
    /* [out] */ VARIANT *_Z,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Remquo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Rint_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Rint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Round_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Round_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Scalbln_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ LONG _Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Scalbln_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Scalbn_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [in] */ LONG _Y,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Scalbn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Sin_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Sin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Sinh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Sinh_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Sqrt_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Sqrt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Tan_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Tan_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Tanh_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Tanh_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Trunc_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ DOUBLE _X,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_Trunc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayGetHighest_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ LONG en,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_ArrayGetHighest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayGetLowest_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ LONG en,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_ArrayGetLowest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayUniqueInt_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ArrayUniqueInt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayUnique_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ArrayUnique_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArraySortInt_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ LONG en,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ArraySortInt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArraySort_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ArraySort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayFilter_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ BSTR str,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ArrayFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayAlloc_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG dim,
    /* [in] */ BSTR szsize,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ArrayAlloc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayReverse_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ArrayReverse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayRotate_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ LONG mov,
    /* [in] */ LONG en,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ArrayRotate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ArrayShift_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR szArr,
    /* [in] */ LONG mov,
    /* [in] */ LONG en,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ArrayShift_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringSplit_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [in] */ BSTR delimit,
    /* [out] */ VARIANT *nret,
    /* [retval][out] */ BSTR *outs);


void __RPC_STUB ITLibPlusInterface_StringSplit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringSort_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_StringSort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringShuffle_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_StringShuffle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringUnique_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_StringUnique_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringReverse_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_StringReverse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringRotate_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [in] */ LONG mov,
    /* [in] */ LONG en,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_StringRotate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringShift_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR ins,
    /* [in] */ LONG mov,
    /* [in] */ LONG en,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_StringShift_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringXml2Json_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _Src,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_StringXml2Json_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringJson2Xml_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _Src,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_StringJson2Xml_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fwopen_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _FileName,
    /* [in] */ BSTR _Mode,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Fwopen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fseek_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _Stream,
    /* [in] */ LONG _Offset,
    /* [in] */ BSTR dst,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Fseek_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fread_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _ElementSize,
    /* [in] */ LONG _ElementCount,
    /* [in] */ LONG _Stream,
    /* [out] */ VARIANT *nret,
    /* [retval][out] */ BSTR *_Buffer);


void __RPC_STUB ITLibPlusInterface_Fread_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fwrite_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _Buffer,
    /* [in] */ LONG _ElementSize,
    /* [in] */ LONG _ElementCount,
    /* [in] */ LONG _Stream,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Fwrite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fgetws_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _Buffer,
    /* [in] */ LONG _BufferCount,
    LONG _Stream,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_Fgetws_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Fclose_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _Stream,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Fclose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Mmap_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _FileName,
    /* [out] */ VARIANT *dwret,
    /* [retval][out] */ BSTR *buf);


void __RPC_STUB ITLibPlusInterface_Mmap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_EnumIniSection_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _FileName,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_EnumIniSection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_EnumIniKey_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _Key,
    /* [in] */ BSTR _FileName,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_EnumIniKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_Swap_Proxy( 
    ITLibPlusInterface * This,
    /* [out][in] */ VARIANT *a,
    /* [out][in] */ VARIANT *b,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_Swap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_SwapByte_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BYTE a,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_SwapByte_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_SwapWord_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD a,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_SwapWord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_SwapLong_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG a,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_SwapLong_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_SwapInt64_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONGLONG a,
    /* [retval][out] */ LONGLONG *nret);


void __RPC_STUB ITLibPlusInterface_SwapInt64_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_XStringToL_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [in] */ LONG _Radix,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_XStringToL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_XStringToI64_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [in] */ LONG _Radix,
    /* [out][in] */ VARIANT *llret,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_XStringToI64_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringToL_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_StringToL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringToI64_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [out][in] */ VARIANT *llret,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_StringToI64_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_LToXString_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _Value,
    /* [in] */ LONG _Radix,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_LToXString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_I64ToXString_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONGLONG _Value,
    /* [in] */ LONG _Radix,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_I64ToXString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringToDbl_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_StringToDbl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_StringToFlt_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ FLOAT *fret);


void __RPC_STUB ITLibPlusInterface_StringToFlt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKEWORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG a,
    /* [in] */ LONG b,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_TMAKEWORD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKELONG_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG a,
    /* [in] */ LONG b,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_TMAKELONG_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TLOWORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_TLOWORD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_THIWORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_THIWORD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TLOBYTE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD w,
    /* [retval][out] */ BYTE *byret);


void __RPC_STUB ITLibPlusInterface_TLOBYTE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_THIBYTE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD w,
    /* [retval][out] */ BYTE *byret);


void __RPC_STUB ITLibPlusInterface_THIBYTE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TIS_INTRESOURCE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG _r,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_TIS_INTRESOURCE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKEINTRESOURCE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG i,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_TMAKEINTRESOURCE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKEWPARAM_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [in] */ LONG h,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_TMAKEWPARAM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKELPARAM_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [in] */ LONG h,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_TMAKELPARAM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKELRESULT_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [in] */ LONG h,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_TMAKELRESULT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKELANGID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG s,
    /* [in] */ LONG p,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_TMAKELANGID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TPRIMARYLANGID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG lgid,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_TPRIMARYLANGID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TSUBLANGID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG lgid,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_TSUBLANGID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKELCID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG srtid,
    /* [in] */ LONG lgid,
    /* [retval][out] */ DWORD *dwret);


void __RPC_STUB ITLibPlusInterface_TMAKELCID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TMAKEPOINTS_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG l,
    /* [out] */ VARIANT *x,
    /* [out] */ VARIANT *y,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_TMAKEPOINTS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_TINDEXTOSTATEIMAGEMASK_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG i,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_TINDEXTOSTATEIMAGEMASK_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_ConvertLanguage_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR str,
    /* [in] */ LONG type,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_ConvertLanguage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GB2312ToUTF8_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrGB2312,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_GB2312ToUTF8_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_UTF8ToGB2312_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrUTF8,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_UTF8ToGB2312_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GB2312ToBIG5_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrGB2312,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_GB2312ToBIG5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_BIG5ToGB2312_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrBIG5,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_BIG5ToGB2312_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_UTF8ToBIG5_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrUTF8,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_UTF8ToBIG5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_BIG5ToUTF8_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR pStrBIG5,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_BIG5ToUTF8_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetWSAStartup_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_NetWSAStartup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetClose_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_NetClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetSocket_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR sztype,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_NetSocket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetCloseSocket_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_NetCloseSocket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetConnect_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ BSTR serv_ip,
    /* [in] */ USHORT serv_port,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_NetConnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetBind_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ USHORT serv_port,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_NetBind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetListen_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ LONG ncout,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_NetListen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetAccept_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [out] */ VARIANT *nret,
    /* [retval][out] */ BSTR *serv_ip);


void __RPC_STUB ITLibPlusInterface_NetAccept_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetRecv_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [retval][out] */ BSTR *Recvbuff);


void __RPC_STUB ITLibPlusInterface_NetRecv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetSend_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ BSTR data,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_NetSend_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetSendTo_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ BSTR data,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_NetSendTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_NetRecvFrom_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG sockhandle,
    /* [in] */ LONG length,
    /* [in] */ BSTR serv_ip,
    /* [in] */ USHORT rPort,
    /* [retval][out] */ BSTR *data);


void __RPC_STUB ITLibPlusInterface_NetRecvFrom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GetIP_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG type,
    /* [in] */ BSTR param,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_GetIP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITLibPlusInterface_INTERFACE_DEFINED__ */



#ifndef __TLibPlusLib_LIBRARY_DEFINED__
#define __TLibPlusLib_LIBRARY_DEFINED__

/* library TLibPlusLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_TLibPlusLib;

EXTERN_C const CLSID CLSID_TLibPlusInterface;

#ifdef __cplusplus

class DECLSPEC_UUID("80b31569-7a7b-4bc1-b379-4c5e5f27d339")
TLibPlusInterface;
#endif
#endif /* __TLibPlusLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


