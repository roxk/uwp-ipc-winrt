#include "pch.h"
#include <Server.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.ApplicationModel.h>
#include <winrt/Windows.ApplicationModel.Core.h>

using namespace winrt;

int32_t __stdcall WINRT_GetActivationFactory(void* classId, void** factory) noexcept;

struct GetActivationFactoryServer : implements<GetActivationFactoryServer, Windows::Foundation::IGetActivationFactory>
{
    IInspectable GetActivationFactory(hstring activatableClassId)
    {
        com_ptr<Windows::Foundation::IActivationFactory> factory;
        if (auto result = WINRT_GetActivationFactory(get_abi(activatableClassId), reinterpret_cast<void**>(factory.put())); result != 0)
        {
            throw hresult_error(result);
        }
        return factory.as<IInspectable>();
    }
};

int CALLBACK WinMain(_In_  HINSTANCE, _In_  HINSTANCE, _In_  LPSTR, _In_  int)
{
    init_apartment();
    auto server = make<GetActivationFactoryServer>();
    Windows::ApplicationModel::Core::CoreApplication::RunWithActivationFactories(server);
    return 0;
}