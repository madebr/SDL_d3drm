#ifndef IDIRECT3DRMMATERIAL_H
#define IDIRECT3DRMMATERIAL_H

#include "SDL_d3drm.h"

typedef struct {
    IDirect3DRMMaterial interface_IDirect3DRMMaterial;
    IDirect3DRMMaterial2 interface_IDirect3DRMMaterial2;
    SDL_ULONG ref_count;
} SDL_Direct3DRMMaterial;

static inline SDL_Direct3DRMMaterial *from_IDirect3DRMMaterial(IDirect3DRMMaterial *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMMaterial *)((uintptr_t) frame - offsetof(SDL_Direct3DRMMaterial, interface_IDirect3DRMMaterial));
}

static inline SDL_Direct3DRMMaterial *from_IDirect3DRMMaterial2(IDirect3DRMMaterial2 *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMMaterial *)((uintptr_t) frame - offsetof(SDL_Direct3DRMMaterial, interface_IDirect3DRMMaterial2));
}

#endif // IDIRECT3DRMMATERIAL_H
