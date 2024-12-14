#ifndef SDL_D3DRMWIN_H
#define SDL_D3DRMWIN_H

#include "SDL_d3drm.h"

#include "SDL_ddraw.h"
#include "SDL_d3d.h"

SDL_DEFINE_GUID(IID_IDirect3DRMWinDevice,   0xc5016cc0, 0xd273, 0x11ce, 0xac, 0x48, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);

SDL_WIN_TYPES(IDirect3DRMWinDevice, DIRECT3DRMWINDEVICE);

#define SDL_INTERFACE IDirect3DRMWinDevice
SDL_DECLARE_INTERFACE_(IDirect3DRMWinDevice, IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ SDL_IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMWinDevice methods ***/
    SDL_STDMETHOD(HandlePaint)(SDL_THIS_ SDL_HDC hdc) SDL_PURE;
    SDL_STDMETHOD(HandleActivate)(SDL_THIS_ SDL_WORD wparam) SDL_PURE;
};


#endif // SDL_D3DRMWIN_H
