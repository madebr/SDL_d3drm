#ifndef IDIRECT3DRMDEVICE_H
#define IDIRECT3DRMDEVICE_H

#include "SDL_d3drm.h"

typedef struct {
    IDirect3DRMDevice interface_IDirect3DRMDevice;
    IDirect3DRMDevice2 interface_IDirect3DRMDevice2;
    IDirect3DRMDevice3 interface_IDirect3DRMDevice3;
    SDL_ULONG ref_count;
} SDL_Direct3DRMDevice;

static inline SDL_Direct3DRMDevice *from_IDirect3DRMDevice(IDirect3DRMDevice *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMDevice *)((uintptr_t) frame - offsetof(SDL_Direct3DRMDevice, interface_IDirect3DRMDevice));
}

static inline SDL_Direct3DRMDevice *from_IDirect3DRMDevice2(IDirect3DRMDevice2 *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMDevice *)((uintptr_t) frame - offsetof(SDL_Direct3DRMDevice, interface_IDirect3DRMDevice2));
}

static inline SDL_Direct3DRMDevice *from_IDirect3DRMDevice3(IDirect3DRMDevice3 *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMDevice *)((uintptr_t) frame - offsetof(SDL_Direct3DRMDevice, interface_IDirect3DRMDevice3));
}

#endif // IDIRECT3DRMDEVICE_H
