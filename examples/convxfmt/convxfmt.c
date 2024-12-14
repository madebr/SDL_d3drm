#define SDL_INITGUID

#include <SDL_dxfile.h>
#include <SDL_winglue.h>
#include <SDL_rmxftmpl.h>

#include <SDL3/SDL.h>

typedef struct {
    SDL_WORD major;
    SDL_WORD minor;
    SDL_DWORD flags;
} Header;

static void print_usage(const char *arg0) {
    SDL_Log("Usage:  %s [-t|-b|-c] [-o OUTPUT] INPUT", arg0);
    SDL_Log("\n");
    SDL_Log("positional arguments:");
    SDL_Log("   INPUT      Path of input DirectX file");
    SDL_Log("\n");
    SDL_Log("Output modes:");
    SDL_Log("  -t          text mode");
    SDL_Log("  -b          binary mode (default)");
    SDL_Log("  -c          compressed mode");
    SDL_Log("\n");
    SDL_Log("Options:");
    SDL_Log("  -o OUTPUT   Path of output DirectX file (default=tmp.x)");
    SDL_Log("  -h, --help  show this help message and exit");
    SDL_Log("\n");
}

int main(int argc, char *argv[])
{
    LPDIRECTXFILE lpApi = NULL;
    LPDIRECTXFILEENUMOBJECT lpEnumObj = NULL;
    LPDIRECTXFILESAVEOBJECT lpSaveObj = NULL;
    SDL_LPCSTR szSrc = NULL;
    bool xFormat_argument = false;
    DXFILEFORMAT xFormat = DXFILEFORMAT_BINARY;
    SDL_HRESULT hr;
    const char *out_path = NULL;
    int rc = 0;

    for (int i = 1; i < argc; ) {
        int consumed = -1;

        if (consumed < 0) {
            if (argv[i][0] == '-') {
                if (SDL_strcmp(argv[i], "-t") == 0) {
                    if (!xFormat_argument) {
                        xFormat = DXFILEFORMAT_TEXT;
                        xFormat_argument = true;
                        consumed = 1;
                    }
                } else if (SDL_strcmp(argv[i], "-b") == 0) {
                    if (!xFormat_argument) {
                        xFormat = DXFILEFORMAT_BINARY;
                        xFormat_argument = true;
                        consumed = 1;
                    }
                } else if (SDL_strcmp(argv[i], "-c") == 0) {
                    if (!xFormat_argument) {
                        xFormat = DXFILEFORMAT_COMPRESSED;
                        xFormat_argument = true;
                        consumed = 1;
                    }
                } else if (SDL_strcmp(argv[i], "-o") == 0) {
                    if (out_path == NULL) {
                        if (i + 1 < argc) {
                            out_path = argv[i + 1];
                        }
                        consumed = 2;
                    }
                } else if (SDL_strcmp(argv[i], "-h") == 0) {
                    print_usage(argv[0]);
                    return 0;
                }
            } else if (szSrc == NULL) {
                szSrc = argv[i];
                consumed = 1;
            }
        }
        if (consumed < 0) {
            print_usage(argv[0]);
            return 1;
        }
        i += consumed;
    }

    do {
        // Create xofapi object.
        hr = DirectXFileCreate(&lpApi);
        if (SDL_FAILED(hr)) {
            SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "DirectXFileCreate failed");
            rc = 1;
            break;
        }

        // Registe templates for d3drm.
        hr = IDirectXFile_RegisterTemplates(lpApi, (SDL_LPVOID)SDL_D3DRM_XTEMPLATES, SDL_D3DRM_XTEMPLATE_BYTES);
        if (SDL_FAILED(hr)) {
            SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "IDirectXFile_RegisterTemplates failed");
            rc = 1;
            break;
        }

        // Create enum object.
        hr = IDirectXFile_CreateEnumObject(lpApi, (SDL_LPVOID)szSrc, DXFILELOAD_FROMFILE, &lpEnumObj);
        if (SDL_FAILED(hr)) {
            SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "IDirectXFile_CreateEnumObject failed");
            rc = 1;
            break;
        }

        // Create save object.
        hr = IDirectXFile_CreateSaveObject(lpApi, "tmp.x", xFormat, &lpSaveObj);
        if (SDL_FAILED(hr)) {
            SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "IDirectXFile_CreateSaveObject failed");
            rc = 1;
            break;
        }

        // Enumerate top level objects.
        LPDIRECTXFILEDATA lpDataObj;

        for (;;) {
            const SDL_GUID *type;
            hr = IDirectXFileEnumObject_GetNextDataObject(lpEnumObj, &lpDataObj);
            if (hr == DXFILEERR_NOMOREOBJECTS) {
                break;
            }
            if (SDL_FAILED(hr)) {
                SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "IDirectXFileEnumObject_GetNextDataObject failed");
                rc = 1;
                break;
            }

            hr = IDirectXFileData_GetType(lpDataObj, &type);
            if (SDL_FAILED(hr)) {
                SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "IDirectXFileData_GetType failed");
                rc = 1;
                break;
            }

            // If this is the header we may have to change the type
            if (SDL_memcmp(type, &SDL_TID_DXFILEHeader, sizeof(*type)) == 0) {
                // Flip the binary/text flag bit.

                Header *pHeader;
                SDL_DWORD cbSize;

                hr = IDirectXFileData_GetData(lpDataObj, NULL, &cbSize, (SDL_LPVOID *)&pHeader);
                if (SDL_FAILED(hr)) {
                    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "IDirectXFileData_GetData failed");
                    rc = 1;
                    break;
                }

                if (pHeader->flags & 1) {
                    if (xFormat == DXFILEFORMAT_BINARY) {
                        pHeader->flags &= 0xffffffe;
                    }
                } else {
                    if (xFormat == DXFILEFORMAT_TEXT) {
                        pHeader->flags |= 1;
                    }
                }
            }

            // Save the data
            hr = IDirectXFileSaveObject_SaveData(lpSaveObj, lpDataObj);
            if (SDL_FAILED(hr)) {
                SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "IDirectXFileSaveObject_SaveData failed");
                rc = 1;
                break;
            }

            // Release the data object
            IDirectXFileData_Release(lpDataObj);
        }
    } while (false);

    // Release outstanding interfaces
    if (lpSaveObj != NULL) {
        IDirectXFileSaveObject_Release(lpSaveObj);
    }

    if (lpEnumObj != NULL) {
        IDirectXFileEnumObject_Release(lpEnumObj);
    }

    if (lpApi != NULL) {
        IDirectXFile_Release(lpApi);
    }

    SDL_Log("Done");

    return rc;
}
