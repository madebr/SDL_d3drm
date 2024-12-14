#ifndef SDL_D3DRM_H
#define SDL_D3DRM_H

#include "SDL_ddraw.h"

typedef struct IDirect3DRM *LPDIRECT3DRM, **LPLPDIRECT3DRM;

#include "SDL_d3drmobj.h"
#include "SDL_winglue.h"

#include <SDL3/SDL.h>

SDL_DEFINE_GUID(SDL_IID_IDirect3DRM,    0x2bc49361, 0x8327, 0x11cf, 0xac, 0x4a, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(SDL_IID_IDirect3DRM2,   0x4516ecc8, 0x8f20, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(SDL_IID_IDirect3DRM3,   0x4516ec83, 0x8f20, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);

#define SDL_WIN_TYPES(itype, ptype) \
    typedef struct itype SDL_FAR *LP##ptype, SDL_FAR **LPLP##ptype
SDL_WIN_TYPES(IDirect3DRM, DIRECT3DRM);
SDL_WIN_TYPES(IDirect3DRM2, DIRECT3DRM2);
SDL_WIN_TYPES(IDirect3DRM3, DIRECT3DRM3);

#define SDL_INTERFACE IDirect3DRM
SDL_DECLARE_INTERFACE_(IDirect3DRM, SDL_IUnknown)
{
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    SDL_STDMETHOD(CreateObject)             (SDL_THIS_ SDL_REFCLSID rclsid, SDL_LPUNKNOWN pUnkOuter, SDL_REFIID riid, SDL_LPVOID SDL_FAR* ppv) SDL_PURE;
    SDL_STDMETHOD(CreateFrame)              (SDL_THIS_ LPDIRECT3DRMFRAME, LPDIRECT3DRMFRAME *) SDL_PURE;
    SDL_STDMETHOD(CreateMesh)               (SDL_THIS_ LPDIRECT3DRMMESH *) SDL_PURE;
    SDL_STDMETHOD(CreateMeshBuilder)        (SDL_THIS_ LPDIRECT3DRMMESHBUILDER *) SDL_PURE;
    SDL_STDMETHOD(CreateFace)               (SDL_THIS_ LPDIRECT3DRMFACE *) SDL_PURE;
    SDL_STDMETHOD(CreateAnimation)          (SDL_THIS_ LPDIRECT3DRMANIMATION *) SDL_PURE;
    SDL_STDMETHOD(CreateAnimationSet)       (SDL_THIS_ LPDIRECT3DRMANIMATIONSET *) SDL_PURE;
    SDL_STDMETHOD(CreateTexture)            (SDL_THIS_ LPD3DRMIMAGE, LPDIRECT3DRMTEXTURE *) SDL_PURE;
    SDL_STDMETHOD(CreateLight)              (SDL_THIS_ D3DRMLIGHTTYPE, D3DCOLOR, LPDIRECT3DRMLIGHT *) SDL_PURE;
    SDL_STDMETHOD(CreateLightRGB)           (SDL_THIS_ D3DRMLIGHTTYPE, D3DVALUE, D3DVALUE, D3DVALUE, LPDIRECT3DRMLIGHT *) SDL_PURE;
    SDL_STDMETHOD(CreateMaterial)           (SDL_THIS_ D3DVALUE, LPDIRECT3DRMMATERIAL *) SDL_PURE;
    SDL_STDMETHOD(CreateDevice)             (SDL_THIS_ SDL_DWORD, SDL_DWORD, LPDIRECT3DRMDEVICE *) SDL_PURE;
    SDL_STDMETHOD(CreateDeviceFromSurface)  (SDL_THIS_ SDL_LPGUID lpGUID, LPDIRECTDRAW lpDD, LPDIRECTDRAWSURFACE lpDDSBack, LPDIRECT3DRMDEVICE *) SDL_PURE;
    SDL_STDMETHOD(CreateDeviceFromD3D)      (SDL_THIS_ LPDIRECT3D lpD3D, LPDIRECT3DDEVICE lpD3DDev, LPDIRECT3DRMDEVICE *) SDL_PURE;
    SDL_STDMETHOD(CreateDeviceFromClipper)  (SDL_THIS_ LPDIRECTDRAWCLIPPER lpDDClipper, SDL_LPGUID lpGUID, int width, int height, LPDIRECT3DRMDEVICE *) SDL_PURE;
    SDL_STDMETHOD(CreateTextureFromSurface) (SDL_THIS_ LPDIRECTDRAWSURFACE lpDDS, LPDIRECT3DRMTEXTURE *) SDL_PURE;
    SDL_STDMETHOD(CreateShadow)             (SDL_THIS_ LPDIRECT3DRMVISUAL, LPDIRECT3DRMLIGHT, D3DVALUE px, D3DVALUE py, D3DVALUE pz, D3DVALUE nx, D3DVALUE ny, D3DVALUE nz, LPDIRECT3DRMVISUAL *) SDL_PURE;
    SDL_STDMETHOD(CreateViewport)           (SDL_THIS_ LPDIRECT3DRMDEVICE, LPDIRECT3DRMFRAME, SDL_DWORD, SDL_DWORD, SDL_DWORD, SDL_DWORD, LPDIRECT3DRMVIEWPORT *) SDL_PURE;
    SDL_STDMETHOD(CreateWrap)               (SDL_THIS_ D3DRMWRAPTYPE, LPDIRECT3DRMFRAME, D3DVALUE ox, D3DVALUE oy, D3DVALUE oz, D3DVALUE dx, D3DVALUE dy, D3DVALUE dz, D3DVALUE ux, D3DVALUE uy, D3DVALUE uz, D3DVALUE ou, D3DVALUE ov, D3DVALUE su, D3DVALUE sv, LPDIRECT3DRMWRAP *) SDL_PURE;
    SDL_STDMETHOD(CreateUserVisual)         (SDL_THIS_ D3DRMUSERVISUALCALLBACK, SDL_LPVOID lPArg, LPDIRECT3DRMUSERVISUAL *) SDL_PURE;
    SDL_STDMETHOD(LoadTexture)              (SDL_THIS_ const char *, LPDIRECT3DRMTEXTURE *) SDL_PURE;
    SDL_STDMETHOD(LoadTextureFromResource)  (SDL_THIS_ SDL_HRSRC rs, LPDIRECT3DRMTEXTURE *) SDL_PURE;
    SDL_STDMETHOD(SetSearchPath)            (SDL_THIS_ SDL_LPCSTR) SDL_PURE;
    SDL_STDMETHOD(AddSearchPath)            (SDL_THIS_ SDL_LPCSTR) SDL_PURE;
    SDL_STDMETHOD(GetSearchPath)            (SDL_THIS_ SDL_DWORD *size_return, SDL_LPSTR path_return) SDL_PURE;
    SDL_STDMETHOD(SetDefaultTextureColors)  (SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetDefaultTextureShades)  (SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(GetDevices)               (SDL_THIS_ LPDIRECT3DRMDEVICEARRAY *) SDL_PURE;
    SDL_STDMETHOD(GetNamedObject)           (SDL_THIS_ const char *, LPDIRECT3DRMOBJECT *) SDL_PURE;
    SDL_STDMETHOD(EnumerateObjects)         (SDL_THIS_ D3DRMOBJECTCALLBACK, SDL_LPVOID) SDL_PURE;
    SDL_STDMETHOD(Load)                     (SDL_THIS_ SDL_LPVOID, SDL_LPVOID, SDL_LPIID *, SDL_DWORD, D3DRMLOADOPTIONS, D3DRMLOADCALLBACK, SDL_LPVOID, D3DRMLOADTEXTURECALLBACK, SDL_LPVOID, LPDIRECT3DRMFRAME) SDL_PURE;
    SDL_STDMETHOD(Tick)                     (SDL_THIS_ D3DVALUE) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
#define IDirect3DRM_QueryInterface(ptr,a,b)                             (ptr)->lpVtbl->QueryInterface(ptr,a,b)
#define IDirect3DRM_AddRef(ptr)                                         (ptr)->lpVtbl->AddRef(ptr)
#define IDirect3DRM_Release(ptr)                                        (ptr)->lpVtbl->Release(ptr)
#define IDirect3DRM_CreateFrame(ptr,a,b)                                (ptr)->lpVtbl->CreateFrame(ptr,a,b)
#define IDirect3DRM_CreateMesh(ptr,a)                                   (ptr)->lpVtbl->CreateMesh(ptr,a)
#define IDirect3DRM_CreateMeshBuilder(ptr,a)                            (ptr)->lpVtbl->CreateMeshBuilder(ptr,a)
#define IDirect3DRM_CreateFace(ptr,a)                                   (ptr)->lpVtbl->CreateFace(ptr,a)
#define IDirect3DRM_CreateAnimation(ptr,a)                              (ptr)->lpVtbl->CreateAnimation(ptr,a)
#define IDirect3DRM_CreateAnimationSet(ptr,a)                           (ptr)->lpVtbl->CreateAnimationSet(ptr,a)
#define IDirect3DRM_CreateTexture(ptr,a,b)                              (ptr)->lpVtbl->CreateTexture(ptr,a,b)
#define IDirect3DRM_CreateLight(ptr,a,b,c)                              (ptr)->lpVtbl->CreateLight(ptr,a,b,c)
#define IDirect3DRM_CreateLightRGB(ptr,a,b,c,d,e)                       (ptr)->lpVtbl->CreateLightRGB(ptr,a,b,c,d,e)
#define IDirect3DRM_CreateMaterial(ptr,a,b)                             (ptr)->lpVtbl->CreateMaterial(ptr,a,b)
#define IDirect3DRM_CreateDevice(ptr,a,b,c)                             (ptr)->lpVtbl->CreateDevice(ptr,a,b,c)
#define IDirect3DRM_CreateDeviceFromSurface(ptr,a,b,c,d)                (ptr)->lpVtbl->CreateDeviceFromSurface(ptr,a,b,c,d)
#define IDirect3DRM_CreateDeviceFromD3D(ptr,a,b,c)                      (ptr)->lpVtbl->CreateDeviceFromD3D(ptr,a,b,c)
#define IDirect3DRM_CreateDeviceFromClipper(ptr,a,b,c,d,e)              (ptr)->lpVtbl->CreateDeviceFromClipper(ptr,a,b,c,d,e)
#define IDirect3DRM_CreateTextureFromSurface(ptr,a,b)                   (ptr)->lpVtbl->CreateTextureFromSurface(ptr,a,b)
#define IDirect3DRM_CreateShadow(ptr,a,b,c,d,e,f,g,h,i)                 (ptr)->lpVtbl->CreateShadow(ptr,a,b,c,d,e,f,g,h,i)
#define IDirect3DRM_CreateViewport(ptr,a,b,c,d,e,f,g)                   (ptr)->lpVtbl->CreateViewport(ptr,a,b,c,d,e,f,g)
#define IDirect3DRM_CreateWrap(ptr,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)     (ptr)->lpVtbl->CreateWrap(ptr,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)
#define IDirect3DRM_CreateUserVisual(ptr,a,b,c)                         (ptr)->lpVtbl->CreateUserVisual(ptr,a,b,c)
#define IDirect3DRM_LoadTexture(ptr,a,b)                                (ptr)->lpVtbl->LoadTexture(ptr,a,b)
#define IDirect3DRM_LoadTextureFromResource(ptr,a,b)                    (ptr)->lpVtbl->LoadTextureFromResource(ptr,a,b)
#define IDirect3DRM_SetSearchPath(ptr,a)                                (ptr)->lpVtbl->SetSearchPath(ptr,a)
#define IDirect3DRM_AddSearchPath(ptr,a)                                (ptr)->lpVtbl->AddSearchPath(ptr,a)
#define IDirect3DRM_GetSearchPath(ptr,a,b)                              (ptr)->lpVtbl->GetSearchPath(ptr,a,b)
#define IDirect3DRM_SetDefaultTextureColors(ptr,a)                      (ptr)->lpVtbl->SetDefaultTextureColors(ptr,a)
#define IDirect3DRM_SetDefaultTextureShades(ptr,a)                      (ptr)->lpVtbl->SetDefaultTextureShades(ptr,a)
#define IDirect3DRM_GetDevices(ptr,a)                                   (ptr)->lpVtbl->GetDevices(ptr,a)
#define IDirect3DRM_GetNamedObject(ptr,a,b)                             (ptr)->lpVtbl->GetNamedObject(ptr,a,b)
#define IDirect3DRM_EnumerateObjects(ptr,a,b)                           (ptr)->lpVtbl->EnumerateObjects(ptr,a,b)
#define IDirect3DRM_Load(ptr,a,b,c,d,e,f,g,h,i,j)                       (ptr)->lpVtbl->Load(ptr,a,b,c,d,e,f,g,h,i,j)
#define IDirect3DRM_Tick(ptr,a)                                         (ptr)->lpVtbl->Tick(ptr,a)
#else
#define IDirect3DRM_QueryInterface(ptr,a,b)                             (ptr)->QueryInterface(a,b)
#define IDirect3DRM_AddRef(ptr)                                         (ptr)->AddRef()
#define IDirect3DRM_Release(ptr)                                        (ptr)->Release()
#define IDirect3DRM_CreateFrame(ptr,a,b)                                (ptr)->CreateFrame(a,b)
#define IDirect3DRM_CreateMesh(ptr,a)                                   (ptr)->CreateMesh(a)
#define IDirect3DRM_CreateMeshBuilder(ptr,a)                            (ptr)->CreateMeshBuilder(a)
#define IDirect3DRM_CreateFace(ptr,a)                                   (ptr)->CreateFace(a)
#define IDirect3DRM_CreateAnimation(ptr,a)                              (ptr)->CreateAnimation(a)
#define IDirect3DRM_CreateAnimationSet(ptr,a)                           (ptr)->CreateAnimationSet(a)
#define IDirect3DRM_CreateTexture(ptr,a,b)                              (ptr)->CreateTexture(a,b)
#define IDirect3DRM_CreateLight(ptr,a,b,c)                              (ptr)->CreateLight(a,b,c)
#define IDirect3DRM_CreateLightRGB(ptr,a,b,c,d,e)                       (ptr)->CreateLightRGB(a,b,c,d,e)
#define IDirect3DRM_CreateMaterial(ptr,a,b)                             (ptr)->CreateMaterial(a,b)
#define IDirect3DRM_CreateDevice(ptr,a,b,c)                             (ptr)->CreateDevice(a,b,c)
#define IDirect3DRM_CreateDeviceFromSurface(ptr,a,b,c,d)                (ptr)->CreateDeviceFromSurface(a,b,c,d)
#define IDirect3DRM_CreateDeviceFromD3D(ptr,a,b,c)                      (ptr)->CreateDeviceFromD3D(a,b,c)
#define IDirect3DRM_CreateDeviceFromClipper(ptr,a,b,c,d,e)              (ptr)->CreateDeviceFromClipper(a,b,c,d,e)
#define IDirect3DRM_CreateTextureFromSurface(ptr,a,b)                   (ptr)->CreateTextureFromSurface(a,b)
#define IDirect3DRM_CreateShadow(ptr,a,b,c,d,e,f,g,h,i)                 (ptr)->CreateShadow(a,b,c,d,e,f,g,h,i)
#define IDirect3DRM_CreateViewport(ptr,a,b,c,d,e,f,g)                   (ptr)->CreateViewport(a,b,c,d,e,f,g)
#define IDirect3DRM_CreateWrap(ptr,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)     (ptr)->CreateWrap(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)
#define IDirect3DRM_CreateUserVisual(ptr,a,b,c)                         (ptr)->CreateUserVisual(a,b,c)
#define IDirect3DRM_LoadTexture(ptr,a,b)                                (ptr)->LoadTexture(a,b)
#define IDirect3DRM_LoadTextureFromResource(ptr,a,b)                    (ptr)->LoadTextureFromResource(a,b)
#define IDirect3DRM_SetSearchPath(ptr,a)                                (ptr)->SetSearchPath(a)
#define IDirect3DRM_AddSearchPath(ptr,a)                                (ptr)->AddSearchPath(a)
#define IDirect3DRM_GetSearchPath(ptr,a,b)                              (ptr)->GetSearchPath(a,b)
#define IDirect3DRM_SetDefaultTextureColors(ptr,a)                      (ptr)->SetDefaultTextureColors(a)
#define IDirect3DRM_SetDefaultTextureShades(ptr,a)                      (ptr)->SetDefaultTextureShades(a)
#define IDirect3DRM_GetDevices(ptr,a)                                   (ptr)->GetDevices(a)
#define IDirect3DRM_GetNamedObject(ptr,a,b)                             (ptr)->GetNamedObject(a,b)
#define IDirect3DRM_EnumerateObjects(ptr,a,b)                           (ptr)->EnumerateObjects(a,b)
#define IDirect3DRM_Load(ptr,a,b,c,d,e,f,g,h,i,j)                       (ptr)->Load(a,b,c,d,e,f,g,h,i,j)
#define IDirect3DRM_Tick(ptr,a)                                         (ptr)->Tick(a)
#endif

#define SDL_INTERFACE IDirect3DRM2
SDL_DECLARE_INTERFACE_(IDirect3DRM2, SDL_IUnknown)
{
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    SDL_STDMETHOD(CreateObject)             (SDL_THIS_ SDL_REFCLSID rclsid, SDL_LPUNKNOWN pUnkOuter, SDL_REFIID riid, SDL_LPVOID SDL_FAR* ppv) SDL_PURE;
    SDL_STDMETHOD(CreateFrame)              (SDL_THIS_ LPDIRECT3DRMFRAME, LPDIRECT3DRMFRAME2 *) SDL_PURE;
    SDL_STDMETHOD(CreateMesh)               (SDL_THIS_ LPDIRECT3DRMMESH *) SDL_PURE;
    SDL_STDMETHOD(CreateMeshBuilder)        (SDL_THIS_ LPDIRECT3DRMMESHBUILDER2 *) SDL_PURE;
    SDL_STDMETHOD(CreateFace)               (SDL_THIS_ LPDIRECT3DRMFACE *) SDL_PURE;
    SDL_STDMETHOD(CreateAnimation)          (SDL_THIS_ LPDIRECT3DRMANIMATION *) SDL_PURE;
    SDL_STDMETHOD(CreateAnimationSet)       (SDL_THIS_ LPDIRECT3DRMANIMATIONSET *) SDL_PURE;
    SDL_STDMETHOD(CreateTexture)            (SDL_THIS_ LPD3DRMIMAGE, LPDIRECT3DRMTEXTURE2 *) SDL_PURE;
    SDL_STDMETHOD(CreateLight)              (SDL_THIS_ D3DRMLIGHTTYPE, D3DCOLOR, LPDIRECT3DRMLIGHT *) SDL_PURE;
    SDL_STDMETHOD(CreateLightRGB)           (SDL_THIS_ D3DRMLIGHTTYPE, D3DVALUE, D3DVALUE, D3DVALUE, LPDIRECT3DRMLIGHT *) SDL_PURE;
    SDL_STDMETHOD(CreateMaterial)           (SDL_THIS_ D3DVALUE, LPDIRECT3DRMMATERIAL *) SDL_PURE;
    SDL_STDMETHOD(CreateDevice)             (SDL_THIS_ SDL_DWORD, SDL_DWORD, LPDIRECT3DRMDEVICE2 *) SDL_PURE;
    SDL_STDMETHOD(CreateDeviceFromSurface)  (SDL_THIS_ SDL_LPGUID lpGUID, LPDIRECTDRAW lpDD, LPDIRECTDRAWSURFACE lpDDSBack, LPDIRECT3DRMDEVICE2 *) SDL_PURE;
    SDL_STDMETHOD(CreateDeviceFromD3D)      (SDL_THIS_ LPDIRECT3D2 lpD3D, LPDIRECT3DDEVICE2 lpD3DDev, LPDIRECT3DRMDEVICE2 *) SDL_PURE;
    SDL_STDMETHOD(CreateDeviceFromClipper)  (SDL_THIS_ LPDIRECTDRAWCLIPPER lpDDClipper, SDL_LPGUID lpGUID, int width, int height, LPDIRECT3DRMDEVICE2 *) SDL_PURE;
    SDL_STDMETHOD(CreateTextureFromSurface) (SDL_THIS_ LPDIRECTDRAWSURFACE lpDDS, LPDIRECT3DRMTEXTURE2 *) SDL_PURE;
    SDL_STDMETHOD(CreateShadow)             (SDL_THIS_ LPDIRECT3DRMVISUAL, LPDIRECT3DRMLIGHT, D3DVALUE px, D3DVALUE py, D3DVALUE pz, D3DVALUE nx, D3DVALUE ny, D3DVALUE nz, LPDIRECT3DRMVISUAL *) SDL_PURE;
    SDL_STDMETHOD(CreateViewport)           (SDL_THIS_ LPDIRECT3DRMDEVICE, LPDIRECT3DRMFRAME, SDL_DWORD, SDL_DWORD, SDL_DWORD, SDL_DWORD, LPDIRECT3DRMVIEWPORT *) SDL_PURE;
    SDL_STDMETHOD(CreateWrap)               (SDL_THIS_ D3DRMWRAPTYPE, LPDIRECT3DRMFRAME, D3DVALUE ox, D3DVALUE oy, D3DVALUE oz, D3DVALUE dx, D3DVALUE dy, D3DVALUE dz, D3DVALUE ux, D3DVALUE uy, D3DVALUE uz, D3DVALUE ou, D3DVALUE ov, D3DVALUE su, D3DVALUE sv, LPDIRECT3DRMWRAP *) SDL_PURE;
    SDL_STDMETHOD(CreateUserVisual)         (SDL_THIS_ D3DRMUSERVISUALCALLBACK, SDL_LPVOID lPArg, LPDIRECT3DRMUSERVISUAL *) SDL_PURE;
    SDL_STDMETHOD(LoadTexture)              (SDL_THIS_ const char *, LPDIRECT3DRMTEXTURE2 *) SDL_PURE;
    SDL_STDMETHOD(LoadTextureFromResource)  (SDL_THIS_ SDL_HMODULE SDL_HMODULE, SDL_LPCTSTR strName, SDL_LPCTSTR strType, LPDIRECT3DRMTEXTURE2 *) SDL_PURE;
    SDL_STDMETHOD(SetSearchPath)            (SDL_THIS_ SDL_LPCSTR) SDL_PURE;
    SDL_STDMETHOD(AddSearchPath)            (SDL_THIS_ SDL_LPCSTR) SDL_PURE;
    SDL_STDMETHOD(GetSearchPath)            (SDL_THIS_ SDL_DWORD *size_return, SDL_LPSTR path_return) SDL_PURE;
    SDL_STDMETHOD(SetDefaultTextureColors)  (SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetDefaultTextureShades)  (SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(GetDevices)               (SDL_THIS_ LPDIRECT3DRMDEVICEARRAY *) SDL_PURE;
    SDL_STDMETHOD(GetNamedObject)           (SDL_THIS_ const char *, LPDIRECT3DRMOBJECT *) SDL_PURE;
    SDL_STDMETHOD(EnumerateObjects)         (SDL_THIS_ D3DRMOBJECTCALLBACK, SDL_LPVOID) SDL_PURE;
    SDL_STDMETHOD(Load)                     (SDL_THIS_ SDL_LPVOID, SDL_LPVOID, SDL_LPIID *, SDL_DWORD, D3DRMLOADOPTIONS, D3DRMLOADCALLBACK, SDL_LPVOID, D3DRMLOADTEXTURECALLBACK, SDL_LPVOID, LPDIRECT3DRMFRAME) SDL_PURE;
    SDL_STDMETHOD(Tick)                     (SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(CreateProgressiveMeshCreateProgressiveMesh)    (SDL_THIS_ LPDIRECT3DRMPROGRESSIVEMESH *) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
#define IDirect3DRM2_QueryInterface(ptr, a, b)                          (ptr)->lpVtbl->QueryInterface(ptr, a, b)
#define IDirect3DRM2_AddRef(ptr)                                        (ptr)->lpVtbl->AddRef(ptr)
#define IDirect3DRM2_Release(ptr)                                       (ptr)->lpVtbl->Release(ptr)
#define IDirect3DRM2_CreateObject(ptr,a,b,c,d)                          (ptr)->lpVtbl->CreateObject(ptr,a,b,c,d)
#define IDirect3DRM2_CreateFrame(ptr,a,b)                               (ptr)->lpVtbl->CreateFrame(ptr,a,b)
#define IDirect3DRM2_CreateMesh(ptr,a)                                  (ptr)->lpVtbl->CreateMesh(ptr,a)
#define IDirect3DRM2_CreateMeshBuilder(ptr,a)                           (ptr)->lpVtbl->CreateMeshBuilder(ptr,a)
#define IDirect3DRM2_CreateFace(ptr,a)                                  (ptr)->lpVtbl->CreateFace(ptr,a)
#define IDirect3DRM2_CreateAnimation(ptr,a)                             (ptr)->lpVtbl->CreateAnimation(ptr,a)
#define IDirect3DRM2_CreateAnimationSet(ptr,a)                          (ptr)->lpVtbl->CreateAnimationSet(ptr,a)
#define IDirect3DRM2_CreateTexture(ptr,a,b)                             (ptr)->lpVtbl->CreateTexture(ptr,a,b)
#define IDirect3DRM2_CreateLight(ptr,a,b,c)                             (ptr)->lpVtbl->CreateLight(ptr,a,b,c)
#define IDirect3DRM2_CreateLightRGB(ptr,a,b,c,d,e)                      (ptr)->lpVtbl->CreateLightRGB(ptr,a,b,c,d,e)
#define IDirect3DRM2_CreateMaterial(ptr,a,b)                            (ptr)->lpVtbl->CreateMaterial(ptr,a,b)
#define IDirect3DRM2_CreateDevice(ptr,a,b,c)                            (ptr)->lpVtbl->CreateDevice(ptr,a,b,c)
#define IDirect3DRM2_CreateDeviceFromSurface(ptr,a,b,c,d)               (ptr)->lpVtbl->CreateDeviceFromSurface(ptr,a,b,c,d)
#define IDirect3DRM2_CreateDeviceFromD3D(ptr,a,b,c)                     (ptr)->lpVtbl->CreateDeviceFromD3D(ptr,a,b,c)
#define IDirect3DRM2_CreateDeviceFromClipper(ptr,a,b,c,d,e)             (ptr)->lpVtbl->CreateDeviceFromClipper(ptr,a,b,c,d,e)
#define IDirect3DRM2_CreateTextureFromSurface(ptr,a,b)                  (ptr)->lpVtbl->CreateTextureFromSurface(ptr,a,b)
#define IDirect3DRM2_CreateShadow(ptr,a,b,c,d,e,f,g,h,i)                (ptr)->lpVtbl->CreateShadow(ptr,a,b,c,d,e,f,g,h,i)
#define IDirect3DRM2_CreateViewport(ptr,a,b,c,d,e,f,g)                  (ptr)->lpVtbl->CreateViewport(ptr,a,b,c,d,e,f,g)
#define IDirect3DRM2_CreateWrap(ptr,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)    (ptr)->lpVtbl->CreateWrap(ptr,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)
#define IDirect3DRM2_CreateUserVisual(ptr,a,b,c)                        (ptr)->lpVtbl->CreateUserVisual(ptr,a,b,c)
#define IDirect3DRM2_LoadTexture(ptr,a,b)                               (ptr)->lpVtbl->LoadTexture(ptr,a,b)
#define IDirect3DRM2_LoadTextureFromResource(ptr,a,b,c,d)               (ptr)->lpVtbl->LoadTextureFromResource(ptr,a,b,c,d)
#define IDirect3DRM2_SetSearchPath(ptr,a)                               (ptr)->lpVtbl->SetSearchPath(ptr,a)
#define IDirect3DRM2_AddSearchPath(ptr,a)                               (ptr)->lpVtbl->AddSearchPath(ptr,a)
#define IDirect3DRM2_GetSearchPath(ptr,a,b)                             (ptr)->lpVtbl->GetSearchPath(ptr,a,b)
#define IDirect3DRM2_SetDefaultTextureColors(ptr,a)                     (ptr)->lpVtbl->SetDefaultTextureColors(ptr,a)
#define IDirect3DRM2_SetDefaultTextureShades(ptr,a)                     (ptr)->lpVtbl->SetDefaultTextureShades(ptr,a)
#define IDirect3DRM2_GetDevices(ptr,a)                                  (ptr)->lpVtbl->GetDevices(ptr,a)
#define IDirect3DRM2_GetNamedObject(ptr,a,b)                            (ptr)->lpVtbl->GetNamedObject(ptr,a,b)
#define IDirect3DRM2_EnumerateObjects(ptr,a,b)                          (ptr)->lpVtbl->EnumerateObjects(ptr,a,b)
#define IDirect3DRM2_Load(ptr,a,b,c,d,e,f,g,h,i,j)                      (ptr)->lpVtbl->Load(ptr,a,b,c,d,e,f,g,h,i,j)
#define IDirect3DRM2_Tick(ptr,a)                                        (ptr)->lpVtbl->Tick(ptr,a)
#define IDirect3DRM2_CreateProgressiveMesh(ptr,a)                       (ptr)->lpVtbl->CreateProgressiveMesh(ptr,a)
#else
#define IDirect3DRM2_QueryInterface(ptr, a, b)                          (ptr)->QueryInterface(a, b)
#define IDirect3DRM2_AddRef(ptr)                                        (ptr)->AddRef()
#define IDirect3DRM2_Release(ptr)                                       (ptr)->Release()
#define IDirect3DRM2_CreateObject(ptr,a,b,c,d)                          (ptr)->CreateObject(a,b,c,d)
#define IDirect3DRM2_CreateFrame(ptr,a,b)                               (ptr)->CreateFrame(a,b)
#define IDirect3DRM2_CreateMesh(ptr,a)                                  (ptr)->CreateMesh(a)
#define IDirect3DRM2_CreateMeshBuilder(ptr,a)                           (ptr)->CreateMeshBuilder(a)
#define IDirect3DRM2_CreateFace(ptr,a)                                  (ptr)->CreateFace(a)
#define IDirect3DRM2_CreateAnimation(ptr,a)                             (ptr)->CreateAnimation(a)
#define IDirect3DRM2_CreateAnimationSet(ptr,a)                          (ptr)->CreateAnimationSet(a)
#define IDirect3DRM2_CreateTexture(ptr,a,b)                             (ptr)->CreateTexture(a,b)
#define IDirect3DRM2_CreateLight(ptr,a,b,c)                             (ptr)->CreateLight(a,b,c)
#define IDirect3DRM2_CreateLightRGB(ptr,a,b,c,d,e)                      (ptr)->CreateLightRGB(a,b,c,d,e)
#define IDirect3DRM2_CreateMaterial(ptr,a,b)                            (ptr)->CreateMaterial(a,b)
#define IDirect3DRM2_CreateDevice(ptr,a,b,c)                            (ptr)->CreateDevice(a,b,c)
#define IDirect3DRM2_CreateDeviceFromSurface(ptr,a,b,c,d)               (ptr)->CreateDeviceFromSurface(a,b,c,d)
#define IDirect3DRM2_CreateDeviceFromD3D(ptr,a,b,c)                     (ptr)->CreateDeviceFromD3D(a,b,c)
#define IDirect3DRM2_CreateDeviceFromClipper(ptr,a,b,c,d,e)             (ptr)->CreateDeviceFromClipper(a,b,c,d,e)
#define IDirect3DRM2_CreateTextureFromSurface(ptr,a,b)                  (ptr)->CreateTextureFromSurface(a,b)
#define IDirect3DRM2_CreateShadow(ptr,a,b,c,d,e,f,g,h,i)                (ptr)->CreateShadow(a,b,c,d,e,f,g,h,i)
#define IDirect3DRM2_CreateViewport(ptr,a,b,c,d,e,f,g)                  (ptr)->CreateViewport(a,b,c,d,e,f,g)
#define IDirect3DRM2_CreateWrap(ptr,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)    (ptr)->CreateWrap(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)
#define IDirect3DRM2_CreateUserVisual(ptr,a,b,c)                        (ptr)->CreateUserVisual(a,b,c)
#define IDirect3DRM2_LoadTexture(ptr,a,b)                               (ptr)->LoadTexture(a,b)
#define IDirect3DRM2_LoadTextureFromResource(ptr,a,b,c,d)               (ptr)->LoadTextureFromResource(a,b,c,d)
#define IDirect3DRM2_SetSearchPath(ptr,a)                               (ptr)->SetSearchPath(a)
#define IDirect3DRM2_AddSearchPath(ptr,a)                               (ptr)->AddSearchPath(a)
#define IDirect3DRM2_GetSearchPath(ptr,a,b)                             (ptr)->GetSearchPath(a,b)
#define IDirect3DRM2_SetDefaultTextureColors(ptr,a)                     (ptr)->SetDefaultTextureColors(a)
#define IDirect3DRM2_SetDefaultTextureShades(ptr,a)                     (ptr)->SetDefaultTextureShades(a)
#define IDirect3DRM2_GetDevices(ptr,a)                                  (ptr)->GetDevices(a)
#define IDirect3DRM2_GetNamedObject(ptr,a,b)                            (ptr)->GetNamedObject(a,b)
#define IDirect3DRM2_EnumerateObjects(ptr,a,b)                          (ptr)->EnumerateObjects(a,b)
#define IDirect3DRM2_Load(ptr,a,b,c,d,e,f,g,h,i,j)                      (ptr)->Load(a,b,c,d,e,f,g,h,i,j)
#define IDirect3DRM2_Tick(ptr,a)                                        (ptr)->Tick(a)
#define IDirect3DRM2_CreateProgressiveMesh(ptr,a)                       (ptr)->CreateProgressiveMesh(a)
#endif

#define SDL_INTERFACE IDirect3DRM3
SDL_DECLARE_INTERFACE_(IDirect3DRM3, SDL_IUnknown)
{
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    SDL_STDMETHOD(CreateObject)             (SDL_THIS_ SDL_REFCLSID rclsid, SDL_LPUNKNOWN pUnkOuter, SDL_REFIID riid, SDL_LPVOID SDL_FAR* ppv) SDL_PURE;
    SDL_STDMETHOD(CreateFrame)              (SDL_THIS_ LPDIRECT3DRMFRAME3, LPDIRECT3DRMFRAME3 *) SDL_PURE;
    SDL_STDMETHOD(CreateMesh)               (SDL_THIS_ LPDIRECT3DRMMESH *) SDL_PURE;
    SDL_STDMETHOD(CreateMeshBuilder)        (SDL_THIS_ LPDIRECT3DRMMESHBUILDER3 *) SDL_PURE;
    SDL_STDMETHOD(CreateFace)               (SDL_THIS_ LPDIRECT3DRMFACE2 *) SDL_PURE;
    SDL_STDMETHOD(CreateAnimation)          (SDL_THIS_ LPDIRECT3DRMANIMATION2 *) SDL_PURE;
    SDL_STDMETHOD(CreateAnimationSet)       (SDL_THIS_ LPDIRECT3DRMANIMATIONSET2 *) SDL_PURE;
    SDL_STDMETHOD(CreateTexture)            (SDL_THIS_ LPD3DRMIMAGE, LPDIRECT3DRMTEXTURE3 *) SDL_PURE;
    SDL_STDMETHOD(CreateLight)              (SDL_THIS_ D3DRMLIGHTTYPE, D3DCOLOR, LPDIRECT3DRMLIGHT *) SDL_PURE;
    SDL_STDMETHOD(CreateLightRGB)           (SDL_THIS_ D3DRMLIGHTTYPE, D3DVALUE, D3DVALUE, D3DVALUE, LPDIRECT3DRMLIGHT *) SDL_PURE;
    SDL_STDMETHOD(CreateMaterial)           (SDL_THIS_ D3DVALUE, LPDIRECT3DRMMATERIAL2 *) SDL_PURE;
    SDL_STDMETHOD(CreateDevice)             (SDL_THIS_ SDL_DWORD, SDL_DWORD, LPDIRECT3DRMDEVICE3 *) SDL_PURE;
    SDL_STDMETHOD(CreateDeviceFromSurface)  (SDL_THIS_ SDL_LPGUID lpGUID, LPDIRECTDRAW lpDD, LPDIRECTDRAWSURFACE lpDDSBack, SDL_DWORD dwFlags, LPDIRECT3DRMDEVICE3 * ) SDL_PURE;
    SDL_STDMETHOD(CreateDeviceFromD3D)      (SDL_THIS_ LPDIRECT3D2 lpD3D, LPDIRECT3DDEVICE2 lpD3DDev, LPDIRECT3DRMDEVICE3 * ) SDL_PURE;
    SDL_STDMETHOD(CreateDeviceFromClipper)  (SDL_THIS_ LPDIRECTDRAWCLIPPER lpDDClipper, SDL_LPGUID lpGUID, int width, int height, LPDIRECT3DRMDEVICE3 *) SDL_PURE;
    SDL_STDMETHOD(CreateTextureFromSurface) (SDL_THIS_ LPDIRECTDRAWSURFACE lpDDS, LPDIRECT3DRMTEXTURE3 *) SDL_PURE;
    SDL_STDMETHOD(CreateShadow)             (SDL_THIS_ SDL_LPUNKNOWN, LPDIRECT3DRMLIGHT, D3DVALUE px, D3DVALUE py, D3DVALUE pz, D3DVALUE nx, D3DVALUE ny, D3DVALUE nz, LPDIRECT3DRMSHADOW2 *) SDL_PURE;
    SDL_STDMETHOD(CreateViewport)           (SDL_THIS_ LPDIRECT3DRMDEVICE3, LPDIRECT3DRMFRAME3, SDL_DWORD, SDL_DWORD, SDL_DWORD, SDL_DWORD, LPDIRECT3DRMVIEWPORT2 * ) SDL_PURE;
    SDL_STDMETHOD(CreateWrap)               (SDL_THIS_ D3DRMWRAPTYPE, LPDIRECT3DRMFRAME3, D3DVALUE ox, D3DVALUE oy, D3DVALUE oz, D3DVALUE dx, D3DVALUE dy, D3DVALUE dz, D3DVALUE ux, D3DVALUE uy, D3DVALUE uz, D3DVALUE ou, D3DVALUE ov, D3DVALUE su, D3DVALUE sv, LPDIRECT3DRMWRAP *) SDL_PURE;
    SDL_STDMETHOD(CreateUserVisual)         (SDL_THIS_ D3DRMUSERVISUALCALLBACK, SDL_LPVOID lPArg, LPDIRECT3DRMUSERVISUAL *) SDL_PURE;
    SDL_STDMETHOD(LoadTexture)              (SDL_THIS_ const char *, LPDIRECT3DRMTEXTURE3 *) SDL_PURE;
    SDL_STDMETHOD(LoadTextureFromResource)  (SDL_THIS_ SDL_HMODULE SDL_HMODULE, SDL_LPCTSTR strName, SDL_LPCTSTR strType, LPDIRECT3DRMTEXTURE3 *) SDL_PURE;
    SDL_STDMETHOD(SetSearchPath)            (SDL_THIS_ SDL_LPCSTR) SDL_PURE;
    SDL_STDMETHOD(AddSearchPath)            (SDL_THIS_ SDL_LPCSTR) SDL_PURE;
    SDL_STDMETHOD(GetSearchPath)            (SDL_THIS_ SDL_DWORD *size_return, SDL_LPSTR path_return) SDL_PURE;
    SDL_STDMETHOD(SetDefaultTextureColors)  (SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetDefaultTextureShades)  (SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(GetDevices)               (SDL_THIS_ LPDIRECT3DRMDEVICEARRAY *) SDL_PURE;
    SDL_STDMETHOD(GetNamedObject)           (SDL_THIS_ const char *, LPDIRECT3DRMOBJECT *) SDL_PURE;
    SDL_STDMETHOD(EnumerateObjects)         (SDL_THIS_ D3DRMOBJECTCALLBACK, SDL_LPVOID) SDL_PURE;
    SDL_STDMETHOD(Load)                     (SDL_THIS_ SDL_LPVOID, SDL_LPVOID, SDL_LPIID *, SDL_DWORD, D3DRMLOADOPTIONS, D3DRMLOADCALLBACK, SDL_LPVOID, D3DRMLOADTEXTURE3CALLBACK, SDL_LPVOID, LPDIRECT3DRMFRAME3 ) SDL_PURE;
    SDL_STDMETHOD(Tick)                     (SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(CreateProgressiveMesh)    (SDL_THIS_ LPDIRECT3DRMPROGRESSIVEMESH *) SDL_PURE;
    SDL_STDMETHOD(RegisterClient)           (SDL_THIS_ SDL_REFGUID rguid, SDL_LPDWORD lpdwID) SDL_PURE;
    SDL_STDMETHOD(UnregisterClient)         (SDL_THIS_ SDL_REFGUID rguid) SDL_PURE;
    SDL_STDMETHOD(CreateClippedVisual)      (SDL_THIS_ LPDIRECT3DRMVISUAL, LPDIRECT3DRMCLIPPEDVISUAL *) SDL_PURE;
    SDL_STDMETHOD(SetOptions)               (SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(GetOptions)               (SDL_THIS_ SDL_LPDWORD) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
#define IDirect3DRM3_QueryInterface(ptr,a,b)                            (ptr)->lpVtbl->QueryInterface(ptr,a,b)
#define IDirect3DRM3_AddRef(ptr)                                        (ptr)->lpVtbl->AddRef(ptr)
#define IDirect3DRM3_Release(ptr)                                       (ptr)->lpVtbl->Release(ptr)
#define IDirect3DRM3_CreateObject(ptr,a,b,c,d)                          (ptr)->lpVtbl->CreateObject(ptr,a,b,c,d)
#define IDirect3DRM3_CreateFrame(ptr,a,b)                               (ptr)->lpVtbl->CreateFrame(ptr,a,b)
#define IDirect3DRM3_CreateMesh(ptr,a)                                  (ptr)->lpVtbl->CreateMesh(ptr,a)
#define IDirect3DRM3_CreateMeshBuilder(ptr,a)                           (ptr)->lpVtbl->CreateMeshBuilder(ptr,a)
#define IDirect3DRM3_CreateFace(ptr,a)                                  (ptr)->lpVtbl->CreateFace(ptr,a)
#define IDirect3DRM3_CreateAnimation(ptr,a)                             (ptr)->lpVtbl->CreateAnimation(ptr,a)
#define IDirect3DRM3_CreateAnimationSet(ptr,a)                          (ptr)->lpVtbl->CreateAnimationSet(ptr,a)
#define IDirect3DRM3_CreateTexture(ptr,a,b)                             (ptr)->lpVtbl->CreateTexture(ptr,a,b)
#define IDirect3DRM3_CreateLight(ptr,a,b,c)                             (ptr)->lpVtbl->CreateLight(ptr,a,b,c)
#define IDirect3DRM3_CreateLightRGB(ptr,a,b,c,d,e)                      (ptr)->lpVtbl->CreateLightRGB(ptr,a,b,c,d,e)
#define IDirect3DRM3_CreateMaterial(ptr,a,b)                            (ptr)->lpVtbl->CreateMaterial(ptr,a,b)
#define IDirect3DRM3_CreateDevice(ptr,a,b,c)                            (ptr)->lpVtbl->CreateDevice(ptr,a,b,c)
#define IDirect3DRM3_CreateDeviceFromSurface(ptr,a,b,c,d,e)             (ptr)->lpVtbl->CreateDeviceFromSurface(ptr,a,b,c,d,e)
#define IDirect3DRM3_CreateDeviceFromD3D(ptr,a,b,c)                     (ptr)->lpVtbl->CreateDeviceFromD3D(ptr,a,b,c)
#define IDirect3DRM3_CreateDeviceFromClipper(ptr,a,b,c,d,e)             (ptr)->lpVtbl->CreateDeviceFromClipper(ptr,a,b,c,d,e)
#define IDirect3DRM3_CreateTextureFromSurface(ptr,a,b)                  (ptr)->lpVtbl->CreateTextureFromSurface(ptr,a,b)
#define IDirect3DRM3_CreateShadow(ptr,a,b,c,d,e,f,g,h,i)                (ptr)->lpVtbl->CreateShadow(ptr,a,b,c,d,e,f,g,h,i)
#define IDirect3DRM3_CreateViewport(ptr,a,b,c,d,e,f,g)                  (ptr)->lpVtbl->CreateViewport(ptr,a,b,c,d,e,f,g)
#define IDirect3DRM3_CreateWrap(ptr,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)    (ptr)->lpVtbl->CreateWrap(ptr,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)
#define IDirect3DRM3_CreateUserVisual(ptr,a,b,c)                        (ptr)->lpVtbl->CreateUserVisual(ptr,a,b,c)
#define IDirect3DRM3_LoadTexture(ptr,a,b)                               (ptr)->lpVtbl->LoadTexture(ptr,a,b)
#define IDirect3DRM3_LoadTextureFromResource(ptr,a,b,c,d)               (ptr)->lpVtbl->LoadTextureFromResource(ptr,a,b,c,d)
#define IDirect3DRM3_SetSearchPath(ptr,a)                               (ptr)->lpVtbl->SetSearchPath(ptr,a)
#define IDirect3DRM3_AddSearchPath(ptr,a)                               (ptr)->lpVtbl->AddSearchPath(ptr,a)
#define IDirect3DRM3_GetSearchPath(ptr,a,b)                             (ptr)->lpVtbl->GetSearchPath(ptr,a,b)
#define IDirect3DRM3_SetDefaultTextureColors(ptr,a)                     (ptr)->lpVtbl->SetDefaultTextureColors(ptr,a)
#define IDirect3DRM3_SetDefaultTextureShades(ptr,a)                     (ptr)->lpVtbl->SetDefaultTextureShades(ptr,a)
#define IDirect3DRM3_GetDevices(ptr,a)                                  (ptr)->lpVtbl->GetDevices(ptr,a)
#define IDirect3DRM3_GetNamedObject(ptr,a,b)                            (ptr)->lpVtbl->GetNamedObject(ptr,a,b)
#define IDirect3DRM3_EnumerateObjects(ptr,a,b)                          (ptr)->lpVtbl->EnumerateObjects(ptr,a,b)
#define IDirect3DRM3_Load(ptr,a,b,c,d,e,f,g,h,i,j)                      (ptr)->lpVtbl->Load(ptr,a,b,c,d,e,f,g,h,i,j)
#define IDirect3DRM3_Tick(ptr,a)                                        (ptr)->lpVtbl->Tick(ptr,a)
#define IDirect3DRM3_CreateProgressiveMesh(ptr,a)                       (ptr)->lpVtbl->CreateProgressiveMesh(ptr,a)
#define IDirect3DRM3_RegisterClient(ptr,a,b)                            (ptr)->lpVtbl->RegisterClient(ptr,a,b)
#define IDirect3DRM3_UnregisterClient(ptr,a)                            (ptr)->lpVtbl->UnregisterClient(ptr,a)
#define IDirect3DRM3_CreateClippedVisual(ptr,a,b)                       (ptr)->lpVtbl->CreateClippedVisual(ptr,a,b)
#define IDirect3DRM3_SetOptions(ptr,a);                                 (ptr)->lpVtbl->SetOptions(ptr,a);
#define IDirect3DRM3_GetOptions(ptr,a);                                 (ptr)->lpVtbl->GetOptions(ptr,a);
#else
#define IDirect3DRM3_QueryInterface(ptr,a,b)                            (ptr)->QueryInterface(a,b)
#define IDirect3DRM3_AddRef(ptr)                                        (ptr)->AddRef()
#define IDirect3DRM3_Release(ptr)                                       (ptr)->Release()
#define IDirect3DRM3_CreateObject(ptr,a,b,c,d)                          (ptr)->CreateObject(a,b,c,d)
#define IDirect3DRM3_CreateFrame(ptr,a,b)                               (ptr)->CreateFrame(a,b)
#define IDirect3DRM3_CreateMesh(ptr,a)                                  (ptr)->CreateMesh(a)
#define IDirect3DRM3_CreateMeshBuilder(ptr,a)                           (ptr)->CreateMeshBuilder(a)
#define IDirect3DRM3_CreateFace(ptr,a)                                  (ptr)->CreateFace(a)
#define IDirect3DRM3_CreateAnimation(ptr,a)                             (ptr)->CreateAnimation(a)
#define IDirect3DRM3_CreateAnimationSet(ptr,a)                          (ptr)->CreateAnimationSet(a)
#define IDirect3DRM3_CreateTexture(ptr,a,b)                             (ptr)->CreateTexture(a,b)
#define IDirect3DRM3_CreateLight(ptr,a,b,c)                             (ptr)->CreateLight(a,b,c)
#define IDirect3DRM3_CreateLightRGB(ptr,a,b,c,d,e)                      (ptr)->CreateLightRGB(a,b,c,d,e)
#define IDirect3DRM3_CreateMaterial(ptr,a,b)                            (ptr)->CreateMaterial(a,b)
#define IDirect3DRM3_CreateDevice(ptr,a,b,c)                            (ptr)->CreateDevice(a,b,c)
#define IDirect3DRM3_CreateDeviceFromSurface(ptr,a,b,c,d,e)             (ptr)->CreateDeviceFromSurface(a,b,c,d,e)
#define IDirect3DRM3_CreateDeviceFromD3D(ptr,a,b,c)                     (ptr)->CreateDeviceFromD3D(a,b,c)
#define IDirect3DRM3_CreateDeviceFromClipper(ptr,a,b,c,d,e)             (ptr)->CreateDeviceFromClipper(a,b,c,d,e)
#define IDirect3DRM3_CreateTextureFromSurface(ptr,a,b)                  (ptr)->CreateTextureFromSurface(a,b)
#define IDirect3DRM3_CreateShadow(ptr,a,b,c,d,e,f,g,h,i)                (ptr)->CreateShadow(a,b,c,d,e,f,g,h,i)
#define IDirect3DRM3_CreateViewport(ptr,a,b,c,d,e,f,g)                  (ptr)->CreateViewport(a,b,c,d,e,f,g)
#define IDirect3DRM3_CreateWrap(ptr,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)    (ptr)->CreateWrap(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)
#define IDirect3DRM3_CreateUserVisual(ptr,a,b,c)                        (ptr)->CreateUserVisual(a,b,c)
#define IDirect3DRM3_LoadTexture(ptr,a,b)                               (ptr)->LoadTexture(a,b)
#define IDirect3DRM3_LoadTextureFromResource(ptr,a,b,c,d)               (ptr)->LoadTextureFromResource(a,b,c,d)
#define IDirect3DRM3_SetSearchPath(ptr,a)                               (ptr)->SetSearchPath(a)
#define IDirect3DRM3_AddSearchPath(ptr,a)                               (ptr)->AddSearchPath(a)
#define IDirect3DRM3_GetSearchPath(ptr,a,b)                             (ptr)->GetSearchPath(a,b)
#define IDirect3DRM3_SetDefaultTextureColors(ptr,a)                     (ptr)->SetDefaultTextureColors(a)
#define IDirect3DRM3_SetDefaultTextureShades(ptr,a)                     (ptr)->SetDefaultTextureShades(a)
#define IDirect3DRM3_GetDevices(ptr,a)                                  (ptr)->GetDevices(a)
#define IDirect3DRM3_GetNamedObject(ptr,a,b)                            (ptr)->GetNamedObject(a,b)
#define IDirect3DRM3_EnumerateObjects(ptr,a,b)                          (ptr)->EnumerateObjects(a,b)
#define IDirect3DRM3_Load(ptr,a,b,c,d,e,f,g,h,i,j)                      (ptr)->Load(a,b,c,d,e,f,g,h,i,j)
#define IDirect3DRM3_Tick(ptr,a)                                        (ptr)->Tick(a)
#define IDirect3DRM3_CreateProgressiveMesh(ptr,a)                       (ptr)->CreateProgressiveMesh(a)
#define IDirect3DRM3_RegisterClient(ptr,a,b)                            (ptr)->RegisterClient(a,b)
#define IDirect3DRM3_UnregisterClient(ptr,a)                            (ptr)->UnregisterClient(a)
#define IDirect3DRM3_CreateClippedVisual(ptr,a,b)                       (ptr)->CreateClippedVisual(a,b)
#define IDirect3DRM3_SetOptions(ptr,a);                                 (ptr)->SetOptions(a);
#define IDirect3DRM3_GetOptions(ptr,a);                                 (ptr)->GetOptions(a);
#endif

SDL_STDAPI Direct3DRMCreate(LPDIRECT3DRM SDL_FAR *lplpDirect3DRM);

#endif // SDL_D3DRM_H
