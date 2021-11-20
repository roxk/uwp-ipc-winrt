#include "pch.h"
#include <winrt/WinRTServer.h>
#include <thread>
#include <Windows.h>
#include <chrono>

using namespace winrt;
using namespace Windows::Foundation;

void OnInitialized(IInspectable const& sender, IInspectable const& e)
{
    OutputDebugString(L"Initialized callback");
}

int CALLBACK WinMain(_In_  HINSTANCE, _In_  HINSTANCE, _In_  LPSTR, _In_  int)
{
    init_apartment();
    OutputDebugString(L"launcher started\n");
    WinRTServer::Server server;
    server.Initialized(&OnInitialized);
    server.Initialize();
    return 0;
}
