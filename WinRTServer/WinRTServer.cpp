#include <wrl.h>
#include <winerror.h>
#include <Windows.Foundation.h>
#include <wrl\implements.h>
#include <wrl\event.h>
#include <windows.system.threading.h>

#include "WinRTServer.h"

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::WinRTServer;
using namespace ABI::Windows::Foundation;
using namespace ABI::Windows::System::Threading;

namespace ABI {
	namespace WinRTServer
    {
        class Server WrlFinal : public RuntimeClass<IServer>
        {
            InspectableClass(RuntimeClass_WinRTServer_Server, TrustLevel::BaseTrust)
        public:
            HRESULT RuntimeClassInitialize()
            {
                return S_OK;
            }

            // IAppliance
            STDMETHODIMP Initialize() override
            {
                OutputDebugString(L"hi\n");
                return S_OK;
            }
        };

        class ServerFactory WrlFinal : public AgileActivationFactory<IServerFactory>
        {
        public:
            // IActivationFactory
            STDMETHODIMP ActivateInstance(_COM_Outptr_ IInspectable** server) override
            {
                return MakeAndInitialize<Server>(server);
            }
        };
        ActivatableClassWithFactory(Server, ServerFactory)
    }
}
