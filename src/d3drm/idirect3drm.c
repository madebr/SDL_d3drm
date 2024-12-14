#define SDL_INITGUID

#include "idirect3drm.h"
#include "idirect3drmanimation.h"
#include "idirect3drmanimationset.h"
#include "idirect3drmdevice.h"
#include "idirect3drmface.h"
#include "idirect3drmframe.h"
#include "idirect3drmmaterial.h"
#include "idirect3drmmeshbuilder.h"
#include "idirect3drmtexture.h"
#include "idirect3drmviewport.h"

#include "common/common_logging.h"

typedef SDL_HRESULT (SDL_CDECL *D3DRMLOADTEXTURE_ADAPTER_CALLBACK)(char *tex_name, void *arg, SDL_Direct3DRMTexture **texture);

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_QueryInterface(SDL_Direct3DRM *this, SDL_REFIID riid, void **ppvObject) {
    if (SDL_memcmp(riid, &SDL_IID_IDirect3DRM, sizeof(SDL_GUID)) == 0) {
        *ppvObject = &this->interface_IDirect3DRM;
        return SDL_S_OK;
    } else if (SDL_memcmp(riid, &SDL_IID_IDirect3DRM2, sizeof(SDL_GUID)) == 0) {
        *ppvObject = &this->interface_IDirect3DRM2;
        return SDL_S_OK;
    } else if (SDL_memcmp(riid, &SDL_IID_IDirect3DRM3, sizeof(SDL_GUID)) == 0) {
        *ppvObject = &this->interface_IDirect3DRM3;
        return SDL_S_OK;
    } else {
        *ppvObject = NULL;
        return SDL_E_NOINTERFACE;
    }
}

static SDL_ULONG SDL_STDCALL SDL_Direct3DRM_AddRef(SDL_Direct3DRM *this) {
    this->ref_count += 1;
    return this->ref_count;
}

