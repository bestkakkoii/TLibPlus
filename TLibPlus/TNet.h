#pragma once


class TNet
{
public:
	bool _NetWSAStartup();
	bool _NetClose();
	long _NetSocket(wchar_t* ntype);
	bool _NetCloseSocket(long sockhandle);
	bool _NetConnect(long sockhandle, const char* serv_ip, unsigned short serv_port);
	bool _NetBind(long sockhandle, unsigned short serv_port);
	bool _NetListen(long sockhandle, long ncout);
	bool _NetAccept(long sockhandle, const char*& serv_ip);
	bool _NetRecv(long sockhandle, char*& Recvbuff);
	bool _NetSend(long sockhandle, const char* data);
	bool _NetSendTo(long sockhandle, const char* data);
	bool _NetRecvFrom(long sockhandle, char*& data, long length, const char* serv_ip, unsigned short rPort);
	wchar_t* GetExIp(const char* name);
	wchar_t* GetReadIp(const char* url);
	wchar_t* GetLocalIp();
};
