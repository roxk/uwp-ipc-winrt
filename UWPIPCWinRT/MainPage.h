#pragma once

#include "MainPage.g.h"

namespace winrt::UWPIPCWinRT::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void OnInitialized(Windows::Foundation::IInspectable const& sender, Windows::Foundation::IInspectable const& args);
    };
}

namespace winrt::UWPIPCWinRT::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
