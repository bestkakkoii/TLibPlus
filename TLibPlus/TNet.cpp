#include "TNet.h"


#include <Winsock2.h>
#include <WS2tcpip.h> 
#include <stdio.h>
#include <Wininet.h>
#include <string>
//#pragma comment(lib,"ws2_32.lib")
//#pragma comment(lib,"Wininet.lib")


static SOCKADDR_IN serv_add = { 0 };

class Net {
public:
	Net(void);
	~Net(void);
	static bool netwsastartup();
	static bool netclose();
	static SOCKET netsocket(wchar_t* sztype);
	static bool netclosesocket(SOCKET sockhandle);
	static bool netconnect(SOCKET sockhandle, const char* serv_ip, u_short serv_port);
	static bool netbind(SOCKET sockhandle, u_short serv_port);
	static bool netlisten(SOCKET sockhandle, long ncout);
	static bool netaccept(SOCKET sockhandle, const char*& serv_ip);
	static bool netrecv(SOCKET sockhandle, char*& Recvbuff);
	static bool netsend(SOCKET sockhandle, const char data[]);
	static bool netsendto(SOCKET sockhandle, const char data[]);
	static bool netrecvfrom(SOCKET sockhandle, char*& data, long length, const char* serv_ip, u_short rPort);
};



#pragma region net
bool TNet::_NetWSAStartup()
{
	return Net::netwsastartup();
}

bool TNet::_NetClose()
{
	return Net::netclose();
}

long TNet::_NetSocket(wchar_t* sztype)
{
	return (LONG)Net::netsocket(sztype);
}

bool TNet::_NetCloseSocket(long sockhandle)
{
	return Net::netclosesocket((SOCKET)sockhandle);
}

bool TNet::_NetConnect(long sockhandle, const char * serv_ip, unsigned short serv_port)
{
	return Net::netconnect((SOCKET)sockhandle, (const char*)serv_ip, (u_short)serv_port);
}

bool TNet::_NetBind(long sockhandle, unsigned short serv_port)
{
	return Net::netbind((SOCKET)sockhandle, (u_short)serv_port);
}

bool TNet::_NetListen(long sockhandle, long ncout)
{
	return Net::netlisten((SOCKET)sockhandle, (int)ncout);
}

bool TNet::_NetAccept(long sockhandle, const char *& serv_ip)
{
	return Net::netaccept((SOCKET)sockhandle, serv_ip);
}

bool TNet::_NetRecv(long sockhandle, char *& Recvbuff)
{
	return Net::netrecv((SOCKET)sockhandle, Recvbuff);
}

bool TNet::_NetSend(long sockhandle, const char * data)
{
	return Net::netsend((SOCKET)sockhandle, (const char*)data);
}

bool TNet::_NetSendTo(long sockhandle, const char * data)
{
	return Net::netsendto((SOCKET)sockhandle, (const char*)data);
}

bool TNet::_NetRecvFrom(long sockhandle, char *& data, long length, const char * serv_ip, unsigned short rPort)
{
	return Net::netrecvfrom((SOCKET)sockhandle, data, (long)length, (const char*)serv_ip, (u_short)rPort);
}
#pragma endregion



//#pragma comment(lib,"ws2_32.lib")
//#define MALLOC(n, type) ( (type *) malloc( (n) * sizeof(type) ) )
Net::Net(void)
{
}


Net::~Net(void)
{

}



bool Net::netwsastartup()
{
	//³õÊ¼»¯Ì×½Ó×Ö¿â
	WORD w_req = MAKEWORD(2, 2);//°æ±¾ºÅ
	WSADATA wsadata;
	long err;
	bool bret = false;
	err = WSAStartup(w_req, &wsadata);
	if (err != NULL)
		return bret;

	//¼ì²â°æ±¾ºÅ
	if (LOBYTE(wsadata.wVersion) != 2 || HIBYTE(wsadata.wHighVersion) != 2)
		WSACleanup();
	else
		bret = true;

	return bret;
}

bool Net::netclose()
{
	return (WSACleanup() == 0);
}

SOCKET Net::netsocket(wchar_t* sztype)
{
	long type = 0;
	long protocol = 0;

	_wcslwr_s(sztype, wcslen(sztype) + 1);

	const wchar_t* a = sztype;
	
	if (_wcsicmp(a, L"tcp") == 0)
	{
		type = SOCK_STREAM;
		protocol = IPPROTO_TCP;
	}
	else if (_wcsicmp(a, L"udp") == 0)
	{
		type = SOCK_STREAM;
		protocol = IPPROTO_UDP;
	}
	else
	{
		return NULL;
	}
	SOCKET slisten  = socket(AF_INET, type, protocol);
	if (slisten == INVALID_SOCKET) {
		return NULL;
	}
	return slisten;
}

bool Net::netclosesocket(SOCKET sockhandle)
{
	return (closesocket(sockhandle) == 0);
}

bool Net::netconnect(SOCKET sockhandle, const char* serv_ip, u_short serv_port)
{
	SOCKADDR_IN serv_addr{ 0 };
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(serv_port);
	inet_pton(AF_INET, serv_ip, &serv_addr.sin_addr);

	return (connect(sockhandle, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) != INVALID_SOCKET);
}

bool Net::netbind(SOCKET sockhandle, u_short serv_port)
{
	serv_add.sin_family = AF_INET;
	serv_add.sin_port = htons(serv_port);
	return (bind(sockhandle, (SOCKADDR*)&serv_add, sizeof(SOCKADDR)) != SOCKET_ERROR);
}

