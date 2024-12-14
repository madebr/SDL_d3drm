//-----------------------------------------------------------------------------
// File: RMBegin1.cpp
//
// Desc: This minimal file creates a default device, loads a mesh from a
//       DirectX file, builds a scene, and rotates the mesh object. It also
//       contains standard code which allows the sample to run in the
//       Windows environment.
//
// Copyright (C) 1998-1999 Microsoft Corporation. All Rights Reserved.
//-----------------------------------------------------------------------------

#define SDL_INITGUID        // Required for Direct3D applications
#include <windows.h>        // Standard Windows header file
#include <SDL_ddraw.h>      // DirectDraw definitions
#include <SDL_d3drmwin.h>   // D3DRM definitions

// Macro to release an object.
#define RELEASE(x) if (x != NULL) {IUnknown_Release(x); x = NULL;}
// Macro to display a message box containing the given string.
#define DISPLAYMSG(x) MessageBox(NULL, x, "D3DRM Sample", MB_OK);


// Global Variables
static LPDIRECT3DRM3 lpD3DRM = NULL;           // Direct3DRM object
static LPDIRECTDRAWCLIPPER lpDDClipper = NULL; // DirectDrawClipper object

// Global Structure
static struct {
    // Direct3DRM device.
    LPDIRECT3DRMDEVICE3 dev;

    // Direct3DRM viewport through which to view the scene.
    LPDIRECT3DRMVIEWPORT2 view;

    // Master frame in which other frames are placed.
    LPDIRECT3DRMFRAME3 scene;

    // Frame describing the users point of view.
    LPDIRECT3DRMFRAME3 camera;

    // Application is minimized.
    BOOL bMinimized;

    // All D3DRM objects have been initialized.
    BOOL bInitialized;

} myglobs;

// Prototypes
static BOOL      BuildScene(LPDIRECT3DRM3, LPDIRECT3DRMDEVICE3, LPDIRECT3DRMFRAME3, LPDIRECT3DRMFRAME3);
static BOOL      RenderScene(void);
static BOOL      CreateObjects(HWND win);

static HWND      InitApp(HINSTANCE, int);
int APIENTRY     WinMain(HINSTANCE, HINSTANCE, LPSTR, int);
static LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);

