#ifndef IDIRECT3DRMTEXTURE_H
#define IDIRECT3DRMTEXTURE_H

#include "SDL_d3drm.h"

typedef struct {
    IDirect3DRMTexture interface_IDirect3DRMTexture;
    IDirect3DRMTexture2 interface_IDirect3DRMTexture2;
    IDirect3DRMTexture3 interface_IDirect3DRMTexture3;
    SDL_ULONG ref_count;
} SDL_Direct3DRMTexture;

static inline SDL_Direct3DRMTexture *from_IDirect3DRMTexture(IDirect3DRMTexture *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMTexture *)((uintptr_t) frame - offsetof(SDL_Direct3DRMTexture, interface_IDirect3DRMTexture));
}

static inline SDL_Direct3DRMTexture *from_IDirect3DRMTexture2(IDirect3DRMTexture2 *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMTexture *)((uintptr_t) frame - offsetof(SDL_Direct3DRMTexture, interface_IDirect3DRMTexture2));
}

static inline SDL_Direct3DRMTexture *from_IDirect3DRMTexture3(IDirect3DRMTexture3 *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMTexture *)((uintptr_t) frame - offsetof(SDL_Direct3DRMTexture, interface_IDirect3DRMTexture3));
}

#endif // IDIRECT3DRMTEXTURE_H
