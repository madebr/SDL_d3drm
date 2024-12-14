#ifndef IDIRECT3DRMVIEWPORT_H
#define IDIRECT3DRMVIEWPORT_H

#include "SDL_d3drm.h"

typedef struct {
    IDirect3DRMViewport interface_IDirect3DRMViewport;
    IDirect3DRMViewport2 interface_IDirect3DRMViewport2;
    SDL_ULONG ref_count;
} SDL_Direct3DRMViewport;

static inline SDL_Direct3DRMViewport *from_IDirect3DRMViewport(IDirect3DRMViewport *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMViewport *)((uintptr_t) frame - offsetof(SDL_Direct3DRMViewport, interface_IDirect3DRMViewport));
}

static inline SDL_Direct3DRMViewport *from_IDirect3DRMViewport2(IDirect3DRMViewport2 *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMViewport *)((uintptr_t) frame - offsetof(SDL_Direct3DRMViewport, interface_IDirect3DRMViewport2));
}

#endif // IDIRECT3DRMVIEWPORT_H