//-----------------------------------------------------------------------------
// Name: BuildScene()
// Desc: Create the scene to be rendered.
//-----------------------------------------------------------------------------
BOOL BuildScene(LPDIRECT3DRM3 lpD3DRM, LPDIRECT3DRMDEVICE3 dev, LPDIRECT3DRMFRAME3 scene, LPDIRECT3DRMFRAME3 camera) {
    LPDIRECT3DRMFRAME3 lights = NULL;
    LPDIRECT3DRMMESHBUILDER3 meshbuilder = NULL;
    LPDIRECT3DRMFRAME3 childframe = NULL;
    LPDIRECT3DRMLIGHT light1 = NULL;
    LPDIRECT3DRMLIGHT light2 = NULL;
    LPDIRECT3DRMMATERIAL2 mat = NULL;
    HRESULT rval;

    (void) dev;

    // Load a mesh from a DirectX file.
    if (FAILED(IDirect3DRM3_CreateMeshBuilder(lpD3DRM, &meshbuilder))) {
        goto generic_error;
    }

    rval = IDirect3DRMMeshBuilder3_Load(meshbuilder, (void *)"teapot.x", NULL, D3DRMLOAD_FROMFILE, NULL, NULL);
    if (FAILED(rval)) {
        DISPLAYMSG("Failed to load .x file.");
        goto ret_with_error;
    }

    // Create a child frame within the scene.
    if (FAILED(IDirect3DRM3_CreateFrame(lpD3DRM, scene, &childframe))) {
        goto generic_error;
    }

    // Add the loaded mesh into the child frame.
    if (FAILED(IDirect3DRMFrame3_AddVisual(childframe, (LPDIRECT3DRMVISUAL)meshbuilder))) {
        goto generic_error;
    }

    // Set up the camera frame's position. Objects with the same x-value and
    // y-value as the camera will appear straight ahead.
    // Negative z-values are farther away, making the object look
    // smaller as the negative numbers increase.
    rval = IDirect3DRMFrame3_SetPosition(camera, scene, D3DVAL(0), D3DVAL(0), -D3DVAL(7));
    if (FAILED(rval)) {
        DISPLAYMSG("Failed to position the camera in the frame.");
        goto ret_with_error;
    }

    // Rotate the child mesh around the y-axis (zero x-value and z-value)
    // and use a small rotational angle to rotate slowly.
    if (FAILED(IDirect3DRMFrame3_SetRotation(childframe, scene,
                                       D3DVAL(0), D3DVAL(1), D3DVAL(0),
                                       D3DVAL(0.03)))) // angle
        goto generic_error;

    // Initialize the lights in the scene, creating a light frame that
    // is a child of the scene.
    if (FAILED(IDirect3DRM3_CreateFrame(lpD3DRM, scene, &lights))) {
        goto generic_error;
    }

    // Position the light frame within the scene. This light comes from
    // the right of the camera. It has a different x-value, but the same
    // y-value and z-value as the camera position.
    if (FAILED(IDirect3DRMFrame3_SetPosition(lights, scene,
                                   D3DVAL(5), D3DVAL(0), -D3DVAL(7))))
        goto generic_error;

    // Create a bright, parallel point light and add it to the light frame.
    // Color values must be in the range 0.0 (dim) to 1.0 (bright).
    if (FAILED(IDirect3DRM3_CreateLightRGB(lpD3DRM, D3DRMLIGHT_PARALLELPOINT,
                                       D3DVAL(1.0), D3DVAL(0.8),
                                       D3DVAL(0.9), &light1)))
        goto generic_error;

    if (FAILED(IDirect3DRMFrame3_AddLight(lights, light1))) {
        goto generic_error;
    }

    // Create a dim, ambient light and add it to the scene frame,
    // applying it to the whole scene. Ambient light comes from all
    // directions, so a bright ambient light would wash out the object.
    if (FAILED(IDirect3DRM3_CreateLightRGB(lpD3DRM, D3DRMLIGHT_AMBIENT,
                                       D3DVAL(0.1), D3DVAL(0.1),
                                       D3DVAL(0.1), &light2)))
        goto generic_error;

    if (FAILED(IDirect3DRMFrame3_AddLight(scene, light2))) {
        goto generic_error;
    }

    // Create a material, setting the reflectiveness (5.0 is metallic,
    // higher is more plastic) on the previously loaded mesh.
    if (FAILED(IDirect3DRM3_CreateMaterial(lpD3DRM, D3DVAL(10.0), &mat))) {
        goto generic_error;
    }

    if (FAILED(IDirect3DRMMeshBuilder3_SetMaterial(meshbuilder, mat))) {
        goto generic_error;
    }

    // Set the mesh color (bright green in this case).
    if (FAILED(IDirect3DRMMeshBuilder3_SetColorRGB(meshbuilder, /*red*/ D3DVAL(0.0), /*green*/ D3DVAL(0.7), /*blue*/ D3DVAL(0.0)))) {
        goto generic_error;
    }

    // Clean up.
    RELEASE(childframe);
    RELEASE(lights);
    RELEASE(meshbuilder);
    RELEASE(light1);
    RELEASE(light2);
    RELEASE(mat);
    return TRUE;

generic_error:
    DISPLAYMSG("A failure occured while building the scene.");
ret_with_error:
    RELEASE(childframe);
    RELEASE(lights);
    RELEASE(meshbuilder);
    RELEASE(light1);
    RELEASE(light2);
    RELEASE(mat);
    return FALSE;
}

//-----------------------------------------------------------------------------
// Name: RenderScene()
// Desc: Clear the viewport, render the next frame, and update the window.
//-----------------------------------------------------------------------------
static BOOL RenderScene(void) {
    HRESULT rval;

    // Move the scene.
    rval = IDirect3DRMFrame3_Move(myglobs.scene, D3DVAL(1.0));
    if (FAILED(rval)) {
        DISPLAYMSG("Moving scene failed.");
        return FALSE;
    }

    // Clear the viewport.
    rval = IDirect3DRMViewport2_Clear(myglobs.view, D3DRMCLEAR_ALL);
    if (FAILED(rval)) {
        DISPLAYMSG("Clearing viewport failed.");
        return FALSE;
    }

    // Render the scene to the viewport.
    rval = IDirect3DRMViewport2_Render(myglobs.view, myglobs.scene);
    if (FAILED(rval)) {
        DISPLAYMSG("Rendering scene failed.");
        return FALSE;
    }

    // Update the window.
    rval = IDirect3DRMDevice3_Update(myglobs.dev);
    if (SDL_FAILED(rval)) {
        DISPLAYMSG("Updating device failed.");
        return FALSE;
    }
    return TRUE;
}

