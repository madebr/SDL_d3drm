#include "idirectxfile.h"

#include "common/common_logging.h"

#include <stddef.h>

static SDL_DirectXFile *from_IDirectXFile(IDirectXFile *idxfile) {
    return (SDL_DirectXFile *)((uintptr_t) idxfile - offsetof(SDL_DirectXFile, interface_idirectxfile));
    return (SDL_DirectXFile *) idxfile;
}

static SDL_HRESULT SDL_STDCALL SDL_DirectXFile_QueryInterface(IDirectXFile *this, SDL_REFIID riid, void** ppvObject) {
    SDL_DirectXFile *real_this = from_IDirectXFile(this);
    (void) real_this;
    (void) riid;
    *ppvObject = NULL;
    return SDL_E_FAIL;
}

static SDL_ULONG SDL_STDCALL SDL_DirectXFile_AddRef(IDirectXFile *this) {
    SDL_DirectXFile *real_this = from_IDirectXFile(this);
    real_this->ref_count += 1;
    return real_this->ref_count;
}

static SDL_ULONG SDL_STDCALL SDL_DirectXFile_Release(IDirectXFile *this) {
    SDL_DirectXFile *real_this = from_IDirectXFile(this);
    SDL_ULONG new_count;
    real_this->ref_count -= 1;
    new_count = real_this->ref_count;
    if (real_this->ref_count == 0) {
        SDL_free(real_this);
    }
    return new_count;
}

static SDL_HRESULT SDL_STDCALL SDL_DirectXFile_CreateEnumObject(IDirectXFile *this, SDL_LPVOID pvSource, DXFILELOADOPTIONS dwLoadOptions, LPDIRECTXFILEENUMOBJECT *ppEnumObj) {
    SDL_DirectXFile *real_this = from_IDirectXFile(this);
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    (void) real_this;
    (void) pvSource;
    (void) dwLoadOptions;
    (void) ppEnumObj;
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_DirectXFile_CreateSaveObject(IDirectXFile *this, SDL_LPCSTR szFileName, DXFILEFORMAT dwFileFormat, LPDIRECTXFILESAVEOBJECT *ppSaveObj) {
    SDL_DirectXFile *real_this = from_IDirectXFile(this);
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    (void) real_this;
    (void) szFileName;
    (void) dwFileFormat;
    (void) ppSaveObj;
    return SDL_E_NOTIMPL;
}

static SDL_HRESULT SDL_STDCALL SDL_DirectXFile_RegisterTemplates(IDirectXFile *this, SDL_LPVOID pvData, SDL_DWORD cbSize) {
    SDL_DirectXFile *real_this = from_IDirectXFile(this);
    SDL_LogError(SDL_D3DRM_CATEGORY, "%s: not implemented", __FUNCTION__);
    (void) real_this;
    (void) pvData;
    (void) cbSize;
    return SDL_E_NOTIMPL;
}

static const IDirectXFileVtbl SDL_DirectXFile_Vtable = {
    SDL_DirectXFile_QueryInterface,
    SDL_DirectXFile_AddRef,
    SDL_DirectXFile_Release,
    SDL_DirectXFile_CreateEnumObject,
    SDL_DirectXFile_CreateSaveObject,
    SDL_DirectXFile_RegisterTemplates,
};

SDL_STDAPI DirectXFileCreate(LPDIRECTXFILE *lplpDirectXFile) {
    SDL_DirectXFile *real_obj = (SDL_DirectXFile *)SDL_calloc(1, sizeof(SDL_DirectXFile));
    real_obj->interface_idirectxfile.lpVtbl = &SDL_DirectXFile_Vtable;
    real_obj->ref_count = 1;
    *lplpDirectXFile = &real_obj->interface_idirectxfile;
    return SDL_S_OK;
}