bool Net::netlisten(SOCKET sockhandle, long ncout)
{
	return (listen(sockhandle, SOMAXCONN_HINT(ncout)) == 0);
}

bool Net::netaccept(SOCKET sockhandle, const char*& serv_ip)
{
	SOCKADDR_IN accept_addr{ 0 };
	int len = sizeof(SOCKADDR);
	bool bret = (accept(sockhandle, (SOCKADDR*)&accept_addr, &len) != SOCKET_ERROR);
	char pStringBuf[256] = { 0 };
	serv_ip = inet_ntop(AF_INET, &accept_addr.sin_addr, pStringBuf, sizeof(pStringBuf));

	return bret;
}

bool Net::netrecv(SOCKET sockhandle, char*& Recvbuff)
{
	long end = recv(sockhandle, Recvbuff, 1024, 0);
	Recvbuff[end] = '\0';
	return (end != SOCKET_ERROR);
}

bool Net::netsend(SOCKET sockhandle, const char data[])
{
	return (send(sockhandle, data, strlen(data), 0) != SOCKET_ERROR);
}

bool Net::netsendto(SOCKET sockhandle, const char data[])
{
	return (sendto(sockhandle, data, strlen(data), 0, (struct sockaddr*)&serv_add, sizeof(serv_add)) != SOCKET_ERROR);
}

bool Net::netrecvfrom(SOCKET sockhandle, char*& data,long length, const char* serv_ip, u_short rPort)
{
	SOCKADDR_IN  addrClient{};
	addrClient.sin_family = AF_INET;
	addrClient.sin_port = htons(rPort);
	inet_pton(AF_INET, serv_ip, &addrClient.sin_addr);
	int nlen = sizeof(addrClient);

	return (recvfrom(sockhandle, data, length, 0, (SOCKADDR*)&addrClient, &nlen) != SOCKET_ERROR);
}


BOOL  GetRealIpByDomainName(char* szHost, char szIp[50][100], int* nCount)
{
	WSADATA wsaData;
	HOSTENT* pHostEnt;
	int nAdapter = 0;
	struct sockaddr_in   sAddr;
	if (WSAStartup(0x0101, &wsaData))
	{
		return FALSE;
	}
	pHostEnt = gethostbyname(szHost);
	if (pHostEnt)
	{
		while (pHostEnt->h_addr_list[nAdapter])
		{
			memcpy(&sAddr.sin_addr.s_addr, pHostEnt->h_addr_list[nAdapter], pHostEnt->h_length);

			sprintf_s(szIp[nAdapter], "%s", inet_ntoa(sAddr.sin_addr));

			nAdapter++;
		}

		*nCount = nAdapter;
	}
	else
	{
		DWORD  dwError = GetLastError();
		*nCount = 0;
	}
	WSACleanup();
	return TRUE;
}

wchar_t* TNet::GetExIp(const char* name)
{
	int nIpCount = 0;
	char szIpList[50][100] = { 0 };
	char szDomain[256] = { 0 };
	char szIp[1024] = { 0 };
	strcpy_s(szDomain, name);
	GetRealIpByDomainName(szDomain, szIpList, &nIpCount);

	for (int i = 0; i < nIpCount; i++)
	{
		strcat_s(szIp, szIpList[i]);
		strcat_s(szIp, "\t");
	}
	char* A = szIp;
	const size_t cSize = strlen(A) + 1;
	wchar_t* B = new wchar_t[cSize];
	mbstowcs(B, A, cSize);
	return B;
}

wchar_t* TNet::GetReadIp(const char* url)
{
	HINTERNET net = InternetOpenA("IP retriever",
		INTERNET_OPEN_TYPE_PRECONFIG,
		NULL,
		NULL,
		0);

	HINTERNET conn = InternetOpenUrlA(net,
		url,
		NULL,
		0,
		INTERNET_FLAG_RELOAD,
		0);

	char buffer[4096] = { 0 };
	DWORD read;

	InternetReadFile(conn, buffer, sizeof(buffer) / sizeof(buffer[0]), &read);
	InternetCloseHandle(net);
	std::string A = std::string(buffer, read);
	if ((char*)A.c_str() == NULL)
		return NULL;
	const char* C = A.c_str();
	const size_t cSize = strlen(C) + 1;
	wchar_t* B = new wchar_t[cSize];
	mbstowcs(B, C, cSize);
	return B;
}

wchar_t* TNet::GetLocalIp()
{
	char szText[256] = { 0 };
	int iRet = gethostname(szText, 256);
	if (iRet)
	{
		return NULL;
	}
	struct addrinfo hints, * res;
	memset(&hints, 0, sizeof(addrinfo));
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_family = AF_INET;
	int hosttem = getaddrinfo(szText, "", &hints, &res);
	if (hosttem)
	{
		return NULL;
	}
	in_addr local_ip = { 0 };
	local_ip.S_un.S_addr = ((sockaddr_in*)(res->ai_addr))->sin_addr.s_addr;
	char str[256] = { 0 };
	inet_ntop(AF_INET, &(local_ip.S_un.S_addr), str, 256);
	char* A = str;
	const size_t cSize = strlen(A) + 1;
	wchar_t* B = new wchar_t[cSize];
	mbstowcs(B, A, cSize);
	return B;
}