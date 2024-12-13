#include <SDL_d3drm.h>
#include <SDL3/SDL.h>
#include <SDL3/SDL_test.h>

#define EPSILON 2e-5f

static double float_delta(float a, float b) {
    return SDL_fabs(a - b);
}

static int SDLCALL d3drm_D3DRMColorGetRed(void *arg) {
    const struct {
        D3DCOLOR in;
        D3DVALUE out;
    } test_cases[] = {
        { 0x00000000, 0.f },
        { 0xff000000, 0.f },
        { 0x80000000, 0.f },
        { 0x00ff0000, 1.f },
        { 0x00fe0000, 254.f/255.f },
        { 0x00fd0000, 253.f/255.f },
        { 0x00800000, 128.f/255.f },
        { 0x00400000, 64.f/255.f },
        { 0x00020000, 2.f/255.f },
        { 0x00010000, 1.f/255.f },
        { 0x0000ff00, 0.f },
        { 0x00008000, 0.f },
        { 0x0000ff00, 0.f },
        { 0x00008000, 0.f },
        { 0x000000ff, 0.f },
        { 0x00000080, 0.f },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        const D3DCOLOR ref_in = test_cases[i].in;
        const D3DVALUE ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMColorGetRed(0x%08" SDL_PRIx32 ")", ref_in);
        D3DVALUE actual = D3DRMColorGetRed(ref_in);
        double delta = float_delta(actual, ref_out);
        SDLTest_AssertCheck(delta < EPSILON, "Got %f, expected %f (delta=%g)", actual, ref_out, delta);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMColorGetRed  = {
    d3drm_D3DRMColorGetRed, "d3drm_D3DRMColorGetRed", "Test D3DRMColorGetRed", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMColorGetGreen(void *arg) {
    const struct {
        D3DCOLOR in;
        D3DVALUE out;
    } test_cases[] = {
        { 0x00000000, 0.f },
        { 0xff000000, 0.f },
        { 0x80000000, 0.f },
        { 0x00ff0000, 0.f },
        { 0x00800000, 0.f },
        { 0x0000ff00, 1.f },
        { 0x0000fe00, 254.f/255.f },
        { 0x0000fd00, 253.f/255.f },
        { 0x00008000, 128.f/255.f },
        { 0x00004000, 64.f/255.f },
        { 0x00000200, 2.f/255.f },
        { 0x00000100, 1.f/255.f },
        { 0x000000ff, 0.f },
        { 0x00000080, 0.f },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        const D3DCOLOR ref_in = test_cases[i].in;
        const D3DVALUE ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMColorGetGreen(0x%08" SDL_PRIx32 ")", ref_in);
        D3DVALUE actual = D3DRMColorGetGreen(ref_in);
        double delta = float_delta(actual, ref_out);
        SDLTest_AssertCheck(delta < EPSILON, "Got %f, expected %f (delta=%g)", actual, ref_out, delta);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMColorGetGreen  = {
    d3drm_D3DRMColorGetGreen, "d3drm_D3DRMColorGetGreen", "Test D3DRMColorGetGreen", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMColorGetBlue(void *arg) {
    const struct {
        D3DCOLOR in;
        D3DVALUE out;
    } test_cases[] = {
        { 0x00000000, 0.f },
        { 0xff000000, 0.f },
        { 0x80000000, 0.f },
        { 0x00ff0000, 0.f },
        { 0x00800000, 0.f },
        { 0x0000ff00, 0.f },
        { 0x00008000, 0.f },
        { 0x000000ff, 1.f },
        { 0x000000fe, 254.f/255.f },
        { 0x000000fd, 253.f/255.f },
        { 0x00000080, 128.f/255.f },
        { 0x00000040, 64.f/255.f },
        { 0x00000002, 2.f/255.f },
        { 0x00000001, 1.f/255.f },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        const D3DCOLOR ref_in = test_cases[i].in;
        const D3DVALUE ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMColorGetBlue(0x%08" SDL_PRIx32 ")", ref_in);
        D3DVALUE actual = D3DRMColorGetBlue(ref_in);
        double delta = float_delta(actual, ref_out);
        SDLTest_AssertCheck(delta < EPSILON, "Got %f, expected %f (delta=%g)", actual, ref_out, delta);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMColorGetBlue  = {
    d3drm_D3DRMColorGetBlue, "d3drm_D3DRMColorGetBlue", "Test D3DRMColorGetBlue", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMColorGetAlpha(void *arg) {
    const struct {
        D3DCOLOR in;
        D3DVALUE out;
    } test_cases[] = {
        { 0x00000000, 0.f },
        { 0xff000000, 1.f },
        { 0xfe000000, 254.f/255.f },
        { 0xfd000000, 253.f/255.f },
        { 0x80000000, 128.f/255.f },
        { 0x40000000, 64.f/255.f },
        { 0x02000000, 2.f/255.f },
        { 0x01000000, 1.f/255.f },
        { 0x00ff0000, 0.f },
        { 0x00800000, 0.f },
        { 0x0000ff00, 0.f },
        { 0x00008000, 0.f },
        { 0x000000ff, 0.f },
        { 0x00000080, 0.f },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        const D3DCOLOR ref_in = test_cases[i].in;
        const D3DVALUE ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMColorGetAlpha(0x%08" SDL_PRIx32 ")", ref_in);
        D3DVALUE actual = D3DRMColorGetAlpha(ref_in);
        double delta = float_delta(actual, ref_out);
        SDLTest_AssertCheck(delta < EPSILON, "Got %f, expected %f (delta=%g)", actual, ref_out, delta);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMColorGetAlpha  = {
    d3drm_D3DRMColorGetAlpha, "d3drm_D3DRMColorGetAlpha", "Test D3DRMColorGetAlpha", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMCreateColorRGB(void *arg) {
    const struct {
        D3DVALUE r, g, b;
        D3DCOLOR out;
    } test_cases[] = {
        { 0.f/255.f,    0.f/255.f,    0.f/255.f,    0xff000000 },
        { 1.5f/255.f,   0.f/255.f,    0.f/255.f,    0xff010000 },
        { 2.5f/255.f,   0.f/255.f,    0.f/255.f,    0xff020000 },
        { 128.5f/255.f, 0.f/255.f,    0.f/255.f,    0xff800000 },
        { 253.5f/255.f, 0.f/255.f,    0.f/255.f,    0xfffd0000 },
        { 254.5f/255.f, 0.f/255.f,    0.f/255.f,    0xfffe0000 },
        { 255.f/255.f,  0.f/255.f,    0.f/255.f,    0xffff0000 },
        { 0.f/255.f,    1.5f/255.f,   0.f/255.f,    0xff000100 },
        { 0.f/255.f,    2.5f/255.f,   0.f/255.f,    0xff000200 },
        { 0.f/255.f,    128.5f/255.f, 0.f/255.f,    0xff008000 },
        { 0.f/255.f,    253.5f/255.f, 0.f/255.f,    0xff00fd00 },
        { 0.f/255.f,    254.5f/255.f, 0.f/255.f,    0xff00fe00 },
        { 0.f/255.f,    255.f/255.f,  0.f/255.f,    0xff00ff00 },
        { 0.f/255.f,    0.f/255.f,    1.5f/255.f,   0xff000001 },
        { 0.f/255.f,    0.f/255.f,    2.5f/255.f,   0xff000002 },
        { 0.f/255.f,    0.f/255.f,    128.5f/255.f, 0xff000080 },
        { 0.f/255.f,    0.f/255.f,    253.5f/255.f, 0xff0000fd },
        { 0.f/255.f,    0.f/255.f,    254.5f/255.f, 0xff0000fe },
        { 0.f/255.f,    0.f/255.f,    255.f/255.f,  0xff0000ff },
        { 0.f/255.f,    255.f/255.f,  255.f/255.f,  0xff00ffff },
        { 255.f/255.f,  255.f/255.f,  255.f/255.f,  0xffffffff },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        const D3DVALUE r = test_cases[i].r;
        const D3DVALUE g = test_cases[i].g;
        const D3DVALUE b = test_cases[i].b;
        const D3DCOLOR ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMCreateColorRGB(%f, %f, %f)", r, g, b);
        D3DCOLOR actual = D3DRMCreateColorRGB(r, g, b);
        SDLTest_AssertCheck(actual == ref_out, "Got 0x%08" SDL_PRIx32 ", expected 0x%08" SDL_PRIx32, actual, ref_out);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMCreateColorRGB  = {
    d3drm_D3DRMCreateColorRGB, "d3drm_D3DRMCreateColorRGB", "Test D3DRMCreateColorRGB", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMCreateColorRGBA(void *arg) {
    const struct {
        D3DVALUE r, g, b, a;
        D3DCOLOR out;
    } test_cases[] = {
        { 0.f/255.f,    0.f/255.f,    0.f/255.f,    0.f/255.f,    0x00000000 },
        { 1.5f/255.f,   0.f/255.f,    0.f/255.f,    0.f/255.f,    0x00010000 },
        { 2.5f/255.f,   0.f/255.f,    0.f/255.f,    0.f/255.f,    0x00020000 },
        { 128.5f/255.f, 0.f/255.f,    0.f/255.f,    0.f/255.f,    0x00800000 },
        { 253.5f/255.f, 0.f/255.f,    0.f/255.f,    0.f/255.f,    0x00fd0000 },
        { 254.5f/255.f, 0.f/255.f,    0.f/255.f,    0.f/255.f,    0x00fe0000 },
        { 255.f/255.f,  0.f/255.f,    0.f/255.f,    0.f/255.f,    0x00ff0000 },
        { 0.f/255.f,    1.5f/255.f,   0.f/255.f,    0.f/255.f,    0x00000100 },
        { 0.f/255.f,    2.5f/255.f,   0.f/255.f,    0.f/255.f,    0x00000200 },
        { 0.f/255.f,    128.5f/255.f, 0.f/255.f,    0.f/255.f,    0x00008000 },
        { 0.f/255.f,    253.5f/255.f, 0.f/255.f,    0.f/255.f,    0x0000fd00 },
        { 0.f/255.f,    254.5f/255.f, 0.f/255.f,    0.f/255.f,    0x0000fe00 },
        { 0.f/255.f,    255.f/255.f,  0.f/255.f,    0.f/255.f,    0x0000ff00 },
        { 0.f/255.f,    0.f/255.f,    1.5f/255.f,   0.f/255.f,    0x00000001 },
        { 0.f/255.f,    0.f/255.f,    2.5f/255.f,   0.f/255.f,    0x00000002 },
        { 0.f/255.f,    0.f/255.f,    128.5f/255.f, 0.f/255.f,    0x00000080 },
        { 0.f/255.f,    0.f/255.f,    253.5f/255.f, 0.f/255.f,    0x000000fd },
        { 0.f/255.f,    0.f/255.f,    254.5f/255.f, 0.f/255.f,    0x000000fe },
        { 0.f/255.f,    0.f/255.f,    255.f/255.f,  0.f/255.f,    0x000000ff },
        { 0.f/255.f,    0.f/255.f,    0.f/255.f,    1.5f/255.f,   0x01000000 },
        { 0.f/255.f,    0.f/255.f,    0.f/255.f,    2.5f/255.f,   0x02000000 },
        { 0.f/255.f,    0.f/255.f,    0.f/255.f,    128.5f/255.f, 0x80000000 },
        { 0.f/255.f,    0.f/255.f,    0.f/255.f,    253.5f/255.f, 0xfd000000 },
        { 0.f/255.f,    0.f/255.f,    0.f/255.f,    254.5f/255.f, 0xfe000000 },
        { 0.f/255.f,    0.f/255.f,    0.f/255.f,    255.f/255.f,  0xff000000 },
        { 0.f/255.f,    255.f/255.f,  255.f/255.f,  0.f/255.f,    0x0000ffff },
        { 255.f/255.f,  255.f/255.f,  255.f/255.f,  128.5f/255.f, 0x80ffffff },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        const D3DVALUE r = test_cases[i].r;
        const D3DVALUE g = test_cases[i].g;
        const D3DVALUE b = test_cases[i].b;
        const D3DVALUE a = test_cases[i].a;
        const D3DCOLOR ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMCreateColorRGBA(%f, %f, %f, %f)", r, g, b, a);
        D3DCOLOR actual = D3DRMCreateColorRGBA(r, g, b, a);
        SDLTest_AssertCheck(actual == ref_out, "Got 0x%08" SDL_PRIx32 ", expected 0x%08" SDL_PRIx32, actual, ref_out);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMCreateColorRGBA  = {
    d3drm_D3DRMCreateColorRGBA, "d3drm_D3DRMCreateColorRGBA", "Test D3DRMCreateColorRGBA", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMVectorAdd(void *arg) {
    const struct {
        D3DVECTOR x, y;
        D3DVECTOR out;
    } test_cases[] = {
        { {{0.f},   {0.f},    {0.f}},   {{0.f},     {0.f},  {0.f}},     {{0.f},     {0.f},      {0.f}} },
        { {{1.f},   {0.f},    {0.f}},   {{0.f},     {0.f},  {0.f}},     {{1.f},     {0.f},      {0.f}} },
        { {{1.f},   {0.f},    {0.f}},   {{1.f},     {0.f},  {0.f}},     {{2.f},     {0.f},      {0.f}} },
        { {{1.f},   {-10.f},  {0.f}},   {{1.f},     {0.f},  {10.f}},    {{2.f},     {-10.f},    {10.f}} },
        { {{1234.f},{-10.f},  {97.f}},  {{-40.f},   {0.f},  {80.f}},    {{1194.f},  {-10.f},    {177.f}} },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        const D3DVECTOR x = test_cases[i].x;
        const D3DVECTOR y = test_cases[i].y;
        const D3DVECTOR ref_out = test_cases[i].out;
        D3DVECTOR out;
        D3DVECTOR *rc;
        SDLTest_AssertPass("D3DRMVectorAdd({%f, %f, %f}, {%f, %f, %f})", x.x, x.y, x.z, y.x, y.y, y.z);
        rc = D3DRMVectorAdd(&out, &x, &y);
        SDLTest_AssertCheck(rc == &out, "D3DRMVectorAdd returns correct pointer: got %p, expected %p", rc, &out);
        double delta1 = float_delta(out.x, ref_out.x);
        double delta2 = float_delta(out.y, ref_out.y);
        double delta3 = float_delta(out.z, ref_out.z);
        SDLTest_AssertCheck(delta1 < EPSILON && delta2 < EPSILON && delta3 < EPSILON,
            "Got {%f, %f, %f}, expected {%f, %f, %f} (delta={%g, %g, %g}", out.x, out.y, out.z, ref_out.x, ref_out.y, ref_out.z, delta1, delta2, delta3);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMVectorAdd  = {
    d3drm_D3DRMVectorAdd, "d3drm_D3DRMVectorAdd", "Test D3DRMVectorAdd", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMVectorSubtract(void *arg) {
    const struct {
        D3DVECTOR x, y;
        D3DVECTOR out;
    } test_cases[] = {
        { {{0.f},   {0.f},    {0.f}},   {{0.f},     {0.f},  {0.f}},     {{0.f},     {0.f},      {0.f}} },
        { {{1.f},   {0.f},    {0.f}},   {{0.f},     {0.f},  {0.f}},     {{1.f},     {0.f},      {0.f}} },
        { {{1.f},   {0.f},    {0.f}},   {{1.f},     {0.f},  {0.f}},     {{0.f},     {0.f},      {0.f}} },
        { {{1.f},   {-10.f},  {0.f}},   {{1.f},     {0.f},  {10.f}},    {{0.f},     {-10.f},    {-10.f}} },
        { {{1234.f},{-10.f},  {97.f}},  {{-40.f},   {0.f},  {80.f}},    {{1274.f},  {-10.f},    {17.f}} },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        const D3DVECTOR x = test_cases[i].x;
        const D3DVECTOR y = test_cases[i].y;
        const D3DVECTOR ref_out = test_cases[i].out;
        D3DVECTOR out;
        D3DVECTOR *rc;
        SDLTest_AssertPass("D3DRMVectorSubtract({%f, %f, %f}, {%f, %f, %f})", x.x, x.y, x.z, y.x, y.y, y.z);
        rc = D3DRMVectorSubtract(&out, &x, &y);
        SDLTest_AssertCheck(rc == &out, "D3DRMVectorSubtract returns correct pointer: got %p, expected %p", rc, &out);
        double delta1 = float_delta(out.x, ref_out.x);
        double delta2 = float_delta(out.y, ref_out.y);
        double delta3 = float_delta(out.z, ref_out.z);
        SDLTest_AssertCheck(delta1 < EPSILON && delta2 < EPSILON && delta3 < EPSILON,
            "Got {%f, %f, %f}, expected {%f, %f, %f} (delta={%g, %g, %g})", out.x, out.y, out.z, ref_out.x, ref_out.y, ref_out.z, delta1, delta2, delta3);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMVectorSubtract  = {
    d3drm_D3DRMVectorSubtract, "d3drm_D3DRMVectorSubtract", "Test D3DRMVectorSubtract", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMVectorModulus(void *arg) {
    const struct {
        D3DVECTOR in;
        D3DVALUE out;
    } test_cases[] = {
        { {{0.f},   {0.f},    {0.f}},   0.f },
        { {{3.f},   {4.f},    {0.f}},   5.f },
        { {{0.f},   {3.f},    {4.f}},   5.f },
        { {{3.f},   {0.f},    {4.f}},   5.f },
        { {{3.f},   {4.f},    {12.f}},  13.f },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        const D3DVECTOR in = test_cases[i].in;
        const D3DVALUE ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMVectorModulus({%f, %f, %f})", in.x, in.y, in.z);
        D3DVALUE out = D3DRMVectorModulus(&in);
        double delta = float_delta(ref_out, out);
        SDLTest_AssertCheck(delta < EPSILON, "Got %f, expected %f (delta=%g)", out, ref_out, delta);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMVectorModulus  = {
    d3drm_D3DRMVectorModulus, "d3drm_D3DRMVectorModulus", "Test D3DRMVectorModulus", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMVectorRandom(void *arg) {
    (void) arg;
    for (unsigned i = 0; i < 50; i++) {
        D3DVECTOR v;
        SDLTest_AssertPass("D3DRMVectorRandom(%p)", &v);
        D3DVECTOR *rc = D3DRMVectorRandom(&v);
        SDLTest_AssertCheck(rc == &v, "D3DRMVectorRandom returns correct pointer: got %p, expected %p", rc, &v);
        float m = SDL_sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
        double delta = float_delta(m, 1.f);
        SDLTest_AssertCheck(delta <= EPSILON, "{%f, %f, %f}: Length = %f, expected = 1.00 (delta = %g)", v.x, v.y, v.z, m, delta);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMVectorRandom  = {
    d3drm_D3DRMVectorRandom, "d3drm_D3DRMVectorRandom", "Test D3DRMVectorRandom", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMVectorNormalize(void *arg) {
    const struct {
        D3DVECTOR in;
        D3DVECTOR out;
    } test_cases[] = {
            { {{0.f},   {0.f},    {0.f}},   {{1.f},   {0.f},    {0.f}},  },
            { {{1.f},   {0.f},    {0.f}},   {{1.f},   {0.f},    {0.f}},  },
            { {{0.f},   {1.7f},   {0.f}},   {{0.f},   {1.f},    {0.f}},  },
            { {{0.f},   {0.f},    {0.9f}},  {{0.f},   {0.f},    {1.f}},  },
            { {{3.f},   {4.f},    {0.f}},   {{.6f},   {.8f},    {0.f}},  },
            { {{0.f},   {3.f},    {4.f}},   {{0.f},   {.6f},    {.8f}},  },
            { {{3.f},   {0.f},    {4.f}},   {{.6f},   {0.f},    {.8f}},  },
            { {{3.f},   {4.f},    {12.f}},  {{3.f/13.f},  {4.f/13.f},    {12.f/13.f}}, },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        D3DVECTOR in = test_cases[i].in;
        const D3DVECTOR ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMVectorNormalize({%f, %f, %f})", in.x, in.y, in.z);
        D3DVECTOR *rc = D3DRMVectorNormalize(&in);
        SDLTest_AssertCheck(rc == &in, "D3DRMVectorRandom returns correct pointer: got %p, expected %p", rc, &in);
        double delta1 = float_delta(in.x, ref_out.x);
        double delta2 = float_delta(in.y, ref_out.y);
        double delta3 = float_delta(in.z, ref_out.z);
        SDLTest_AssertCheck(delta1 < EPSILON && delta2 < EPSILON && delta3 < EPSILON, "Got {%f, %f, %f}, expected {%f, %f, %f} (delta={%g, %g, %g})", in.x, in.y, in.z, ref_out.x, ref_out.y, ref_out.z, delta1, delta2, delta3);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMVectorNormalize  = {
    d3drm_D3DRMVectorNormalize, "d3drm_D3DRMVectorNormalize", "Test D3DRMVectorNormalize", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMVectorScale(void *arg) {
    const struct {
        D3DVECTOR v_in;
        D3DVALUE scale_in;
        D3DVECTOR out;
    } test_cases[] = {
            { {{0.f},   {0.f},    {0.f}},   2.f, {{0.f},   {0.f},    {0.f}},  },
            { {{1.f},   {0.f},    {0.f}},   7.f, {{7.f},   {0.f},    {0.f}},  },
            { {{0.f},   {1.7f},   {0.f}},   3.f, {{0.f},   {5.1},    {0.f}},  },
            { {{0.f},   {0.f},    {0.9f}},  4.f, {{0.f},   {0.f},    {3.6f}}, },
            { {{3.f},   {4.f},    {0.f}},   .2f, {{.6f},   {.8f},    {0.f}},  },
            { {{0.f},   {3.f},    {4.f}},   3.f, {{0.f},   {9.f},    {12.f}}, },
            { {{3.f},   {0.f},    {4.f}},   .2f, {{.6f},   {0.f},    {.8f}},  },
            { {{3.f},   {4.f},    {12.f}},  3.f, {{9.f},   {12.f},   {36.f}}, },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        const D3DVECTOR v_in = test_cases[i].v_in;
        const D3DVALUE scale_in = test_cases[i].scale_in;
        const D3DVECTOR ref_out = test_cases[i].out;
        D3DVECTOR out;
        SDLTest_AssertPass("D3DRMVectorScale({%f, %f, %f}, %f)", v_in.x, v_in.y, v_in.z, scale_in);
        D3DVECTOR *rc = D3DRMVectorScale(&out, &v_in, scale_in);
        SDLTest_AssertCheck(rc == &out, "D3DRMVectorRandom returns correct pointer: got %p, expected %p", rc, &out);
        double delta1 = float_delta(out.x, ref_out.x);
        double delta2 = float_delta(out.y, ref_out.y);
        double delta3 = float_delta(out.z, ref_out.z);
        SDLTest_AssertCheck(delta1 < EPSILON && delta2 < EPSILON && delta3 < EPSILON, "Got {%f, %f, %f}, expected {%f, %f, %f} (delta={%g, %g, %g})", out.x, out.y, out.z, ref_out.x, ref_out.y, ref_out.z, delta1, delta2, delta3);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMVectorScale  = {
    d3drm_D3DRMVectorScale, "d3drm_D3DRMVectorScale", "Test D3DRMVectorScale", TEST_ENABLED
};

static int SDLCALL d3drm_D3DRMVectorDotProduct(void *arg) {
    const struct {
        D3DVECTOR v_in1;
        D3DVECTOR v_in2;
        D3DVALUE out;
    } test_cases[] = {
            { {{0.f},   {0.f},    {0.f}},   {{0.f},   {0.f},    {0.f}},  0.f },
            { {{1.f},   {0.f},    {0.f}},   {{7.f},   {0.f},    {0.f}},  7.f },
            { {{0.f},   {1.7f},   {0.f}},   {{0.f},   {5.1},    {0.f}},  8.67f },
            { {{0.f},   {0.f},    {0.9f}},  {{0.f},   {0.f},    {3.6f}}, 3.24f },
            { {{3.f},   {4.f},    {0.f}},   {{.6f},   {.8f},    {0.f}},  5.f },
            { {{0.f},   {3.f},    {4.f}},   {{0.f},   {9.f},    {12.f}}, 75.f },
            { {{3.f},   {0.f},    {4.f}},   {{.6f},   {0.f},    {.8f}},  5.f },
            { {{3.f},   {4.f},    {12.f}},  {{9.f},   {12.f},   {36.f}}, 507.f },
    };
    (void) arg;
    for (unsigned i = 0; i < SDL_arraysize(test_cases); i++) {
        const D3DVECTOR v_in1 = test_cases[i].v_in1;
        const D3DVECTOR v_in2 = test_cases[i].v_in2;
        const D3DVALUE ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMVectorDotProduct({%f, %f, %f}, {%f, %f, %f})", v_in1.x, v_in1.y, v_in1.z, v_in2.x, v_in2.y, v_in2.z);
        D3DVALUE out = D3DRMVectorDotProduct(&v_in1, &v_in2);
        double delta = float_delta(out, ref_out);
        SDLTest_AssertCheck(delta < EPSILON, "Got %f, expected %f (delta=%g)", out, ref_out, delta);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMVectorDotProduct  = {
    d3drm_D3DRMVectorDotProduct, "d3drm_D3DRMVectorDotProduct", "Test D3DRMVectorDotProduct", TEST_ENABLED
};

static const SDLTest_TestCaseReference *d3drmTests[] = {
    &d3drmD3DRMColorGetRed,
    &d3drmD3DRMColorGetGreen,
    &d3drmD3DRMColorGetBlue,
    &d3drmD3DRMColorGetAlpha,
    &d3drmD3DRMCreateColorRGB,
    &d3drmD3DRMCreateColorRGBA,
    &d3drmD3DRMVectorAdd,
    &d3drmD3DRMVectorSubtract,
    &d3drmD3DRMVectorModulus,
    &d3drmD3DRMVectorRandom,
    &d3drmD3DRMVectorNormalize,
    &d3drmD3DRMVectorScale,
    &d3drmD3DRMVectorDotProduct,
    NULL
};

static SDLTest_TestSuiteReference d3drmTestSuite = {
    "d3drm",
    NULL,
    d3drmTests,
    NULL
};

static SDLTest_TestSuiteReference *testSuites[] = {
    &d3drmTestSuite,
    NULL
};

static const char *options[] = {
    NULL
};

int main(int argc, char *argv[])
{
    int i;
    int result;
    SDLTest_CommonState *state;
    SDLTest_TestSuiteRunner *runner;

    /* Initialize test framework */
    state = SDLTest_CommonCreateState(argv, 0);
    if (!state) {
        return 1;
    }

    runner = SDLTest_CreateTestSuiteRunner(state, testSuites);

    /* Parse commandline */
    for (i = 1; i < argc;) {
        int consumed;

        consumed = SDLTest_CommonArg(state, i);
        if (!consumed) {
            /* Parse extra arguments here */
        }
        if (consumed <= 0) {
            SDLTest_CommonLogUsage(state, argv[0], options);
            return 1;
        }

        i += consumed;
    }

    result = SDLTest_ExecuteTestSuiteRunner(runner);

    SDL_Quit();
    SDLTest_DestroyTestSuiteRunner(runner);
    SDLTest_CommonDestroyState(state);
    return result;
}
