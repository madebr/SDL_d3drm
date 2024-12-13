#include "library.h"
#include "SDL_d3drm.h"

#include <stdlib.h>

D3DRMQUATERNION * SDL_WINAPI D3DRMQuaternionFromRotation(D3DRMQUATERNION *x, D3DVECTOR *axis, D3DVALUE theta) {
    (void) x;
    (void) axis;
    (void) theta;
    SDL_TriggerBreakpoint();
    abort();
}

D3DRMQUATERNION * SDL_WINAPI D3DRMQuaternionMultiply(D3DRMQUATERNION *ret, D3DRMQUATERNION *x, D3DRMQUATERNION *y) {
    (void) ret;
    (void) x;
    (void) y;
    SDL_TriggerBreakpoint();
    abort();
}

D3DRMQUATERNION * SDL_WINAPI D3DRMQuaternionSlerp(D3DRMQUATERNION *ret, D3DRMQUATERNION *x, D3DRMQUATERNION *y, D3DVALUE alpha) {
    (void) ret;
    (void) x;
    (void) y;
    (void) alpha;
    SDL_TriggerBreakpoint();
    abort();
}

D3DVECTOR * SDL_WINAPI D3DRMVectorAdd(D3DVECTOR *ret, D3DVECTOR *x, D3DVECTOR *y) {
    (void) ret;
    (void) x;
    (void) y;
    SDL_TriggerBreakpoint();
    abort();
}

D3DVECTOR * SDL_WINAPI D3DRMVectorCrossProduct(D3DVECTOR *ret, D3DVECTOR *x, D3DVECTOR *y) {
    (void) ret;
    (void) x;
    (void) y;
    SDL_TriggerBreakpoint();
    abort();
}

D3DVALUE SDL_WINAPI D3DRMVectorDotProduct(D3DVECTOR *x, D3DVECTOR *y) {
    (void) x;
    (void) y;
    SDL_TriggerBreakpoint();
    abort();
}

D3DVECTOR * SDL_WINAPI D3DRMVectorNormalize(D3DVECTOR *x) {
    (void) x;
    SDL_TriggerBreakpoint();
    abort();
}

D3DVALUE SDL_WINAPI D3DRMVectorModulus(D3DVECTOR *x) {
    (void) x;
    SDL_TriggerBreakpoint();
    abort();
}

D3DVECTOR * SDL_WINAPI D3DRMVectorRandom(D3DVECTOR *ret) {
    (void) ret;
    SDL_TriggerBreakpoint();
    abort();
}

D3DVECTOR * SDL_WINAPI D3DRMVectorRotate(D3DVECTOR *ret, D3DVECTOR *x, D3DVECTOR *axis, D3DVALUE theta) {
    (void) ret;
    (void) x;
    (void) axis;
    (void) theta;
    SDL_TriggerBreakpoint();
    abort();
}

D3DVECTOR * SDL_WINAPI D3DRMVectorReflect(D3DVECTOR *ret, D3DVECTOR *ray, D3DVECTOR *normal) {
    (void) ret;
    (void) ray;
    (void) normal;
    SDL_TriggerBreakpoint();
    abort();
}

D3DVECTOR * SDL_WINAPI D3DRMVectorScale(D3DVECTOR *ret, D3DVECTOR *x, D3DVALUE scale) {
    (void) ret;
    (void) x;
    (void) scale;
    SDL_TriggerBreakpoint();
    abort();
}

D3DVECTOR * SDL_WINAPI D3DRMVectorSubtract(D3DVECTOR *ret, D3DVECTOR *x, D3DVECTOR *y) {
    (void) ret;
    (void) x;
    (void) y;
    SDL_TriggerBreakpoint();
    abort();
}

D3DCOLOR SDL_WINAPI D3DRMCreateColorRGB(D3DVALUE r, D3DVALUE g, D3DVALUE b) {
    return RGBA_MAKE((int)(255.f * r), (int)(255.f * g), (int)(255.f * b), 0xff);
}

D3DCOLOR SDL_WINAPI D3DRMCreateColorRGBA(D3DVALUE r, D3DVALUE g, D3DVALUE b, D3DVALUE a) {
    return RGBA_MAKE((int)(255.f * r), (int)(255.f * g), (int)(255.f * b), (int)(255.f * a));
}

D3DVALUE SDL_WINAPI D3DRMColorGetAlpha(D3DCOLOR c) {
    return (float)RGBA_GETALPHA(c) / 255.f;
}

D3DVALUE SDL_WINAPI D3DRMColorGetBlue(D3DCOLOR c) {
    return (float)RGBA_GETBLUE(c) / 255.f;
}

D3DVALUE SDL_WINAPI D3DRMColorGetGreen(D3DCOLOR c) {
    return (float)RGBA_GETGREEN(c) / 255.f;
}

D3DVALUE SDL_WINAPI D3DRMColorGetRed(D3DCOLOR c) {
    return (float)RGBA_GETRED(c) / 255.f;
}

void SDL_WINAPI D3DRMMatrixFromQuaternion(D3DRMMATRIX4D m, D3DRMQUATERNION *q) {
    (void) m;
    (void) q;
    SDL_TriggerBreakpoint();
    abort();
}

SDL_STDAPI Direct3DRMCreate(LPDIRECT3DRM SDL_FAR *lplpDirect3DRM) {
    (void) lplpDirect3DRM;
    SDL_TriggerBreakpoint();
    abort();
}
