#include "pch.h"
#include "Server.h"
#if __has_include("Server.g.cpp")
#include "Server.g.cpp"
#endif

using namespace winrt;
using namespace WinRTServer;

winrt::WinRTServer::implementation::Server::Server()
{
}

void winrt::WinRTServer::implementation::Server::Initialize()
{
	OutputDebugString(L"hi");
	mInitialized(nullptr, nullptr);
}
