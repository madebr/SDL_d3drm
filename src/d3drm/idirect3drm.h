#ifndef IDIRECT3DRM_H
#define IDIRECT3DRM_H

#include "SDL_d3drm.h"

#include <stddef.h>

typedef struct {
    IDirect3DRM interface_IDirect3DRM;
    IDirect3DRM2 interface_IDirect3DRM2;
    IDirect3DRM3 interface_IDirect3DRM3;
    SDL_ULONG ref_count;
} SDL_Direct3DRM;

static SDL_Direct3DRM *from_IDirect3DRM(IDirect3DRM *id3drm) {
    return (SDL_Direct3DRM *)((uintptr_t) id3drm - offsetof(SDL_Direct3DRM, interface_IDirect3DRM));
}

static SDL_Direct3DRM *from_IDirect3DRM2(IDirect3DRM2 *id3drm) {
    return (SDL_Direct3DRM *)((uintptr_t) id3drm - offsetof(SDL_Direct3DRM, interface_IDirect3DRM2));
}

static SDL_Direct3DRM *from_IDirect3DRM3(IDirect3DRM3 *id3drm) {
    return (SDL_Direct3DRM *)((uintptr_t) id3drm - offsetof(SDL_Direct3DRM, interface_IDirect3DRM3));
}

#endif // IDIRECT3DRM_H
