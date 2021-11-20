#pragma once

#include "Server.g.h"

namespace winrt::WinRTServer::implementation
{
	struct Server : ServerT<Server>
	{
	private:
		event<Windows::Foundation::TypedEventHandler<IInspectable, IInspectable>> mInitialized;
	public:
		Server();
		void Initialize();
		void Initialized(event_token token)
		{
			mInitialized.remove(token);
		}
		event_token Initialized(Windows::Foundation::TypedEventHandler<IInspectable, IInspectable> const& handler)
		{
			return mInitialized.add(handler);
		}
	};
}

namespace winrt::WinRTServer::factory_implementation
{
	struct Server : ServerT<Server, implementation::Server>
	{
	};
}
