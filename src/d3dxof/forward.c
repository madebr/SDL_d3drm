#define ENV_VARIABLE "D3DXOF_PATH"
#define WIN_DLL "SDL3_d3dxof.dll"
#define APPLE_DYLIB "libSDL3_d3dxof.dylib"
#define UNIX_SO "libSDL3_d3dxof.so"

#ifdef _WIN32
#include <windows.h>
#define DECLSPEC __stdcall
#else
#define DECLSPEC
typedef unsigned int HRESULT;
#endif

typedef struct IDirectXFile *LPDIRECTXFILE;

#define FOREACH_EXPORTED_FUNCTION(X) \
    X(DirectXFileCreate,HRESULT,(LPDIRECTXFILE *a),(a),return)

#include "common/common_forward.h"
