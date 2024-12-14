#ifndef IDIRECT3DRMMESHBUILDER_H
#define IDIRECT3DRMMESHBUILDER_H

#include "SDL_d3drm.h"

typedef struct {
    IDirect3DRMMeshBuilder interface_IDirect3DRMMeshBuilder;
    IDirect3DRMMeshBuilder2 interface_IDirect3DRMMeshBuilder2;
    IDirect3DRMMeshBuilder3 interface_IDirect3DRMMeshBuilder3;
    SDL_ULONG ref_count;
} SDL_Direct3DRMMeshBuilder;

static inline SDL_Direct3DRMMeshBuilder *from_IDirect3DRMMeshBuilder(IDirect3DRMMeshBuilder *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMMeshBuilder *)((uintptr_t) frame - offsetof(SDL_Direct3DRMMeshBuilder, interface_IDirect3DRMMeshBuilder));
}

static inline SDL_Direct3DRMMeshBuilder *from_IDirect3DRMMeshBuilder2(IDirect3DRMMeshBuilder2 *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMMeshBuilder *)((uintptr_t) frame - offsetof(SDL_Direct3DRMMeshBuilder, interface_IDirect3DRMMeshBuilder2));
}

static inline SDL_Direct3DRMMeshBuilder *from_IDirect3DRMMeshBuilder3(IDirect3DRMMeshBuilder3 *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMMeshBuilder *)((uintptr_t) frame - offsetof(SDL_Direct3DRMMeshBuilder, interface_IDirect3DRMMeshBuilder3));
}

#endif // IDIRECT3DRMMESHBUILDER_H
