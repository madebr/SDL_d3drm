#ifndef SDL_D3DRMOBJ_H
#define SDL_D3DRMOBJ_H

#include "SDL_winglue.h"
#include "SDL_d3drmdef.h"
#include "SDL_d3d.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef SDL_INTERFACE
#undef SDL_INTERFACE
#endif

/* Direct3DRM Object classes */

SDL_DEFINE_GUID(CLSID_CDirect3DRMDevice,                    0x4fa3568e, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMViewport,                  0x4fa3568f, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMFrame,                     0x4fa35690, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMMesh,                      0x4fa35691, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMMeshBuilder,               0x4fa35692, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMFace,                      0x4fa35693, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMLight,                     0x4fa35694, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMTexture,                   0x4fa35695, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMWrap,                      0x4fa35696, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMMaterial,                  0x4fa35697, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMAnimation,                 0x4fa35698, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMAnimationSet,              0x4fa35699, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMUserVisual,                0x4fa3569a, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMShadow,                    0x4fa3569b, 0x623f, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(CLSID_CDirect3DRMViewportInterpolator,      0xde9eaa1, 0x3b84, 0x11d0, 0x9b, 0x6d, 0x0, 0x0, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(CLSID_CDirect3DRMFrameInterpolator,         0xde9eaa2, 0x3b84, 0x11d0, 0x9b, 0x6d, 0x0, 0x0, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(CLSID_CDirect3DRMMeshInterpolator,          0xde9eaa3, 0x3b84, 0x11d0, 0x9b, 0x6d, 0x0, 0x0, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(CLSID_CDirect3DRMLightInterpolator,         0xde9eaa6, 0x3b84, 0x11d0, 0x9b, 0x6d, 0x0, 0x0, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(CLSID_CDirect3DRMMaterialInterpolator,      0xde9eaa7, 0x3b84, 0x11d0, 0x9b, 0x6d, 0x0, 0x0, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(CLSID_CDirect3DRMTextureInterpolator,       0xde9eaa8, 0x3b84, 0x11d0, 0x9b, 0x6d, 0x0, 0x0, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(CLSID_CDirect3DRMProgressiveMesh,           0x4516ec40, 0x8f20, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(CLSID_CDirect3DRMClippedVisual,             0x5434e72d, 0x6d66, 0x11d1, 0xbb, 0xb, 0x0, 0x0, 0xf8, 0x75, 0x86, 0x5a);

/* Direct3DRM Object interfaces */

SDL_DEFINE_GUID(IID_IDirect3DRMObject,          0xeb16cb00, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMObject2,         0x4516ec7c, 0x8f20, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(IID_IDirect3DRMDevice,          0xe9e19280, 0x6e05, 0x11cf, 0xac, 0x4a, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMDevice2,         0x4516ec78, 0x8f20, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(IID_IDirect3DRMDevice3,         0x549f498b, 0xbfeb, 0x11d1, 0x8e, 0xd8, 0x00, 0xa0, 0xc9, 0x67, 0xa4, 0x82);
SDL_DEFINE_GUID(IID_IDirect3DRMViewport,        0xeb16cb02, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMViewport2,       0x4a1b1be6, 0xbfed, 0x11d1, 0x8e, 0xd8, 0x00, 0xa0, 0xc9, 0x67, 0xa4, 0x82);
SDL_DEFINE_GUID(IID_IDirect3DRMFrame,           0xeb16cb03, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMFrame2,          0xc3dfbd60, 0x3988, 0x11d0, 0x9e, 0xc2, 0x00, 0x00, 0xc0, 0x29, 0x1a, 0xc3);
SDL_DEFINE_GUID(IID_IDirect3DRMFrame3,          0xff6b7f70, 0xa40e, 0x11d1, 0x91, 0xf9, 0x00, 0x00, 0xf8, 0x75, 0x8e, 0x66);
SDL_DEFINE_GUID(IID_IDirect3DRMVisual,          0xeb16cb04, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMMesh,            0xa3a80d01, 0x6e12, 0x11cf, 0xac, 0x4a, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMMeshBuilder,     0xa3a80d02, 0x6e12, 0x11cf, 0xac, 0x4a, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMMeshBuilder2,    0x4516ec77, 0x8f20, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(IID_IDirect3DRMMeshBuilder3,    0x4516ec82, 0x8f20, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(IID_IDirect3DRMFace,            0xeb16cb07, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMFace2,           0x4516ec81, 0x8f20, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(IID_IDirect3DRMLight,           0xeb16cb08, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMTexture,         0xeb16cb09, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMTexture2,        0x120f30c0, 0x1629, 0x11d0, 0x94, 0x1c, 0x00, 0x80, 0xc8, 0x0c, 0xfa, 0x7b);
SDL_DEFINE_GUID(IID_IDirect3DRMTexture3,        0xff6b7f73, 0xa40e, 0x11d1, 0x91, 0xf9, 0x00, 0x00, 0xf8, 0x75, 0x8e, 0x66);
SDL_DEFINE_GUID(IID_IDirect3DRMWrap,            0xeb16cb0a, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMMaterial,        0xeb16cb0b, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMMaterial2,       0xff6b7f75, 0xa40e, 0x11d1, 0x91, 0xf9, 0x00, 0x00, 0xf8, 0x75, 0x8e, 0x66);
SDL_DEFINE_GUID(IID_IDirect3DRMAnimation,       0xeb16cb0d, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMAnimation2,      0xff6b7f77, 0xa40e, 0x11d1, 0x91, 0xf9, 0x00, 0x00, 0xf8, 0x75, 0x8e, 0x66);
SDL_DEFINE_GUID(IID_IDirect3DRMAnimationSet,    0xeb16cb0e, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMAnimationSet2,   0xff6b7f79, 0xa40e, 0x11d1, 0x91, 0xf9, 0x00, 0x00, 0xf8, 0x75, 0x8e, 0x66);
SDL_DEFINE_GUID(IID_IDirect3DRMObjectArray,     0x242f6bc2, 0x3849, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(IID_IDirect3DRMDeviceArray,     0xeb16cb10, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMViewportArray,   0xeb16cb11, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMFrameArray,      0xeb16cb12, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMVisualArray,     0xeb16cb13, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMLightArray,      0xeb16cb14, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMPickedArray,     0xeb16cb16, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMFaceArray,       0xeb16cb17, 0xd271, 0x11ce, 0xac, 0x48, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMAnimationArray,  0xd5f1cae0, 0x4bd7, 0x11d1, 0xb9, 0x74, 0x00, 0x60, 0x08, 0x3e, 0x45, 0xf3);
SDL_DEFINE_GUID(IID_IDirect3DRMUserVisual,      0x59163de0, 0x6d43, 0x11cf, 0xac, 0x4a, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMShadow,          0xaf359780, 0x6ba3, 0x11cf, 0xac, 0x4a, 0x00, 0x00, 0xc0, 0x38, 0x25, 0xa1);
SDL_DEFINE_GUID(IID_IDirect3DRMShadow2,         0x86b44e25, 0x9c82, 0x11d1, 0xbb, 0x0b, 0x00, 0xa0, 0xc9, 0x81, 0xa0, 0xa6);
SDL_DEFINE_GUID(IID_IDirect3DRMInterpolator,    0x242f6bc1, 0x3849, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(IID_IDirect3DRMProgressiveMesh, 0x4516ec79, 0x8f20, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(IID_IDirect3DRMPicked2Array,    0x4516ec7b, 0x8f20, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);
SDL_DEFINE_GUID(IID_IDirect3DRMClippedVisual,   0x5434e733, 0x6d66, 0x11d1, 0xbb, 0x0b, 0x00, 0x00, 0xf8, 0x75, 0x86, 0x5a);

/*****************************************************************************
 * Predeclare the interfaces
 */

typedef struct IDirect3DRMObject          *LPDIRECT3DRMOBJECT, **LPLPDIRECT3DRMOBJECT;
typedef struct IDirect3DRMObject2         *LPDIRECT3DRMOBJECT2, **LPLPDIRECT3DRMOBJECT2;
typedef struct IDirect3DRMDevice          *LPDIRECT3DRMDEVICE, **LPLPDIRECT3DRMDEVICE;
typedef struct IDirect3DRMDevice2         *LPDIRECT3DRMDEVICE2, **LPLPDIRECT3DRMDEVICE2;
typedef struct IDirect3DRMDevice3         *LPDIRECT3DRMDEVICE3, **LPLPDIRECT3DRMDEVICE3;
typedef struct IDirect3DRMViewport        *LPDIRECT3DRMVIEWPORT, **LPLPDIRECT3DRMVIEWPORT;
typedef struct IDirect3DRMViewport2       *LPDIRECT3DRMVIEWPORT2, **LPLPDIRECT3DRMVIEWPORT2;
typedef struct IDirect3DRMFrame           *LPDIRECT3DRMFRAME, **LPLPDIRECT3DRMFRAME;
typedef struct IDirect3DRMFrame2          *LPDIRECT3DRMFRAME2, **LPLPDIRECT3DRMFRAME2;
typedef struct IDirect3DRMFrame3          *LPDIRECT3DRMFRAME3, **LPLPDIRECT3DRMFRAME3;
typedef struct IDirect3DRMVisual          *LPDIRECT3DRMVISUAL, **LPLPDIRECT3DRMVISUAL;
typedef struct IDirect3DRMMesh            *LPDIRECT3DRMMESH, **LPLPDIRECT3DRMMESH;
typedef struct IDirect3DRMMeshBuilder     *LPDIRECT3DRMMESHBUILDER, **LPLPDIRECT3DRMMESHBUILDER;
typedef struct IDirect3DRMMeshBuilder2    *LPDIRECT3DRMMESHBUILDER2, **LPLPDIRECT3DRMMESHBUILDER2;
typedef struct IDirect3DRMMeshBuilder3    *LPDIRECT3DRMMESHBUILDER3, **LPLPDIRECT3DRMMESHBUILDER3;
typedef struct IDirect3DRMFace            *LPDIRECT3DRMFACE, **LPLPDIRECT3DRMFACE;
typedef struct IDirect3DRMFace2           *LPDIRECT3DRMFACE2, **LPLPDIRECT3DRMFACE2;
typedef struct IDirect3DRMLight           *LPDIRECT3DRMLIGHT, **LPLPDIRECT3DRMLIGHT;
typedef struct IDirect3DRMTexture         *LPDIRECT3DRMTEXTURE, **LPLPDIRECT3DRMTEXTURE;
typedef struct IDirect3DRMTexture2        *LPDIRECT3DRMTEXTURE2, **LPLPDIRECT3DRMTEXTURE2;
typedef struct IDirect3DRMTexture3        *LPDIRECT3DRMTEXTURE3, **LPLPDIRECT3DRMTEXTURE3;
typedef struct IDirect3DRMWrap            *LPDIRECT3DRMWRAP, **LPLPDIRECT3DRMWRAP;
typedef struct IDirect3DRMMaterial        *LPDIRECT3DRMMATERIAL, **LPLPDIRECT3DRMMATERIAL;
typedef struct IDirect3DRMMaterial2       *LPDIRECT3DRMMATERIAL2, **LPLPDIRECT3DRMMATERIAL2;
typedef struct IDirect3DRMAnimation       *LPDIRECT3DRMANIMATION, **LPLPDIRECT3DRMANIMATION;
typedef struct IDirect3DRMAnimation2      *LPDIRECT3DRMANIMATION2, **LPLPDIRECT3DRMANIMATION2;
typedef struct IDirect3DRMAnimationSet    *LPDIRECT3DRMANIMATIONSET, **LPLPDIRECT3DRMANIMATIONSET;
typedef struct IDirect3DRMAnimationSet2   *LPDIRECT3DRMANIMATIONSET2, **LPLPDIRECT3DRMANIMATIONSET2;
typedef struct IDirect3DRMUserVisual      *LPDIRECT3DRMUSERVISUAL, **LPLPDIRECT3DRMUSERVISUAL;
typedef struct IDirect3DRMShadow          *LPDIRECT3DRMSHADOW, **LPLPDIRECT3DRMSHADOW;
typedef struct IDirect3DRMShadow2         *LPDIRECT3DRMSHADOW2, **LPLPDIRECT3DRMSHADOW2;
typedef struct IDirect3DRMArray           *LPDIRECT3DRMARRAY, **LPLPDIRECT3DRMARRAY;
typedef struct IDirect3DRMObjectArray     *LPDIRECT3DRMOBJECTARRAY, **LPLPDIRECT3DRMOBJECTARRAY;
typedef struct IDirect3DRMDeviceArray     *LPDIRECT3DRMDEVICEARRAY, **LPLPDIRECT3DRMDEVICEARRAY;
typedef struct IDirect3DRMFaceArray       *LPDIRECT3DRMFACEARRAY, **LPLPDIRECT3DRMFACEARRAY;
typedef struct IDirect3DRMViewportArray   *LPDIRECT3DRMVIEWPORTARRAY, **LPLPDIRECT3DRMVIEWPORTARRAY;
typedef struct IDirect3DRMFrameArray      *LPDIRECT3DRMFRAMEARRAY, **LPLPDIRECT3DRMFRAMEARRAY;
typedef struct IDirect3DRMAnimationArray  *LPDIRECT3DRMANIMATIONARRAY, **LPLPDIRECT3DRMANIMATIONARRAY;
typedef struct IDirect3DRMVisualArray     *LPDIRECT3DRMVISUALARRAY, **LPLPDIRECT3DRMVISUALARRAY;
typedef struct IDirect3DRMPickedArray     *LPDIRECT3DRMPICKEDARRAY, **LPLPDIRECT3DRMPICKEDARRAY;
typedef struct IDirect3DRMPicked2Array    *LPDIRECT3DRMPICKED2ARRAY, **LPLPDIRECT3DRMPICKED2ARRAY;
typedef struct IDirect3DRMLightArray      *LPDIRECT3DRMLIGHTARRAY, **LPLPDIRECT3DRMLIGHTARRAY;
typedef struct IDirect3DRMProgressiveMesh *LPDIRECT3DRMPROGRESSIVEMESH, **LPLPDIRECT3DRMPROGRESSIVEMESH;
typedef struct IDirect3DRMClippedVisual   *LPDIRECT3DRMCLIPPEDVISUAL, **LPLPDIRECT3DRMCLIPPEDVISUAL;

/* ********************************************************************
   Types and structures
   ******************************************************************** */

typedef void (SDL_CDECL *D3DRMOBJECTCALLBACK)(struct IDirect3DRMObject *obj, void *arg);
typedef void (SDL_CDECL *D3DRMFRAMEMOVECALLBACK)(struct IDirect3DRMFrame *frame, void *ctx, D3DVALUE delta);
typedef void (SDL_CDECL *D3DRMFRAME3MOVECALLBACK)(struct IDirect3DRMFrame3 *frame, void *ctx, D3DVALUE delta);
typedef void (SDL_CDECL *D3DRMUPDATECALLBACK)(struct IDirect3DRMDevice *device, void *ctx, int count, D3DRECT *rects);
typedef void (SDL_CDECL *D3DRMDEVICE3UPDATECALLBACK)(struct IDirect3DRMDevice3 *device, void *ctx,
        int count, D3DRECT *rects);
typedef int (SDL_CDECL *D3DRMUSERVISUALCALLBACK)(struct IDirect3DRMUserVisual *visual, void *ctx,
        D3DRMUSERVISUALREASON reason, struct IDirect3DRMDevice *device, struct IDirect3DRMViewport *viewport);
typedef SDL_HRESULT (SDL_CDECL *D3DRMLOADTEXTURECALLBACK)(char *tex_name, void *arg, struct IDirect3DRMTexture **texture);
typedef SDL_HRESULT (SDL_CDECL *D3DRMLOADTEXTURE3CALLBACK)(char *tex_name, void *arg, struct IDirect3DRMTexture3 **texture);
typedef void (SDL_CDECL *D3DRMLOADCALLBACK)(struct IDirect3DRMObject *object, SDL_REFIID objectguid, void *arg);
typedef SDL_HRESULT (SDL_CDECL *D3DRMDOWNSAMPLECALLBACK)(struct IDirect3DRMTexture3 *texture, void *ctx,
        IDirectDrawSurface *src_surface, IDirectDrawSurface *dst_surface);
typedef SDL_HRESULT (SDL_CDECL *D3DRMVALIDATIONCALLBACK)(struct IDirect3DRMTexture3 *texture, void *ctx,
        SDL_DWORD flags, SDL_DWORD rect_count, RECT *rects);

typedef struct _D3DRMPICKDESC
{
    SDL_ULONG     ulFaceIdx;
    SDL_LONG      lGroupIdx;
    D3DVECTOR vPosition;
} D3DRMPICKDESC, *LPD3DRMPICKDESC;

typedef struct _D3DRMPICKDESC2
{
    SDL_ULONG     ulFaceIdx;
    SDL_LONG      lGroupIdx;
    D3DVECTOR vPosition;
    D3DVALUE  tu;
    D3DVALUE  tv;
    D3DVECTOR dvNormal;
    D3DCOLOR  dcColor;
} D3DRMPICKDESC2, *LPD3DRMPICKDESC2;

/*****************************************************************************
 * IDirect3DRMObject interface
 */
#ifdef WINE_NO_UNICODE_MACROS
#undef GetClassName
#endif
#define SDL_INTERFACE IDirect3DRMObject
SDL_DECLARE_INTERFACE_(IDirect3DRMObject,IUnknown)
{
    /*** IUnknown methods ***/
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMObject_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMObject_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirect3DRMObject_Release(p)                   (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMObject_Clone(p,a,b,c)               (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMObject_AddDestroyCallback(p,a,b)    (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMObject_DeleteDestroyCallback(p,a,b) (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMObject_SetAppData(p,a)              (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMObject_GetAppData(p)                (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMObject_SetName(p,a)                 (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMObject_GetName(p,a,b)               (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMObject_GetClassName(p,a,b)          (p)->lpVtbl->GetClassName(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMObject_QueryInterface(p,a,b)        (p)->QueryInterface(a,b)
#define IDirect3DRMObject_AddRef(p)                    (p)->AddRef()
#define IDirect3DRMObject_Release(p)                   (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMObject_Clone(p,a,b,c)               (p)->Clone(a,b,c)
#define IDirect3DRMObject_AddDestroyCallback(p,a,b)    (p)->AddDestroyCallback(a,b)
#define IDirect3DRMObject_DeleteDestroyCallback(p,a,b) (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMObject_SetAppData(p,a)              (p)->SetAppData(a)
#define IDirect3DRMObject_GetAppData(p)                (p)->GetAppData()
#define IDirect3DRMObject_SetName(p,a)                 (p)->SetName(a)
#define IDirect3DRMObject_GetName(p,a,b)               (p)->GetName(a,b)
#define IDirect3DRMObject_GetClassName(p,a,b)          (p)->GetClassName(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMObject2 interface
 */
#ifdef WINE_NO_UNICODE_MACROS
#undef GetClassName
#endif
#define SDL_INTERFACE IDirect3DRMObject2
SDL_DECLARE_INTERFACE_(IDirect3DRMObject2,IUnknown)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject2 methods ***/
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(GetClientData)(SDL_THIS_ SDL_DWORD id, void **data) SDL_PURE;
    SDL_STDMETHOD(GetDirect3DRM)(SDL_THIS_ struct IDirect3DRM **d3drm) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(SetClientData)(SDL_THIS_ SDL_DWORD id, void *data, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetAge)(SDL_THIS_ SDL_DWORD flags, SDL_DWORD *age) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMObject2_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMObject2_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirect3DRMObject2_Release(p)                   (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject2 methods ***/
#define IDirect3DRMObject2_AddDestroyCallback(p,a,b)    (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMObject2_Clone(p,a,b,c)               (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMObject2_DeleteDestroyCallback(p,a,b) (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMObject2_GetClientData(p,a,b)         (p)->lpVtbl->SetClientData(p,a,b)
#define IDirect3DRMObject2_GetDirect3DRM(p,a)           (p)->lpVtbl->GetDirect3DRM(p,a)
#define IDirect3DRMObject2_GetName(p,a,b)               (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMObject2_SetClientData(p,a,b,c)       (p)->lpVtbl->SetClientData(p,a,b,c)
#define IDirect3DRMObject2_SetName(p,a)                 (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMObject2_GetAge(p,a,b)                (p)->lpVtbl->GetAge(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMObject2_QueryInterface(p,a,b)        (p)->QueryInterface(a,b)
#define IDirect3DRMObject2_AddRef(p)                    (p)->AddRef()
#define IDirect3DRMObject2_Release(p)                   (p)->Release()
/*** IDirect3DRMObject2 methods ***/
#define IDirect3DRMObject2_AddDestroyCallback(p,a,b)    (p)->AddDestroyCallback(a,b)
#define IDirect3DRMObject2_Clone(p,a,b,c)               (p)->Clone(a,b,c)
#define IDirect3DRMObject2_DeleteDestroyCallback(p,a,b) (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMObject2_GetClientData(p,a,b)         (p)->SetClientData(a,b)
#define IDirect3DRMObject2_GetDirect3DRM(p,a)           (p)->GetDirect3DRM(a)
#define IDirect3DRMObject2_GetName(p,a,b)               (p)->GetName(a,b)
#define IDirect3DRMObject2_SetClientData(p,a,b,c)       (p)->SetClientData(a,b,c)
#define IDirect3DRMObject2_SetName(p,a)                 (p)->SetName(a)
#define IDirect3DRMObject2_GetAge(p,a,b)                (p)->GetAge(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMVisual interface
 */
#define SDL_INTERFACE IDirect3DRMVisual
SDL_DECLARE_INTERFACE_(IDirect3DRMVisual,IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMVisual_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMVisual_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirect3DRMVisual_Release(p)                   (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMVisual_Clone(p,a,b,c)               (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMVisual_AddDestroyCallback(p,a,b)    (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMVisual_DeleteDestroyCallback(p,a,b) (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMVisual_SetAppData(p,a)              (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMVisual_GetAppData(p)                (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMVisual_SetName(p,a)                 (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMVisual_GetName(p,a,b)               (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMVisual_GetClassName(p,a,b)          (p)->lpVtbl->GetClassName(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMVisual_QueryInterface(p,a,b)        (p)->QueryInterface(a,b)
#define IDirect3DRMVisual_AddRef(p)                    (p)->AddRef()
#define IDirect3DRMVisual_Release(p)                   (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMVisual_Clone(p,a,b,c)               (p)->Clone(a,b,c)
#define IDirect3DRMVisual_AddDestroyCallback(p,a,b)    (p)->AddDestroyCallback(a,b)
#define IDirect3DRMVisual_DeleteDestroyCallback(p,a,b) (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMVisual_SetAppData(p,a)              (p)->SetAppData(a)
#define IDirect3DRMVisual_GetAppData(p)                (p)->GetAppData()
#define IDirect3DRMVisual_SetName(p,a)                 (p)->SetName(a)
#define IDirect3DRMVisual_GetName(p,a,b)               (p)->GetName(a,b)
#define IDirect3DRMVisual_GetClassName(p,a,b)          (p)->GetClassName(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMDevice interface
 */
#ifdef WINE_NO_UNICODE_MACROS
#undef GetClassName
#endif
#define SDL_INTERFACE IDirect3DRMDevice
SDL_DECLARE_INTERFACE_(IDirect3DRMDevice,IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMDevice methods ***/
    SDL_STDMETHOD(Init)(SDL_THIS_ SDL_ULONG width, SDL_ULONG height) SDL_PURE;
    SDL_STDMETHOD(InitFromD3D)(SDL_THIS_ IDirect3D *d3d, IDirect3DDevice *d3d_device) SDL_PURE;
    SDL_STDMETHOD(InitFromClipper)(SDL_THIS_ IDirectDrawClipper *clipper, SDL_GUID *guid, int width, int height) SDL_PURE;
    SDL_STDMETHOD(Update)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(AddUpdateCallback)(SDL_THIS_ D3DRMUPDATECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteUpdateCallback)(SDL_THIS_ D3DRMUPDATECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetBufferCount)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetBufferCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetDither)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetShades)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetQuality)(SDL_THIS_ D3DRMRENDERQUALITY) SDL_PURE;
    SDL_STDMETHOD(SetTextureQuality)(SDL_THIS_ D3DRMTEXTUREQUALITY) SDL_PURE;
    SDL_STDMETHOD(GetViewports)(SDL_THIS_ struct IDirect3DRMViewportArray **array) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetDither)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetShades)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetHeight)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetWidth)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetTrianglesDrawn)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetWireframeOptions)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMRENDERQUALITY, GetQuality)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLORMODEL, GetColorModel)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMTEXTUREQUALITY, GetTextureQuality)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetDirect3DDevice)(SDL_THIS_ IDirect3DDevice **d3d_device) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMDevice_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMDevice_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirect3DRMDevice_Release(p)                   (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMDevice_Clone(p,a,b,c)               (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMDevice_AddDestroyCallback(p,a,b)    (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMDevice_DeleteDestroyCallback(p,a,b) (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMDevice_SetAppData(p,a)              (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMDevice_GetAppData(p)                (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMDevice_SetName(p,a)                 (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMDevice_GetName(p,a,b)               (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMDevice_GetClassName(p,a,b)          (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMDevice methods ***/
#define IDirect3DRMDevice_Init(p,a,b)                  (p)->lpVtbl->Init(p,a,b)
#define IDirect3DRMDevice_InitFromD3D(p,a,b)           (p)->lpVtbl->InitFromD3D(p,a,b)
#define IDirect3DRMDevice_InitFromClipper(p,a,b,c,d)   (p)->lpVtbl->InitFromClipper(p,a,b,c,d)
#define IDirect3DRMDevice_Update(p)                    (p)->lpVtbl->Update(p)
#define IDirect3DRMDevice_AddUpdateCallback(p,a,b)     (p)->lpVtbl->AddUpdateCallback(p,a,b)
#define IDirect3DRMDevice_DeleteUpdateCallback(p,a,b)  (p)->lpVtbl->DeleteUpdateCallback(p,a,b)
#define IDirect3DRMDevice_SetBufferCount(p,a)          (p)->lpVtbl->SetBufferCount(p,a)
#define IDirect3DRMDevice_GetBufferCount(p)            (p)->lpVtbl->GetBufferCount(p)
#define IDirect3DRMDevice_SetDither(p,a)               (p)->lpVtbl->SetDither(p,a)
#define IDirect3DRMDevice_SetShades(p,a)               (p)->lpVtbl->SetShades(p,a)
#define IDirect3DRMDevice_SetQuality(p,a)              (p)->lpVtbl->SetQuality(p,a)
#define IDirect3DRMDevice_SetTextureQuality(p,a)       (p)->lpVtbl->SetTextureQuality(p,a)
#define IDirect3DRMDevice_GetViewports(p,a)            (p)->lpVtbl->GetViewports(p,a)
#define IDirect3DRMDevice_GetDither(p)                 (p)->lpVtbl->GetDither(p)
#define IDirect3DRMDevice_GetShades(p)                 (p)->lpVtbl->GetShades(p)
#define IDirect3DRMDevice_GetHeight(p)                 (p)->lpVtbl->GetHeight(p)
#define IDirect3DRMDevice_GetWidth(p)                  (p)->lpVtbl->GetWidth(p)
#define IDirect3DRMDevice_GetTrianglesDrawn(p)         (p)->lpVtbl->GetTrianglesDrawn(p)
#define IDirect3DRMDevice_GetWireframeOptions(p)       (p)->lpVtbl->GetWireframeOptions(p)
#define IDirect3DRMDevice_GetQuality(p)                (p)->lpVtbl->GetQuality(p)
#define IDirect3DRMDevice_GetColorModel(p)             (p)->lpVtbl->GetColorModel(p)
#define IDirect3DRMDevice_GetTextureQuality(p)         (p)->lpVtbl->GetTextureQuality(p)
#define IDirect3DRMDevice_GetDirect3DDevice(p,a)       (p)->lpVtbl->GetDirect3DDevice(p,a)
#else
/*** IUnknown methods ***/
#define IDirect3DRMDevice_QueryInterface(p,a,b)        (p)->QueryInterface(a,b)
#define IDirect3DRMDevice_AddRef(p)                    (p)->AddRef()
#define IDirect3DRMDevice_Release(p)                   (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMDevice_Clone(p,a,b,c)               (p)->Clone(a,b,c)
#define IDirect3DRMDevice_AddDestroyCallback(p,a,b)    (p)->AddDestroyCallback(a,b)
#define IDirect3DRMDevice_DeleteDestroyCallback(p,a,b) (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMDevice_SetAppData(p,a)              (p)->SetAppData(a)
#define IDirect3DRMDevice_GetAppData(p)                (p)->GetAppData()
#define IDirect3DRMDevice_SetName(p,a)                 (p)->SetName(a)
#define IDirect3DRMDevice_GetName(p,a,b)               (p)->GetName(a,b)
#define IDirect3DRMDevice_GetClassName(p,a,b)          (p)->GetClassName(a,b)
/*** IDirect3DRMDevice methods ***/
#define IDirect3DRMDevice_Init(p,a,b)                  (p)->Init(a,b)
#define IDirect3DRMDevice_InitFromD3D(p,a,b)           (p)->InitFromD3D(a,b)
#define IDirect3DRMDevice_InitFromClipper(p,a,b,c,d)   (p)->InitFromClipper(a,b,c,d)
#define IDirect3DRMDevice_Update(p)                    (p)->Update()
#define IDirect3DRMDevice_AddUpdateCallback(p,a,b)     (p)->AddUpdateCallback(a,b)
#define IDirect3DRMDevice_DeleteUpdateCallback(p,a,b)  (p)->DeleteUpdateCallback(a,b)
#define IDirect3DRMDevice_SetBufferCount(p,a)          (p)->SetBufferCount(a)
#define IDirect3DRMDevice_GetBufferCount(p)            (p)->GetBufferCount()
#define IDirect3DRMDevice_SetDither(p,a)               (p)->SetDither(a)
#define IDirect3DRMDevice_SetShades(p,a)               (p)->SetShades(a)
#define IDirect3DRMDevice_SetQuality(p,a)              (p)->SetQuality(a)
#define IDirect3DRMDevice_SetTextureQuality(p,a)       (p)->SetTextureQuality(a)
#define IDirect3DRMDevice_GetViewports(p,a)            (p)->GetViewports(a)
#define IDirect3DRMDevice_GetDither(p)                 (p)->GetDither()
#define IDirect3DRMDevice_GetShades(p)                 (p)->GetShades()
#define IDirect3DRMDevice_GetHeight(p)                 (p)->GetHeight()
#define IDirect3DRMDevice_GetWidth(p)                  (p)->GetWidth()
#define IDirect3DRMDevice_GetTrianglesDrawn(p)         (p)->GetTrianglesDrawn()
#define IDirect3DRMDevice_GetWireframeOptions(p)       (p)->GetWireframeOptions()
#define IDirect3DRMDevice_GetQuality(p)                (p)->GetQuality()
#define IDirect3DRMDevice_GetColorModel(p)             (p)->GetColorModel()
#define IDirect3DRMDevice_GetTextureQuality(p)         (p)->GetTextureQuality()
#define IDirect3DRMDevice_GetDirect3DDevice(p,a)       (p)->GetDirect3DDevice(a)
#endif

/*****************************************************************************
 * IDirect3DRMDevice2 interface
 */
#ifdef WINE_NO_UNICODE_MACROS
#undef GetClassName
#endif
#define SDL_INTERFACE IDirect3DRMDevice2
SDL_DECLARE_INTERFACE_(IDirect3DRMDevice2,IDirect3DRMDevice)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMDevice methods ***/
    SDL_STDMETHOD(Init)(SDL_THIS_ SDL_ULONG width, SDL_ULONG height) SDL_PURE;
    SDL_STDMETHOD(InitFromD3D)(SDL_THIS_ IDirect3D *d3d, IDirect3DDevice *d3d_device) SDL_PURE;
    SDL_STDMETHOD(InitFromClipper)(SDL_THIS_ IDirectDrawClipper *clipper, SDL_GUID *guid, int width, int height) SDL_PURE;
    SDL_STDMETHOD(Update)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(AddUpdateCallback)(SDL_THIS_ D3DRMUPDATECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteUpdateCallback)(SDL_THIS_ D3DRMUPDATECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetBufferCount)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetBufferCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetDither)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetShades)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetQuality)(SDL_THIS_ D3DRMRENDERQUALITY) SDL_PURE;
    SDL_STDMETHOD(SetTextureQuality)(SDL_THIS_ D3DRMTEXTUREQUALITY) SDL_PURE;
    SDL_STDMETHOD(GetViewports)(SDL_THIS_ struct IDirect3DRMViewportArray **array) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetDither)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetShades)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetHeight)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetWidth)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetTrianglesDrawn)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetWireframeOptions)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMRENDERQUALITY, GetQuality)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLORMODEL, GetColorModel)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMTEXTUREQUALITY, GetTextureQuality)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetDirect3DDevice)(SDL_THIS_ IDirect3DDevice **d3d_device) SDL_PURE;
    /*** IDirect3DRMDevice2 methods ***/
    SDL_STDMETHOD(InitFromD3D2)(SDL_THIS_ IDirect3D2 *d3d, IDirect3DDevice2 *device) SDL_PURE;
    SDL_STDMETHOD(InitFromSurface)(SDL_THIS_ SDL_GUID *guid, IDirectDraw *ddraw, IDirectDrawSurface *surface) SDL_PURE;
    SDL_STDMETHOD(SetRenderMode)(SDL_THIS_ SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetRenderMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetDirect3DDevice2)(SDL_THIS_ IDirect3DDevice2 **device) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMDevice2_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMDevice2_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirect3DRMDevice2_Release(p)                   (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMDevice2_Clone(p,a,b,c)               (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMDevice2_AddDestroyCallback(p,a,b)    (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMDevice2_DeleteDestroyCallback(p,a,b) (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMDevice2_SetAppData(p,a)              (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMDevice2_GetAppData(p)                (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMDevice2_SetName(p,a)                 (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMDevice2_GetName(p,a,b)               (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMDevice2_GetClassName(p,a,b)          (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMDevice methods ***/
#define IDirect3DRMDevice2_Init(p,a,b)                  (p)->lpVtbl->Init(p,a,b)
#define IDirect3DRMDevice2_InitFromD3D(p,a,b)           (p)->lpVtbl->InitFromD3D(p,a,b)
#define IDirect3DRMDevice2_InitFromClipper(p,a,b,c,d)   (p)->lpVtbl->InitFromClipper(p,a,b,c,d)
#define IDirect3DRMDevice2_Update(p)                    (p)->lpVtbl->Update(p)
#define IDirect3DRMDevice2_AddUpdateCallback(p,a,b)     (p)->lpVtbl->AddUpdateCallback(p,a,b)
#define IDirect3DRMDevice2_DeleteUpdateCallback(p,a,b)  (p)->lpVtbl->DeleteUpdateCallback(p,a,b)
#define IDirect3DRMDevice2_SetBufferCount(p,a)          (p)->lpVtbl->SetBufferCount(p,a)
#define IDirect3DRMDevice2_GetBufferCount(p)            (p)->lpVtbl->GetBufferCount(p)
#define IDirect3DRMDevice2_SetDither(p,a)               (p)->lpVtbl->SetDither(p,a)
#define IDirect3DRMDevice2_SetShades(p,a)               (p)->lpVtbl->SetShades(p,a)
#define IDirect3DRMDevice2_SetQuality(p,a)              (p)->lpVtbl->SetQuality(p,a)
#define IDirect3DRMDevice2_SetTextureQuality(p,a)       (p)->lpVtbl->SetTextureQuality(p,a)
#define IDirect3DRMDevice2_GetViewports(p,a)            (p)->lpVtbl->GetViewports(p,a)
#define IDirect3DRMDevice2_GetDither(p)                 (p)->lpVtbl->GetDither(p)
#define IDirect3DRMDevice2_GetShades(p)                 (p)->lpVtbl->GetShades(p)
#define IDirect3DRMDevice2_GetHeight(p)                 (p)->lpVtbl->GetHeight(p)
#define IDirect3DRMDevice2_GetWidth(p)                  (p)->lpVtbl->GetWidth(p)
#define IDirect3DRMDevice2_GetTrianglesDrawn(p)         (p)->lpVtbl->GetTrianglesDrawn(p)
#define IDirect3DRMDevice2_GetWireframeOptions(p)       (p)->lpVtbl->GetWireframeOptions(p)
#define IDirect3DRMDevice2_GetQuality(p)                (p)->lpVtbl->GetQuality(p)
#define IDirect3DRMDevice2_GetColorModel(p)             (p)->lpVtbl->GetColorModel(p)
#define IDirect3DRMDevice2_GetTextureQuality(p)         (p)->lpVtbl->GetTextureQuality(p)
#define IDirect3DRMDevice2_GetDirect3DDevice(p,a)       (p)->lpVtbl->GetDirect3DDevice(p,a)
/*** IDirect3DRMDevice2 methods ***/
#define IDirect3DRMDevice2_InitFromD3D2(p,a,b)          (p)->lpVtbl->InitFromD3D2(p,a,b)
#define IDirect3DRMDevice2_InitFromSurface(p,a,b,c)     (p)->lpVtbl->InitFromSurface(p,a,b,c)
#define IDirect3DRMDevice2_SetRenderMode(p,a)           (p)->lpVtbl->SetRenderMode(p,a)
#define IDirect3DRMDevice2_GetRenderMode(p)             (p)->lpVtbl->GetRenderMode(p)
#define IDirect3DRMDevice2_GetDirect3DDevice2(p,a)      (p)->lpVtbl->GetDirect3DDevice2(p,a)
#else
/*** IUnknown methods ***/
#define IDirect3DRMDevice2_QueryInterface(p,a,b)        (p)->QueryInterface(a,b)
#define IDirect3DRMDevice2_AddRef(p)                    (p)->AddRef()
#define IDirect3DRMDevice2_Release(p)                   (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMDevice2_Clone(p,a,b,c)               (p)->Clone(a,b,c)
#define IDirect3DRMDevice2_AddDestroyCallback(p,a,b)    (p)->AddDestroyCallback(a,b)
#define IDirect3DRMDevice2_DeleteDestroyCallback(p,a,b) (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMDevice2_SetAppData(p,a)              (p)->SetAppData(a)
#define IDirect3DRMDevice2_GetAppData(p)                (p)->GetAppData()
#define IDirect3DRMDevice2_SetName(p,a)                 (p)->SetName(a)
#define IDirect3DRMDevice2_GetName(p,a,b)               (p)->GetName(a,b)
#define IDirect3DRMDevice2_GetClassName(p,a,b)          (p)->GetClassName(a,b)
/*** IDirect3DRMDevice methods ***/
#define IDirect3DRMDevice2_Init(p,a,b)                  (p)->Init(a,b)
#define IDirect3DRMDevice2_InitFromD3D(p,a,b)           (p)->InitFromD3D(a,b)
#define IDirect3DRMDevice2_InitFromClipper(p,a,b,c,d)   (p)->InitFromClipper(a,b,c,d)
#define IDirect3DRMDevice2_Update(p)                    (p)->Update()
#define IDirect3DRMDevice2_AddUpdateCallback(p,a,b)     (p)->AddUpdateCallback(a,b)
#define IDirect3DRMDevice2_DeleteUpdateCallback(p,a,b)  (p)->DeleteUpdateCallback(a,b)
#define IDirect3DRMDevice2_SetBufferCount(p,a)          (p)->SetBufferCount(a)
#define IDirect3DRMDevice2_GetBufferCount(p)            (p)->GetBufferCount()
#define IDirect3DRMDevice2_SetDither(p,a)               (p)->SetDither(a)
#define IDirect3DRMDevice2_SetShades(p,a)               (p)->SetShades(a)
#define IDirect3DRMDevice2_SetQuality(p,a)              (p)->SetQuality(a)
#define IDirect3DRMDevice2_SetTextureQuality(p,a)       (p)->SetTextureQuality(a)
#define IDirect3DRMDevice2_GetViewports(p,a)            (p)->GetViewports(a)
#define IDirect3DRMDevice2_GetDither(p)                 (p)->GetDither()
#define IDirect3DRMDevice2_GetShades(p)                 (p)->GetShades()
#define IDirect3DRMDevice2_GetHeight(p)                 (p)->GetHeight()
#define IDirect3DRMDevice2_GetWidth(p)                  (p)->GetWidth()
#define IDirect3DRMDevice2_GetTrianglesDrawn(p)         (p)->GetTrianglesDrawn()
#define IDirect3DRMDevice2_GetWireframeOptions(p)       (p)->GetWireframeOptions()
#define IDirect3DRMDevice2_GetQuality(p)                (p)->GetQuality()
#define IDirect3DRMDevice2_GetColorModel(p)             (p)->GetColorModel()
#define IDirect3DRMDevice2_GetTextureQuality(p)         (p)->GetTextureQuality()
#define IDirect3DRMDevice2_GetDirect3DDevice(p,a)       (p)->GetDirect3DDevice(a)
/*** IDirect3DRMDevice2 methods ***/
#define IDirect3DRMDevice2_InitFromD3D2(p,a,b)          (p)->InitFromD3D2(a,b)
#define IDirect3DRMDevice2_InitFromSurface(p,a,b,c)     (p)->InitFromSurface(a,b,c)
#define IDirect3DRMDevice2_SetRenderMode(p,a)           (p)->SetRenderMode(a)
#define IDirect3DRMDevice2_GetRenderMode(p)             (p)->GetRenderMode()
#define IDirect3DRMDevice2_GetDirect3DDevice2(p,a)      (p)->GetDirect3DDevice2(a)
#endif

/*****************************************************************************
 * IDirect3DRMDevice3 interface
 */
#ifdef WINE_NO_UNICODE_MACROS
#undef GetClassName
#endif
#define SDL_INTERFACE IDirect3DRMDevice3
SDL_DECLARE_INTERFACE_(IDirect3DRMDevice3,IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMDevice methods ***/
    SDL_STDMETHOD(Init)(SDL_THIS_ SDL_ULONG width, SDL_ULONG height) SDL_PURE;
    SDL_STDMETHOD(InitFromD3D)(SDL_THIS_ IDirect3D *d3d, IDirect3DDevice *d3d_device) SDL_PURE;
    SDL_STDMETHOD(InitFromClipper)(SDL_THIS_ IDirectDrawClipper *clipper, SDL_GUID *guid, int width, int height) SDL_PURE;
    SDL_STDMETHOD(Update)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(AddUpdateCallback)(SDL_THIS_ D3DRMUPDATECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteUpdateCallback)(SDL_THIS_ D3DRMUPDATECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetBufferCount)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetBufferCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetDither)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetShades)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetQuality)(SDL_THIS_ D3DRMRENDERQUALITY) SDL_PURE;
    SDL_STDMETHOD(SetTextureQuality)(SDL_THIS_ D3DRMTEXTUREQUALITY) SDL_PURE;
    SDL_STDMETHOD(GetViewports)(SDL_THIS_ struct IDirect3DRMViewportArray **array) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetDither)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetShades)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetHeight)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetWidth)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetTrianglesDrawn)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetWireframeOptions)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMRENDERQUALITY, GetQuality)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLORMODEL, GetColorModel)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMTEXTUREQUALITY, GetTextureQuality)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetDirect3DDevice)(SDL_THIS_ IDirect3DDevice **d3d_device) SDL_PURE;
    /*** IDirect3DRMDevice2 methods ***/
    SDL_STDMETHOD(InitFromD3D2)(SDL_THIS_ IDirect3D2 *d3d, IDirect3DDevice2 *device) SDL_PURE;
    SDL_STDMETHOD(InitFromSurface)(SDL_THIS_ SDL_GUID *guid, IDirectDraw *ddraw, IDirectDrawSurface *surface) SDL_PURE;
    SDL_STDMETHOD(SetRenderMode)(SDL_THIS_ SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetRenderMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetDirect3DDevice2)(SDL_THIS_ IDirect3DDevice2 **device) SDL_PURE;
    /*** IDirect3DRMDevice3 methods ***/
    SDL_STDMETHOD(FindPreferredTextureFormat)(SDL_THIS_ SDL_DWORD BitDepths, SDL_DWORD flags, DDPIXELFORMAT *format) SDL_PURE;
    SDL_STDMETHOD(RenderStateChange)(SDL_THIS_ D3DRENDERSTATETYPE drsType, SDL_DWORD val, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(LightStateChange)(SDL_THIS_ D3DLIGHTSTATETYPE drsType, SDL_DWORD val, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(GetStateChangeOptions)(SDL_THIS_ SDL_DWORD state_class, SDL_DWORD state_idx, SDL_DWORD *flags) SDL_PURE;
    SDL_STDMETHOD(SetStateChangeOptions)(SDL_THIS_ SDL_DWORD StateClass, SDL_DWORD StateNum, SDL_DWORD flags) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMDevice3_QueryInterface(p,a,b)               (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMDevice3_AddRef(p)                           (p)->lpVtbl->AddRef(p)
#define IDirect3DRMDevice3_Release(p)                          (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMDevice3_Clone(p,a,b,c)                      (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMDevice3_AddDestroyCallback(p,a,b)           (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMDevice3_DeleteDestroyCallback(p,a,b)        (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMDevice3_SetAppData(p,a)                     (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMDevice3_GetAppData(p)                       (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMDevice3_SetName(p,a)                        (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMDevice3_GetName(p,a,b)                      (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMDevice3_GetClassName(p,a,b)                 (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMDevice methods ***/
#define IDirect3DRMDevice3_Init(p,a,b)                         (p)->lpVtbl->Init(p,a,b)
#define IDirect3DRMDevice3_InitFromD3D(p,a,b)                  (p)->lpVtbl->InitFromD3D(p,a,b)
#define IDirect3DRMDevice3_InitFromClipper(p,a,b,c,d)          (p)->lpVtbl->InitFromClipper(p,a,b,c,d)
#define IDirect3DRMDevice3_Update(p)                           (p)->lpVtbl->Update(p)
#define IDirect3DRMDevice3_AddUpdateCallback(p,a,b)            (p)->lpVtbl->AddUpdateCallback(p,a,b)
#define IDirect3DRMDevice3_DeleteUpdateCallback(p,a,b)         (p)->lpVtbl->DeleteUpdateCallback(p,a,b)
#define IDirect3DRMDevice3_SetBufferCount(p,a)                 (p)->lpVtbl->SetBufferCount(p,a)
#define IDirect3DRMDevice3_GetBufferCount(p)                   (p)->lpVtbl->GetBufferCount(p)
#define IDirect3DRMDevice3_SetDither(p,a)                      (p)->lpVtbl->SetDither(p,a)
#define IDirect3DRMDevice3_SetShades(p,a)                      (p)->lpVtbl->SetShades(p,a)
#define IDirect3DRMDevice3_SetQuality(p,a)                     (p)->lpVtbl->SetQuality(p,a)
#define IDirect3DRMDevice3_SetTextureQuality(p,a)              (p)->lpVtbl->SetTextureQuality(p,a)
#define IDirect3DRMDevice3_GetViewports(p,a)                   (p)->lpVtbl->GetViewports(p,a)
#define IDirect3DRMDevice3_GetDither(p)                        (p)->lpVtbl->GetDither(p)
#define IDirect3DRMDevice3_GetShades(p)                        (p)->lpVtbl->GetShades(p)
#define IDirect3DRMDevice3_GetHeight(p)                        (p)->lpVtbl->GetHeight(p)
#define IDirect3DRMDevice3_GetWidth(p)                         (p)->lpVtbl->GetWidth(p)
#define IDirect3DRMDevice3_GetTrianglesDrawn(p)                (p)->lpVtbl->GetTrianglesDrawn(p)
#define IDirect3DRMDevice3_GetWireframeOptions(p)              (p)->lpVtbl->GetWireframeOptions(p)
#define IDirect3DRMDevice3_GetQuality(p)                       (p)->lpVtbl->GetQuality(p)
#define IDirect3DRMDevice3_GetColorModel(p)                    (p)->lpVtbl->GetColorModel(p)
#define IDirect3DRMDevice3_GetTextureQuality(p)                (p)->lpVtbl->GetTextureQuality(p)
#define IDirect3DRMDevice3_GetDirect3DDevice(p,a)              (p)->lpVtbl->GetDirect3DDevice(p,a)
/*** IDirect3DRMDevice2 methods ***/
#define IDirect3DRMDevice3_InitFromD3D2(p,a,b)                 (p)->lpVtbl->InitFromD3D2(p,a,b)
#define IDirect3DRMDevice3_InitFromSurface(p,a,b,c)            (p)->lpVtbl->InitFromSurface(p,a,b,c)
#define IDirect3DRMDevice3_SetRenderMode(p,a)                  (p)->lpVtbl->SetRenderMode(p,a)
#define IDirect3DRMDevice3_GetRenderMode(p)                    (p)->lpVtbl->GetRenderMode(p)
#define IDirect3DRMDevice3_GetDirect3DDevice2(p,a)             (p)->lpVtbl->GetDirect3DDevice2(p,a)
/*** IDirect3DRMDevice3 methods ***/
#define IDirect3DRMDevice3_FindPreferredTextureFormat(p,a,b,c) (p)->lpVtbl->FindPreferredTextureFormat(p,a,b,c)
#define IDirect3DRMDevice3_RenderStateChange(p,a,b,c)          (p)->lpVtbl->RenderStateChange(p,a,b,c)
#define IDirect3DRMDevice3_LightStateChange(p,a,b,c)           (p)->lpVtbl->LightStateChange(p,a,b,c)
#define IDirect3DRMDevice3_GetStateChangeOptions(p,a,b,c)      (p)->lpVtbl->GetStateChangeOptions(p,a,b,c)
#define IDirect3DRMDevice3_SetStateChangeOptions(p,a,b,c)      (p)->lpVtbl->SetStateChangeOptions(p,a,b,c)
#else
/*** IUnknown methods ***/
#define IDirect3DRMDevice3_QueryInterface(p,a,b)               (p)->QueryInterface(a,b)
#define IDirect3DRMDevice3_AddRef(p)                           (p)->AddRef()
#define IDirect3DRMDevice3_Release(p)                          (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMDevice3_Clone(p,a,b,c)                      (p)->Clone(a,b,c)
#define IDirect3DRMDevice3_AddDestroyCallback(p,a,b)           (p)->AddDestroyCallback(a,b)
#define IDirect3DRMDevice3_DeleteDestroyCallback(p,a,b)        (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMDevice3_SetAppData(p,a)                     (p)->SetAppData(a)
#define IDirect3DRMDevice3_GetAppData(p)                       (p)->GetAppData()
#define IDirect3DRMDevice3_SetName(p,a)                        (p)->SetName(a)
#define IDirect3DRMDevice3_GetName(p,a,b)                      (p)->GetName(a,b)
#define IDirect3DRMDevice3_GetClassName(p,a,b)                 (p)->GetClassName(a,b)
/*** IDirect3DRMDevice methods ***/
#define IDirect3DRMDevice3_Init(p,a,b)                         (p)->Init(a,b)
#define IDirect3DRMDevice3_InitFromD3D(p,a,b)                  (p)->InitFromD3D(a,b)
#define IDirect3DRMDevice3_InitFromClipper(p,a,b,c,d)          (p)->InitFromClipper(a,b,c,d)
#define IDirect3DRMDevice3_Update(p)                           (p)->Update()
#define IDirect3DRMDevice3_AddUpdateCallback(p,a,b)            (p)->AddUpdateCallback(a,b)
#define IDirect3DRMDevice3_DeleteUpdateCallback(p,a,b)         (p)->DeleteUpdateCallback(a,b)
#define IDirect3DRMDevice3_SetBufferCount(p,a)                 (p)->SetBufferCount(a)
#define IDirect3DRMDevice3_GetBufferCount(p)                   (p)->GetBufferCount()
#define IDirect3DRMDevice3_SetDither(p,a)                      (p)->SetDither(a)
#define IDirect3DRMDevice3_SetShades(p,a)                      (p)->SetShades(a)
#define IDirect3DRMDevice3_SetQuality(p,a)                     (p)->SetQuality(a)
#define IDirect3DRMDevice3_SetTextureQuality(p,a)              (p)->SetTextureQuality(a)
#define IDirect3DRMDevice3_GetViewports(p,a)                   (p)->GetViewports(a)
#define IDirect3DRMDevice3_GetDither(p)                        (p)->GetDither()
#define IDirect3DRMDevice3_GetShades(p)                        (p)->GetShades()
#define IDirect3DRMDevice3_GetHeight(p)                        (p)->GetHeight()
#define IDirect3DRMDevice3_GetWidth(p)                         (p)->GetWidth()
#define IDirect3DRMDevice3_GetTrianglesDrawn(p)                (p)->GetTrianglesDrawn()
#define IDirect3DRMDevice3_GetWireframeOptions(p)              (p)->GetWireframeOptions()
#define IDirect3DRMDevice3_GetQuality(p)                       (p)->GetQuality()
#define IDirect3DRMDevice3_GetColorModel(p)                    (p)->GetColorModel()
#define IDirect3DRMDevice3_GetTextureQuality(p)                (p)->GetTextureQuality()
#define IDirect3DRMDevice3_GetDirect3DDevice(p,a)              (p)->GetDirect3DDevice(a)
/*** IDirect3DRMDevice2 methods ***/
#define IDirect3DRMDevice3_InitFromD3D2(p,a,b)                 (p)->InitFromD3D2(a,b)
#define IDirect3DRMDevice3_InitFromSurface(p,a,b,c)            (p)->InitFromSurface(a,b,c)
#define IDirect3DRMDevice3_SetRenderMode(p,a)                  (p)->SetRenderMode(a)
#define IDirect3DRMDevice3_GetRenderMode(p)                    (p)->GetRenderMode()
#define IDirect3DRMDevice3_GetDirect3DDevice2(p,a)             (p)->GetDirect3DDevice2(a)
/*** IDirect3DRMDevice3 methods ***/
#define IDirect3DRMDevice3_FindPreferredTextureFormat(p,a,b,c) (p)->FindPreferredTextureFormat(a,b,c)
#define IDirect3DRMDevice3_RenderStateChange(p,a,b,c)          (p)->RenderStateChange(a,b,c)
#define IDirect3DRMDevice3_LightStateChange(p,a,b,c)           (p)->LightStateChange(a,b,c)
#define IDirect3DRMDevice3_GetStateChangeOptions(p,a,b,c)      (p)->GetStateChangeOptions(a,b,c)
#define IDirect3DRMDevice3_SetStateChangeOptions(p,a,b,c)      (p)->SetStateChangeOptions(a,b,c)
#endif

/*****************************************************************************
 * IDirect3DRMViewport interface
 */
#define SDL_INTERFACE IDirect3DRMViewport
SDL_DECLARE_INTERFACE_(IDirect3DRMViewport,IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMViewport methods ***/
    SDL_STDMETHOD(Init) (SDL_THIS_ IDirect3DRMDevice *device, struct IDirect3DRMFrame *camera,
            SDL_DWORD x, SDL_DWORD y, SDL_DWORD width, SDL_DWORD height) SDL_PURE;
    SDL_STDMETHOD(Clear)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(Render)(SDL_THIS_ struct IDirect3DRMFrame *frame) SDL_PURE;
    SDL_STDMETHOD(SetFront)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetBack)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetField)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetUniformScaling)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetCamera)(SDL_THIS_ struct IDirect3DRMFrame *camera) SDL_PURE;
    SDL_STDMETHOD(SetProjection)(SDL_THIS_ D3DRMPROJECTIONTYPE) SDL_PURE;
    SDL_STDMETHOD(Transform)(SDL_THIS_ D3DRMVECTOR4D *d, D3DVECTOR *s) SDL_PURE;
    SDL_STDMETHOD(InverseTransform)(SDL_THIS_ D3DVECTOR *d, D3DRMVECTOR4D *s) SDL_PURE;
    SDL_STDMETHOD(Configure)(SDL_THIS_ SDL_LONG x, SDL_LONG y, SDL_DWORD width, SDL_DWORD height) SDL_PURE;
    SDL_STDMETHOD(ForceUpdate)(SDL_THIS_ SDL_DWORD x1, SDL_DWORD y1, SDL_DWORD x2, SDL_DWORD y2) SDL_PURE;
    SDL_STDMETHOD(SetPlane)(SDL_THIS_ D3DVALUE left, D3DVALUE right, D3DVALUE bottom, D3DVALUE top) SDL_PURE;
    SDL_STDMETHOD(GetCamera)(SDL_THIS_ struct IDirect3DRMFrame **camera) SDL_PURE;
    SDL_STDMETHOD(GetDevice)(SDL_THIS_ IDirect3DRMDevice **device) SDL_PURE;
    SDL_STDMETHOD(GetPlane)(SDL_THIS_ D3DVALUE *left, D3DVALUE *right, D3DVALUE *bottom, D3DVALUE *top) SDL_PURE;
    SDL_STDMETHOD(Pick)(SDL_THIS_ SDL_LONG x, SDL_LONG y, struct IDirect3DRMPickedArray **visuals) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetUniformScaling)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_LONG, GetX)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_LONG, GetY)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetWidth)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetHeight)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetField)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetBack)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetFront)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMPROJECTIONTYPE, GetProjection)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetDirect3DViewport)(SDL_THIS_ IDirect3DViewport **viewport) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMViewport_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMViewport_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirect3DRMViewport_Release(p)                   (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMViewport_Clone(p,a,b,c)               (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMViewport_AddDestroyCallback(p,a,b)    (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMViewport_DeleteDestroyCallback(p,a,b) (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMViewport_SetAppData(p,a)              (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMViewport_GetAppData(p)                (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMViewport_SetName(p,a)                 (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMViewport_GetName(p,a,b)               (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMViewport_GetClassName(p,a,b)          (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMViewport methods ***/
#define IDirect3DRMViewport_Init(p,a,b,c,d,e,f)          (p)->lpVtbl->Init(p,a,b,c,d,e,f)
#define IDirect3DRMViewport_Clear(p)                     (p)->lpVtbl->Clear(p)
#define IDirect3DRMViewport_Render(p,a)                  (p)->lpVtbl->Render(p,a)
#define IDirect3DRMViewport_SetFront(p,a)                (p)->lpVtbl->SetFront(p,a)
#define IDirect3DRMViewport_SetBack(p,a)                 (p)->lpVtbl->SetBack(p,a)
#define IDirect3DRMViewport_SetField(p,a)                (p)->lpVtbl->SetField(p,a)
#define IDirect3DRMViewport_SetUniformScaling(p,a)       (p)->lpVtbl->SetUniformScaling(p,a)
#define IDirect3DRMViewport_SetCamera(p,a)               (p)->lpVtbl->SetCamera(p,a)
#define IDirect3DRMViewport_SetProjection(p,a)           (p)->lpVtbl->SetProjection(p,a)
#define IDirect3DRMViewport_Transform(p,a,b)             (p)->lpVtbl->Transform(p,a,b)
#define IDirect3DRMViewport_InverseTransform(p,a,b)      (p)->lpVtbl->InverseTransform(p,a,b)
#define IDirect3DRMViewport_Configure(p,a,b,c,d)         (p)->lpVtbl->Configure(p,a,b,c,d)
#define IDirect3DRMViewport_ForceUpdate(p,a,b,c,d)       (p)->lpVtbl->ForceUpdate(p,a,b,c,d)
#define IDirect3DRMViewport_SetPlane(p,a,b,c,d)          (p)->lpVtbl->SetPlane(p,a,b,c,d)
#define IDirect3DRMViewport_GetCamera(p,a)               (p)->lpVtbl->GetCamera(p,a)
#define IDirect3DRMViewport_GetDevice(p,a)               (p)->lpVtbl->GetDevice(p,a)
#define IDirect3DRMViewport_GetPlane(p,a,b,c,d)          (p)->lpVtbl->GetPlane(p,a,b,c,d)
#define IDirect3DRMViewport_Pick(p,a,b,c)                (p)->lpVtbl->Pick(p,a,b,c)
#define IDirect3DRMViewport_GetUniformScaling(p)         (p)->lpVtbl->GetUniformScaling(p)
#define IDirect3DRMViewport_GetX(p)                      (p)->lpVtbl->GetX(p)
#define IDirect3DRMViewport_GetY(p)                      (p)->lpVtbl->GetY(p)
#define IDirect3DRMViewport_GetWidth(p)                  (p)->lpVtbl->GetWidth(p)
#define IDirect3DRMViewport_GetHeight(p)                 (p)->lpVtbl->GetHeight(p)
#define IDirect3DRMViewport_GetField(p)                  (p)->lpVtbl->GetField(p)
#define IDirect3DRMViewport_GetBack(p)                   (p)->lpVtbl->GetBack(p)
#define IDirect3DRMViewport_GetFront(p)                  (p)->lpVtbl->GetFront(p)
#define IDirect3DRMViewport_GetProjection(p)             (p)->lpVtbl->GetProjection(p)
#define IDirect3DRMViewport_GetDirect3DViewport(p,a)     (p)->lpVtbl->GetDirect3DViewport(p,a)
#else
/*** IUnknown methods ***/
#define IDirect3DRMViewport_QueryInterface(p,a,b)        (p)->QueryInterface(a,b)
#define IDirect3DRMViewport_AddRef(p)                    (p)->AddRef()
#define IDirect3DRMViewport_Release(p)                   (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMViewport_Clone(p,a,b,c)               (p)->Clone(a,b,c)
#define IDirect3DRMViewport_AddDestroyCallback(p,a,b)    (p)->AddDestroyCallback(a,b)
#define IDirect3DRMViewport_DeleteDestroyCallback(p,a,b) (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMViewport_SetAppData(p,a)              (p)->SetAppData(a)
#define IDirect3DRMViewport_GetAppData(p)                (p)->GetAppData()
#define IDirect3DRMViewport_SetName(p,a)                 (p)->SetName(a)
#define IDirect3DRMViewport_GetName(p,a,b)               (p)->GetName(a,b)
#define IDirect3DRMViewport_GetClassName(p,a,b)          (p)->GetClassName(a,b)
/*** IDirect3DRMViewport methods ***/
#define IDirect3DRMViewport_Init(p,a,b,c,d,e,f)          (p)->Init(a,b,c,d,e,f)
#define IDirect3DRMViewport_Clear(p)                     (p)->Clear()
#define IDirect3DRMViewport_Render(p,a)                  (p)->Render(a)
#define IDirect3DRMViewport_SetFront(p,a)                (p)->SetFront(a)
#define IDirect3DRMViewport_SetBack(p,a)                 (p)->SetBack(a)
#define IDirect3DRMViewport_SetField(p,a)                (p)->SetField(a)
#define IDirect3DRMViewport_SetUniformScaling(p,a)       (p)->SetUniformScaling(a)
#define IDirect3DRMViewport_SetCamera(p,a)               (p)->SetCamera(a)
#define IDirect3DRMViewport_SetProjection(p,a)           (p)->SetProjection(a)
#define IDirect3DRMViewport_Transform(p,a,b)             (p)->Transform(a,b)
#define IDirect3DRMViewport_InverseTransform(p,a,b)      (p)->InverseTransform(a,b)
#define IDirect3DRMViewport_Configure(p,a,b,c,d)         (p)->Configure(a,b,c,d)
#define IDirect3DRMViewport_ForceUpdate(p,a,b,c,d)       (p)->ForceUpdate(a,b,c,d)
#define IDirect3DRMViewport_SetPlane(p,a,b,c,d)          (p)->SetPlane(a,b,c,d)
#define IDirect3DRMViewport_GetCamera(p,a)               (p)->GetCamera(a)
#define IDirect3DRMViewport_GetDevice(p,a)               (p)->GetDevice(a)
#define IDirect3DRMViewport_GetPlane(p,a,b,c,d)          (p)->GetPlane(a,b,c,d)
#define IDirect3DRMViewport_Pick(p,a,b,c)                (p)->Pick(a,b,c)
#define IDirect3DRMViewport_GetUniformScaling(p)         (p)->GetUniformScaling()
#define IDirect3DRMViewport_GetX(p)                      (p)->GetX()
#define IDirect3DRMViewport_GetY(p)                      (p)->GetY()
#define IDirect3DRMViewport_GetWidth(p)                  (p)->GetWidth()
#define IDirect3DRMViewport_GetHeight(p)                 (p)->GetHeight()
#define IDirect3DRMViewport_GetField(p)                  (p)->GetField()
#define IDirect3DRMViewport_GetBack(p)                   (p)->GetBack()
#define IDirect3DRMViewport_GetFront(p)                  (p)->GetFront()
#define IDirect3DRMViewport_GetProjection(p)             (p)->GetProjection()
#define IDirect3DRMViewport_GetDirect3DViewport(p,a)     (p)->GetDirect3DViewport(a)
#endif

/*****************************************************************************
 * IDirect3DRMViewport2 interface
 */
#define SDL_INTERFACE IDirect3DRMViewport2
SDL_DECLARE_INTERFACE_(IDirect3DRMViewport2,IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMViewport2 methods ***/
    SDL_STDMETHOD(Init) (SDL_THIS_ IDirect3DRMDevice3 *device, struct IDirect3DRMFrame3 *camera,
            SDL_DWORD x, SDL_DWORD y, SDL_DWORD width, SDL_DWORD height) SDL_PURE;
    SDL_STDMETHOD(Clear)(SDL_THIS_ SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(Render)(SDL_THIS_ struct IDirect3DRMFrame3 *frame) SDL_PURE;
    SDL_STDMETHOD(SetFront)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetBack)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetField)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetUniformScaling)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetCamera)(SDL_THIS_ struct IDirect3DRMFrame3 *camera) SDL_PURE;
    SDL_STDMETHOD(SetProjection)(SDL_THIS_ D3DRMPROJECTIONTYPE) SDL_PURE;
    SDL_STDMETHOD(Transform)(SDL_THIS_ D3DRMVECTOR4D *d, D3DVECTOR *s) SDL_PURE;
    SDL_STDMETHOD(InverseTransform)(SDL_THIS_ D3DVECTOR *d, D3DRMVECTOR4D *s) SDL_PURE;
    SDL_STDMETHOD(Configure)(SDL_THIS_ SDL_LONG x, SDL_LONG y, SDL_DWORD width, SDL_DWORD height) SDL_PURE;
    SDL_STDMETHOD(ForceUpdate)(SDL_THIS_ SDL_DWORD x1, SDL_DWORD y1, SDL_DWORD x2, SDL_DWORD y2) SDL_PURE;
    SDL_STDMETHOD(SetPlane)(SDL_THIS_ D3DVALUE left, D3DVALUE right, D3DVALUE bottom, D3DVALUE top) SDL_PURE;
    SDL_STDMETHOD(GetCamera)(SDL_THIS_ struct IDirect3DRMFrame3 **camera) SDL_PURE;
    SDL_STDMETHOD(GetDevice)(SDL_THIS_ IDirect3DRMDevice3 **device) SDL_PURE;
    SDL_STDMETHOD(GetPlane)(SDL_THIS_ D3DVALUE *left, D3DVALUE *right, D3DVALUE *bottom, D3DVALUE *top) SDL_PURE;
    SDL_STDMETHOD(Pick)(SDL_THIS_ SDL_LONG x, SDL_LONG y, struct IDirect3DRMPickedArray **visuals) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetUniformScaling)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_LONG, GetX)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_LONG, GetY)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetWidth)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetHeight)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetField)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetBack)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetFront)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMPROJECTIONTYPE, GetProjection)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetDirect3DViewport)(SDL_THIS_ IDirect3DViewport **viewport) SDL_PURE;
    SDL_STDMETHOD(TransformVectors)(SDL_THIS_ SDL_DWORD vector_count, D3DRMVECTOR4D *dst_vectors,
            D3DVECTOR *src_vectors) SDL_PURE;
    SDL_STDMETHOD(InverseTransformVectors)(SDL_THIS_ SDL_DWORD vector_count, D3DVECTOR *dst_vectors,
            D3DRMVECTOR4D *src_vectors) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMViewport2_QueryInterface(p,a,b)            (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMViewport2_AddRef(p)                        (p)->lpVtbl->AddRef(p)
#define IDirect3DRMViewport2_Release(p)                       (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMViewport_2Clone(p,a,b,c)                   (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMViewport2_AddDestroyCallback(p,a,b)        (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMViewport2_DeleteDestroyCallback(p,a,b)     (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMViewport2_SetAppData(p,a)                  (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMViewport2_GetAppData(p)                    (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMViewport2_SetName(p,a)                     (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMViewport2_GetName(p,a,b)                   (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMViewport2_GetClassName(p,a,b)              (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMViewport2 methods ***/
#define IDirect3DRMViewport2_Init(p,a,b,c,d,e,f)              (p)->lpVtbl->Init(p,a,b,c,d,e,f)
#define IDirect3DRMViewport2_Clear(p,a)                       (p)->lpVtbl->Clear(p,a)
#define IDirect3DRMViewport2_Render(p,a)                      (p)->lpVtbl->Render(p,a)
#define IDirect3DRMViewport2_SetFront(p,a)                    (p)->lpVtbl->SetFront(p,a)
#define IDirect3DRMViewport2_SetBack(p,a)                     (p)->lpVtbl->SetBack(p,a)
#define IDirect3DRMViewport2_SetField(p,a)                    (p)->lpVtbl->SetField(p,a)
#define IDirect3DRMViewport2_SetUniformScaling(p,a)           (p)->lpVtbl->SetUniformScaling(p,a)
#define IDirect3DRMViewport2_SetCamera(p,a)                   (p)->lpVtbl->SetCamera(p,a)
#define IDirect3DRMViewport2_SetProjection(p,a)               (p)->lpVtbl->SetProjection(p,a)
#define IDirect3DRMViewport2_Transform(p,a,b)                 (p)->lpVtbl->Transform(p,a,b)
#define IDirect3DRMViewport2_InverseTransform(p,a,b)          (p)->lpVtbl->InverseTransform(p,a,b)
#define IDirect3DRMViewport2_Configure(p,a,b,c,d)             (p)->lpVtbl->Configure(p,a,b,c,d)
#define IDirect3DRMViewport2_ForceUpdate(p,a,b,c,d)           (p)->lpVtbl->ForceUpdate(p,a,b,c,d)
#define IDirect3DRMViewport2_SetPlane(p,a,b,c,d)              (p)->lpVtbl->SetPlane(p,a,b,c,d)
#define IDirect3DRMViewport2_GetCamera(p,a)                   (p)->lpVtbl->GetCamera(p,a)
#define IDirect3DRMViewport2_GetDevice(p,a)                   (p)->lpVtbl->GetDevice(p,a)
#define IDirect3DRMViewport2_GetPlane(p,a,b,c,d)              (p)->lpVtbl->GetPlane(p,a,b,c,d)
#define IDirect3DRMViewport2_Pick(p,a,b,c)                    (p)->lpVtbl->Pick(p,a,b,c)
#define IDirect3DRMViewport2_GetUniformScaling(p)             (p)->lpVtbl->GetUniformScaling(p)
#define IDirect3DRMViewport2_GetX(p)                          (p)->lpVtbl->GetX(p)
#define IDirect3DRMViewport2_GetY(p)                          (p)->lpVtbl->GetY(p)
#define IDirect3DRMViewport2_GetWidth(p)                      (p)->lpVtbl->GetWidth(p)
#define IDirect3DRMViewport2_GetHeight(p)                     (p)->lpVtbl->GetHeight(p)
#define IDirect3DRMViewport2_GetField(p)                      (p)->lpVtbl->GetField(p)
#define IDirect3DRMViewport2_GetBack(p)                       (p)->lpVtbl->GetBack(p)
#define IDirect3DRMViewport2_GetFront(p)                      (p)->lpVtbl->GetFront(p)
#define IDirect3DRMViewport2_GetProjection(p)                 (p)->lpVtbl->GetProjection(p)
#define IDirect3DRMViewport2_GetDirect3DViewport(p,a)         (p)->lpVtbl->GetDirect3DViewport(p,a)
#define IDirect3DRMViewport2_TransformVectors(p,a,b,c)        (p)->lpVtbl->TransformVectors(p,a,b,c)
#define IDirect3DRMViewport2_InverseTransformVectors(p,a,b,c) (p)->lpVtbl->InverseTransformVectors(p,a,b,c)
#else
/*** IUnknown methods ***/
#define IDirect3DRMViewport2_QueryInterface(p,a,b)            (p)->QueryInterface(a,b)
#define IDirect3DRMViewport2_AddRef(p)                        (p)->AddRef()
#define IDirect3DRMViewport2_Release(p)                       (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMViewport2_Clone(p,a,b,c)                   (p)->Clone(a,b,c)
#define IDirect3DRMViewport2_AddDestroyCallback(p,a,b)        (p)->AddDestroyCallback(a,b)
#define IDirect3DRMViewport2_DeleteDestroyCallback(p,a,b)     (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMViewport2_SetAppData(p,a)                  (p)->SetAppData(a)
#define IDirect3DRMViewport2_GetAppData(p)                    (p)->GetAppData()
#define IDirect3DRMViewport2_SetName(p,a)                     (p)->SetName(a)
#define IDirect3DRMViewport2_GetName(p,a,b)                   (p)->GetName(a,b)
#define IDirect3DRMViewport2_GetClassName(p,a,b)              (p)->GetClassName(a,b)
/*** IDirect3DRMViewport2 methods ***/
#define IDirect3DRMViewport2_Init(p,a,b,c,d,e,f)              (p)->Init(a,b,c,d,e,f)
#define IDirect3DRMViewport2_Clear(p)                         (p)->Clear()
#define IDirect3DRMViewport2_Render(p,a)                      (p)->Render(a)
#define IDirect3DRMViewport2_SetFront(p,a)                    (p)->SetFront(a)
#define IDirect3DRMViewport2_SetBack(p,a)                     (p)->SetBack(a)
#define IDirect3DRMViewport2_SetField(p,a)                    (p)->SetField(a)
#define IDirect3DRMViewport2_SetUniformScaling(p,a)           (p)->SetUniformScaling(a)
#define IDirect3DRMViewport2_SetCamera(p,a)                   (p)->SetCamera(a)
#define IDirect3DRMViewport2_SetProjection(p,a)               (p)->SetProjection(a)
#define IDirect3DRMViewport2_Transform(p,a,b)                 (p)->Transform(a,b)
#define IDirect3DRMViewport2_InverseTransform(p,a,b)          (p)->InverseTransform(a,b)
#define IDirect3DRMViewport2_Configure(p,a,b,c,d)             (p)->Configure(a,b,c,d)
#define IDirect3DRMViewport2_ForceUpdate(p,a,b,c,d)           (p)->ForceUpdate(a,b,c,d)
#define IDirect3DRMViewport2_SetPlane(p,a,b,c,d)              (p)->SetPlane(a,b,c,d)
#define IDirect3DRMViewport2_GetCamera(p,a)                   (p)->GetCamera(a)
#define IDirect3DRMViewport2_GetDevice(p,a)                   (p)->GetDevice(a)
#define IDirect3DRMViewport2_GetPlane(p,a,b,c,d)              (p)->GetPlane(a,b,c,d)
#define IDirect3DRMViewport2_Pick(p,a,b,c)                    (p)->Pick(a,b,c)
#define IDirect3DRMViewport2_GetUniformScaling(p)             (p)->GetUniformScaling()
#define IDirect3DRMViewport2_GetX(p)                          (p)->GetX()
#define IDirect3DRMViewport2_GetY(p)                          (p)->GetY()
#define IDirect3DRMViewport2_GetWidth(p)                      (p)->GetWidth()
#define IDirect3DRMViewport2_GetHeight(p)                     (p)->GetHeight()
#define IDirect3DRMViewport2_GetField(p)                      (p)->GetField()
#define IDirect3DRMViewport2_GetBack(p)                       (p)->GetBack()
#define IDirect3DRMViewport2_GetFront(p)                      (p)->GetFront()
#define IDirect3DRMViewport2_GetProjection(p)                 (p)->GetProjection()
#define IDirect3DRMViewport2_GetDirect3DViewport(p,a)         (p)->GetDirect3DViewport(a)
#define IDirect3DRMViewport2_TransformVectors(p,a,b,c)        (p)->TransformVectors(a,b,c)
#define IDirect3DRMViewport2_InverseTransformVectors(p,a,b,c) (p)->InverseTransformVectors(a,b,c)
#endif

/*****************************************************************************
 * IDirect3DRMFrame interface
 */
#define SDL_INTERFACE IDirect3DRMFrame
SDL_DECLARE_INTERFACE_(IDirect3DRMFrame,IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMFrame methods ***/
    SDL_STDMETHOD(AddChild)(SDL_THIS_ IDirect3DRMFrame *child) SDL_PURE;
    SDL_STDMETHOD(AddLight)(SDL_THIS_ struct IDirect3DRMLight *light) SDL_PURE;
    SDL_STDMETHOD(AddMoveCallback)(SDL_THIS_ D3DRMFRAMEMOVECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(AddTransform)(SDL_THIS_ D3DRMCOMBINETYPE, D3DRMMATRIX4D) SDL_PURE;
    SDL_STDMETHOD(AddTranslation)(SDL_THIS_ D3DRMCOMBINETYPE, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(AddScale)(SDL_THIS_ D3DRMCOMBINETYPE, D3DVALUE sx, D3DVALUE sy, D3DVALUE sz) SDL_PURE;
    SDL_STDMETHOD(AddRotation)(SDL_THIS_ D3DRMCOMBINETYPE, D3DVALUE x, D3DVALUE y, D3DVALUE z, D3DVALUE theta) SDL_PURE;
    SDL_STDMETHOD(AddVisual)(SDL_THIS_ IDirect3DRMVisual *visual) SDL_PURE;
    SDL_STDMETHOD(GetChildren)(SDL_THIS_ struct IDirect3DRMFrameArray **children) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetColor)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetLights)(SDL_THIS_ struct IDirect3DRMLightArray **lights) SDL_PURE;
    SDL_STDMETHOD_(D3DRMMATERIALMODE, GetMaterialMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetParent)(SDL_THIS_ IDirect3DRMFrame **parent) SDL_PURE;
    SDL_STDMETHOD(GetPosition)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVECTOR *return_position) SDL_PURE;
    SDL_STDMETHOD(GetRotation)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVECTOR *axis, D3DVALUE *return_theta) SDL_PURE;
    SDL_STDMETHOD(GetScene)(SDL_THIS_ IDirect3DRMFrame **scene) SDL_PURE;
    SDL_STDMETHOD_(D3DRMSORTMODE, GetSortMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetTexture)(SDL_THIS_ struct IDirect3DRMTexture **texture) SDL_PURE;
    SDL_STDMETHOD(GetTransform)(SDL_THIS_ D3DRMMATRIX4D return_matrix) SDL_PURE;
    SDL_STDMETHOD(GetVelocity)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVECTOR *return_velocity, SDL_BOOL with_rotation) SDL_PURE;
    SDL_STDMETHOD(GetOrientation)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVECTOR *dir, D3DVECTOR *up) SDL_PURE;
    SDL_STDMETHOD(GetVisuals)(SDL_THIS_ struct IDirect3DRMVisualArray **visuals) SDL_PURE;
    SDL_STDMETHOD(GetTextureTopology)(SDL_THIS_ SDL_BOOL *wrap_u, SDL_BOOL *wrap_v) SDL_PURE;
    SDL_STDMETHOD(InverseTransform)(SDL_THIS_ D3DVECTOR *d, D3DVECTOR *s) SDL_PURE;
    SDL_STDMETHOD(Load)(SDL_THIS_ void *filename, void *name, D3DRMLOADOPTIONS flags,
            D3DRMLOADTEXTURECALLBACK cb, void *ctx)SDL_PURE;
    SDL_STDMETHOD(LookAt)(SDL_THIS_ IDirect3DRMFrame *target, IDirect3DRMFrame *reference,
            D3DRMFRAMECONSTRAINT constraint) SDL_PURE;
    SDL_STDMETHOD(Move)(SDL_THIS_ D3DVALUE delta) SDL_PURE;
    SDL_STDMETHOD(DeleteChild)(SDL_THIS_ IDirect3DRMFrame *child) SDL_PURE;
    SDL_STDMETHOD(DeleteLight)(SDL_THIS_ struct IDirect3DRMLight *light) SDL_PURE;
    SDL_STDMETHOD(DeleteMoveCallback)(SDL_THIS_ D3DRMFRAMEMOVECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteVisual)(SDL_THIS_ IDirect3DRMVisual *visual) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetSceneBackground)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetSceneBackgroundDepth)(SDL_THIS_ IDirectDrawSurface **surface) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetSceneFogColor)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetSceneFogEnable)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMFOGMODE, GetSceneFogMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetSceneFogParams)(SDL_THIS_ D3DVALUE *return_start, D3DVALUE *return_end, D3DVALUE *return_density) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackground)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackgroundRGB)(SDL_THIS_ D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackgroundDepth)(SDL_THIS_ IDirectDrawSurface *surface) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackgroundImage)(SDL_THIS_ struct IDirect3DRMTexture *texture) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogEnable)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogMode)(SDL_THIS_ D3DRMFOGMODE) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogParams)(SDL_THIS_ D3DVALUE start, D3DVALUE end, D3DVALUE density) SDL_PURE;
    SDL_STDMETHOD(SetColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetColorRGB)(SDL_THIS_ D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD_(D3DRMZBUFFERMODE, GetZbufferMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetMaterialMode)(SDL_THIS_ D3DRMMATERIALMODE) SDL_PURE;
    SDL_STDMETHOD(SetOrientation)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVALUE dx, D3DVALUE dy, D3DVALUE dz,
            D3DVALUE ux, D3DVALUE uy, D3DVALUE uz) SDL_PURE;
    SDL_STDMETHOD(SetPosition)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(SetRotation)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVALUE x, D3DVALUE y, D3DVALUE z, D3DVALUE theta) SDL_PURE;
    SDL_STDMETHOD(SetSortMode)(SDL_THIS_ D3DRMSORTMODE) SDL_PURE;
    SDL_STDMETHOD(SetTexture)(SDL_THIS_ struct IDirect3DRMTexture *texture) SDL_PURE;
    SDL_STDMETHOD(SetTextureTopology)(SDL_THIS_ SDL_BOOL wrap_u, SDL_BOOL wrap_v) SDL_PURE;
    SDL_STDMETHOD(SetVelocity)(SDL_THIS_ IDirect3DRMFrame *reference,
            D3DVALUE x, D3DVALUE y, D3DVALUE z, SDL_BOOL with_rotation) SDL_PURE;
    SDL_STDMETHOD(SetZbufferMode)(SDL_THIS_ D3DRMZBUFFERMODE) SDL_PURE;
    SDL_STDMETHOD(Transform)(SDL_THIS_ D3DVECTOR *d, D3DVECTOR *s) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMFrame_QueryInterface(p,a,b)            (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMFrame_AddRef(p)                        (p)->lpVtbl->AddRef(p)
#define IDirect3DRMFrame_Release(p)                       (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMFrame_Clone(p,a,b,c)                   (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMFrame_AddDestroyCallback(p,a,b)        (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMFrame_DeleteDestroyCallback(p,a,b)     (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMFrame_SetAppData(p,a)                  (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMFrame_GetAppData(p)                    (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMFrame_SetName(p,a)                     (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMFrame_GetName(p,a,b)                   (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMFrame_GetClassName(p,a,b)              (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMFrame methods ***/
#define IDirect3DRMFrame_AddChild(p,a)                    (p)->lpVtbl->AddChild(p,a)
#define IDirect3DRMFrame_AddLight(p,a)                    (p)->lpVtbl->AddLight(p,a)
#define IDirect3DRMFrame_AddMoveCallback(p,a,b)           (p)->lpVtbl->AddMoveCallback(p,a,b)
#define IDirect3DRMFrame_AddTransform(p,a,b)              (p)->lpVtbl->AddTransform(p,a,b)
#define IDirect3DRMFrame_AddTranslation(p,a,b,c,d)        (p)->lpVtbl->AddTranslation(p,a,b,c,d)
#define IDirect3DRMFrame_AddScale(p,a,b,c,d)              (p)->lpVtbl->AddScale(p,a,b,c,d)
#define IDirect3DRMFrame_AddRotation(p,a,b,c,d,e)         (p)->lpVtbl->AddRotation(p,a,b,c,d,e)
#define IDirect3DRMFrame_AddVisual(p,a)                   (p)->lpVtbl->AddVisual(p,a)
#define IDirect3DRMFrame_GetChildren(p,a)                 (p)->lpVtbl->GetChildren(p,a)
#define IDirect3DRMFrame_GetColor(p)                      (p)->lpVtbl->GetColor(p)
#define IDirect3DRMFrame_GetLights(p,a)                   (p)->lpVtbl->GetLights(p,a)
#define IDirect3DRMFrame_GetMaterialMode(p)               (p)->lpVtbl->GetMaterialMode(p)
#define IDirect3DRMFrame_GetParent(p,a)                   (p)->lpVtbl->GetParent(p,a)
#define IDirect3DRMFrame_GetPosition(p,a,b)               (p)->lpVtbl->GetPosition(p,a,b)
#define IDirect3DRMFrame_GetRotation(p,a,b,c)             (p)->lpVtbl->GetRotation(p,a,b,c)
#define IDirect3DRMFrame_GetScene(p,a)                    (p)->lpVtbl->GetScene(p,a)
#define IDirect3DRMFrame_GetSortMode(p)                   (p)->lpVtbl->GetSortMode(p)
#define IDirect3DRMFrame_GetTexture(p,a)                  (p)->lpVtbl->GetTexture(p,a)
#define IDirect3DRMFrame_GetTransform(p,a)                (p)->lpVtbl->GetTransform(p,a)
#define IDirect3DRMFrame_GetVelocity(p,a,b,c)             (p)->lpVtbl->GetVelocity(p,a,b,c)
#define IDirect3DRMFrame_GetOrientation(p,a,b,c)          (p)->lpVtbl->GetOrientation(p,a,b,c)
#define IDirect3DRMFrame_GetVisuals(p,a)                  (p)->lpVtbl->GetVisuals(p,a)
#define IDirect3DRMFrame_GetTextureTopology(p,a,b)        (p)->lpVtbl->GetTextureTopology(p,a,b)
#define IDirect3DRMFrame_InverseTransform(p,a,b)          (p)->lpVtbl->InverseTransform(p,a,b)
#define IDirect3DRMFrame_Load(p,a,b,c,d,e)                (p)->lpVtbl->Load(p,a,b,c,d,e)
#define IDirect3DRMFrame_LookAt(p,a,b,c)                  (p)->lpVtbl->LookAt(p,a,b,c)
#define IDirect3DRMFrame_Move(p,a)                        (p)->lpVtbl->Move(p,a)
#define IDirect3DRMFrame_DeleteChild(p,a)                 (p)->lpVtbl->DeleteChild(p,a)
#define IDirect3DRMFrame_DeleteLight(p,a)                 (p)->lpVtbl->DeleteLight(p,a)
#define IDirect3DRMFrame_DeleteMoveCallback(p,a,b)        (p)->lpVtbl->DeleteMoveCallback(p,a,b)
#define IDirect3DRMFrame_DeleteVisual(p,a)                (p)->lpVtbl->DeleteVisual(p,a)
#define IDirect3DRMFrame_GetSceneBackground(p)            (p)->lpVtbl->GetSceneBackground(p)
#define IDirect3DRMFrame_GetSceneBackgroundDepth(p,a)     (p)->lpVtbl->GetSceneBackgroundDepth(p,a)
#define IDirect3DRMFrame_GetSceneFogColor(p)              (p)->lpVtbl->GetSceneFogColor(p)
#define IDirect3DRMFrame_GetSceneFogEnable(p)             (p)->lpVtbl->GetSceneFogEnable(p)
#define IDirect3DRMFrame_GetSceneFogMode(p)               (p)->lpVtbl->GetSceneFogMode(p)
#define IDirect3DRMFrame_GetSceneFogParams(p,a,b,c)       (p)->lpVtbl->GetSceneFogParams(p,a,b,c)
#define IDirect3DRMFrame_SetSceneBackground(p,a)          (p)->lpVtbl->SetSceneBackground(p,a)
#define IDirect3DRMFrame_SetSceneBackgroundRGB(p,a,b,c)   (p)->lpVtbl->SetSceneBackgroundRGB(p,a,b,c)
#define IDirect3DRMFrame_SetSceneBackgroundDepth(p,a)     (p)->lpVtbl->SetSceneBackgroundDepth(p,a)
#define IDirect3DRMFrame_SetSceneBackgroundImage(p,a)     (p)->lpVtbl->SetSceneBackgroundImage(p,a)
#define IDirect3DRMFrame_SetSceneFogEnable(p,a)           (p)->lpVtbl->SetSceneFogEnable(p,a)
#define IDirect3DRMFrame_SetSceneFogColor(p,a)            (p)->lpVtbl->SetSceneFogColor(p,a)
#define IDirect3DRMFrame_SetSceneFogMode(p,a)             (p)->lpVtbl->SetSceneFogMode(p,a)
#define IDirect3DRMFrame_SetSceneFogParams(p,a,b,c)       (p)->lpVtbl->SetSceneFogParams(p,a,b,c)
#define IDirect3DRMFrame_SetColor(p,a)                    (p)->lpVtbl->SetColor(p,a)
#define IDirect3DRMFrame_SetColorRGB(p,a,b,c)             (p)->lpVtbl->SetColorRGB(p,a,b,c)
#define IDirect3DRMFrame_GetZbufferMode(p)                (p)->lpVtbl->GetZbufferMode(p)
#define IDirect3DRMFrame_SetMaterialMode(p,a)             (p)->lpVtbl->SetMaterialMode(p,a)
#define IDirect3DRMFrame_SetOrientation(p,a,b,c,d,e,f,g)  (p)->lpVtbl->SetOrientation(p,a,b,c,d,e,f,g)
#define IDirect3DRMFrame_SetPosition(p,a,b,c,d)           (p)->lpVtbl->SetPosition(p,a,b,c,d)
#define IDirect3DRMFrame_SetRotation(p,a,b,c,d,e)         (p)->lpVtbl->SetRotation(p,a,b,c,d,e)
#define IDirect3DRMFrame_SetSortMode(p,a)                 (p)->lpVtbl->SetSortMode(p,a)
#define IDirect3DRMFrame_SetTexture(p,a)                  (p)->lpVtbl->SetTexture(p,a)
#define IDirect3DRMFrame_SetTextureTopology(p,a,b)        (p)->lpVtbl->SetTextureTopology(p,a,b)
#define IDirect3DRMFrame_SetVelocity(p,a,b,c,d,e)         (p)->lpVtbl->SetVelocity(p,a,b,c,d,e)
#define IDirect3DRMFrame_SetZbufferMode(p,a)              (p)->lpVtbl->SetZbufferMode(p,a)
#define IDirect3DRMFrame_Transform(p,a,b)                 (p)->lpVtbl->Transform(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMFrame_QueryInterface(p,a,b)            (p)->QueryInterface(a,b)
#define IDirect3DRMFrame_AddRef(p)                        (p)->AddRef()
#define IDirect3DRMFrame_Release(p)                       (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMFrame_Clone(p,a,b,c)                   (p)->Clone(a,b,c)
#define IDirect3DRMFrame_AddDestroyCallback(p,a,b)        (p)->AddDestroyCallback(a,b)
#define IDirect3DRMFrame_DeleteDestroyCallback(p,a,b)     (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMFrame_SetAppData(p,a)                  (p)->SetAppData(a)
#define IDirect3DRMFrame_GetAppData(p)                    (p)->GetAppData()
#define IDirect3DRMFrame_SetName(p,a)                     (p)->SetName(a)
#define IDirect3DRMFrame_GetName(p,a,b)                   (p)->GetName(a,b)
#define IDirect3DRMFrame_GetClassName(p,a,b)              (p)->GetClassName(a,b)
/*** IDirect3DRMFrame methods ***/
#define IDirect3DRMFrame_AddChild(p,a)                    (p)->AddChild(a)
#define IDirect3DRMFrame_AddLight(p,a)                    (p)->AddLight(a)
#define IDirect3DRMFrame_AddMoveCallback(p,a,b)           (p)->AddMoveCallback(a,b)
#define IDirect3DRMFrame_AddTransform(p,a,b)              (p)->AddTransform(a,b)
#define IDirect3DRMFrame_AddTranslation(p,a,b,c,d)        (p)->AddTranslation(a,b,c,d)
#define IDirect3DRMFrame_AddScale(p,a,b,c,d)              (p)->AddScale(a,b,c,d)
#define IDirect3DRMFrame_AddRotation(p,a,b,c,d,e)         (p)->AddRotation(a,b,c,d,e)
#define IDirect3DRMFrame_AddVisual(p,a)                   (p)->AddVisual(a)
#define IDirect3DRMFrame_GetChildren(p,a)                 (p)->GetChildren(a)
#define IDirect3DRMFrame_GetColor(p)                      (p)->GetColor()
#define IDirect3DRMFrame_GetLights(p,a)                   (p)->GetLights(a)
#define IDirect3DRMFrame_GetMaterialMode(p)               (p)->GetMaterialMode()
#define IDirect3DRMFrame_GetParent(p,a)                   (p)->GetParent(a)
#define IDirect3DRMFrame_GetPosition(p,a,b)               (p)->GetPosition(a,b)
#define IDirect3DRMFrame_GetRotation(p,a,b,c)             (p)->GetRotation(a,b,c)
#define IDirect3DRMFrame_GetScene(p,a)                    (p)->GetScene(a)
#define IDirect3DRMFrame_GetSortMode(p)                   (p)->GetSortMode()
#define IDirect3DRMFrame_GetTexture(p,a)                  (p)->GetTexture(a)
#define IDirect3DRMFrame_GetTransform(p,a)                (p)->GetTransform(a)
#define IDirect3DRMFrame_GetVelocity(p,a,b,c)             (p)->GetVelocity(a,b,c)
#define IDirect3DRMFrame_GetOrientation(p,a,b,c)          (p)->GetOrientation(a,b,c)
#define IDirect3DRMFrame_GetVisuals(p,a)                  (p)->GetVisuals(a)
#define IDirect3DRMFrame_GetTextureTopology(p,a,b)        (p)->GetTextureTopology(a,b)
#define IDirect3DRMFrame_InverseTransform(p,a,b)          (p)->InverseTransform(a,b)
#define IDirect3DRMFrame_Load(p,a,b,c,d,e)                (p)->Load(a,b,c,d,e)
#define IDirect3DRMFrame_LookAt(p,a,b,c)                  (p)->LookAt(a,b,c)
#define IDirect3DRMFrame_Move(p,a)                        (p)->Move(a)
#define IDirect3DRMFrame_DeleteChild(p,a)                 (p)->DeleteChild(a)
#define IDirect3DRMFrame_DeleteLight(p,a)                 (p)->DeleteLight(a)
#define IDirect3DRMFrame_DeleteMoveCallback(p,a,b)        (p)->DeleteMoveCallback(a,b)
#define IDirect3DRMFrame_DeleteVisual(p,a)                (p)->DeleteVisual(a)
#define IDirect3DRMFrame_GetSceneBackground(p)            (p)->GetSceneBackground()
#define IDirect3DRMFrame_GetSceneBackgroundDepth(p,a)     (p)->GetSceneBackgroundDepth(a)
#define IDirect3DRMFrame_GetSceneFogColor(p)              (p)->GetSceneFogColor()
#define IDirect3DRMFrame_GetSceneFogEnable(p)             (p)->GetSceneFogEnable()
#define IDirect3DRMFrame_GetSceneFogMode(p)               (p)->GetSceneFogMode()
#define IDirect3DRMFrame_GetSceneFogParams(p,a,b,c)       (p)->GetSceneFogParams(a,b,c)
#define IDirect3DRMFrame_SetSceneBackground(p,a)          (p)->SetSceneBackground(a)
#define IDirect3DRMFrame_SetSceneBackgroundRGB(p,a,b,c)   (p)->SetSceneBackgroundRGB(a,b,c)
#define IDirect3DRMFrame_SetSceneBackgroundDepth(p,a)     (p)->SetSceneBackgroundDepth(a)
#define IDirect3DRMFrame_SetSceneBackgroundImage(p,a)     (p)->SetSceneBackgroundImage(a)
#define IDirect3DRMFrame_SetSceneFogEnable(p,a)           (p)->SetSceneFogEnable(a)
#define IDirect3DRMFrame_SetSceneFogColor(p,a)            (p)->SetSceneFogColor(a)
#define IDirect3DRMFrame_SetSceneFogMode(p,a)             (p)->SetSceneFogMode(a)
#define IDirect3DRMFrame_SetSceneFogParams(p,a,b,c)       (p)->SetSceneFogParams(a,b,c)
#define IDirect3DRMFrame_SetColor(p,a)                    (p)->SetColor(a)
#define IDirect3DRMFrame_SetColorRGB(p,a,b,c)             (p)->SetColorRGB(a,b,c)
#define IDirect3DRMFrame_GetZbufferMode(p)                (p)->GetZbufferMode()
#define IDirect3DRMFrame_SetMaterialMode(p,a)             (p)->SetMaterialMode(a)
#define IDirect3DRMFrame_SetOrientation(p,a,b,c,d,e,f,g)  (p)->SetOrientation(a,b,c,d,e,f,g)
#define IDirect3DRMFrame_SetPosition(p,a,b,c,d)           (p)->SetPosition(a,b,c,d)
#define IDirect3DRMFrame_SetRotation(p,a,b,c,d,e)         (p)->SetRotation(a,b,c,d,e)
#define IDirect3DRMFrame_SetSortMode(p,a)                 (p)->SetSortMode(a)
#define IDirect3DRMFrame_SetTexture(p,a)                  (p)->SetTexture(a)
#define IDirect3DRMFrame_SetTextureTopology(p,a,b)        (p)->SetTextureTopology(a,b)
#define IDirect3DRMFrame_SetVelocity(p,a,b,c,d,e)         (p)->SetVelocity(a,b,c,d,e)
#define IDirect3DRMFrame_SetZbufferMode(p,a)              (p)->SetZbufferMode(a)
#define IDirect3DRMFrame_Transform(p,a,b)                 (p)->Transform(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMFrame2 interface
 */
#define SDL_INTERFACE IDirect3DRMFrame2
SDL_DECLARE_INTERFACE_(IDirect3DRMFrame2,IDirect3DRMFrame)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMFrame methods ***/
    SDL_STDMETHOD(AddChild)(SDL_THIS_ IDirect3DRMFrame *child) SDL_PURE;
    SDL_STDMETHOD(AddLight)(SDL_THIS_ struct IDirect3DRMLight *light) SDL_PURE;
    SDL_STDMETHOD(AddMoveCallback)(SDL_THIS_ D3DRMFRAMEMOVECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(AddTransform)(SDL_THIS_ D3DRMCOMBINETYPE, D3DRMMATRIX4D) SDL_PURE;
    SDL_STDMETHOD(AddTranslation)(SDL_THIS_ D3DRMCOMBINETYPE, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(AddScale)(SDL_THIS_ D3DRMCOMBINETYPE, D3DVALUE sx, D3DVALUE sy, D3DVALUE sz) SDL_PURE;
    SDL_STDMETHOD(AddRotation)(SDL_THIS_ D3DRMCOMBINETYPE, D3DVALUE x, D3DVALUE y, D3DVALUE z, D3DVALUE theta) SDL_PURE;
    SDL_STDMETHOD(AddVisual)(SDL_THIS_ IDirect3DRMVisual *visual) SDL_PURE;
    SDL_STDMETHOD(GetChildren)(SDL_THIS_ struct IDirect3DRMFrameArray **children) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetColor)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetLights)(SDL_THIS_ struct IDirect3DRMLightArray **lights) SDL_PURE;
    SDL_STDMETHOD_(D3DRMMATERIALMODE, GetMaterialMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetParent)(SDL_THIS_ IDirect3DRMFrame **parent) SDL_PURE;
    SDL_STDMETHOD(GetPosition)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVECTOR *return_position) SDL_PURE;
    SDL_STDMETHOD(GetRotation)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVECTOR *axis, D3DVALUE *return_theta) SDL_PURE;
    SDL_STDMETHOD(GetScene)(SDL_THIS_ IDirect3DRMFrame **scene) SDL_PURE;
    SDL_STDMETHOD_(D3DRMSORTMODE, GetSortMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetTexture)(SDL_THIS_ struct IDirect3DRMTexture **texture) SDL_PURE;
    SDL_STDMETHOD(GetTransform)(SDL_THIS_ D3DRMMATRIX4D return_matrix) SDL_PURE;
    SDL_STDMETHOD(GetVelocity)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVECTOR *return_velocity, SDL_BOOL with_rotation) SDL_PURE;
    SDL_STDMETHOD(GetOrientation)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVECTOR *dir, D3DVECTOR *up) SDL_PURE;
    SDL_STDMETHOD(GetVisuals)(SDL_THIS_ struct IDirect3DRMVisualArray **visuals) SDL_PURE;
    SDL_STDMETHOD(GetTextureTopology)(SDL_THIS_ SDL_BOOL *wrap_u, SDL_BOOL *wrap_v) SDL_PURE;
    SDL_STDMETHOD(InverseTransform)(SDL_THIS_ D3DVECTOR *d, D3DVECTOR *s) SDL_PURE;
    SDL_STDMETHOD(Load)(SDL_THIS_ void *filename, void *name, D3DRMLOADOPTIONS flags,
            D3DRMLOADTEXTURECALLBACK cb, void *ctx)SDL_PURE;
    SDL_STDMETHOD(LookAt)(SDL_THIS_ IDirect3DRMFrame *target, IDirect3DRMFrame *reference,
            D3DRMFRAMECONSTRAINT constraint) SDL_PURE;
    SDL_STDMETHOD(Move)(SDL_THIS_ D3DVALUE delta) SDL_PURE;
    SDL_STDMETHOD(DeleteChild)(SDL_THIS_ IDirect3DRMFrame *child) SDL_PURE;
    SDL_STDMETHOD(DeleteLight)(SDL_THIS_ struct IDirect3DRMLight *light) SDL_PURE;
    SDL_STDMETHOD(DeleteMoveCallback)(SDL_THIS_ D3DRMFRAMEMOVECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteVisual)(SDL_THIS_ IDirect3DRMVisual *visual) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetSceneBackground)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetSceneBackgroundDepth)(SDL_THIS_ IDirectDrawSurface **surface) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetSceneFogColor)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetSceneFogEnable)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMFOGMODE, GetSceneFogMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetSceneFogParams)(SDL_THIS_ D3DVALUE *return_start, D3DVALUE *return_end, D3DVALUE *return_density) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackground)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackgroundRGB)(SDL_THIS_ D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackgroundDepth)(SDL_THIS_ IDirectDrawSurface *surface) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackgroundImage)(SDL_THIS_ struct IDirect3DRMTexture *texture) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogEnable)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogMode)(SDL_THIS_ D3DRMFOGMODE) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogParams)(SDL_THIS_ D3DVALUE start, D3DVALUE end, D3DVALUE density) SDL_PURE;
    SDL_STDMETHOD(SetColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetColorRGB)(SDL_THIS_ D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD_(D3DRMZBUFFERMODE, GetZbufferMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetMaterialMode)(SDL_THIS_ D3DRMMATERIALMODE) SDL_PURE;
    SDL_STDMETHOD(SetOrientation)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVALUE dx, D3DVALUE dy, D3DVALUE dz,
            D3DVALUE ux, D3DVALUE uy, D3DVALUE uz) SDL_PURE;
    SDL_STDMETHOD(SetPosition)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(SetRotation)(SDL_THIS_ IDirect3DRMFrame *reference, D3DVALUE x, D3DVALUE y, D3DVALUE z, D3DVALUE theta) SDL_PURE;
    SDL_STDMETHOD(SetSortMode)(SDL_THIS_ D3DRMSORTMODE) SDL_PURE;
    SDL_STDMETHOD(SetTexture)(SDL_THIS_ struct IDirect3DRMTexture *texture) SDL_PURE;
    SDL_STDMETHOD(SetTextureTopology)(SDL_THIS_ SDL_BOOL wrap_u, SDL_BOOL wrap_v) SDL_PURE;
    SDL_STDMETHOD(SetVelocity)(SDL_THIS_ IDirect3DRMFrame *reference,
            D3DVALUE x, D3DVALUE y, D3DVALUE z, SDL_BOOL with_rotation) SDL_PURE;
    SDL_STDMETHOD(SetZbufferMode)(SDL_THIS_ D3DRMZBUFFERMODE) SDL_PURE;
    SDL_STDMETHOD(Transform)(SDL_THIS_ D3DVECTOR *d, D3DVECTOR *s) SDL_PURE;
    /*** IDirect3DRMFrame2 methods ***/
    SDL_STDMETHOD(AddMoveCallback2)(SDL_THIS_ D3DRMFRAMEMOVECALLBACK cb, void *ctx, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(GetBox)(SDL_THIS_ D3DRMBOX *box) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetBoxEnable)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetAxes)(SDL_THIS_ D3DVECTOR *dir, D3DVECTOR *up);
    SDL_STDMETHOD(GetMaterial)(SDL_THIS_ struct IDirect3DRMMaterial **material) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetInheritAxes)(SDL_THIS);
    SDL_STDMETHOD(GetHierarchyBox)(SDL_THIS_ D3DRMBOX *box) SDL_PURE;
    SDL_STDMETHOD(SetBox)(SDL_THIS_ D3DRMBOX *box) SDL_PURE;
    SDL_STDMETHOD(SetBoxEnable)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetAxes)(SDL_THIS_ D3DVALUE dx, D3DVALUE dy, D3DVALUE dz, D3DVALUE ux, D3DVALUE uy, D3DVALUE uz);
    SDL_STDMETHOD(SetInheritAxes)(SDL_THIS_ SDL_BOOL inherit_from_parent);
    SDL_STDMETHOD(SetMaterial)(SDL_THIS_ struct IDirect3DRMMaterial *material) SDL_PURE;
    SDL_STDMETHOD(SetQuaternion)(SDL_THIS_ IDirect3DRMFrame *reference, D3DRMQUATERNION *q) SDL_PURE;
    SDL_STDMETHOD(RayPick)(SDL_THIS_ IDirect3DRMFrame *reference, D3DRMRAY *ray, SDL_DWORD flags,
            struct IDirect3DRMPicked2Array **return_visuals) SDL_PURE;
    SDL_STDMETHOD(Save)(SDL_THIS_ const char *filename, D3DRMXOFFORMAT format, D3DRMSAVEOPTIONS flags);
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMFrame2_QueryInterface(p,a,b)            (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMFrame2_AddRef(p)                        (p)->lpVtbl->AddRef(p)
#define IDirect3DRMFrame2_Release(p)                       (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMFrame2_Clone(p,a,b,c)                   (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMFrame2_AddDestroyCallback(p,a,b)        (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMFrame2_DeleteDestroyCallback(p,a,b)     (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMFrame2_SetAppData(p,a)                  (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMFrame2_GetAppData(p)                    (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMFrame2_SetName(p,a)                     (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMFrame2_GetName(p,a,b)                   (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMFrame2_GetClassName(p,a,b)              (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMFrame methods ***/
#define IDirect3DRMFrame2_AddChild(p,a)                    (p)->lpVtbl->AddChild(p,a)
#define IDirect3DRMFrame2_AddLight(p,a)                    (p)->lpVtbl->AddLight(p,a)
#define IDirect3DRMFrame2_AddMoveCallback(p,a,b)           (p)->lpVtbl->AddMoveCallback(p,a,b)
#define IDirect3DRMFrame2_AddTransform(p,a,b)              (p)->lpVtbl->AddTransform(p,a,b)
#define IDirect3DRMFrame2_AddTranslation(p,a,b,c,d)        (p)->lpVtbl->AddTranslation(p,a,b,c,d)
#define IDirect3DRMFrame2_AddScale(p,a,b,c,d)              (p)->lpVtbl->AddScale(p,a,b,c,d)
#define IDirect3DRMFrame2_AddRotation(p,a,b,c,d,e)         (p)->lpVtbl->AddRotation(p,a,b,c,d,e)
#define IDirect3DRMFrame2_AddVisual(p,a)                   (p)->lpVtbl->AddVisual(p,a)
#define IDirect3DRMFrame2_GetChildren(p,a)                 (p)->lpVtbl->GetChildren(p,a)
#define IDirect3DRMFrame2_GetColor(p)                      (p)->lpVtbl->GetColor(p)
#define IDirect3DRMFrame2_GetLights(p,a)                   (p)->lpVtbl->GetLights(p,a)
#define IDirect3DRMFrame2_GetMaterialMode(p)               (p)->lpVtbl->GetMaterialMode(p)
#define IDirect3DRMFrame2_GetParent(p,a)                   (p)->lpVtbl->GetParent(p,a)
#define IDirect3DRMFrame2_GetPosition(p,a,b)               (p)->lpVtbl->GetPosition(p,a,b)
#define IDirect3DRMFrame2_GetRotation(p,a,b,c)             (p)->lpVtbl->GetRotation(p,a,b,c)
#define IDirect3DRMFrame2_GetScene(p,a)                    (p)->lpVtbl->GetScene(p,a)
#define IDirect3DRMFrame2_GetSortMode(p)                   (p)->lpVtbl->GetSortMode(p)
#define IDirect3DRMFrame2_GetTexture(p,a)                  (p)->lpVtbl->GetTexture(p,a)
#define IDirect3DRMFrame2_GetTransform(p,a)                (p)->lpVtbl->GetTransform(p,a)
#define IDirect3DRMFrame2_GetVelocity(p,a,b,c)             (p)->lpVtbl->GetVelocity(p,a,b,c)
#define IDirect3DRMFrame2_GetOrientation(p,a,b,c)          (p)->lpVtbl->GetOrientation(p,a,b,c)
#define IDirect3DRMFrame2_GetVisuals(p,a)                  (p)->lpVtbl->GetVisuals(p,a)
#define IDirect3DRMFrame2_GetTextureTopology(p,a,b)        (p)->lpVtbl->GetTextureTopology(p,a,b)
#define IDirect3DRMFrame2_InverseTransform(p,a,b)          (p)->lpVtbl->InverseTransform(p,a,b)
#define IDirect3DRMFrame2_Load(p,a,b,c,d,e)                (p)->lpVtbl->Load(p,a,b,c,d,e)
#define IDirect3DRMFrame2_LookAt(p,a,b,c)                  (p)->lpVtbl->LookAt(p,a,b,c)
#define IDirect3DRMFrame2_Move(p,a)                        (p)->lpVtbl->Move(p,a)
#define IDirect3DRMFrame2_DeleteChild(p,a)                 (p)->lpVtbl->DeleteChild(p,a)
#define IDirect3DRMFrame2_DeleteLight(p,a)                 (p)->lpVtbl->DeleteLight(p,a)
#define IDirect3DRMFrame2_DeleteMoveCallback(p,a,b)        (p)->lpVtbl->DeleteMoveCallback(p,a,b)
#define IDirect3DRMFrame2_DeleteVisual(p,a)                (p)->lpVtbl->DeleteVisual(p,a)
#define IDirect3DRMFrame2_GetSceneBackground(p)            (p)->lpVtbl->GetSceneBackground(p)
#define IDirect3DRMFrame2_GetSceneBackgroundDepth(p,a)     (p)->lpVtbl->GetSceneBackgroundDepth(p,a)
#define IDirect3DRMFrame2_GetSceneFogColor(p)              (p)->lpVtbl->GetSceneFogColor(p)
#define IDirect3DRMFrame2_GetSceneFogEnable(p)             (p)->lpVtbl->GetSceneFogEnable(p)
#define IDirect3DRMFrame2_GetSceneFogMode(p)               (p)->lpVtbl->GetSceneFogMode(p)
#define IDirect3DRMFrame2_GetSceneFogParams(p,a,b,c)       (p)->lpVtbl->GetSceneFogParams(p,a,b,c)
#define IDirect3DRMFrame2_SetSceneBackground(p,a)          (p)->lpVtbl->SetSceneBackground(p,a)
#define IDirect3DRMFrame2_SetSceneBackgroundRGB(p,a,b,c)   (p)->lpVtbl->SetSceneBackgroundRGB(p,a,b,c)
#define IDirect3DRMFrame2_SetSceneBackgroundDepth(p,a)     (p)->lpVtbl->SetSceneBackgroundDepth(p,a)
#define IDirect3DRMFrame2_SetSceneBackgroundImage(p,a)     (p)->lpVtbl->SetSceneBackgroundImage(p,a)
#define IDirect3DRMFrame2_SetSceneFogEnable(p,a)           (p)->lpVtbl->SetSceneFogEnable(p,a)
#define IDirect3DRMFrame2_SetSceneFogColor(p,a)            (p)->lpVtbl->SetSceneFogColor(p,a)
#define IDirect3DRMFrame2_SetSceneFogMode(p,a)             (p)->lpVtbl->SetSceneFogMode(p,a)
#define IDirect3DRMFrame2_SetSceneFogParams(p,a,b,c)       (p)->lpVtbl->SetSceneFogParams(p,a,b,c)
#define IDirect3DRMFrame2_SetColor(p,a)                    (p)->lpVtbl->SetColor(p,a)
#define IDirect3DRMFrame2_SetColorRGB(p,a,b,c)             (p)->lpVtbl->SetColorRGB(p,a,b,c)
#define IDirect3DRMFrame2_GetZbufferMode(p)                (p)->lpVtbl->GetZbufferMode(p)
#define IDirect3DRMFrame2_SetMaterialMode(p,a)             (p)->lpVtbl->SetMaterialMode(p,a)
#define IDirect3DRMFrame2_SetOrientation(p,a,b,c,d,e,f,g)  (p)->lpVtbl->SetOrientation(p,a,b,c,d,e,f,g)
#define IDirect3DRMFrame2_SetPosition(p,a,b,c,d)           (p)->lpVtbl->SetPosition(p,a,b,c,d)
#define IDirect3DRMFrame2_SetRotation(p,a,b,c,d,e)         (p)->lpVtbl->SetRotation(p,a,b,c,d,e)
#define IDirect3DRMFrame2_SetSortMode(p,a)                 (p)->lpVtbl->SetSortMode(p,a)
#define IDirect3DRMFrame2_SetTexture(p,a)                  (p)->lpVtbl->SetTexture(p,a)
#define IDirect3DRMFrame2_SetTextureTopology(p,a,b)        (p)->lpVtbl->SetTextureTopology(p,a,b)
#define IDirect3DRMFrame2_SetVelocity(p,a,b,c,d,e)         (p)->lpVtbl->SetVelocity(p,a,b,c,d,e)
#define IDirect3DRMFrame2_SetZbufferMode(p,a)              (p)->lpVtbl->SetZbufferMode(p,a)
#define IDirect3DRMFrame2_Transform(p,a,b)                 (p)->lpVtbl->Transform(p,a,b)
/*** IDirect3DRMFrame2 methods ***/
#define IDirect3DRMFrame2_AddMoveCallback2(p,a,b,c)        (p)->lpVtbl->AddMoveCallback2(p,a,b,c)
#define IDirect3DRMFrame2_GetBox(p,a)                      (p)->lpVtbl->GetBox(p,a)
#define IDirect3DRMFrame2_GetBoxEnable(p)                  (p)->lpVtbl->GetBoxEnable(p)
#define IDirect3DRMFrame2_GetAxes(p,a,b)                   (p)->lpVtbl->GetAxes(p,a,b)
#define IDirect3DRMFrame2_GetMaterial(p,a)                 (p)->lpVtbl->GetMaterial(p,a)
#define IDirect3DRMFrame2_GetInheritAxes(p,a,b)            (p)->lpVtbl->GetInheritAxes(p,a,b)
#define IDirect3DRMFrame2_GetHierarchyBox(p,a)             (p)->lpVtbl->GetHierarchyBox(p,a)
#define IDirect3DRMFrame2_SetBox(p,a)                      (p)->lpVtbl->SetBox(p,a)
#define IDirect3DRMFrame2_SetBoxEnable(p,a)                (p)->lpVtbl->SetBoxEnable(p,a)
#define IDirect3DRMFrame2_SetAxes(p,a,b,c,d,e,f)           (p)->lpVtbl->SetAxes(p,a,b,c,d,e,f)
#define IDirect3DRMFrame2_SetInheritAxes(p,a)              (p)->lpVtbl->SetInheritAxes(p,a)
#define IDirect3DRMFrame2_SetMaterial(p,a)                 (p)->lpVtbl->SetMaterial(p,a)
#define IDirect3DRMFrame2_SetQuaternion(p,a,b)             (p)->lpVtbl->SetQuaternion(p,a,b)
#define IDirect3DRMFrame2_RayPick(p,a,b,c,d)               (p)->lpVtbl->RayPick(p,a,b,c,d)
#define IDirect3DRMFrame2_Save(p,a,b,c)                    (p)->lpVtbl->Save(p,a,b,c)
#else
/*** IUnknown methods ***/
#define IDirect3DRMFrame2_QueryInterface(p,a,b)            (p)->QueryInterface(a,b)
#define IDirect3DRMFrame2_AddRef(p)                        (p)->AddRef()
#define IDirect3DRMFrame2_Release(p)                       (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMFrame2_Clone(p,a,b,c)                   (p)->Clone(a,b,c)
#define IDirect3DRMFrame2_AddDestroyCallback(p,a,b)        (p)->AddDestroyCallback(a,b)
#define IDirect3DRMFrame2_DeleteDestroyCallback(p,a,b)     (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMFrame2_SetAppData(p,a)                  (p)->SetAppData(a)
#define IDirect3DRMFrame2_GetAppData(p)                    (p)->GetAppData()
#define IDirect3DRMFrame2_SetName(p,a)                     (p)->SetName(a)
#define IDirect3DRMFrame2_GetName(p,a,b)                   (p)->GetName(a,b)
#define IDirect3DRMFrame2_GetClassName(p,a,b)              (p)->GetClassName(a,b)
/*** IDirect3DRMFrame methods ***/
#define IDirect3DRMFrame2_AddChild(p,a)                    (p)->AddChild(a)
#define IDirect3DRMFrame2_AddLight(p,a)                    (p)->AddLight(a)
#define IDirect3DRMFrame2_AddMoveCallback(p,a,b)           (p)->AddMoveCallback(a,b)
#define IDirect3DRMFrame2_AddTransform(p,a,b)              (p)->AddTransform(a,b)
#define IDirect3DRMFrame2_AddTranslation(p,a,b,c,d)        (p)->AddTranslation(a,b,c,d)
#define IDirect3DRMFrame2_AddScale(p,a,b,c,d)              (p)->AddScale(a,b,c,d)
#define IDirect3DRMFrame2_AddRotation(p,a,b,c,d,e)         (p)->AddRotation(a,b,c,d,e)
#define IDirect3DRMFrame2_AddVisual(p,a)                   (p)->AddVisual(a)
#define IDirect3DRMFrame2_GetChildren(p,a)                 (p)->GetChildren(a)
#define IDirect3DRMFrame2_GetColor(p)                      (p)->GetColor()
#define IDirect3DRMFrame2_GetLights(p,a)                   (p)->GetLights(a)
#define IDirect3DRMFrame2_GetMaterialMode(p)               (p)->GetMaterialMode()
#define IDirect3DRMFrame2_GetParent(p,a)                   (p)->GetParent(a)
#define IDirect3DRMFrame2_GetPosition(p,a,b)               (p)->GetPosition(a,b)
#define IDirect3DRMFrame2_GetRotation(p,a,b,c)             (p)->GetRotation(a,b,c)
#define IDirect3DRMFrame2_GetScene(p,a)                    (p)->GetScene(a)
#define IDirect3DRMFrame2_GetSortMode(p)                   (p)->GetSortMode()
#define IDirect3DRMFrame2_GetTexture(p,a)                  (p)->GetTexture(a)
#define IDirect3DRMFrame2_GetTransform(p,a)                (p)->GetTransform(a)
#define IDirect3DRMFrame2_GetVelocity(p,a,b,c)             (p)->GetVelocity(a,b,c)
#define IDirect3DRMFrame2_GetOrientation(p,a,b,c)          (p)->GetOrientation(a,b,c)
#define IDirect3DRMFrame2_GetVisuals(p,a)                  (p)->GetVisuals(a)
#define IDirect3DRMFrame2_GetTextureTopology(p,a,b)        (p)->GetTextureTopology(a,b)
#define IDirect3DRMFrame2_InverseTransform(p,a,b)          (p)->InverseTransform(a,b)
#define IDirect3DRMFrame2_Load(p,a,b,c,d,e)                (p)->Load(a,b,c,d,e)
#define IDirect3DRMFrame2_LookAt(p,a,b,c)                  (p)->LookAt(a,b,c)
#define IDirect3DRMFrame2_Move(p,a)                        (p)->Move(a)
#define IDirect3DRMFrame2_DeleteChild(p,a)                 (p)->DeleteChild(a)
#define IDirect3DRMFrame2_DeleteLight(p,a)                 (p)->DeleteLight(a)
#define IDirect3DRMFrame2_DeleteMoveCallback(p,a,b)        (p)->DeleteMoveCallback(a,b)
#define IDirect3DRMFrame2_DeleteVisual(p,a)                (p)->DeleteVisual(a)
#define IDirect3DRMFrame2_GetSceneBackground(p)            (p)->GetSceneBackground()
#define IDirect3DRMFrame2_GetSceneBackgroundDepth(p,a)     (p)->GetSceneBackgroundDepth(a)
#define IDirect3DRMFrame2_GetSceneFogColor(p)              (p)->GetSceneFogColor()
#define IDirect3DRMFrame2_GetSceneFogEnable(p)             (p)->GetSceneFogEnable()
#define IDirect3DRMFrame2_GetSceneFogMode(p)               (p)->GetSceneFogMode()
#define IDirect3DRMFrame2_GetSceneFogParams(p,a,b,c)       (p)->GetSceneFogParams(a,b,c)
#define IDirect3DRMFrame2_SetSceneBackground(p,a)          (p)->SetSceneBackground(a)
#define IDirect3DRMFrame2_SetSceneBackgroundRGB(p,a,b,c)   (p)->SetSceneBackgroundRGB(a,b,c)
#define IDirect3DRMFrame2_SetSceneBackgroundDepth(p,a)     (p)->SetSceneBackgroundDepth(a)
#define IDirect3DRMFrame2_SetSceneBackgroundImage(p,a)     (p)->SetSceneBackgroundImage(a)
#define IDirect3DRMFrame2_SetSceneFogEnable(p,a)           (p)->SetSceneFogEnable(a)
#define IDirect3DRMFrame2_SetSceneFogColor(p,a)            (p)->SetSceneFogColor(a)
#define IDirect3DRMFrame2_SetSceneFogMode(p,a)             (p)->SetSceneFogMode(a)
#define IDirect3DRMFrame2_SetSceneFogParams(p,a,b,c)       (p)->SetSceneFogParams(a,b,c)
#define IDirect3DRMFrame2_SetColor(p,a)                    (p)->SetColor(a)
#define IDirect3DRMFrame2_SetColorRGB(p,a,b,c)             (p)->SetColorRGB(a,b,c)
#define IDirect3DRMFrame2_GetZbufferMode(p)                (p)->GetZbufferMode()
#define IDirect3DRMFrame2_SetMaterialMode(p,a)             (p)->SetMaterialMode(a)
#define IDirect3DRMFrame2_SetOrientation(p,a,b,c,d,e,f,g)  (p)->SetOrientation(a,b,c,d,e,f,g)
#define IDirect3DRMFrame2_SetPosition(p,a,b,c,d)           (p)->SetPosition(a,b,c,d)
#define IDirect3DRMFrame2_SetRotation(p,a,b,c,d,e)         (p)->SetRotation(a,b,c,d,e)
#define IDirect3DRMFrame2_SetSortMode(p,a)                 (p)->SetSortMode(a)
#define IDirect3DRMFrame2_SetTexture(p,a)                  (p)->SetTexture(a)
#define IDirect3DRMFrame2_SetTextureTopology(p,a,b)        (p)->SetTextureTopology(a,b)
#define IDirect3DRMFrame2_SetVelocity(p,a,b,c,d,e)         (p)->SetVelocity(a,b,c,d,e)
#define IDirect3DRMFrame2_SetZbufferMode(p,a)              (p)->SetZbufferMode(a)
#define IDirect3DRMFrame2_Transform(p,a,b)                 (p)->Transform(a,b)
/*** IDirect3DRMFrame2 methods ***/
#define IDirect3DRMFrame2_AddMoveCallback2(p,a,b,c)        (p)->AddMoveCallback2(a,b,c)
#define IDirect3DRMFrame2_GetBox(p,a)                      (p)->GetBox(a)
#define IDirect3DRMFrame2_GetBoxEnable(p)                  (p)->GetBoxEnable()
#define IDirect3DRMFrame2_GetAxes(p,a,b)                   (p)->GetAxes(a,b)
#define IDirect3DRMFrame2_GetMaterial(p,a)                 (p)->GetMaterial(a)
#define IDirect3DRMFrame2_GetInheritAxes(p,a,b)            (p)->GetInheritAxes(a,b)
#define IDirect3DRMFrame2_GetHierarchyBox(p,a)             (p)->GetHierarchyBox(a)
#define IDirect3DRMFrame2_SetBox(p,a)                      (p)->SetBox(a)
#define IDirect3DRMFrame2_SetBoxEnable(p,a)                (p)->SetBoxEnable(a)
#define IDirect3DRMFrame2_SetAxes(p,a,b,c,d,e,f)           (p)->SetAxes(a,b,c,d,e,f)
#define IDirect3DRMFrame2_SetInheritAxes(p,a)              (p)->SetInheritAxes(a)
#define IDirect3DRMFrame2_SetMaterial(p,a)                 (p)->SetMaterial(a)
#define IDirect3DRMFrame2_SetQuaternion(p,a,b)             (p)->SetQuaternion(a,b)
#define IDirect3DRMFrame2_RayPick(p,a,b,c,d)               (p)->RayPick(a,b,c,d)
#define IDirect3DRMFrame2_Save(p,a,b,c)                    (p)->Save(a,b,c)
#endif

/*****************************************************************************
 * IDirect3DRMFrame3 interface
 */
#define SDL_INTERFACE IDirect3DRMFrame3
SDL_DECLARE_INTERFACE_(IDirect3DRMFrame3,IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMFrame3 methods ***/
    SDL_STDMETHOD(AddChild)(SDL_THIS_ IDirect3DRMFrame3 *child) SDL_PURE;
    SDL_STDMETHOD(AddLight)(SDL_THIS_ struct IDirect3DRMLight *light) SDL_PURE;
    SDL_STDMETHOD(AddMoveCallback)(SDL_THIS_ D3DRMFRAME3MOVECALLBACK cb, void *ctx, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(AddTransform)(SDL_THIS_ D3DRMCOMBINETYPE, D3DRMMATRIX4D) SDL_PURE;
    SDL_STDMETHOD(AddTranslation)(SDL_THIS_ D3DRMCOMBINETYPE, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(AddScale)(SDL_THIS_ D3DRMCOMBINETYPE, D3DVALUE sx, D3DVALUE sy, D3DVALUE sz) SDL_PURE;
    SDL_STDMETHOD(AddRotation)(SDL_THIS_ D3DRMCOMBINETYPE, D3DVALUE x, D3DVALUE y, D3DVALUE z, D3DVALUE theta) SDL_PURE;
    SDL_STDMETHOD(AddVisual)(SDL_THIS_ IUnknown *visual) SDL_PURE;
    SDL_STDMETHOD(GetChildren)(SDL_THIS_ struct IDirect3DRMFrameArray **children) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetColor)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetLights)(SDL_THIS_ struct IDirect3DRMLightArray **lights) SDL_PURE;
    SDL_STDMETHOD_(D3DRMMATERIALMODE, GetMaterialMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetParent)(SDL_THIS_ IDirect3DRMFrame3 **parent) SDL_PURE;
    SDL_STDMETHOD(GetPosition)(SDL_THIS_ IDirect3DRMFrame3 *reference, D3DVECTOR *return_position) SDL_PURE;
    SDL_STDMETHOD(GetRotation)(SDL_THIS_ IDirect3DRMFrame3 *reference, D3DVECTOR *axis, D3DVALUE *return_theta) SDL_PURE;
    SDL_STDMETHOD(GetScene)(SDL_THIS_ IDirect3DRMFrame3 **scene) SDL_PURE;
    SDL_STDMETHOD_(D3DRMSORTMODE, GetSortMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetTexture)(SDL_THIS_ struct IDirect3DRMTexture3 **texture) SDL_PURE;
    SDL_STDMETHOD(GetTransform)(SDL_THIS_ IDirect3DRMFrame3 *reference, D3DRMMATRIX4D matrix) SDL_PURE;
    SDL_STDMETHOD(GetVelocity)(SDL_THIS_ IDirect3DRMFrame3 *reference, D3DVECTOR *return_velocity, SDL_BOOL with_rotation) SDL_PURE;
    SDL_STDMETHOD(GetOrientation)(SDL_THIS_ IDirect3DRMFrame3 *reference, D3DVECTOR *dir, D3DVECTOR *up) SDL_PURE;
    SDL_STDMETHOD(GetVisuals)(SDL_THIS_ SDL_DWORD *count, IUnknown **visuals) SDL_PURE;
    SDL_STDMETHOD(InverseTransform)(SDL_THIS_ D3DVECTOR *d, D3DVECTOR *s) SDL_PURE;
    SDL_STDMETHOD(Load)(SDL_THIS_ void *filename, void *name, D3DRMLOADOPTIONS flags,
            D3DRMLOADTEXTURE3CALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(LookAt)(SDL_THIS_ IDirect3DRMFrame3 *target, IDirect3DRMFrame3 *reference,
            D3DRMFRAMECONSTRAINT constraint) SDL_PURE;
    SDL_STDMETHOD(Move)(SDL_THIS_ D3DVALUE delta) SDL_PURE;
    SDL_STDMETHOD(DeleteChild)(SDL_THIS_ IDirect3DRMFrame3 *child) SDL_PURE;
    SDL_STDMETHOD(DeleteLight)(SDL_THIS_ struct IDirect3DRMLight *light) SDL_PURE;
    SDL_STDMETHOD(DeleteMoveCallback)(SDL_THIS_ D3DRMFRAME3MOVECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteVisual)(SDL_THIS_ IUnknown *visual) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetSceneBackground)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetSceneBackgroundDepth)(SDL_THIS_ IDirectDrawSurface **surface) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetSceneFogColor)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetSceneFogEnable)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMFOGMODE, GetSceneFogMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetSceneFogParams)(SDL_THIS_ D3DVALUE *return_start, D3DVALUE *return_end,
        D3DVALUE *return_density) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackground)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackgroundRGB)(SDL_THIS_ D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackgroundDepth)(SDL_THIS_ IDirectDrawSurface *surface) SDL_PURE;
    SDL_STDMETHOD(SetSceneBackgroundImage)(SDL_THIS_ struct IDirect3DRMTexture3 *texture) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogEnable)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogMode)(SDL_THIS_ D3DRMFOGMODE) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogParams)(SDL_THIS_ D3DVALUE start, D3DVALUE end, D3DVALUE density) SDL_PURE;
    SDL_STDMETHOD(SetColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetColorRGB)(SDL_THIS_ D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD_(D3DRMZBUFFERMODE, GetZbufferMode)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetMaterialMode)(SDL_THIS_ D3DRMMATERIALMODE) SDL_PURE;
    SDL_STDMETHOD(SetOrientation)(SDL_THIS_ IDirect3DRMFrame3 *reference, D3DVALUE dx, D3DVALUE dy, D3DVALUE dz,
            D3DVALUE ux, D3DVALUE uy, D3DVALUE uz) SDL_PURE;
    SDL_STDMETHOD(SetPosition)(SDL_THIS_ IDirect3DRMFrame3 *reference, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(SetRotation)(SDL_THIS_ IDirect3DRMFrame3 *reference,
            D3DVALUE x, D3DVALUE y, D3DVALUE z, D3DVALUE theta) SDL_PURE;
    SDL_STDMETHOD(SetSortMode)(SDL_THIS_ D3DRMSORTMODE) SDL_PURE;
    SDL_STDMETHOD(SetTexture)(SDL_THIS_ struct IDirect3DRMTexture3 *texture) SDL_PURE;
    SDL_STDMETHOD(SetVelocity)(SDL_THIS_ IDirect3DRMFrame3 *reference,
            D3DVALUE x, D3DVALUE y, D3DVALUE z, SDL_BOOL with_rotation) SDL_PURE;
    SDL_STDMETHOD(SetZbufferMode)(SDL_THIS_ D3DRMZBUFFERMODE) SDL_PURE;
    SDL_STDMETHOD(Transform)(SDL_THIS_ D3DVECTOR *d, D3DVECTOR *s) SDL_PURE;
    SDL_STDMETHOD(GetBox)(SDL_THIS_ D3DRMBOX *box) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetBoxEnable)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetAxes)(SDL_THIS_ D3DVECTOR *dir, D3DVECTOR *up);
    SDL_STDMETHOD(GetMaterial)(SDL_THIS_ struct IDirect3DRMMaterial2 **material) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetInheritAxes)(SDL_THIS);
    SDL_STDMETHOD(GetHierarchyBox)(SDL_THIS_ D3DRMBOX *box) SDL_PURE;
    SDL_STDMETHOD(SetBox)(SDL_THIS_ D3DRMBOX *box) SDL_PURE;
    SDL_STDMETHOD(SetBoxEnable)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetAxes)(SDL_THIS_ D3DVALUE dx, D3DVALUE dy, D3DVALUE dz, D3DVALUE ux, D3DVALUE uy, D3DVALUE uz);
    SDL_STDMETHOD(SetInheritAxes)(SDL_THIS_ SDL_BOOL inherit_from_parent);
    SDL_STDMETHOD(SetMaterial)(SDL_THIS_ struct IDirect3DRMMaterial2 *material) SDL_PURE;
    SDL_STDMETHOD(SetQuaternion)(SDL_THIS_ IDirect3DRMFrame3 *reference, D3DRMQUATERNION *q) SDL_PURE;
    SDL_STDMETHOD(RayPick)(SDL_THIS_ IDirect3DRMFrame3 *reference, D3DRMRAY *ray, SDL_DWORD flags,
            struct IDirect3DRMPicked2Array **return_visuals) SDL_PURE;
    SDL_STDMETHOD(Save)(SDL_THIS_ const char *filename, D3DRMXOFFORMAT format, D3DRMSAVEOPTIONS flags);
    SDL_STDMETHOD(TransformVectors)(SDL_THIS_ IDirect3DRMFrame3 *reference, SDL_DWORD vector_count,
            D3DVECTOR *dst_vectors, D3DVECTOR *src_vectors) SDL_PURE;
    SDL_STDMETHOD(InverseTransformVectors)(SDL_THIS_ IDirect3DRMFrame3 *reference, SDL_DWORD vector_count,
            D3DVECTOR *dst_vectors, D3DVECTOR *src_vectors) SDL_PURE;
    SDL_STDMETHOD(SetTraversalOptions)(SDL_THIS_ SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(GetTraversalOptions)(SDL_THIS_ SDL_DWORD *flags) SDL_PURE;
    SDL_STDMETHOD(SetSceneFogMethod)(SDL_THIS_ SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(GetSceneFogMethod)(SDL_THIS_ SDL_DWORD *fog_mode) SDL_PURE;
    SDL_STDMETHOD(SetMaterialOverride)(SDL_THIS_ D3DRMMATERIALOVERRIDE *override) SDL_PURE;
    SDL_STDMETHOD(GetMaterialOverride)(SDL_THIS_ D3DRMMATERIALOVERRIDE *override) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMFrame3_QueryInterface(p,a,b)              (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMFrame3_AddRef(p)                          (p)->lpVtbl->AddRef(p)
#define IDirect3DRMFrame3_Release(p)                         (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMFrame3_Clone(p,a,b,c)                     (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMFrame3_AddDestroyCallback(p,a,b)          (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMFrame3_DeleteDestroyCallback(p,a,b)       (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMFrame3_SetAppData(p,a)                    (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMFrame3_GetAppData(p)                      (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMFrame3_SetName(p,a)                       (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMFrame3_GetName(p,a,b)                     (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMFrame3_GetClassName(p,a,b)                (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMFrame3 methods ***/
#define IDirect3DRMFrame3_AddChild(p,a)                      (p)->lpVtbl->AddChild(p,a)
#define IDirect3DRMFrame3_AddLight(p,a)                      (p)->lpVtbl->AddLight(p,a)
#define IDirect3DRMFrame3_AddMoveCallback(p,a,b,c)           (p)->lpVtbl->AddMoveCallback(p,a,b,c)
#define IDirect3DRMFrame3_AddTransform(p,a,b)                (p)->lpVtbl->AddTransform(p,a,b)
#define IDirect3DRMFrame3_AddTranslation(p,a,b,c,d)          (p)->lpVtbl->AddTranslation(p,a,b,c,d)
#define IDirect3DRMFrame3_AddScale(p,a,b,c,d)                (p)->lpVtbl->AddScale(p,a,b,c,d)
#define IDirect3DRMFrame3_AddRotation(p,a,b,c,d,e)           (p)->lpVtbl->AddRotation(p,a,b,c,d,e)
#define IDirect3DRMFrame3_AddVisual(p,a)                     (p)->lpVtbl->AddVisual(p,a)
#define IDirect3DRMFrame3_GetChildren(p,a)                   (p)->lpVtbl->GetChildren(p,a)
#define IDirect3DRMFrame3_GetColor(p)                        (p)->lpVtbl->GetColor(p)
#define IDirect3DRMFrame3_GetLights(p,a)                     (p)->lpVtbl->GetLights(p,a)
#define IDirect3DRMFrame3_GetMaterialMode(p)                 (p)->lpVtbl->GetMaterialMode(p)
#define IDirect3DRMFrame3_GetParent(p,a)                     (p)->lpVtbl->GetParent(p,a)
#define IDirect3DRMFrame3_GetPosition(p,a,b)                 (p)->lpVtbl->GetPosition(p,a,b)
#define IDirect3DRMFrame3_GetRotation(p,a,b,c)               (p)->lpVtbl->GetRotation(p,a,b,c)
#define IDirect3DRMFrame3_GetScene(p,a)                      (p)->lpVtbl->GetScene(p,a)
#define IDirect3DRMFrame3_GetSortMode(p)                     (p)->lpVtbl->GetSortMode(p)
#define IDirect3DRMFrame3_GetTexture(p,a)                    (p)->lpVtbl->GetTexture(p,a)
#define IDirect3DRMFrame3_GetTransform(p,a,b)                (p)->lpVtbl->GetTransform(p,a,b)
#define IDirect3DRMFrame3_GetVelocity(p,a,b,c)               (p)->lpVtbl->GetVelocity(p,a,b,c)
#define IDirect3DRMFrame3_GetOrientation(p,a,b,c)            (p)->lpVtbl->GetOrientation(p,a,b,c)
#define IDirect3DRMFrame3_GetVisuals(p,a,b)                  (p)->lpVtbl->GetVisuals(p,a,b)
#define IDirect3DRMFrame3_InverseTransform(p,a,b)            (p)->lpVtbl->InverseTransform(p,a,b)
#define IDirect3DRMFrame3_Load(p,a,b,c,d,e)                  (p)->lpVtbl->Load(p,a,b,c,d,e)
#define IDirect3DRMFrame3_LookAt(p,a,b,c)                    (p)->lpVtbl->LookAt(p,a,b,c)
#define IDirect3DRMFrame3_Move(p,a)                          (p)->lpVtbl->Move(p,a)
#define IDirect3DRMFrame3_DeleteChild(p,a)                   (p)->lpVtbl->DeleteChild(p,a)
#define IDirect3DRMFrame3_DeleteLight(p,a)                   (p)->lpVtbl->DeleteLight(p,a)
#define IDirect3DRMFrame3_DeleteMoveCallback(p,a,b)          (p)->lpVtbl->DeleteMoveCallback(p,a,b)
#define IDirect3DRMFrame3_DeleteVisual(p,a)                  (p)->lpVtbl->DeleteVisual(p,a)
#define IDirect3DRMFrame3_GetSceneBackground(p)              (p)->lpVtbl->GetSceneBackground(p)
#define IDirect3DRMFrame3_GetSceneBackgroundDepth(p,a)       (p)->lpVtbl->GetSceneBackgroundDepth(p,a)
#define IDirect3DRMFrame3_GetSceneFogColor(p)                (p)->lpVtbl->GetSceneFogColor(p)
#define IDirect3DRMFrame3_GetSceneFogEnable(p)               (p)->lpVtbl->GetSceneFogEnable(p)
#define IDirect3DRMFrame3_GetSceneFogMode(p)                 (p)->lpVtbl->GetSceneFogMode(p)
#define IDirect3DRMFrame3_GetSceneFogParams(p,a,b,c)         (p)->lpVtbl->GetSceneFogParams(p,a,b,c)
#define IDirect3DRMFrame3_SetSceneBackground(p,a)            (p)->lpVtbl->SetSceneBackground(p,a)
#define IDirect3DRMFrame3_SetSceneBackgroundRGB(p,a,b,c)     (p)->lpVtbl->SetSceneBackgroundRGB(p,a,b,c)
#define IDirect3DRMFrame3_SetSceneBackgroundDepth(p,a)       (p)->lpVtbl->SetSceneBackgroundDepth(p,a)
#define IDirect3DRMFrame3_SetSceneBackgroundImage(p,a)       (p)->lpVtbl->SetSceneBackgroundImage(p,a)
#define IDirect3DRMFrame3_SetSceneFogEnable(p,a)             (p)->lpVtbl->SetSceneFogEnable(p,a)
#define IDirect3DRMFrame3_SetSceneFogColor(p,a)              (p)->lpVtbl->SetSceneFogColor(p,a)
#define IDirect3DRMFrame3_SetSceneFogMode(p,a)               (p)->lpVtbl->SetSceneFogMode(p,a)
#define IDirect3DRMFrame3_SetSceneFogParams(p,a,b,c)         (p)->lpVtbl->SetSceneFogParams(p,a,b,c)
#define IDirect3DRMFrame3_SetColor(p,a)                      (p)->lpVtbl->SetColor(p,a)
#define IDirect3DRMFrame3_SetColorRGB(p,a,b,c)               (p)->lpVtbl->SetColorRGB(p,a,b,c)
#define IDirect3DRMFrame3_GetZbufferMode(p)                  (p)->lpVtbl->GetZbufferMode(p)
#define IDirect3DRMFrame3_SetMaterialMode(p,a)               (p)->lpVtbl->SetMaterialMode(p,a)
#define IDirect3DRMFrame3_SetOrientation(p,a,b,c,d,e,f,g)    (p)->lpVtbl->SetOrientation(p,a,b,c,d,e,f,g)
#define IDirect3DRMFrame3_SetPosition(p,a,b,c,d)             (p)->lpVtbl->SetPosition(p,a,b,c,d)
#define IDirect3DRMFrame3_SetRotation(p,a,b,c,d,e)           (p)->lpVtbl->SetRotation(p,a,b,c,d,e)
#define IDirect3DRMFrame3_SetSortMode(p,a)                   (p)->lpVtbl->SetSortMode(p,a)
#define IDirect3DRMFrame3_SetTexture(p,a)                    (p)->lpVtbl->SetTexture(p,a)
#define IDirect3DRMFrame3_SetVelocity(p,a,b,c,d,e)           (p)->lpVtbl->SetVelocity(p,a,b,c,d,e)
#define IDirect3DRMFrame3_SetZbufferMode(p,a)                (p)->lpVtbl->SetZbufferMode(p,a)
#define IDirect3DRMFrame3_Transform(p,a,b)                   (p)->lpVtbl->Transform(p,a,b)
#define IDirect3DRMFrame3_GetBox(p,a)                        (p)->lpVtbl->GetBox(p,a)
#define IDirect3DRMFrame3_GetBoxEnable(p)                    (p)->lpVtbl->GetBoxEnable(p)
#define IDirect3DRMFrame3_GetAxes(p,a,b)                     (p)->lpVtbl->GetAxes(p,a,b)
#define IDirect3DRMFrame3_GetMaterial(p,a)                   (p)->lpVtbl->GetMaterial(p,a)
#define IDirect3DRMFrame3_GetInheritAxes(p)                  (p)->lpVtbl->GetInheritAxes(p)
#define IDirect3DRMFrame3_GetHierarchyBox(p,a)               (p)->lpVtbl->GetHierarchyBox(p,a)
#define IDirect3DRMFrame3_SetBox(p,a)                        (p)->lpVtbl->SetBox(p,a)
#define IDirect3DRMFrame3_SetBoxEnable(p,a)                  (p)->lpVtbl->SetBoxEnable(p,a)
#define IDirect3DRMFrame3_SetAxes(p,a,b,c,d,e,f)             (p)->lpVtbl->SetAxes(p,a,b,c,d,e,f)
#define IDirect3DRMFrame3_SetInheritAxes(p,a)                (p)->lpVtbl->SetInheritAxes(p,a)
#define IDirect3DRMFrame3_SetMaterial(p,a)                   (p)->lpVtbl->SetMaterial(p,a)
#define IDirect3DRMFrame3_SetQuaternion(p,a,b)               (p)->lpVtbl->SetQuaternion(p,a,b)
#define IDirect3DRMFrame3_RayPick(p,a,b,c,d)                 (p)->lpVtbl->RayPick(p,a,b,c,d)
#define IDirect3DRMFrame3_Save(p,a,b,c)                      (p)->lpVtbl->Save(p,a,b,c)
#define IDirect3DRMFrame3_TransformVectors(p,a,b,c,d)        (p)->lpVtbl->TransformVectors(p,a,b,c,d)
#define IDirect3DRMFrame3_InverseTransformVectors(p,a,b,c,d) (p)->lpVtbl->InverseTransformVectors(p,a,b,c,d)
#define IDirect3DRMFrame3_SetTraversalOptions(p,a)           (p)->lpVtbl->SetTraversalOptions(p,a)
#define IDirect3DRMFrame3_GetTraversalOptions(p,a)           (p)->lpVtbl->GetTraversalOptions(p,a)
#define IDirect3DRMFrame3_SetSceneFogMethod(p,a)             (p)->lpVtbl->SetSceneFogMethod(p,a)
#define IDirect3DRMFrame3_GetSceneFogMethod(p,a)             (p)->lpVtbl->GetSceneFogMethod(p,a)
#define IDirect3DRMFrame3_SetMaterialOverride(p,a)           (p)->lpVtbl->SetMaterialOverride(p,a)
#define IDirect3DRMFrame3_GetMaterialOverride(p,a)           (p)->lpVtbl->GetMaterialOverride(p,a)
#else
/*** IUnknown methods ***/
#define IDirect3DRMFrame3_QueryInterface(p,a,b)              (p)->QueryInterface(a,b)
#define IDirect3DRMFrame3_AddRef(p)                          (p)->AddRef()
#define IDirect3DRMFrame3_Release(p)                         (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMFrame3_Clone(p,a,b,c)                     (p)->Clone(a,b,c)
#define IDirect3DRMFrame3_AddDestroyCallback(p,a,b)          (p)->AddDestroyCallback(a,b)
#define IDirect3DRMFrame3_DeleteDestroyCallback(p,a,b)       (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMFrame3_SetAppData(p,a)                    (p)->SetAppData(a)
#define IDirect3DRMFrame3_GetAppData(p)                      (p)->GetAppData()
#define IDirect3DRMFrame3_SetName(p,a)                       (p)->SetName(a)
#define IDirect3DRMFrame3_GetName(p,a,b)                     (p)->GetName(a,b)
#define IDirect3DRMFrame3_GetClassName(p,a,b)                (p)->GetClassName(a,b)
/*** IDirect3DRMFrame3 methods ***/
#define IDirect3DRMFrame3_AddChild(p,a)                      (p)->AddChild(a)
#define IDirect3DRMFrame3_AddLight(p,a)                      (p)->AddLight(a)
#define IDirect3DRMFrame3_AddMoveCallback(p,a,b,c)           (p)->AddMoveCallback(a,b,c)
#define IDirect3DRMFrame3_AddTransform(p,a,b)                (p)->AddTransform(a,b)
#define IDirect3DRMFrame3_AddTranslation(p,a,b,c,d)          (p)->AddTranslation(a,b,c,d)
#define IDirect3DRMFrame3_AddScale(p,a,b,c,d)                (p)->AddScale(a,b,c,d)
#define IDirect3DRMFrame3_AddRotation(p,a,b,c,d,e)           (p)->AddRotation(a,b,c,d,e)
#define IDirect3DRMFrame3_AddVisual(p,a)                     (p)->AddVisual(a)
#define IDirect3DRMFrame3_GetChildren(p,a)                   (p)->GetChildren(a)
#define IDirect3DRMFrame3_GetColor(p)                        (p)->GetColor()
#define IDirect3DRMFrame3_GetLights(p,a)                     (p)->GetLights(a)
#define IDirect3DRMFrame3_GetMaterialMode(p)                 (p)->GetMaterialMode()
#define IDirect3DRMFrame3_GetParent(p,a)                     (p)->GetParent(a)
#define IDirect3DRMFrame3_GetPosition(p,a,b)                 (p)->GetPosition(a,b)
#define IDirect3DRMFrame3_GetRotation(p,a,b,c)               (p)->GetRotation(a,b,c)
#define IDirect3DRMFrame3_GetScene(p,a)                      (p)->GetScene(a)
#define IDirect3DRMFrame3_GetSortMode(p)                     (p)->GetSortMode()
#define IDirect3DRMFrame3_GetTexture(p,a)                    (p)->GetTexture(a)
#define IDirect3DRMFrame3_GetTransform(p,a,b)                (p)->GetTransform(a,b)
#define IDirect3DRMFrame3_GetVelocity(p,a,b,c)               (p)->GetVelocity(a,b,c)
#define IDirect3DRMFrame3_GetOrientation(p,a,b,c)            (p)->GetOrientation(a,b,c)
#define IDirect3DRMFrame3_GetVisuals(p,a,b)                  (p)->GetVisuals(a,b)
#define IDirect3DRMFrame3_InverseTransform(p,a,b)            (p)->InverseTransform(a,b)
#define IDirect3DRMFrame3_Load(p,a,b,c,d,e)                  (p)->Load(a,b,c,d,e)
#define IDirect3DRMFrame3_LookAt(p,a,b,c)                    (p)->LookAt(a,b,c)
#define IDirect3DRMFrame3_Move(p,a)                          (p)->Move(a)
#define IDirect3DRMFrame3_DeleteChild(p,a)                   (p)->DeleteChild(a)
#define IDirect3DRMFrame3_DeleteLight(p,a)                   (p)->DeleteLight(a)
#define IDirect3DRMFrame3_DeleteMoveCallback(p,a,b)          (p)->DeleteMoveCallback(a,b)
#define IDirect3DRMFrame3_DeleteVisual(p,a)                  (p)->DeleteVisual(a)
#define IDirect3DRMFrame3_GetSceneBackground(p)              (p)->GetSceneBackground()
#define IDirect3DRMFrame3_GetSceneBackgroundDepth(p,a)       (p)->GetSceneBackgroundDepth(a)
#define IDirect3DRMFrame3_GetSceneFogColor(p)                (p)->GetSceneFogColor()
#define IDirect3DRMFrame3_GetSceneFogEnable(p)               (p)->GetSceneFogEnable()
#define IDirect3DRMFrame3_GetSceneFogMode(p)                 (p)->GetSceneFogMode()
#define IDirect3DRMFrame3_GetSceneFogParams(p,a,b,c)         (p)->GetSceneFogParams(a,b,c)
#define IDirect3DRMFrame3_SetSceneBackground(p,a)            (p)->SetSceneBackground(a)
#define IDirect3DRMFrame3_SetSceneBackgroundRGB(p,a,b,c)     (p)->SetSceneBackgroundRGB(a,b,c)
#define IDirect3DRMFrame3_SetSceneBackgroundDepth(p,a)       (p)->SetSceneBackgroundDepth(a)
#define IDirect3DRMFrame3_SetSceneBackgroundImage(p,a)       (p)->SetSceneBackgroundImage(a)
#define IDirect3DRMFrame3_SetSceneFogEnable(p,a)             (p)->SetSceneFogEnable(a)
#define IDirect3DRMFrame3_SetSceneFogColor(p,a)              (p)->SetSceneFogColor(a)
#define IDirect3DRMFrame3_SetSceneFogMode(p,a)               (p)->SetSceneFogMode(a)
#define IDirect3DRMFrame3_SetSceneFogParams(p,a,b,c)         (p)->SetSceneFogParams(a,b,c)
#define IDirect3DRMFrame3_SetColor(p,a)                      (p)->SetColor(a)
#define IDirect3DRMFrame3_SetColorRGB(p,a,b,c)               (p)->SetColorRGB(a,b,c)
#define IDirect3DRMFrame3_GetZbufferMode(p)                  (p)->GetZbufferMode()
#define IDirect3DRMFrame3_SetMaterialMode(p,a)               (p)->SetMaterialMode(a)
#define IDirect3DRMFrame3_SetOrientation(p,a,b,c,d,e,f,g)    (p)->SetOrientation(a,b,c,d,e,f,g)
#define IDirect3DRMFrame3_SetPosition(p,a,b,c,d)             (p)->SetPosition(a,b,c,d)
#define IDirect3DRMFrame3_SetRotation(p,a,b,c,d,e)           (p)->SetRotation(a,b,c,d,e)
#define IDirect3DRMFrame3_SetSortMode(p,a)                   (p)->SetSortMode(a)
#define IDirect3DRMFrame3_SetTexture(p,a)                    (p)->SetTexture(a)
#define IDirect3DRMFrame3_SetVelocity(p,a,b,c,d,e)           (p)->SetVelocity(a,b,c,d,e)
#define IDirect3DRMFrame3_SetZbufferMode(p,a)                (p)->SetZbufferMode(a)
#define IDirect3DRMFrame3_Transform(p,a,b)                   (p)->Transform(a,b)
#define IDirect3DRMFrame3_GetBox(p,a)                        (p)->GetBox(a)
#define IDirect3DRMFrame3_GetBoxEnable(p)                    (p)->GetBoxEnable()
#define IDirect3DRMFrame3_GetAxes(p,a,b)                     (p)->GetAxes(a,b)
#define IDirect3DRMFrame3_GetMaterial(p,a)                   (p)->GetMaterial(a)
#define IDirect3DRMFrame3_GetInheritAxes(p)                  (p)->GetInheritAxes()
#define IDirect3DRMFrame3_GetHierarchyBox(p,a)               (p)->GetHierarchyBox(a)
#define IDirect3DRMFrame3_SetBox(p,a)                        (p)->SetBox(a)
#define IDirect3DRMFrame3_SetBoxEnable(p,a)                  (p)->SetBoxEnable(a)
#define IDirect3DRMFrame3_SetAxes(p,a,b,c,d,e,f)             (p)->SetAxes(a,b,c,d,e,f)
#define IDirect3DRMFrame3_SetInheritAxes(p,a)                (p)->SetInheritAxes(a)
#define IDirect3DRMFrame3_SetMaterial(p,a)                   (p)->SetMaterial(a)
#define IDirect3DRMFrame3_SetQuaternion(p,a,b)               (p)->SetQuaternion(a,b)
#define IDirect3DRMFrame3_RayPick(p,a,b,c,d)                 (p)->RayPick(a,b,c,d)
#define IDirect3DRMFrame3_Save(p,a,b,c)                      (p)->Save(a,b,c)
#define IDirect3DRMFrame3_TransformVectors(p,a,b,c,d)        (p)->TransformVectors(a,b,c,d)
#define IDirect3DRMFrame3_InverseTransformVectors(p,a,b,c,d) (p)->InverseTransformVectors(a,b,c,d)
#define IDirect3DRMFrame3_SetTraversalOptions(p,a)           (p)->SetTraversalOptions(a)
#define IDirect3DRMFrame3_GetTraversalOptions(p,a)           (p)->GetTraversalOptions(a)
#define IDirect3DRMFrame3_SetSceneFogMethod(p,a)             (p)->SetSceneFogMethod(a)
#define IDirect3DRMFrame3_GetSceneFogMethod(p,a)             (p)->GetSceneFogMethod(a)
#define IDirect3DRMFrame3_SetMaterialOverride(p,a)           (p)->SetMaterialOverride(a)
#define IDirect3DRMFrame3_GetMaterialOverride(p,a)           (p)->GetMaterialOverride(a)
#endif

/*****************************************************************************
 * IDirect3DRMMesh interface
 */
#define SDL_INTERFACE IDirect3DRMMesh
SDL_DECLARE_INTERFACE_(IDirect3DRMMesh,IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMMesh methods ***/
    SDL_STDMETHOD(Scale)(SDL_THIS_ D3DVALUE sx, D3DVALUE sy, D3DVALUE sz) SDL_PURE;
    SDL_STDMETHOD(Translate)(SDL_THIS_ D3DVALUE tx, D3DVALUE ty, D3DVALUE tz) SDL_PURE;
    SDL_STDMETHOD(GetBox)(SDL_THIS_ D3DRMBOX *) SDL_PURE;
    SDL_STDMETHOD(AddGroup)(SDL_THIS_ unsigned vCount, unsigned fCount, unsigned vPerFace, unsigned *fData,
        D3DRMGROUPINDEX *returnId) SDL_PURE;
    SDL_STDMETHOD(SetVertices)(SDL_THIS_ D3DRMGROUPINDEX id, unsigned index, unsigned count,
        D3DRMVERTEX *values) SDL_PURE;
    SDL_STDMETHOD(SetGroupColor)(SDL_THIS_ D3DRMGROUPINDEX id, D3DCOLOR value) SDL_PURE;
    SDL_STDMETHOD(SetGroupColorRGB)(SDL_THIS_ D3DRMGROUPINDEX id, D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD(SetGroupMapping)(SDL_THIS_ D3DRMGROUPINDEX id, D3DRMMAPPING value) SDL_PURE;
    SDL_STDMETHOD(SetGroupQuality)(SDL_THIS_ D3DRMGROUPINDEX id, D3DRMRENDERQUALITY value) SDL_PURE;
    SDL_STDMETHOD(SetGroupMaterial)(SDL_THIS_ D3DRMGROUPINDEX id, struct IDirect3DRMMaterial *material) SDL_PURE;
    SDL_STDMETHOD(SetGroupTexture)(SDL_THIS_ D3DRMGROUPINDEX id, struct IDirect3DRMTexture *texture) SDL_PURE;
    SDL_STDMETHOD_(unsigned, GetGroupCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetGroup)(SDL_THIS_ D3DRMGROUPINDEX id, unsigned *vCount, unsigned *fCount, unsigned *vPerFace,
        SDL_DWORD *fDataSize, unsigned *fData) SDL_PURE;
    SDL_STDMETHOD(GetVertices)(SDL_THIS_ D3DRMGROUPINDEX id, SDL_DWORD index, SDL_DWORD count, D3DRMVERTEX *returnPtr) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetGroupColor)(SDL_THIS_ D3DRMGROUPINDEX id) SDL_PURE;
    SDL_STDMETHOD_(D3DRMMAPPING, GetGroupMapping)(SDL_THIS_ D3DRMGROUPINDEX id) SDL_PURE;
    SDL_STDMETHOD_(D3DRMRENDERQUALITY, GetGroupQuality)(SDL_THIS_ D3DRMGROUPINDEX id) SDL_PURE;
    SDL_STDMETHOD(GetGroupMaterial)(SDL_THIS_ D3DRMGROUPINDEX id, struct IDirect3DRMMaterial **material) SDL_PURE;
    SDL_STDMETHOD(GetGroupTexture)(SDL_THIS_ D3DRMGROUPINDEX id, struct IDirect3DRMTexture **texture) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMMesh_QueryInterface(p,a,b)              (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMMesh_AddRef(p)                          (p)->lpVtbl->AddRef(p)
#define IDirect3DRMMesh_Release(p)                         (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMesh_Clone(p,a,b,c)                     (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMMesh_AddDestroyCallback(p,a,b)          (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMMesh_DeleteDestroyCallback(p,a,b)       (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMMesh_SetAppData(p,a)                    (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMMesh_GetAppData(p)                      (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMMesh_SetName(p,a)                       (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMMesh_GetName(p,a,b)                     (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMMesh_GetClassName(p,a,b)                (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMMesh methods ***/
#define IDirect3DRMMesh_Scale(p,a,b,c)                     (p)->lpVtbl->Scale(p,a,b,c)
#define IDirect3DRMMesh_Translate(p,a,b,c)                 (p)->lpVtbl->Translate(p,a,b,c)
#define IDirect3DRMMesh_GetBox(p,a)                        (p)->lpVtbl->GetBox(p,a)
#define IDirect3DRMMesh_AddGroup(p,a,b,c,d,e)              (p)->lpVtbl->AddGroup(p,a,b,c,d,e)
#define IDirect3DRMMesh_SetVertices(p,a,b,c,d)             (p)->lpVtbl->SetVertices(p,a,b,c,d)
#define IDirect3DRMMesh_SetGroupColor(p,a,b)               (p)->lpVtbl->SetGroupColor(p,a,b)
#define IDirect3DRMMesh_SetGroupColorRGB(p,a,b,c,d)        (p)->lpVtbl->SetGroupColorRGB(p,a,b,c,d)
#define IDirect3DRMMesh_SetGroupMapping(p,a,b)             (p)->lpVtbl->SetGroupMapping(p,a,b)
#define IDirect3DRMMesh_SetGroupQuality(p,a,b)             (p)->lpVtbl->SetGroupQuality(p,a,b)
#define IDirect3DRMMesh_SetGroupMaterial(p,a,b)            (p)->lpVtbl->SetGroupMaterial(p,a,b)
#define IDirect3DRMMesh_SetGroupTexture(p,a,b)             (p)->lpVtbl->SetGroupTexture(p,a,b)
#define IDirect3DRMMesh_GetGroupCount(p)                   (p)->lpVtbl->GetGroupCount(p)
#define IDirect3DRMMesh_GetGroup(p,a,b,c,d,e,f)            (p)->lpVtbl->GetGroup(p,a,b,c,d,e,f)
#define IDirect3DRMMesh_GetVertices(p,a,b,c,d)             (p)->lpVtbl->GetVertices(p,a,b,c,d)
#define IDirect3DRMMesh_GetGroupColor(p,a)                 (p)->lpVtbl->GetGroupColor(p,a)
#define IDirect3DRMMesh_GetGroupMapping(p,a)               (p)->lpVtbl->GetGroupMapping(p,a)
#define IDirect3DRMMesh_GetGroupQuality(p,a)               (p)->lpVtbl->GetGroupQuality(p,a)
#define IDirect3DRMMesh_GetGroupMaterial(p,a,b)            (p)->lpVtbl->GetGroupMaterial(p,a,b)
#define IDirect3DRMMesh_GetGroupTexture(p,a,b)             (p)->lpVtbl->GetGroupTexture(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMMesh_QueryInterface(p,a,b)              (p)->QueryInterface(a,b)
#define IDirect3DRMMesh_AddRef(p)                          (p)->AddRef()
#define IDirect3DRMMesh_Release(p)                         (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMesh_Clone(p,a,b,c)                     (p)->Clone(a,b,c)
#define IDirect3DRMMesh_AddDestroyCallback(p,a,b)          (p)->AddDestroyCallback(a,b)
#define IDirect3DRMMesh_DeleteDestroyCallback(p,a,b)       (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMMesh_SetAppData(p,a)                    (p)->SetAppData(a)
#define IDirect3DRMMesh_GetAppData(p)                      (p)->GetAppData()
#define IDirect3DRMMesh_SetName(p,a)                       (p)->SetName(a)
#define IDirect3DRMMesh_GetName(p,a,b)                     (p)->GetName(a,b)
#define IDirect3DRMMesh_GetClassName(p,a,b)                (p)->GetClassName(a,b)
/*** IDirect3DRMMesh methods ***/
#define IDirect3DRMMesh_Scale(p,a,b,c)                     (p)->Scale(a,b,c)
#define IDirect3DRMMesh_Translate(p,a,b,c)                 (p)->Translate(a,b,c)
#define IDirect3DRMMesh_GetBox(p,a)                        (p)->GetBox(a)
#define IDirect3DRMMesh_AddGroup(p,a,b,c,d,e)              (p)->AddGroup(a,b,c,d,e)
#define IDirect3DRMMesh_SetVertices(p,a,b,c,d)             (p)->SetVertices(a,b,c,d)
#define IDirect3DRMMesh_SetGroupColor(p,a,b)               (p)->SetGroupColor(a,b)
#define IDirect3DRMMesh_SetGroupColorRGB(p,a,b,c,d)        (p)->SetGroupColorRGB(a,b,c,d)
#define IDirect3DRMMesh_SetGroupMapping(p,a,b)             (p)->SetGroupMapping(a,b)
#define IDirect3DRMMesh_SetGroupQuality(p,a,b)             (p)->SetGroupQuality(a,b)
#define IDirect3DRMMesh_SetGroupMaterial(p,a,b)            (p)->SetGroupMaterial(a,b)
#define IDirect3DRMMesh_SetGroupTexture(p,a,b)             (p)->SetGroupTexture(a,b)
#define IDirect3DRMMesh_GetGroupCount(p)                   (p)->GetGroupCount()
#define IDirect3DRMMesh_GetGroup(p,a,b,c,d,e,f)            (p)->GetGroup(a,b,c,d,e,f)
#define IDirect3DRMMesh_GetVertices(p,a,b,c,d)             (p)->GetVertices(a,b,c,d)
#define IDirect3DRMMesh_GetGroupColor(p,a)                 (p)->GetGroupColor(a)
#define IDirect3DRMMesh_GetGroupMapping(p,a)               (p)->GetGroupMapping(a)
#define IDirect3DRMMesh_GetGroupQuality(p,a)               (p)->GetGroupQuality(a)
#define IDirect3DRMMesh_GetGroupMaterial(p,a,b)            (p)->GetGroupMaterial(a,b)
#define IDirect3DRMMesh_GetGroupTexture(p,a,b)             (p)->GetGroupTexture(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMProgressiveMesh interface
 */
#define SDL_INTERFACE IDirect3DRMProgressiveMesh
SDL_DECLARE_INTERFACE_(IDirect3DRMProgressiveMesh,IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMProgressiveMesh methods ***/
    SDL_STDMETHOD(Load) (SDL_THIS_ void *filename, void *name, D3DRMLOADOPTIONS flags,
            D3DRMLOADTEXTURECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(GetLoadStatus) (SDL_THIS_ D3DRMPMESHLOADSTATUS *status) SDL_PURE;
    SDL_STDMETHOD(SetMinRenderDetail) (SDL_THIS_ D3DVALUE d3dVal) SDL_PURE;
    SDL_STDMETHOD(Abort) (SDL_THIS_ SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(GetFaceDetail) (SDL_THIS_ SDL_DWORD *count) SDL_PURE;
    SDL_STDMETHOD(GetVertexDetail) (SDL_THIS_ SDL_DWORD *count) SDL_PURE;
    SDL_STDMETHOD(SetFaceDetail) (SDL_THIS_ SDL_DWORD count) SDL_PURE;
    SDL_STDMETHOD(SetVertexDetail) (SDL_THIS_ SDL_DWORD count) SDL_PURE;
    SDL_STDMETHOD(GetFaceDetailRange) (SDL_THIS_ SDL_DWORD *min_detail, SDL_DWORD *max_detail) SDL_PURE;
    SDL_STDMETHOD(GetVertexDetailRange) (SDL_THIS_ SDL_DWORD *min_detail, SDL_DWORD *max_detail) SDL_PURE;
    SDL_STDMETHOD(GetDetail) (SDL_THIS_ D3DVALUE *pdvVal) SDL_PURE;
    SDL_STDMETHOD(SetDetail) (SDL_THIS_ D3DVALUE d3dVal) SDL_PURE;
    SDL_STDMETHOD(RegisterEvents) (SDL_THIS_ SDL_HANDLE event, SDL_DWORD flags, SDL_DWORD reserved) SDL_PURE;
    SDL_STDMETHOD(CreateMesh) (SDL_THIS_ IDirect3DRMMesh **mesh) SDL_PURE;
    SDL_STDMETHOD(Duplicate) (SDL_THIS_ IDirect3DRMProgressiveMesh **mesh) SDL_PURE;
    SDL_STDMETHOD(GetBox) (SDL_THIS_ D3DRMBOX *box) SDL_PURE;
    SDL_STDMETHOD(SetQuality) (SDL_THIS_ D3DRMRENDERQUALITY quality) SDL_PURE;
    SDL_STDMETHOD(GetQuality) (SDL_THIS_ D3DRMRENDERQUALITY *quality) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMProgressiveMesh_QueryInterface(p,a,b)          (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMProgressiveMesh_AddRef(p)                      (p)->lpVtbl->AddRef(p)
#define IDirect3DRMProgressiveMesh_Release(p)                     (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMProgressiveMesh_Clone(p,a,b,c)                 (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMProgressiveMesh_AddDestroyCallback(p,a,b)      (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMProgressiveMesh_DeleteDestroyCallback(p,a,b)   (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMProgressiveMesh_SetAppData(p,a)                (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMProgressiveMesh_GetAppData(p)                  (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMProgressiveMesh_SetName(p,a)                   (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMProgressiveMesh_GetName(p,a,b)                 (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMProgressiveMesh_GetClassName(p,a,b)            (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMProgressiveMesh methods ***/
#define IDirect3DRMProgressiveMesh_Load(p,a,b,c,d,e)              (p)->lpVtbl->Load(p,a,b,c,d,e)
#define IDirect3DRMProgressiveMesh_GetLoadStatus(p,a)             (p)->lpVtbl->GetLoadStatus(p,a)
#define IDirect3DRMProgressiveMesh_SetMinRenderDetail(p,a)        (p)->lpVtbl->SetMinRenderDetail(p,a)
#define IDirect3DRMProgressiveMesh_Abort(p,a)                     (p)->lpVtbl->Abort(p,a)
#define IDirect3DRMProgressiveMesh_GetFaceDetail(p,a)             (p)->lpVtbl->GetFaceDetail(p,a)
#define IDirect3DRMProgressiveMesh_GetVertexDetail(p,a)           (p)->lpVtbl->GetVertexDetail(p,a)
#define IDirect3DRMProgressiveMesh_SetFaceDetail(p,a)             (p)->lpVtbl->SetFaceDetail(p,a)
#define IDirect3DRMProgressiveMesh_SetVertexDetail(p,a)           (p)->lpVtbl->SetVertexDetail(p,a)
#define IDirect3DRMProgressiveMesh_GetFaceDetailRange(p,a,b)      (p)->lpVtbl->GetFaceDetailRange(p,a,b)
#define IDirect3DRMProgressiveMesh_GetVertexDetailRange(p,a,b)    (p)->lpVtbl->GetVertexDetailRange(p,a,b)
#define IDirect3DRMProgressiveMesh_GetDetail(p,a)                 (p)->lpVtbl->GetDetail(p,a)
#define IDirect3DRMProgressiveMesh_SetDetail(p,a)                 (p)->lpVtbl->SetDetail(p,a)
#define IDirect3DRMProgressiveMesh_RegisterEvents(p,a,b,c)        (p)->lpVtbl->RegisterEvents(p,a,b,c)
#define IDirect3DRMProgressiveMesh_CreateMesh(p,a)                (p)->lpVtbl->CreateMesh(p,a)
#define IDirect3DRMProgressiveMesh_Duplicate(p,a)                 (p)->lpVtbl->Duplicate(p,a)
#define IDirect3DRMProgressiveMesh_GetBox(p,a)                    (p)->lpVtbl->GetBox(p,a)
#define IDirect3DRMProgressiveMesh_SetQuality(p,a)                (p)->lpVtbl->SetQuality(p,a)
#define IDirect3DRMProgressiveMesh_GetQuality(p,a)                (p)->lpVtbl->GetQuality(p,a)
#else
/*** IUnknown methods ***/
#define IDirect3DRMProgressiveMesh_QueryInterface(p,a,b)          (p)->QueryInterface(a,b)
#define IDirect3DRMProgressiveMesh_AddRef(p)                      (p)->AddRef()
#define IDirect3DRMProgressiveMesh_Release(p)                     (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMProgressiveMesh_Clone(p,a,b,c)                 (p)->Clone(a,b,c)
#define IDirect3DRMProgressiveMesh_AddDestroyCallback(p,a,b)      (p)->AddDestroyCallback(a,b)
#define IDirect3DRMProgressiveMesh_DeleteDestroyCallback(p,a,b)   (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMProgressiveMesh_SetAppData(p,a)                (p)->SetAppData(a)
#define IDirect3DRMProgressiveMesh_GetAppData(p)                  (p)->GetAppData()
#define IDirect3DRMProgressiveMesh_SetName(p,a)                   (p)->SetName(a)
#define IDirect3DRMProgressiveMesh_GetName(p,a,b)                 (p)->GetName(a,b)
#define IDirect3DRMProgressiveMesh_GetClassName(p,a,b)            (p)->GetClassName(a,b)
/*** IDirect3DRMProgressiveMesh methods ***/
#define IDirect3DRMProgressiveMesh_Load(p,a,b,c,d,e)              (p)->Load(a,b,c,d,e)
#define IDirect3DRMProgressiveMesh_GetLoadStatus(p,a)             (p)->GetLoadStatus(a)
#define IDirect3DRMProgressiveMesh_SetMinRenderDetail(p,a)        (p)->SetMinRenderDetail(a)
#define IDirect3DRMProgressiveMesh_Abort(p,a)                     (p)->Abort(a)
#define IDirect3DRMProgressiveMesh_GetFaceDetail(p,a)             (p)->GetFaceDetail(a)
#define IDirect3DRMProgressiveMesh_GetVertexDetail(p,a)           (p)->GetVertexDetail(a)
#define IDirect3DRMProgressiveMesh_SetFaceDetail(p,a)             (p)->SetFaceDetail(a)
#define IDirect3DRMProgressiveMesh_SetVertexDetail(p,a)           (p)->SetVertexDetail(a)
#define IDirect3DRMProgressiveMesh_GetFaceDetailRange(p,a,b)      (p)->GetFaceDetailRange(a,b)
#define IDirect3DRMProgressiveMesh_GetVertexDetailRange(p,a,b)    (p)->GetVertexDetailRange(a,b)
#define IDirect3DRMProgressiveMesh_GetDetail(p,a)                 (p)->GetDetail(a)
#define IDirect3DRMProgressiveMesh_SetDetail(p,a)                 (p)->SetDetail(a)
#define IDirect3DRMProgressiveMesh_RegisterEvents(p,a,b,c)        (p)->RegisterEvents(a,b,c)
#define IDirect3DRMProgressiveMesh_CreateMesh(p,a)                (p)->CreateMesh(a)
#define IDirect3DRMProgressiveMesh_Duplicate(p,a)                 (p)->Duplicate(a)
#define IDirect3DRMProgressiveMesh_GetBox(p,a)                    (p)->GetBox(a)
#define IDirect3DRMProgressiveMesh_SetQuality(p,a)                (p)->SetQuality(a)
#define IDirect3DRMProgressiveMesh_GetQuality(p,a)                (p)->GetQuality(a)
#endif

/*****************************************************************************
 * IDirect3DRMShadow interface
 */
#define SDL_INTERFACE IDirect3DRMShadow
SDL_DECLARE_INTERFACE_(IDirect3DRMShadow,IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMShadow methods ***/
    SDL_STDMETHOD(Init)(SDL_THIS_ IDirect3DRMVisual *visual, struct IDirect3DRMLight *light,
            D3DVALUE px, D3DVALUE py, D3DVALUE pz, D3DVALUE nx, D3DVALUE ny, D3DVALUE nz) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMShadow_QueryInterface(p,a,b)          (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMShadow_AddRef(p)                      (p)->lpVtbl->AddRef(p)
#define IDirect3DRMShadow_Release(p)                     (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMShadow_Clone(p,a,b,c)                 (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMShadow_AddDestroyCallback(p,a,b)      (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMShadow_DeleteDestroyCallback(p,a,b)   (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMShadow_SetAppData(p,a)                (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMShadow_GetAppData(p)                  (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMShadow_SetName(p,a)                   (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMShadow_GetName(p,a,b)                 (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMShadow_GetClassName(p,a,b)            (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMShadow methods ***/
#define IDirect3DRMShadow_Init(p,a,b,c,d,e,f,g)          (p)->lpVtbl->Load(p,a,b,c,d,e,f,g)
#else
/*** IUnknown methods ***/
#define IDirect3DRMShadow_QueryInterface(p,a,b)          (p)->QueryInterface(a,b)
#define IDirect3DRMShadow_AddRef(p)                      (p)->AddRef()
#define IDirect3DRMShadow_Release(p)                     (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMShadow_Clone(p,a,b,c)                 (p)->Clone(a,b,c)
#define IDirect3DRMShadow_AddDestroyCallback(p,a,b)      (p)->AddDestroyCallback(a,b)
#define IDirect3DRMShadow_DeleteDestroyCallback(p,a,b)   (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMShadow_SetAppData(p,a)                (p)->SetAppData(a)
#define IDirect3DRMShadow_GetAppData(p)                  (p)->GetAppData()
#define IDirect3DRMShadow_SetName(p,a)                   (p)->SetName(a)
#define IDirect3DRMShadow_GetName(p,a,b)                 (p)->GetName(a,b)
#define IDirect3DRMShadow_GetClassName(p,a,b)            (p)->GetClassName(a,b)
/*** IDirect3DRMShadow methods ***/
#define IDirect3DRMShadow_Init(p,a,b,c,d,e,f,g)          (p)->Load(a,b,c,d,e,f,g)
#endif

/*****************************************************************************
 * IDirect3DRMShadow2 interface
 */
#define SDL_INTERFACE IDirect3DRMShadow2
SDL_DECLARE_INTERFACE_(IDirect3DRMShadow2,IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMShadow methods ***/
    SDL_STDMETHOD(Init)(SDL_THIS_ IUnknown *object, struct IDirect3DRMLight *light,
            D3DVALUE px, D3DVALUE py, D3DVALUE pz, D3DVALUE nx, D3DVALUE ny, D3DVALUE nz) SDL_PURE;
    /*** IDirect3DRMShadow2 methods ***/
    SDL_STDMETHOD(GetVisual)(SDL_THIS_ IDirect3DRMVisual **visual) SDL_PURE;
    SDL_STDMETHOD(SetVisual)(SDL_THIS_ IUnknown *visual, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(GetLight)(SDL_THIS_ struct IDirect3DRMLight **light) SDL_PURE;
    SDL_STDMETHOD(SetLight)(SDL_THIS_ struct IDirect3DRMLight *light, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(GetPlane)(SDL_THIS_ D3DVALUE *px, D3DVALUE *py, D3DVALUE *pz,
            D3DVALUE *nx, D3DVALUE *ny, D3DVALUE *nz) SDL_PURE;
    SDL_STDMETHOD(SetPlane)(SDL_THIS_ D3DVALUE px, D3DVALUE py, D3DVALUE pz,
        D3DVALUE nx, D3DVALUE ny, D3DVALUE nz, SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(GetOptions)(SDL_THIS_ SDL_DWORD *flags) SDL_PURE;
    SDL_STDMETHOD(SetOptions)(SDL_THIS_ SDL_DWORD) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMShadow2_QueryInterface(p,a,b)          (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMShadow2_AddRef(p)                      (p)->lpVtbl->AddRef(p)
#define IDirect3DRMShadow2_Release(p)                     (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMShadow2_Clone(p,a,b,c)                 (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMShadow2_AddDestroyCallback(p,a,b)      (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMShadow2_DeleteDestroyCallback(p,a,b)   (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMShadow2_SetAppData(p,a)                (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMShadow2_GetAppData(p)                  (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMShadow2_SetName(p,a)                   (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMShadow2_GetName(p,a,b)                 (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMShadow2_GetClassName(p,a,b)            (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMShadow methods ***/
#define IDirect3DRMShadow2_Init(p,a,b,c,d,e,f,g)          (p)->lpVtbl->Init(p,a,b,c,d,e,f,g)
/*** IDirect3DRMShadow2 methods ***/
#define IDirect3DRMShadow2_GetVisual(p,a)                 (p)->lpVtbl->GetVisual(p,a)
#define IDirect3DRMShadow2_SetVisual(p,a,b)               (p)->lpVtbl->SetVisual(p,a,b)
#define IDirect3DRMShadow2_GetLight(p,a)                  (p)->lpVtbl->GetLight(p,a)
#define IDirect3DRMShadow2_SetLight(p,a,b)                (p)->lpVtbl->SetLight(p,a,b)
#define IDirect3DRMShadow2_GetPlane(p,a,b,c,d,e,f)        (p)->lpVtbl->GetPlane(p,a,b,c,d,e,f)
#define IDirect3DRMShadow2_SetPlane(p,a,b,c,d,e,f)        (p)->lpVtbl->SetPlane(p,a,b,c,d,e,f)
#define IDirect3DRMShadow2_GetOptions(p,a)                (p)->lpVtbl->GetOptions(p,a)
#define IDirect3DRMShadow2_SetOptions(p,a)                (p)->lpVtbl->SetOptions(p,a)
#else
/*** IUnknown methods ***/
#define IDirect3DRMShadow2_QueryInterface(p,a,b)          (p)->QueryInterface(a,b)
#define IDirect3DRMShadow2_AddRef(p)                      (p)->AddRef()
#define IDirect3DRMShadow2_Release(p)                     (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMShadow2_Clone(p,a,b,c)                 (p)->Clone(a,b,c)
#define IDirect3DRMShadow2_AddDestroyCallback(p,a,b)      (p)->AddDestroyCallback(a,b)
#define IDirect3DRMShadow2_DeleteDestroyCallback(p,a,b)   (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMShadow2_SetAppData(p,a)                (p)->SetAppData(a)
#define IDirect3DRMShadow2_GetAppData(p)                  (p)->GetAppData()
#define IDirect3DRMShadow2_SetName(p,a)                   (p)->SetName(a)
#define IDirect3DRMShadow2_GetName(p,a,b)                 (p)->GetName(a,b)
#define IDirect3DRMShadow2_GetClassName(p,a,b)            (p)->GetClassName(a,b)
/*** IDirect3DRMShadow methods ***/
#define IDirect3DRMShadow2_Init(p,a,b,c,d,e,f,g)          (p)->Init(a,b,c,d,e,f,g)
/*** IDirect3DRMShadow2 methods ***/
#define IDirect3DRMShadow2_GetVisual(p,a)                 (p)->GetVisual(a)
#define IDirect3DRMShadow2_SetVisual(p,a,b)               (p)->SetVisual(a,b)
#define IDirect3DRMShadow2_GetLight(p,a)                  (p)->GetLight(a)
#define IDirect3DRMShadow2_SetLight(p,a,b)                (p)->SetLight(a,b)
#define IDirect3DRMShadow2_GetPlane(p,a,b,c,d,e,f)        (p)->GetPlane(a,b,c,d,e,f)
#define IDirect3DRMShadow2_SetPlane(p,a,b,c,d,e,f)        (p)->SetPlane(a,b,c,d,e,f)
#define IDirect3DRMShadow2_GetOptions(p,a)                (p)->GetOptions(a)
#define IDirect3DRMShadow2_SetOptions(p,a)                (p)->SetOptions(a)
#endif

/*****************************************************************************
 * IDirect3DRMFace interface
 */
#define SDL_INTERFACE IDirect3DRMFace
SDL_DECLARE_INTERFACE_(IDirect3DRMFace,IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMFace methods ***/
    SDL_STDMETHOD(AddVertex)(SDL_THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(AddVertexAndNormalIndexed)(SDL_THIS_ SDL_DWORD vertex, SDL_DWORD normal) SDL_PURE;
    SDL_STDMETHOD(SetColorRGB)(SDL_THIS_ D3DVALUE, D3DVALUE, D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetTexture)(SDL_THIS_ struct IDirect3DRMTexture *texture) SDL_PURE;
    SDL_STDMETHOD(SetTextureCoordinates)(SDL_THIS_ SDL_DWORD vertex, D3DVALUE u, D3DVALUE v) SDL_PURE;
    SDL_STDMETHOD(SetMaterial)(SDL_THIS_ struct IDirect3DRMMaterial *material) SDL_PURE;
    SDL_STDMETHOD(SetTextureTopology)(SDL_THIS_ SDL_BOOL wrap_u, SDL_BOOL wrap_v) SDL_PURE;
    SDL_STDMETHOD(GetVertex)(SDL_THIS_ SDL_DWORD index, D3DVECTOR *vertex, D3DVECTOR *normal) SDL_PURE;
    SDL_STDMETHOD(GetVertices)(SDL_THIS_ SDL_DWORD *vertex_count, D3DVECTOR *coords, D3DVECTOR *normals);
    SDL_STDMETHOD(GetTextureCoordinates)(SDL_THIS_ SDL_DWORD vertex, D3DVALUE *u, D3DVALUE *v) SDL_PURE;
    SDL_STDMETHOD(GetTextureTopology)(SDL_THIS_ SDL_BOOL *wrap_u, SDL_BOOL *wrap_v) SDL_PURE;
    SDL_STDMETHOD(GetNormal)(SDL_THIS_ D3DVECTOR *) SDL_PURE;
    SDL_STDMETHOD(GetTexture)(SDL_THIS_ struct IDirect3DRMTexture **texture) SDL_PURE;
    SDL_STDMETHOD(GetMaterial)(SDL_THIS_ struct IDirect3DRMMaterial **material) SDL_PURE;
    SDL_STDMETHOD_(int, GetVertexCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(int, GetVertexIndex)(SDL_THIS_ SDL_DWORD which) SDL_PURE;
    SDL_STDMETHOD_(int, GetTextureCoordinateIndex)(SDL_THIS_ SDL_DWORD which) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetColor)(SDL_THIS) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMFace_QueryInterface(p,a,b)             (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMFace_AddRef(p)                         (p)->lpVtbl->AddRef(p)
#define IDirect3DRMFace_Release(p)                        (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMFace_Clone(p,a,b,c)                    (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMFace_AddDestroyCallback(p,a,b)         (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMFace_DeleteDestroyCallback(p,a,b)      (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMFace_SetAppData(p,a)                   (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMFace_GetAppData(p)                     (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMFace_SetName(p,a)                      (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMFace_GetName(p,a,b)                    (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMFace_GetClassName(p,a,b)               (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMFace methods ***/
#define IDirect3DRMFace_AddVertex(p,a,b,c)                (p)->lpVtbl->AddVertex(p,a,b,c)
#define IDirect3DRMFace_AddVertexAndNormalIndexed(p,a,b)  (p)->lpVtbl->AddVertexAndNormalIndexed(p,a,b)
#define IDirect3DRMFace_SetColorRGB(p,a,b,c)              (p)->lpVtbl->SetColorRGB(p,a,b,c)
#define IDirect3DRMFace_SetColor(p,a)                     (p)->lpVtbl->SetColor(p,a)
#define IDirect3DRMFace_SetTexture(p,a)                   (p)->lpVtbl->SetTexture(p,a)
#define IDirect3DRMFace_SetTextureCoordinates(p,a,b,c)    (p)->lpVtbl->SetTextureCoordinates(p,a,b,c)
#define IDirect3DRMFace_SetMaterial(p,a)                  (p)->lpVtbl->SetMaterial(p,a)
#define IDirect3DRMFace_SetTextureTopology(p,a,b)         (p)->lpVtbl->SetTextureTopology(p,a,b)
#define IDirect3DRMFace_GetVertex(p,a,b,c)                (p)->lpVtbl->GetVertex(p,a,b,c)
#define IDirect3DRMFace_GetVertices(p,a,b,c)              (p)->lpVtbl->GetVertices(p,a,b,c)
#define IDirect3DRMFace_GetTextureCoordinates(p,a,b,c)    (p)->lpVtbl->GetTextureCoordinates(p,a,b,c)
#define IDirect3DRMFace_GetTextureTopology(p,a,b)         (p)->lpVtbl->GetTextureTopology(p,a,b)
#define IDirect3DRMFace_GetNormal(p,a)                    (p)->lpVtbl->GetNormal(p,a)
#define IDirect3DRMFace_GetTexture(p,a)                   (p)->lpVtbl->GetTexture(p,a)
#define IDirect3DRMFace_GetVertexCount(p)                 (p)->lpVtbl->GetVertexCount(p)
#define IDirect3DRMFace_GetVertexIndex(p,a)               (p)->lpVtbl->GetVertexIndex(p,a)
#define IDirect3DRMFace_GetTextureCoordinateIndex(p,a)    (p)->lpVtbl->GetTextureCoordinateIndex(p,a)
#define IDirect3DRMFace_GetColor(p)                       (p)->lpVtbl->GetColor(p)
#else
/*** IUnknown methods ***/
#define IDirect3DRMFace_QueryInterface(p,a,b)             (p)->QueryInterface(a,b)
#define IDirect3DRMFace_AddRef(p)                         (p)->AddRef()
#define IDirect3DRMFace_Release(p)                        (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMFace_Clone(p,a,b,c)                    (p)->Clone(a,b,c)
#define IDirect3DRMFace_AddDestroyCallback(p,a,b)         (p)->AddDestroyCallback(a,b)
#define IDirect3DRMFace_DeleteDestroyCallback(p,a,b)      (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMFace_SetAppData(p,a)                   (p)->SetAppData(a)
#define IDirect3DRMFace_GetAppData(p)                     (p)->GetAppData()
#define IDirect3DRMFace_SetName(p,a)                      (p)->SetName(a)
#define IDirect3DRMFace_GetName(p,a,b)                    (p)->GetName(a,b)
#define IDirect3DRMFace_GetClassName(p,a,b)               (p)->GetClassName(a,b)
/*** IDirect3DRMFace methods ***/
#define IDirect3DRMFace_AddVertex(p,a,b,c)                (p)->AddVertex(a,b,c)
#define IDirect3DRMFace_AddVertexAndNormalIndexed(p,a,b)  (p)->AddVertexAndNormalIndexed(a,b)
#define IDirect3DRMFace_SetColorRGB(p,a,b,c)              (p)->SetColorRGB(a,b,c)
#define IDirect3DRMFace_SetColor(p,a)                     (p)->SetColor(a)
#define IDirect3DRMFace_SetTexture(p,a)                   (p)->SetTexture(a)
#define IDirect3DRMFace_SetTextureCoordinates(p,a,b,c)    (p)->SetTextureCoordinates(a,b,c)
#define IDirect3DRMFace_SetMaterial(p,a)                  (p)->SetMaterial(a)
#define IDirect3DRMFace_SetTextureTopology(p,a,b)         (p)->SetTextureTopology(a,b)
#define IDirect3DRMFace_GetVertex(p,a,b,c)                (p)->GetVertex(a,b,c)
#define IDirect3DRMFace_GetVertices(p,a,b,c)              (p)->GetVertices(a,b,c)
#define IDirect3DRMFace_GetTextureCoordinates(p,a,b,c)    (p)->GetTextureCoordinates(a,b,c)
#define IDirect3DRMFace_GetTextureTopology(p,a,b)         (p)->GetTextureTopology(a,b)
#define IDirect3DRMFace_GetNormal(p,a)                    (p)->GetNormal(a)
#define IDirect3DRMFace_GetTexture(p,a)                   (p)->GetTexture(a)
#define IDirect3DRMFace_GetVertexCount(p)                 (p)->GetVertexCount()
#define IDirect3DRMFace_GetVertexIndex(p,a)               (p)->GetVertexIndex(a)
#define IDirect3DRMFace_GetTextureCoordinateIndex(p,a)    (p)->GetTextureCoordinateIndex(a)
#define IDirect3DRMFace_GetColor(p)                       (p)->GetColor()
#endif

/*****************************************************************************
 * IDirect3DRMFace2 interface
 */
#define SDL_INTERFACE IDirect3DRMFace2
SDL_DECLARE_INTERFACE_(IDirect3DRMFace2,IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMFace methods ***/
    SDL_STDMETHOD(AddVertex)(SDL_THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(AddVertexAndNormalIndexed)(SDL_THIS_ SDL_DWORD vertex, SDL_DWORD normal) SDL_PURE;
    SDL_STDMETHOD(SetColorRGB)(SDL_THIS_ D3DVALUE, D3DVALUE, D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetTexture)(SDL_THIS_ struct IDirect3DRMTexture3 *texture) SDL_PURE;
    SDL_STDMETHOD(SetTextureCoordinates)(SDL_THIS_ SDL_DWORD vertex, D3DVALUE u, D3DVALUE v) SDL_PURE;
    SDL_STDMETHOD(SetMaterial)(SDL_THIS_ struct IDirect3DRMMaterial2 *material) SDL_PURE;
    SDL_STDMETHOD(SetTextureTopology)(SDL_THIS_ SDL_BOOL wrap_u, SDL_BOOL wrap_v) SDL_PURE;
    SDL_STDMETHOD(GetVertex)(SDL_THIS_ SDL_DWORD index, D3DVECTOR *vertex, D3DVECTOR *normal) SDL_PURE;
    SDL_STDMETHOD(GetVertices)(SDL_THIS_ SDL_DWORD *vertex_count, D3DVECTOR *coords, D3DVECTOR *normals);
    SDL_STDMETHOD(GetTextureCoordinates)(SDL_THIS_ SDL_DWORD vertex, D3DVALUE *u, D3DVALUE *v) SDL_PURE;
    SDL_STDMETHOD(GetTextureTopology)(SDL_THIS_ SDL_BOOL *wrap_u, SDL_BOOL *wrap_v) SDL_PURE;
    SDL_STDMETHOD(GetNormal)(SDL_THIS_ D3DVECTOR *) SDL_PURE;
    SDL_STDMETHOD(GetTexture)(SDL_THIS_ struct IDirect3DRMTexture3 **texture) SDL_PURE;
    SDL_STDMETHOD(GetMaterial)(SDL_THIS_ struct IDirect3DRMMaterial2 **material) SDL_PURE;
    SDL_STDMETHOD_(int, GetVertexCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(int, GetVertexIndex)(SDL_THIS_ SDL_DWORD which) SDL_PURE;
    SDL_STDMETHOD_(int, GetTextureCoordinateIndex)(SDL_THIS_ SDL_DWORD which) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetColor)(SDL_THIS) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMFace2_QueryInterface(p,a,b)             (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMFace2_AddRef(p)                         (p)->lpVtbl->AddRef(p)
#define IDirect3DRMFace2_Release(p)                        (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMFace2_Clone(p,a,b,c)                    (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMFace2_AddDestroyCallback(p,a,b)         (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMFace2_DeleteDestroyCallback(p,a,b)      (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMFace2_SetAppData(p,a)                   (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMFace2_GetAppData(p)                     (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMFace2_SetName(p,a)                      (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMFace2_GetName(p,a,b)                    (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMFace2_GetClassName(p,a,b)               (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMFace methods ***/
#define IDirect3DRMFace2_AddVertex(p,a,b,c)                (p)->lpVtbl->AddVertex(p,a,b,c)
#define IDirect3DRMFace2_AddVertexAndNormalIndexed(p,a,b)  (p)->lpVtbl->AddVertexAndNormalIndexed(p,a,b)
#define IDirect3DRMFace2_SetColorRGB(p,a,b,c)              (p)->lpVtbl->SetColorRGB(p,a,b,c)
#define IDirect3DRMFace2_SetColor(p,a)                     (p)->lpVtbl->SetColor(p,a)
#define IDirect3DRMFace2_SetTexture(p,a)                   (p)->lpVtbl->SetTexture(p,a)
#define IDirect3DRMFace2_SetTextureCoordinates(p,a,b,c)    (p)->lpVtbl->SetTextureCoordinates(p,a,b,c)
#define IDirect3DRMFace2_SetMaterial(p,a)                  (p)->lpVtbl->SetMaterial(p,a)
#define IDirect3DRMFace2_SetTextureTopology(p,a,b)         (p)->lpVtbl->SetTextureTopology(p,a,b)
#define IDirect3DRMFace2_GetVertex(p,a,b,c)                (p)->lpVtbl->GetVertex(p,a,b,c)
#define IDirect3DRMFace2_GetVertices(p,a,b,c)              (p)->lpVtbl->GetVertices(p,a,b,c)
#define IDirect3DRMFace2_GetTextureCoordinates(p,a,b,c)    (p)->lpVtbl->GetTextureCoordinates(p,a,b,c)
#define IDirect3DRMFace2_GetTextureTopology(p,a,b)         (p)->lpVtbl->GetTextureTopology(p,a,b)
#define IDirect3DRMFace2_GetNormal(p,a)                    (p)->lpVtbl->GetNormal(p,a)
#define IDirect3DRMFace2_GetTexture(p,a)                   (p)->lpVtbl->GetTexture(p,a)
#define IDirect3DRMFace2_GetVertexCount(p)                 (p)->lpVtbl->GetVertexCount(p)
#define IDirect3DRMFace2_GetVertexIndex(p,a)               (p)->lpVtbl->GetVertexIndex(p,a)
#define IDirect3DRMFace2_GetTextureCoordinateIndex(p,a)    (p)->lpVtbl->GetTextureCoordinateIndex(p,a)
#define IDirect3DRMFace2_GetColor(p)                       (p)->lpVtbl->GetColor(p)
#else
/*** IUnknown methods ***/
#define IDirect3DRMFace2_QueryInterface(p,a,b)             (p)->QueryInterface(a,b)
#define IDirect3DRMFace2_AddRef(p)                         (p)->AddRef()
#define IDirect3DRMFace2_Release(p)                        (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMFace2_Clone(p,a,b,c)                    (p)->Clone(a,b,c)
#define IDirect3DRMFace2_AddDestroyCallback(p,a,b)         (p)->AddDestroyCallback(a,b)
#define IDirect3DRMFace2_DeleteDestroyCallback(p,a,b)      (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMFace2_SetAppData(p,a)                   (p)->SetAppData(a)
#define IDirect3DRMFace2_GetAppData(p)                     (p)->GetAppData()
#define IDirect3DRMFace2_SetName(p,a)                      (p)->SetName(a)
#define IDirect3DRMFace2_GetName(p,a,b)                    (p)->GetName(a,b)
#define IDirect3DRMFace2_GetClassName(p,a,b)               (p)->GetClassName(a,b)
/*** IDirect3DRMFace methods ***/
#define IDirect3DRMFace2_AddVertex(p,a,b,c)                (p)->AddVertex(a,b,c)
#define IDirect3DRMFace2_AddVertexAndNormalIndexed(p,a,b)  (p)->AddVertexAndNormalIndexed(a,b)
#define IDirect3DRMFace2_SetColorRGB(p,a,b,c)              (p)->SetColorRGB(a,b,c)
#define IDirect3DRMFace2_SetColor(p,a)                     (p)->SetColor(a)
#define IDirect3DRMFace2_SetTexture(p,a)                   (p)->SetTexture(a)
#define IDirect3DRMFace2_SetTextureCoordinates(p,a,b,c)    (p)->SetTextureCoordinates(a,b,c)
#define IDirect3DRMFace2_SetMaterial(p,a)                  (p)->SetMaterial(a)
#define IDirect3DRMFace2_SetTextureTopology(p,a,b)         (p)->SetTextureTopology(a,b)
#define IDirect3DRMFace2_GetVertex(p,a,b,c)                (p)->GetVertex(a,b,c)
#define IDirect3DRMFace2_GetVertices(p,a,b,c)              (p)->GetVertices(a,b,c)
#define IDirect3DRMFace2_GetTextureCoordinates(p,a,b,c)    (p)->GetTextureCoordinates(a,b,c)
#define IDirect3DRMFace2_GetTextureTopology(p,a,b)         (p)->GetTextureTopology(a,b)
#define IDirect3DRMFace2_GetNormal(p,a)                    (p)->GetNormal(a)
#define IDirect3DRMFace2_GetTexture(p,a)                   (p)->GetTexture(a)
#define IDirect3DRMFace2_GetVertexCount(p)                 (p)->GetVertexCount()
#define IDirect3DRMFace2_GetVertexIndex(p,a)               (p)->GetVertexIndex(a)
#define IDirect3DRMFace2_GetTextureCoordinateIndex(p,a)    (p)->GetTextureCoordinateIndex(a)
#define IDirect3DRMFace2_GetColor(p)                       (p)->GetColor()
#endif

/*****************************************************************************
 * IDirect3DRMMeshBuilder interface
 */
#define SDL_INTERFACE IDirect3DRMMeshBuilder
SDL_DECLARE_INTERFACE_(IDirect3DRMMeshBuilder,IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMMeshBuilder methods ***/
    SDL_STDMETHOD(Load)(SDL_THIS_ void *filename, void *name, D3DRMLOADOPTIONS flags,
            D3DRMLOADTEXTURECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(Save)(SDL_THIS_ const char *filename, D3DRMXOFFORMAT, D3DRMSAVEOPTIONS save) SDL_PURE;
    SDL_STDMETHOD(Scale)(SDL_THIS_ D3DVALUE sx, D3DVALUE sy, D3DVALUE sz) SDL_PURE;
    SDL_STDMETHOD(Translate)(SDL_THIS_ D3DVALUE tx, D3DVALUE ty, D3DVALUE tz) SDL_PURE;
    SDL_STDMETHOD(SetColorSource)(SDL_THIS_ D3DRMCOLORSOURCE) SDL_PURE;
    SDL_STDMETHOD(GetBox)(SDL_THIS_ D3DRMBOX *) SDL_PURE;
    SDL_STDMETHOD(GenerateNormals)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMCOLORSOURCE, GetColorSource)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(AddMesh)(SDL_THIS_ IDirect3DRMMesh *mesh) SDL_PURE;
    SDL_STDMETHOD(AddMeshBuilder)(SDL_THIS_ IDirect3DRMMeshBuilder *mesh_builder) SDL_PURE;
    SDL_STDMETHOD(AddFrame)(SDL_THIS_ IDirect3DRMFrame *frame) SDL_PURE;
    SDL_STDMETHOD(AddFace)(SDL_THIS_ IDirect3DRMFace *face) SDL_PURE;
    SDL_STDMETHOD(AddFaces)(SDL_THIS_ SDL_DWORD vertex_count, D3DVECTOR *vertices, SDL_DWORD normal_count,
            D3DVECTOR *normals, SDL_DWORD *face_data, struct IDirect3DRMFaceArray **array) SDL_PURE;
    SDL_STDMETHOD(ReserveSpace)(SDL_THIS_ SDL_DWORD vertex_Count, SDL_DWORD normal_count, SDL_DWORD face_count) SDL_PURE;
    SDL_STDMETHOD(SetColorRGB)(SDL_THIS_ D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD(SetColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetTexture)(SDL_THIS_ struct IDirect3DRMTexture *texture) SDL_PURE;
    SDL_STDMETHOD(SetMaterial)(SDL_THIS_ struct IDirect3DRMMaterial *material) SDL_PURE;
    SDL_STDMETHOD(SetTextureTopology)(SDL_THIS_ SDL_BOOL wrap_u, SDL_BOOL wrap_v) SDL_PURE;
    SDL_STDMETHOD(SetQuality)(SDL_THIS_ D3DRMRENDERQUALITY) SDL_PURE;
    SDL_STDMETHOD(SetPerspective)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetVertex)(SDL_THIS_ SDL_DWORD index, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(SetNormal)(SDL_THIS_ SDL_DWORD index, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(SetTextureCoordinates)(SDL_THIS_ SDL_DWORD index, D3DVALUE u, D3DVALUE v) SDL_PURE;
    SDL_STDMETHOD(SetVertexColor)(SDL_THIS_ SDL_DWORD index, D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetVertexColorRGB)(SDL_THIS_ SDL_DWORD index, D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD(GetFaces)(SDL_THIS_ struct IDirect3DRMFaceArray **array) SDL_PURE;
    SDL_STDMETHOD(GetVertices)(SDL_THIS_ SDL_DWORD *vcount, D3DVECTOR *vertices, SDL_DWORD *ncount, D3DVECTOR *normals,
        SDL_DWORD *face_data_size, SDL_DWORD *face_data) SDL_PURE;
    SDL_STDMETHOD(GetTextureCoordinates)(SDL_THIS_ SDL_DWORD index, D3DVALUE *u, D3DVALUE *v) SDL_PURE;
    SDL_STDMETHOD_(int, AddVertex)(SDL_THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD_(int, AddNormal)(SDL_THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(CreateFace)(SDL_THIS_ IDirect3DRMFace **face) SDL_PURE;
    SDL_STDMETHOD_(D3DRMRENDERQUALITY, GetQuality)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetPerspective)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(int, GetFaceCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(int, GetVertexCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetVertexColor)(SDL_THIS_ SDL_DWORD index) SDL_PURE;
    SDL_STDMETHOD(CreateMesh)(SDL_THIS_ IDirect3DRMMesh **mesh) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMMeshBuilder_QueryInterface(p,a,b)             (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMMeshBuilder_AddRef(p)                         (p)->lpVtbl->AddRef(p)
#define IDirect3DRMMeshBuilder_Release(p)                        (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMeshBuilder_Clone(p,a,b,c)                    (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMMeshBuilder_AddDestroyCallback(p,a,b)         (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMMeshBuilder_DeleteDestroyCallback(p,a,b)      (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMMeshBuilder_SetAppData(p,a)                   (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMMeshBuilder_GetAppData(p)                     (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMMeshBuilder_SetName(p,a)                      (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMMeshBuilder_GetName(p,a,b)                    (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMMeshBuilder_GetClassName(p,a,b)               (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMMeshBuilder methods ***/
#define IDirect3DRMMeshBuilder_Load(p,a,b,c,d,e)                 (p)->lpVtbl->Load(p,a,b,c,d,e)
#define IDirect3DRMMeshBuilder_Save(p,a,b,c)                     (p)->lpVtbl->Save(p,a,b,c)
#define IDirect3DRMMeshBuilder_Scale(p,a,b,c)                    (p)->lpVtbl->Scale(p,a,b,c)
#define IDirect3DRMMeshBuilder_Translate(p,a,b,c)                (p)->lpVtbl->Translate(p,a)
#define IDirect3DRMMeshBuilder_SetColorSource(p,a)               (p)->lpVtbl->SetColorSource(p,a,b,c)
#define IDirect3DRMMeshBuilder_GetBox(p,a)                       (p)->lpVtbl->GetBox(p,a)
#define IDirect3DRMMeshBuilder_GenerateNormals(p)                (p)->lpVtbl->GenerateNormals(p)
#define IDirect3DRMMeshBuilder_GetColorSource(p)                 (p)->lpVtbl->GetColorSource(p)
#define IDirect3DRMMeshBuilder_AddMesh(p,a)                      (p)->lpVtbl->AddMesh(p,a)
#define IDirect3DRMMeshBuilder_AddMeshBuilder(p,a)               (p)->lpVtbl->AddMeshBuilder(p,a)
#define IDirect3DRMMeshBuilder_AddFrame(p,a)                     (p)->lpVtbl->AddFrame(p,a)
#define IDirect3DRMMeshBuilder_AddFace(p,a)                      (p)->lpVtbl->AddFace(p,a)
#define IDirect3DRMMeshBuilder_AddFaces(p,a,b,c,d,e,f)           (p)->lpVtbl->AddFaces(p,a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder_ReserveSpace(p,a,b,c)             (p)->lpVtbl->ReserveSpace(p,a,b,c)
#define IDirect3DRMMeshBuilder_SetColorRGB(p,a,b,c)              (p)->lpVtbl->SetColorRGB(p,a,b,c)
#define IDirect3DRMMeshBuilder_SetColor(p,a)                     (p)->lpVtbl->SetColor(p,a)
#define IDirect3DRMMeshBuilder_SetTexture(p,a)                   (p)->lpVtbl->SetTexture(p,a)
#define IDirect3DRMMeshBuilder_SetMaterial(p,a)                  (p)->lpVtbl->SetMaterial(p,a)
#define IDirect3DRMMeshBuilder_SetTextureTopology(p,a,b)         (p)->lpVtbl->SetTextureTopology(p,a,b)
#define IDirect3DRMMeshBuilder_SetQuality(p,a)                   (p)->lpVtbl->SetQuality(p,a)
#define IDirect3DRMMeshBuilder_SetPerspective(p,a)               (p)->lpVtbl->SetPerspective(p,a)
#define IDirect3DRMMeshBuilder_SetVertex(p,a,b,c,d)              (p)->lpVtbl->SetVertex(p,a,b,c,d)
#define IDirect3DRMMeshBuilder_SetNormal(p,a,b,c,d)              (p)->lpVtbl->SetNormal(p,a,b,c,d)
#define IDirect3DRMMeshBuilder_SetTextureCoordinates(p,a,b,c)    (p)->lpVtbl->SetTextureCoordinates(p,a,b,c)
#define IDirect3DRMMeshBuilder_SetVertexColor(p,a,b)             (p)->lpVtbl->SetVertexColor(p,a,b)
#define IDirect3DRMMeshBuilder_SetVertexColorRGB(p,a,b,c,d)      (p)->lpVtbl->SetVertexColorRGB(p,a,b,c,d)
#define IDirect3DRMMeshBuilder_GetFaces(p,a)                     (p)->lpVtbl->GetFaces(p,a)
#define IDirect3DRMMeshBuilder_GetVertices(p,a,b,c,d,e,f)        (p)->lpVtbl->GetVertices(p,a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder_GetTextureCoordinates(p,a,b,c)    (p)->lpVtbl->GetTextureCoordinates(p,a,b,c)
#define IDirect3DRMMeshBuilder_AddVertex(p,a,b,c)                (p)->lpVtbl->AddVertex(p,a,b,c)
#define IDirect3DRMMeshBuilder_AddNormal(p,a,b,c)                (p)->lpVtbl->AddNormal(p,a,b,c)
#define IDirect3DRMMeshBuilder_CreateFace(p,a)                   (p)->lpVtbl->CreateFace(p,a)
#define IDirect3DRMMeshBuilder_GetQuality(p)                     (p)->lpVtbl->GetQuality(p)
#define IDirect3DRMMeshBuilder_GetPerspective(p)                 (p)->lpVtbl->GetPerspective(p)
#define IDirect3DRMMeshBuilder_GetFaceCount(p)                   (p)->lpVtbl->GetFaceCount(p)
#define IDirect3DRMMeshBuilder_GetVertexCount(p)                 (p)->lpVtbl->GetVertexCount(p)
#define IDirect3DRMMeshBuilder_GetVertexColor(p,a)               (p)->lpVtbl->GetVertexColor(p,a)
#define IDirect3DRMMeshBuilder_CreateMesh(p,a)                   (p)->lpVtbl->CreateMesh(p,a)
#else
/*** IUnknown methods ***/
#define IDirect3DRMMeshBuilder_QueryInterface(p,a,b)             (p)->QueryInterface(a,b)
#define IDirect3DRMMeshBuilder_AddRef(p)                         (p)->AddRef()
#define IDirect3DRMMeshBuilder_Release(p)                        (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMeshBuilder_Clone(p,a,b,c)                    (p)->Clone(a,b,c)
#define IDirect3DRMMeshBuilder_AddDestroyCallback(p,a,b)         (p)->AddDestroyCallback(a,b)
#define IDirect3DRMMeshBuilder_DeleteDestroyCallback(p,a,b)      (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMMeshBuilder_SetAppData(p,a)                   (p)->SetAppData(a)
#define IDirect3DRMMeshBuilder_GetAppData(p)                     (p)->GetAppData()
#define IDirect3DRMMeshBuilder_SetName(p,a)                      (p)->SetName(a)
#define IDirect3DRMMeshBuilder_GetName(p,a,b)                    (p)->GetName(a,b)
#define IDirect3DRMMeshBuilder_GetClassName(p,a,b)               (p)->GetClassName(a,b)
/*** IDirect3DRMMeshBuilder methods ***/
#define IDirect3DRMMeshBuilder_Load(p,a,b,c,d,e)                 (p)->Load(a,b,c,d,e)
#define IDirect3DRMMeshBuilder_Save(p,a,b,c)                     (p)->Save(a,b,c)
#define IDirect3DRMMeshBuilder_Scale(p,a,b,c)                    (p)->Scale(a,b,c)
#define IDirect3DRMMeshBuilder_Translate(p,a,b,c)                (p)->Translate(a)
#define IDirect3DRMMeshBuilder_SetColorSource(p,a)               (p)->SetColorSource(a,b,c)
#define IDirect3DRMMeshBuilder_GetBox(p,a)                       (p)->GetBox(a)
#define IDirect3DRMMeshBuilder_GenerateNormals(p)                (p)->GenerateNormals()
#define IDirect3DRMMeshBuilder_GetColorSource(p)                 (p)->GetColorSource()
#define IDirect3DRMMeshBuilder_AddMesh(p,a)                      (p)-->AddMesh(a)
#define IDirect3DRMMeshBuilder_AddMeshBuilder(p,a)               (p)->AddMeshBuilder(a)
#define IDirect3DRMMeshBuilder_AddFrame(p,a)                     (p)->AddFrame(a)
#define IDirect3DRMMeshBuilder_AddFace(p,a)                      (p)->AddFace(a)
#define IDirect3DRMMeshBuilder_AddFaces(p,a,b,c,d,e,f)           (p)->AddFaces(a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder_ReserveSpace(p,a,b,c)             (p)->ReserveSpace(a,b,c)
#define IDirect3DRMMeshBuilder_SetColorRGB(p,a,b,c)              (p)->SetColorRGB(a,b,c)
#define IDirect3DRMMeshBuilder_SetColor(p,a)                     (p)->SetColor(a)
#define IDirect3DRMMeshBuilder_SetTexture(p,a)                   (p)->SetTexture(a)
#define IDirect3DRMMeshBuilder_SetMaterial(p,a)                  (p)->SetMaterial(a)
#define IDirect3DRMMeshBuilder_SetTextureTopology(p,a,b)         (p)->SetTextureTopology(a,b)
#define IDirect3DRMMeshBuilder_SetQuality(p,a)                   (p)->SetQuality(a)
#define IDirect3DRMMeshBuilder_SetPerspective(p,a)               (p)->SetPerspective(a)
#define IDirect3DRMMeshBuilder_SetVertex(p,a,b,c,d)              (p)->SetVertex(a,b,c,d)
#define IDirect3DRMMeshBuilder_SetNormal(p,a,b,c,d)              (p)->SetNormal(a,b,c,d)
#define IDirect3DRMMeshBuilder_SetTextureCoordinates(p,a,b,c)    (p)->SetTextureCoordinates(a,b,c)
#define IDirect3DRMMeshBuilder_SetVertexColor(p,a,b)             (p)->SetVertexColor(a,b)
#define IDirect3DRMMeshBuilder_SetVertexColorRGB(p,a,b,c,d)      (p)->SetVertexColorRGB(a,b,c,d)
#define IDirect3DRMMeshBuilder_GetFaces(p,a)                     (p)->GetFaces(a)
#define IDirect3DRMMeshBuilder_GetVertices(p,a,b,c,d,e,f)        (p)->GetVertices(a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder_GetTextureCoordinates(p,a,b,c)    (p)->GetTextureCoordinates(a,b,c)
#define IDirect3DRMMeshBuilder_AddVertex(p,a,b,c)                (p)->AddVertex(a,b,c)
#define IDirect3DRMMeshBuilder_AddNormal(p,a,b,c)                (p)->AddNormal(a,b,c)
#define IDirect3DRMMeshBuilder_CreateFace(p,a)                   (p)->CreateFace(a)
#define IDirect3DRMMeshBuilder_GetQuality(p)                     (p)->GetQuality()
#define IDirect3DRMMeshBuilder_GetPerspective(p)                 (p)->GetPerspective()
#define IDirect3DRMMeshBuilder_GetFaceCount(p)                   (p)->GetFaceCount()
#define IDirect3DRMMeshBuilder_GetVertexCount(p)                 (p)->GetVertexCount()
#define IDirect3DRMMeshBuilder_GetVertexColor(p,a)               (p)->GetVertexColor(a)
#define IDirect3DRMMeshBuilder_CreateMesh(p,a)                   (p)->CreateMesh(a)
#endif

/*****************************************************************************
 * IDirect3DRMMeshBuilder2 interface
 */
#define SDL_INTERFACE IDirect3DRMMeshBuilder2
SDL_DECLARE_INTERFACE_(IDirect3DRMMeshBuilder2,IDirect3DRMMeshBuilder)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMMeshBuilder methods ***/
    SDL_STDMETHOD(Load)(SDL_THIS_ void *filename, void *name, D3DRMLOADOPTIONS flags,
            D3DRMLOADTEXTURECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(Save)(SDL_THIS_ const char *filename, D3DRMXOFFORMAT, D3DRMSAVEOPTIONS save) SDL_PURE;
    SDL_STDMETHOD(Scale)(SDL_THIS_ D3DVALUE sx, D3DVALUE sy, D3DVALUE sz) SDL_PURE;
    SDL_STDMETHOD(Translate)(SDL_THIS_ D3DVALUE tx, D3DVALUE ty, D3DVALUE tz) SDL_PURE;
    SDL_STDMETHOD(SetColorSource)(SDL_THIS_ D3DRMCOLORSOURCE) SDL_PURE;
    SDL_STDMETHOD(GetBox)(SDL_THIS_ D3DRMBOX *) SDL_PURE;
    SDL_STDMETHOD(GenerateNormals)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMCOLORSOURCE, GetColorSource)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(AddMesh)(SDL_THIS_ IDirect3DRMMesh *mesh) SDL_PURE;
    SDL_STDMETHOD(AddMeshBuilder)(SDL_THIS_ IDirect3DRMMeshBuilder *mesh_builder) SDL_PURE;
    SDL_STDMETHOD(AddFrame)(SDL_THIS_ IDirect3DRMFrame *frame) SDL_PURE;
    SDL_STDMETHOD(AddFace)(SDL_THIS_ IDirect3DRMFace *face) SDL_PURE;
    SDL_STDMETHOD(AddFaces)(SDL_THIS_ SDL_DWORD vertex_count, D3DVECTOR *vertices, SDL_DWORD normal_count,
            D3DVECTOR *normals, SDL_DWORD *face_data, struct IDirect3DRMFaceArray **array) SDL_PURE;
    SDL_STDMETHOD(ReserveSpace)(SDL_THIS_ SDL_DWORD vertex_Count, SDL_DWORD normal_count, SDL_DWORD face_count) SDL_PURE;
    SDL_STDMETHOD(SetColorRGB)(SDL_THIS_ D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD(SetColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetTexture)(SDL_THIS_ struct IDirect3DRMTexture *texture) SDL_PURE;
    SDL_STDMETHOD(SetMaterial)(SDL_THIS_ struct IDirect3DRMMaterial *material) SDL_PURE;
    SDL_STDMETHOD(SetTextureTopology)(SDL_THIS_ SDL_BOOL wrap_u, SDL_BOOL wrap_v) SDL_PURE;
    SDL_STDMETHOD(SetQuality)(SDL_THIS_ D3DRMRENDERQUALITY) SDL_PURE;
    SDL_STDMETHOD(SetPerspective)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetVertex)(SDL_THIS_ SDL_DWORD index, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(SetNormal)(SDL_THIS_ SDL_DWORD index, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(SetTextureCoordinates)(SDL_THIS_ SDL_DWORD index, D3DVALUE u, D3DVALUE v) SDL_PURE;
    SDL_STDMETHOD(SetVertexColor)(SDL_THIS_ SDL_DWORD index, D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetVertexColorRGB)(SDL_THIS_ SDL_DWORD index, D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD(GetFaces)(SDL_THIS_ struct IDirect3DRMFaceArray **array) SDL_PURE;
    SDL_STDMETHOD(GetVertices)(SDL_THIS_ SDL_DWORD *vcount, D3DVECTOR *vertices, SDL_DWORD *ncount, D3DVECTOR *normals,
        SDL_DWORD *face_data_size, SDL_DWORD *face_data) SDL_PURE;
    SDL_STDMETHOD(GetTextureCoordinates)(SDL_THIS_ SDL_DWORD index, D3DVALUE *u, D3DVALUE *v) SDL_PURE;
    SDL_STDMETHOD_(int, AddVertex)(SDL_THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD_(int, AddNormal)(SDL_THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(CreateFace)(SDL_THIS_ IDirect3DRMFace **face) SDL_PURE;
    SDL_STDMETHOD_(D3DRMRENDERQUALITY, GetQuality)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetPerspective)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(int, GetFaceCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(int, GetVertexCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetVertexColor)(SDL_THIS_ SDL_DWORD index) SDL_PURE;
    SDL_STDMETHOD(CreateMesh)(SDL_THIS_ IDirect3DRMMesh **mesh) SDL_PURE;
    /*** IDirect3DRMMeshBuilder2 methods ***/
    SDL_STDMETHOD(GenerateNormals2)(SDL_THIS_ D3DVALUE crease, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(GetFace)(SDL_THIS_ SDL_DWORD index, IDirect3DRMFace **face) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMMeshBuilder2_QueryInterface(p,a,b)            (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMMeshBuilder2_AddRef(p)                        (p)->lpVtbl->AddRef(p)
#define IDirect3DRMMeshBuilder2_Release(p)                       (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMeshBuilder2_Clone(p,a,b,c)                   (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMMeshBuilder2_AddDestroyCallback(p,a,b)        (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMMeshBuilder2_DeleteDestroyCallback(p,a,b)     (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMMeshBuilder2_SetAppData(p,a)                  (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMMeshBuilder2_GetAppData(p)                    (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMMeshBuilder2_SetName(p,a)                     (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMMeshBuilder2_GetName(p,a,b)                   (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMMeshBuilder2_GetClassName(p,a,b)              (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMMeshBuilder methods ***/
#define IDirect3DRMMeshBuilder2_Load(p,a,b,c,d,e)                (p)->lpVtbl->Load(p,a,b,c,d,e)
#define IDirect3DRMMeshBuilder2_Save(p,a,b,c)                    (p)->lpVtbl->Save(p,a,b,c)
#define IDirect3DRMMeshBuilder2_Scale(p,a,b,c)                   (p)->lpVtbl->Scale(p,a,b,c)
#define IDirect3DRMMeshBuilder2_Translate(p,a,b,c)               (p)->lpVtbl->Translate(p,a)
#define IDirect3DRMMeshBuilder2_SetColorSource(p,a)              (p)->lpVtbl->SetColorSource(p,a,b,c)
#define IDirect3DRMMeshBuilder2_GetBox(p,a)                      (p)->lpVtbl->GetBox(p,a)
#define IDirect3DRMMeshBuilder2_GenerateNormals(p)               (p)->lpVtbl->GenerateNormals(p)
#define IDirect3DRMMeshBuilder2_GetColorSource(p)                (p)->lpVtbl->GetColorSource(p)
#define IDirect3DRMMeshBuilder2_AddMesh(p,a)                     (p)->lpVtbl->AddMesh(p,a)
#define IDirect3DRMMeshBuilder2_AddMeshBuilder(p,a)              (p)->lpVtbl->AddMeshBuilder(p,a)
#define IDirect3DRMMeshBuilder2_AddFrame(p,a)                    (p)->lpVtbl->AddFrame(p,a)
#define IDirect3DRMMeshBuilder2_AddFace(p,a)                     (p)->lpVtbl->AddFace(p,a)
#define IDirect3DRMMeshBuilder2_AddFaces(p,a,b,c,d,e,f)          (p)->lpVtbl->AddFaces(p,a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder2_ReserveSpace(p,a,b,c)            (p)->lpVtbl->ReserveSpace(p,a,b,c)
#define IDirect3DRMMeshBuilder2_SetColorRGB(p,a,b,c)             (p)->lpVtbl->SetColorRGB(p,a,b,c)
#define IDirect3DRMMeshBuilder2_SetColor(p,a)                    (p)->lpVtbl->SetColor(p,a)
#define IDirect3DRMMeshBuilder2_SetTexture(p,a)                  (p)->lpVtbl->SetTexture(p,a)
#define IDirect3DRMMeshBuilder2_SetMaterial(p,a)                 (p)->lpVtbl->SetMaterial(p,a)
#define IDirect3DRMMeshBuilder2_SetTextureTopology(p,a,b)        (p)->lpVtbl->SetTextureTopology(p,a,b)
#define IDirect3DRMMeshBuilder2_SetQuality(p,a)                  (p)->lpVtbl->SetQuality(p,a)
#define IDirect3DRMMeshBuilder2_SetPerspective(p,a)              (p)->lpVtbl->SetPerspective(p,a)
#define IDirect3DRMMeshBuilder2_SetVertex(p,a,b,c,d)             (p)->lpVtbl->SetVertex(p,a,b,c,d)
#define IDirect3DRMMeshBuilder2_SetNormal(p,a,b,c,d)             (p)->lpVtbl->SetNormal(p,a,b,c,d)
#define IDirect3DRMMeshBuilder2_SetTextureCoordinates(p,a,b,c)   (p)->lpVtbl->SetTextureCoordinates(p,a,b,c)
#define IDirect3DRMMeshBuilder2_SetVertexColor(p,a,b)            (p)->lpVtbl->SetVertexColor(p,a,b)
#define IDirect3DRMMeshBuilder2_SetVertexColorRGB(p,a,b,c,d)     (p)->lpVtbl->SetVertexColorRGB(p,a,b,c,d)
#define IDirect3DRMMeshBuilder2_GetFaces(p,a)                    (p)->lpVtbl->GetFaces(p,a)
#define IDirect3DRMMeshBuilder2_GetVertices(p,a,b,c,d,e,f)       (p)->lpVtbl->GetVertices(p,a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder2_GetTextureCoordinates(p,a,b,c)   (p)->lpVtbl->GetTextureCoordinates(p,a,b,c)
#define IDirect3DRMMeshBuilder2_AddVertex(p,a,b,c)               (p)->lpVtbl->AddVertex(p,a,b,c)
#define IDirect3DRMMeshBuilder2_AddNormal(p,a,b,c)               (p)->lpVtbl->AddNormal(p,a,b,c)
#define IDirect3DRMMeshBuilder2_CreateFace(p,a)                  (p)->lpVtbl->CreateFace(p,a)
#define IDirect3DRMMeshBuilder2_GetQuality(p)                    (p)->lpVtbl->GetQuality(p)
#define IDirect3DRMMeshBuilder2_GetPerspective(p)                (p)->lpVtbl->GetPerspective(p)
#define IDirect3DRMMeshBuilder2_GetFaceCount(p)                  (p)->lpVtbl->GetFaceCount(p)
#define IDirect3DRMMeshBuilder2_GetVertexCount(p)                (p)->lpVtbl->GetVertexCount(p)
#define IDirect3DRMMeshBuilder2_GetVertexColor(p,a)              (p)->lpVtbl->GetVertexColor(p,a)
#define IDirect3DRMMeshBuilder2_CreateMesh(p,a)                  (p)->lpVtbl->CreateMesh(p,a)
/*** IDirect3DRMMeshBuilder2 methods ***/
#define IDirect3DRMMeshBuilder2_GenerateNormals2(p,a,b)          (p)->lpVtbl->GenerateNormals2(p,a,b)
#define IDirect3DRMMeshBuilder2_GetFace(p,a,b)                   (p)->lpVtbl->GetFace(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMMeshBuilder2_QueryInterface(p,a,b)            (p)->QueryInterface(a,b)
#define IDirect3DRMMeshBuilder2_AddRef(p)                        (p)->AddRef()
#define IDirect3DRMMeshBuilder2_Release(p)                       (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMeshBuilder2_Clone(p,a,b,c)                   (p)->Clone(a,b,c)
#define IDirect3DRMMeshBuilder2_AddDestroyCallback(p,a,b)        (p)->AddDestroyCallback(a,b)
#define IDirect3DRMMeshBuilder2_DeleteDestroyCallback(p,a,b)     (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMMeshBuilder2_SetAppData(p,a)                  (p)->SetAppData(a)
#define IDirect3DRMMeshBuilder2_GetAppData(p)                    (p)->GetAppData()
#define IDirect3DRMMeshBuilder2_SetName(p,a)                     (p)->SetName(a)
#define IDirect3DRMMeshBuilder2_GetName(p,a,b)                   (p)->GetName(a,b)
#define IDirect3DRMMeshBuilder2_GetClassName(p,a,b)              (p)->GetClassName(a,b)
/*** IDirect3DRMMeshBuilder methods ***/
#define IDirect3DRMMeshBuilder2_Load(p,a,b,c,d,e)                (p)->Load(a,b,c,d,e)
#define IDirect3DRMMeshBuilder2_Save(p,a,b,c)                    (p)->Save(a,b,c)
#define IDirect3DRMMeshBuilder2_Scale(p,a,b,c)                   (p)->Scale(a,b,c)
#define IDirect3DRMMeshBuilder2_Translate(p,a,b,c)               (p)->Translate(a)
#define IDirect3DRMMeshBuilder2_SetColorSource(p,a)              (p)->SetColorSource(a,b,c)
#define IDirect3DRMMeshBuilder2_GetBox(p,a)                      (p)->GetBox(a)
#define IDirect3DRMMeshBuilder2_GenerateNormals(p)               (p)->GenerateNormals()
#define IDirect3DRMMeshBuilder2_GetColorSource(p)                (p)->GetColorSource()
#define IDirect3DRMMeshBuilder2_AddMesh(p,a)                     (p)-->AddMesh(a)
#define IDirect3DRMMeshBuilder2_AddMeshBuilder(p,a)              (p)->AddMeshBuilder(a)
#define IDirect3DRMMeshBuilder2_AddFrame(p,a)                    (p)->AddFrame(a)
#define IDirect3DRMMeshBuilder2_AddFace(p,a)                     (p)->AddFace(a)
#define IDirect3DRMMeshBuilder2_AddFaces(p,a,b,c,d,e,f)          (p)->AddFaces(a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder2_ReserveSpace(p,a,b,c)            (p)->ReserveSpace(a,b,c)
#define IDirect3DRMMeshBuilder2_SetColorRGB(p,a,b,c)             (p)->SetColorRGB(a,b,c)
#define IDirect3DRMMeshBuilder2_SetColor(p,a)                    (p)->SetColor(a)
#define IDirect3DRMMeshBuilder2_SetTexture(p,a)                  (p)->SetTexture(a)
#define IDirect3DRMMeshBuilder2_SetMaterial(p,a)                 (p)->SetMaterial(a)
#define IDirect3DRMMeshBuilder2_SetTextureTopology(p,a,b)        (p)->SetTextureTopology(a,b)
#define IDirect3DRMMeshBuilder2_SetQuality(p,a)                  (p)->SetQuality(a)
#define IDirect3DRMMeshBuilder2_SetPerspective(p,a)              (p)->SetPerspective(a)
#define IDirect3DRMMeshBuilder2_SetVertex(p,a,b,c,d)             (p)->SetVertex(a,b,c,d)
#define IDirect3DRMMeshBuilder2_SetNormal(p,a,b,c,d)             (p)->SetNormal(a,b,c,d)
#define IDirect3DRMMeshBuilder2_SetTextureCoordinates(p,a,b,c)   (p)->SetTextureCoordinates(a,b,c)
#define IDirect3DRMMeshBuilder2_SetVertexColor(p,a,b)            (p)->SetVertexColor(a,b)
#define IDirect3DRMMeshBuilder2_SetVertexColorRGB(p,a,b,c,d)     (p)->SetVertexColorRGB(a,b,c,d)
#define IDirect3DRMMeshBuilder2_GetFaces(p,a)                    (p)->GetFaces(a)
#define IDirect3DRMMeshBuilder2_GetVertices(p,a,b,c,d,e,f)       (p)->GetVertices(a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder2_GetTextureCoordinates(p,a,b,c)   (p)->GetTextureCoordinates(a,b,c)
#define IDirect3DRMMeshBuilder2_AddVertex(p,a,b,c)               (p)->AddVertex(a,b,c)
#define IDirect3DRMMeshBuilder2_AddNormal(p,a,b,c)               (p)->AddNormal(a,b,c)
#define IDirect3DRMMeshBuilder2_CreateFace(p,a)                  (p)->CreateFace(a)
#define IDirect3DRMMeshBuilder2_GetQuality(p)                    (p)->GetQuality()
#define IDirect3DRMMeshBuilder2_GetPerspective(p)                (p)->GetPerspective()
#define IDirect3DRMMeshBuilder2_GetFaceCount(p)                  (p)->GetFaceCount()
#define IDirect3DRMMeshBuilder2_GetVertexCount(p)                (p)->GetVertexCount()
#define IDirect3DRMMeshBuilder2_GetVertexColor(p,a)              (p)->GetVertexColor(a)
#define IDirect3DRMMeshBuilder2_CreateMesh(p,a)                  (p)->CreateMesh(a)
/*** IDirect3DRMMeshBuilder2 methods ***/
#define IDirect3DRMMeshBuilder2_GenerateNormals2(p,a,b)          (p)->GenerateNormals2(a,b)
#define IDirect3DRMMeshBuilder2_GetFace(p,a,b)                   (p)->GetFace(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMMeshBuilder3 interface
 */
#define SDL_INTERFACE IDirect3DRMMeshBuilder3
SDL_DECLARE_INTERFACE_(IDirect3DRMMeshBuilder3,IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMMeshBuilder3 methods ***/
    SDL_STDMETHOD(Load)(SDL_THIS_ void *filename, void *name, D3DRMLOADOPTIONS flags,
            D3DRMLOADTEXTURE3CALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(Save)(SDL_THIS_ const char *filename, D3DRMXOFFORMAT, D3DRMSAVEOPTIONS save) SDL_PURE;
    SDL_STDMETHOD(Scale)(SDL_THIS_ D3DVALUE sx, D3DVALUE sy, D3DVALUE sz) SDL_PURE;
    SDL_STDMETHOD(Translate)(SDL_THIS_ D3DVALUE tx, D3DVALUE ty, D3DVALUE tz) SDL_PURE;
    SDL_STDMETHOD(SetColorSource)(SDL_THIS_ D3DRMCOLORSOURCE) SDL_PURE;
    SDL_STDMETHOD(GetBox)(SDL_THIS_ D3DRMBOX *) SDL_PURE;
    SDL_STDMETHOD(GenerateNormals)(SDL_THIS_ D3DVALUE crease, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD_(D3DRMCOLORSOURCE, GetColorSource)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(AddMesh)(SDL_THIS_ IDirect3DRMMesh *mesh) SDL_PURE;
    SDL_STDMETHOD(AddMeshBuilder)(SDL_THIS_ IDirect3DRMMeshBuilder3 *mesh_builder, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(AddFrame)(SDL_THIS_ IDirect3DRMFrame3 *frame) SDL_PURE;
    SDL_STDMETHOD(AddFace)(SDL_THIS_ IDirect3DRMFace2 *face) SDL_PURE;
    SDL_STDMETHOD(AddFaces)(SDL_THIS_ SDL_DWORD vertex_count, D3DVECTOR *vertices, SDL_DWORD normal_count,
            D3DVECTOR *normals, SDL_DWORD *face_data, struct IDirect3DRMFaceArray **array) SDL_PURE;
    SDL_STDMETHOD(ReserveSpace)(SDL_THIS_ SDL_DWORD vertex_Count, SDL_DWORD normal_count, SDL_DWORD face_count) SDL_PURE;
    SDL_STDMETHOD(SetColorRGB)(SDL_THIS_ D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD(SetColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetTexture)(SDL_THIS_ struct IDirect3DRMTexture3 *texture) SDL_PURE;
    SDL_STDMETHOD(SetMaterial)(SDL_THIS_ struct IDirect3DRMMaterial2 *material) SDL_PURE;
    SDL_STDMETHOD(SetTextureTopology)(SDL_THIS_ SDL_BOOL wrap_u, SDL_BOOL wrap_v) SDL_PURE;
    SDL_STDMETHOD(SetQuality)(SDL_THIS_ D3DRMRENDERQUALITY) SDL_PURE;
    SDL_STDMETHOD(SetPerspective)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetVertex)(SDL_THIS_ SDL_DWORD index, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(SetNormal)(SDL_THIS_ SDL_DWORD index, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(SetTextureCoordinates)(SDL_THIS_ SDL_DWORD index, D3DVALUE u, D3DVALUE v) SDL_PURE;
    SDL_STDMETHOD(SetVertexColor)(SDL_THIS_ SDL_DWORD index, D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetVertexColorRGB)(SDL_THIS_ SDL_DWORD index, D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD(GetFaces)(SDL_THIS_ struct IDirect3DRMFaceArray **array) SDL_PURE;
    SDL_STDMETHOD(GetGeometry)(SDL_THIS_ SDL_DWORD *vcount, D3DVECTOR *vertices, SDL_DWORD *ncount, D3DVECTOR *normals,
        SDL_DWORD *face_data_size, SDL_DWORD *face_data) SDL_PURE;
    SDL_STDMETHOD(GetTextureCoordinates)(SDL_THIS_ SDL_DWORD index, D3DVALUE *u, D3DVALUE *v) SDL_PURE;
    SDL_STDMETHOD_(int, AddVertex)(SDL_THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD_(int, AddNormal)(SDL_THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(CreateFace)(SDL_THIS_ IDirect3DRMFace2 **face) SDL_PURE;
    SDL_STDMETHOD_(D3DRMRENDERQUALITY, GetQuality)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetPerspective)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(int, GetFaceCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(int, GetVertexCount)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetVertexColor)(SDL_THIS_ SDL_DWORD index) SDL_PURE;
    SDL_STDMETHOD(CreateMesh)(SDL_THIS_ IDirect3DRMMesh **mesh) SDL_PURE;
    SDL_STDMETHOD(GetFace)(SDL_THIS_ SDL_DWORD index, IDirect3DRMFace2 **face) SDL_PURE;
    SDL_STDMETHOD(GetVertex)(SDL_THIS_ SDL_DWORD index, D3DVECTOR *vector) SDL_PURE;
    SDL_STDMETHOD(GetNormal)(SDL_THIS_ SDL_DWORD index, D3DVECTOR *vector) SDL_PURE;
    SDL_STDMETHOD(DeleteVertices)(SDL_THIS_ SDL_DWORD IndexFirst, SDL_DWORD count) SDL_PURE;
    SDL_STDMETHOD(DeleteNormals)(SDL_THIS_ SDL_DWORD IndexFirst, SDL_DWORD count) SDL_PURE;
    SDL_STDMETHOD(DeleteFace)(SDL_THIS_ IDirect3DRMFace2 *face) SDL_PURE;
    SDL_STDMETHOD(Empty)(SDL_THIS_ SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(Optimize)(SDL_THIS_ SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(AddFacesIndexed)(SDL_THIS_ SDL_DWORD flags, SDL_DWORD *pvIndices, SDL_DWORD *pIndexFirst, SDL_DWORD *pCount) SDL_PURE;
    SDL_STDMETHOD(CreateSubMesh)(SDL_THIS_ IUnknown **mesh) SDL_PURE;
    SDL_STDMETHOD(GetParentMesh)(SDL_THIS_ SDL_DWORD flags, IUnknown **parent) SDL_PURE;
    SDL_STDMETHOD(GetSubMeshes)(SDL_THIS_ SDL_DWORD *count, IUnknown **meshes) SDL_PURE;
    SDL_STDMETHOD(DeleteSubMesh)(SDL_THIS_ IUnknown *mesh) SDL_PURE;
    SDL_STDMETHOD(Enable)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(GetEnable)(SDL_THIS_ SDL_DWORD *) SDL_PURE;
    SDL_STDMETHOD(AddTriangles)(SDL_THIS_ SDL_DWORD flags, SDL_DWORD format, SDL_DWORD vertex_count, void *data) SDL_PURE;
    SDL_STDMETHOD(SetVertices)(SDL_THIS_ SDL_DWORD start_idx, SDL_DWORD count, D3DVECTOR *v) SDL_PURE;
    SDL_STDMETHOD(GetVertices)(SDL_THIS_ SDL_DWORD start_idx, SDL_DWORD *count, D3DVECTOR *v) SDL_PURE;
    SDL_STDMETHOD(SetNormals)(SDL_THIS_ SDL_DWORD start_idx, SDL_DWORD count, D3DVECTOR *v) SDL_PURE;
    SDL_STDMETHOD(GetNormals)(SDL_THIS_ SDL_DWORD start_idx, SDL_DWORD *count, D3DVECTOR *v) SDL_PURE;
    SDL_STDMETHOD_(int, GetNormalCount)(SDL_THIS) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMMeshBuilder3_QueryInterface(p,a,b)            (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMMeshBuilder3_AddRef(p)                        (p)->lpVtbl->AddRef(p)
#define IDirect3DRMMeshBuilder3_Release(p)                       (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMeshBuilder3_Clone(p,a,b,c)                   (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMMeshBuilder3_AddDestroyCallback(p,a,b)        (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMMeshBuilder3_DeleteDestroyCallback(p,a,b)     (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMMeshBuilder3_SetAppData(p,a)                  (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMMeshBuilder3_GetAppData(p)                    (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMMeshBuilder3_SetName(p,a)                     (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMMeshBuilder3_GetName(p,a,b)                   (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMMeshBuilder3_GetClassName(p,a,b)              (p)->lpVtbl->GetClassName(p,a,b)

/*** IDirect3DRMMeshBuilder3 methods ***/
#define IDirect3DRMMeshBuilder3_Load(p,a,b,c,d,e)                (p)->lpVtbl->Load(p,a,b,c,d,e)
#define IDirect3DRMMeshBuilder3_Save(p,a,b,c)                    (p)->lpVtbl->Save(p,a,b,c)
#define IDirect3DRMMeshBuilder3_Scale(p,a,b,c)                   (p)->lpVtbl->Scale(p,a,b,c)
#define IDirect3DRMMeshBuilder3_Translate(p,a,b,c)               (p)->lpVtbl->Translate(p,a)
#define IDirect3DRMMeshBuilder3_SetColorSource(p,a)              (p)->lpVtbl->SetColorSource(p,a,b,c)
#define IDirect3DRMMeshBuilder3_GetBox(p,a)                      (p)->lpVtbl->GetBox(p,a)
#define IDirect3DRMMeshBuilder3_GenerateNormals(p,a,b)           (p)->lpVtbl->GenerateNormals(p,a,b)
#define IDirect3DRMMeshBuilder3_GetColorSource(p)                (p)->lpVtbl->GetColorSource(p)
#define IDirect3DRMMeshBuilder3_AddMesh(p,a)                     (p)->lpVtbl->AddMesh(p,a)
#define IDirect3DRMMeshBuilder3_AddMeshBuilder(p,a)              (p)->lpVtbl->AddMeshBuilder(p,a)
#define IDirect3DRMMeshBuilder3_AddFrame(p,a)                    (p)->lpVtbl->AddFrame(p,a)
#define IDirect3DRMMeshBuilder3_AddFace(p,a)                     (p)->lpVtbl->AddFace(p,a)
#define IDirect3DRMMeshBuilder3_AddFaces(p,a,b,c,d,e,f)          (p)->lpVtbl->AddFaces(p,a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder3_ReserveSpace(p,a,b,c)            (p)->lpVtbl->ReserveSpace(p,a,b,c)
#define IDirect3DRMMeshBuilder3_SetColorRGB(p,a,b,c)             (p)->lpVtbl->SetColorRGB(p,a,b,c)
#define IDirect3DRMMeshBuilder3_SetColor(p,a)                    (p)->lpVtbl->SetColor(p,a)
#define IDirect3DRMMeshBuilder3_SetTexture(p,a)                  (p)->lpVtbl->SetTexture(p,a)
#define IDirect3DRMMeshBuilder3_SetMaterial(p,a)                 (p)->lpVtbl->SetMaterial(p,a)
#define IDirect3DRMMeshBuilder3_SetTextureTopology(p,a,b)        (p)->lpVtbl->SetTextureTopology(p,a,b)
#define IDirect3DRMMeshBuilder3_SetQuality(p,a)                  (p)->lpVtbl->SetQuality(p,a)
#define IDirect3DRMMeshBuilder3_SetPerspective(p,a)              (p)->lpVtbl->SetPerspective(p,a)
#define IDirect3DRMMeshBuilder3_SetVertex(p,a,b,c,d)             (p)->lpVtbl->SetVertex(p,a,b,c,d)
#define IDirect3DRMMeshBuilder3_SetNormal(p,a,b,c,d)             (p)->lpVtbl->SetNormal(p,a,b,c,d)
#define IDirect3DRMMeshBuilder3_SetTextureCoordinates(p,a,b,c)   (p)->lpVtbl->SetTextureCoordinates(p,a,b,c)
#define IDirect3DRMMeshBuilder3_SetVertexColor(p,a,b)            (p)->lpVtbl->SetVertexColor(p,a,b)
#define IDirect3DRMMeshBuilder3_SetVertexColorRGB(p,a,b,c,d)     (p)->lpVtbl->SetVertexColorRGB(p,a,b,c,d)
#define IDirect3DRMMeshBuilder3_GetFaces(p,a)                    (p)->lpVtbl->GetFaces(p,a)
#define IDirect3DRMMeshBuilder3_GetGeometry(p,a,b,c,d,e,f)       (p)->lpVtbl->GetGeometry(p,a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder3_GetTextureCoordinates(p,a,b,c)   (p)->lpVtbl->GetTextureCoordinates(p,a,b,c)
#define IDirect3DRMMeshBuilder3_AddVertex(p,a,b,c)               (p)->lpVtbl->AddVertex(p,a,b,c)
#define IDirect3DRMMeshBuilder3_AddNormal(p,a,b,c)               (p)->lpVtbl->AddNormal(p,a,b,c)

#define IDirect3DRMMeshBuilder3_CreateFace(p,a)                  (p)->lpVtbl->CreateFace(p,a)
#define IDirect3DRMMeshBuilder3_GetQuality(p)                    (p)->lpVtbl->GetQuality(p)
#define IDirect3DRMMeshBuilder3_GetPerspective(p)                (p)->lpVtbl->GetPerspective(p)

#define IDirect3DRMMeshBuilder3_GetFaceCount(p)                  (p)->lpVtbl->GetFaceCount(p)
#define IDirect3DRMMeshBuilder3_GetVertexCount(p)                (p)->lpVtbl->GetVertexCount(p)
#define IDirect3DRMMeshBuilder3_GetVertexColor(p,a)              (p)->lpVtbl->GetVertexColor(p,a)
#define IDirect3DRMMeshBuilder3_CreateMesh(p,a)                  (p)->lpVtbl->CreateMesh(p,a)
#define IDirect3DRMMeshBuilder3_GetFace(p,a,b)                   (p)->lpVtbl->GetFace(p,a,b)
#define IDirect3DRMMeshBuilder3_GetVertex(p,a,b)                 (p)->lpVtbl->GetVertex(p,a,b)
#define IDirect3DRMMeshBuilder3_GetNormal(p,a,b)                 (p)->lpVtbl->GetNormal(p,a,b)
#define IDirect3DRMMeshBuilder3_DeleteVertices(p,a,b)            (p)->lpVtbl->DeleteVertices(p,a,b)
#define IDirect3DRMMeshBuilder3_DeleteNormals(p,a,b)             (p)->lpVtbl->DeleteNormals(p,a,b)
#define IDirect3DRMMeshBuilder3_DeleteFace(p,a)                  (p)->lpVtbl->DeleteFace(p,a)
#define IDirect3DRMMeshBuilder3_Empty(p,a)                       (p)->lpVtbl->Empty(p,a)
#define IDirect3DRMMeshBuilder3_Optimize(p,a)                    (p)->lpVtbl->Optimize(p,a)
#define IDirect3DRMMeshBuilder3_AddFacesIndexed(p,a,b,c,d)       (p)->lpVtbl->AddFacesIndexed(p,a,b,c,d)
#define IDirect3DRMMeshBuilder3_CreateSubMesh(p,a)               (p)->lpVtbl->CreateSubMesh(p,a)
#define IDirect3DRMMeshBuilder3_GetParentMesh(p,a,b)             (p)->lpVtbl->GetParentMesh(p,a,b)
#define IDirect3DRMMeshBuilder3_GetSubMeshes(p,a,b)              (p)->lpVtbl->GetSubMeshes(p,a,b)
#define IDirect3DRMMeshBuilder3_DeleteSubMesh(p,a)               (p)->lpVtbl->DeleteSubMesh(p,a)
#define IDirect3DRMMeshBuilder3_Enable(p,a)                      (p)->lpVtbl->Enable(p,a)
#define IDirect3DRMMeshBuilder3_AddTriangles(p,a,b,c,d)          (p)->lpVtbl->AddTriangles(p,a,b,c,d)
#define IDirect3DRMMeshBuilder3_SetVertices(p,a,b,c)             (p)->lpVtbl->SetVertices(p,a,b,c)
#define IDirect3DRMMeshBuilder3_GetVertices(p,a,b,c)             (p)->lpVtbl->GetVertices(p,a,b,c)
#define IDirect3DRMMeshBuilder3_SetNormals(p,a,b,c)              (p)->lpVtbl->SetNormals(p,a,b,c)
#define IDirect3DRMMeshBuilder3_GetNormals(p,a,b,c)              (p)->lpVtbl->GetNormals(p,a,b,c)
#define IDirect3DRMMeshBuilder3_GetNormalCount(p)                (p)->lpVtbl->GetNormalCount(p)
#else
/*** IUnknown methods ***/
#define IDirect3DRMMeshBuilder3_QueryInterface(p,a,b)            (p)->QueryInterface(a,b)
#define IDirect3DRMMeshBuilder3_AddRef(p)                        (p)->AddRef()
#define IDirect3DRMMeshBuilder3_Release(p)                       (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMeshBuilder3_Clone(p,a,b,c)                   (p)->Clone(a,b,c)
#define IDirect3DRMMeshBuilder3_AddDestroyCallback(p,a,b)        (p)->AddDestroyCallback(a,b)
#define IDirect3DRMMeshBuilder3_DeleteDestroyCallback(p,a,b)     (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMMeshBuilder3_SetAppData(p,a)                  (p)->SetAppData(a)
#define IDirect3DRMMeshBuilder3_GetAppData(p)                    (p)->GetAppData()
#define IDirect3DRMMeshBuilder3_SetName(p,a)                     (p)->SetName(a)
#define IDirect3DRMMeshBuilder3_GetName(p,a,b)                   (p)->GetName(a,b)
#define IDirect3DRMMeshBuilder3_GetClassName(p,a,b)              (p)->GetClassName(a,b)
/*** IDirect3DRMMeshBuilder3 methods ***/
#define IDirect3DRMMeshBuilder3_Load(p,a,b,c,d,e)                (p)->Load(a,b,c,d,e)
#define IDirect3DRMMeshBuilder3_Save(p,a,b,c)                    (p)->Save(a,b,c)
#define IDirect3DRMMeshBuilder3_Scale(p,a,b,c)                   (p)->Scale(a,b,c)
#define IDirect3DRMMeshBuilder3_Translate(p,a,b,c)               (p)->Translate(a)
#define IDirect3DRMMeshBuilder3_SetColorSource(p,a)              (p)->SetColorSource(a,b,c)
#define IDirect3DRMMeshBuilder3_GetBox(p,a)                      (p)->GetBox(a)
#define IDirect3DRMMeshBuilder3_GenerateNormals(p,a,b)           (p)->GenerateNormals(a,b)
#define IDirect3DRMMeshBuilder3_GetColorSource(p)                (p)->GetColorSource()
#define IDirect3DRMMeshBuilder3_AddMesh(p,a)                     (p)-->AddMesh(a)
#define IDirect3DRMMeshBuilder3_AddMeshBuilder(p,a)              (p)->AddMeshBuilder(a)
#define IDirect3DRMMeshBuilder3_AddFrame(p,a)                    (p)->AddFrame(a)
#define IDirect3DRMMeshBuilder3_AddFace(p,a)                     (p)->AddFace(a)
#define IDirect3DRMMeshBuilder3_AddFaces(p,a,b,c,d,e,f)          (p)->AddFaces(a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder3_ReserveSpace(p,a,b,c)            (p)->ReserveSpace(a,b,c)
#define IDirect3DRMMeshBuilder3_SetColorRGB(p,a,b,c)             (p)->SetColorRGB(a,b,c)
#define IDirect3DRMMeshBuilder3_SetColor(p,a)                    (p)->SetColor(a)
#define IDirect3DRMMeshBuilder3_SetTexture(p,a)                  (p)->SetTexture(a)
#define IDirect3DRMMeshBuilder3_SetMaterial(p,a)                 (p)->SetMaterial(a)
#define IDirect3DRMMeshBuilder3_SetTextureTopology(p,a,b)        (p)->SetTextureTopology(a,b)
#define IDirect3DRMMeshBuilder3_SetQuality(p,a)                  (p)->SetQuality(a)
#define IDirect3DRMMeshBuilder3_SetPerspective(p,a)              (p)->SetPerspective(a)
#define IDirect3DRMMeshBuilder3_SetVertex(p,a,b,c,d)             (p)->SetVertex(a,b,c,d)
#define IDirect3DRMMeshBuilder3_SetNormal(p,a,b,c,d)             (p)->SetNormal(a,b,c,d)
#define IDirect3DRMMeshBuilder3_SetTextureCoordinates(p,a,b,c)   (p)->SetTextureCoordinates(a,b,c)
#define IDirect3DRMMeshBuilder3_SetVertexColor(p,a,b)            (p)->SetVertexColor(a,b)
#define IDirect3DRMMeshBuilder3_SetVertexColorRGB(p,a,b,c,d)     (p)->SetVertexColorRGB(a,b,c,d)
#define IDirect3DRMMeshBuilder3_GetFaces(p,a)                    (p)->GetFaces(a)
#define IDirect3DRMMeshBuilder3_GetGeometry(p,a,b,c,d,e,f)       (p)->GetGeometry(a,b,c,d,e,f)
#define IDirect3DRMMeshBuilder3_GetTextureCoordinates(p,a,b,c)   (p)->GetTextureCoordinates(a,b,c)
#define IDirect3DRMMeshBuilder3_AddVertex(p,a,b,c)               (p)->AddVertex(a,b,c)
#define IDirect3DRMMeshBuilder3_AddNormal(p,a,b,c)               (p)->AddNormal(a,b,c)
#define IDirect3DRMMeshBuilder3_CreateFace(p,a)                  (p)->CreateFace(a)

#define IDirect3DRMMeshBuilder3_GetQuality(p)                    (p)->GetQuality()
#define IDirect3DRMMeshBuilder3_GetPerspective(p)                (p)->GetPerspective()
#define IDirect3DRMMeshBuilder3_GetFaceCount(p)                  (p)->GetFaceCount()
#define IDirect3DRMMeshBuilder3_GetVertexCount(p)                (p)->GetVertexCount()
#define IDirect3DRMMeshBuilder3_GetVertexColor(p,a)              (p)->GetVertexColor(a)
#define IDirect3DRMMeshBuilder3_CreateMesh(p,a)                  (p)->CreateMesh(a)
#define IDirect3DRMMeshBuilder3_GetFace(p,a,b)                   (p)->GetFace(a,b)
#define IDirect3DRMMeshBuilder3_GetVertex(p,a,b)                 (p)->GetVertex(a,b)
#define IDirect3DRMMeshBuilder3_GetNormal(p,a,b)                 (p)->GetNormal(a,b)
#define IDirect3DRMMeshBuilder3_DeleteVertices(p,a,b)            (p)->DeleteVertices(a,b)
#define IDirect3DRMMeshBuilder3_DeleteNormals(p,a,b)             (p)->DeleteNormals(a,b)
#define IDirect3DRMMeshBuilder3_DeleteFace(p,a)                  (p)->DeleteFace(a)
#define IDirect3DRMMeshBuilder3_Empty(p,a)                       (p)->Empty(a)
#define IDirect3DRMMeshBuilder3_Optimize(p,a)                    (p)->Optimize(a)
#define IDirect3DRMMeshBuilder3_AddFacesIndexed(p,a,b,c,d)       (p)->AddFacesIndexed(a,b,c,d)
#define IDirect3DRMMeshBuilder3_CreateSubMesh(p,a)               (p)->CreateSubMesh(a)
#define IDirect3DRMMeshBuilder3_GetParentMesh(p,a,b)             (p)->GetParentMesh(a,b)
#define IDirect3DRMMeshBuilder3_GetSubMeshes(p,a,b)              (p)->GetSubMeshes(a,b)
#define IDirect3DRMMeshBuilder3_DeleteSubMesh(p,a)               (p)->DeleteSubMesh(a)
#define IDirect3DRMMeshBuilder3_Enable(p,a)                      (p)->Enable(a)
#define IDirect3DRMMeshBuilder3_AddTriangles(p,a,b,c,d)          (p)->AddTriangles(a,b,c,d)
#define IDirect3DRMMeshBuilder3_SetVertices(p,a,b,c)             (p)->SetVertices(a,b,c)
#define IDirect3DRMMeshBuilder3_GetVertices(p,a,b,c)             (p)->GetVertices(a,b,c)
#define IDirect3DRMMeshBuilder3_SetNormals(p,a,b,c)              (p)->SetNormals(a,b,c)
#define IDirect3DRMMeshBuilder3_GetNormals(p,a,b,c)              (p)->GetNormals(a,b,c)
#define IDirect3DRMMeshBuilder3_GetNormalCount(p)                (p)->GetNormalCount()
#endif

/*****************************************************************************
 * IDirect3DRMLight interface
 */
#define SDL_INTERFACE IDirect3DRMLight
SDL_DECLARE_INTERFACE_(IDirect3DRMLight,IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMLight methods ***/
    SDL_STDMETHOD(SetType)(SDL_THIS_ D3DRMLIGHTTYPE) SDL_PURE;
    SDL_STDMETHOD(SetColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(SetColorRGB)(SDL_THIS_ D3DVALUE red, D3DVALUE green, D3DVALUE blue) SDL_PURE;
    SDL_STDMETHOD(SetRange)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetUmbra)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetPenumbra)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetConstantAttenuation)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetLinearAttenuation)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD(SetQuadraticAttenuation)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetRange)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetUmbra)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetPenumbra)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetConstantAttenuation)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetLinearAttenuation)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetQuadraticAttenuation)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetColor)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DRMLIGHTTYPE, GetType)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetEnableFrame)(SDL_THIS_ IDirect3DRMFrame *frame) SDL_PURE;
    SDL_STDMETHOD(GetEnableFrame)(SDL_THIS_ IDirect3DRMFrame **frame) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMLight_QueryInterface(p,a,b)            (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMLight_AddRef(p)                        (p)->lpVtbl->AddRef(p)
#define IDirect3DRMLight_Release(p)                       (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMLight_Clone(p,a,b,c)                   (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMLight_AddDestroyCallback(p,a,b)        (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMLight_DeleteDestroyCallback(p,a,b)     (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMLight_SetAppData(p,a)                  (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMLight_GetAppData(p)                    (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMLight_SetName(p,a)                     (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMLight_GetName(p,a,b)                   (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMLight_GetClassName(p,a,b)              (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMLight methods ***/
#define IDirect3DRMLight_SetType(p,a)                     (p)->lpVtbl->SetType(p,a)
#define IDirect3DRMLight_SetColor(p,a)                    (p)->lpVtbl->SetColor(p,a)
#define IDirect3DRMLight_SetColorRGB(p,a,b,c)             (p)->lpVtbl->SetColorRGB(p,a,b,c)
#define IDirect3DRMLight_SetRange(p,a)                    (p)->lpVtbl->SetRange(p,a)
#define IDirect3DRMLight_SetUmbra(p,a)                    (p)->lpVtbl->SetUmbra(p,a)
#define IDirect3DRMLight_SetPenumbra(p,a)                 (p)->lpVtbl->SetPenumbra(p,a)
#define IDirect3DRMLight_SetConstantAttenuation(p,a)      (p)->lpVtbl->SetConstantAttenuation(p,a)
#define IDirect3DRMLight_SetLinearAttenuation(p,a)        (p)->lpVtbl->SetLinearAttenuation(p,a)
#define IDirect3DRMLight_SetQuadraticAttenuation(p,a)     (p)->lpVtbl->SetQuadraticAttenuation(p,a)
#define IDirect3DRMLight_GetRange(p)                      (p)->lpVtbl->GetRange(p)
#define IDirect3DRMLight_GetUmbra(p)                      (p)->lpVtbl->GetUmbra(p)
#define IDirect3DRMLight_GetPenumbra(p)                   (p)->lpVtbl->GetPenumbra(p)
#define IDirect3DRMLight_GetConstantAttenuation(p)        (p)->lpVtbl->GetConstantAttenuation(p)
#define IDirect3DRMLight_GetLinearAttenuation(p)          (p)->lpVtbl->GetLinearAttenuation(p)
#define IDirect3DRMLight_GetQuadraticAttenuation(p)       (p)->lpVtbl->GetQuadraticAttenuation(p)
#define IDirect3DRMLight_GetColor(p)                      (p)->lpVtbl->GetColor(p)
#define IDirect3DRMLight_GetType(p)                       (p)->lpVtbl->GetType(p)
#define IDirect3DRMLight_SetEnableFrame(p,a)              (p)->lpVtbl->SetEnableFrame(p,a)
#define IDirect3DRMLight_GetEnableFrame(p,a)              (p)->lpVtbl->GetEnableFrame(p,a)
#else
/*** IUnknown methods ***/
#define IDirect3DRMLight_QueryInterface(p,a,b)            (p)->QueryInterface(a,b)
#define IDirect3DRMLight_AddRef(p)                        (p)->AddRef()
#define IDirect3DRMLight_Release(p)                       (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMLight_Clone(p,a,b,c)                   (p)->Clone(a,b,c)
#define IDirect3DRMLight_AddDestroyCallback(p,a,b)        (p)->AddDestroyCallback(a,b)
#define IDirect3DRMLight_DeleteDestroyCallback(p,a,b)     (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMLight_SetAppData(p,a)                  (p)->SetAppData(a)
#define IDirect3DRMLight_GetAppData(p)                    (p)->GetAppData()
#define IDirect3DRMLight_SetName(p,a)                     (p)->SetName(a)
#define IDirect3DRMLight_GetName(p,a,b)                   (p)->GetName(a,b)
#define IDirect3DRMLight_GetClassName(p,a,b)              (p)->GetClassName(a,b)
/*** IDirect3DRMLight methods ***/
#define IDirect3DRMLight_SetType(p,a)                     (p)->SetType(a)
#define IDirect3DRMLight_SetColor(p,a)                    (p)->SetColor(a)
#define IDirect3DRMLight_SetColorRGB(p,a,b,c)             (p)->SetColorRGB(a,b,c)
#define IDirect3DRMLight_SetRange(p,a)                    (p)->SetRange(a)
#define IDirect3DRMLight_SetUmbra(p,a)                    (p)->SetUmbra(a)
#define IDirect3DRMLight_SetPenumbra(p,a)                 (p)->SetPenumbra(a)
#define IDirect3DRMLight_SetConstantAttenuation(p,a)      (p)->SetConstantAttenuation(a)
#define IDirect3DRMLight_SetLinearAttenuation(p,a)        (p)->SetLinearAttenuation(a)
#define IDirect3DRMLight_SetQuadraticAttenuation(p,a)     (p)->SetQuadraticAttenuation(a)
#define IDirect3DRMLight_GetRange(p)                      (p)->GetRange()
#define IDirect3DRMLight_GetUmbra(p)                      (p)->GetUmbra()
#define IDirect3DRMLight_GetPenumbra(p)                   (p)->GetPenumbra()
#define IDirect3DRMLight_GetConstantAttenuation(p)        (p)->GetConstantAttenuation()
#define IDirect3DRMLight_GetLinearAttenuation(p)          (p)->GetLinearAttenuation()
#define IDirect3DRMLight_GetQuadraticAttenuation(p)       (p)->GetQuadraticAttenuation()
#define IDirect3DRMLight_GetColor(p)                      (p)->GetColor()
#define IDirect3DRMLight_GetType(p)                       (p)->GetType()
#define IDirect3DRMLight_SetEnableFrame(p,a)              (p)->SetEnableFrame(a)
#define IDirect3DRMLight_GetEnableFrame(p,a)              (p)->GetEnableFrame(a)
#endif

/*****************************************************************************
 * IDirect3DRMTexture interface
 */
#define SDL_INTERFACE IDirect3DRMTexture
SDL_DECLARE_INTERFACE_(IDirect3DRMTexture, IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMTexture methods ***/
    SDL_STDMETHOD(InitFromFile)(SDL_THIS_ const char *filename) SDL_PURE;
    SDL_STDMETHOD(InitFromSurface)(SDL_THIS_ IDirectDrawSurface *surface) SDL_PURE;
    SDL_STDMETHOD(InitFromResource)(SDL_THIS_ SDL_HRSRC) SDL_PURE;
    SDL_STDMETHOD(Changed)(SDL_THIS_ SDL_BOOL pixels, SDL_BOOL palette) SDL_PURE;
    SDL_STDMETHOD(SetColors)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetShades)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetDecalSize)(SDL_THIS_ D3DVALUE width, D3DVALUE height) SDL_PURE;
    SDL_STDMETHOD(SetDecalOrigin)(SDL_THIS_ SDL_LONG x, SDL_LONG y) SDL_PURE;
    SDL_STDMETHOD(SetDecalScale)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetDecalTransparency)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetDecalTransparentColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(GetDecalSize)(SDL_THIS_ D3DVALUE *width_return, D3DVALUE *height_return) SDL_PURE;
    SDL_STDMETHOD(GetDecalOrigin)(SDL_THIS_ SDL_LONG *x_return, SDL_LONG *y_return) SDL_PURE;
    SDL_STDMETHOD_(D3DRMIMAGE *, GetImage)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetShades)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetColors)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetDecalScale)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetDecalTransparency)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetDecalTransparentColor)(SDL_THIS) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMTexture_QueryInterface(p,a,b)            (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMTexture_AddRef(p)                        (p)->lpVtbl->AddRef(p)
#define IDirect3DRMTexture_Release(p)                       (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMTexture_Clone(p,a,b,c)                   (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMTexture_AddDestroyCallback(p,a,b)        (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMTexture_DeleteDestroyCallback(p,a,b)     (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMTexture_SetAppData(p,a)                  (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMTexture_GetAppData(p)                    (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMTexture_SetName(p,a)                     (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMTexture_GetName(p,a,b)                   (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMTexture_GetClassName(p,a,b)              (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMTexture methods ***/
#define IDirect3DRMTexture_InitFromFile(p,a)                (p)->lpVtbl->InitFromFile(p,a)
#define IDirect3DRMTexture_InitFromSurface(p,a)             (p)->lpVtbl->InitFromSurface(p,a)
#define IDirect3DRMTexture_InitFromResource(p,a)            (p)->lpVtbl->InitFromResource(p,a)
#define IDirect3DRMTexture_Changed(p,a,b)                   (p)->lpVtbl->Changed(p,a,b)
#define IDirect3DRMTexture_SetColors(p,a)                   (p)->lpVtbl->SetColors(p,a)
#define IDirect3DRMTexture_SetShades(p,a)                   (p)->lpVtbl->SetShades(p,a)
#define IDirect3DRMTexture_SetDecalSize(p,a,b)              (p)->lpVtbl->SetDecalSize(p,a,b)
#define IDirect3DRMTexture_SetDecalOrigin(p,a,b)            (p)->lpVtbl->SetDecalOrigin(p,a,b)
#define IDirect3DRMTexture_SetDecalScale(p,a)               (p)->lpVtbl->SetDecalScale(p,a)
#define IDirect3DRMTexture_SetDecalTransparency(p,a)        (p)->lpVtbl->SetDecalTransparency(p,a)
#define IDirect3DRMTexture_SetDecalTransparencyColor(p,a)   (p)->lpVtbl->SetDecalTransparentColor(p,a)
#define IDirect3DRMTexture_GetDecalSize(p,a,b)              (p)->lpVtbl->GetDecalSize(p,a,b)
#define IDirect3DRMTexture_GetDecalOrigin(p,a,b)            (p)->lpVtbl->GetDecalOrigin(p,a,b)
#define IDirect3DRMTexture_GetImage(p)                      (p)->lpVtbl->GetImage(p)
#define IDirect3DRMTexture_GetShades(p)                     (p)->lpVtbl->GetShades(p)
#define IDirect3DRMTexture_GetColors(p)                     (p)->lpVtbl->GetColors(p)
#define IDirect3DRMTexture_GetDecalScale(p)                 (p)->lpVtbl->GetDecalScale(p)
#define IDirect3DRMTexture_GetDecalTransparency(p)          (p)->lpVtbl->GetDecalTransparency(p)
#define IDirect3DRMTexture_GetDecalTransparencyColor(p)     (p)->lpVtbl->GetDecalTransparencyColor(p)
#else
/*** IUnknown methods ***/
#define IDirect3DRMTexture_QueryInterface(p,a,b)            (p)->QueryInterface(a,b)
#define IDirect3DRMTexture_AddRef(p)                        (p)->AddRef()
#define IDirect3DRMTexture_Release(p)                       (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMTexture_Clone(p,a,b,c)                   (p)->Clone(a,b,c)
#define IDirect3DRMTexture_AddDestroyCallback(p,a,b)        (p)->AddDestroyCallback(a,b)
#define IDirect3DRMTexture_DeleteDestroyCallback(p,a,b)     (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMTexture_SetAppData(p,a)                  (p)->SetAppData(a)
#define IDirect3DRMTexture_GetAppData(p)                    (p)->GetAppData()
#define IDirect3DRMTexture_SetName(p,a)                     (p)->SetName(a)
#define IDirect3DRMTexture_GetName(p,a,b)                   (p)->GetName(a,b)
#define IDirect3DRMTexture_GetClassName(p,a,b)              (p)->GetClassName(a,b)
/*** IDirect3DRMTexture methods ***/
#define IDirect3DRMTexture_InitFromFile(p,a)                (p)->InitFromFile(a)
#define IDirect3DRMTexture_InitFromSurface(p,a)             (p)->InitFromSurface(a)
#define IDirect3DRMTexture_InitFromResource(p,a)            (p)->InitFromResource(a)
#define IDirect3DRMTexture_Changed(p,a,b)                   (p)->Changed(a,b)
#define IDirect3DRMTexture_SetColors(p,a)                   (p)->SetColors(a)
#define IDirect3DRMTexture_SetShades(p,a)                   (p)->SetShades(a)
#define IDirect3DRMTexture_SetDecalSize(p,a,b)              (p)->SetDecalSize(a,b)
#define IDirect3DRMTexture_SetDecalOrigin(p,a,b)            (p)->SetDecalOrigin(a,b)
#define IDirect3DRMTexture_SetDecalScale(p,a)               (p)->SetDecalScale(a)
#define IDirect3DRMTexture_SetDecalTransparency(p,a)        (p)->SetDecalTransparency(a)
#define IDirect3DRMTexture_SetDecalTransparentColor(p,a)    (p)->SetDecalTransparentColor(a)
#define IDirect3DRMTexture_GetDecalSize(p,a,b)              (p)->GetDecalSize(a,b)
#define IDirect3DRMTexture_GetDecalOrigin(p,a,b)            (p)->GetDecalOrigin(a,b)
#define IDirect3DRMTexture_GetImage(p)                      (p)->GetImage()
#define IDirect3DRMTexture_GetShades(p)                     (p)->GetShades()
#define IDirect3DRMTexture_GetColors(p)                     (p)->GetColors()
#define IDirect3DRMTexture_GetDecalScale(p)                 (p)->GetDecalScale()
#define IDirect3DRMTexture_GetDecalTransparency(p)          (p)->GetDecalTransparency()
#define IDirect3DRMTexture_GetDecalTransparentColor(p)      (p)->GetDecalTransparentColor()
#endif

/*****************************************************************************
 * IDirect3DRMTexture2 interface
 */
#define SDL_INTERFACE IDirect3DRMTexture2
SDL_DECLARE_INTERFACE_(IDirect3DRMTexture2, IDirect3DRMTexture)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMTexture methods ***/
    SDL_STDMETHOD(InitFromFile)(SDL_THIS_ const char *filename) SDL_PURE;
    SDL_STDMETHOD(InitFromSurface)(SDL_THIS_ IDirectDrawSurface *surface) SDL_PURE;
    SDL_STDMETHOD(InitFromResource)(SDL_THIS_ SDL_HRSRC) SDL_PURE;
    SDL_STDMETHOD(Changed)(SDL_THIS_ SDL_BOOL pixels, SDL_BOOL palette) SDL_PURE;
    SDL_STDMETHOD(SetColors)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetShades)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetDecalSize)(SDL_THIS_ D3DVALUE width, D3DVALUE height) SDL_PURE;
    SDL_STDMETHOD(SetDecalOrigin)(SDL_THIS_ SDL_LONG x, SDL_LONG y) SDL_PURE;
    SDL_STDMETHOD(SetDecalScale)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetDecalTransparency)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetDecalTransparentColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(GetDecalSize)(SDL_THIS_ D3DVALUE *width_return, D3DVALUE *height_return) SDL_PURE;
    SDL_STDMETHOD(GetDecalOrigin)(SDL_THIS_ SDL_LONG *x_return, SDL_LONG *y_return) SDL_PURE;
    SDL_STDMETHOD_(D3DRMIMAGE *, GetImage)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetShades)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetColors)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetDecalScale)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetDecalTransparency)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetDecalTransparentColor)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMTexture2 methods ***/
    SDL_STDMETHOD(InitFromImage)(SDL_THIS_ D3DRMIMAGE *image) SDL_PURE;
    SDL_STDMETHOD(InitFromResource2)(SDL_THIS_ SDL_HMODULE module, const char *name, const char *type) SDL_PURE;
    SDL_STDMETHOD(GenerateMIPMap)(SDL_THIS_ SDL_DWORD) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMTexture2_QueryInterface(p,a,b)            (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMTexture2_AddRef(p)                        (p)->lpVtbl->AddRef(p)
#define IDirect3DRMTexture2_Release(p)                       (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMTexture2_Clone(p,a,b,c)                   (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMTexture2_AddDestroyCallback(p,a,b)        (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMTexture2_DeleteDestroyCallback(p,a,b)     (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMTexture2_SetAppData(p,a)                  (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMTexture2_GetAppData(p)                    (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMTexture2_SetName(p,a)                     (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMTexture2_GetName(p,a,b)                   (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMTexture2_GetClassName(p,a,b)              (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMTexture methods ***/
#define IDirect3DRMTexture2_InitFromFile(p,a)                (p)->lpVtbl->InitFromFile(p,a)
#define IDirect3DRMTexture2_InitFromSurface(p,a)             (p)->lpVtbl->InitFromSurface(p,a)
#define IDirect3DRMTexture2_InitFromResource(p,a)            (p)->lpVtbl->InitFromResource(p,a)
#define IDirect3DRMTexture2_Changed(p,a,b)                   (p)->lpVtbl->Changed(p,a,b)
#define IDirect3DRMTexture2_SetColors(p,a)                   (p)->lpVtbl->SetColors(p,a)
#define IDirect3DRMTexture2_SetShades(p,a)                   (p)->lpVtbl->SetShades(p,a)
#define IDirect3DRMTexture2_SetDecalSize(p,a,b)              (p)->lpVtbl->SetDecalSize(p,a,b)
#define IDirect3DRMTexture2_SetDecalOrigin(p,a,b)            (p)->lpVtbl->SetDecalOrigin(p,a,b)
#define IDirect3DRMTexture2_SetDecalScale(p,a)               (p)->lpVtbl->SetDecalScale(p,a)
#define IDirect3DRMTexture2_SetDecalTransparency(p,a)        (p)->lpVtbl->SetDecalTransparency(p,a)
#define IDirect3DRMTexture2_SetDecalTransparencyColor(p,a)   (p)->lpVtbl->SetDecalTransparentColor(p,a)
#define IDirect3DRMTexture2_GetDecalSize(p,a,b)              (p)->lpVtbl->GetDecalSize(p,a,b)
#define IDirect3DRMTexture2_GetDecalOrigin(p,a,b)            (p)->lpVtbl->GetDecalOrigin(p,a,b)
#define IDirect3DRMTexture2_GetImage(p)                      (p)->lpVtbl->GetImage(p)
#define IDirect3DRMTexture2_GetShades(p)                     (p)->lpVtbl->GetShades(p)
#define IDirect3DRMTexture2_GetColors(p)                     (p)->lpVtbl->GetColors(p)
#define IDirect3DRMTexture2_GetDecalScale(p)                 (p)->lpVtbl->GetDecalScale(p)
#define IDirect3DRMTexture2_GetDecalTransparency(p)          (p)->lpVtbl->GetDecalTransparency(p)
#define IDirect3DRMTexture2_GetDecalTransparencyColor(p)     (p)->lpVtbl->GetDecalTransparencyColor(p)
/*** IDirect3DRMTexture2 methods ***/
#define IDirect3DRMTexture2_InitFromImage(p,a)               (p)->lpVtbl->InitFromImage(p,a)
#define IDirect3DRMTexture2_InitFromResource2(p,a,b,c)       (p)->lpVtbl->InitFromResource2(p,a,b,c)
#define IDirect3DRMTexture2_GenerateMIPMap(p,a)              (p)->lpVtbl->GenerateMIPMap(p,a)
#else
/*** IUnknown methods ***/
#define IDirect3DRMTexture2_QueryInterface(p,a,b)            (p)->QueryInterface(a,b)
#define IDirect3DRMTexture2_AddRef(p)                        (p)->AddRef()
#define IDirect3DRMTexture2_Release(p)                       (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMTexture2_Clone(p,a,b,c)                   (p)->Clone(a,b,c)
#define IDirect3DRMTexture2_AddDestroyCallback(p,a,b)        (p)->AddDestroyCallback(a,b)
#define IDirect3DRMTexture2_DeleteDestroyCallback(p,a,b)     (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMTexture2_SetAppData(p,a)                  (p)->SetAppData(a)
#define IDirect3DRMTexture2_GetAppData(p)                    (p)->GetAppData()
#define IDirect3DRMTexture2_SetName(p,a)                     (p)->SetName(a)
#define IDirect3DRMTexture2_GetName(p,a,b)                   (p)->GetName(a,b)
#define IDirect3DRMTexture2_GetClassName(p,a,b)              (p)->GetClassName(a,b)
/*** IDirect3DRMTexture methods ***/
#define IDirect3DRMTexture2_InitFromFile(p,a)                (p)->InitFromFile(a)
#define IDirect3DRMTexture2_InitFromSurface(p,a)             (p)->InitFromSurface(a)
#define IDirect3DRMTexture2_InitFromResource(p,a)            (p)->InitFromResource(a)
#define IDirect3DRMTexture2_Changed(p,a,b)                   (p)->Changed(a,b)
#define IDirect3DRMTexture2_SetColors(p,a)                   (p)->SetColors(a)
#define IDirect3DRMTexture2_SetShades(p,a)                   (p)->SetShades(a)
#define IDirect3DRMTexture2_SetDecalSize(p,a,b)              (p)->SetDecalSize(a,b)
#define IDirect3DRMTexture2_SetDecalOrigin(p,a,b)            (p)->SetDecalOrigin(a,b)
#define IDirect3DRMTexture2_SetDecalScale(p,a)               (p)->SetDecalScale(a)
#define IDirect3DRMTexture2_SetDecalTransparency(p,a)        (p)->SetDecalTransparency(a)
#define IDirect3DRMTexture2_SetDecalTransparentColor(p,a)    (p)->SetDecalTransparentColor(a)
#define IDirect3DRMTexture2_GetDecalSize(p,a,b)              (p)->GetDecalSize(a,b)
#define IDirect3DRMTexture2_GetDecalOrigin(p,a,b)            (p)->GetDecalOrigin(a,b)
#define IDirect3DRMTexture2_GetImage(p)                      (p)->GetImage()
#define IDirect3DRMTexture2_GetShades(p)                     (p)->GetShades()
#define IDirect3DRMTexture2_GetColors(p)                     (p)->GetColors()
#define IDirect3DRMTexture2_GetDecalScale(p)                 (p)->GetDecalScale()
#define IDirect3DRMTexture2_GetDecalTransparency(p)          (p)->GetDecalTransparency()
#define IDirect3DRMTexture2_GetDecalTransparentColor(p)      (p)->GetDecalTransparentColor()
/*** IDirect3DRMTexture2 methods ***/
#define IDirect3DRMTexture2_InitFromImage(p,a)               (p)->InitFromImage(a)
#define IDirect3DRMTexture2_InitFromResource2(p,a,b,c)       (p)->InitFromResource2(a,b,c)
#define IDirect3DRMTexture2_GenerateMIPMap(p,a)              (p)->GenerateMIPMap(a)
#endif

/*****************************************************************************
 * IDirect3DRMTexture3 interface
 */
#define SDL_INTERFACE IDirect3DRMTexture3
SDL_DECLARE_INTERFACE_(IDirect3DRMTexture3, IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMTexture3 methods ***/
    SDL_STDMETHOD(InitFromFile)(SDL_THIS_ const char *filename) SDL_PURE;
    SDL_STDMETHOD(InitFromSurface)(SDL_THIS_ IDirectDrawSurface *surface) SDL_PURE;
    SDL_STDMETHOD(InitFromResource)(SDL_THIS_ SDL_HRSRC) SDL_PURE;
    SDL_STDMETHOD(Changed)(SDL_THIS_ SDL_DWORD flags, SDL_DWORD rect_count, RECT *rects) SDL_PURE;
    SDL_STDMETHOD(SetColors)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetShades)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetDecalSize)(SDL_THIS_ D3DVALUE width, D3DVALUE height) SDL_PURE;
    SDL_STDMETHOD(SetDecalOrigin)(SDL_THIS_ SDL_LONG x, SDL_LONG y) SDL_PURE;
    SDL_STDMETHOD(SetDecalScale)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(SetDecalTransparency)(SDL_THIS_ SDL_BOOL) SDL_PURE;
    SDL_STDMETHOD(SetDecalTransparentColor)(SDL_THIS_ D3DCOLOR) SDL_PURE;
    SDL_STDMETHOD(GetDecalSize)(SDL_THIS_ D3DVALUE *width_return, D3DVALUE *height_return) SDL_PURE;
    SDL_STDMETHOD(GetDecalOrigin)(SDL_THIS_ SDL_LONG *x_return, SDL_LONG *y_return) SDL_PURE;
    SDL_STDMETHOD_(D3DRMIMAGE *, GetImage)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetShades)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetColors)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_DWORD, GetDecalScale)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_BOOL, GetDecalTransparency)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(D3DCOLOR, GetDecalTransparentColor)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(InitFromImage)(SDL_THIS_ D3DRMIMAGE *image) SDL_PURE;
    SDL_STDMETHOD(InitFromResource2)(SDL_THIS_ SDL_HMODULE module, const char *name, const char *type) SDL_PURE;
    SDL_STDMETHOD(GenerateMIPMap)(SDL_THIS_ SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(GetSurface)(SDL_THIS_ SDL_DWORD flags, IDirectDrawSurface **surface) SDL_PURE;
    SDL_STDMETHOD(SetCacheOptions)(SDL_THIS_ SDL_LONG lImportance, SDL_DWORD dwFlags) SDL_PURE;
    SDL_STDMETHOD(GetCacheOptions)(SDL_THIS_ SDL_LONG *importance, SDL_DWORD *flags) SDL_PURE;
    SDL_STDMETHOD(SetDownsampleCallback)(SDL_THIS_ D3DRMDOWNSAMPLECALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetValidationCallback)(SDL_THIS_ D3DRMVALIDATIONCALLBACK cb, void *ctx) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMTexture3_QueryInterface(p,a,b)            (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMTexture3_AddRef(p)                        (p)->lpVtbl->AddRef(p)
#define IDirect3DRMTexture3_Release(p)                       (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMTexture3_Clone(p,a,b,c)                   (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMTexture3_AddDestroyCallback(p,a,b)        (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMTexture3_DeleteDestroyCallback(p,a,b)     (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMTexture3_SetAppData(p,a)                  (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMTexture3_GetAppData(p)                    (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMTexture3_SetName(p,a)                     (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMTexture3_GetName(p,a,b)                   (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMTexture3_GetClassName(p,a,b)              (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMTexture3 methods ***/
#define IDirect3DRMTexture3_InitFromFile(p,a)                (p)->lpVtbl->InitFromFile(p,a)
#define IDirect3DRMTexture3_InitFromSurface(p,a)             (p)->lpVtbl->InitFromSurface(p,a)
#define IDirect3DRMTexture3_InitFromResource(p,a)            (p)->lpVtbl->InitFromResource(p,a)
#define IDirect3DRMTexture3_Changed(p,a,b,c)                 (p)->lpVtbl->Changed(p,a,b,c)
#define IDirect3DRMTexture3_SetColors(p,a)                   (p)->lpVtbl->SetColors(p,a)
#define IDirect3DRMTexture3_SetShades(p,a)                   (p)->lpVtbl->SetShades(p,a)
#define IDirect3DRMTexture3_SetDecalSize(p,a,b)              (p)->lpVtbl->SetDecalSize(p,a,b)
#define IDirect3DRMTexture3_SetDecalOrigin(p,a,b)            (p)->lpVtbl->SetDecalOrigin(p,a,b)
#define IDirect3DRMTexture3_SetDecalScale(p,a)               (p)->lpVtbl->SetDecalScale(p,a)
#define IDirect3DRMTexture3_SetDecalTransparency(p,a)        (p)->lpVtbl->SetDecalTransparency(p,a)
#define IDirect3DRMTexture3_SetDecalTransparentColor(p,a)    (p)->lpVtbl->SetDecalTransparentColor(p,a)
#define IDirect3DRMTexture3_GetDecalSize(p,a,b)              (p)->lpVtbl->GetDecalSize(p,a,b)
#define IDirect3DRMTexture3_GetDecalOrigin(p,a,b)            (p)->lpVtbl->GetDecalOrigin(p,a,b)
#define IDirect3DRMTexture3_GetImage(p)                      (p)->lpVtbl->GetImage(p)
#define IDirect3DRMTexture3_GetShades(p)                     (p)->lpVtbl->GetShades(p)
#define IDirect3DRMTexture3_GetColors(p)                     (p)->lpVtbl->GetColors(p)
#define IDirect3DRMTexture3_GetDecalScale(p)                 (p)->lpVtbl->GetDecalScale(p)
#define IDirect3DRMTexture3_GetDecalTransparency(p)          (p)->lpVtbl->GetDecalTransparency(p)
#define IDirect3DRMTexture3_GetDecalTransparentColor(p)      (p)->lpVtbl->GetDecalTransparentColor(p)
#define IDirect3DRMTexture3_InitFromImage(p,a)               (p)->lpVtbl->InitFromImage(p,a)
#define IDirect3DRMTexture3_InitFromResource2(p,a,b,c)       (p)->lpVtbl->InitFromResource2(p,a,b,c)
#define IDirect3DRMTexture3_GenerateMIPMap(p,a)              (p)->lpVtbl->GenerateMIPMap(p,a)
#define IDirect3DRMTexture3_GetSurface(p,a,b)                (p)->lpVtbl->GetSurface(p,a,b)
#define IDirect3DRMTexture3_SetCacheOptions(p,a,b)           (p)->lpVtbl->SetCacheOptions(p,a,b)
#define IDirect3DRMTexture3_GetCacheOptions(p,a,b)           (p)->lpVtbl->GetCacheOptions(p,a,b)
#define IDirect3DRMTexture3_SetDownsampleCallback(p,a,b)     (p)->lpVtbl->SetDownsampleCallback(p,a,b)
#define IDirect3DRMTexture3_SetValidationCallback(p,a,b)     (p)->lpVtbl->SetValidationCallback(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMTexture3_QueryInterface(p,a,b)            (p)->QueryInterface(a,b)
#define IDirect3DRMTexture3_AddRef(p)                        (p)->AddRef()
#define IDirect3DRMTexture3_Release(p)                       (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMTexture3_Clone(p,a,b,c)                   (p)->Clone(a,b,c)
#define IDirect3DRMTexture3_AddDestroyCallback(p,a,b)        (p)->AddDestroyCallback(a,b)
#define IDirect3DRMTexture3_DeleteDestroyCallback(p,a,b)     (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMTexture3_SetAppData(p,a)                  (p)->SetAppData(a)
#define IDirect3DRMTexture3_GetAppData(p)                    (p)->GetAppData()
#define IDirect3DRMTexture3_SetName(p,a)                     (p)->SetName(a)
#define IDirect3DRMTexture3_GetName(p,a,b)                   (p)->GetName(a,b)
#define IDirect3DRMTexture3_GetClassName(p,a,b)              (p)->GetClassName(a,b)
/*** IDirect3DRMTexture3 methods ***/
#define IDirect3DRMTexture3_InitFromFile(p,a)                (p)->InitFromFile(a)
#define IDirect3DRMTexture3_InitFromSurface(p,a)             (p)->InitFromSurface(a)
#define IDirect3DRMTexture3_InitFromResource(p,a)            (p)->InitFromResource(a)
#define IDirect3DRMTexture3_Changed(p,a,b,c)                 (p)->Changed(a,b,c)
#define IDirect3DRMTexture3_SetColors(p,a)                   (p)->SetColors(a)
#define IDirect3DRMTexture3_SetShades(p,a)                   (p)->SetShades(a)
#define IDirect3DRMTexture3_SetDecalSize(p,a,b)              (p)->SetDecalSize(a,b)
#define IDirect3DRMTexture3_SetDecalOrigin(p,a,b)            (p)->SetDecalOrigin(a,b)
#define IDirect3DRMTexture3_SetDecalScale(p,a)               (p)->SetDecalScale(a)
#define IDirect3DRMTexture3_SetDecalTransparency(p,a)        (p)->SetDecalTransparency(a)
#define IDirect3DRMTexture3_SetDecalTransparencyColor(p,a)   (p)->SetDecalTransparentColor(a)
#define IDirect3DRMTexture3_GetDecalSize(p,a,b)              (p)->GetDecalSize(a,b)
#define IDirect3DRMTexture3_GetDecalOrigin(p,a,b)            (p)->GetDecalOrigin(a,b)
#define IDirect3DRMTexture3_GetImage(p)                      (p)->GetImage()
#define IDirect3DRMTexture3_GetShades(p)                     (p)->GetShades()
#define IDirect3DRMTexture3_GetColors(p)                     (p)->GetColors()
#define IDirect3DRMTexture3_GetDecalScale(p)                 (p)->GetDecalScale()
#define IDirect3DRMTexture3_GetDecalTransparency(p)          (p)->GetDecalTransparency()
#define IDirect3DRMTexture3_GetDecalTransparencyColor(p)     (p)->GetDecalTransparencyColor()
#define IDirect3DRMTexture3_InitFromImage(p,a)               (p)->InitFromImage(a)
#define IDirect3DRMTexture3_InitFromResource2(p,a,b,c)       (p)->InitFromResource2(a,b,c)
#define IDirect3DRMTexture3_GenerateMIPMap(p,a)              (p)->GenerateMIPMap(a)
#define IDirect3DRMTexture3_GetSurface(p,a,b)                (p)->GetSurface(a,b)
#define IDirect3DRMTexture3_SetCacheOptions(p,a,b)           (p)->SetCacheOptions(a,b)
#define IDirect3DRMTexture3_GetCacheOptions(p,a,b)           (p)->GetCacheOptions(a,b)
#define IDirect3DRMTexture3_SetDownsampleCallback(p,a,b)     (p)->SetDownsampleCallback(a,b)
#define IDirect3DRMTexture3_SetValidationCallback(p,a,b)     (p)->SetValidationCallback(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMWrap interface
 */
#define SDL_INTERFACE IDirect3DRMWrap
SDL_DECLARE_INTERFACE_(IDirect3DRMWrap, IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMWrap methods ***/
    SDL_STDMETHOD(Init)(SDL_THIS_ D3DRMWRAPTYPE type, IDirect3DRMFrame *reference, D3DVALUE ox, D3DVALUE oy, D3DVALUE oz,
            D3DVALUE dx, D3DVALUE dy, D3DVALUE dz, D3DVALUE ux, D3DVALUE uy, D3DVALUE uz,
            D3DVALUE ou, D3DVALUE ov, D3DVALUE su, D3DVALUE sv) SDL_PURE;
    SDL_STDMETHOD(Apply)(SDL_THIS_ IDirect3DRMObject *object) SDL_PURE;
    SDL_STDMETHOD(ApplyRelative)(SDL_THIS_ IDirect3DRMFrame *frame, IDirect3DRMObject *object) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMWrap_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMWrap_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMWrap_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMWrap_Clone(p,a,b,c)                          (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMWrap_AddDestroyCallback(p,a,b)               (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMWrap_DeleteDestroyCallback(p,a,b)            (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMWrap_SetAppData(p,a)                         (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMWrap_GetAppData(p)                           (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMWrap_SetName(p,a)                            (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMWrap_GetName(p,a,b)                          (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMWrap_GetClassName(p,a,b)                     (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMWrap methods ***/
#define IDirect3DRMWrap_Init(p,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o)   (p)->lpVtbl->Init(p,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o)
#define IDirect3DRMWrap_Apply(p,a)                              (p)->lpVtbl->Apply(p,a)
#define IDirect3DRMWrap_ApplyRelative(p,a,b)                    (p)->lpVtbl->ApplyRelative(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMWrap_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMWrap_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMWrap_Release(p)                              (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMWrap_Clone(p,a,b,c)                          (p)->Clone(a,b,c)
#define IDirect3DRMWrap_AddDestroyCallback(p,a,b)               (p)->AddDestroyCallback(a,b)
#define IDirect3DRMWrap_DeleteDestroyCallback(p,a,b)            (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMWrap_SetAppData(p,a)                         (p)->SetAppData(a)
#define IDirect3DRMWrap_GetAppData(p)                           (p)->GetAppData()
#define IDirect3DRMWrap_SetName(p,a)                            (p)->SetName(a)
#define IDirect3DRMWrap_GetName(p,a,b)                          (p)->GetName(a,b)
#define IDirect3DRMWrap_GetClassName(p,a,b)                     (p)->GetClassName(a,b)
/*** IDirect3DRMWrap methods ***/
#define IDirect3DRMWrap_Init(p,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o)   (p)->Init(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o)
#define IDirect3DRMWrap_Apply(p,a)                              (p)->Apply(a)
#define IDirect3DRMWrap_ApplyRelative(p,a,b)                    (p)->ApplyRelative(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMMaterial interface
 */
#define SDL_INTERFACE IDirect3DRMMaterial
SDL_DECLARE_INTERFACE_(IDirect3DRMMaterial, IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMMaterial methods ***/
    SDL_STDMETHOD(SetPower)(SDL_THIS_ D3DVALUE power) SDL_PURE;
    SDL_STDMETHOD(SetSpecular)(SDL_THIS_ D3DVALUE r, D3DVALUE g, D3DVALUE b) SDL_PURE;
    SDL_STDMETHOD(SetEmissive)(SDL_THIS_ D3DVALUE r, D3DVALUE g, D3DVALUE b) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetPower)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetSpecular)(SDL_THIS_ D3DVALUE* r, D3DVALUE* g, D3DVALUE* b) SDL_PURE;
    SDL_STDMETHOD(GetEmissive)(SDL_THIS_ D3DVALUE* r, D3DVALUE* g, D3DVALUE* b) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMMaterial_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMMaterial_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMMaterial_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMaterial_Clone(p,a,b,c)                          (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMMaterial_AddDestroyCallback(p,a,b)               (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMMaterial_DeleteDestroyCallback(p,a,b)            (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMMaterial_SetAppData(p,a)                         (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMMaterial_GetAppData(p)                           (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMMaterial_SetName(p,a)                            (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMMaterial_GetName(p,a,b)                          (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMMaterial_GetClassName(p,a,b)                     (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMMaterial methods ***/
#define IDirect3DRMMaterial_SetPower(p,a)                           (p)->lpVtbl->SetPower(p,a)
#define IDirect3DRMMaterial_SetSpecular(p,a,b,c)                    (p)->lpVtbl->SetSpecular(p,a,b,c)
#define IDirect3DRMMaterial_SetEmissive(p,a,b,c)                    (p)->lpVtbl->SetEmissive(p,a,b,c)
#define IDirect3DRMMaterial_GetPower(p)                             (p)->lpVtbl->GetPower(p)
#define IDirect3DRMMaterial_GetSpecular(p,a,b,c)                    (p)->lpVtbl->GetSpecular(p,a,b,c)
#define IDirect3DRMMaterial_GetEmissive(p,a,b,c)                    (p)->lpVtbl->GetEmissive(p,a,b,c)
#else
/*** IUnknown methods ***/
#define IDirect3DRMMaterial_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMMaterial_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMMaterial_Release(p)                              (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMaterial_Clone(p,a,b,c)                          (p)->Clone(a,b,c)
#define IDirect3DRMMaterial_AddDestroyCallback(p,a,b)               (p)->AddDestroyCallback(a,b)
#define IDirect3DRMMaterial_DeleteDestroyCallback(p,a,b)            (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMMaterial_SetAppData(p,a)                         (p)->SetAppData(a)
#define IDirect3DRMMaterial_GetAppData(p)                           (p)->GetAppData()
#define IDirect3DRMMaterial_SetName(p,a)                            (p)->SetName(a)
#define IDirect3DRMMaterial_GetName(p,a,b)                          (p)->GetName(a,b)
#define IDirect3DRMMaterial_GetClassName(p,a,b)                     (p)->GetClassName(a,b)
/*** IDirect3DRMMaterial methods ***/
#define IDirect3DRMMaterial_SetPower(p,a)                           (p)->SetPower(a)
#define IDirect3DRMMaterial_SetSpecular(p,a,b,c)                    (p)->SetSpecular(a,b,c)
#define IDirect3DRMMaterial_SetEmissive(p,a,b,c)                    (p)->SetEmissive(a,b,c)
#define IDirect3DRMMaterial_GetPower(p)                             (p)->GetPower()
#define IDirect3DRMMaterial_GetSpecular(p,a,b,c)                    (p)->GetSpecular(a,b,c)
#define IDirect3DRMMaterial_GetEmissive(p,a,b,c)                    (p)->GetEmissive(a,b,c)
#endif

/*****************************************************************************
 * IDirect3DRMMaterial2 interface
 */
#define SDL_INTERFACE IDirect3DRMMaterial2
SDL_DECLARE_INTERFACE_(IDirect3DRMMaterial2, IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMMaterial2 methods ***/
    SDL_STDMETHOD(SetPower)(SDL_THIS_ D3DVALUE power) SDL_PURE;
    SDL_STDMETHOD(SetSpecular)(SDL_THIS_ D3DVALUE r, D3DVALUE g, D3DVALUE b) SDL_PURE;
    SDL_STDMETHOD(SetEmissive)(SDL_THIS_ D3DVALUE r, D3DVALUE g, D3DVALUE b) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetPower)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetSpecular)(SDL_THIS_ D3DVALUE* r, D3DVALUE* g, D3DVALUE* b) SDL_PURE;
    SDL_STDMETHOD(GetEmissive)(SDL_THIS_ D3DVALUE* r, D3DVALUE* g, D3DVALUE* b) SDL_PURE;
    SDL_STDMETHOD(GetAmbient)(SDL_THIS_ D3DVALUE* r, D3DVALUE* g, D3DVALUE* b) SDL_PURE;
    SDL_STDMETHOD(SetAmbient)(SDL_THIS_ D3DVALUE r, D3DVALUE g, D3DVALUE b) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMMaterial2_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMMaterial2_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMMaterial2_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMaterial2_Clone(p,a,b,c)                          (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMMaterial2_AddDestroyCallback(p,a,b)               (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMMaterial2_DeleteDestroyCallback(p,a,b)            (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMMaterial2_SetAppData(p,a)                         (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMMaterial2_GetAppData(p)                           (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMMaterial2_SetName(p,a)                            (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMMaterial2_GetName(p,a,b)                          (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMMaterial2_GetClassName(p,a,b)                     (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMMaterial2 methods ***/
#define IDirect3DRMMaterial2_SetPower(p,a)                           (p)->lpVtbl->SetPower(p,a)
#define IDirect3DRMMaterial2_SetSpecular(p,a,b,c)                    (p)->lpVtbl->SetSpecular(p,a,b,c)
#define IDirect3DRMMaterial2_SetEmissive(p,a,b,c)                    (p)->lpVtbl->SetEmissive(p,a,b,c)
#define IDirect3DRMMaterial2_GetPower(p)                             (p)->lpVtbl->GetPower(p)
#define IDirect3DRMMaterial2_GetSpecular(p,a,b,c)                    (p)->lpVtbl->GetSpecular(p,a,b,c)
#define IDirect3DRMMaterial2_GetEmissive(p,a,b,c)                    (p)->lpVtbl->GetEmissive(p,a,b,c)
#define IDirect3DRMMaterial2_SetAmbient(p,a,b,c)                     (p)->lpVtbl->SetAmbient(p,a,b,c)
#define IDirect3DRMMaterial2_GetAmbient(p,a,b,c)                     (p)->lpVtbl->GetAmbient(p,a,b,c)
#else
/*** IUnknown methods ***/
#define IDirect3DRMMaterial2_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMMaterial2_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMMaterial2_Release(p)                              (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMMaterial2_Clone(p,a,b,c)                          (p)->Clone(a,b,c)
#define IDirect3DRMMaterial2_AddDestroyCallback(p,a,b)               (p)->AddDestroyCallback(a,b)
#define IDirect3DRMMaterial2_DeleteDestroyCallback(p,a,b)            (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMMaterial2_SetAppData(p,a)                         (p)->SetAppData(a)
#define IDirect3DRMMaterial2_GetAppData(p)                           (p)->GetAppData()
#define IDirect3DRMMaterial2_SetName(p,a)                            (p)->SetName(a)
#define IDirect3DRMMaterial2_GetName(p,a,b)                          (p)->GetName(a,b)
#define IDirect3DRMMaterial2_GetClassName(p,a,b)                     (p)->GetClassName(a,b)
/*** IDirect3DRMMaterial2 methods ***/
#define IDirect3DRMMaterial2_SetPower(p,a)                           (p)->SetPower(a)
#define IDirect3DRMMaterial2_SetSpecular(p,a,b,c)                    (p)->SetSpecular(a,b,c)
#define IDirect3DRMMaterial2_SetEmissive(p,a,b,c)                    (p)->SetEmissive(a,b,c)
#define IDirect3DRMMaterial2_GetPower(p)                             (p)->GetPower()
#define IDirect3DRMMaterial2_GetSpecular(p,a,b,c)                    (p)->GetSpecular(a,b,c)
#define IDirect3DRMMaterial2_GetEmissive(p,a,b,c)                    (p)->GetEmissive(a,b,c)
#define IDirect3DRMMaterial2_SetAmbient(p,a,b,c)                     (p)->SetAmbient(a,b,c)
#define IDirect3DRMMaterial2_GetAmbient(p,a,b,c)                     (p)->GetAmbient(a,b,c)
#endif

/*****************************************************************************
 * IDirect3DRMAnimation interface
 */
#define SDL_INTERFACE IDirect3DRMAnimation
SDL_DECLARE_INTERFACE_(IDirect3DRMAnimation, IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMAnimation methods ***/
    SDL_STDMETHOD(SetOptions)(SDL_THIS_ D3DRMANIMATIONOPTIONS flags) SDL_PURE;
    SDL_STDMETHOD(AddRotateKey)(SDL_THIS_ D3DVALUE time, D3DRMQUATERNION *q) SDL_PURE;
    SDL_STDMETHOD(AddPositionKey)(SDL_THIS_ D3DVALUE time, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(AddScaleKey)(SDL_THIS_ D3DVALUE time, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(DeleteKey)(SDL_THIS_ D3DVALUE time) SDL_PURE;
    SDL_STDMETHOD(SetFrame)(SDL_THIS_ IDirect3DRMFrame *frame) SDL_PURE;
    SDL_STDMETHOD(SetTime)(SDL_THIS_ D3DVALUE time) SDL_PURE;
    SDL_STDMETHOD_(D3DRMANIMATIONOPTIONS, GetOptions)(SDL_THIS) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMAnimation_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMAnimation_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMAnimation_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMAnimation_Clone(p,a,b,c)                          (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMAnimation_AddDestroyCallback(p,a,b)               (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMAnimation_DeleteDestroyCallback(p,a,b)            (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMAnimation_SetAppData(p,a)                         (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMAnimation_GetAppData(p)                           (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMAnimation_SetName(p,a)                            (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMAnimation_GetName(p,a,b)                          (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMAnimation_GetClassName(p,a,b)                     (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMAnimation methods ***/
#define IDirect3DRMAnimation_SetOptions(p,a)                         (p)->lpVtbl->SetOptions(p,a)
#define IDirect3DRMAnimation_AddRotateKey(p,a,b)                     (p)->lpVtbl->AddRotateKey(p,a,b)
#define IDirect3DRMAnimation_AddPositionKey(p,a,b,c,d)               (p)->lpVtbl->AddPositionKey(p,a,b,c,d)
#define IDirect3DRMAnimation_AddScaleKey(p,a,b,c,d)                  (p)->lpVtbl->AddScaleKey(p,a,b,c,d)
#define IDirect3DRMAnimation_DeleteKey(p,a)                          (p)->lpVtbl->DeleteKey(p,a)
#define IDirect3DRMAnimation_SetFrame(p,a)                           (p)->lpVtbl->SetFrame(p,a)
#define IDirect3DRMAnimation_SetTime(p,a)                            (p)->lpVtbl->SetTime(p,a)
#define IDirect3DRMAnimation_GetOptions(p)                           (p)->lpVtbl->GetOptions(p)
#else
/*** IUnknown methods ***/
#define IDirect3DRMAnimation_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMAnimation_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMAnimation_Release(p)                              (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMAnimation_Clone(p,a,b,c)                          (p)->Clone(a,b,c)
#define IDirect3DRMAnimation_AddDestroyCallback(p,a,b)               (p)->AddDestroyCallback(a,b)
#define IDirect3DRMAnimation_DeleteDestroyCallback(p,a,b)            (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMAnimation_SetAppData(p,a)                         (p)->SetAppData(a)
#define IDirect3DRMAnimation_GetAppData(p)                           (p)->GetAppData()
#define IDirect3DRMAnimation_SetName(p,a)                            (p)->SetName(a)
#define IDirect3DRMAnimation_GetName(p,a,b)                          (p)->GetName(a,b)
#define IDirect3DRMAnimation_GetClassName(p,a,b)                     (p)->GetClassName(a,b)
/*** IDirect3DRMAnimation methods ***/
#define IDirect3DRMAnimation_SetOptions(p,a)                         (p)->SetOptions(a)
#define IDirect3DRMAnimation_AddRotateKey(p,a,b)                     (p)->AddRotateKey(a,b)
#define IDirect3DRMAnimation_AddPositionKey(p,a,b,c,d)               (p)->AddPositionKey(a,b,c,d)
#define IDirect3DRMAnimation_AddScaleKey(p,a,b,c,d)                  (p)->AddScaleKey(a,b,c,d)
#define IDirect3DRMAnimation_DeleteKey(p,a)                          (p)->DeleteKey(a)
#define IDirect3DRMAnimation_SetFrame(p,a)                           (p)->SetFrame(a)
#define IDirect3DRMAnimation_SetTime(p,a)                            (p)->SetTime(a)
#define IDirect3DRMAnimation_GetOptions(p)                           (p)->GetOptions()
#endif

/*****************************************************************************
 * IDirect3DRMAnimation2 interface
 */
#define SDL_INTERFACE IDirect3DRMAnimation2
SDL_DECLARE_INTERFACE_(IDirect3DRMAnimation2, IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMAnimation2 methods ***/
    SDL_STDMETHOD(SetOptions)(SDL_THIS_ D3DRMANIMATIONOPTIONS flags) SDL_PURE;
    SDL_STDMETHOD(AddRotateKey)(SDL_THIS_ D3DVALUE time, D3DRMQUATERNION *q) SDL_PURE;
    SDL_STDMETHOD(AddPositionKey)(SDL_THIS_ D3DVALUE time, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(AddScaleKey)(SDL_THIS_ D3DVALUE time, D3DVALUE x, D3DVALUE y, D3DVALUE z) SDL_PURE;
    SDL_STDMETHOD(DeleteKey)(SDL_THIS_ D3DVALUE time) SDL_PURE;
    SDL_STDMETHOD(SetFrame)(SDL_THIS_ IDirect3DRMFrame3 *frame) SDL_PURE;
    SDL_STDMETHOD(SetTime)(SDL_THIS_ D3DVALUE time) SDL_PURE;
    SDL_STDMETHOD_(D3DRMANIMATIONOPTIONS, GetOptions)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(GetFrame)(SDL_THIS_ IDirect3DRMFrame3 **frame) SDL_PURE;
    SDL_STDMETHOD(DeleteKeyByID)(SDL_THIS_ SDL_DWORD dwID) SDL_PURE;
    SDL_STDMETHOD(AddKey)(SDL_THIS_ D3DRMANIMATIONKEY *key) SDL_PURE;
    SDL_STDMETHOD(ModifyKey)(SDL_THIS_ D3DRMANIMATIONKEY *key) SDL_PURE;
    SDL_STDMETHOD(GetKeys)(SDL_THIS_ D3DVALUE time_min, D3DVALUE time_max, SDL_DWORD *key_count, D3DRMANIMATIONKEY *keys);
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMAnimation2_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMAnimation2_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMAnimation2_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMAnimation2_Clone(p,a,b,c)                          (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMAnimation2_AddDestroyCallback(p,a,b)               (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMAnimation2_DeleteDestroyCallback(p,a,b)            (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMAnimation2_SetAppData(p,a)                         (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMAnimation2_GetAppData(p)                           (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMAnimation2_SetName(p,a)                            (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMAnimation2_GetName(p,a,b)                          (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMAnimation2_GetClassName(p,a,b)                     (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMAnimation2 methods ***/
#define IDirect3DRMAnimation2_SetOptions(p,a)                         (p)->lpVtbl->SetOptions(p,a)
#define IDirect3DRMAnimation2_AddRotateKey(p,a,b)                     (p)->lpVtbl->AddRotateKey(p,a,b)
#define IDirect3DRMAnimation2_AddPositionKey(p,a,b,c,d)               (p)->lpVtbl->AddPositionKey(p,a,b,c,d)
#define IDirect3DRMAnimation2_AddScaleKey(p,a,b,c,d)                  (p)->lpVtbl->AddScaleKey(p,a,b,c,d)
#define IDirect3DRMAnimation2_DeleteKey(p,a)                          (p)->lpVtbl->DeleteKey(p,a)
#define IDirect3DRMAnimation2_SetFrame(p,a)                           (p)->lpVtbl->SetFrame(p,a)
#define IDirect3DRMAnimation2_SetTime(p,a)                            (p)->lpVtbl->SetTime(p,a)
#define IDirect3DRMAnimation2_GetOptions(p)                           (p)->lpVtbl->GetOptions(p)
#define IDirect3DRMAnimation2_GetFrame(p,a)                           (p)->lpVtbl->GetFrame(p,a)
#define IDirect3DRMAnimation2_DeleteKeyByID(p,a)                      (p)->lpVtbl->DeleteKeyByID(p,a)
#define IDirect3DRMAnimation2_AddKey(p,a)                             (p)->lpVtbl->AddKey(p,a)
#define IDirect3DRMAnimation2_ModifyKey(p,a)                          (p)->lpVtbl->ModifyKey(p,a)
#define IDirect3DRMAnimation2_GetKeys(p,a,b,c,d)                      (p)->lpVtbl->GetKeys(p,a,b,c,d)
#else
/*** IUnknown methods ***/
#define IDirect3DRMAnimation2_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMAnimation2_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMAnimation2_Release(p)                              (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMAnimation2_Clone(p,a,b,c)                          (p)->Clone(a,b,c)
#define IDirect3DRMAnimation2_AddDestroyCallback(p,a,b)               (p)->AddDestroyCallback(a,b)
#define IDirect3DRMAnimation2_DeleteDestroyCallback(p,a,b)            (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMAnimation2_SetAppData(p,a)                         (p)->SetAppData(a)
#define IDirect3DRMAnimation2_GetAppData(p)                           (p)->GetAppData()
#define IDirect3DRMAnimation2_SetName(p,a)                            (p)->SetName(a)
#define IDirect3DRMAnimation2_GetName(p,a,b)                          (p)->GetName(a,b)
#define IDirect3DRMAnimation2_GetClassName(p,a,b)                     (p)->GetClassName(a,b)
/*** IDirect3DRMAnimation2 methods ***/
#define IDirect3DRMAnimation2_SetOptions(p,a)                         (p)->SetOptions(a)
#define IDirect3DRMAnimation2_AddRotateKey(p,a,b)                     (p)->AddRotateKey(a,b)
#define IDirect3DRMAnimation2_AddPositionKey(p,a,b,c,d)               (p)->AddPositionKey(a,b,c,d)
#define IDirect3DRMAnimation2_AddScaleKey(p,a,b,c,d)                  (p)->AddScaleKey(a,b,c,d)
#define IDirect3DRMAnimation2_DeleteKey(p,a)                          (p)->DeleteKey(a)
#define IDirect3DRMAnimation2_SetFrame(p,a)                           (p)->SetFrame(a)
#define IDirect3DRMAnimation2_SetTime(p,a)                            (p)->SetTime(a)
#define IDirect3DRMAnimation2_GetOptions(p)                           (p)->GetOptions()
#define IDirect3DRMAnimation2_GetFrame(p,a)                           (p)->GetFrame(a)
#define IDirect3DRMAnimation2_DeleteKeyByID(p,a)                      (p)->DeleteKeyByID(a)
#define IDirect3DRMAnimation2_AddKey(p,a)                             (p)->AddKey(a)
#define IDirect3DRMAnimation2_ModifyKey(p,a)                          (p)->ModifyKey(a)
#define IDirect3DRMAnimation2_GetKeys(p,a,b,c,d)                      (p)->GetKeys(a,b,c,d)
#endif

/*****************************************************************************
 * IDirect3DRMAnimationSet interface
 */
#define SDL_INTERFACE IDirect3DRMAnimationSet
SDL_DECLARE_INTERFACE_(IDirect3DRMAnimationSet, IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMAnimationSet methods ***/
    SDL_STDMETHOD(AddAnimation)(SDL_THIS_ IDirect3DRMAnimation *animation) SDL_PURE;
    SDL_STDMETHOD(Load)(SDL_THIS_ void *filename, void *name, D3DRMLOADOPTIONS flags,
            D3DRMLOADTEXTURECALLBACK cb, void *ctx, IDirect3DRMFrame *parent)SDL_PURE;
    SDL_STDMETHOD(DeleteAnimation)(SDL_THIS_ IDirect3DRMAnimation *animation) SDL_PURE;
    SDL_STDMETHOD(SetTime)(SDL_THIS_ D3DVALUE time) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMAnimationSet_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMAnimationSet_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMAnimationSet_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMAnimationSet_Clone(p,a,b,c)                          (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMAnimationSet_AddDestroyCallback(p,a,b)               (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMAnimationSet_DeleteDestroyCallback(p,a,b)            (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMAnimationSet_SetAppData(p,a)                         (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMAnimationSet_GetAppData(p)                           (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMAnimationSet_SetName(p,a)                            (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMAnimationSet_GetName(p,a,b)                          (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMAnimationSet_GetClassName(p,a,b)                     (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMAnimationSet methods ***/
#define IDirect3DRMAnimationSet_AddAnimation(p,a)                       (p)->lpVtbl->AddAnimation(p,a)
#define IDirect3DRMAnimationSet_Load(p,a,b,c,d,e,f)                     (p)->lpVtbl->Load(p,a,b,c,d,e,f)
#define IDirect3DRMAnimationSet_DeleteAnimation(p,a)                    (p)->lpVtbl->DeleteAnimation(p,a)
#define IDirect3DRMAnimationSet_SetTime(p,a)                            (p)->lpVtbl->SetTime(p,a)
#else
/*** IUnknown methods ***/
#define IDirect3DRMAnimationSet_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMAnimationSet_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMAnimationSet_Release(p)                              (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMAnimationSet_Clone(p,a,b,c)                          (p)->Clone(a,b,c)
#define IDirect3DRMAnimationSet_AddDestroyCallback(p,a,b)               (p)->AddDestroyCallback(a,b)
#define IDirect3DRMAnimationSet_DeleteDestroyCallback(p,a,b)            (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMAnimationSet_SetAppData(p,a)                         (p)->SetAppData(a)
#define IDirect3DRMAnimationSet_GetAppData(p)                           (p)->GetAppData()
#define IDirect3DRMAnimationSet_SetName(p,a)                            (p)->SetName(a)
#define IDirect3DRMAnimationSet_GetName(p,a,b)                          (p)->GetName(a,b)
#define IDirect3DRMAnimationSet_GetClassName(p,a,b)                     (p)->GetClassName(a,b)
/*** IDirect3DRMAnimationSet methods ***/
#define IDirect3DRMAnimationSet_AddAnimation(p,a)                       (p)->AddAnimation(a)
#define IDirect3DRMAnimationSet_Load(p,a,b,c,d,e,f)                     (p)->Load(a,b,c,d,e,f)
#define IDirect3DRMAnimationSet_DeleteAnimation(p,a)                    (p)->DeleteAnimation(a)
#define IDirect3DRMAnimationSet_SetTime(p,a)                            (p)->SetTime(a)
#endif

/*****************************************************************************
 * IDirect3DRMAnimationSet2 interface
 */
#define SDL_INTERFACE IDirect3DRMAnimationSet2
SDL_DECLARE_INTERFACE_(IDirect3DRMAnimationSet2, IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMAnimationSet2 methods ***/
    SDL_STDMETHOD(AddAnimation)(SDL_THIS_ IDirect3DRMAnimation2 *animation) SDL_PURE;
    SDL_STDMETHOD(Load)(SDL_THIS_ void *source, void *object_id, D3DRMLOADOPTIONS flags,
            D3DRMLOADTEXTURE3CALLBACK cb, void *ctx, IDirect3DRMFrame3 *parent_frame)SDL_PURE;
    SDL_STDMETHOD(DeleteAnimation)(SDL_THIS_ IDirect3DRMAnimation2 *animation) SDL_PURE;
    SDL_STDMETHOD(SetTime)(SDL_THIS_ D3DVALUE time) SDL_PURE;
    SDL_STDMETHOD(GetAnimations)(SDL_THIS_ struct IDirect3DRMAnimationArray **array) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMAnimationSet2_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMAnimationSet2_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMAnimationSet2_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMAnimationSet2_Clone(p,a,b,c)                          (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMAnimationSet2_AddDestroyCallback(p,a,b)               (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMAnimationSet2_DeleteDestroyCallback(p,a,b)            (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMAnimationSet2_SetAppData(p,a)                         (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMAnimationSet2_GetAppData(p)                           (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMAnimationSet2_SetName(p,a)                            (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMAnimationSet2_GetName(p,a,b)                          (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMAnimationSet2_GetClassName(p,a,b)                     (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMAnimationSet2 methods ***/
#define IDirect3DRMAnimationSet2_AddAnimation(p,a)                       (p)->lpVtbl->AddAnimation(p,a)
#define IDirect3DRMAnimationSet2_Load(p,a,b,c,d,e,f)                     (p)->lpVtbl->Load(p,a,b,c,d,e,f)
#define IDirect3DRMAnimationSet2_DeleteAnimation(p,a)                    (p)->lpVtbl->DeleteAnimation(p,a)
#define IDirect3DRMAnimationSet2_SetTime(p,a)                            (p)->lpVtbl->SetTime(p,a)
#define IDirect3DRMAnimationSet2_GetAnimations(p,a)                      (p)->lpVtbl->GetAnimations(p,a)
#else
/*** IUnknown methods ***/
#define IDirect3DRMAnimationSet2_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMAnimationSet2_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMAnimationSet2_Release(p)                              (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMAnimationSet2_Clone(p,a,b,c)                          (p)->Clone(a,b,c)
#define IDirect3DRMAnimationSet2_AddDestroyCallback(p,a,b)               (p)->AddDestroyCallback(a,b)
#define IDirect3DRMAnimationSet2_DeleteDestroyCallback(p,a,b)            (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMAnimationSet2_SetAppData(p,a)                         (p)->SetAppData(a)
#define IDirect3DRMAnimationSet2_GetAppData(p)                           (p)->GetAppData()
#define IDirect3DRMAnimationSet2_SetName(p,a)                            (p)->SetName(a)
#define IDirect3DRMAnimationSet2_GetName(p,a,b)                          (p)->GetName(a,b)
#define IDirect3DRMAnimationSet2_GetClassName(p,a,b)                     (p)->GetClassName(a,b)
/*** IDirect3DRMAnimationSet2 methods ***/
#define IDirect3DRMAnimationSet2_AddAnimation(p,a)                       (p)->AddAnimation(a)
#define IDirect3DRMAnimationSet2_Load(p,a,b,c,d,e,f)                     (p)->Load(a,b,c,d,e,f)
#define IDirect3DRMAnimationSet2_DeleteAnimation(p,a)                    (p)->DeleteAnimation(a)
#define IDirect3DRMAnimationSet2_SetTime(p,a)                            (p)->SetTime(a)
#define IDirect3DRMAnimationSet2_GetAnimations(p,a)                      (p)->GetAnimations(a)
#endif

/*****************************************************************************
 * IDirect3DRMUserVisual interface
 */
#define SDL_INTERFACE IDirect3DRMUserVisual
SDL_DECLARE_INTERFACE_(IDirect3DRMUserVisual, IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMUserVisual methods ***/
    SDL_STDMETHOD(Init)(SDL_THIS_ D3DRMUSERVISUALCALLBACK fn, void *arg) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMUserVisual_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMUserVisual_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMUserVisual_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMUserVisual_Clone(p,a,b,c)                          (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMUserVisual_AddDestroyCallback(p,a,b)               (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMUserVisual_DeleteDestroyCallback(p,a,b)            (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMUserVisual_SetAppData(p,a)                         (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMUserVisual_GetAppData(p)                           (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMUserVisual_SetName(p,a)                            (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMUserVisual_GetName(p,a,b)                          (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMUserVisual_GetClassName(p,a,b)                     (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMUserVisual methods ***/
#define IDirect3DRMUserVisual_Init(p,a,b)                             (p)->lpVtbl->Init(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMUserVisual_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMUserVisual_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMUserVisual_Release(p)                              (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMUserVisual_Clone(p,a,b,c)                          (p)->Clone(a,b,c)
#define IDirect3DRMUserVisual_AddDestroyCallback(p,a,b)               (p)->AddDestroyCallback(a,b)
#define IDirect3DRMUserVisual_DeleteDestroyCallback(p,a,b)            (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMUserVisual_SetAppData(p,a)                         (p)->SetAppData(a)
#define IDirect3DRMUserVisual_GetAppData(p)                           (p)->GetAppData()
#define IDirect3DRMUserVisual_SetName(p,a)                            (p)->SetName(a)
#define IDirect3DRMUserVisual_GetName(p,a,b)                          (p)->GetName(a,b)
#define IDirect3DRMUserVisual_GetClassName(p,a,b)                     (p)->GetClassName(a,b)
/*** IDirect3DRMUserVisual methods ***/
#define IDirect3DRMUserVisual_Init(p,a,b)                             (p)->Init(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMArray interface
 */
#define SDL_INTERFACE IDirect3DRMArray
SDL_DECLARE_INTERFACE_(IDirect3DRMArray, IUnknown)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMArray methods ***/
    SDL_STDMETHOD_(SDL_DWORD, GetSize)(SDL_THIS) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMArray_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMArray_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMArray_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMArray_GetSize(p)                              (p)->lpVtbl->GetSize(p)
#else
/*** IUnknown methods ***/
#define IDirect3DRMArray_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMArray_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMArray_Release(p)                              (p)->Release()
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMArray_GetSize(p)                              (p)->GetSize()
#endif

/*****************************************************************************
 * IDirect3DRMObjectArray interface
 */
#define SDL_INTERFACE IDirect3DRMObjectArray
SDL_DECLARE_INTERFACE_(IDirect3DRMObjectArray, IDirect3DRMArray)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMArray methods ***/
    SDL_STDMETHOD_(SDL_DWORD, GetSize)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObjectArray methods ***/
    SDL_STDMETHOD(GetElement)(SDL_THIS_ SDL_DWORD index, IDirect3DRMObject **element) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMObjectArray_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMObjectArray_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMObjectArray_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMObjectArray_GetSize(p)                              (p)->lpVtbl->GetSize(p)
/*** IDirect3DRMObjectArray methods ***/
#define IDirect3DRMObjectArray_GetElement(p,a,b)                       (p)->lpVtbl->GetElement(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMObjectArray_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMObjectArray_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMObjectArray_Release(p)                              (p)->Release()
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMObjectArray_GetSize(p)                              (p)->GetSize()
/*** IDirect3DRMObjectArray methods ***/
#define IDirect3DRMObjectArray_GetElement(p,a,b)                       (p)->GetElement(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMDeviceArray interface
 */
#define SDL_INTERFACE IDirect3DRMDeviceArray
SDL_DECLARE_INTERFACE_(IDirect3DRMDeviceArray, IDirect3DRMArray)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMArray methods ***/
    SDL_STDMETHOD_(SDL_DWORD, GetSize)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMDeviceArray methods ***/
    SDL_STDMETHOD(GetElement)(SDL_THIS_ SDL_DWORD index, IDirect3DRMDevice **element) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMDeviceArray_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMDeviceArray_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMDeviceArray_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMDeviceArray_GetSize(p)                              (p)->lpVtbl->GetSize(p)
/*** IDirect3DRMDeviceArray methods ***/
#define IDirect3DRMDeviceArray_GetElement(p,a,b)                       (p)->lpVtbl->GetElement(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMDeviceArray_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMDeviceArray_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMDeviceArray_Release(p)                              (p)->Release()
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMDeviceArray_GetSize(p)                              (p)->GetSize()
/*** IDirect3DRMDeviceArray methods ***/
#define IDirect3DRMDeviceArray_GetElement(p,a,b)                       (p)->GetElement(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMFrameArray interface
 */
#define SDL_INTERFACE IDirect3DRMFrameArray
SDL_DECLARE_INTERFACE_(IDirect3DRMFrameArray, IDirect3DRMArray)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMArray methods ***/
    SDL_STDMETHOD_(SDL_DWORD, GetSize)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMFrameArray methods ***/
    SDL_STDMETHOD(GetElement)(SDL_THIS_ SDL_DWORD index, IDirect3DRMFrame **element) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMFrameArray_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMFrameArray_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMFrameArray_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMFrameArray_GetSize(p)                              (p)->lpVtbl->GetSize(p)
/*** IDirect3DRMFrameArray methods ***/
#define IDirect3DRMFrameArray_GetElement(p,a,b)                       (p)->lpVtbl->GetElement(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMFrameArray_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMFrameArray_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMFrameArray_Release(p)                              (p)->Release()
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMFrameArray_GetSize(p)                              (p)->GetSize()
/*** IDirect3DRMFrameArray methods ***/
#define IDirect3DRMFrameArray_GetElement(p,a,b)                       (p)->GetElement(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMViewportArray interface
 */
#define SDL_INTERFACE IDirect3DRMViewportArray
SDL_DECLARE_INTERFACE_(IDirect3DRMViewportArray, IDirect3DRMArray)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMArray methods ***/
    SDL_STDMETHOD_(SDL_DWORD, GetSize)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMViewportArray methods ***/
    SDL_STDMETHOD(GetElement)(SDL_THIS_ SDL_DWORD index, IDirect3DRMViewport **element) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMViewportArray_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMViewportArray_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMViewportArray_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMViewportArray_GetSize(p)                              (p)->lpVtbl->GetSize(p)
/*** IDirect3DRMViewportArray methods ***/
#define IDirect3DRMViewportArray_GetElement(p,a,b)                       (p)->lpVtbl->GetElement(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMViewportArray_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMViewportArray_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMViewportArray_Release(p)                              (p)->Release()
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMViewportArray_GetSize(p)                              (p)->GetSize()
/*** IDirect3DRMViewportArray methods ***/
#define IDirect3DRMviewportArray_GetElement(p,a,b)                       (p)->GetElement(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMVisualArray interface
 */
#define SDL_INTERFACE IDirect3DRMVisualArray
SDL_DECLARE_INTERFACE_(IDirect3DRMVisualArray, IDirect3DRMArray)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMArray methods ***/
    SDL_STDMETHOD_(SDL_DWORD, GetSize)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMVisualArray methods ***/
    SDL_STDMETHOD(GetElement)(SDL_THIS_ SDL_DWORD index, IDirect3DRMVisual **element) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMVisualArray_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMVisualArray_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMVisualArray_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMVisualArray_GetSize(p)                              (p)->lpVtbl->GetSize(p)
/*** IDirect3DRMVisualArray methods ***/
#define IDirect3DRMVisualArray_GetElement(p,a,b)                       (p)->lpVtbl->GetElement(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMVisualArray_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMVisualArray_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMVisualArray_Release(p)                              (p)->Release()
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMVisualArray_GetSize(p)                              (p)->GetSize()
/*** IDirect3DRMVisualArray methods ***/
#define IDirect3DRMVisualArray_GetElement(p,a,b)                       (p)->GetElement(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMAnimationArray interface
 */
#define SDL_INTERFACE IDirect3DRMAnimationArray
SDL_DECLARE_INTERFACE_(IDirect3DRMAnimationArray, IDirect3DRMArray)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMArray methods ***/
    SDL_STDMETHOD_(SDL_DWORD, GetSize)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMAnimationArray methods ***/
    SDL_STDMETHOD(GetElement)(SDL_THIS_ SDL_DWORD index, IDirect3DRMAnimation2 **element) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMAnimationArray_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMAnimationArray_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMAnimationArray_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMAnimationArray_GetSize(p)                              (p)->lpVtbl->GetSize(p)
/*** IDirect3DRMAnimationArray methods ***/
#define IDirect3DRMAnimationArray_GetElement(p,a,b)                       (p)->lpVtbl->GetElement(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMAnimationArray_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMAnimationArray_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMAnimationArray_Release(p)                              (p)->Release()
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMAnimationArray_GetSize(p)                              (p)->GetSize()
/*** IDirect3DRMAnimationArray methods ***/
#define IDirect3DRMAnimationArray_GetElement(p,a,b)                       (p)->GetElement(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMPickedArray interface
 */
#define SDL_INTERFACE IDirect3DRMPickedArray
SDL_DECLARE_INTERFACE_(IDirect3DRMPickedArray, IDirect3DRMArray)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMArray methods ***/
    SDL_STDMETHOD_(SDL_DWORD, GetSize)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMPickedArray methods ***/
    SDL_STDMETHOD(GetPick)(SDL_THIS_ SDL_DWORD index, IDirect3DRMVisual **visual,
            IDirect3DRMFrameArray **frame_array, D3DRMPICKDESC *pick_desc) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMPickedArray_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMPickedArray_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMPickedArray_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMPickedArray_GetSize(p)                              (p)->lpVtbl->GetSize(p)
/*** IDirect3DRMPickedArray methods ***/
#define IDirect3DRMPickedArray_GetPick(p,a,b,c,d)                      (p)->lpVtbl->GetPick(p,a,b,c,d)
#else
/*** IUnknown methods ***/
#define IDirect3DRMPickedArray_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMPickedArray_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMPickedArray_Release(p)                              (p)->Release()
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMPickedArray_GetSize(p)                              (p)->GetSize()
/*** IDirect3DRMPickedArray methods ***/
#define IDirect3DRMPickedArray_GetPick(p,a,b,c,d)                      (p)->GetPick(a,b,c,d)
#endif

/*****************************************************************************
 * IDirect3DRMLightArray interface
 */
#define SDL_INTERFACE IDirect3DRMLightArray
SDL_DECLARE_INTERFACE_(IDirect3DRMLightArray, IDirect3DRMArray)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMArray methods ***/
    SDL_STDMETHOD_(SDL_DWORD, GetSize)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMLightArray methods ***/
    SDL_STDMETHOD(GetElement)(SDL_THIS_ SDL_DWORD index, IDirect3DRMLight **element) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMLightArray_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMLightArray_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMLightArray_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMLightArray_GetSize(p)                              (p)->lpVtbl->GetSize(p)
/*** IDirect3DRMLightArray methods ***/
#define IDirect3DRMLightArray_GetElement(p,a,b)                       (p)->lpVtbl->GetElement(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMLightArray_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMLightArray_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMLightArray_Release(p)                              (p)->Release()
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMLightArray_GetSize(p)                              (p)->GetSize()
/*** IDirect3DRMLightArray methods ***/
#define IDirect3DRMLightArray_GetElement(p,a,b)                       (p)->GetElement(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMFaceArray interface
 */
#define SDL_INTERFACE IDirect3DRMFaceArray
SDL_DECLARE_INTERFACE_(IDirect3DRMFaceArray, IDirect3DRMArray)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMArray methods ***/
    SDL_STDMETHOD_(SDL_DWORD, GetSize)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMFaceArray methods ***/
    SDL_STDMETHOD(GetElement)(SDL_THIS_ SDL_DWORD index, IDirect3DRMFace **element) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMFaceArray_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMFaceArray_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMFaceArray_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMFaceArray_GetSize(p)                              (p)->lpVtbl->GetSize(p)
/*** IDirect3DRMFaceArray methods ***/
#define IDirect3DRMFaceArray_GetElement(p,a,b)                       (p)->lpVtbl->GetElement(p,a,b)
#else
/*** IUnknown methods ***/
#define IDirect3DRMFaceArray_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMFaceArray_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMFaceArray_Release(p)                              (p)->Release()
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMFaceArray_GetSize(p)                              (p)->GetSize()
/*** IDirect3DRMFaceArray methods ***/
#define IDirect3DRMFaceArray_GetElement(p,a,b)                       (p)->GetElement(a,b)
#endif

/*****************************************************************************
 * IDirect3DRMPicked2Array interface
 */
#define SDL_INTERFACE IDirect3DRMPicked2Array
SDL_DECLARE_INTERFACE_(IDirect3DRMPicked2Array, IDirect3DRMArray)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMArray methods ***/
    SDL_STDMETHOD_(SDL_DWORD, GetSize)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMPicked2Array methods ***/
    SDL_STDMETHOD(GetPick)(SDL_THIS_ SDL_DWORD index, IDirect3DRMVisual **visual,
            IDirect3DRMFrameArray **frame_array, D3DRMPICKDESC2 *pick_desc) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMPicked2Array_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMPicked2Array_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMPicked2Array_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMPicked2Array_GetSize(p)                              (p)->lpVtbl->GetSize(p)
/*** IDirect3DRMPicked2Array methods ***/
#define IDirect3DRMPicked2Array_GetPick(p,a,b,c,d)                      (p)->lpVtbl->GetPick(p,a,b,c,d)
#else
/*** IUnknown methods ***/
#define IDirect3DRMPicked2Array_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMPicked2Array_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMPicked2Array_Release(p)                              (p)->Release()
/*** IDirect3DRMArray methods ***/
#define IDirect3DRMPicked2Array_GetSize(p)                              (p)->GetSize()
/*** IDirect3DRMPicked2Array methods ***/
#define IDirect3DRMPicked2Array_GetPick(p,a,b,c,d)                      (p)->GetPick(a,b,c,d)
#endif

/*****************************************************************************
 * IDirect3DRMInterpolator interface
 */
#define SDL_INTERFACE IDirect3DRMInterpolator
SDL_DECLARE_INTERFACE_(IDirect3DRMInterpolator, IDirect3DRMObject)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMInterpolator methods ***/
    SDL_STDMETHOD(AttachObject)(SDL_THIS_ IDirect3DRMObject *object) SDL_PURE;
    SDL_STDMETHOD(GetAttachedObjects)(SDL_THIS_ IDirect3DRMObjectArray **array) SDL_PURE;
    SDL_STDMETHOD(DetachObject)(SDL_THIS_ IDirect3DRMObject *object) SDL_PURE;
    SDL_STDMETHOD(SetIndex)(SDL_THIS_ D3DVALUE) SDL_PURE;
    SDL_STDMETHOD_(D3DVALUE, GetIndex)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(Interpolate)(SDL_THIS_ D3DVALUE index, IDirect3DRMObject *object, D3DRMINTERPOLATIONOPTIONS flags) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMInterpolator_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMInterpolator_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMInterpolator_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMInterpolator_Clone(p,a,b,c)                          (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMInterpolator_AddDestroyCallback(p,a,b)               (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMInterpolator_DeleteDestroyCallback(p,a,b)            (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMInterpolator_SetAppData(p,a)                         (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMInterpolator_GetAppData(p)                           (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMInterpolator_SetName(p,a)                            (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMInterpolator_GetName(p,a,b)                          (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMInterpolator_GetClassName(p,a,b)                     (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMInterpolator methods ***/
#define IDirect3DRMInterpolator_AttachObject(p,a)                       (p)->lpVtbl->AttachObject(p,a)
#define IDirect3DRMInterpolator_GetAttachedObjects(p,a)                 (p)->lpVtbl->GetAttachedObjects(p,a)
#define IDirect3DRMInterpolator_DetachObject(p,a)                       (p)->lpVtbl->DetachObject(p,a)
#define IDirect3DRMInterpolator_SetIndex(p,a)                           (p)->lpVtbl->SetIndex(p,a)
#define IDirect3DRMInterpolator_GetIndex(p)                             (p)->lpVtbl->GetIndex(p)
#define IDirect3DRMInterpolator_Interpolate(p,a,b,c)                    (p)->lpVtbl->Interpolate(p,a,b,c)
#else
/*** IUnknown methods ***/
#define IDirect3DRMInterpolator_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMInterpolator_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMInterpolator_Release(p)                              (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMInterpolator_Clone(p,a,b,c)                          (p)->Clone(a,b,c)
#define IDirect3DRMInterpolator_AddDestroyCallback(p,a,b)               (p)->AddDestroyCallback(a,b)
#define IDirect3DRMInterpolator_DeleteDestroyCallback(p,a,b)            (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMInterpolator_SetAppData(p,a)                         (p)->SetAppData(a)
#define IDirect3DRMInterpolator_GetAppData(p)                           (p)->GetAppData()
#define IDirect3DRMInterpolator_SetName(p,a)                            (p)->SetName(a)
#define IDirect3DRMInterpolator_GetName(p,a,b)                          (p)->GetName(a,b)
#define IDirect3DRMInterpolator_GetClassName(p,a,b)                     (p)->GetClassName(a,b)
/*** IDirect3DRMInterpolator methods ***/
#define IDirect3DRMInterpolator_AttachObject(p,a)                       (p)->AttachObject(a)
#define IDirect3DRMInterpolator_GetAttachedObjects(p,a)                 (p)->GetAttachedObjects(a)
#define IDirect3DRMInterpolator_DetachObject(p,a)                       (p)->DetachObject(a)
#define IDirect3DRMInterpolator_SetIndex(p,a)                           (p)->SetIndex(a)
#define IDirect3DRMInterpolator_GetIndex(p)                             (p)->GetIndex()
#define IDirect3DRMInterpolator_Interpolate(p,a,b,c)                    (p)->Interpolate(a,b,c)
#endif

/*****************************************************************************
 * IDirect3DRMClippedVisual interface
 */
#define SDL_INTERFACE IDirect3DRMClippedVisual
SDL_DECLARE_INTERFACE_(IDirect3DRMClippedVisual, IDirect3DRMVisual)
{
    /*** IUnknown methods ***/
    SDL_STDMETHOD_(SDL_HRESULT,QueryInterface)(SDL_THIS_ SDL_REFIID riid, void** ppvObject) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,AddRef)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD_(SDL_ULONG,Release)(SDL_THIS) SDL_PURE;
    /*** IDirect3DRMObject methods ***/
    SDL_STDMETHOD(Clone)(SDL_THIS_ IUnknown *outer, SDL_REFIID iid, void **out) SDL_PURE;
    SDL_STDMETHOD(AddDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(DeleteDestroyCallback)(SDL_THIS_ D3DRMOBJECTCALLBACK cb, void *ctx) SDL_PURE;
    SDL_STDMETHOD(SetAppData)(SDL_THIS_ SDL_LPVOID data) SDL_PURE;
    SDL_STDMETHOD_(SDL_LPVOID, GetAppData)(SDL_THIS) SDL_PURE;
    SDL_STDMETHOD(SetName)(SDL_THIS_ const char *name) SDL_PURE;
    SDL_STDMETHOD(GetName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    SDL_STDMETHOD(GetClassName)(SDL_THIS_ SDL_DWORD *size, char *name) SDL_PURE;
    /*** IDirect3DRMClippedVisual methods ***/
    SDL_STDMETHOD(Init) (SDL_THIS_ IDirect3DRMVisual *visual) SDL_PURE;
    SDL_STDMETHOD(AddPlane) (SDL_THIS_ IDirect3DRMFrame3 *reference, D3DVECTOR *point,
            D3DVECTOR *normal, SDL_DWORD flags, SDL_DWORD *id) SDL_PURE;
    SDL_STDMETHOD(DeletePlane)(SDL_THIS_ SDL_DWORD, SDL_DWORD) SDL_PURE;
    SDL_STDMETHOD(GetPlaneIDs)(SDL_THIS_ SDL_DWORD *count, SDL_DWORD *id, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(GetPlane) (SDL_THIS_ SDL_DWORD id, IDirect3DRMFrame3 *reference, D3DVECTOR *point,
            D3DVECTOR *normal, SDL_DWORD flags) SDL_PURE;
    SDL_STDMETHOD(SetPlane) (SDL_THIS_ SDL_DWORD id, IDirect3DRMFrame3 *reference, D3DVECTOR *point,
            D3DVECTOR *normal, SDL_DWORD flags) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
/*** IUnknown methods ***/
#define IDirect3DRMClippedVisual_QueryInterface(p,a,b)                   (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DRMClippedVisual_AddRef(p)                               (p)->lpVtbl->AddRef(p)
#define IDirect3DRMClippedVisual_Release(p)                              (p)->lpVtbl->Release(p)
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMClippedVisual_Clone(p,a,b,c)                          (p)->lpVtbl->Clone(p,a,b,c)
#define IDirect3DRMClippedVisual_AddDestroyCallback(p,a,b)               (p)->lpVtbl->AddDestroyCallback(p,a,b)
#define IDirect3DRMClippedVisual_DeleteDestroyCallback(p,a,b)            (p)->lpVtbl->DeleteDestroyCallback(p,a,b)
#define IDirect3DRMClippedVisual_SetAppData(p,a)                         (p)->lpVtbl->SetAppData(p,a)
#define IDirect3DRMClippedVisual_GetAppData(p)                           (p)->lpVtbl->GetAppData(p)
#define IDirect3DRMClippedVisual_SetName(p,a)                            (p)->lpVtbl->SetName(p,a)
#define IDirect3DRMClippedVisual_GetName(p,a,b)                          (p)->lpVtbl->GetName(p,a,b)
#define IDirect3DRMClippedVisual_GetClassName(p,a,b)                     (p)->lpVtbl->GetClassName(p,a,b)
/*** IDirect3DRMClippedVisual methods ***/
#define IDirect3DRMClippedVisual_Init(p,a)                               (p)->lpVtbl->Init(p,a)
#define IDirect3DRMClippedVisual_AddPlane(p,a,b,c,d,e)                   (p)->lpVtbl->AddPlane(p,a,b,c,d,e)
#define IDirect3DRMClippedVisual_DeletePlane(p,a,b)                      (p)->lpVtbl->DeletePlane(p,a,b)
#define IDirect3DRMClippedVisual_GetPlaneIDs(p,a,b,c)                    (p)->lpVtbl->GetPlaneIDs(p,a,b,c)
#define IDirect3DRMClippedVisual_GetPlane(p,a,b,c,d,e)                   (p)->lpVtbl->GetPlane(p,a,b,c,d,e)
#define IDirect3DRMClippedVisual_SetPlane(p,a,b,c,d,e)                   (p)->lpVtbl->SetPlane(p,a,b,c,d,e)
#else
/*** IUnknown methods ***/
#define IDirect3DRMClippedVisual_QueryInterface(p,a,b)                   (p)->QueryInterface(a,b)
#define IDirect3DRMClippedVisual_AddRef(p)                               (p)->AddRef()
#define IDirect3DRMClippedVisual_Release(p)                              (p)->Release()
/*** IDirect3DRMObject methods ***/
#define IDirect3DRMClippedVisual_Clone(p,a,b,c)                          (p)->Clone(a,b,c)
#define IDirect3DRMClippedVisual_AddDestroyCallback(p,a,b)               (p)->AddDestroyCallback(a,b)
#define IDirect3DRMClippedVisual_DeleteDestroyCallback(p,a,b)            (p)->DeleteDestroyCallback(a,b)
#define IDirect3DRMClippedVisual_SetAppData(p,a)                         (p)->SetAppData(a)
#define IDirect3DRMClippedVisual_GetAppData(p)                           (p)->GetAppData()
#define IDirect3DRMClippedVisual_SetName(p,a)                            (p)->SetName(a)
#define IDirect3DRMClippedVisual_GetName(p,a,b)                          (p)->GetName(a,b)
#define IDirect3DRMClippedVisual_GetClassName(p,a,b)                     (p)->GetClassName(a,b)
/*** IDirect3DRMClippedVisual methods ***/
#define IDirect3DRMClippedVisual_Init(p,a)                               (p)->Init(a)
#define IDirect3DRMClippedVisual_AddPlane(p,a,b,c,d,e)                   (p)->AddPlane(a,b,c,d,e)
#define IDirect3DRMClippedVisual_DeletePlane(p,a,b)                      (p)->DeletePlane(a,b)
#define IDirect3DRMClippedVisual_GetPlaneIDs(p,a,b,c)                    (p)->GetPlaneIDs(a,b,c)
#define IDirect3DRMClippedVisual_GetPlane(p,a,b,c,d,e)                   (p)->GetPlane(a,b,c,d,e)
#define IDirect3DRMClippedVisual_SetPlane(p,a,b,c,d,e)                   (p)->SetPlane(a,b,c,d,e)
#endif

#ifdef __cplusplus
};
#endif

#endif // SDL_D3DRMOBJ_H
