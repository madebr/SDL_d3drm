#ifndef SDL_WINGLUE_H
#define SDL_WINGLUE_H

#include <SDL3/SDL.h>

#ifdef __cplusplus
#define SDL_EXTERN_C extern "C"
#else
#define SDL_EXTERN_C
#endif

#define SDL_FAR

#ifdef _WIN32
#define SDL_CDECL __cdecl
#define SDL_STDCALL __stdcall
#else
#define SDL_CDECL
#define SDL_STDCALL
#endif

typedef int SDL_BOOL;
typedef SDL_GUID *SDL_LPGUID;
typedef SDL_GUID SDL_REFIID;
typedef SDL_GUID SDL_IID;
typedef SDL_IID *SDL_LPIID;
#ifdef __cplusplus
#define SDL_REFGUID const SDL_GUID &
#else
#define SDL_REFGUID const SDL_GUID *
#endif
typedef SDL_GUID SDL_REFCLSID;
typedef Uint32 SDL_ULONG;
typedef Sint32 SDL_LONG;
typedef Uint32 SDL_HRESULT;
typedef Uint32 SDL_DWORD;
typedef Uint16 SDL_WORD;
typedef Uint8 SDL_BYTE;
typedef SDL_BOOL *SDL_LPBOOL;
typedef SDL_LONG *SDL_LPLONG;
typedef SDL_DWORD *SDL_LPDWORD;
typedef SDL_WORD *SDL_LPWORD;
typedef void *SDL_HMODULE;
typedef void *SDL_HWND;
typedef void *SDL_HDC;
typedef void *SDL_LPVOID;
typedef void *SDL_HANDLE;
typedef void *SDL_HRSRC;
typedef const char *SDL_LPCSTR;
typedef char *SDL_LPSTR;
typedef wchar_t *SDL_LPWSTR;
#ifdef UNICODE
typedef const wchar_t *SDL_LPCTSTR;
#else
typedef const char SDL_LPCTSTR;
#endif
#define SDL_STDAPI SDL_HRESULT SDL_STDCALL
#define SDL_WINAPI SDL_STDCALL
#define SDL_PASCAL SDL_STDCALL

#ifdef SDL_INITGUID
#define SDL_DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) SDL_EXTERN_C const SDL_GUID DECLSPEC_SELECTANY name = { l, w1, w2, { b1, b2, b3, b4, b5, b6, b7, b8 } }
#else
/* __declspec(selectany) must be applied to initialized objects on GCC 5 hence must not be used here. */
#define SDL_DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) SDL_EXTERN_C const SDL_GUID name
#endif

#ifdef __cplusplus
#define SDL_DECLARE_INTERFACE(iface) \
    struct iface
#define SDL_DECLARE_INTERFACE_(iface, baseiface) \
    struct iface : public baseiface
#define SDL_THIS
#define SDL_THIS_
#define SDL_PURE =0
#define SDL_STDMETHOD(name) virtual SDL_HRESULT SDL_STDCALL name
#define SDL_STDMETHOD_(ret,name) virtual ret SDL_STDCALL name
#else
#define SDL_DECLARE_INTERFACE(iface) \
    typedef struct iface { const struct iface ## Vtbl *lpVtbl; } iface; typedef const struct iface ## Vtbl iface##Vtbl; struct iface##Vtbl
#define SDL_DECLARE_INTERFACE_(iface, baseiface) \
    SDL_DECLARE_INTERFACE(iface)
#define SDL_THIS SDL_INTERFACE*
#define SDL_THIS_ SDL_INTERFACE*,
#define SDL_PURE
#define SDL_STDMETHOD(name) SDL_HRESULT (SDL_STDCALL * name)
#define SDL_STDMETHOD_(ret,name) ret (SDL_STDCALL * name)
#endif

#define SDL_IUNKNOWN_METHODS(kind) \
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) kind; \
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) kind; \
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) kind

#define SDL_INTERFACE IUnknown
SDL_DECLARE_INTERFACE(IUnknown)
{
    SDL_IUNKNOWN_METHODS(SDL_PURE);
};
#undef SDL_INTERFACE

typedef struct tagRECT {
    SDL_LONG left;
    SDL_LONG top;
    SDL_LONG right;
    SDL_LONG bottom;
} RECT,*PRECT,*NPRECT,*LPRECT;

typedef IUnknown *SDL_LPUNKNOWN;

typedef struct tagPALETTEENTRY {
    SDL_BYTE peRed;
    SDL_BYTE peGreen;
    SDL_BYTE peBlue;
    SDL_BYTE peFlags;
} PALETTEENTRY,*PPALETTEENTRY,*LPPALETTEENTRY;

typedef struct _RGNDATAHEADER {
    SDL_DWORD dwSize;
    SDL_DWORD iType;
    SDL_DWORD nCount;
    SDL_DWORD nRgnSize;
    RECT rcBound;
} RGNDATAHEADER,*PRGNDATAHEADER;

typedef struct _RGNDATA {
    RGNDATAHEADER rdh;
    char Buffer[1];
} RGNDATA,*PRGNDATA,*NPRGNDATA,*LPRGNDATA;


#endif // SDL_WINGLUE_H
