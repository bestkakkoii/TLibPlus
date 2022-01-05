#if !defined(TSMESSAGE_H)

#define TSMESSAGE_H

#include <string>

constexpr auto T_VERSION = L"1.036";

#define T_MESSAGEBASE        (WM_USER+2000)

#define T_BIND               (T_MESSAGEBASE +  1)
#define T_UNBIND             (T_MESSAGEBASE +  2)
#define T_KEYDOWN            (T_MESSAGEBASE +  10)
#define T_KEYUP              (T_MESSAGEBASE +  11)
#define T_CHAR               (T_MESSAGEBASE +  12)
#define T_MOUSEMOVE          (T_MESSAGEBASE +  20)
#define T_MOUSEMOVEOVER      (T_MESSAGEBASE +  21)
#define T_LBUTTONDOWN        (T_MESSAGEBASE +  22)
#define T_LBUTTOUP           (T_MESSAGEBASE +  23)
#define T_RBUTTONDOWN        (T_MESSAGEBASE +  24)
#define T_RBUTTONUP          (T_MESSAGEBASE +  25)
#define T_GETCURSORPOS       (T_MESSAGEBASE +  26)
#define T_MOUSER			  (T_MESSAGEBASE +  27)
#define T_MBUTTONDOWN        (T_MESSAGEBASE +  28)
#define T_MBUTTONUP          (T_MESSAGEBASE +  29)
#define T_MOUSEWHEEL         (T_MESSAGEBASE +  30)

#define T_FINDPIC            (T_MESSAGEBASE +  40)
#define T_FINDCOLOR          (T_MESSAGEBASE +  41)
#define T_GETCOLOR			  (T_MESSAGEBASE +  42)
#define T_GETMOUSESHARE      (T_MESSAGEBASE +  43)//GetBkMouseShape   
#define T_SETPATH			  (T_MESSAGEBASE +  44)
#define T_CAPTURE			  (T_MESSAGEBASE +  45)
#define T_LOCKINPUT		  (T_MESSAGEBASE +  46) //�����ⲿ��������Ϣ

#define T_OCR				  (T_MESSAGEBASE +  50)//ʶ��
#define T_USEDICT            (T_MESSAGEBASE +  51)
#define T_SETDICT            (T_MESSAGEBASE +  52)
#define T_FINDSTR            (T_MESSAGEBASE +  53)
#define T_FINDSTRFAST        (T_MESSAGEBASE +  54)
#define T_FINDPICEX		  (T_MESSAGEBASE +  55)
#define T_FINDSTREX		  (T_MESSAGEBASE +  56)
#define T_FINDSTRFASTEX	  (T_MESSAGEBASE +  57)
#define T_DOWNCPU			  (T_MESSAGEBASE +  58)
#define T_SENDSTRINGIME	  (T_MESSAGEBASE +  59)
#define T_FINDCOLOREX		  (T_MESSAGEBASE +  60)   //T_OCR
#define T_OCREX			  (T_MESSAGEBASE +  61)//ʶ��
#define T_FINDSTRS           (T_MESSAGEBASE +  62)
#define T_FINDSTRFASTS       (T_MESSAGEBASE +  63)
#define T_FINDSTREXS		  (T_MESSAGEBASE +  64)
#define T_FINDSTRFASTEXS	  (T_MESSAGEBASE +  65)
#define T_FINDPICS           (T_MESSAGEBASE +  66)
#define T_FINDPICEXS		  (T_MESSAGEBASE +  67)
#define T_SETPICPWD		  (T_MESSAGEBASE +  68)
#define T_ISGRAPHICPROTECT	  (T_MESSAGEBASE +  69)//graphic.protect ,ͼɫ����� 
#define T_GETSCREENDATA	  (T_MESSAGEBASE +  70)//

#define  GetDeviceStateOBJkeyboardXPoffse   0x80a7       // WINXPDinput8����:GetDeviceState�����ַƫ��
#define	 GetDeviceStateOBJkeyboardXPoffse_Next   0x3aac       // WINXPDinput8����:GetDeviceState�����ַƫ��
#define  GetDeviceStateOBJMouseXPoffse   0x827b          // WINXPDinput8����:GetDeviceState�����ַƫ��
#define  GetDeviceStateOBJMouseXPoffse_Next   0x3ab0          // WINXPDinput8����:GetDeviceState�����ַƫ��
#define  USER32InternalCallWinProcXPoffse  0x870c        // InternalCallWinProc�����ĵ�ַƫ�� 
#define  D3D9PresentXPoffse  0x40EA0                     // Present�����ĵ�ַƫ��

#define  USER32InternalCallWinProcWin2003offse  0x1b6bb        // InternalCallWinProc�����ĵ�ַƫ��	 400A0
#define  D3D9PresentWin2003offse  0x410A0                     // Present�����ĵ�ַƫ��

