// TLibPlusInterface.h: CTLibPlusInterface 的宣告

#pragma once
#include "resource.h"       // 主要符号

#include "TLibPlus_i.h"
#include "TMessage.h"
#include "TMemoryAPI.h"
#include "TDebuger.h"
#include "TRuntime.h"
#include "TNet.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台上未正确支援单一执行绪 COM 物件，例如 Windows Mobile 平台没有包含完整的 DCOM 支援。请定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 来强制 ATL 支援建立单一执行绪 COM 物件的实作，以及允许使用其单一执行绪 COM 物件实作。您的 rgs 档中的执行绪模型已设定为 'Free'，因为这是非 DCOM Windows CE 平台中唯一支援的执行绪模型。"
#endif



// CTLibPlusInterface

class ATL_NO_VTABLE CTLibPlusInterface :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTLibPlusInterface, &CLSID_TLibPlusInterface>,
	public IDispatchImpl<ITLibPlusInterface, &IID_ITLibPlusInterface, &LIBID_TLibPlusLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CTLibPlusInterface()
	{

	}

	DECLARE_REGISTRY_RESOURCEID(106)


	BEGIN_COM_MAP(CTLibPlusInterface)
		COM_INTERFACE_ENTRY(ITLibPlusInterface)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}
private:
	int demo(long pvoid, long p0, long p1, long p2, long p3);
	pfnTEST lpTest;
