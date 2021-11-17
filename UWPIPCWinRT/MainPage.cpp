#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include <winrt/WinRTServer.h>

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace WinRTServer;

namespace winrt::UWPIPCWinRT::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
        Server server;
        server.Initialize();
        auto i = 0;
    }
}
