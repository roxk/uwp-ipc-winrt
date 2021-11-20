/* Header file automatically generated from WinRTServer.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0231 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __WinRTServer_h__
#define __WinRTServer_h__
#ifndef __WinRTServer_p_h__
#define __WinRTServer_p_h__


#pragma once

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0xe0000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "Windows.Foundation.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
#if defined(__MIDL_USE_C_ENUM)
#define MIDL_ENUM enum
#else
#define MIDL_ENUM enum class
#endif
/* Forward Declarations */
#ifndef ____x_ABI_CWinRTServer_CIServer_FWD_DEFINED__
#define ____x_ABI_CWinRTServer_CIServer_FWD_DEFINED__
namespace ABI {
    namespace WinRTServer {
        interface IServer;
    } /* WinRTServer */
} /* ABI */
#define __x_ABI_CWinRTServer_CIServer ABI::WinRTServer::IServer

#endif // ____x_ABI_CWinRTServer_CIServer_FWD_DEFINED__

#ifndef ____x_ABI_CWinRTServer_CIServerFactory_FWD_DEFINED__
#define ____x_ABI_CWinRTServer_CIServerFactory_FWD_DEFINED__
namespace ABI {
    namespace WinRTServer {
        interface IServerFactory;
    } /* WinRTServer */
} /* ABI */
#define __x_ABI_CWinRTServer_CIServerFactory ABI::WinRTServer::IServerFactory

#endif // ____x_ABI_CWinRTServer_CIServerFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions



#ifndef DEF___FITypedEventHandler_2_IInspectable_IInspectable_USE
#define DEF___FITypedEventHandler_2_IInspectable_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c7e65ce2-fad5-5e3b-9c58-186ca8c1dd57"))
ITypedEventHandler<IInspectable*,IInspectable*> : ITypedEventHandler_impl<IInspectable*,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,IInspectable*> __FITypedEventHandler_2_IInspectable_IInspectable_t;
#define __FITypedEventHandler_2_IInspectable_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_IInspectable ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,IInspectable*>
//#define __FITypedEventHandler_2_IInspectable_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_IInspectable_USE */






#pragma warning (push)
#pragma warning (disable:4668) 
#pragma warning (disable:4001) 
#pragma once 
#pragma warning (pop)
namespace ABI {
    namespace WinRTServer {
        class Server;
    } /* WinRTServer */
} /* ABI */



/*
 *
 * Interface WinRTServer.IServer
 *
 * Interface is a part of the implementation of type WinRTServer.Server
 *
 *
 */
#if !defined(____x_ABI_CWinRTServer_CIServer_INTERFACE_DEFINED__)
#define ____x_ABI_CWinRTServer_CIServer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_WinRTServer_IServer[] = L"WinRTServer.IServer";
namespace ABI {
    namespace WinRTServer {
        /* [object, exclusiveto, uuid("9a860baf-a1e9-44e1-9035-78fd22220046"), version] */
        MIDL_INTERFACE("9a860baf-a1e9-44e1-9035-78fd22220046")
        IServer : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE Initialize(void) = 0;
            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Initialized(
                /* [in] */__FITypedEventHandler_2_IInspectable_IInspectable * handler,
                /* [retval, out] */EventRegistrationToken * token
                ) = 0;
            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Initialized(
                /* [in] */EventRegistrationToken token
                ) = 0;
            
        };

        MIDL_CONST_ID IID & IID_IServer=_uuidof(IServer);
        
    } /* WinRTServer */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWinRTServer_CIServer;
#endif /* !defined(____x_ABI_CWinRTServer_CIServer_INTERFACE_DEFINED__) */


/*
 *
 * Interface WinRTServer.IServerFactory
 *
 * Interface is a part of the implementation of type WinRTServer.Server
 *
 *
 */
#if !defined(____x_ABI_CWinRTServer_CIServerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWinRTServer_CIServerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_WinRTServer_IServerFactory[] = L"WinRTServer.IServerFactory";
namespace ABI {
    namespace WinRTServer {
        /* [object, exclusiveto, uuid("f19bff5c-6e8f-4c1d-a5bb-e50591ca69c2"), version] */
        MIDL_INTERFACE("f19bff5c-6e8f-4c1d-a5bb-e50591ca69c2")
        IServerFactory : public IInspectable
        {
        public:
            
        };

