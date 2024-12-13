#include <SDL_d3drm.h>
#include <SDL3/SDL.h>
#include <SDL3/SDL_test.h>

#define EPSILON 2e-5f

int SDLCALL d3drm_D3DRMColorGetRed(void *arg) {
    struct {
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

int SDLCALL d3drm_D3DRMColorGetGreen(void *arg) {
    struct {
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

int SDLCALL d3drm_D3DRMColorGetBlue(void *arg) {
    struct {
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

int SDLCALL d3drm_D3DRMColorGetAlpha(void *arg) {
    struct {
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

static const SDLTest_TestCaseReference *d3drmTests[] = {
        &d3drmD3DRMColorGetRed,
        &d3drmD3DRMColorGetGreen,
        &d3drmD3DRMColorGetBlue,
        &d3drmD3DRMColorGetAlpha,
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
