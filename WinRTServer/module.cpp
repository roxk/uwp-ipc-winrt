#include <wrl\module.h>
#include <roapi.h>
#include <Windows.ApplicationModel.Core.h>
#include <WinRTServer.h>

using namespace ABI::Windows::ApplicationModel::Core;
using namespace ABI::Windows::Foundation;
using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

class ExeServerGetActivationFactory WrlFinal : public RuntimeClass<IGetActivationFactory, FtmBase>
{
public:
    STDMETHODIMP GetActivationFactory(_In_ HSTRING activatableClassId, _COM_Outptr_ IInspectable** factory)
    {
        *factory = nullptr;
        ComPtr<IActivationFactory> activationFactory;
        HRESULT hr = Module<OutOfProc>::GetModule().GetActivationFactory(activatableClassId, &activationFactory);
        if (SUCCEEDED(hr))
        {
            *factory = activationFactory.Detach();
        }
        return hr;
    }
};

int CALLBACK WinMain(_In_  HINSTANCE, _In_  HINSTANCE, _In_  LPSTR, _In_  int)
{
    while (true)
    {
        Sleep(1);
    }
    return 1;
    /*Microsoft::WRL::Wrappers::RoInitializeWrapper roInit(RO_INIT_MULTITHREADED);
    if (FAILED(roInit)) return 0;

    ComPtr<ICoreApplication> coreApp;
    if (FAILED(GetActivationFactory(HStringReference(RuntimeClass_Windows_ApplicationModel_Core_CoreApplication).Get(), &coreApp))) return 0;

    auto activationFactory = Make<ExeServerGetActivationFactory>();
    if (!activationFactory) return 0;

    coreApp->RunWithActivationFactories(activationFactory.Get());

    return 0;*/
}