public:
	TDebug gDbgObj;
	TMemoryAPI gMemoryObj;
	TRuntime gRtObj;
	TNet gNetObj;


	STDMETHOD(版本)(BSTR* 版本号);                                      //获取版本号
	STDMETHOD(输入框)(LONG 窗口句柄, LONG 颜色, BSTR 标题, BSTR 显示文本, BSTR 预设文本, BSTR* 内容);//弹出输入框
	STDMETHOD(扫描调试器)(LONG* nret);                                 //作用于检测调用的当前线程是否被调试/下断
	STDMETHOD(反向量化异常处理初始化)(LONG* nret);                             //初始化反VEH调适器回调)(注意该回调函数会复盖掉异常回调[ExceptionCallback]的功能)
	STDMETHOD(异常回调初始化)(LONG 窗口句柄, LONG 是否自动抛出, LONG* nret);//初始化异常回调 )(注意VEH回调[VEHCallBack]会复盖本功能)
	STDMETHOD(获取最后异常信息)(BSTR* 异常类);//获取最后一次的异常资讯 成功获取则清空纪录
	STDMETHOD(延时)(ULONG 毫秒, LONG 是否阻塞, LONG* nret);                //阻塞线程
	STDMETHOD(退出)(BSTR 是否阻塞, LONG* nret);                       //安全退出本进程并清空暂存文件)(TEMP)
	//其他
	STDMETHOD(取类型大小)(BSTR 类型名, LONG* nret);              //获取指定变量类型所佔字节大小
	//内存
	STDMETHOD(进程提权)(BSTR 权限标识字符串, LONG* nret);//提升当前线程权限
	STDMETHOD(清理内存)(LONG 窗口句柄, LONG* nret);                  //根据窗口句柄释放虚拟内存
	STDMETHOD(汇编加入)(BSTR asm_ins, LONG* nret);
	STDMETHOD(汇编注入)(LONG hwnd, LONG mode, LONG timeout, LONG* nret);
	STDMETHOD(汇编清空)(LONG* nret);
	STDMETHOD(汇编转十六进制机器码)(LONG base_addr, BSTR* retstring);
	STDMETHOD(十六进制机器码转汇编)(BSTR asm_code, LONG base_addr, BSTR* retstring);

	STDMETHOD(内存字符串取十进制地址)(LONG hWnd, BSTR strs, VARIANT* ret, LONG* nret);     //32位元字符串地址)(+偏移) 转十进制整数 如 [[<xx.exe+1234>+15]+18]+2A
	STDMETHOD(内存遍历读整数)(LONG hWnd, LONGLONG addr, LONGLONG offest, LONG count, LONG type, BSTR* retstring);
	STDMETHOD(内存读整数)(LONG hWnd, LONGLONG addr, LONG type, LONGLONG* nret);
	STDMETHOD(内存读十六进制数据)(LONG hwnd, LONGLONG addr, LONG len, BSTR* retstring);
	STDMETHOD(内存写整数)(LONG hWnd, LONGLONG addr, LONG type, LONGLONG value, LONG* nret);
	STDMETHOD(内存写十六进制数据)(LONG hwnd, LONGLONG addr, BSTR data, LONG* nret);
	STDMETHOD(内存填充)(VARIANT* 目标地址, LONG 填充数值, LONG 大小, LONG* nret);       //初始化并填充指定内存 与C++ memset宏完全相同
	STDMETHOD(内存複製)(VARIANT* 目标地址, VARIANT* 来源地址, LONG 大小, LONG* nret);      //将指定大小字节_Src内存内容複製给_Dst 与C++ memcpy宏完全相同
	STDMETHOD(内存申请空间)(BSTR 类型字符串, LONG 大小, VARIANT* nret);               //动态分配内存空间  size 大于0为变量数组   可以是堆，也可以是静态存储区
	STDMETHOD(内存申请堆)(BSTR 类型字符串, LONG 大小, VARIANT* nret);            //从堆上动态分配内存
	STDMETHOD(内存释放空间)(VARIANT* 指针, LONG* nret);                         //释放new出来的内存指针
	STDMETHOD(内存数组释放空间)(VARIANT* 指针, LONG* nret);                        //释放new出来的数组内存指针
	STDMETHOD(内存堆释放)(VARIANT* 指针, LONG* nret);                           //释放malloc内存指针
	STDMETHOD(指针写)(VARIANT* Pvoid, BSTR type, VARIANT* value, LONG* nret);                 
	STDMETHOD(指针读)(VARIANT* Pvoid, BSTR type, VARIANT* nret);                         

	//计算
	STDMETHOD(随机数)(LONG 最小值, LONG 最大值, LONG* nret);                      //指定范围的真随机数  C++ <radom> 
	STDMETHOD(随机浮点数)(DOUBLE 浮点数_最小值, DOUBLE 浮点数_最大值, DOUBLE* dret); //指定范围的双精度浮点数随机数  C++ <radom> 
	STDMETHOD(位右移)(LONG 数值, LONG 移动量, LONG* nret);               //位右移
	STDMETHOD(位左移)(LONG 数值, LONG 移动量, LONG* nret);                //位左移
	STDMETHOD(位与)(BSTR 字符串综合数值, LONG* nret);                               //位与 )(&)
	STDMETHOD(位或)(BSTR 字符串综合数值, LONG* nret);                                //位或 )(|)
	STDMETHOD(位异或)(BSTR 字符串综合数值, LONG* nret);                               //异或 )(|)
	STDMETHOD(位反)(LONG 数值, LONG* nret);                                   //位反 )(~)
	STDMETHOD(圆周率)(DOUBLE* dret);                                        //返回一个PI常量的DOUBLE指
	STDMETHOD(反余弦)(DOUBLE _X, DOUBLE* dret);                           //返回反余弦数字
	STDMETHOD(反双曲余弦)(DOUBLE _X, DOUBLE* dret);                          //返回数字的双曲余弦值
	STDMETHOD(反正弦)(DOUBLE _X, DOUBLE* dret);                           //返回反正弦值
	STDMETHOD(反双曲正弦)(DOUBLE _X, DOUBLE* dret);                          //返回数字的双曲正弦值
	STDMETHOD(反正切)(DOUBLE _X, DOUBLE* dret);                           //返回反正切数字
	STDMETHOD(坐标反正切)(DOUBLE _Y, DOUBLE _X, DOUBLE* dret);               //返回坐标的反正切
	STDMETHOD(弧双曲正切)(DOUBLE _X, DOUBLE* dret);                          //返回数字的弧双曲正切
	STDMETHOD(立方根)(DOUBLE _X, DOUBLE* dret);                           //计算数字的立方根
	STDMETHOD(浮点数上限值)(DOUBLE _X, DOUBLE* dret);                           //返回数字的上限值
	STDMETHOD(以y符返x)(DOUBLE _Number, DOUBLE _Sign, DOUBLE* dret);  //以y的符号返回x的大小
	STDMETHOD(余弦)(DOUBLE _X, DOUBLE* dret);                            //返回参数的余弦
	STDMETHOD(双曲余弦)(DOUBLE _X, DOUBLE* dret);                           //返回某个角度的双曲余弦值
	STDMETHOD(浮点数幂指数)(DOUBLE _X, DOUBLE* dret);                            //计算升为幂x的指数e
	STDMETHOD(浮点数幂指数2底)(DOUBLE _X, DOUBLE* dret);                           //计算x的以2为底的指数
	STDMETHOD(浮点数幂指数x减1)(DOUBLE _X, DOUBLE* dret);                          //计算出幂乘以x减一的指数
	STDMETHOD(浮点数绝对值)(DOUBLE _X, DOUBLE* dret);                           //返回参数的绝对值
	STDMETHOD(浮点数xy正差)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);                //返回x和y之间的正差
	STDMETHOD(浮点数下限值)(DOUBLE _X, DOUBLE* dret);                          //返回十进制数字的下限值
	STDMETHOD(浮点数x乘以y加z)(DOUBLE _X, DOUBLE _Y, DOUBLE _Z, DOUBLE* dret);      //计算表达式x * y + z
	STDMETHOD(浮点数两数取最大)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);                //返回传递的两个参数中最大的
	STDMETHOD(浮点数两数取最小)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);                //返回两个给定参数中的最小值
	STDMETHOD(浮点数取余数)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);                //计算除法浮点数的余数
	STDMETHOD(浮点数取尾数与指数)(DOUBLE _X, VARIANT* _Y, DOUBLE* dret);                 //返回一个浮点数的尾数和指数
	STDMETHOD(浮点数平方和的平方根)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);              //返回参数平方和的平方根
	STDMETHOD(浮点数绝对值对数)(DOUBLE _X, DOUBLE* dret);                          //返回| x |的对数的整数部分
	STDMETHOD(浮点数x乘以2的e幂)(DOUBLE _X, LONG _Y, DOUBLE* dret);                  //将x和2的乘积返回到幂e
	STDMETHOD(浮点数取对数)(DOUBLE _X, DOUBLE* dret);                            //返回数字的自然对数
	STDMETHOD(浮点数取对数10底)(DOUBLE _X, DOUBLE* dret);                          //返回数字的以10为底的对数
	STDMETHOD(浮点数取对数2底)(DOUBLE _X, DOUBLE* dret);                           //计算x的以2为底的对数
	STDMETHOD(浮点数取绝对值对数b)(DOUBLE _X, DOUBLE* dret);                          //返回| x |的对数
	STDMETHOD(浮点数x加1对数)(DOUBLE _X, DOUBLE* dret);                          //返回x + 1的自然对数
	STDMETHOD(浮点数舍入整参数)(DOUBLE _X, LONG* nret);                             //使用当前舍入模式舍入参数
	STDMETHOD(浮点数四捨五入成整数)(DOUBLE _X, LONG* nret);                            //返回最接近参数的long int值
	STDMETHOD(浮点数拆解整数与小数)(DOUBLE x, VARIANT* intpart, DOUBLE* dret);           //将数字分解为整数和小数部分
	STDMETHOD(取NaN值)(BSTR _X, DOUBLE* dret);                       //返回NaN值
	STDMETHOD(浮点数参数舍入)(DOUBLE _X, DOUBLE* dret);                      //将参数舍入为使用当前舍入模式
	STDMETHOD(浮点数下一个表示值)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);          //表示x在y方向上的下一个可表示值
	STDMETHOD(求幂)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);                 //计算幂
	STDMETHOD(求余数)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);           //返回x / y的余数
	STDMETHOD(求商)(DOUBLE _X, DOUBLE _Y, VARIANT* _Z, DOUBLE* dret);     //计算机余数并存储x / y的商
	STDMETHOD(浮点数舍入参数)(DOUBLE _X, DOUBLE* dret);                           //使用当前舍入模式舍入参数
	STDMETHOD(浮点数四捨五入至最接近整数位)(DOUBLE _X, DOUBLE* dret);                          //返回最接近参数的整数值
	STDMETHOD(x和FLT_RADX乘以n的乘积长整)(DOUBLE _X, LONG _Y, DOUBLE* dret);               //计算x和FLT_RADX乘以n的乘积
	STDMETHOD(x和FLT_RADX乘以n的乘积)(DOUBLE _X, LONG _Y, DOUBLE* dret);                 //计算x和FLT_RADX乘以n的乘积
	STDMETHOD(正弦)(DOUBLE _X, DOUBLE* dret);                            //返回参数的正弦
	STDMETHOD(双曲正弦)(DOUBLE _X, DOUBLE* dret);                           //返回某个角度的双曲正弦
	STDMETHOD(平方根)(DOUBLE _X, DOUBLE* dret);                           //计算数字的平方根
	STDMETHOD(取切线)(DOUBLE _X, DOUBLE* dret);                            //返回参数的切线
	STDMETHOD(取双曲正切)(DOUBLE _X, DOUBLE* dret);                           //返回角度的双曲正切
	STDMETHOD(浮点数符号截断)(DOUBLE _X, DOUBLE* dret);                          //截断数字的符号部分
	////数组
	STDMETHOD(数组整型取最大)(BSTR szArr, LONG en, LONG* nret);//数组取最大值或包含最大值元素的下标
	STDMETHOD(数组整型取最小)(BSTR szArr, LONG en, LONG* nret); //数组取最小值或包含最小值元素的下标
	STDMETHOD(数组整型去重)(BSTR szArr, BSTR* retstring);                //整数数组去重)(必须为完全整数数组)
	STDMETHOD(数组去重)(BSTR szArr, BSTR* retstring);                //字符串数组去重)(必须为完全字符串数组)
	STDMETHOD(数组整型排序)(BSTR szArr, LONG en, BSTR* retstring);  //整数数组排序)(必须为完全整数数组)
	STDMETHOD(数组排序)(BSTR szArr, BSTR* retstring);                  //字符串数组排序 根据ASCII 由小到大排列 )(必须为完全字符串数组)
	STDMETHOD(数组过滤)(BSTR szArr, BSTR str, BSTR* retstring);    //字符串数组过滤 过滤掉包含指定字符串的元素 返回新的数组
	STDMETHOD(数组多维初始化)(LONG dim, BSTR szsize, BSTR* retstring);       //初始化多维数组并填充 null )(目前最多3维数组不限制大小)
	STDMETHOD(数组倒序)(BSTR szArr, BSTR* retstring);                  //字符串数组排序 根据ASCII 由小到大排列 )(必须为完全字符串数组)
	STDMETHOD(数组旋转)(BSTR szArr, LONG mov, LONG en, BSTR* retstring);
	STDMETHOD(数组移位)(BSTR szArr, LONG mov, LONG en, BSTR* retstring);
	////字符串/文件
	STDMETHOD(字符串分割)(BSTR ins, BSTR delimit, VARIANT* nret, BSTR* outs);                   //字符串分割 引用返回数组 返回数组大小
	STDMETHOD(字符串排序)(BSTR ins, BSTR* retstring);                     //字符串排序
	STDMETHOD(字符串洗牌)(BSTR ins, BSTR* retstring);                  //字符串洗牌
	STDMETHOD(字符串去重)(BSTR ins, BSTR* retstring);                   //字符串去重
	STDMETHOD(字符串倒序)(BSTR ins, BSTR* retstring);                   //字符串去重
	STDMETHOD(字符串旋转)(BSTR ins, LONG mov, LONG en, BSTR* retstring);                 
	STDMETHOD(字符串移位)(BSTR ins, LONG mov, LONG en, BSTR* retstring);
	STDMETHOD(字符串Xml转Json)(BSTR _Src, BSTR* retstring);         //xml字符串转json字符串
	STDMETHOD(字符串Json转Xml)(BSTR _Src, BSTR* retstring);         //json字符串转xml字符串
	STDMETHOD(文件流指针打开)(BSTR _FileName, BSTR _Mode, LONG* nret);                                 //文件打开/创建 )(可用来读写文本或二进制文件) 与 C++ wfopen完全相同
	STDMETHOD(文件流指针移动)(LONG _Stream, LONG _Offset, BSTR dst, LONG* nret);                            //将文件指针移动到指定字节位置 与 C++  fseek完全相同
	STDMETHOD(文件流指针读取)(LONG _ElementSize, LONG _ElementCount, LONG _Stream, VARIANT* nret, BSTR* _Buffer); //从文件指针位置开始读取指定长度和字节的内容保存到缓存 )(总读取数量为:  字节长度 * 数量)
	STDMETHOD(文件流指针写入)(LONG _Buffer, LONG _ElementSize, LONG _ElementCount, LONG _Stream, LONG* nret);//从文件指针位置开始写入缓存内包含的指定长度和字节的内容 )(总写入数量为:  字节长度 * 数量)
	STDMETHOD(文件流指针複製)(BSTR _Buffer, LONG _BufferCount, LONG _Stream, BSTR* retstring);                //检查文件是否读到结尾 与 C++  fgetws完全相同
	STDMETHOD(文件流指针关闭)(LONG _Stream, LONG* nret);            //关闭文件指针
	STDMETHOD(内存映射)(BSTR _FileName, VARIANT* dwret, BSTR* buf);         //将任意文件/图像直接映射到内存 )(对于超大型文件效果很好)
	STDMETHOD(配置文件枚举小节)(BSTR _FileName, BSTR* retstring);           //枚举指定配置文件)(INI)的所有小节名
	STDMETHOD(配置文件枚举键名)(BSTR  _Key, BSTR _FileName, BSTR* retstring);//枚举指定配置文件)(INI)的所有小节名
	//转换
	STDMETHOD(交换变量)(VARIANT* a, VARIANT* b, LONG* nret);        //将两个任意变量的数值互换 )(a b数值互换)
	STDMETHOD(交换高低4位)(BYTE a, LONG* nret);                //将int8 高4位低4位互换
	STDMETHOD(交换高低8位)(WORD a, LONG* nret);                //将int16)(short) 高8位低8位互换
	STDMETHOD(交换高低16位)(LONG a, LONG* nret);                //将int32)(long) 高16位低16位互换
	STDMETHOD(交换高低32位)(LONGLONG a, LONGLONG* nret);          //将int64)(longlong) 高32位低32位互换//TC8.0限定

	STDMETHOD(进制字符串转长整形)(BSTR _String, LONG _Radix, LONG* nret);                   //任意进制的字符串转长整形)(long)
	STDMETHOD(进制字符串转超长整形)(BSTR _String, LONG _Radix, VARIANT* llret, LONG* nret);//任意进制的字符串转超长整形)(longlong)
	STDMETHOD(十进制字符串转十进制长整形)(BSTR _String, LONG* nret);            //十进制字符串转十进制长整形
	STDMETHOD(十进制字符串转十进制超长整形)(BSTR _String, VARIANT* llret, LONG* nret);      //十进制字符串转十进制超长整形 //TC8.0限定
	STDMETHOD(十进制长整形转进制字符串)(LONG _Value, LONG _Radix, BSTR* retstring);      //十进制长整形转任意进制小写字符串
	STDMETHOD(十进制超长整形进制转字符串)(LONGLONG _Value, LONG _Radix, BSTR* retstring); //十进制超长整形转任意进制小写字符串 //TC8.0限定
	STDMETHOD(字符串转双精度浮点数)(BSTR _String, DOUBLE* dret);          //char* 转 DOUBLE
	STDMETHOD(字符串转浮点数)(BSTR _String, FLOAT* fret);          //char* 转 float

	STDMETHOD(转WORD)(LONG a, LONG b, WORD* wret);        //将任意两个长整型转换成 WORD   _MAKEWORD)(低位, 高位)
	STDMETHOD(转LONG)(LONG a, LONG b, LONG* nret);        //将任意两个长整型转换成 LONG   _MAKELONG)(低位, 高位)
	STDMETHOD(取低WORD)(LONG l, WORD* wret);                  //取出长整型的低位WORD   LOWORD)(整数)
	STDMETHOD(取高WORD)(LONG l, WORD* wret);                  //取出长整型的高位WORD   LOWORD)(整数)
	STDMETHOD(取低BYTE)(WORD w, BYTE* byret);                  //取出短整型的低位BYTE   LOBYTE)(整数)
	STDMETHOD(取高BYTE)(WORD w, BYTE* byret);                  //取出短整型的高位BYTE   LOBYTE)(整数)
	STDMETHOD(是否资源标识符)(LONG _r, LONG* nret);    //确定输入值是否是资源的整数标识符
	STDMETHOD(转资源管理类型)(LONG i, BSTR* retstring);       //将整数值转换为与资源管理功能兼容的资源类型。此宏用于代替包含资源名称的字符串
	STDMETHOD(转W参数)(LONG l, LONG h, LONG* nret);    //将任意两个长整型转换成 LONG   _MAKEWPARAM)(低位, 高位)
	STDMETHOD(转L参数)(LONG l, LONG h, LONG* nret);    //将任意两个长整型转换成 LONG   _MAKELPARAM)(低位, 高位)
	STDMETHOD(转LRESULT)(LONG l, LONG h, LONG* nret);  //将任意两个长整型转换成 LONG   _MAKELRESULT)(低位, 高位)
	STDMETHOD(转LGID)(LONG s, LONG p, WORD* wret);      //将子语言标识符和主语言标识符合併为 LGID     _MAKELANGID)(子, 主)
	STDMETHOD(取主语言标识符)(LONG lgid, WORD* wret);        //LGID中获取主语言标识符
	STDMETHOD(取子语言标识符)(LONG lgid, WORD* wret);            //LGID中获取子语言标识符
	STDMETHOD(取LCID)(LONG srtid, LONG lgid, DWORD* dwret);//获取LCID
	STDMETHOD(L参数转XY)(LONG l, VARIANT* x, VARIANT* y, LONG* nret);            //从LPARAM 或任意长整形中取出包含x,y座标的POINTS结构体
	STDMETHOD(取图像索引)(LONG i, LONG* nret);   //获取准备状态图像的索引
	STDMETHOD(繁简体转换)(BSTR str, LONG type, BSTR* retstring);//繁简体转换
	STDMETHOD(GB2312转UTF8)(BSTR pStrGB2312, BSTR* retstring);//char* GB2312 转 UTF8
	STDMETHOD(UTF8转GB2312)(BSTR pStrUTF8, BSTR* retstring);  //char* UTF8 转 GB2312
	STDMETHOD(GB2312转BIG5)(BSTR pStrGB2312, BSTR* retstring);//char* GB2312 转 BIG5
	STDMETHOD(BIG5转GB2312)(BSTR pStrBIG5, BSTR* retstring);  //char* BIG5 转 GB2312
	STDMETHOD(UTF8转BIG5)(BSTR pStrUTF8, BSTR* retstring);    //char* UTF8 转 BIG5
	STDMETHOD(BIG5转UTF8)(BSTR pStrBIG5, BSTR* retstring);    //char* BIG5 转 UTF8
	//网络TCP/UDP
	STDMETHOD(网络初始化)(LONG* nret);                  //初始化网络环境,使用网络编程函数前需要先用该函数初始化
	STDMETHOD(网络关闭)(LONG* nret);                       //网络程序结束后释放网络资源,关闭初始化
	STDMETHOD(网络套接字)(BSTR sztype, LONG* nret);            //创建套接字,返回套接字句柄
	STDMETHOD(网络关闭套接字)(LONG sockhandle, LONG* nret);//网络程序结束后,关闭套接字,释放资源
	STDMETHOD(网络连接)(LONG sockhandle, BSTR serv_ip, USHORT serv_port, LONG* nret); //客户端向服务器发送一个连接)(服务器接受连接后即可与服务器通讯),如果没有连接该函数将会等待,直到有连接过来为止
	STDMETHOD(网络绑定)(LONG sockhandle, USHORT serv_port, LONG* nret);//绑定套接字,并开启指定端口
	STDMETHOD(网络监听)(LONG sockhandle, LONG ncout, LONG* nret);    //监听套接字,指定可同时连接数
	STDMETHOD(网络接受)(LONG sockhandle, VARIANT* nret, BSTR* serv_ip);//接受一个客户端的连接,返回一个新的套接字句柄)(程序结束后记得释放该套接字句柄),第二参数返回该客户端的ip地址
	STDMETHOD(网络接收)(LONG sockhandle, BSTR* Recvbuff); //接收一个绑定套接字发送过来的数据
	STDMETHOD(网络发送)(LONG sockhandle, BSTR data, LONG* nret);     // 向一个绑定的套接字发送字符串 
	STDMETHOD(网络发送到)(LONG sockhandle, BSTR data, LONG* nret);   //发送字符串到指定地址)(一般用于UDP通讯)
	STDMETHOD(网络接收来自)(LONG sockhandle, LONG length, BSTR serv_ip, USHORT rPort, BSTR* data);//接收指定地址发送过来的数据)(一般用于UDP通讯)
	STDMETHOD(获取IP)(LONG type, BSTR param, BSTR* data);





	//系统
	STDMETHOD(TEST)(LONG pvoid, LONG count, LONG p0, LONG p1, LONG p2, LONG p3, LONG* nret);
	STDMETHOD(Ver)(BSTR* retstring);                                      //获取版本号
	STDMETHOD(InputBox)(LONG hWnd, LONG Color, BSTR szCaption, BSTR szPrompt, BSTR szDefaultText, BSTR* retstring);//弹出输入框
	STDMETHOD(AntiDebuger)(LONG* nret);                                 //作用于检测调用的当前线程是否被调试/下断
	STDMETHOD(AntiVEHCallBack)(LONG* nret);                             //初始化反VEH调适器回调)(注意该回调函数会复盖掉异常回调[ExceptionCallback]的功能)
	STDMETHOD(InitExceptionCallback)(LONG hWnd, LONG en, LONG* nret);//初始化异常回调 )(注意VEH回调[VEHCallBack]会复盖本功能)
	STDMETHOD(GetLastException)(BSTR* retstring);//获取最后一次的异常资讯 成功获取则清空纪录
	STDMETHOD(Delay)(ULONG s, LONG en, LONG* nret);                //阻塞线程
	STDMETHOD(Exit)(BSTR fileName, LONG* nret);                       //安全退出本进程并清空暂存文件)(TEMP)

	//其他
	STDMETHOD(Sizeof)(BSTR type, LONG* nret);              //获取指定变量类型所佔字节大小
	//内存
	STDMETHOD(EnablePrivilege)(BSTR dwPrivilege, LONG* nret);//提升当前线程权限
	STDMETHOD(FreeProcessMemory)(LONG hWnd, LONG* nret);                  //根据窗口句柄释放虚拟内存
	STDMETHOD(AsmAdd)(BSTR asm_ins, LONG* nret);
	STDMETHOD(AsmCall)(LONG hwnd, LONG mode, LONG timeout, LONG* nret);
	STDMETHOD(AsmClear)(LONG* nret);
	STDMETHOD(Assemble)(LONG base_addr, BSTR* retstring);
	STDMETHOD(DisAssemble)(BSTR asm_code, LONG base_addr, BSTR* retstring);


	STDMETHOD(GetFindDataAddr)(LONG hWnd, BSTR strs, VARIANT* pret, LONG* nret);     //32位元字符串地址)(+偏移) 转十进制整数 如 [[<xx.exe+1234>+15]+18]+2A
	STDMETHOD(ReadIntTraverseAddr)(LONG hWnd, LONGLONG addr, LONGLONG offest, LONG count, LONG type, BSTR* retstring);
	STDMETHOD(ReadIntAddr)(LONG hWnd, LONGLONG addr, LONG type, LONGLONG* nret);
	STDMETHOD(ReadDataAddr)(LONG hwnd, LONGLONG addr, LONG len, BSTR* retstring);
	STDMETHOD(WriteIntAddr)(LONG hWnd, LONGLONG addr, LONG type, LONGLONG value, LONG* nret);
	STDMETHOD(WriteDataAddr)(LONG hwnd, LONGLONG addr, BSTR data, LONG* nret);
	STDMETHOD(Memset)(VARIANT* _Dst, LONG Val, LONG Size, LONG* nret);       //初始化并填充指定内存 与C++ memset宏完全相同
	STDMETHOD(Memcpy)(VARIANT* _Dst, VARIANT* _Src, LONG Size, LONG* nret);      //将指定大小字节_Src内存内容複製给_Dst 与C++ memcpy宏完全相同
	STDMETHOD(New)(BSTR sztype, LONG size, VARIANT* nret);               //动态分配内存空间  size 大于0为变量数组   可以是堆，也可以是静态存储区
	STDMETHOD(Malloc)(BSTR sztype, LONG size, VARIANT* nret);            //从堆上动态分配内存
	STDMETHOD(Set)(VARIANT* Pvoid, BSTR type, VARIANT* value, LONG* nret);                         
	STDMETHOD(Get)(VARIANT* Pvoid, BSTR type, VARIANT* nret);                         

	STDMETHOD(Delete)(VARIANT* _Block, LONG* nret);                         //释放new出来的内存指针
	STDMETHOD(Deletes)(VARIANT* _Block, LONG* nret);                        //释放new出来的数组内存指针
	STDMETHOD(Free)(VARIANT* _Block, LONG* nret);                           //释放malloc内存指针


	//计算
	STDMETHOD(Rand)(LONG MIN, LONG MAX, LONG* nret);                      //指定范围的真随机数  C++ <radom> 
	STDMETHOD(RandDouble)(DOUBLE DOUBLE_MIN, DOUBLE DOUBLE_MAX, DOUBLE* dret); //指定范围的双精度浮点数随机数  C++ <radom> 
	STDMETHOD(ShiftRight)(LONG l, LONG _Radix, LONG* nret);               //位右移
	STDMETHOD(ShiftLeft)(LONG l, LONG _Radix, LONG* nret);                //位左移
	STDMETHOD(AND)(BSTR ins, LONG* nret);                               //位与 )(&)
	STDMETHOD(OR)(BSTR ins, LONG* nret);                                //位或 )(|)
	STDMETHOD(XOR)(BSTR ins, LONG* nret);                               //异或 )(|)
	STDMETHOD(NOT)(LONG a, LONG* nret);                                   //位反 )(~)
	STDMETHOD(PI)(DOUBLE* dret);                                        //返回一个PI常量的DOUBLE指针
	STDMETHOD(Acos)(DOUBLE _X, DOUBLE* dret);                           //返回反余弦数字
	STDMETHOD(Acosh)(DOUBLE _X, DOUBLE* dret);                          //返回数字的双曲余弦值
	STDMETHOD(Asin)(DOUBLE _X, DOUBLE* dret);                           //返回反正弦值
	STDMETHOD(Asinh)(DOUBLE _X, DOUBLE* dret);                          //返回数字的双曲正弦值
	STDMETHOD(Atan)(DOUBLE _X, DOUBLE* dret);                           //返回反正切数字
	STDMETHOD(Atan2)(DOUBLE _Y, DOUBLE _X, DOUBLE* dret);               //返回坐标的反正切
	STDMETHOD(Atanh)(DOUBLE _X, DOUBLE* dret);                          //返回数字的弧双曲正切
	STDMETHOD(Cbrt)(DOUBLE _X, DOUBLE* dret);                           //计算数字的立方根
	STDMETHOD(Ceil)(DOUBLE _X, DOUBLE* dret);                           //返回数字的上限值
	STDMETHOD(Copysign)(DOUBLE _Number, DOUBLE _Sign, DOUBLE* dret);  //以y的符号返回x的大小
	STDMETHOD(Cos)(DOUBLE _X, DOUBLE* dret);                            //返回参数的余弦
	STDMETHOD(Cosh)(DOUBLE _X, DOUBLE* dret);                           //返回某个角度的双曲余弦值
	STDMETHOD(Exp)(DOUBLE _X, DOUBLE* dret);                            //计算升为幂x的指数e
	STDMETHOD(Exp2)(DOUBLE _X, DOUBLE* dret);                           //计算x的以2为底的指数
	STDMETHOD(Expm1)(DOUBLE _X, DOUBLE* dret);                          //计算出幂乘以x减一的指数
	STDMETHOD(Fabs)(DOUBLE _X, DOUBLE* dret);                           //返回参数的绝对值
	STDMETHOD(Fdim)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);                //返回x和y之间的正差
	STDMETHOD(Floor)(DOUBLE _X, DOUBLE* dret);                          //返回十进制数字的下限值
	STDMETHOD(Fma)(DOUBLE _X, DOUBLE _Y, DOUBLE _Z, DOUBLE* dret);      //计算表达式x * y + z
	STDMETHOD(Fmax)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);                //返回传递的两个参数中最大的
	STDMETHOD(Fmin)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);                //返回两个给定参数中的最小值
	STDMETHOD(Fmod)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);                //计算除法浮点数的余数
	STDMETHOD(Frexp)(DOUBLE _X, VARIANT* _Y, DOUBLE* dret);                 //返回一个浮点数的尾数和指数
	STDMETHOD(Hypot)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);              //返回参数平方和的平方根
	STDMETHOD(Ilogb)(DOUBLE _X, DOUBLE* dret);                          //返回| x |的对数的整数部分
	STDMETHOD(Ldexp)(DOUBLE _X, LONG _Y, DOUBLE* dret);                  //将x和2的乘积返回到幂e
	STDMETHOD(Log)(DOUBLE _X, DOUBLE* dret);                            //返回数字的自然对数
	STDMETHOD(Log10)(DOUBLE _X, DOUBLE* dret);                          //返回数字的以10为底的对数
	STDMETHOD(Log2)(DOUBLE _X, DOUBLE* dret);                           //计算x的以2为底的对数
	STDMETHOD(Logb)(DOUBLE _X, DOUBLE* dret);                          //返回| x |的对数
	STDMETHOD(Log1p)(DOUBLE _X, DOUBLE* dret);                          //返回x + 1的自然对数
	STDMETHOD(Lrint)(DOUBLE _X, LONG* nret);                             //使用当前舍入模式舍入参数
	STDMETHOD(Lround)(DOUBLE _X, LONG* nret);                            //返回最接近参数的long int值
	STDMETHOD(Modf)(DOUBLE x, VARIANT* intpart, DOUBLE* dret);           //将数字分解为整数和小数部分
	STDMETHOD(Nan)(BSTR _X, DOUBLE* dret);                       //返回NaN值
	STDMETHOD(Nearbyint)(DOUBLE _X, DOUBLE* dret);                      //将参数舍入为使用当前舍入模式
	STDMETHOD(Nextafter)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);          //表示x在y方向上的下一个可表示值
	STDMETHOD(Pow)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);                 //计算幂
	STDMETHOD(Remainder)(DOUBLE _X, DOUBLE _Y, DOUBLE* dret);           //返回x / y的余数
	STDMETHOD(Remquo)(DOUBLE _X, DOUBLE _Y, VARIANT* _Z, DOUBLE* dret);     //计算机余数并存储x / y的商
	STDMETHOD(Rint)(DOUBLE _X, DOUBLE* dret);                           //使用当前舍入模式舍入参数
	STDMETHOD(Round)(DOUBLE _X, DOUBLE* dret);                          //返回最接近参数的整数值
	STDMETHOD(Scalbln)(DOUBLE _X, LONG _Y, DOUBLE* dret);               //计算x和FLT_RADX乘以n的乘积
	STDMETHOD(Scalbn)(DOUBLE _X, LONG _Y, DOUBLE* dret);                 //计算x和FLT_RADX乘以n的乘积
	STDMETHOD(Sin)(DOUBLE _X, DOUBLE* dret);                            //返回参数的正弦
	STDMETHOD(Sinh)(DOUBLE _X, DOUBLE* dret);                           //返回某个角度的双曲正弦
	STDMETHOD(Sqrt)(DOUBLE _X, DOUBLE* dret);                           //计算数字的平方根
	STDMETHOD(Tan)(DOUBLE _X, DOUBLE* dret);                            //返回参数的切线
	STDMETHOD(Tanh)(DOUBLE _X, DOUBLE* dret);                           //返回角度的双曲正切
	STDMETHOD(Trunc)(DOUBLE _X, DOUBLE* dret);                          //截断数字的符号部分
	//数组
	STDMETHOD(ArrayGetHighest)(BSTR szArr, LONG en, LONG* nret);//数组取最大值或包含最大值元素的下标
	STDMETHOD(ArrayGetLowest)(BSTR szArr, LONG en, LONG* nret); //数组取最小值或包含最小值元素的下标
	STDMETHOD(ArrayUniqueInt)(BSTR szArr, BSTR* retstring);                //整数数组去重)(必须为完全整数数组)
	STDMETHOD(ArrayUnique)(BSTR szArr, BSTR* retstring);                //字符串数组去重)(必须为完全字符串数组)
	STDMETHOD(ArraySortInt)(BSTR szArr, LONG en, BSTR* retstring);  //整数数组排序)(必须为完全整数数组)
	STDMETHOD(ArraySort)(BSTR szArr, BSTR* retstring);                  //字符串数组排序 根据ASCII 由小到大排列 )(必须为完全字符串数组)
	STDMETHOD(ArrayFilter)(BSTR szArr, BSTR str, BSTR* retstring);    //字符串数组过滤 过滤掉包含指定字符串的元素 返回新的数组
	STDMETHOD(ArrayAlloc)(LONG dim, BSTR szsize, BSTR* retstring);       //初始化多维数组并填充 null )(目前最多3维数组不限制大小)
	STDMETHOD(ArrayReverse)(BSTR szArr, BSTR* retstring);     
	STDMETHOD(ArrayRotate)(BSTR szArr, LONG mov, LONG en, BSTR* retstring);
	STDMETHOD(ArrayShift)(BSTR szArr, LONG mov, LONG en, BSTR* retstring);

	//字符串/文件
	STDMETHOD(StringSplit)(BSTR ins, BSTR delimit, VARIANT* nret, BSTR* outs);                   //字符串分割 引用返回数组 返回数组大小
	STDMETHOD(StringSort)(BSTR ins, BSTR* retstring);                     //字符串排序
	STDMETHOD(StringShuffle)(BSTR ins, BSTR* retstring);                  //字符串洗牌
	STDMETHOD(StringUnique)(BSTR ins, BSTR* retstring);                   //字符串去重
	STDMETHOD(StringReverse)(BSTR ins, BSTR* retstring);                 
	STDMETHOD(StringRotate)(BSTR ins, LONG mov, LONG en, BSTR* retstring);        
	STDMETHOD(StringShift)(BSTR ins, LONG mov, LONG en, BSTR* retstring);              
	STDMETHOD(StringXml2Json)(BSTR _Src, BSTR* retstring);         //xml字符串转json字符串
	STDMETHOD(StringJson2Xml)(BSTR _Src, BSTR* retstring);         //json字符串转xml字符串
	STDMETHOD(Fwopen)(BSTR _FileName, BSTR _Mode, LONG* nret);                                 //文件打开/创建 )(可用来读写文本或二进制文件) 与 C++ wfopen完全相同
	STDMETHOD(Fseek)(LONG _Stream, LONG _Offset, BSTR dst, LONG* nret);                            //将文件指针移动到指定字节位置 与 C++  fseek完全相同
	STDMETHOD(Fread)(LONG _ElementSize, LONG _ElementCount, LONG _Stream, VARIANT* nret, BSTR* _Buffer); //从文件指针位置开始读取指定长度和字节的内容保存到缓存 )(总读取数量为:  字节长度 * 数量)
	STDMETHOD(Fwrite)(LONG _Buffer, LONG _ElementSize, LONG _ElementCount, LONG _Stream, LONG* nret);//从文件指针位置开始写入缓存内包含的指定长度和字节的内容 )(总写入数量为:  字节长度 * 数量)
	STDMETHOD(Fgetws)(BSTR _Buffer, LONG _BufferCount, LONG _Stream, BSTR* retstring);                //检查文件是否读到结尾 与 C++  fgetws完全相同
	STDMETHOD(Fclose)(LONG _Stream, LONG* nret);            //关闭文件指针
	STDMETHOD(Mmap)(BSTR _FileName, VARIANT* dwret, BSTR* buf);         //将任意文件/图像直接映射到内存 )(对于超大型文件效果很好)
	STDMETHOD(EnumIniSection)(BSTR _FileName, BSTR* retstring);           //枚举指定配置文件)(INI)的所有小节名
	STDMETHOD(EnumIniKey)(BSTR  _Key, BSTR _FileName, BSTR* retstring);//枚举指定配置文件)(INI)的所有小节名
	//转换
	STDMETHOD(Swap)(VARIANT* a, VARIANT* b, LONG* nret);        //将两个任意变量的数值互换 )(a b数值互换)
	STDMETHOD(SwapByte)(BYTE a, LONG* nret);                //将int8 高4位低4位互换
	STDMETHOD(SwapWord)(WORD a, LONG* nret);                //将int16)(short) 高8位低8位互换
	STDMETHOD(SwapLong)(LONG a, LONG* nret);                //将int32)(long) 高16位低16位互换
	STDMETHOD(SwapInt64)(LONGLONG a, LONGLONG* nret);          //将int64)(longlong) 高32位低32位互换//TC8.0限定

	STDMETHOD(XStringToL)(BSTR _String, LONG _Radix, LONG* nret);                   //任意进制的字符串转长整形)(long)
	STDMETHOD(XStringToI64)(BSTR _String, LONG _Radix, VARIANT* llret, LONG* nret);//任意进制的字符串转超长整形)(longlong)
	STDMETHOD(StringToL)(BSTR _String, LONG* nret);            //十进制字符串转十进制长整形
	STDMETHOD(StringToI64)(BSTR _String, VARIANT* llret, LONG* nret);      //十进制字符串转十进制超长整形 //TC8.0限定
	STDMETHOD(LToXString)(LONG _Value, LONG _Radix, BSTR* retstring);      //十进制长整形转任意进制小写字符串
	STDMETHOD(I64ToXString)(LONGLONG _Value, LONG _Radix, BSTR* retstring); //十进制超长整形转任意进制小写字符串 //TC8.0限定
	STDMETHOD(StringToDbl)(BSTR _String, DOUBLE* dret);          //char* 转 DOUBLE
	STDMETHOD(StringToFlt)(BSTR _String, FLOAT* fret);          //char* 转 float

	STDMETHOD(TMAKEWORD)(LONG a, LONG b, WORD* wret);        //将任意两个长整型转换成 WORD   _MAKEWORD)(低位, 高位)
	STDMETHOD(TMAKELONG)(LONG a, LONG b, LONG* nret);        //将任意两个长整型转换成 LONG   _MAKELONG)(低位, 高位)
	STDMETHOD(TLOWORD)(LONG l, WORD* wret);                  //取出长整型的低位WORD   LOWORD)(整数)
	STDMETHOD(THIWORD)(LONG l, WORD* wret);                  //取出长整型的高位WORD   LOWORD)(整数)
	STDMETHOD(TLOBYTE)(WORD w, BYTE* byret);                  //取出短整型的低位BYTE   LOBYTE)(整数)
	STDMETHOD(THIBYTE)(WORD w, BYTE* byret);                  //取出短整型的高位BYTE   LOBYTE)(整数)
	STDMETHOD(TIS_INTRESOURCE)(LONG _r, LONG* nret);    //确定输入值是否是资源的整数标识符
	STDMETHOD(TMAKEINTRESOURCE)(LONG i, BSTR* retstring);       //将整数值转换为与资源管理功能兼容的资源类型。此宏用于代替包含资源名称的字符串
	STDMETHOD(TMAKEWPARAM)(LONG l, LONG h, LONG* nret);    //将任意两个长整型转换成 LONG   _MAKEWPARAM)(低位, 高位)
	STDMETHOD(TMAKELPARAM)(LONG l, LONG h, LONG* nret);    //将任意两个长整型转换成 LONG   _MAKELPARAM)(低位, 高位)
	STDMETHOD(TMAKELRESULT)(LONG l, LONG h, LONG* nret);  //将任意两个长整型转换成 LONG   _MAKELRESULT)(低位, 高位)
	STDMETHOD(TMAKELANGID)(LONG s, LONG p, WORD* wret);      //将子语言标识符和主语言标识符合併为 LGID     _MAKELANGID)(子, 主)
	STDMETHOD(TPRIMARYLANGID)(LONG lgid, WORD* wret);        //LGID中获取主语言标识符
	STDMETHOD(TSUBLANGID)(LONG lgid, WORD* wret);            //LGID中获取子语言标识符
	STDMETHOD(TMAKELCID)(LONG srtid, LONG lgid, DWORD* dwret);//获取LCID
	STDMETHOD(TMAKEPOINTS)(LONG l, VARIANT* x, VARIANT* y, LONG* nret);            //从LPARAM 或任意长整形中取出包含x,y座标的POINTS结构体
	STDMETHOD(TINDEXTOSTATEIMAGEMASK)(LONG i, LONG* nret);   //获取准备状态图像的索引
	STDMETHOD(ConvertLanguage)(BSTR str, LONG type, BSTR* retstring);//繁简体转换
	STDMETHOD(GB2312ToUTF8)(BSTR pStrGB2312, BSTR* retstring);//char* GB2312 转 UTF8
	STDMETHOD(UTF8ToGB2312)(BSTR pStrUTF8, BSTR* retstring);  //char* UTF8 转 GB2312
	STDMETHOD(GB2312ToBIG5)(BSTR pStrGB2312, BSTR* retstring);//char* GB2312 转 BIG5
	STDMETHOD(BIG5ToGB2312)(BSTR pStrBIG5, BSTR* retstring);  //char* BIG5 转 GB2312
	STDMETHOD(UTF8ToBIG5)(BSTR pStrUTF8, BSTR* retstring);    //char* UTF8 转 BIG5
	STDMETHOD(BIG5ToUTF8)(BSTR pStrBIG5, BSTR* retstring);    //char* BIG5 转 UTF8
	//网络TCP/UDP
	STDMETHOD(NetWSAStartup)(LONG* nret);                  //初始化网络环境,使用网络编程函数前需要先用该函数初始化
	STDMETHOD(NetClose)(LONG* nret);                       //网络程序结束后释放网络资源,关闭初始化
	STDMETHOD(NetSocket)(BSTR sztype, LONG* nret);            //创建套接字,返回套接字句柄
	STDMETHOD(NetCloseSocket)(LONG sockhandle, LONG* nret);//网络程序结束后,关闭套接字,释放资源
	STDMETHOD(NetConnect)(LONG sockhandle, BSTR serv_ip, USHORT serv_port, LONG* nret); //客户端向服务器发送一个连接)(服务器接受连接后即可与服务器通讯),如果没有连接该函数将会等待,直到有连接过来为止
	STDMETHOD(NetBind)(LONG sockhandle, USHORT serv_port, LONG* nret);//绑定套接字,并开启指定端口
	STDMETHOD(NetListen)(LONG sockhandle, LONG ncout, LONG* nret);    //监听套接字,指定可同时连接数
	STDMETHOD(NetAccept)(LONG sockhandle, VARIANT* nret, BSTR* serv_ip);//接受一个客户端的连接,返回一个新的套接字句柄)(程序结束后记得释放该套接字句柄),第二参数返回该客户端的ip地址
	STDMETHOD(NetRecv)(LONG sockhandle, BSTR* Recvbuff); //接收一个绑定套接字发送过来的数据
	STDMETHOD(NetSend)(LONG sockhandle, BSTR data, LONG* nret);     // 向一个绑定的套接字发送字符串 
	STDMETHOD(NetSendTo)(LONG sockhandle, BSTR data, LONG* nret);   //发送字符串到指定地址)(一般用于UDP通讯)
	STDMETHOD(NetRecvFrom)(LONG sockhandle, LONG length, BSTR serv_ip, USHORT rPort, BSTR* data);//接收指定地址发送过来的数据)(一般用于UDP通讯)
	STDMETHOD(GetIP)(LONG type, BSTR param, BSTR* data);


};

OBJECT_ENTRY_AUTO(__uuidof(TLibPlusInterface), CTLibPlusInterface)
