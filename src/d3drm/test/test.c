#include <SDL_d3drm.h>
#include <SDL3/SDL.h>
#include <SDL3/SDL_test.h>

#define EPSILON 2e-5f

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
        D3DCOLOR ref_in = test_cases[i].in;
        D3DVALUE ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMColorGetRed(0x%08" SDL_PRIx32 ")", ref_in);
        D3DVALUE actual = D3DRMColorGetRed(ref_in);
        double delta = SDL_fabs(actual - ref_out);
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
        D3DCOLOR ref_in = test_cases[i].in;
        D3DVALUE ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMColorGetGreen(0x%08" SDL_PRIx32 ")", ref_in);
        D3DVALUE actual = D3DRMColorGetGreen(ref_in);
        double delta = SDL_fabs(actual - ref_out);
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
        D3DCOLOR ref_in = test_cases[i].in;
        D3DVALUE ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMColorGetBlue(0x%08" SDL_PRIx32 ")", ref_in);
        D3DVALUE actual = D3DRMColorGetBlue(ref_in);
        double delta = SDL_fabs(actual - ref_out);
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
        D3DCOLOR ref_in = test_cases[i].in;
        D3DVALUE ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMColorGetAlpha(0x%08" SDL_PRIx32 ")", ref_in);
        D3DVALUE actual = D3DRMColorGetAlpha(ref_in);
        double delta = SDL_fabs(actual - ref_out);
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
        D3DVALUE r = test_cases[i].r;
        D3DVALUE g = test_cases[i].g;
        D3DVALUE b = test_cases[i].b;
        D3DCOLOR ref_out = test_cases[i].out;
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
        D3DVALUE r = test_cases[i].r;
        D3DVALUE g = test_cases[i].g;
        D3DVALUE b = test_cases[i].b;
        D3DVALUE a = test_cases[i].a;
        D3DCOLOR ref_out = test_cases[i].out;
        SDLTest_AssertPass("D3DRMCreateColorRGBA(%f, %f, %f, %f)", r, g, b, a);
        D3DCOLOR actual = D3DRMCreateColorRGBA(r, g, b, a);
        SDLTest_AssertCheck(actual == ref_out, "Got 0x%08" SDL_PRIx32 ", expected 0x%08" SDL_PRIx32, actual, ref_out);
    }
    return TEST_COMPLETED;
}

static const SDLTest_TestCaseReference d3drmD3DRMCreateColorRGBA  = {
    d3drm_D3DRMCreateColorRGBA, "d3drm_D3DRMCreateColorRGBA", "Test D3DRMCreateColorRGBA", TEST_ENABLED
};

static const SDLTest_TestCaseReference *d3drmTests[] = {
    &d3drmD3DRMColorGetRed,
    &d3drmD3DRMColorGetGreen,
    &d3drmD3DRMColorGetBlue,
    &d3drmD3DRMColorGetAlpha,
    &d3drmD3DRMCreateColorRGB,
    &d3drmD3DRMCreateColorRGBA,
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