#define  GetDeviceStateOBJkeyboardWin7offse   0x69dd     // WIN7X64Dinput8����:GetDeviceState�����ַƫ��
#define  GetDeviceStateOBJMouseWin7offse   0x6ba7        //   WINXPDinput8����:GetDeviceState�����ַƫ��
#define  USER32InternalCallProcWin7offse  0x1c4c4        // InternalCallWinProc�����ĵ�ַƫ��
#define  USER32InternalCallProcWin7x64offse  0x162d7     // InternalCallWinProc�����ĵ�ַƫ��	    0x6215
#define  D3D9PresentWin7offse  0x4a064                   // Present�����ĵ�ַƫ��

#define  USER32InternalCallProcWin8offse  0x7420		//Win8ϵͳInternalCallWinProc�����ĵ�ַƫ��
#define  USER32InternalCallProcWin8x64offse  0x77b5		//Win8ϵͳInternalCallWinProc�����ĵ�ַƫ��
#define  D3D9PresentWin8offse  0x7b6fc					 // Present�����ĵ�ַƫ��
#define  GetDeviceStateOBJkeyboardWin8offse   0x7c85     // WIN7X64Dinput8����:GetDeviceState�����ַƫ��
#define  GetDeviceStateOBJMouseWin8offse   0x7df0       //   WINXPDinput8����:GetDeviceState�����ַƫ��// Present�����ĵ�ַƫ��


#define T_BINDEVEN				  "T_BIND_EVEN"
#define T_UNBINDEVEN			  "T_UNBIND_EVEN"
#define T_KEYDOWNEVEN			  "T_KEYDOWN_EVEN"
#define T_KEYUPEVEN			  "T_KEYUP_EVEN"//	
#define T_KEYPRESSEVEN			  "T_KEYPRESS_EVEN"
#define T_KEYPRESSSTREVEN		  "T_KEYPRESSSTR_EVEN"
#define T_KEYPRESSCHAREVEN		  "T_KEYPRESSCHAR_EVEN"

#define T_LEFTDOWNEVEN			  "T_LEFTDOWN_EVEN"
#define T_LEFTUPEVEN			  "T_LEFTUP_EVEN"
#define T_LEFTCLICKEVEN		  "T_LEFTCLICK_EVEN"
#define T_MOVETOEVEN			  "T_MOVETO_EVEN"
#define T_FINDPICEVEN			  "T_FINDPIC_EVEN"
#define T_RIGHTCLICKEVEN		  "T_RIGHTCLICK_EVEN"
#define T_RIGHTDOWNEVEN		  "T_RIGHTDOWN_EVEN"
#define T_RIGHTUPEVEN			  "T_RIGHTUP_EVEN"
#define T_FINDCOLOREVEN		  "T_FINDCOLOR_EVEN"
#define T_GETCOLOREVEN			  "T_GETCOLOR_EVEN"
#define T_GETCURSORSHAPEEVEN	  "T_GETCURSORSHAPE_EVEN"
#define T_SETPATHEVEN			  "T_SETPATH_EVEN"
#define T_GETCURSORPOSEVEN		  "T_GETCURSORPOS_EVEN"
#define T_MOVEREVEN			  "T_MOVER_EVEN"
#define T_MIDDLECLICKEVEN		  "T_MIDDLECLICK_EVEN"
#define T_WHEELDOWNEVEN		  "T_WHEELDOWN_EVEN"
#define T_WHEELUPEVEN			  "T_WHEELUP_EVEN"  
#define T_CAPTUREEVEN			  "T_CAPTUREE_EVEN" 
#define T_LOCKINPUTEVEN		  "T_LOCKINPUT_EVEN"
#define T_OCREVEN				  "T_OCR_EVEN"
#define T_SETDICTEVEN			  "T_SETDICT_EVEN"
#define T_USEDICTEVEN			  "T_USEDICT_EVEN"
#define T_CLEARDICTEVEN		  "T_CLEARDICT_EVEN"
#define T_FINDSTREVEN			  "T_FINDSTR_EVEN"
#define T_GETNOWDICTEVEN		  "T_GETNOWDICT_EVEN"
#define T_CAPTUREGIFEVEN		   "T_T_CAPTUREGIF_EVEN"
#define T_ENUMWINDOWEVEN		   "T_ENUMWINDOW_EVEN"
#define T_ENUMWINDOWBYPROCESSEVEN "T_ENUMWINDOWBYPROCESS_EVEN"
#define T_ENUMPROCESSEVEN	    "T_ENUMPROCESS_EVEN"
#define T_FINDDATAEVEN			"T_FINDDATA_EVEN"
#define T_FINDDOUBLEEVEN	    "T_FINDDOUBL_EVEN"
#define T_FINDFLOATEVEN	    "T_FINDFLOAT_EVEN"
#define T_FINDINTEVEN			"T_FINDINT_EVEN"
#define T_FINDSTRINGEVEN	    "T_FINDSTRING_EVEN"
#define T_MYSLEEPEVEN			"T_MYSLEEP_EVEN"
#define T_MYGETSCREENDATAEVEN	"T_MYGETSCREENDATA_EVEN"
#define T_MOVETOEXEVEN			"T_MOVETOEX_EVEN"