        MIDL_CONST_ID IID & IID_IServerFactory=_uuidof(IServerFactory);
        
    } /* WinRTServer */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWinRTServer_CIServerFactory;
#endif /* !defined(____x_ABI_CWinRTServer_CIServerFactory_INTERFACE_DEFINED__) */


/*
 *
 * Class WinRTServer.Server
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    WinRTServer.IServer ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_WinRTServer_Server_DEFINED
#define RUNTIMECLASS_WinRTServer_Server_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_WinRTServer_Server[] = L"WinRTServer.Server";
#endif


#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWinRTServer_CIServer_FWD_DEFINED__
#define ____x_ABI_CWinRTServer_CIServer_FWD_DEFINED__
typedef interface __x_ABI_CWinRTServer_CIServer __x_ABI_CWinRTServer_CIServer;

#endif // ____x_ABI_CWinRTServer_CIServer_FWD_DEFINED__

#ifndef ____x_ABI_CWinRTServer_CIServerFactory_FWD_DEFINED__
#define ____x_ABI_CWinRTServer_CIServerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWinRTServer_CIServerFactory __x_ABI_CWinRTServer_CIServerFactory;

#endif // ____x_ABI_CWinRTServer_CIServerFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if !defined(____FITypedEventHandler_2_IInspectable_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_IInspectable __FITypedEventHandler_2_IInspectable_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_IInspectable;

typedef struct __FITypedEventHandler_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_IInspectableVtbl;

interface __FITypedEventHandler_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_IInspectable_INTERFACE_DEFINED__




#pragma warning (push)
#pragma warning (disable:4668) 
#pragma warning (disable:4001) 
#pragma once 
#pragma warning (pop)


/*
 *
 * Interface WinRTServer.IServer
 *
 * Interface is a part of the implementation of type WinRTServer.Server
 *
 *
 */
#if !defined(____x_ABI_CWinRTServer_CIServer_INTERFACE_DEFINED__)
#define ____x_ABI_CWinRTServer_CIServer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_WinRTServer_IServer[] = L"WinRTServer.IServer";
/* [object, exclusiveto, uuid("9a860baf-a1e9-44e1-9035-78fd22220046"), version] */
typedef struct __x_ABI_CWinRTServer_CIServerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWinRTServer_CIServer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWinRTServer_CIServer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWinRTServer_CIServer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWinRTServer_CIServer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWinRTServer_CIServer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWinRTServer_CIServer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Initialize )(
        __x_ABI_CWinRTServer_CIServer * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Initialized )(
        __x_ABI_CWinRTServer_CIServer * This,
        /* [in] */__FITypedEventHandler_2_IInspectable_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Initialized )(
        __x_ABI_CWinRTServer_CIServer * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWinRTServer_CIServerVtbl;

interface __x_ABI_CWinRTServer_CIServer
{
    CONST_VTBL struct __x_ABI_CWinRTServer_CIServerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWinRTServer_CIServer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWinRTServer_CIServer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWinRTServer_CIServer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWinRTServer_CIServer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWinRTServer_CIServer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWinRTServer_CIServer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWinRTServer_CIServer_Initialize(This) \
    ( (This)->lpVtbl->Initialize(This) )

#define __x_ABI_CWinRTServer_CIServer_add_Initialized(This,handler,token) \
    ( (This)->lpVtbl->add_Initialized(This,handler,token) )

#define __x_ABI_CWinRTServer_CIServer_remove_Initialized(This,token) \
    ( (This)->lpVtbl->remove_Initialized(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWinRTServer_CIServer;
#endif /* !defined(____x_ABI_CWinRTServer_CIServer_INTERFACE_DEFINED__) */


/*
 *
 * Interface WinRTServer.IServerFactory
 *
 * Interface is a part of the implementation of type WinRTServer.Server
 *
 *
 */
#if !defined(____x_ABI_CWinRTServer_CIServerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWinRTServer_CIServerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_WinRTServer_IServerFactory[] = L"WinRTServer.IServerFactory";
/* [object, exclusiveto, uuid("f19bff5c-6e8f-4c1d-a5bb-e50591ca69c2"), version] */
typedef struct __x_ABI_CWinRTServer_CIServerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWinRTServer_CIServerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWinRTServer_CIServerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWinRTServer_CIServerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWinRTServer_CIServerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWinRTServer_CIServerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWinRTServer_CIServerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWinRTServer_CIServerFactoryVtbl;

interface __x_ABI_CWinRTServer_CIServerFactory
{
    CONST_VTBL struct __x_ABI_CWinRTServer_CIServerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWinRTServer_CIServerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWinRTServer_CIServerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWinRTServer_CIServerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWinRTServer_CIServerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWinRTServer_CIServerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWinRTServer_CIServerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWinRTServer_CIServerFactory;
#endif /* !defined(____x_ABI_CWinRTServer_CIServerFactory_INTERFACE_DEFINED__) */


/*
 *
 * Class WinRTServer.Server
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    WinRTServer.IServer ** Default Interface **
 *
 */

#ifndef RUNTIMECLASS_WinRTServer_Server_DEFINED
#define RUNTIMECLASS_WinRTServer_Server_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_WinRTServer_Server[] = L"WinRTServer.Server";
#endif


#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __WinRTServer_p_h__

#endif // __WinRTServer_h__
