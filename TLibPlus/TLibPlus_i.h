

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

#pragma region 中文
#pragma region 系统
#pragma endregion
#pragma region 内存
#pragma endregion
#pragma region 计算
#pragma endregion
#pragma region 数组
#pragma endregion
#pragma region 字符串
#pragma endregion
#pragma region 文件
#pragma endregion
#pragma region 转换
#pragma endregion
#pragma region 网络
#pragma endregion
#pragma endregion
#pragma region 英文
#pragma region 系统
#pragma endregion
#pragma region 内存
#pragma endregion
#pragma region 计算
#pragma endregion
#pragma region 数组
#pragma endregion
#pragma region 字符串
#pragma endregion
#pragma region 文件
#pragma endregion
#pragma region 转换
#pragma endregion
#pragma region 网络TCP/UDP
#pragma endregion
#pragma endregion

EXTERN_C const IID IID_ITLibPlusInterface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b4a55b6f-59e3-4d0d-bc48-2995e66d93da")
    ITLibPlusInterface : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 版本( 
            /* [retval][out] */ BSTR *版本号) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 输入框( 
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONG 颜色,
            /* [in] */ BSTR 标题,
            /* [in] */ BSTR 显示文本,
            /* [in] */ BSTR 预设文本,
            /* [retval][out] */ BSTR *内容) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 扫描调试器( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 反向量化异常处理初始化( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 异常回调初始化( 
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONG 是否自动抛出,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 获取最后异常信息( 
            /* [retval][out] */ BSTR *异常类型) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 延时( 
            /* [in] */ ULONG 毫秒,
            /* [in] */ LONG 是否阻塞,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 退出( 
            /* [in] */ BSTR 资源目录,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取类型大小( 
            /* [in] */ BSTR 变量类型字符串,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 进程提权( 
            /* [in] */ BSTR 权限标识字符串,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 清理内存( 
            /* [in] */ LONG 窗口句柄,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 汇编加入( 
            /* [in] */ BSTR 字符串汇编代码,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 汇编注入( 
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONG 注入模式,
            /* [in] */ LONG 超时毫秒,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 汇编清空( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 汇编转十六进制机器码( 
            /* [in] */ LONG 十进制存放地址,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 十六进制机器码转汇编( 
            /* [in] */ BSTR 字符串汇编代码,
            /* [in] */ LONG 十进制存放地址,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存字符串取十进制地址( 
            /* [in] */ LONG 窗口句柄,
            /* [in] */ BSTR 字符串地址,
            /* [out][in] */ VARIANT *接收超長整形指針,
            /* [retval][out] */ LONG *dwret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存遍历读整数( 
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONGLONG 十进制地址,
            /* [in] */ LONGLONG 十进制偏移增量,
            /* [in] */ LONG 次数,
            /* [in] */ LONG 读取类型,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存读整数( 
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONGLONG 十进制地址,
            /* [in] */ LONG 读取类型,
            /* [retval][out] */ LONGLONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存读十六进制数据( 
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONGLONG 十进制地址,
            /* [in] */ LONG 长度,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存写整数( 
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONGLONG 十进制地址,
            /* [in] */ LONG 写入类型,
            /* [in] */ LONGLONG 写入数值,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存写十六进制数据( 
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONGLONG 十进制地址,
            /* [in] */ BSTR 十六进制字符串字节集,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存填充( 
            /* [in] */ VARIANT *目标地址,
            /* [in] */ LONG 填充数值,
            /* [in] */ LONG 大小,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存複製( 
            /* [in] */ VARIANT *目标地址,
            /* [in] */ VARIANT *来源地址,
            /* [in] */ LONG 大小,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存申请空间( 
            /* [in] */ BSTR 类型字符串,
            /* [in] */ LONG 大小,
            /* [retval][out] */ VARIANT *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存申请堆( 
            /* [in] */ BSTR 类型字符串,
            /* [in] */ LONG 大小,
            /* [retval][out] */ VARIANT *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存释放空间( 
            /* [out][in] */ VARIANT *指针,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存数组释放空间( 
            /* [out][in] */ VARIANT *指针,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存堆释放( 
            /* [out][in] */ VARIANT *指针,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 指针写( 
            /* [in] */ VARIANT *内存指针,
            /* [in] */ BSTR 类型,
            /* [in] */ VARIANT *写入数值,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 指针读( 
            /* [in] */ VARIANT *内存指针,
            /* [in] */ BSTR 类型,
            /* [retval][out] */ VARIANT *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 随机数( 
            /* [in] */ LONG 最小值,
            /* [in] */ LONG 最大值,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 随机浮点数( 
            /* [in] */ DOUBLE 浮点数_最小值,
            /* [in] */ DOUBLE 浮点数_最大值,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 位右移( 
            /* [in] */ LONG 数值,
            /* [in] */ LONG 移动量,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 位左移( 
            /* [in] */ LONG 数值,
            /* [in] */ LONG 移动量,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 位与( 
            /* [in] */ BSTR 格式字符串,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 位或( 
            /* [in] */ BSTR 格式字符串,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 位异或( 
            /* [in] */ BSTR 格式字符串,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 位反( 
            /* [in] */ LONG 数值,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 圆周率( 
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 反余弦( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 反双曲余弦( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 反正弦( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 反双曲正弦( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 反正切( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 坐标反正切( 
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 弧双曲正切( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 立方根( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数上限值( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 以y符返x( 
            /* [in] */ DOUBLE _Number,
            /* [in] */ DOUBLE _Sign,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 余弦( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 双曲余弦( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数幂指数( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数幂指数2底( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数幂指数x减1( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数绝对值( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数xy正差( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数下限值( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数x乘以y加z( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _Z,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数两数取最大( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数两数取最小( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数取余数( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数取尾数与指数( 
            /* [in] */ DOUBLE _X,
            /* [out] */ VARIANT *_Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数平方和的平方根( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数绝对值对数( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数x乘以2的e幂( 
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数取对数( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数取对数10底( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数取对数2底( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数取绝对值对数b( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数x加1对数( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数舍入整参数( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数四捨五入成整数( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数拆解整数与小数( 
            /* [in] */ DOUBLE x,
            /* [out] */ VARIANT *intpart,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取NaN值( 
            /* [in] */ BSTR _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数参数舍入( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数下一个表示值( 
            /* [in] */ DOUBLE _X,
            DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 求幂( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 求余数( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 求商( 
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [out] */ VARIANT *_Z,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数舍入参数( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数四捨五入至最接近整数位( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE x和FLT_RADX乘以n的乘积长整( 
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE x和FLT_RADX乘以n的乘积( 
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 正弦( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 双曲正弦( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 平方根( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取切线( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取双曲正切( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 浮点数符号截断( 
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 数组整型取最大( 
            /* [in] */ BSTR 数组字符串,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 数组整型取最小( 
            /* [in] */ BSTR 数组字符串,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 数组整型去重( 
            /* [in] */ BSTR 数组字符串,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 数组去重( 
            /* [in] */ BSTR 数组字符串,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 数组整型排序( 
            /* [in] */ BSTR 数组字符串,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 数组排序( 
            /* [in] */ BSTR 数组字符串,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 数组过滤( 
            /* [in] */ BSTR 数组字符串,
            /* [in] */ BSTR str,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 数组多维初始化( 
            /* [in] */ LONG 维数,
            /* [in] */ BSTR 大小,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 数组倒序( 
            /* [in] */ BSTR 数组字符串,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 数组旋转( 
            /* [in] */ BSTR 数组字符串,
            /* [in] */ LONG 移动量,
            /* [in] */ LONG 是否向右,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 数组移位( 
            /* [in] */ BSTR 数组字符串,
            /* [in] */ LONG 移动量,
            /* [in] */ LONG 是否向右,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 字符串分割( 
            /* [in] */ BSTR 字符串内容,
            /* [in] */ BSTR 分隔符,
            /* [out] */ VARIANT *返回数量,
            /* [retval][out] */ BSTR *outs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 字符串排序( 
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 字符串洗牌( 
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 字符串去重( 
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 字符串倒序( 
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 字符串旋转( 
            /* [in] */ BSTR 字符串内容,
            /* [in] */ LONG 移动量,
            /* [in] */ LONG 是否向右,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 字符串移位( 
            /* [in] */ BSTR 字符串内容,
            /* [in] */ LONG 移动量,
            /* [in] */ LONG 是否向右,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 字符串Xml转Json( 
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 字符串Json转Xml( 
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 文件流指针打开( 
            /* [in] */ BSTR 文件路径,
            /* [in] */ BSTR 模式字符串,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 文件流指针移动( 
            /* [in] */ LONG 文件指针,
            /* [in] */ LONG 位移量,
            /* [in] */ BSTR 起点常量字符串,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 文件流指针读取( 
            /* [in] */ LONG 字节大小,
            /* [in] */ LONG 数量,
            /* [in] */ LONG 文件指针,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *_Buffer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 文件流指针写入( 
            /* [in] */ LONG 内容,
            /* [in] */ LONG 字节大小,
            /* [in] */ LONG 数量,
            /* [in] */ LONG 文件指针,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 文件流指针複製( 
            /* [in] */ BSTR 内容,
            /* [in] */ LONG 複製数量,
            LONG 文件指针,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 文件流指针关闭( 
            /* [in] */ LONG 文件指针,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 内存映射( 
            /* [in] */ BSTR 文件路径,
            /* [out] */ VARIANT *返回字节数量,
            /* [retval][out] */ BSTR *buf) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 配置文件枚举小节( 
            /* [in] */ BSTR 文件路径,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 配置文件枚举键名( 
            /* [in] */ BSTR 节名,
            /* [in] */ BSTR 文件路径,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 交换变量( 
            /* [out][in] */ VARIANT *变量a,
            /* [out][in] */ VARIANT *变量b,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 交换高低4位( 
            /* [in] */ BYTE 变量,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 交换高低8位( 
            /* [in] */ WORD 变量,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 交换高低16位( 
            /* [in] */ LONG 变量,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 交换高低32位( 
            /* [in] */ LONGLONG 变量,
            /* [retval][out] */ LONGLONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 进制字符串转长整形( 
            /* [in] */ BSTR 某进制字符串,
            /* [in] */ LONG 进制数,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 进制字符串转超长整形( 
            /* [in] */ BSTR _String,
            /* [in] */ LONG _Radix,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 十进制字符串转十进制长整形( 
            /* [in] */ BSTR 整数字符串,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 十进制字符串转十进制超长整形( 
            /* [in] */ BSTR _String,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 十进制长整形转进制字符串( 
            /* [in] */ LONG 整数,
            /* [in] */ LONG 进制数,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 十进制超长整形进制转字符串( 
            /* [in] */ LONGLONG 超长整数,
            /* [in] */ LONG 进制数,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 字符串转双精度浮点数( 
            /* [in] */ BSTR _String,
            /* [retval][out] */ DOUBLE *dret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 字符串转浮点数( 
            /* [in] */ BSTR _String,
            /* [retval][out] */ FLOAT *fret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 转WORD( 
            /* [in] */ LONG 整数a,
            /* [in] */ LONG 整数b,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 转LONG( 
            /* [in] */ LONG 整数a,
            /* [in] */ LONG 整数b,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取低WORD( 
            /* [in] */ LONG 整数,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取高WORD( 
            /* [in] */ LONG 整数,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取低BYTE( 
            /* [in] */ WORD 短整数,
            /* [retval][out] */ BYTE *byret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取高BYTE( 
            /* [in] */ WORD 短整数,
            /* [retval][out] */ BYTE *byret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 是否资源标识符( 
            /* [in] */ LONG 整数,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 转资源管理类型( 
            /* [in] */ LONG 整数,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 转W参数( 
            /* [in] */ LONG 低位整数,
            /* [in] */ LONG 高位整数,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 转L参数( 
            /* [in] */ LONG 低位整数,
            /* [in] */ LONG 高位整数,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 转LRESULT( 
            /* [in] */ LONG 低位整数,
            /* [in] */ LONG 高位整数,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 转LGID( 
            /* [in] */ LONG 子语言标识符,
            /* [in] */ LONG 主语言标识符,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取主语言标识符( 
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取子语言标识符( 
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取LCID( 
            /* [in] */ LONG srtid,
            /* [in] */ LONG lgid,
            /* [retval][out] */ DWORD *dwret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE L参数转XY( 
            /* [in] */ LONG L参数,
            /* [out] */ VARIANT *返回X,
            /* [out] */ VARIANT *返回Y,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 取图像索引( 
            /* [in] */ LONG 整数,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 繁简体转换( 
            /* [in] */ BSTR 字符串内容,
            /* [in] */ LONG 语系模式,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GB2312转UTF8( 
            /* [in] */ BSTR GB2312字符串,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UTF8转GB2312( 
            /* [in] */ BSTR UTF8字符串,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GB2312转BIG5( 
            /* [in] */ BSTR GB2312字符串,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BIG5转GB2312( 
            /* [in] */ BSTR BIG5字符串,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UTF8转BIG5( 
            /* [in] */ BSTR UTF8字符串,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BIG5转UTF8( 
            /* [in] */ BSTR BIG5字符串,
            /* [retval][out] */ BSTR *retstring) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络初始化( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络关闭( 
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络套接字( 
            /* [in] */ BSTR 类型,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络关闭套接字( 
            /* [in] */ LONG 套接字,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络连接( 
            /* [in] */ LONG 套接字,
            /* [in] */ BSTR IP地址,
            /* [in] */ USHORT 端口,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络绑定( 
            /* [in] */ LONG 套接字,
            /* [in] */ USHORT serv_port,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络监听( 
            /* [in] */ LONG 套接字e,
            /* [in] */ LONG ncout,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络接受( 
            /* [in] */ LONG 套接字,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *serv_ip) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络接收( 
            /* [in] */ LONG 套接字,
            /* [retval][out] */ BSTR *Recvbuff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络发送( 
            /* [in] */ LONG 套接字,
            /* [in] */ BSTR 发送内容,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络发送到( 
            /* [in] */ LONG 套接字,
            /* [in] */ BSTR 发送内容,
            /* [retval][out] */ LONG *nret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 网络接收来自( 
            /* [in] */ LONG 套接字,
            /* [in] */ LONG 长度,
            /* [in] */ BSTR IP地址,
            /* [in] */ USHORT rPort,
            /* [retval][out] */ BSTR *data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE 获取IP( 
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
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 版本)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *版本 )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ BSTR *版本号);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 输入框)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *输入框 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONG 颜色,
            /* [in] */ BSTR 标题,
            /* [in] */ BSTR 显示文本,
            /* [in] */ BSTR 预设文本,
            /* [retval][out] */ BSTR *内容);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 扫描调试器)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *扫描调试器 )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 反向量化异常处理初始化)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *反向量化异常处理初始化 )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 异常回调初始化)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *异常回调初始化 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONG 是否自动抛出,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 获取最后异常信息)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *获取最后异常信息 )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ BSTR *异常类型);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 延时)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *延时 )( 
            ITLibPlusInterface * This,
            /* [in] */ ULONG 毫秒,
            /* [in] */ LONG 是否阻塞,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 退出)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *退出 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 资源目录,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取类型大小)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取类型大小 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 变量类型字符串,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 进程提权)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *进程提权 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 权限标识字符串,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 清理内存)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *清理内存 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 窗口句柄,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 汇编加入)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *汇编加入 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串汇编代码,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 汇编注入)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *汇编注入 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONG 注入模式,
            /* [in] */ LONG 超时毫秒,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 汇编清空)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *汇编清空 )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 汇编转十六进制机器码)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *汇编转十六进制机器码 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 十进制存放地址,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 十六进制机器码转汇编)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *十六进制机器码转汇编 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串汇编代码,
            /* [in] */ LONG 十进制存放地址,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存字符串取十进制地址)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存字符串取十进制地址 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 窗口句柄,
            /* [in] */ BSTR 字符串地址,
            /* [out][in] */ VARIANT *接收超長整形指針,
            /* [retval][out] */ LONG *dwret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存遍历读整数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存遍历读整数 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONGLONG 十进制地址,
            /* [in] */ LONGLONG 十进制偏移增量,
            /* [in] */ LONG 次数,
            /* [in] */ LONG 读取类型,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存读整数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存读整数 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONGLONG 十进制地址,
            /* [in] */ LONG 读取类型,
            /* [retval][out] */ LONGLONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存读十六进制数据)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存读十六进制数据 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONGLONG 十进制地址,
            /* [in] */ LONG 长度,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存写整数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存写整数 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONGLONG 十进制地址,
            /* [in] */ LONG 写入类型,
            /* [in] */ LONGLONG 写入数值,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存写十六进制数据)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存写十六进制数据 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 窗口句柄,
            /* [in] */ LONGLONG 十进制地址,
            /* [in] */ BSTR 十六进制字符串字节集,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存填充)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存填充 )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *目标地址,
            /* [in] */ LONG 填充数值,
            /* [in] */ LONG 大小,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存複製)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存複製 )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *目标地址,
            /* [in] */ VARIANT *来源地址,
            /* [in] */ LONG 大小,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存申请空间)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存申请空间 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 类型字符串,
            /* [in] */ LONG 大小,
            /* [retval][out] */ VARIANT *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存申请堆)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存申请堆 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 类型字符串,
            /* [in] */ LONG 大小,
            /* [retval][out] */ VARIANT *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存释放空间)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存释放空间 )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *指针,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存数组释放空间)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存数组释放空间 )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *指针,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存堆释放)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存堆释放 )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *指针,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 指针写)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *指针写 )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *内存指针,
            /* [in] */ BSTR 类型,
            /* [in] */ VARIANT *写入数值,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 指针读)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *指针读 )( 
            ITLibPlusInterface * This,
            /* [in] */ VARIANT *内存指针,
            /* [in] */ BSTR 类型,
            /* [retval][out] */ VARIANT *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 随机数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *随机数 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 最小值,
            /* [in] */ LONG 最大值,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 随机浮点数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *随机浮点数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE 浮点数_最小值,
            /* [in] */ DOUBLE 浮点数_最大值,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 位右移)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *位右移 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 数值,
            /* [in] */ LONG 移动量,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 位左移)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *位左移 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 数值,
            /* [in] */ LONG 移动量,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 位与)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *位与 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 格式字符串,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 位或)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *位或 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 格式字符串,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 位异或)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *位异或 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 格式字符串,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 位反)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *位反 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 数值,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 圆周率)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *圆周率 )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 反余弦)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *反余弦 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 反双曲余弦)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *反双曲余弦 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 反正弦)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *反正弦 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 反双曲正弦)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *反双曲正弦 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 反正切)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *反正切 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 坐标反正切)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *坐标反正切 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 弧双曲正切)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *弧双曲正切 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 立方根)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *立方根 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数上限值)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数上限值 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 以y符返x)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *以y符返x )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _Number,
            /* [in] */ DOUBLE _Sign,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 余弦)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *余弦 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 双曲余弦)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *双曲余弦 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数幂指数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数幂指数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数幂指数2底)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数幂指数2底 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数幂指数x减1)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数幂指数x减1 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数绝对值)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数绝对值 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数xy正差)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数xy正差 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数下限值)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数下限值 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数x乘以y加z)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数x乘以y加z )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [in] */ DOUBLE _Z,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数两数取最大)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数两数取最大 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数两数取最小)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数两数取最小 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数取余数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数取余数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数取尾数与指数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数取尾数与指数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [out] */ VARIANT *_Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数平方和的平方根)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数平方和的平方根 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数绝对值对数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数绝对值对数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数x乘以2的e幂)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数x乘以2的e幂 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数取对数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数取对数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数取对数10底)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数取对数10底 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数取对数2底)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数取对数2底 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数取绝对值对数b)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数取绝对值对数b )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数x加1对数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数x加1对数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数舍入整参数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数舍入整参数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数四捨五入成整数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数四捨五入成整数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数拆解整数与小数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数拆解整数与小数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE x,
            /* [out] */ VARIANT *intpart,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取NaN值)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取NaN值 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数参数舍入)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数参数舍入 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数下一个表示值)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数下一个表示值 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 求幂)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *求幂 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 求余数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *求余数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 求商)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *求商 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ DOUBLE _Y,
            /* [out] */ VARIANT *_Z,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数舍入参数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数舍入参数 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数四捨五入至最接近整数位)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数四捨五入至最接近整数位 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, x和FLT_RADX乘以n的乘积长整)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *x和FLT_RADX乘以n的乘积长整 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, x和FLT_RADX乘以n的乘积)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *x和FLT_RADX乘以n的乘积 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [in] */ LONG _Y,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 正弦)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *正弦 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 双曲正弦)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *双曲正弦 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 平方根)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *平方根 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取切线)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取切线 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取双曲正切)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取双曲正切 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 浮点数符号截断)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *浮点数符号截断 )( 
            ITLibPlusInterface * This,
            /* [in] */ DOUBLE _X,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 数组整型取最大)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *数组整型取最大 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 数组字符串,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 数组整型取最小)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *数组整型取最小 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 数组字符串,
            /* [in] */ LONG en,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 数组整型去重)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *数组整型去重 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 数组字符串,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 数组去重)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *数组去重 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 数组字符串,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 数组整型排序)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *数组整型排序 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 数组字符串,
            /* [in] */ LONG en,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 数组排序)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *数组排序 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 数组字符串,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 数组过滤)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *数组过滤 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 数组字符串,
            /* [in] */ BSTR str,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 数组多维初始化)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *数组多维初始化 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 维数,
            /* [in] */ BSTR 大小,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 数组倒序)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *数组倒序 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 数组字符串,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 数组旋转)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *数组旋转 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 数组字符串,
            /* [in] */ LONG 移动量,
            /* [in] */ LONG 是否向右,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 数组移位)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *数组移位 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 数组字符串,
            /* [in] */ LONG 移动量,
            /* [in] */ LONG 是否向右,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 字符串分割)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *字符串分割 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串内容,
            /* [in] */ BSTR 分隔符,
            /* [out] */ VARIANT *返回数量,
            /* [retval][out] */ BSTR *outs);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 字符串排序)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *字符串排序 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 字符串洗牌)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *字符串洗牌 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 字符串去重)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *字符串去重 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 字符串倒序)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *字符串倒序 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 字符串旋转)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *字符串旋转 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串内容,
            /* [in] */ LONG 移动量,
            /* [in] */ LONG 是否向右,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 字符串移位)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *字符串移位 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串内容,
            /* [in] */ LONG 移动量,
            /* [in] */ LONG 是否向右,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 字符串Xml转Json)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *字符串Xml转Json )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 字符串Json转Xml)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *字符串Json转Xml )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串内容,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 文件流指针打开)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *文件流指针打开 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 文件路径,
            /* [in] */ BSTR 模式字符串,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 文件流指针移动)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *文件流指针移动 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 文件指针,
            /* [in] */ LONG 位移量,
            /* [in] */ BSTR 起点常量字符串,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 文件流指针读取)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *文件流指针读取 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 字节大小,
            /* [in] */ LONG 数量,
            /* [in] */ LONG 文件指针,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *_Buffer);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 文件流指针写入)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *文件流指针写入 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 内容,
            /* [in] */ LONG 字节大小,
            /* [in] */ LONG 数量,
            /* [in] */ LONG 文件指针,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 文件流指针複製)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *文件流指针複製 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 内容,
            /* [in] */ LONG 複製数量,
            LONG 文件指针,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 文件流指针关闭)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *文件流指针关闭 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 文件指针,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 内存映射)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *内存映射 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 文件路径,
            /* [out] */ VARIANT *返回字节数量,
            /* [retval][out] */ BSTR *buf);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 配置文件枚举小节)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *配置文件枚举小节 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 文件路径,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 配置文件枚举键名)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *配置文件枚举键名 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 节名,
            /* [in] */ BSTR 文件路径,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 交换变量)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *交换变量 )( 
            ITLibPlusInterface * This,
            /* [out][in] */ VARIANT *变量a,
            /* [out][in] */ VARIANT *变量b,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 交换高低4位)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *交换高低4位 )( 
            ITLibPlusInterface * This,
            /* [in] */ BYTE 变量,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 交换高低8位)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *交换高低8位 )( 
            ITLibPlusInterface * This,
            /* [in] */ WORD 变量,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 交换高低16位)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *交换高低16位 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 变量,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 交换高低32位)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *交换高低32位 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONGLONG 变量,
            /* [retval][out] */ LONGLONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 进制字符串转长整形)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *进制字符串转长整形 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 某进制字符串,
            /* [in] */ LONG 进制数,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 进制字符串转超长整形)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *进制字符串转超长整形 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [in] */ LONG _Radix,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 十进制字符串转十进制长整形)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *十进制字符串转十进制长整形 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 整数字符串,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 十进制字符串转十进制超长整形)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *十进制字符串转十进制超长整形 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [out][in] */ VARIANT *llret,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 十进制长整形转进制字符串)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *十进制长整形转进制字符串 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 整数,
            /* [in] */ LONG 进制数,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 十进制超长整形进制转字符串)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *十进制超长整形进制转字符串 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONGLONG 超长整数,
            /* [in] */ LONG 进制数,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 字符串转双精度浮点数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *字符串转双精度浮点数 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [retval][out] */ DOUBLE *dret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 字符串转浮点数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *字符串转浮点数 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR _String,
            /* [retval][out] */ FLOAT *fret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 转WORD)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *转WORD )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 整数a,
            /* [in] */ LONG 整数b,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 转LONG)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *转LONG )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 整数a,
            /* [in] */ LONG 整数b,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取低WORD)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取低WORD )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 整数,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取高WORD)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取高WORD )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 整数,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取低BYTE)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取低BYTE )( 
            ITLibPlusInterface * This,
            /* [in] */ WORD 短整数,
            /* [retval][out] */ BYTE *byret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取高BYTE)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取高BYTE )( 
            ITLibPlusInterface * This,
            /* [in] */ WORD 短整数,
            /* [retval][out] */ BYTE *byret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 是否资源标识符)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *是否资源标识符 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 整数,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 转资源管理类型)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *转资源管理类型 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 整数,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 转W参数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *转W参数 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 低位整数,
            /* [in] */ LONG 高位整数,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 转L参数)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *转L参数 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 低位整数,
            /* [in] */ LONG 高位整数,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 转LRESULT)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *转LRESULT )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 低位整数,
            /* [in] */ LONG 高位整数,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 转LGID)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *转LGID )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 子语言标识符,
            /* [in] */ LONG 主语言标识符,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取主语言标识符)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取主语言标识符 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取子语言标识符)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取子语言标识符 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG lgid,
            /* [retval][out] */ WORD *wret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取LCID)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取LCID )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG srtid,
            /* [in] */ LONG lgid,
            /* [retval][out] */ DWORD *dwret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, L参数转XY)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *L参数转XY )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG L参数,
            /* [out] */ VARIANT *返回X,
            /* [out] */ VARIANT *返回Y,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 取图像索引)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *取图像索引 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 整数,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 繁简体转换)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *繁简体转换 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 字符串内容,
            /* [in] */ LONG 语系模式,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, GB2312转UTF8)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GB2312转UTF8 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR GB2312字符串,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, UTF8转GB2312)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UTF8转GB2312 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR UTF8字符串,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, GB2312转BIG5)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GB2312转BIG5 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR GB2312字符串,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, BIG5转GB2312)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BIG5转GB2312 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR BIG5字符串,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, UTF8转BIG5)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UTF8转BIG5 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR UTF8字符串,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, BIG5转UTF8)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BIG5转UTF8 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR BIG5字符串,
            /* [retval][out] */ BSTR *retstring);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络初始化)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络初始化 )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络关闭)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络关闭 )( 
            ITLibPlusInterface * This,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络套接字)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络套接字 )( 
            ITLibPlusInterface * This,
            /* [in] */ BSTR 类型,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络关闭套接字)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络关闭套接字 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 套接字,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络连接)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络连接 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 套接字,
            /* [in] */ BSTR IP地址,
            /* [in] */ USHORT 端口,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络绑定)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络绑定 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 套接字,
            /* [in] */ USHORT serv_port,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络监听)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络监听 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 套接字e,
            /* [in] */ LONG ncout,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络接受)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络接受 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 套接字,
            /* [out] */ VARIANT *nret,
            /* [retval][out] */ BSTR *serv_ip);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络接收)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络接收 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 套接字,
            /* [retval][out] */ BSTR *Recvbuff);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络发送)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络发送 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 套接字,
            /* [in] */ BSTR 发送内容,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络发送到)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络发送到 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 套接字,
            /* [in] */ BSTR 发送内容,
            /* [retval][out] */ LONG *nret);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 网络接收来自)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *网络接收来自 )( 
            ITLibPlusInterface * This,
            /* [in] */ LONG 套接字,
            /* [in] */ LONG 长度,
            /* [in] */ BSTR IP地址,
            /* [in] */ USHORT rPort,
            /* [retval][out] */ BSTR *data);
        
        DECLSPEC_XFGVIRT(ITLibPlusInterface, 获取IP)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *获取IP )( 
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


#define ITLibPlusInterface_版本(This,版本号)	\
    ( (This)->lpVtbl -> 版本(This,版本号) ) 

#define ITLibPlusInterface_输入框(This,窗口句柄,颜色,标题,显示文本,预设文本,内容)	\
    ( (This)->lpVtbl -> 输入框(This,窗口句柄,颜色,标题,显示文本,预设文本,内容) ) 

#define ITLibPlusInterface_扫描调试器(This,nret)	\
    ( (This)->lpVtbl -> 扫描调试器(This,nret) ) 

#define ITLibPlusInterface_反向量化异常处理初始化(This,nret)	\
    ( (This)->lpVtbl -> 反向量化异常处理初始化(This,nret) ) 

#define ITLibPlusInterface_异常回调初始化(This,窗口句柄,是否自动抛出,nret)	\
    ( (This)->lpVtbl -> 异常回调初始化(This,窗口句柄,是否自动抛出,nret) ) 

#define ITLibPlusInterface_获取最后异常信息(This,异常类型)	\
    ( (This)->lpVtbl -> 获取最后异常信息(This,异常类型) ) 

#define ITLibPlusInterface_延时(This,毫秒,是否阻塞,nret)	\
    ( (This)->lpVtbl -> 延时(This,毫秒,是否阻塞,nret) ) 

#define ITLibPlusInterface_退出(This,资源目录,nret)	\
    ( (This)->lpVtbl -> 退出(This,资源目录,nret) ) 

#define ITLibPlusInterface_取类型大小(This,变量类型字符串,nret)	\
    ( (This)->lpVtbl -> 取类型大小(This,变量类型字符串,nret) ) 

#define ITLibPlusInterface_进程提权(This,权限标识字符串,nret)	\
    ( (This)->lpVtbl -> 进程提权(This,权限标识字符串,nret) ) 

#define ITLibPlusInterface_清理内存(This,窗口句柄,nret)	\
    ( (This)->lpVtbl -> 清理内存(This,窗口句柄,nret) ) 

#define ITLibPlusInterface_汇编加入(This,字符串汇编代码,nret)	\
    ( (This)->lpVtbl -> 汇编加入(This,字符串汇编代码,nret) ) 

#define ITLibPlusInterface_汇编注入(This,窗口句柄,注入模式,超时毫秒,nret)	\
    ( (This)->lpVtbl -> 汇编注入(This,窗口句柄,注入模式,超时毫秒,nret) ) 

#define ITLibPlusInterface_汇编清空(This,nret)	\
    ( (This)->lpVtbl -> 汇编清空(This,nret) ) 

#define ITLibPlusInterface_汇编转十六进制机器码(This,十进制存放地址,retstring)	\
    ( (This)->lpVtbl -> 汇编转十六进制机器码(This,十进制存放地址,retstring) ) 

#define ITLibPlusInterface_十六进制机器码转汇编(This,字符串汇编代码,十进制存放地址,retstring)	\
    ( (This)->lpVtbl -> 十六进制机器码转汇编(This,字符串汇编代码,十进制存放地址,retstring) ) 

#define ITLibPlusInterface_内存字符串取十进制地址(This,窗口句柄,字符串地址,接收超長整形指針,dwret)	\
    ( (This)->lpVtbl -> 内存字符串取十进制地址(This,窗口句柄,字符串地址,接收超長整形指針,dwret) ) 

#define ITLibPlusInterface_内存遍历读整数(This,窗口句柄,十进制地址,十进制偏移增量,次数,读取类型,retstring)	\
    ( (This)->lpVtbl -> 内存遍历读整数(This,窗口句柄,十进制地址,十进制偏移增量,次数,读取类型,retstring) ) 

#define ITLibPlusInterface_内存读整数(This,窗口句柄,十进制地址,读取类型,nret)	\
    ( (This)->lpVtbl -> 内存读整数(This,窗口句柄,十进制地址,读取类型,nret) ) 

#define ITLibPlusInterface_内存读十六进制数据(This,窗口句柄,十进制地址,长度,retstring)	\
    ( (This)->lpVtbl -> 内存读十六进制数据(This,窗口句柄,十进制地址,长度,retstring) ) 

#define ITLibPlusInterface_内存写整数(This,窗口句柄,十进制地址,写入类型,写入数值,nret)	\
    ( (This)->lpVtbl -> 内存写整数(This,窗口句柄,十进制地址,写入类型,写入数值,nret) ) 

#define ITLibPlusInterface_内存写十六进制数据(This,窗口句柄,十进制地址,十六进制字符串字节集,nret)	\
    ( (This)->lpVtbl -> 内存写十六进制数据(This,窗口句柄,十进制地址,十六进制字符串字节集,nret) ) 

#define ITLibPlusInterface_内存填充(This,目标地址,填充数值,大小,nret)	\
    ( (This)->lpVtbl -> 内存填充(This,目标地址,填充数值,大小,nret) ) 

#define ITLibPlusInterface_内存複製(This,目标地址,来源地址,大小,nret)	\
    ( (This)->lpVtbl -> 内存複製(This,目标地址,来源地址,大小,nret) ) 

#define ITLibPlusInterface_内存申请空间(This,类型字符串,大小,nret)	\
    ( (This)->lpVtbl -> 内存申请空间(This,类型字符串,大小,nret) ) 

#define ITLibPlusInterface_内存申请堆(This,类型字符串,大小,nret)	\
    ( (This)->lpVtbl -> 内存申请堆(This,类型字符串,大小,nret) ) 

#define ITLibPlusInterface_内存释放空间(This,指针,nret)	\
    ( (This)->lpVtbl -> 内存释放空间(This,指针,nret) ) 

#define ITLibPlusInterface_内存数组释放空间(This,指针,nret)	\
    ( (This)->lpVtbl -> 内存数组释放空间(This,指针,nret) ) 

#define ITLibPlusInterface_内存堆释放(This,指针,nret)	\
    ( (This)->lpVtbl -> 内存堆释放(This,指针,nret) ) 

#define ITLibPlusInterface_指针写(This,内存指针,类型,写入数值,nret)	\
    ( (This)->lpVtbl -> 指针写(This,内存指针,类型,写入数值,nret) ) 

#define ITLibPlusInterface_指针读(This,内存指针,类型,nret)	\
    ( (This)->lpVtbl -> 指针读(This,内存指针,类型,nret) ) 

#define ITLibPlusInterface_随机数(This,最小值,最大值,nret)	\
    ( (This)->lpVtbl -> 随机数(This,最小值,最大值,nret) ) 

#define ITLibPlusInterface_随机浮点数(This,浮点数_最小值,浮点数_最大值,dret)	\
    ( (This)->lpVtbl -> 随机浮点数(This,浮点数_最小值,浮点数_最大值,dret) ) 

#define ITLibPlusInterface_位右移(This,数值,移动量,nret)	\
    ( (This)->lpVtbl -> 位右移(This,数值,移动量,nret) ) 

#define ITLibPlusInterface_位左移(This,数值,移动量,nret)	\
    ( (This)->lpVtbl -> 位左移(This,数值,移动量,nret) ) 

#define ITLibPlusInterface_位与(This,格式字符串,nret)	\
    ( (This)->lpVtbl -> 位与(This,格式字符串,nret) ) 

#define ITLibPlusInterface_位或(This,格式字符串,nret)	\
    ( (This)->lpVtbl -> 位或(This,格式字符串,nret) ) 

#define ITLibPlusInterface_位异或(This,格式字符串,nret)	\
    ( (This)->lpVtbl -> 位异或(This,格式字符串,nret) ) 

#define ITLibPlusInterface_位反(This,数值,nret)	\
    ( (This)->lpVtbl -> 位反(This,数值,nret) ) 

#define ITLibPlusInterface_圆周率(This,dret)	\
    ( (This)->lpVtbl -> 圆周率(This,dret) ) 

#define ITLibPlusInterface_反余弦(This,_X,dret)	\
    ( (This)->lpVtbl -> 反余弦(This,_X,dret) ) 

#define ITLibPlusInterface_反双曲余弦(This,_X,dret)	\
    ( (This)->lpVtbl -> 反双曲余弦(This,_X,dret) ) 

#define ITLibPlusInterface_反正弦(This,_X,dret)	\
    ( (This)->lpVtbl -> 反正弦(This,_X,dret) ) 

#define ITLibPlusInterface_反双曲正弦(This,_X,dret)	\
    ( (This)->lpVtbl -> 反双曲正弦(This,_X,dret) ) 

#define ITLibPlusInterface_反正切(This,_X,dret)	\
    ( (This)->lpVtbl -> 反正切(This,_X,dret) ) 

#define ITLibPlusInterface_坐标反正切(This,_Y,_X,dret)	\
    ( (This)->lpVtbl -> 坐标反正切(This,_Y,_X,dret) ) 

#define ITLibPlusInterface_弧双曲正切(This,_X,dret)	\
    ( (This)->lpVtbl -> 弧双曲正切(This,_X,dret) ) 

#define ITLibPlusInterface_立方根(This,_X,dret)	\
    ( (This)->lpVtbl -> 立方根(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数上限值(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数上限值(This,_X,dret) ) 

#define ITLibPlusInterface_以y符返x(This,_Number,_Sign,dret)	\
    ( (This)->lpVtbl -> 以y符返x(This,_Number,_Sign,dret) ) 

#define ITLibPlusInterface_余弦(This,_X,dret)	\
    ( (This)->lpVtbl -> 余弦(This,_X,dret) ) 

#define ITLibPlusInterface_双曲余弦(This,_X,dret)	\
    ( (This)->lpVtbl -> 双曲余弦(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数幂指数(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数幂指数(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数幂指数2底(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数幂指数2底(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数幂指数x减1(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数幂指数x减1(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数绝对值(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数绝对值(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数xy正差(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> 浮点数xy正差(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_浮点数下限值(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数下限值(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数x乘以y加z(This,_X,_Y,_Z,dret)	\
    ( (This)->lpVtbl -> 浮点数x乘以y加z(This,_X,_Y,_Z,dret) ) 

#define ITLibPlusInterface_浮点数两数取最大(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> 浮点数两数取最大(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_浮点数两数取最小(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> 浮点数两数取最小(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_浮点数取余数(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> 浮点数取余数(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_浮点数取尾数与指数(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> 浮点数取尾数与指数(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_浮点数平方和的平方根(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> 浮点数平方和的平方根(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_浮点数绝对值对数(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数绝对值对数(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数x乘以2的e幂(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> 浮点数x乘以2的e幂(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_浮点数取对数(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数取对数(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数取对数10底(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数取对数10底(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数取对数2底(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数取对数2底(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数取绝对值对数b(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数取绝对值对数b(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数x加1对数(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数x加1对数(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数舍入整参数(This,_X,nret)	\
    ( (This)->lpVtbl -> 浮点数舍入整参数(This,_X,nret) ) 

#define ITLibPlusInterface_浮点数四捨五入成整数(This,_X,nret)	\
    ( (This)->lpVtbl -> 浮点数四捨五入成整数(This,_X,nret) ) 

#define ITLibPlusInterface_浮点数拆解整数与小数(This,x,intpart,dret)	\
    ( (This)->lpVtbl -> 浮点数拆解整数与小数(This,x,intpart,dret) ) 

#define ITLibPlusInterface_取NaN值(This,_X,dret)	\
    ( (This)->lpVtbl -> 取NaN值(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数参数舍入(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数参数舍入(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数下一个表示值(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> 浮点数下一个表示值(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_求幂(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> 求幂(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_求余数(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> 求余数(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_求商(This,_X,_Y,_Z,dret)	\
    ( (This)->lpVtbl -> 求商(This,_X,_Y,_Z,dret) ) 

#define ITLibPlusInterface_浮点数舍入参数(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数舍入参数(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数四捨五入至最接近整数位(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数四捨五入至最接近整数位(This,_X,dret) ) 

#define ITLibPlusInterface_x和FLT_RADX乘以n的乘积长整(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> x和FLT_RADX乘以n的乘积长整(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_x和FLT_RADX乘以n的乘积(This,_X,_Y,dret)	\
    ( (This)->lpVtbl -> x和FLT_RADX乘以n的乘积(This,_X,_Y,dret) ) 

#define ITLibPlusInterface_正弦(This,_X,dret)	\
    ( (This)->lpVtbl -> 正弦(This,_X,dret) ) 

#define ITLibPlusInterface_双曲正弦(This,_X,dret)	\
    ( (This)->lpVtbl -> 双曲正弦(This,_X,dret) ) 

#define ITLibPlusInterface_平方根(This,_X,dret)	\
    ( (This)->lpVtbl -> 平方根(This,_X,dret) ) 

#define ITLibPlusInterface_取切线(This,_X,dret)	\
    ( (This)->lpVtbl -> 取切线(This,_X,dret) ) 

#define ITLibPlusInterface_取双曲正切(This,_X,dret)	\
    ( (This)->lpVtbl -> 取双曲正切(This,_X,dret) ) 

#define ITLibPlusInterface_浮点数符号截断(This,_X,dret)	\
    ( (This)->lpVtbl -> 浮点数符号截断(This,_X,dret) ) 

#define ITLibPlusInterface_数组整型取最大(This,数组字符串,en,nret)	\
    ( (This)->lpVtbl -> 数组整型取最大(This,数组字符串,en,nret) ) 

#define ITLibPlusInterface_数组整型取最小(This,数组字符串,en,nret)	\
    ( (This)->lpVtbl -> 数组整型取最小(This,数组字符串,en,nret) ) 

#define ITLibPlusInterface_数组整型去重(This,数组字符串,retstring)	\
    ( (This)->lpVtbl -> 数组整型去重(This,数组字符串,retstring) ) 

#define ITLibPlusInterface_数组去重(This,数组字符串,retstring)	\
    ( (This)->lpVtbl -> 数组去重(This,数组字符串,retstring) ) 

#define ITLibPlusInterface_数组整型排序(This,数组字符串,en,retstring)	\
    ( (This)->lpVtbl -> 数组整型排序(This,数组字符串,en,retstring) ) 

#define ITLibPlusInterface_数组排序(This,数组字符串,retstring)	\
    ( (This)->lpVtbl -> 数组排序(This,数组字符串,retstring) ) 

#define ITLibPlusInterface_数组过滤(This,数组字符串,str,retstring)	\
    ( (This)->lpVtbl -> 数组过滤(This,数组字符串,str,retstring) ) 

#define ITLibPlusInterface_数组多维初始化(This,维数,大小,retstring)	\
    ( (This)->lpVtbl -> 数组多维初始化(This,维数,大小,retstring) ) 

#define ITLibPlusInterface_数组倒序(This,数组字符串,retstring)	\
    ( (This)->lpVtbl -> 数组倒序(This,数组字符串,retstring) ) 

#define ITLibPlusInterface_数组旋转(This,数组字符串,移动量,是否向右,retstring)	\
    ( (This)->lpVtbl -> 数组旋转(This,数组字符串,移动量,是否向右,retstring) ) 

#define ITLibPlusInterface_数组移位(This,数组字符串,移动量,是否向右,retstring)	\
    ( (This)->lpVtbl -> 数组移位(This,数组字符串,移动量,是否向右,retstring) ) 

#define ITLibPlusInterface_字符串分割(This,字符串内容,分隔符,返回数量,outs)	\
    ( (This)->lpVtbl -> 字符串分割(This,字符串内容,分隔符,返回数量,outs) ) 

#define ITLibPlusInterface_字符串排序(This,字符串内容,retstring)	\
    ( (This)->lpVtbl -> 字符串排序(This,字符串内容,retstring) ) 

#define ITLibPlusInterface_字符串洗牌(This,字符串内容,retstring)	\
    ( (This)->lpVtbl -> 字符串洗牌(This,字符串内容,retstring) ) 

#define ITLibPlusInterface_字符串去重(This,字符串内容,retstring)	\
    ( (This)->lpVtbl -> 字符串去重(This,字符串内容,retstring) ) 

#define ITLibPlusInterface_字符串倒序(This,字符串内容,retstring)	\
    ( (This)->lpVtbl -> 字符串倒序(This,字符串内容,retstring) ) 

#define ITLibPlusInterface_字符串旋转(This,字符串内容,移动量,是否向右,retstring)	\
    ( (This)->lpVtbl -> 字符串旋转(This,字符串内容,移动量,是否向右,retstring) ) 

#define ITLibPlusInterface_字符串移位(This,字符串内容,移动量,是否向右,retstring)	\
    ( (This)->lpVtbl -> 字符串移位(This,字符串内容,移动量,是否向右,retstring) ) 

#define ITLibPlusInterface_字符串Xml转Json(This,字符串内容,retstring)	\
    ( (This)->lpVtbl -> 字符串Xml转Json(This,字符串内容,retstring) ) 

#define ITLibPlusInterface_字符串Json转Xml(This,字符串内容,retstring)	\
    ( (This)->lpVtbl -> 字符串Json转Xml(This,字符串内容,retstring) ) 

#define ITLibPlusInterface_文件流指针打开(This,文件路径,模式字符串,nret)	\
    ( (This)->lpVtbl -> 文件流指针打开(This,文件路径,模式字符串,nret) ) 

#define ITLibPlusInterface_文件流指针移动(This,文件指针,位移量,起点常量字符串,nret)	\
    ( (This)->lpVtbl -> 文件流指针移动(This,文件指针,位移量,起点常量字符串,nret) ) 

#define ITLibPlusInterface_文件流指针读取(This,字节大小,数量,文件指针,nret,_Buffer)	\
    ( (This)->lpVtbl -> 文件流指针读取(This,字节大小,数量,文件指针,nret,_Buffer) ) 

#define ITLibPlusInterface_文件流指针写入(This,内容,字节大小,数量,文件指针,nret)	\
    ( (This)->lpVtbl -> 文件流指针写入(This,内容,字节大小,数量,文件指针,nret) ) 

#define ITLibPlusInterface_文件流指针複製(This,内容,複製数量,文件指针,retstring)	\
    ( (This)->lpVtbl -> 文件流指针複製(This,内容,複製数量,文件指针,retstring) ) 

#define ITLibPlusInterface_文件流指针关闭(This,文件指针,nret)	\
    ( (This)->lpVtbl -> 文件流指针关闭(This,文件指针,nret) ) 

#define ITLibPlusInterface_内存映射(This,文件路径,返回字节数量,buf)	\
    ( (This)->lpVtbl -> 内存映射(This,文件路径,返回字节数量,buf) ) 

#define ITLibPlusInterface_配置文件枚举小节(This,文件路径,retstring)	\
    ( (This)->lpVtbl -> 配置文件枚举小节(This,文件路径,retstring) ) 

#define ITLibPlusInterface_配置文件枚举键名(This,节名,文件路径,retstring)	\
    ( (This)->lpVtbl -> 配置文件枚举键名(This,节名,文件路径,retstring) ) 

#define ITLibPlusInterface_交换变量(This,变量a,变量b,nret)	\
    ( (This)->lpVtbl -> 交换变量(This,变量a,变量b,nret) ) 

#define ITLibPlusInterface_交换高低4位(This,变量,nret)	\
    ( (This)->lpVtbl -> 交换高低4位(This,变量,nret) ) 

#define ITLibPlusInterface_交换高低8位(This,变量,nret)	\
    ( (This)->lpVtbl -> 交换高低8位(This,变量,nret) ) 

#define ITLibPlusInterface_交换高低16位(This,变量,nret)	\
    ( (This)->lpVtbl -> 交换高低16位(This,变量,nret) ) 

#define ITLibPlusInterface_交换高低32位(This,变量,nret)	\
    ( (This)->lpVtbl -> 交换高低32位(This,变量,nret) ) 

#define ITLibPlusInterface_进制字符串转长整形(This,某进制字符串,进制数,nret)	\
    ( (This)->lpVtbl -> 进制字符串转长整形(This,某进制字符串,进制数,nret) ) 

#define ITLibPlusInterface_进制字符串转超长整形(This,_String,_Radix,llret,nret)	\
    ( (This)->lpVtbl -> 进制字符串转超长整形(This,_String,_Radix,llret,nret) ) 

#define ITLibPlusInterface_十进制字符串转十进制长整形(This,整数字符串,nret)	\
    ( (This)->lpVtbl -> 十进制字符串转十进制长整形(This,整数字符串,nret) ) 

#define ITLibPlusInterface_十进制字符串转十进制超长整形(This,_String,llret,nret)	\
    ( (This)->lpVtbl -> 十进制字符串转十进制超长整形(This,_String,llret,nret) ) 

#define ITLibPlusInterface_十进制长整形转进制字符串(This,整数,进制数,retstring)	\
    ( (This)->lpVtbl -> 十进制长整形转进制字符串(This,整数,进制数,retstring) ) 

#define ITLibPlusInterface_十进制超长整形进制转字符串(This,超长整数,进制数,retstring)	\
    ( (This)->lpVtbl -> 十进制超长整形进制转字符串(This,超长整数,进制数,retstring) ) 

#define ITLibPlusInterface_字符串转双精度浮点数(This,_String,dret)	\
    ( (This)->lpVtbl -> 字符串转双精度浮点数(This,_String,dret) ) 

#define ITLibPlusInterface_字符串转浮点数(This,_String,fret)	\
    ( (This)->lpVtbl -> 字符串转浮点数(This,_String,fret) ) 

#define ITLibPlusInterface_转WORD(This,整数a,整数b,wret)	\
    ( (This)->lpVtbl -> 转WORD(This,整数a,整数b,wret) ) 

#define ITLibPlusInterface_转LONG(This,整数a,整数b,nret)	\
    ( (This)->lpVtbl -> 转LONG(This,整数a,整数b,nret) ) 

#define ITLibPlusInterface_取低WORD(This,整数,wret)	\
    ( (This)->lpVtbl -> 取低WORD(This,整数,wret) ) 

#define ITLibPlusInterface_取高WORD(This,整数,wret)	\
    ( (This)->lpVtbl -> 取高WORD(This,整数,wret) ) 

#define ITLibPlusInterface_取低BYTE(This,短整数,byret)	\
    ( (This)->lpVtbl -> 取低BYTE(This,短整数,byret) ) 

#define ITLibPlusInterface_取高BYTE(This,短整数,byret)	\
    ( (This)->lpVtbl -> 取高BYTE(This,短整数,byret) ) 

#define ITLibPlusInterface_是否资源标识符(This,整数,nret)	\
    ( (This)->lpVtbl -> 是否资源标识符(This,整数,nret) ) 

#define ITLibPlusInterface_转资源管理类型(This,整数,retstring)	\
    ( (This)->lpVtbl -> 转资源管理类型(This,整数,retstring) ) 

#define ITLibPlusInterface_转W参数(This,低位整数,高位整数,nret)	\
    ( (This)->lpVtbl -> 转W参数(This,低位整数,高位整数,nret) ) 

#define ITLibPlusInterface_转L参数(This,低位整数,高位整数,nret)	\
    ( (This)->lpVtbl -> 转L参数(This,低位整数,高位整数,nret) ) 

#define ITLibPlusInterface_转LRESULT(This,低位整数,高位整数,nret)	\
    ( (This)->lpVtbl -> 转LRESULT(This,低位整数,高位整数,nret) ) 

#define ITLibPlusInterface_转LGID(This,子语言标识符,主语言标识符,wret)	\
    ( (This)->lpVtbl -> 转LGID(This,子语言标识符,主语言标识符,wret) ) 

#define ITLibPlusInterface_取主语言标识符(This,lgid,wret)	\
    ( (This)->lpVtbl -> 取主语言标识符(This,lgid,wret) ) 

#define ITLibPlusInterface_取子语言标识符(This,lgid,wret)	\
    ( (This)->lpVtbl -> 取子语言标识符(This,lgid,wret) ) 

#define ITLibPlusInterface_取LCID(This,srtid,lgid,dwret)	\
    ( (This)->lpVtbl -> 取LCID(This,srtid,lgid,dwret) ) 

#define ITLibPlusInterface_L参数转XY(This,L参数,返回X,返回Y,nret)	\
    ( (This)->lpVtbl -> L参数转XY(This,L参数,返回X,返回Y,nret) ) 

#define ITLibPlusInterface_取图像索引(This,整数,nret)	\
    ( (This)->lpVtbl -> 取图像索引(This,整数,nret) ) 

#define ITLibPlusInterface_繁简体转换(This,字符串内容,语系模式,retstring)	\
    ( (This)->lpVtbl -> 繁简体转换(This,字符串内容,语系模式,retstring) ) 

#define ITLibPlusInterface_GB2312转UTF8(This,GB2312字符串,retstring)	\
    ( (This)->lpVtbl -> GB2312转UTF8(This,GB2312字符串,retstring) ) 

#define ITLibPlusInterface_UTF8转GB2312(This,UTF8字符串,retstring)	\
    ( (This)->lpVtbl -> UTF8转GB2312(This,UTF8字符串,retstring) ) 

#define ITLibPlusInterface_GB2312转BIG5(This,GB2312字符串,retstring)	\
    ( (This)->lpVtbl -> GB2312转BIG5(This,GB2312字符串,retstring) ) 

#define ITLibPlusInterface_BIG5转GB2312(This,BIG5字符串,retstring)	\
    ( (This)->lpVtbl -> BIG5转GB2312(This,BIG5字符串,retstring) ) 

#define ITLibPlusInterface_UTF8转BIG5(This,UTF8字符串,retstring)	\
    ( (This)->lpVtbl -> UTF8转BIG5(This,UTF8字符串,retstring) ) 

#define ITLibPlusInterface_BIG5转UTF8(This,BIG5字符串,retstring)	\
    ( (This)->lpVtbl -> BIG5转UTF8(This,BIG5字符串,retstring) ) 

#define ITLibPlusInterface_网络初始化(This,nret)	\
    ( (This)->lpVtbl -> 网络初始化(This,nret) ) 

#define ITLibPlusInterface_网络关闭(This,nret)	\
    ( (This)->lpVtbl -> 网络关闭(This,nret) ) 

#define ITLibPlusInterface_网络套接字(This,类型,nret)	\
    ( (This)->lpVtbl -> 网络套接字(This,类型,nret) ) 

#define ITLibPlusInterface_网络关闭套接字(This,套接字,nret)	\
    ( (This)->lpVtbl -> 网络关闭套接字(This,套接字,nret) ) 

#define ITLibPlusInterface_网络连接(This,套接字,IP地址,端口,nret)	\
    ( (This)->lpVtbl -> 网络连接(This,套接字,IP地址,端口,nret) ) 

#define ITLibPlusInterface_网络绑定(This,套接字,serv_port,nret)	\
    ( (This)->lpVtbl -> 网络绑定(This,套接字,serv_port,nret) ) 

#define ITLibPlusInterface_网络监听(This,套接字e,ncout,nret)	\
    ( (This)->lpVtbl -> 网络监听(This,套接字e,ncout,nret) ) 

#define ITLibPlusInterface_网络接受(This,套接字,nret,serv_ip)	\
    ( (This)->lpVtbl -> 网络接受(This,套接字,nret,serv_ip) ) 

#define ITLibPlusInterface_网络接收(This,套接字,Recvbuff)	\
    ( (This)->lpVtbl -> 网络接收(This,套接字,Recvbuff) ) 

#define ITLibPlusInterface_网络发送(This,套接字,发送内容,nret)	\
    ( (This)->lpVtbl -> 网络发送(This,套接字,发送内容,nret) ) 

#define ITLibPlusInterface_网络发送到(This,套接字,发送内容,nret)	\
    ( (This)->lpVtbl -> 网络发送到(This,套接字,发送内容,nret) ) 

#define ITLibPlusInterface_网络接收来自(This,套接字,长度,IP地址,rPort,data)	\
    ( (This)->lpVtbl -> 网络接收来自(This,套接字,长度,IP地址,rPort,data) ) 

#define ITLibPlusInterface_获取IP(This,type,param,retstring)	\
    ( (This)->lpVtbl -> 获取IP(This,type,param,retstring) ) 

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



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_交换高低8位_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD 变量,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_交换高低8位_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_交换高低16位_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 变量,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_交换高低16位_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_交换高低32位_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONGLONG 变量,
    /* [retval][out] */ LONGLONG *nret);


void __RPC_STUB ITLibPlusInterface_交换高低32位_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_进制字符串转长整形_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR 某进制字符串,
    /* [in] */ LONG 进制数,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_进制字符串转长整形_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_进制字符串转超长整形_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [in] */ LONG _Radix,
    /* [out][in] */ VARIANT *llret,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_进制字符串转超长整形_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_十进制字符串转十进制长整形_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR 整数字符串,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_十进制字符串转十进制长整形_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_十进制字符串转十进制超长整形_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [out][in] */ VARIANT *llret,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_十进制字符串转十进制超长整形_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_十进制长整形转进制字符串_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [in] */ LONG 进制数,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_十进制长整形转进制字符串_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_十进制超长整形进制转字符串_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONGLONG 超长整数,
    /* [in] */ LONG 进制数,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_十进制超长整形进制转字符串_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_字符串转双精度浮点数_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ DOUBLE *dret);


void __RPC_STUB ITLibPlusInterface_字符串转双精度浮点数_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_字符串转浮点数_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR _String,
    /* [retval][out] */ FLOAT *fret);


void __RPC_STUB ITLibPlusInterface_字符串转浮点数_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转WORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数a,
    /* [in] */ LONG 整数b,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_转WORD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转LONG_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数a,
    /* [in] */ LONG 整数b,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_转LONG_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取低WORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_取低WORD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取高WORD_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_取高WORD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取低BYTE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD 短整数,
    /* [retval][out] */ BYTE *byret);


void __RPC_STUB ITLibPlusInterface_取低BYTE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取高BYTE_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ WORD 短整数,
    /* [retval][out] */ BYTE *byret);


void __RPC_STUB ITLibPlusInterface_取高BYTE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_是否资源标识符_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_是否资源标识符_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转资源管理类型_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_转资源管理类型_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转W参数_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 低位整数,
    /* [in] */ LONG 高位整数,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_转W参数_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转L参数_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 低位整数,
    /* [in] */ LONG 高位整数,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_转L参数_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转LRESULT_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 低位整数,
    /* [in] */ LONG 高位整数,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_转LRESULT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_转LGID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 子语言标识符,
    /* [in] */ LONG 主语言标识符,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_转LGID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取主语言标识符_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG lgid,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_取主语言标识符_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取子语言标识符_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG lgid,
    /* [retval][out] */ WORD *wret);


void __RPC_STUB ITLibPlusInterface_取子语言标识符_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取LCID_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG srtid,
    /* [in] */ LONG lgid,
    /* [retval][out] */ DWORD *dwret);


void __RPC_STUB ITLibPlusInterface_取LCID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_L参数转XY_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG L参数,
    /* [out] */ VARIANT *返回X,
    /* [out] */ VARIANT *返回Y,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_L参数转XY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_取图像索引_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 整数,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_取图像索引_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_繁简体转换_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR 字符串内容,
    /* [in] */ LONG 语系模式,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_繁简体转换_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GB2312转UTF8_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR GB2312字符串,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_GB2312转UTF8_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_UTF8转GB2312_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR UTF8字符串,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_UTF8转GB2312_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_GB2312转BIG5_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR GB2312字符串,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_GB2312转BIG5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_BIG5转GB2312_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR BIG5字符串,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_BIG5转GB2312_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_UTF8转BIG5_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR UTF8字符串,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_UTF8转BIG5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_BIG5转UTF8_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR BIG5字符串,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_BIG5转UTF8_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络初始化_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_网络初始化_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络关闭_Proxy( 
    ITLibPlusInterface * This,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_网络关闭_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络套接字_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ BSTR 类型,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_网络套接字_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络关闭套接字_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_网络关闭套接字_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络连接_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [in] */ BSTR IP地址,
    /* [in] */ USHORT 端口,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_网络连接_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络绑定_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [in] */ USHORT serv_port,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_网络绑定_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络监听_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字e,
    /* [in] */ LONG ncout,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_网络监听_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络接受_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [out] */ VARIANT *nret,
    /* [retval][out] */ BSTR *serv_ip);


void __RPC_STUB ITLibPlusInterface_网络接受_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络接收_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [retval][out] */ BSTR *Recvbuff);


void __RPC_STUB ITLibPlusInterface_网络接收_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络发送_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [in] */ BSTR 发送内容,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_网络发送_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络发送到_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [in] */ BSTR 发送内容,
    /* [retval][out] */ LONG *nret);


void __RPC_STUB ITLibPlusInterface_网络发送到_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_网络接收来自_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG 套接字,
    /* [in] */ LONG 长度,
    /* [in] */ BSTR IP地址,
    /* [in] */ USHORT rPort,
    /* [retval][out] */ BSTR *data);


void __RPC_STUB ITLibPlusInterface_网络接收来自_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITLibPlusInterface_获取IP_Proxy( 
    ITLibPlusInterface * This,
    /* [in] */ LONG type,
    /* [in] */ BSTR param,
    /* [retval][out] */ BSTR *retstring);


void __RPC_STUB ITLibPlusInterface_获取IP_Stub(
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