//-----------------------------------------------------------------------------
// Name: AddMediaPath()
// Desc: Looks in the system registry to determine the media path for the
//       sample. Then, it adds that path to the string passed in, checks if the
//       file exists, and returns a path to the file.
//-----------------------------------------------------------------------------
VOID AddMediaPath(LPDIRECT3DRM3 pD3DRM) {
	HKEY   key;
	LONG   result;
	TCHAR  strPath[512];
	DWORD  type, size = 512;

	// Open the registry
	result = RegOpenKeyEx(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\DirectX", 0, KEY_READ, &key);
	if (ERROR_SUCCESS != result) {
        return;
    }

	// Search for the desired registry value, and close the registry
    result = RegQueryValueEx(key, "DXSDK Samples Path", NULL, &type, (BYTE*)strPath, &size);
	RegCloseKey(key);

	if (ERROR_SUCCESS != result) {
        return;
    }

	strcat(strPath, "\\D3DRM\\Media");

	IDirect3DRM3_AddSearchPath(pD3DRM, strPath);

	return;
}

//-----------------------------------------------------------------------------
// Name: CreateObjects()
// Desc: Initialize globals, create the device and objects.
//-----------------------------------------------------------------------------
BOOL CreateObjects(HWND win) {
    HRESULT rval; // Return value
    SDL_RECT rc;      // Bounding rectangle for main window
    int width;    // Device's width
    int height;   // Device's height


    // Initialize the entire global variable structure to zero.
    memset(&myglobs, 0, sizeof(myglobs));

    // Create a DirectDrawClipper object and associate the window with it.
    rval = DirectDrawCreateClipper(0, &lpDDClipper, NULL);
    if (FAILED(rval)) {
        DISPLAYMSG("Failed to create DirectDrawClipper object.");
        return FALSE;
    }

    rval = IDirectDrawClipper_SetHWnd(lpDDClipper, 0, win);
    if (FAILED(rval)) {
        DISPLAYMSG("Failed to set the window handle for the DirectDrawClipper.");
        return FALSE;
    }

    // Create the Direct3DRM object.
    LPDIRECT3DRM pD3DRMTemp;
    rval = Direct3DRMCreate(&pD3DRMTemp);
    if (FAILED(rval)) {
        DISPLAYMSG("Failed to create Direct3DRM.");
        return FALSE;
    }
    if(FAILED(IDirect3DRM_QueryInterface(pD3DRMTemp, &SDL_IID_IDirect3DRM3, (void **)&lpD3DRM))) {
        RELEASE(pD3DRMTemp);
        DISPLAYMSG("Failed query for Direct3DRM3.\n");
        return FALSE;
    }
    RELEASE(pD3DRMTemp);


    // Create a default Direct3DRM device.
    GetClientRect(win, (LPRECT)&rc);

    rval = IDirect3DRM3_CreateDeviceFromClipper(lpD3DRM, lpDDClipper,
                           NULL, // Default device
                           rc.right, rc.bottom, &myglobs.dev);
    if (FAILED(rval)) {
        DISPLAYMSG("Failed to create the D3DRM device.");
        return FALSE;
    }

    // Create the master scene frame and the camera frame.
    rval = IDirect3DRM3_CreateFrame(lpD3DRM, NULL, &myglobs.scene);
    if (FAILED(rval)) {
        DISPLAYMSG("Failed to create the master scene frame.");
        return FALSE;
    }

    rval = IDirect3DRM3_CreateFrame(lpD3DRM, myglobs.scene, &myglobs.camera);
    if (FAILED(rval)) {
        DISPLAYMSG("Failed to create the camera's frame.");
        return FALSE;
    }

    // Create the Direct3DRM viewport using the device, camera frame,
    // and the device's width and height.
    width = IDirect3DRMDevice3_GetWidth(myglobs.dev);
    height = IDirect3DRMDevice3_GetHeight(myglobs.dev);

    rval = IDirect3DRM3_CreateViewport(lpD3DRM, myglobs.dev, myglobs.camera, 0, 0,
                                   width, height, &myglobs.view);
    if (FAILED(rval)) {
        myglobs.bInitialized = FALSE;
        RELEASE(myglobs.dev);
        return FALSE;
    }

	// Add the media path so our textures and .x files can be found
	AddMediaPath(lpD3DRM);

    // Create the scene to be rendered.
    if (!BuildScene(lpD3DRM, myglobs.dev, myglobs.scene, myglobs.camera)) {
        return FALSE;
    }

    // Globals are initialized.
    myglobs.bInitialized = TRUE;

    return TRUE;
}

//-----------------------------------------------------------------------------
// Name: InitApp()
// Desc: Create the main window and initialize objects.
//-----------------------------------------------------------------------------
static HWND InitApp(HINSTANCE hInstance, int cmdshow) {
    HWND win;     // Main window handle
    WNDCLASS wc;  // Window class

    // Set up and register the window class.
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = WindowProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = sizeof(DWORD);
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon(hInstance, "AppIcon");
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = "D3DRM Example";
    if (!RegisterClass(&wc)) {
        return FALSE;
    }

    // Create the window.
    win = CreateWindow(
            "D3DRM Example",                   // class
            "RMBegin1: Direct3DRM Sample One", // caption
            WS_OVERLAPPEDWINDOW,               // style
            CW_USEDEFAULT,                     // init. x pos
            CW_USEDEFAULT,                     // init. y pos
            350,                               // init. x size
            300,                               // init. y size
            NULL,                              // parent window
            NULL,                              // menu handle
            hInstance,                         // program handle
            NULL);                             // create parms

    if (!win) {
        return FALSE;
    }

    // Initialize global variables and create the Direct3D Retained
    // Mode objects.
    if (!CreateObjects(win)) {
        return FALSE;
    }

    // Display the window.
    ShowWindow(win, cmdshow);
    UpdateWindow(win);

    return win;
}

//-----------------------------------------------------------------------------
// Name: WinMain()
// Desc: Initialize the application, process messages, and render the scene.
//-----------------------------------------------------------------------------
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    HWND    hwnd;
    MSG     msg;

    (void) hPrevInstance;
    (void) lpCmdLine;

    // Create the window and initialize objects.
    if (!(hwnd = InitApp(hInstance, nShowCmd))) {
        return 1;
    }

    while (TRUE) {
        // Monitor the message queue and process messages. PeekMessage
        // returns control to the application immediately so the
        // application can both process messages and continue rendering.
        // If the message is WM_QUIT, break out of this function
        // because the application is terminating.
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) {
                break;
            }
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        // If the application is not minimized and the Direct3D Retained
        // Mode objects are initialized, render.
        if (!myglobs.bMinimized && myglobs.bInitialized) {
            // Render one frame of the scene. If rendering fails, post
            // the WM_DESTROY message, enabling the application to
            // free resources before terminating the application.
            if (!RenderScene()) {
                DISPLAYMSG("Rendering failed. Aborting execution.");
                PostMessage(NULL, WM_DESTROY, 0, 0);
                break;
            }

        // Yield to other applications if this application is
        // not currently rendering.
        } else {
            WaitMessage();
        }

    }
    return msg.wParam;
}

//-----------------------------------------------------------------------------
// Name: WindowProc()
// Desc: Handle messages for the main window.
//-----------------------------------------------------------------------------
LRESULT CALLBACK WindowProc(HWND win, UINT msg, WPARAM wparam, LPARAM lparam) {
    switch (msg) {
    case WM_SIZE:
        // Handle minimizing of the window. If the application was
        // minimized, set a flag so rendering will stop while
        // minimized. Otherwise, continue rendering.
        if (SIZE_MINIMIZED == wparam) {
            myglobs.bMinimized = TRUE;
        } else {
            myglobs.bMinimized = FALSE;
        }
        break;
    case WM_DESTROY:
        // Clear the bInitialized flag, free objects, and post the
        // WM_QUIT message to terminate the application. Be sure to
        // free the viewport before freeing the device or a general
        // protection fault might occur.
        myglobs.bInitialized = FALSE;
        RELEASE(myglobs.view);
        RELEASE(myglobs.dev);
        RELEASE(myglobs.camera);
        RELEASE(myglobs.scene);
        RELEASE(lpD3DRM);
        RELEASE(lpDDClipper);
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(win, msg, wparam, lparam);
    }
    return 0L;
}