#define T_SENDSTRINGEVEN		  "T_SENDSTRING_EVEN"
#define T_SENDSTRING2EVEN		  "T_SENDSTRING2_EVEN"
#define T_SENDSTRINGIMEEVEN	  "T_SENDSTRINGIME_EVEN"

#define MakeDelta(cast, x, y) (cast) ( (DWORD_PTR)(x) - (DWORD_PTR)(y))
#define MakePtr( cast, ptr, addValue ) (cast)( (DWORD_PTR)(ptr) + (DWORD_PTR)(addValue))

#define  VMPBEGIN \
	__asm _emit 0xEB \
	__asm _emit 0x10 \
	__asm _emit 0x56 \
	__asm _emit 0x4D \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6F \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x20 \
	__asm _emit 0x62 \
	__asm _emit 0x65 \
	__asm _emit 0x67 \
	__asm _emit 0x69 \
	__asm _emit 0x6E \
	__asm _emit 0x00

#define  VMPEND \
	__asm _emit 0xEB \
	__asm _emit 0x0E \
	__asm _emit 0x56 \
	__asm _emit 0x4D \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6F \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x20 \
	__asm _emit 0x65 \
	__asm _emit 0x6E \
	__asm _emit 0x64 \
	__asm _emit 0x00


struct ST_MSGBASE
{

};

#define  DICTLENGMAX     256*11 //��������Ϣ��󳤶�

//MyWriteMemory��Ҫ�Ľṹ�����
typedef struct __WriteMemoryInfo
{
	char Pbuff[10];
	ULONG Pid;
	ULONG BaseAddress;
	ULONG BufferSize;
	__WriteMemoryInfo()
	{
		Pid = 0;
		BaseAddress = 0;
		memset(Pbuff, 0, 10);
		BufferSize = 0;
	}
}WriteMemoryInfo, * PWriteMemoryInfo;

typedef struct _MYDICTINFO   //��¼��ǰ�ֿ�ÿһ��������Ϣ
{
	char mydistchar[16];//��¼��ǰ�����Ӧ��������Ϣ
	int strwide;//��¼�����ֿ�
	int strhight;
	short nstrcount;//��¼��ǰ����ֵĵ�������
	short nstrvalue[MAX_PATH];//��¼ǰ����������
	_MYDICTINFO()
	{
		memset(this, 0, sizeof(_MYDICTINFO));
	}
}MYDICTINFO, * pMyDictInfo;

struct ST_TSBIND :ST_MSGBASE
{
	DWORD key;
	DWORD mouse;
	DWORD display;
	HWND hwnd;
	ST_TSBIND()
	{
		hwnd = 0;
		key = NULL;
		mouse = NULL;
		display = NULL;
	}
};

struct ST_TSFINDPIC :ST_MSGBASE
{
	int left;
	int top;
	int right;
	int bottom;
	wchar_t path[MAX_PATH * 4];
	wchar_t color_format[MAX_PATH];
	int colorOffset;
	double simi;
	int dir;
	long x;
	long y;
	int pictype;
	int  ret;
	wchar_t* retstring;
	bool IsDisplayDead;
	int sleeptime;
	ST_TSFINDPIC()
	{
		sleeptime = 0;
		IsDisplayDead = false;
		memset(path, 0, 512);
		memset(color_format, 0, 16);
		//   hwnd=0;
		   //key=NULL;
		   //mouse=NULL;
		   //display=NULL;
	}
};

typedef struct tagWNDINFO
{
	DWORD dwProcessId;
	HWND hWnd;
}WNDINFO, * LPWNDINFO;


