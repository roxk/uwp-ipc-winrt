

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for C:\Users\Roxk\AppData\Local\Temp\WinRTServer.idl-a6868bc8:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __WinRTServer_p_h__
#define __WinRTServer_p_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

#if defined(__cplusplus)
#if defined(__MIDL_USE_C_ENUM)
#define MIDL_ENUM enum
#else
#define MIDL_ENUM enum class
#endif
#endif


/* Forward Declarations */ 

#ifndef ____x_ABI_CWinRTServer_CIServer_FWD_DEFINED__
#define ____x_ABI_CWinRTServer_CIServer_FWD_DEFINED__
typedef interface __x_ABI_CWinRTServer_CIServer __x_ABI_CWinRTServer_CIServer;

#endif 	/* ____x_ABI_CWinRTServer_CIServer_FWD_DEFINED__ */


#ifndef ____x_ABI_CWinRTServer_CIServerFactory_FWD_DEFINED__
#define ____x_ABI_CWinRTServer_CIServerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWinRTServer_CIServerFactory __x_ABI_CWinRTServer_CIServerFactory;

#endif 	/* ____x_ABI_CWinRTServer_CIServerFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_WinRTServer_0000_0000 */
/* [local] */ 






#pragma warning (push)
#pragma warning (disable:4668) 
#pragma warning (disable:4001) 
#pragma once 
#pragma warning (pop)



extern RPC_IF_HANDLE __MIDL_itf_WinRTServer_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_WinRTServer_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWinRTServer_CIServer_INTERFACE_DEFINED__
#define ____x_ABI_CWinRTServer_CIServer_INTERFACE_DEFINED__

/* interface __x_ABI_CWinRTServer_CIServer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWinRTServer_CIServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9a860baf-a1e9-44e1-9035-78fd22220046")
    __x_ABI_CWinRTServer_CIServer : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_Initialized( 
            /* [in] */ __FITypedEventHandler_2_IInspectable_IInspectable *handler,
            /* [out][retval] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_Initialized( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWinRTServer_CIServerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CWinRTServer_CIServer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CWinRTServer_CIServer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CWinRTServer_CIServer * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CWinRTServer_CIServer * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CWinRTServer_CIServer * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CWinRTServer_CIServer * This,
            /* [out] */ TrustLevel *trustLevel);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWinRTServer_CIServer, Initialize)
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __x_ABI_CWinRTServer_CIServer * This);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWinRTServer_CIServer, add_Initialized)
        HRESULT ( STDMETHODCALLTYPE *add_Initialized )( 
            __x_ABI_CWinRTServer_CIServer * This,
            /* [in] */ __FITypedEventHandler_2_IInspectable_IInspectable *handler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWinRTServer_CIServer, remove_Initialized)
        HRESULT ( STDMETHODCALLTYPE *remove_Initialized )( 
            __x_ABI_CWinRTServer_CIServer * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } __x_ABI_CWinRTServer_CIServerVtbl;

    interface __x_ABI_CWinRTServer_CIServer
    {
        CONST_VTBL struct __x_ABI_CWinRTServer_CIServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWinRTServer_CIServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWinRTServer_CIServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWinRTServer_CIServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWinRTServer_CIServer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWinRTServer_CIServer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWinRTServer_CIServer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWinRTServer_CIServer_Initialize(This)	\
    ( (This)->lpVtbl -> Initialize(This) ) 

#define __x_ABI_CWinRTServer_CIServer_add_Initialized(This,handler,token)	\
    ( (This)->lpVtbl -> add_Initialized(This,handler,token) ) 

#define __x_ABI_CWinRTServer_CIServer_remove_Initialized(This,token)	\
    ( (This)->lpVtbl -> remove_Initialized(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWinRTServer_CIServer_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CWinRTServer_CIServerFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWinRTServer_CIServerFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWinRTServer_CIServerFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWinRTServer_CIServerFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f19bff5c-6e8f-4c1d-a5bb-e50591ca69c2")
    __x_ABI_CWinRTServer_CIServerFactory : public IInspectable
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWinRTServer_CIServerFactoryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CWinRTServer_CIServerFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CWinRTServer_CIServerFactory * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CWinRTServer_CIServerFactory * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CWinRTServer_CIServerFactory * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CWinRTServer_CIServerFactory * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CWinRTServer_CIServerFactory * This,
            /* [out] */ TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CWinRTServer_CIServerFactoryVtbl;

    interface __x_ABI_CWinRTServer_CIServerFactory
    {
        CONST_VTBL struct __x_ABI_CWinRTServer_CIServerFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWinRTServer_CIServerFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWinRTServer_CIServerFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWinRTServer_CIServerFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWinRTServer_CIServerFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWinRTServer_CIServerFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWinRTServer_CIServerFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWinRTServer_CIServerFactory_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


