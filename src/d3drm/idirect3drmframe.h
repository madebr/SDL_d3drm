#ifndef IDIRECT3DRMFRAME_H
#define IDIRECT3DRMFRAME_H

#include "SDL_d3drm.h"

typedef struct {
    IDirect3DRMFrame interface_IDirect3DRMFrame;
    IDirect3DRMFrame2 interface_IDirect3DRMFrame2;
    IDirect3DRMFrame3 interface_IDirect3DRMFrame3;
    SDL_ULONG ref_count;
} SDL_Direct3DRMFrame;

static inline SDL_Direct3DRMFrame *from_IDirect3DRMFrame(IDirect3DRMFrame *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMFrame *)((uintptr_t) frame - offsetof(SDL_Direct3DRMFrame, interface_IDirect3DRMFrame));
}

static inline SDL_Direct3DRMFrame *from_IDirect3DRMFrame2(IDirect3DRMFrame2 *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMFrame *)((uintptr_t) frame - offsetof(SDL_Direct3DRMFrame, interface_IDirect3DRMFrame2));
}

static inline SDL_Direct3DRMFrame *from_IDirect3DRMFrame3(IDirect3DRMFrame3 *frame) {
    if (frame == NULL) {
        return NULL;
    }
    return (SDL_Direct3DRMFrame *)((uintptr_t) frame - offsetof(SDL_Direct3DRMFrame, interface_IDirect3DRMFrame3));
}

#endif // IDIRECT3DRMFRAME_H