static SDL_ULONG SDL_STDCALL SDL_Direct3DRM_Release(SDL_Direct3DRM *this) {
    SDL_ULONG new_count;
    this->ref_count -= 1;
    new_count = this->ref_count;
    if (this->ref_count == 0) {
        SDL_free(this);
    }
    return new_count;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateObject(SDL_Direct3DRM *this, SDL_REFCLSID rclsid, SDL_LPUNKNOWN pUnkOuter, SDL_REFIID riid, SDL_LPVOID SDL_FAR* ppv) {
    (void) this;
    (void) rclsid;
    (void) pUnkOuter;
    (void) riid;
    (void) ppv;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateFrame(SDL_Direct3DRM *this, SDL_Direct3DRMFrame *lpD3DRMFrame, SDL_Direct3DRMFrame **lplpD3DRMFrame) {
    (void) this;
    (void) lpD3DRMFrame;
    (void) lplpD3DRMFrame;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateMesh(SDL_Direct3DRM *this, LPDIRECT3DRMMESH *lplpD3DRMMesh) {
    (void) this;
    (void) lplpD3DRMMesh;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateMeshBuilder(SDL_Direct3DRM *this, SDL_Direct3DRMMeshBuilder **lplpD3DRMMeshBuilder) {
    (void) this;
    (void) lplpD3DRMMeshBuilder;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateFace(SDL_Direct3DRM *this, SDL_Direct3DRMFace **lplpd3drmFace) {
    (void) this;
    (void) lplpd3drmFace;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateAnimation(SDL_Direct3DRM *this, SDL_Direct3DRMAnimation **lplpD3DRMAnimation) {
    (void) this;
    (void) lplpD3DRMAnimation;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateAnimationSet(SDL_Direct3DRM *this, SDL_Direct3DRMAnimationSet **lplpD3DRMAnimationSet) {
    (void) this;
    (void) lplpD3DRMAnimationSet;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateTexture(SDL_Direct3DRM *this, LPD3DRMIMAGE lpImage, SDL_Direct3DRMTexture **lplpD3DRMTexture) {
    (void) this;
    (void) lpImage;
    (void) lplpD3DRMTexture;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateLight(SDL_Direct3DRM *this, D3DRMLIGHTTYPE d3drmltLightType, D3DCOLOR cColor, LPDIRECT3DRMLIGHT *lplpD3DRMLight) {
    (void) this;
    (void) d3drmltLightType;
    (void) cColor;
    (void) lplpD3DRMLight;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateLightRGB(SDL_Direct3DRM *this, D3DRMLIGHTTYPE ltLightType, D3DVALUE vRed, D3DVALUE vGreen, D3DVALUE vBlue, LPDIRECT3DRMLIGHT *lplpD3DRMLight) {
    (void) this;
    (void) ltLightType;
    (void) vRed;
    (void) vGreen;
    (void) vBlue;
    (void) lplpD3DRMLight;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateMaterial(SDL_Direct3DRM *this, D3DVALUE vPower, SDL_Direct3DRMMaterial **lplpD3DRMMaterial) {
    (void) this;
    (void) vPower;
    (void) lplpD3DRMMaterial;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateDevice(SDL_Direct3DRM *this, SDL_DWORD dwWidth, SDL_DWORD dwHeight, SDL_Direct3DRMDevice **lplpD3DRMDevice) {
    (void) this;
    (void) dwWidth;
    (void) dwHeight;
    (void) lplpD3DRMDevice;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateDeviceFromSurface(SDL_Direct3DRM *this, SDL_LPGUID lpGUID, LPDIRECTDRAW lpDD, LPDIRECTDRAWSURFACE lpDDSBack, SDL_DWORD dwFlags, SDL_Direct3DRMDevice **lplpD3DRMDevice) {
    (void) this;
    (void) lpGUID;
    (void) lpDD;
    (void) lpDDSBack;
    (void) dwFlags;
    (void) lplpD3DRMDevice;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateDeviceFromD3D(SDL_Direct3DRM *this, LPDIRECT3D lpD3D, LPDIRECT3DDEVICE lpD3DDev, SDL_Direct3DRMDevice **lplpD3DRMDevice) {
    (void) this;
    (void) lpD3D;
    (void) lpD3DDev;
    (void) lplpD3DRMDevice;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

// FIXME: how to combine LPDIRECT3D, LPDIRECT3D2 and LPDIRECT3D3?
static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateDeviceFromD3D2(SDL_Direct3DRM *this, LPDIRECT3D2 lpD3D, LPDIRECT3DDEVICE2 lpD3DDev, SDL_Direct3DRMDevice **lplpD3DRMDevice) {
    (void) this;
    (void) lpD3D;
    (void) lpD3DDev;
    (void) lplpD3DRMDevice;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateDeviceFromClipper(SDL_Direct3DRM *this, LPDIRECTDRAWCLIPPER lpDDClipper, SDL_LPGUID lpGUID, int width, int height, SDL_Direct3DRMDevice **lplpD3DRMDevice) {
    (void) this;
    (void) lpDDClipper;
    (void) lpGUID;
    (void) width;
    (void) height;
    (void) lplpD3DRMDevice;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateTextureFromSurface(SDL_Direct3DRM *this, LPDIRECTDRAWSURFACE lpDDS, SDL_Direct3DRMTexture **lplpD3DRMTexture) {
    (void) this;
    (void) lpDDS;
    (void) lplpD3DRMTexture;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateShadow(SDL_Direct3DRM *this, LPDIRECT3DRMVISUAL lpVisual, LPDIRECT3DRMLIGHT lpLight, D3DVALUE px, D3DVALUE py, D3DVALUE pz, D3DVALUE nx, D3DVALUE ny, D3DVALUE nz, LPDIRECT3DRMVISUAL *lplpShadow) {
    (void) this;
    (void) lpVisual;
    (void) lpLight;
    (void) px;
    (void) py;
    (void) pz;
    (void) nx;
    (void) ny;
    (void) nz;
    (void) lplpShadow;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateShadow2(SDL_Direct3DRM *this, SDL_LPUNKNOWN pUnk, LPDIRECT3DRMLIGHT lpLight, D3DVALUE px, D3DVALUE py, D3DVALUE pz, D3DVALUE nx, D3DVALUE ny, D3DVALUE nz, LPDIRECT3DRMSHADOW2 * lplpShadow) {
    (void) this;
    (void) pUnk;
    (void) lpLight;
    (void) px;
    (void) py;
    (void) pz;
    (void) nx;
    (void) ny;
    (void) nz;
    (void) lplpShadow;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateViewport(SDL_Direct3DRM *this, SDL_Direct3DRMDevice *lpDev, SDL_Direct3DRMFrame *lpCamera, SDL_DWORD dwXPos, SDL_DWORD dwYPos, SDL_DWORD dwWidth, SDL_DWORD dwHeight, SDL_Direct3DRMViewport **lplpD3DRMViewport) {
    (void) this;
    (void) lpDev;
    (void) lpCamera;
    (void) dwXPos;
    (void) dwYPos;
    (void) dwWidth;
    (void) dwHeight;
    (void) lplpD3DRMViewport;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateWrap(SDL_Direct3DRM *this, D3DRMWRAPTYPE type, SDL_Direct3DRMFrame *lpRef, D3DVALUE ox, D3DVALUE oy, D3DVALUE oz, D3DVALUE dx, D3DVALUE dy, D3DVALUE dz, D3DVALUE ux, D3DVALUE uy, D3DVALUE uz, D3DVALUE ou, D3DVALUE ov, D3DVALUE su, D3DVALUE sv, LPDIRECT3DRMWRAP *lplpD3DRMWrap) {
    (void) this;
    (void) type;
    (void) lpRef;
    (void) ox;
    (void) oy;
    (void) oz;
    (void) dx;
    (void) dy;
    (void) dz;
    (void) ux;
    (void) uy;
    (void) uz;
    (void) ou;
    (void) ov;
    (void) su;
    (void) sv;
    (void) lplpD3DRMWrap;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateUserVisual(SDL_Direct3DRM *this, D3DRMUSERVISUALCALLBACK fn, SDL_LPVOID lpArg, LPDIRECT3DRMUSERVISUAL *lplpD3DRMUV) {
    (void) this;
    (void) fn;
    (void) lpArg;
    (void) lplpD3DRMUV;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_LoadTexture(SDL_Direct3DRM *this, const char *lpFileName, SDL_Direct3DRMTexture **lplpD3DRMTexture) {
    (void) this;
    (void) lpFileName;
    (void) lplpD3DRMTexture;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_LoadTextureFromResource(SDL_Direct3DRM *this, SDL_HRSRC rs, SDL_Direct3DRMTexture **lplpD3DRMTexture) {
    (void) this;
    (void) rs;
    (void) lplpD3DRMTexture;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_LoadTextureFromModule(SDL_Direct3DRM *this, SDL_HMODULE hModule, SDL_LPCTSTR strName, SDL_LPCTSTR strType, SDL_Direct3DRMTexture **lplpD3DRMTexture) {
    (void) this;
    (void) hModule;
    (void) strName;
    (void) strType;
    (void) lplpD3DRMTexture;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_SetSearchPath(SDL_Direct3DRM *this, SDL_LPCSTR lpPath) {
    (void) this;
    (void) lpPath;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_AddSearchPath(SDL_Direct3DRM *this, SDL_LPCSTR lpPath) {
    (void) this;
    (void) lpPath;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_GetSearchPath(SDL_Direct3DRM *this, SDL_DWORD *lpdwSize, SDL_LPSTR lpszPath) {
    (void) this;
    (void) lpdwSize;
    (void) lpszPath;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_SetDefaultTextureColors(SDL_Direct3DRM *this, SDL_DWORD dwColors) {
    (void) this;
    (void) dwColors;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_SetDefaultTextureShades(SDL_Direct3DRM *this, SDL_DWORD dwShades) {
    (void) this;
    (void) dwShades;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_GetDevices(SDL_Direct3DRM *this, LPDIRECT3DRMDEVICEARRAY *lplpDevArray) {
    (void) this;
    (void) lplpDevArray;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_GetNamedObject(SDL_Direct3DRM *this, const char *lpName, LPDIRECT3DRMOBJECT *lplpD3DRMObject) {
    (void) this;
    (void) lpName;
    (void) lplpD3DRMObject;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_EnumerateObjects(SDL_Direct3DRM *this, D3DRMOBJECTCALLBACK func, SDL_LPVOID lpArg) {
    (void) this;
    (void) func;
    (void) lpArg;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_Load(SDL_Direct3DRM *this, SDL_LPVOID lpvObjSource, SDL_LPVOID lpvObjID, SDL_LPIID *lplpGUIDs, SDL_DWORD dwcGUIDs, D3DRMLOADOPTIONS d3drmLOFlags, D3DRMLOADCALLBACK d3drmLoadProc, SDL_LPVOID lpArgLP, D3DRMLOADTEXTURE_ADAPTER_CALLBACK d3drmLoadTextureProc, SDL_LPVOID lpArgLTP, SDL_Direct3DRMFrame *lpParentFrame) {
    (void) this;
    (void) lpvObjSource;
    (void) lpParentFrame;
    (void) lpvObjSource;
    (void) lpvObjID;
    (void) lplpGUIDs;
    (void) dwcGUIDs;
    (void) d3drmLOFlags;
    (void) d3drmLoadProc;
    (void) lpArgLP;
    (void) d3drmLoadTextureProc;
    (void) lpArgLTP;
    (void) lpParentFrame;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_Tick(SDL_Direct3DRM *this, D3DVALUE d3dvalTick) {
    (void) this;
    (void) d3dvalTick;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateProgressiveMesh(SDL_Direct3DRM *this, LPDIRECT3DRMPROGRESSIVEMESH* lplpD3DRMProgressiveMesh) {
    (void) this;
    (void) lplpD3DRMProgressiveMesh;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_RegisterClient(SDL_Direct3DRM *this, SDL_REFGUID rguid, SDL_LPDWORD lpdwID) {
    (void) this;
    (void) rguid;
    (void) lpdwID;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_UnregisterClient(SDL_Direct3DRM *this, SDL_REFGUID rguid) {
    (void) this;
    (void) rguid;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_CreateClippedVisual(SDL_Direct3DRM *this, LPDIRECT3DRMVISUAL lpVisual, LPDIRECT3DRMCLIPPEDVISUAL *lpClippedVisual) {
    (void) this;
    (void) lpVisual;
    (void) lpClippedVisual;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_SetOptions(SDL_Direct3DRM *this, SDL_DWORD dwOptions) {
    (void) this;
    (void) dwOptions;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_Direct3DRM_GetOptions(SDL_Direct3DRM *this, SDL_LPDWORD dwOptions) {
    (void) this;
    (void) dwOptions;
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    return SDL_E_NOTIMPL;
}

// IDirect3DRM interface

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_QueryInterface(IDirect3DRM *this, SDL_REFIID riid, void **ppvObject) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_QueryInterface(real_this, riid, ppvObject);
}

static SDL_ULONG SDL_STDCALL SDL_IDirect3DRM_AddRef(IDirect3DRM *this) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_AddRef(real_this);
}

static SDL_ULONG SDL_STDCALL SDL_IDirect3DRM_Release(IDirect3DRM *this) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_Release(real_this);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateObject(IDirect3DRM *this, SDL_REFCLSID rclsid, SDL_LPUNKNOWN pUnkOuter, SDL_REFIID riid, SDL_LPVOID SDL_FAR* ppv) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_CreateObject(real_this, rclsid, pUnkOuter, riid, ppv);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateFrame(IDirect3DRM *this, LPDIRECT3DRMFRAME lpD3DRMFrame, LPDIRECT3DRMFRAME *lplpD3DRMFrame) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMFrame *frame = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateFrame(real_this, from_IDirect3DRMFrame(lpD3DRMFrame), &frame);
    if (lplpD3DRMFrame != NULL) {
        *lplpD3DRMFrame = &frame->interface_IDirect3DRMFrame;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateMesh(IDirect3DRM *this, LPDIRECT3DRMMESH *lplpD3DRMMesh) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_CreateMesh(real_this, lplpD3DRMMesh);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateMeshBuilder(IDirect3DRM *this, LPDIRECT3DRMMESHBUILDER *lplpD3DRMMeshBuilder) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMMeshBuilder *builder = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateMeshBuilder(real_this, &builder);
    if (lplpD3DRMMeshBuilder != NULL) {
        *lplpD3DRMMeshBuilder = &builder->interface_IDirect3DRMMeshBuilder;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateFace(IDirect3DRM *this, LPDIRECT3DRMFACE *lplpd3drmFace) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMFace *face = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateFace(real_this, &face);
    if (lplpd3drmFace != NULL) {
        *lplpd3drmFace = &face->interface_IDirect3DRMFace;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateAnimation(IDirect3DRM *this, LPDIRECT3DRMANIMATION *lplpD3DRMAnimation) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMAnimation *animation = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateAnimation(real_this, &animation);
    if (lplpD3DRMAnimation != NULL) {
        *lplpD3DRMAnimation = &animation->interface_IDirect3DRMAnimation;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateAnimationSet(IDirect3DRM *this, LPDIRECT3DRMANIMATIONSET *lplpD3DRMAnimationSet) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMAnimationSet *animationset = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateAnimationSet(real_this, &animationset);
    if (lplpD3DRMAnimationSet != NULL) {
        *lplpD3DRMAnimationSet = &animationset->interface_IDirect3DRMAnimationSet;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateTexture(IDirect3DRM *this, LPD3DRMIMAGE lpImage, LPDIRECT3DRMTEXTURE *lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res =  SDL_Direct3DRM_CreateTexture(real_this, lpImage, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateLight(IDirect3DRM *this, D3DRMLIGHTTYPE d3drmltLightType, D3DCOLOR cColor, LPDIRECT3DRMLIGHT *lplpD3DRMLight) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_CreateLight(real_this, d3drmltLightType, cColor, lplpD3DRMLight);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateLightRGB(IDirect3DRM *this, D3DRMLIGHTTYPE ltLightType, D3DVALUE vRed, D3DVALUE vGreen, D3DVALUE vBlue, LPDIRECT3DRMLIGHT *lplpD3DRMLight) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_CreateLightRGB(real_this, ltLightType, vRed, vGreen, vBlue, lplpD3DRMLight);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateMaterial(IDirect3DRM *this, D3DVALUE vPower, LPDIRECT3DRMMATERIAL *lplpD3DRMMaterial) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMMaterial *material = NULL;
    SDL_HRESULT res =  SDL_Direct3DRM_CreateMaterial(real_this, vPower, &material);
    if (lplpD3DRMMaterial != NULL) {
        *lplpD3DRMMaterial = &material->interface_IDirect3DRMMaterial;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateDevice(IDirect3DRM *this, SDL_DWORD dwWidth, SDL_DWORD dwHeight, LPDIRECT3DRMDEVICE *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res =  SDL_Direct3DRM_CreateDevice(real_this, dwWidth, dwHeight, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateDeviceFromSurface(IDirect3DRM *this, SDL_LPGUID lpGUID, LPDIRECTDRAW lpDD, LPDIRECTDRAWSURFACE lpDDSBack, LPDIRECT3DRMDEVICE *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateDeviceFromSurface(real_this, lpGUID, lpDD, lpDDSBack, 0, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateDeviceFromD3D(IDirect3DRM *this, LPDIRECT3D lpD3D, LPDIRECT3DDEVICE lpD3DDev, LPDIRECT3DRMDEVICE *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateDeviceFromD3D(real_this, lpD3D, lpD3DDev, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateDeviceFromClipper(IDirect3DRM *this, LPDIRECTDRAWCLIPPER lpDDClipper, SDL_LPGUID lpGUID, int width, int height, LPDIRECT3DRMDEVICE *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateDeviceFromClipper(real_this, lpDDClipper, lpGUID, width, height, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateTextureFromSurface(IDirect3DRM *this, LPDIRECTDRAWSURFACE lpDDS, LPDIRECT3DRMTEXTURE *lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateTextureFromSurface(real_this, lpDDS, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateShadow(IDirect3DRM *this, LPDIRECT3DRMVISUAL lpVisual, LPDIRECT3DRMLIGHT lpLight, D3DVALUE px, D3DVALUE py, D3DVALUE pz, D3DVALUE nx, D3DVALUE ny, D3DVALUE nz, LPDIRECT3DRMVISUAL *lplpShadow) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_CreateShadow(real_this, lpVisual, lpLight, px, py, pz, nx, ny, nz, lplpShadow);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateViewport(IDirect3DRM *this, LPDIRECT3DRMDEVICE lpDev, LPDIRECT3DRMFRAME lpCamera, SDL_DWORD dwXPos, SDL_DWORD dwYPos, SDL_DWORD dwWidth, SDL_DWORD dwHeight, LPDIRECT3DRMVIEWPORT *lplpD3DRMViewport) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMViewport *viewport = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateViewport(real_this, from_IDirect3DRMDevice(lpDev), from_IDirect3DRMFrame(lpCamera), dwXPos, dwYPos, dwWidth, dwHeight, &viewport);
    if (lplpD3DRMViewport != NULL) {
        *lplpD3DRMViewport = &viewport->interface_IDirect3DRMViewport;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateWrap(IDirect3DRM *this, D3DRMWRAPTYPE type, LPDIRECT3DRMFRAME lpRef, D3DVALUE ox, D3DVALUE oy, D3DVALUE oz, D3DVALUE dx, D3DVALUE dy, D3DVALUE dz, D3DVALUE ux, D3DVALUE uy, D3DVALUE uz, D3DVALUE ou, D3DVALUE ov, D3DVALUE su, D3DVALUE sv, LPDIRECT3DRMWRAP *lplpD3DRMWrap) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_CreateWrap(real_this, type, from_IDirect3DRMFrame(lpRef), ox, oy, oz, dx, dy, dz, ux, uy, uz, ou, ov, su, sv, lplpD3DRMWrap);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_CreateUserVisual(IDirect3DRM *this, D3DRMUSERVISUALCALLBACK fn, SDL_LPVOID lpArg, LPDIRECT3DRMUSERVISUAL *lplpD3DRMUV) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_CreateUserVisual(real_this, fn, lpArg, lplpD3DRMUV);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_LoadTexture(IDirect3DRM *this, const char *lpFileName, LPDIRECT3DRMTEXTURE *lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_LoadTexture(real_this, lpFileName, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_LoadTextureFromResource(IDirect3DRM *this, SDL_HRSRC rs, LPDIRECT3DRMTEXTURE *lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_LoadTextureFromResource(real_this, rs, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_SetSearchPath(IDirect3DRM *this, SDL_LPCSTR lpPath) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_SetSearchPath(real_this, lpPath);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_AddSearchPath(IDirect3DRM *this, SDL_LPCSTR lpPath) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_AddSearchPath(real_this, lpPath);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_GetSearchPath(IDirect3DRM *this, SDL_DWORD *lpdwSize, SDL_LPSTR lpszPath) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_GetSearchPath(real_this, lpdwSize, lpszPath);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_SetDefaultTextureColors(IDirect3DRM *this, SDL_DWORD dwColors) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_SetDefaultTextureColors(real_this, dwColors);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_SetDefaultTextureShades(IDirect3DRM *this, SDL_DWORD dwShades) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_SetDefaultTextureShades(real_this, dwShades);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_GetDevices(IDirect3DRM *this, LPDIRECT3DRMDEVICEARRAY *lplpDevArray) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_GetDevices(real_this, lplpDevArray);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_GetNamedObject(IDirect3DRM *this, const char *lpName, LPDIRECT3DRMOBJECT *lplpD3DRMObject) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_GetNamedObject(real_this, lpName, lplpD3DRMObject);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_EnumerateObjects(IDirect3DRM *this, D3DRMOBJECTCALLBACK func, SDL_LPVOID lpArg) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_EnumerateObjects(real_this, func, lpArg);
}

typedef struct {
    D3DRMLOADTEXTURECALLBACK callback;
    void *arg;
} IDirect3DRM_LoadTextureAdapterCallback_UserData;

static SDL_HRESULT SDL_CDECL IDirect3DRM_LoadTextureAdapterCallback(char *tex_name, void *arg, SDL_Direct3DRMTexture **texture) {
    IDirect3DRM_LoadTextureAdapterCallback_UserData *original = (IDirect3DRM_LoadTextureAdapterCallback_UserData *)arg;
    IDirect3DRMTexture *interface_texture = NULL;
    SDL_HRESULT res = original->callback(tex_name, original->arg, &interface_texture);
    *texture = from_IDirect3DRMTexture(interface_texture);
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_Load(IDirect3DRM *this, SDL_LPVOID lpvObjSource, SDL_LPVOID lpvObjID, SDL_LPIID *lplpGUIDs, SDL_DWORD dwcGUIDs, D3DRMLOADOPTIONS d3drmLOFlags, D3DRMLOADCALLBACK d3drmLoadProc, SDL_LPVOID lpArgLP, D3DRMLOADTEXTURECALLBACK d3drmLoadTextureProc, SDL_LPVOID lpArgLTP, LPDIRECT3DRMFRAME lpParentFrame) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    IDirect3DRM_LoadTextureAdapterCallback_UserData adapter_data_storage;
    D3DRMLOADTEXTURE_ADAPTER_CALLBACK adapter_cb = NULL;
    void *adapter_data = NULL;
    if (d3drmLoadProc) {
        adapter_cb = IDirect3DRM_LoadTextureAdapterCallback;
        adapter_data_storage.callback = d3drmLoadTextureProc;
        adapter_data_storage.arg = lpArgLTP;
        adapter_data = &adapter_data_storage;
    }
    return SDL_Direct3DRM_Load(real_this, lpvObjSource, lpvObjID, lplpGUIDs, dwcGUIDs, d3drmLOFlags, d3drmLoadProc, lpArgLP, adapter_cb, adapter_data, from_IDirect3DRMFrame(lpParentFrame));
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM_Tick(IDirect3DRM *this, D3DVALUE d3dvalTick) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM(this);
    return SDL_Direct3DRM_Tick(real_this, d3dvalTick);
}

static IDirect3DRMVtbl SDL_IDirect3DRM_Vtable = {
    SDL_IDirect3DRM_QueryInterface,
    SDL_IDirect3DRM_AddRef,
    SDL_IDirect3DRM_Release,
    SDL_IDirect3DRM_CreateObject,
    SDL_IDirect3DRM_CreateFrame,
    SDL_IDirect3DRM_CreateMesh,
    SDL_IDirect3DRM_CreateMeshBuilder,
    SDL_IDirect3DRM_CreateFace,
    SDL_IDirect3DRM_CreateAnimation,
    SDL_IDirect3DRM_CreateAnimationSet,
    SDL_IDirect3DRM_CreateTexture,
    SDL_IDirect3DRM_CreateLight,
    SDL_IDirect3DRM_CreateLightRGB,
    SDL_IDirect3DRM_CreateMaterial,
    SDL_IDirect3DRM_CreateDevice,
    SDL_IDirect3DRM_CreateDeviceFromSurface,
    SDL_IDirect3DRM_CreateDeviceFromD3D,
    SDL_IDirect3DRM_CreateDeviceFromClipper,
    SDL_IDirect3DRM_CreateTextureFromSurface,
    SDL_IDirect3DRM_CreateShadow,
    SDL_IDirect3DRM_CreateViewport,
    SDL_IDirect3DRM_CreateWrap,
    SDL_IDirect3DRM_CreateUserVisual,
    SDL_IDirect3DRM_LoadTexture,
    SDL_IDirect3DRM_LoadTextureFromResource,
    SDL_IDirect3DRM_SetSearchPath,
    SDL_IDirect3DRM_AddSearchPath,
    SDL_IDirect3DRM_GetSearchPath,
    SDL_IDirect3DRM_SetDefaultTextureColors,
    SDL_IDirect3DRM_SetDefaultTextureShades,
    SDL_IDirect3DRM_GetDevices,
    SDL_IDirect3DRM_GetNamedObject,
    SDL_IDirect3DRM_EnumerateObjects,
    SDL_IDirect3DRM_Load,
    SDL_IDirect3DRM_Tick,
};

// IDirect3DRM2 interface

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_QueryInterface(IDirect3DRM2 *this, SDL_REFIID riid, void **ppvObject) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_QueryInterface(real_this, riid, ppvObject);
}

static SDL_ULONG SDL_STDCALL SDL_IDirect3DRM2_AddRef(IDirect3DRM2 *this) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_AddRef(real_this);
}

static SDL_ULONG SDL_STDCALL SDL_IDirect3DRM2_Release(IDirect3DRM2 *this) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_Release(real_this);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateObject(IDirect3DRM2 *this, SDL_REFCLSID rclsid, SDL_LPUNKNOWN pUnkOuter, SDL_REFIID riid, SDL_LPVOID SDL_FAR* ppv) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_CreateObject(real_this, rclsid, pUnkOuter, riid, ppv);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateFrame(IDirect3DRM2 *this, LPDIRECT3DRMFRAME lpD3DRMFrame, LPDIRECT3DRMFRAME2 *lplpD3DRMFrame) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMFrame *frame = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateFrame(real_this, from_IDirect3DRMFrame(lpD3DRMFrame), &frame);
    if (lplpD3DRMFrame != NULL) {
        *lplpD3DRMFrame = &frame->interface_IDirect3DRMFrame2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateMesh(IDirect3DRM2 *this, LPDIRECT3DRMMESH *lplpD3DRMMesh) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_CreateMesh(real_this, lplpD3DRMMesh);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateMeshBuilder(IDirect3DRM2 *this, LPDIRECT3DRMMESHBUILDER2 *lplpD3DRMMeshBuilder) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMMeshBuilder *builder = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateMeshBuilder(real_this, &builder);
    if (lplpD3DRMMeshBuilder != NULL) {
        *lplpD3DRMMeshBuilder = &builder->interface_IDirect3DRMMeshBuilder2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateFace(IDirect3DRM2 *this, LPDIRECT3DRMFACE *lplpd3drmFace) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMFace *face = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateFace(real_this, &face);
    if (lplpd3drmFace != NULL) {
        *lplpd3drmFace = &face->interface_IDirect3DRMFace;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateAnimation(IDirect3DRM2 *this, LPDIRECT3DRMANIMATION *lplpD3DRMAnimation) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMAnimation *animation = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateAnimation(real_this, &animation);
    if (lplpD3DRMAnimation != NULL) {
        *lplpD3DRMAnimation = &animation->interface_IDirect3DRMAnimation;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateAnimationSet(IDirect3DRM2 *this, LPDIRECT3DRMANIMATIONSET *lplpD3DRMAnimationSet) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMAnimationSet *animationset = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateAnimationSet(real_this, &animationset);
    if (lplpD3DRMAnimationSet != NULL) {
        *lplpD3DRMAnimationSet = &animationset->interface_IDirect3DRMAnimationSet;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateTexture(IDirect3DRM2 *this, LPD3DRMIMAGE lpImage, LPDIRECT3DRMTEXTURE2 *lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res =  SDL_Direct3DRM_CreateTexture(real_this, lpImage, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateLight(IDirect3DRM2 *this, D3DRMLIGHTTYPE d3drmltLightType, D3DCOLOR cColor, LPDIRECT3DRMLIGHT *lplpD3DRMLight) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_CreateLight(real_this, d3drmltLightType, cColor, lplpD3DRMLight);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateLightRGB(IDirect3DRM2 *this, D3DRMLIGHTTYPE ltLightType, D3DVALUE vRed, D3DVALUE vGreen, D3DVALUE vBlue, LPDIRECT3DRMLIGHT *lplpD3DRMLight) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_CreateLightRGB(real_this, ltLightType, vRed, vGreen, vBlue, lplpD3DRMLight);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateMaterial(IDirect3DRM2 *this, D3DVALUE vPower, LPDIRECT3DRMMATERIAL *lplpD3DRMMaterial) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMMaterial *material = NULL;
    SDL_HRESULT res =  SDL_Direct3DRM_CreateMaterial(real_this, vPower, &material);
    if (lplpD3DRMMaterial != NULL) {
        *lplpD3DRMMaterial = &material->interface_IDirect3DRMMaterial;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateDevice(IDirect3DRM2 *this, SDL_DWORD dwWidth, SDL_DWORD dwHeight, LPDIRECT3DRMDEVICE2 *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res =  SDL_Direct3DRM_CreateDevice(real_this, dwWidth, dwHeight, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateDeviceFromSurface(IDirect3DRM2 *this, SDL_LPGUID lpGUID, LPDIRECTDRAW lpDD, LPDIRECTDRAWSURFACE lpDDSBack, LPDIRECT3DRMDEVICE2 *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateDeviceFromSurface(real_this, lpGUID, lpDD, lpDDSBack, 0, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateDeviceFromD3D(IDirect3DRM2 *this, LPDIRECT3D2 lpD3D, LPDIRECT3DDEVICE2 lpD3DDev, LPDIRECT3DRMDEVICE2 *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateDeviceFromD3D2(real_this, lpD3D, lpD3DDev, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateDeviceFromClipper(IDirect3DRM2 *this, LPDIRECTDRAWCLIPPER lpDDClipper, SDL_LPGUID lpGUID, int width, int height, LPDIRECT3DRMDEVICE2 *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateDeviceFromClipper(real_this, lpDDClipper, lpGUID, width, height, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateTextureFromSurface(IDirect3DRM2 *this, LPDIRECTDRAWSURFACE lpDDS, LPDIRECT3DRMTEXTURE2 *lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateTextureFromSurface(real_this, lpDDS, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateShadow(IDirect3DRM2 *this, LPDIRECT3DRMVISUAL lpVisual, LPDIRECT3DRMLIGHT lpLight, D3DVALUE px, D3DVALUE py, D3DVALUE pz, D3DVALUE nx, D3DVALUE ny, D3DVALUE nz, LPDIRECT3DRMVISUAL *lplpShadow) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_CreateShadow(real_this, lpVisual, lpLight, px, py, pz, nx, ny, nz, lplpShadow);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateViewport(IDirect3DRM2 *this, LPDIRECT3DRMDEVICE lpDev, LPDIRECT3DRMFRAME lpCamera, SDL_DWORD dwXPos, SDL_DWORD dwYPos, SDL_DWORD dwWidth, SDL_DWORD dwHeight, LPDIRECT3DRMVIEWPORT *lplpD3DRMViewport) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMViewport *viewport = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateViewport(real_this, from_IDirect3DRMDevice(lpDev), from_IDirect3DRMFrame(lpCamera), dwXPos, dwYPos, dwWidth, dwHeight, &viewport);
    if (lplpD3DRMViewport != NULL) {
        *lplpD3DRMViewport = &viewport->interface_IDirect3DRMViewport;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateWrap(IDirect3DRM2 *this, D3DRMWRAPTYPE type, LPDIRECT3DRMFRAME lpRef, D3DVALUE ox, D3DVALUE oy, D3DVALUE oz, D3DVALUE dx, D3DVALUE dy, D3DVALUE dz, D3DVALUE ux, D3DVALUE uy, D3DVALUE uz, D3DVALUE ou, D3DVALUE ov, D3DVALUE su, D3DVALUE sv, LPDIRECT3DRMWRAP *lplpD3DRMWrap) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_CreateWrap(real_this, type, from_IDirect3DRMFrame(lpRef), ox, oy, oz, dx, dy, dz, ux, uy, uz, ou, ov, su, sv, lplpD3DRMWrap);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateUserVisual(IDirect3DRM2 *this, D3DRMUSERVISUALCALLBACK fn, SDL_LPVOID lpArg, LPDIRECT3DRMUSERVISUAL *lplpD3DRMUV) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_CreateUserVisual(real_this, fn, lpArg, lplpD3DRMUV);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_LoadTexture(IDirect3DRM2 *this, const char *lpFileName, LPDIRECT3DRMTEXTURE2 *lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_LoadTexture(real_this, lpFileName, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_LoadTextureFromResource(IDirect3DRM2 *this, SDL_HMODULE hModule, SDL_LPCTSTR strName, SDL_LPCTSTR strType, LPDIRECT3DRMTEXTURE2 * lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_LoadTextureFromModule(real_this, hModule, strName, strType, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_SetSearchPath(IDirect3DRM2 *this, SDL_LPCSTR lpPath) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_SetSearchPath(real_this, lpPath);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_AddSearchPath(IDirect3DRM2 *this, SDL_LPCSTR lpPath) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_AddSearchPath(real_this, lpPath);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_GetSearchPath(IDirect3DRM2 *this, SDL_DWORD *lpdwSize, SDL_LPSTR lpszPath) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_GetSearchPath(real_this, lpdwSize, lpszPath);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_SetDefaultTextureColors(IDirect3DRM2 *this, SDL_DWORD dwColors) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_SetDefaultTextureColors(real_this, dwColors);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_SetDefaultTextureShades(IDirect3DRM2 *this, SDL_DWORD dwShades) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_SetDefaultTextureShades(real_this, dwShades);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_GetDevices(IDirect3DRM2 *this, LPDIRECT3DRMDEVICEARRAY *lplpDevArray) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_GetDevices(real_this, lplpDevArray);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_GetNamedObject(IDirect3DRM2 *this, const char *lpName, LPDIRECT3DRMOBJECT *lplpD3DRMObject) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_GetNamedObject(real_this, lpName, lplpD3DRMObject);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_EnumerateObjects(IDirect3DRM2 *this, D3DRMOBJECTCALLBACK func, SDL_LPVOID lpArg) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_EnumerateObjects(real_this, func, lpArg);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_Load(IDirect3DRM2 *this, SDL_LPVOID lpvObjSource, SDL_LPVOID lpvObjID, SDL_LPIID *lplpGUIDs, SDL_DWORD dwcGUIDs, D3DRMLOADOPTIONS d3drmLOFlags, D3DRMLOADCALLBACK d3drmLoadProc, SDL_LPVOID lpArgLP, D3DRMLOADTEXTURECALLBACK d3drmLoadTextureProc, SDL_LPVOID lpArgLTP, LPDIRECT3DRMFRAME lpParentFrame) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    IDirect3DRM_LoadTextureAdapterCallback_UserData adapter_data_storage;
    D3DRMLOADTEXTURE_ADAPTER_CALLBACK adapter_cb = NULL;
    void *adapter_data = NULL;
    if (d3drmLoadProc) {
        adapter_cb = IDirect3DRM_LoadTextureAdapterCallback;
        adapter_data_storage.callback = d3drmLoadTextureProc;
        adapter_data_storage.arg = lpArgLTP;
        adapter_data = &adapter_data_storage;
    }
    return SDL_Direct3DRM_Load(real_this, lpvObjSource, lpvObjID, lplpGUIDs, dwcGUIDs, d3drmLOFlags, d3drmLoadProc, lpArgLP, adapter_cb, adapter_data, from_IDirect3DRMFrame(lpParentFrame));
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_Tick(IDirect3DRM2 *this, D3DVALUE d3dvalTick) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_Tick(real_this, d3dvalTick);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM2_CreateProgressiveMesh(IDirect3DRM2 *this, LPDIRECT3DRMPROGRESSIVEMESH* lplpD3DRMProgressiveMesh) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM2(this);
    return SDL_Direct3DRM_CreateProgressiveMesh(real_this, lplpD3DRMProgressiveMesh);
}

static IDirect3DRM2Vtbl SDL_IDirect3DRM2_Vtable = {
    SDL_IDirect3DRM2_QueryInterface,
    SDL_IDirect3DRM2_AddRef,
    SDL_IDirect3DRM2_Release,
    SDL_IDirect3DRM2_CreateObject,
    SDL_IDirect3DRM2_CreateFrame,
    SDL_IDirect3DRM2_CreateMesh,
    SDL_IDirect3DRM2_CreateMeshBuilder,
    SDL_IDirect3DRM2_CreateFace,
    SDL_IDirect3DRM2_CreateAnimation,
    SDL_IDirect3DRM2_CreateAnimationSet,
    SDL_IDirect3DRM2_CreateTexture,
    SDL_IDirect3DRM2_CreateLight,
    SDL_IDirect3DRM2_CreateLightRGB,
    SDL_IDirect3DRM2_CreateMaterial,
    SDL_IDirect3DRM2_CreateDevice,
    SDL_IDirect3DRM2_CreateDeviceFromSurface,
    SDL_IDirect3DRM2_CreateDeviceFromD3D,
    SDL_IDirect3DRM2_CreateDeviceFromClipper,
    SDL_IDirect3DRM2_CreateTextureFromSurface,
    SDL_IDirect3DRM2_CreateShadow,
    SDL_IDirect3DRM2_CreateViewport,
    SDL_IDirect3DRM2_CreateWrap,
    SDL_IDirect3DRM2_CreateUserVisual,
    SDL_IDirect3DRM2_LoadTexture,
    SDL_IDirect3DRM2_LoadTextureFromResource,
    SDL_IDirect3DRM2_SetSearchPath,
    SDL_IDirect3DRM2_AddSearchPath,
    SDL_IDirect3DRM2_GetSearchPath,
    SDL_IDirect3DRM2_SetDefaultTextureColors,
    SDL_IDirect3DRM2_SetDefaultTextureShades,
    SDL_IDirect3DRM2_GetDevices,
    SDL_IDirect3DRM2_GetNamedObject,
    SDL_IDirect3DRM2_EnumerateObjects,
    SDL_IDirect3DRM2_Load,
    SDL_IDirect3DRM2_Tick,
    SDL_IDirect3DRM2_CreateProgressiveMesh,
};

// IDirect3DRM3 interface

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_QueryInterface(IDirect3DRM3 *this, SDL_REFIID riid, void **ppvObject) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_QueryInterface(real_this, riid, ppvObject);
}

static SDL_ULONG SDL_STDCALL SDL_IDirect3DRM3_AddRef(IDirect3DRM3 *this) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_AddRef(real_this);
}

static SDL_ULONG SDL_STDCALL SDL_IDirect3DRM3_Release(IDirect3DRM3 *this) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_Release(real_this);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateObject(IDirect3DRM3 *this, SDL_REFCLSID rclsid, SDL_LPUNKNOWN pUnkOuter, SDL_REFIID riid, SDL_LPVOID SDL_FAR* ppv) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_CreateObject(real_this, rclsid, pUnkOuter, riid, ppv);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateFrame(IDirect3DRM3 *this, LPDIRECT3DRMFRAME3 lpD3DRMFrame, LPDIRECT3DRMFRAME3 *lplpD3DRMFrame) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMFrame *frame = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateFrame(real_this, from_IDirect3DRMFrame3(lpD3DRMFrame), &frame);
    if (lplpD3DRMFrame != NULL) {
        *lplpD3DRMFrame = &frame->interface_IDirect3DRMFrame3;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateMesh(IDirect3DRM3 *this, LPDIRECT3DRMMESH *lplpD3DRMMesh) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_CreateMesh(real_this, lplpD3DRMMesh);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateMeshBuilder(IDirect3DRM3 *this, LPDIRECT3DRMMESHBUILDER3 *lplpD3DRMMeshBuilder) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMMeshBuilder *builder = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateMeshBuilder(real_this, &builder);
    if (lplpD3DRMMeshBuilder != NULL) {
        *lplpD3DRMMeshBuilder = &builder->interface_IDirect3DRMMeshBuilder3;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateFace(IDirect3DRM3 *this, LPDIRECT3DRMFACE2 *lplpd3drmFace) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMFace *face = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateFace(real_this, &face);
    if (lplpd3drmFace != NULL) {
        *lplpd3drmFace = &face->interface_IDirect3DRMFace2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateAnimation(IDirect3DRM3 *this, LPDIRECT3DRMANIMATION2 *lplpD3DRMAnimation) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMAnimation *animation = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateAnimation(real_this, &animation);
    if (lplpD3DRMAnimation != NULL) {
        *lplpD3DRMAnimation = &animation->interface_IDirect3DRMAnimation2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateAnimationSet(IDirect3DRM3 *this, LPDIRECT3DRMANIMATIONSET2 *lplpD3DRMAnimationSet) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMAnimationSet *animationset = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateAnimationSet(real_this, &animationset);
    if (lplpD3DRMAnimationSet != NULL) {
        *lplpD3DRMAnimationSet = &animationset->interface_IDirect3DRMAnimationSet2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateTexture(IDirect3DRM3 *this, LPD3DRMIMAGE lpImage, LPDIRECT3DRMTEXTURE3 *lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res =  SDL_Direct3DRM_CreateTexture(real_this, lpImage, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture3;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateLight(IDirect3DRM3 *this, D3DRMLIGHTTYPE d3drmltLightType, D3DCOLOR cColor, LPDIRECT3DRMLIGHT *lplpD3DRMLight) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_CreateLight(real_this, d3drmltLightType, cColor, lplpD3DRMLight);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateLightRGB(IDirect3DRM3 *this, D3DRMLIGHTTYPE ltLightType, D3DVALUE vRed, D3DVALUE vGreen, D3DVALUE vBlue, LPDIRECT3DRMLIGHT *lplpD3DRMLight) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_CreateLightRGB(real_this, ltLightType, vRed, vGreen, vBlue, lplpD3DRMLight);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateMaterial(IDirect3DRM3 *this, D3DVALUE vPower, LPDIRECT3DRMMATERIAL2 *lplpD3DRMMaterial) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMMaterial *material = NULL;
    SDL_HRESULT res =  SDL_Direct3DRM_CreateMaterial(real_this, vPower, &material);
    if (lplpD3DRMMaterial != NULL) {
        *lplpD3DRMMaterial = &material->interface_IDirect3DRMMaterial2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateDevice(IDirect3DRM3 *this, SDL_DWORD dwWidth, SDL_DWORD dwHeight, LPDIRECT3DRMDEVICE3 *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res =  SDL_Direct3DRM_CreateDevice(real_this, dwWidth, dwHeight, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice3;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateDeviceFromSurface(IDirect3DRM3 *this, SDL_LPGUID lpGUID, LPDIRECTDRAW lpDD, LPDIRECTDRAWSURFACE lpDDSBack, SDL_DWORD dwFlags, LPDIRECT3DRMDEVICE3 *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateDeviceFromSurface(real_this, lpGUID, lpDD, lpDDSBack, dwFlags, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice3;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateDeviceFromD3D(IDirect3DRM3 *this, LPDIRECT3D2 lpD3D, LPDIRECT3DDEVICE2 lpD3DDev, LPDIRECT3DRMDEVICE3 *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateDeviceFromD3D2(real_this, lpD3D, lpD3DDev, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice3;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateDeviceFromClipper(IDirect3DRM3 *this, LPDIRECTDRAWCLIPPER lpDDClipper, SDL_LPGUID lpGUID, int width, int height, LPDIRECT3DRMDEVICE3 *lplpD3DRMDevice) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMDevice *device = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateDeviceFromClipper(real_this, lpDDClipper, lpGUID, width, height, &device);
    if (lplpD3DRMDevice != NULL) {
        *lplpD3DRMDevice = &device->interface_IDirect3DRMDevice3;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateTextureFromSurface(IDirect3DRM3 *this, LPDIRECTDRAWSURFACE lpDDS, LPDIRECT3DRMTEXTURE3 *lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateTextureFromSurface(real_this, lpDDS, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture3;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateShadow(IDirect3DRM3 *this, SDL_LPUNKNOWN pUnk, LPDIRECT3DRMLIGHT lpLight, D3DVALUE px, D3DVALUE py, D3DVALUE pz, D3DVALUE nx, D3DVALUE ny, D3DVALUE nz, LPDIRECT3DRMSHADOW2 * lplpShadow) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_CreateShadow2(real_this, pUnk, lpLight, px, py, pz, nx, ny, nz, lplpShadow);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateViewport(IDirect3DRM3 *this, LPDIRECT3DRMDEVICE3 lpDev, LPDIRECT3DRMFRAME3 lpCamera, SDL_DWORD dwXPos, SDL_DWORD dwYPos, SDL_DWORD dwWidth, SDL_DWORD dwHeight, LPDIRECT3DRMVIEWPORT2 *lplpD3DRMViewport) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMViewport *viewport = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_CreateViewport(real_this, from_IDirect3DRMDevice3(lpDev), from_IDirect3DRMFrame3(lpCamera), dwXPos, dwYPos, dwWidth, dwHeight, &viewport);
    if (lplpD3DRMViewport != NULL) {
        *lplpD3DRMViewport = &viewport->interface_IDirect3DRMViewport2;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateWrap(IDirect3DRM3 *this, D3DRMWRAPTYPE type, LPDIRECT3DRMFRAME3 lpRef, D3DVALUE ox, D3DVALUE oy, D3DVALUE oz, D3DVALUE dx, D3DVALUE dy, D3DVALUE dz, D3DVALUE ux, D3DVALUE uy, D3DVALUE uz, D3DVALUE ou, D3DVALUE ov, D3DVALUE su, D3DVALUE sv, LPDIRECT3DRMWRAP *lplpD3DRMWrap) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_CreateWrap(real_this, type, from_IDirect3DRMFrame3(lpRef), ox, oy, oz, dx, dy, dz, ux, uy, uz, ou, ov, su, sv, lplpD3DRMWrap);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateUserVisual(IDirect3DRM3 *this, D3DRMUSERVISUALCALLBACK fn, SDL_LPVOID lpArg, LPDIRECT3DRMUSERVISUAL *lplpD3DRMUV) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_CreateUserVisual(real_this, fn, lpArg, lplpD3DRMUV);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_LoadTexture(IDirect3DRM3 *this, const char *lpFileName, LPDIRECT3DRMTEXTURE3 *lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_LoadTexture(real_this, lpFileName, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture3;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_LoadTextureFromResource(IDirect3DRM3 *this, SDL_HMODULE hModule, SDL_LPCTSTR strName, SDL_LPCTSTR strType, LPDIRECT3DRMTEXTURE3 * lplpD3DRMTexture) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    SDL_Direct3DRMTexture *texture = NULL;
    SDL_HRESULT res = SDL_Direct3DRM_LoadTextureFromModule(real_this, hModule, strName, strType, &texture);
    if (lplpD3DRMTexture != NULL) {
        *lplpD3DRMTexture = &texture->interface_IDirect3DRMTexture3;
    }
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_SetSearchPath(IDirect3DRM3 *this, SDL_LPCSTR lpPath) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_SetSearchPath(real_this, lpPath);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_AddSearchPath(IDirect3DRM3 *this, SDL_LPCSTR lpPath) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_AddSearchPath(real_this, lpPath);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_GetSearchPath(IDirect3DRM3 *this, SDL_DWORD *lpdwSize, SDL_LPSTR lpszPath) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_GetSearchPath(real_this, lpdwSize, lpszPath);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_SetDefaultTextureColors(IDirect3DRM3 *this, SDL_DWORD dwColors) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_SetDefaultTextureColors(real_this, dwColors);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_SetDefaultTextureShades(IDirect3DRM3 *this, SDL_DWORD dwShades) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_SetDefaultTextureShades(real_this, dwShades);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_GetDevices(IDirect3DRM3 *this, LPDIRECT3DRMDEVICEARRAY *lplpDevArray) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_GetDevices(real_this, lplpDevArray);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_GetNamedObject(IDirect3DRM3 *this, const char *lpName, LPDIRECT3DRMOBJECT *lplpD3DRMObject) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_GetNamedObject(real_this, lpName, lplpD3DRMObject);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_EnumerateObjects(IDirect3DRM3 *this, D3DRMOBJECTCALLBACK func, SDL_LPVOID lpArg) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_EnumerateObjects(real_this, func, lpArg);
}

typedef struct {
    D3DRMLOADTEXTURE3CALLBACK callback;
    void *arg;
} IDirect3DRM3_LoadTextureAdapterCallback_UserData;

static SDL_HRESULT SDL_CDECL IDirect3DRM3_LoadTextureAdapterCallback(char *tex_name, void *arg, SDL_Direct3DRMTexture **texture) {
    IDirect3DRM3_LoadTextureAdapterCallback_UserData *original = (IDirect3DRM3_LoadTextureAdapterCallback_UserData *)arg;
    IDirect3DRMTexture3 *interface_texture3 = NULL;
    SDL_HRESULT res = original->callback(tex_name, original->arg, &interface_texture3);
    *texture = from_IDirect3DRMTexture3(interface_texture3);
    return res;
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_Load(IDirect3DRM3 *this, SDL_LPVOID lpvObjSource, SDL_LPVOID lpvObjID, SDL_LPIID *lplpGUIDs, SDL_DWORD dwcGUIDs, D3DRMLOADOPTIONS d3drmLOFlags, D3DRMLOADCALLBACK d3drmLoadProc, SDL_LPVOID lpArgLP, D3DRMLOADTEXTURE3CALLBACK d3drmLoadTextureProc, SDL_LPVOID lpArgLTP, LPDIRECT3DRMFRAME3 lpParentFrame) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    IDirect3DRM3_LoadTextureAdapterCallback_UserData adapter_data_storage;
    D3DRMLOADTEXTURE_ADAPTER_CALLBACK adapter_cb = NULL;
    void *adapter_data = NULL;
    if (d3drmLoadProc) {
        adapter_cb = IDirect3DRM3_LoadTextureAdapterCallback;
        adapter_data_storage.callback = d3drmLoadTextureProc;
        adapter_data_storage.arg = lpArgLTP;
        adapter_data = &adapter_data_storage;
    }
    return SDL_Direct3DRM_Load(real_this, lpvObjSource, lpvObjID, lplpGUIDs, dwcGUIDs, d3drmLOFlags, d3drmLoadProc, lpArgLP, adapter_cb, &adapter_data, from_IDirect3DRMFrame3(lpParentFrame));
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_Tick(IDirect3DRM3 *this, D3DVALUE d3dvalTick) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_Tick(real_this, d3dvalTick);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateProgressiveMesh(IDirect3DRM3 *this, LPDIRECT3DRMPROGRESSIVEMESH* lplpD3DRMProgressiveMesh) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_CreateProgressiveMesh(real_this, lplpD3DRMProgressiveMesh);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_RegisterClient(IDirect3DRM3 *this, SDL_REFGUID rguid, SDL_LPDWORD lpdwID) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_RegisterClient(real_this, rguid, lpdwID);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_UnregisterClient(IDirect3DRM3 *this, SDL_REFGUID rguid) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_UnregisterClient(real_this, rguid);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_CreateClippedVisual(IDirect3DRM3 *this, LPDIRECT3DRMVISUAL lpVisual, LPDIRECT3DRMCLIPPEDVISUAL *lpClippedVisual) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_CreateClippedVisual(real_this, lpVisual, lpClippedVisual);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_SetOptions(IDirect3DRM3 *this, SDL_DWORD dwOptions) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_SetOptions(real_this, dwOptions);
}

static SDL_HRESULT SDL_STDCALL SDL_IDirect3DRM3_GetOptions(IDirect3DRM3 *this, SDL_LPDWORD dwOptions) {
    SDL_Direct3DRM *real_this = from_IDirect3DRM3(this);
    return SDL_Direct3DRM_GetOptions(real_this, dwOptions);
}

static IDirect3DRM3Vtbl SDL_IDirect3DRM3_Vtable = {
    SDL_IDirect3DRM3_QueryInterface,
    SDL_IDirect3DRM3_AddRef,
    SDL_IDirect3DRM3_Release,
    SDL_IDirect3DRM3_CreateObject,
    SDL_IDirect3DRM3_CreateFrame,
    SDL_IDirect3DRM3_CreateMesh,
    SDL_IDirect3DRM3_CreateMeshBuilder,
    SDL_IDirect3DRM3_CreateFace,
    SDL_IDirect3DRM3_CreateAnimation,
    SDL_IDirect3DRM3_CreateAnimationSet,
    SDL_IDirect3DRM3_CreateTexture,
    SDL_IDirect3DRM3_CreateLight,
    SDL_IDirect3DRM3_CreateLightRGB,
    SDL_IDirect3DRM3_CreateMaterial,
    SDL_IDirect3DRM3_CreateDevice,
    SDL_IDirect3DRM3_CreateDeviceFromSurface,
    SDL_IDirect3DRM3_CreateDeviceFromD3D,
    SDL_IDirect3DRM3_CreateDeviceFromClipper,
    SDL_IDirect3DRM3_CreateTextureFromSurface,
    SDL_IDirect3DRM3_CreateShadow,
    SDL_IDirect3DRM3_CreateViewport,
    SDL_IDirect3DRM3_CreateWrap,
    SDL_IDirect3DRM3_CreateUserVisual,
    SDL_IDirect3DRM3_LoadTexture,
    SDL_IDirect3DRM3_LoadTextureFromResource,
    SDL_IDirect3DRM3_SetSearchPath,
    SDL_IDirect3DRM3_AddSearchPath,
    SDL_IDirect3DRM3_GetSearchPath,
    SDL_IDirect3DRM3_SetDefaultTextureColors,
    SDL_IDirect3DRM3_SetDefaultTextureShades,
    SDL_IDirect3DRM3_GetDevices,
    SDL_IDirect3DRM3_GetNamedObject,
    SDL_IDirect3DRM3_EnumerateObjects,
    SDL_IDirect3DRM3_Load,
    SDL_IDirect3DRM3_Tick,
    SDL_IDirect3DRM3_CreateProgressiveMesh,
    SDL_IDirect3DRM3_RegisterClient,
    SDL_IDirect3DRM3_UnregisterClient,
    SDL_IDirect3DRM3_CreateClippedVisual,
    SDL_IDirect3DRM3_SetOptions,
    SDL_IDirect3DRM3_GetOptions,
};

SDL_STDAPI Direct3DRMCreate(LPDIRECT3DRM SDL_FAR *lplpDirect3DRM) {
    SDL_Direct3DRM *real_obj = (SDL_Direct3DRM *)SDL_calloc(1, sizeof(SDL_Direct3DRM));
    real_obj->interface_IDirect3DRM.lpVtbl = &SDL_IDirect3DRM_Vtable;
    real_obj->interface_IDirect3DRM2.lpVtbl = &SDL_IDirect3DRM2_Vtable;
    real_obj->interface_IDirect3DRM3.lpVtbl = &SDL_IDirect3DRM3_Vtable;
    real_obj->ref_count = 1;
    *lplpDirect3DRM = (LPDIRECT3DRM) real_obj;
    return SDL_S_OK;
}