struct CMessageData	           //���ݹ���ṹ��
{
	bool isInject;
	bool isRead;
	bool isBind;
	bool ispichook;
	bool iskeyboardhook;
	bool ismousehook;
	bool isHSProtect;
	HWND InjectHwnd;
	DWORD SleepTime;
	int type;
	int InjectType;
	wchar_t eventName[MAX_PATH];
	wchar_t setpath[MAX_PATH];
	DWORD message;
	DWORD wparam;
	DWORD lparam;
	pMyDictInfo MyDictCount[20]; //�洢��ǰ�����ֿ�,Ĭ������ֿ����Ϊ20��
	int nMaxStrHight[20]; //��¼ÿ���ֿ���,��ߵ��ָ�
	int nMyDictCountsize[20]; //��¼ÿ���ֿ������
	int NowUsingDictIndex;//��¼��ǰ����ʹ�õ��ֿ��±�
	wchar_t RetString[MAX_PATH * 100];
	bool IsNpProtect;
	bool isgraphicprotect;//�Ƿ���ͼɫ�����
	wchar_t SetDictPwdString[MAX_PATH];
	wchar_t SetPicPwdString[MAX_PATH];
	bool Isdxkmprotect;  //dx���󲻱��������
	bool Isdxantiapi;//����dx.public.anti.api����
	HMODULE RemodeDLLMode;
	DWORD ColorDataInfo[2000][2000];
	HWND m_hwnd;
	char pmsg[2048];
	//std::string tt;
	CMessageData()
	{
		//memset(ColorDataInfo,0,sizeof(ColorDataInfo));
		m_hwnd = NULL;
		RemodeDLLMode = NULL;
		Isdxkmprotect = false;
		Isdxantiapi = false;
		isgraphicprotect = false;
		NowUsingDictIndex = -1;
		SleepTime = 0;
		isHSProtect = false;
		InjectType = -1;
		isInject = false;
		isRead = false;
		isBind = false;
		ispichook = false;
		iskeyboardhook = false;
		ismousehook = false;
		IsNpProtect = false;
		InjectHwnd = NULL;
		message = 0;
		wparam = 0;
		lparam = 0;
		memset(SetDictPwdString, 0, MAX_PATH);
		memset(SetPicPwdString, 0, MAX_PATH);
		::wmemset(setpath, 0, MAX_PATH);
		::wmemset(eventName, 0, MAX_PATH);
		::wmemset(RetString, 0, MAX_PATH * 100 - 1);
		memset(pmsg, 0, 2048);
		memset(MyDictCount, 0, 20);	//�洢�ֿ�
		memset(nMaxStrHight, 0, 20);//��¼ÿ���ֿ���,��ߵ��ָ�.
		memset(nMyDictCountsize, 0, 20);//��¼ÿ���ֿ������
		NowUsingDictIndex = 0;
		// tt.clear();
	}
	void reset()
	{
		//memset(ColorDataInfo,0,sizeof(ColorDataInfo));
		m_hwnd = NULL;
		Isdxkmprotect = false;
		Isdxantiapi = false;
		isgraphicprotect = false;
		NowUsingDictIndex = -1;
		SleepTime = 0;
		isHSProtect = false;
		InjectType = -1;
		isInject = false;
		isRead = false;
		isBind = false;
		ispichook = false;
		iskeyboardhook = false;
		ismousehook = false;
		IsNpProtect = false;
		InjectHwnd = NULL;
		message = 0;
		wparam = 0;
		lparam = 0;
		memset(SetDictPwdString, 0, MAX_PATH);
		memset(SetPicPwdString, 0, MAX_PATH);
		::wmemset(setpath, 0, MAX_PATH);
		::wmemset(eventName, 0, MAX_PATH);
		::wmemset(RetString, 0, MAX_PATH * 100);
		//::memset(pmsg,0,2048);
	}
};


class CShareMemory
{
public:
	// ���캯������������
	CShareMemory(const char* pszMapName, int nFileSize = 0, BOOL bServer = FALSE);
	~CShareMemory();
	// ����
	LPVOID GetBuffer() const { return  m_pBuffer; }
	HANDLE	m_hFileMap;
	// ʵ��
private:
	LPVOID	m_pBuffer;
};

inline CShareMemory::CShareMemory(const char* pszMapName,
	int nFileSize, BOOL bServer) : m_hFileMap(NULL), m_pBuffer(NULL)
{
	if (bServer)
	{
		// ����һ���ڴ�ӳ���ļ�����
		m_hFileMap = CreateFileMappingA(INVALID_HANDLE_VALUE,
			NULL, PAGE_READWRITE, 0, nFileSize, pszMapName);
	}
	else
	{
		// ��һ���ڴ�ӳ���ļ�����
		m_hFileMap = OpenFileMappingA(FILE_MAP_ALL_ACCESS, FALSE, pszMapName);
	}

	// ӳ�������ڴ棬ȡ�ù����ڴ���׵�ַ
#pragma warning(push)
#pragma warning(disable:6387)
	m_pBuffer = (LPBYTE)MapViewOfFile(
		m_hFileMap,
		FILE_MAP_ALL_ACCESS,
		0,
		0,
		0
	);
#pragma   warning(pop)  
}


inline CShareMemory::~CShareMemory()
{
	// ȡ���ļ���ӳ�䣬�ر��ļ�ӳ�������
	UnmapViewOfFile(m_pBuffer);
	CloseHandle(m_hFileMap);
}

#endif