#ifndef SDL_DXFILE_H
#define SDL_DXFILE_H

#include "SDL_winglue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef SDL_DWORD DXFILEFORMAT;

#define DXFILEFORMAT_BINARY     0
#define DXFILEFORMAT_TEXT       1
#define DXFILEFORMAT_COMPRESSED 2

typedef SDL_DWORD DXFILELOADOPTIONS;

#define DXFILELOAD_FROMFILE  0x00L
#define DXFILELOAD_FROMRESOURCE 0x01L
#define DXFILELOAD_FROMMEMORY 0x02L
#define DXFILELOAD_FROMSTREAM 0x04L
#define DXFILELOAD_FROMURL 0x08L

typedef struct _DXFILELOADRESOURCE {
    SDL_HMODULE SDL_HMODULE;
    SDL_LPCTSTR lpName;
    SDL_LPCTSTR lpType;
}DXFILELOADRESOURCE, *LPDXFILELOADRESOURCE;

typedef struct _DXFILELOADMEMORY {
    SDL_LPVOID lpMemory;
    SDL_DWORD dSize;
}DXFILELOADMEMORY, *LPDXFILELOADMEMORY;

/*
 * DirectX File object types.
 */

#ifndef SDL_WIN_TYPES
#define SDL_WIN_TYPES(itype, ptype) \
    typedef struct itype SDL_FAR *LP##ptype, SDL_FAR **LPLP##ptype
#endif

SDL_WIN_TYPES(IDirectXFile,                 DIRECTXFILE);
SDL_WIN_TYPES(IDirectXFileEnumObject,       DIRECTXFILEENUMOBJECT);
SDL_WIN_TYPES(IDirectXFileSaveObject,       DIRECTXFILESAVEOBJECT);
SDL_WIN_TYPES(IDirectXFileObject,           DIRECTXFILEOBJECT);
SDL_WIN_TYPES(IDirectXFileData,             DIRECTXFILEDATA);
SDL_WIN_TYPES(IDirectXFileDataReference,    DIRECTXFILEDATAREFERENCE);
SDL_WIN_TYPES(IDirectXFileBinary,           DIRECTXFILEBINARY);

/*
 * API for creating IDirectXFile interface.
 */

SDL_STDAPI DirectXFileCreate(LPDIRECTXFILE *lplpDirectXFile);

/*
 * The methods for IDirectXFileObject
 */

#define IDIRECTXFILEOBJECT_METHODS(kind) \
    SDL_STDMETHOD(GetName) (SDL_THIS_ SDL_LPSTR, SDL_LPDWORD) kind; \
    SDL_STDMETHOD(GetId) (SDL_THIS_ SDL_LPGUID) kind

/*
 * DirectX File interfaces.
 */

#define SDL_INTERFACE IDirectXFile
SDL_DECLARE_INTERFACE_(IDirectXFile, IUnknown)
{
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    SDL_STDMETHOD(CreateEnumObject) (SDL_THIS_ SDL_LPVOID, DXFILELOADOPTIONS, LPDIRECTXFILEENUMOBJECT *) SDL_PURE;
    SDL_STDMETHOD(CreateSaveObject) (SDL_THIS_ SDL_LPCSTR, DXFILEFORMAT, LPDIRECTXFILESAVEOBJECT *) SDL_PURE;
    SDL_STDMETHOD(RegisterTemplates) (SDL_THIS_ SDL_LPVOID, SDL_DWORD) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
#define IDirectXFile_QueryInterface(ptr,a,b)            (ptr)->lpVtbl->QueryInterface(ptr,a,b)
#define IDirectXFile_AddRef(ptr)                        (ptr)->lpVtbl->AddRef(ptr)
#define IDirectXFile_Release(ptr)                       (ptr)->lpVtbl->Release(ptr)
#define IDirectXFile_CreateEnumObject(ptr,a,b,c)        (ptr)->lpVtbl->CreateEnumObject(ptr,a,b,c)
#define IDirectXFile_CreateSaveObject(ptr,a,b,c)        (ptr)->lpVtbl->CreateSaveObject(ptr,a,b,c)
#define IDirectXFile_RegisterTemplates(ptr,a,b)         (ptr)->lpVtbl->RegisterTemplates(ptr,a,b)
#else
#define IDirectXFile_QueryInterface(ptr,a,b)            (ptr)->QueryInterface(ptr,a,b)
#define IDirectXFile_AddRef(ptr)                        (ptr)->AddRef(ptr)
#define IDirectXFile_Release(ptr)                       (ptr)->Release(ptr)
#define IDirectXFile_CreateEnumObject(ptr,a,b,c)        (ptr)->CreateEnumObject(ptr,a,b,c)
#define IDirectXFile_CreateSaveObject(ptr,a,b,c)        (ptr)->CreateSaveObject(ptr,a,b,c)
#define IDirectXFile_RegisterTemplates(ptr,a,b)         (ptr)->RegisterTemplates(ptr,a,b)
#endif

#define SDL_INTERFACE IDirectXFileEnumObject
SDL_DECLARE_INTERFACE_(IDirectXFileEnumObject, IUnknown)
{
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    SDL_STDMETHOD(GetNextDataObject)    (SDL_THIS_ LPDIRECTXFILEDATA *) SDL_PURE;
    SDL_STDMETHOD(GetDataObjectById)    (SDL_THIS_ SDL_REFGUID, LPDIRECTXFILEDATA *) SDL_PURE;
    SDL_STDMETHOD(GetDataObjectByName)  (SDL_THIS_ SDL_LPCSTR, LPDIRECTXFILEDATA *) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
#define IDirectXFileEnumObject_QueryInterface(ptr,a,b)          (ptr)->lpVtbl->QueryInterface(ptr,a,b)
#define IDirectXFileEnumObject_AddRef(ptr)                      (ptr)->lpVtbl->AddRef(ptr)
#define IDirectXFileEnumObject_Release(ptr)                     (ptr)->lpVtbl->Release(ptr)
#define IDirectXFileEnumObject_GetNextDataObject(ptr,a)         (ptr)->lpVtbl->GetNextDataObject(ptr,a)
#define IDirectXFileEnumObject_GetDataObjectById(ptr,a,b)       (ptr)->lpVtbl->GetDataObjectById(ptr,a,b)
#define IDirectXFileEnumObject_GetDataObjectByName(ptr,a,b)     (ptr)->lpVtbl->GetDataObjectByName(ptr,a,b)
#else
#define IDirectXFileEnumObject_QueryInterface(ptr,a,b)          (ptr)->QueryInterface(ptr,a,b)
#define IDirectXFileEnumObject_AddRef(ptr)                      (ptr)->AddRef(ptr)
#define IDirectXFileEnumObject_Release(ptr)                     (ptr)->Release(ptr)
#define IDirectXFileEnumObject_GetNextDataObject(ptr,a)         (ptr)->GetNextDataObject(ptr,a)
#define IDirectXFileEnumObject_GetDataObjectById(ptr,a,b)       (ptr)->GetDataObjectById(ptr,a,b)
#define IDirectXFileEnumObject_GetDataObjectByName(ptr,a,b)     (ptr)->GetDataObjectByName(ptr,a,b)
#endif

#define SDL_INTERFACE IDirectXFileSaveObject
SDL_DECLARE_INTERFACE_(IDirectXFileSaveObject, IUnknown)
{
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    SDL_STDMETHOD(SaveTemplates) (SDL_THIS_ SDL_DWORD, const SDL_GUID **) SDL_PURE;
    SDL_STDMETHOD(CreateDataObject) (SDL_THIS_ SDL_REFGUID, SDL_LPCSTR, const SDL_GUID *, SDL_DWORD, SDL_LPVOID, LPDIRECTXFILEDATA *) SDL_PURE;
    SDL_STDMETHOD(SaveData) (SDL_THIS_ LPDIRECTXFILEDATA) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
#define IDirectXFileSaveObject_QueryInterface(ptr,a,b)                  (ptr)->lpVtbl->QueryInterface(ptr,a,b)
#define IDirectXFileSaveObject_AddRef(ptr)                              (ptr)->lpVtbl->AddRef(ptr)
#define IDirectXFileSaveObject_Release(ptr)                             (ptr)->lpVtbl->Release(ptr)
#define IDirectXFileSaveObject_SaveTemplates(ptr,a,b)                   (ptr)->lpVtbl->SaveTemplates(ptr,a,b)
#define IDirectXFileSaveObject_CreateDataObject(ptr,a,b,c,d,e,f)        (ptr)->lpVtbl->CreateDataObject(ptr,a,b,c,d,e,f)
#define IDirectXFileSaveObject_SaveData(ptr,a)                          (ptr)->lpVtbl->SaveData(ptr,a)
#else
#define IDirectXFileSaveObject_QueryInterface(ptr,a,b)                  (ptr)->QueryInterface(ptr,a,b)
#define IDirectXFileSaveObject_AddRef(ptr)                              (ptr)->AddRef(ptr)
#define IDirectXFileSaveObject_Release(ptr)                             (ptr)->Release(ptr)
#define IDirectXFileSaveObject_SaveTemplates(ptr,a,b)                   (ptr)->SaveTemplates(ptr,a,b)
#define IDirectXFileSaveObject_CreateDataObject(ptr,a,b,c,d,e,f)        (ptr)->CreateDataObject(ptr,a,b,c,d,e,f)
#define IDirectXFileSaveObject_SaveData(ptr,a)                          (ptr)->SaveData(ptr,a)
#endif

#define SDL_INTERFACE IDirectXFileObject
SDL_DECLARE_INTERFACE_(IDirectXFileObject, IUnknown)
{
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    IDIRECTXFILEOBJECT_METHODS(SDL_PURE);
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
#define IDirectXFileObject_QueryInterface(ptr,a,b)                  (ptr)->lpVtbl->QueryInterface(ptr,a,b)
#define IDirectXFileObject_AddRef(ptr)                              (ptr)->lpVtbl->AddRef(ptr)
#define IDirectXFileObject_Release(ptr)                             (ptr)->lpVtbl->Release(ptr)
#define IDirectXFileObject_GetName(ptr,a,b)                         (ptr)->lpVtbl->Getname(ptr,a,b)
#define IDirectXFileObject_GetId(ptr,a)                             (ptr)->lpVtbl->GetId(ptr,a)
#else
#define IDirectXFileObject_QueryInterface(ptr,a,b)                  (ptr)->QueryInterface(ptr,a,b)
#define IDirectXFileObject_AddRef(ptr)                              (ptr)->AddRef(ptr)
#define IDirectXFileObject_Release(ptr)                             (ptr)->Release(ptr)
#define IDirectXFileObject_GetName(ptr,a,b)                         (ptr)->Getname(ptr,a,b)
#define IDirectXFileObject_GetId(ptr,a)                             (ptr)->GetId(ptr,a)
#endif

#define SDL_INTERFACE IDirectXFileData
SDL_DECLARE_INTERFACE_(IDirectXFileData, IDirectXFileObject)
{
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    IDIRECTXFILEOBJECT_METHODS(SDL_PURE);

    SDL_STDMETHOD(GetData)          (SDL_THIS_ SDL_LPCSTR, SDL_DWORD *, void **) SDL_PURE;
    SDL_STDMETHOD(GetType)          (SDL_THIS_ const SDL_GUID **) SDL_PURE;
    SDL_STDMETHOD(GetNextObject)    (SDL_THIS_ LPDIRECTXFILEOBJECT *) SDL_PURE;
    SDL_STDMETHOD(AddDataObject)    (SDL_THIS_ LPDIRECTXFILEDATA) SDL_PURE;
    SDL_STDMETHOD(AddDataReference) (SDL_THIS_ SDL_LPCSTR, const SDL_GUID *) SDL_PURE;
    SDL_STDMETHOD(AddBinaryObject)  (SDL_THIS_ SDL_LPCSTR, const SDL_GUID *, SDL_LPCSTR, SDL_LPVOID, SDL_DWORD) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
#define IDirectXFileData_QueryInterface(ptr,a,b)                (ptr)->lpVtbl->QueryInterface(ptr,a,b)
#define IDirectXFileData_AddRef(ptr)                            (ptr)->lpVtbl->AddRef(ptr)
#define IDirectXFileData_Release(ptr)                           (ptr)->lpVtbl->Release(ptr)
#define IDirectXFileData_GetName(ptr,a,b)                       (ptr)->lpVtbl->Getname(ptr,a,b)
#define IDirectXFileData_GetId(ptr,a)                           (ptr)->lpVtbl->GetId(ptr,a)
#define IDirectXFileData_GetData(ptr,a,b,c)                     (ptr)->lpVtbl->GetData(ptr,a,b,c)
#define IDirectXFileData_GetType(ptr,a)                         (ptr)->lpVtbl->GetType(ptr,a)
#define IDirectXFileData_GetNextObject(ptr,a)                   (ptr)->lpVtbl->GetNextObject(ptr,a)
#define IDirectXFileData_AddDataObject(ptr,a)                   (ptr)->lpVtbl->AddDataObject(ptr,a)
#define IDirectXFileData_AddDataReference(ptr,a,b)              (ptr)->lpVtbl->AddDataReference(ptr,a,b)
#define IDirectXFileData_AddBinaryObject(ptr,a,b,c,d,e)         (ptr)->lpVtbl->AddBinaryObject(ptr,a,b,c,d,e)
#else
#define IDirectXFileData_QueryInterface(ptr,a,b)                (ptr)->QueryInterface(ptr,a,b)
#define IDirectXFileData_AddRef(ptr)                            (ptr)->AddRef(ptr)
#define IDirectXFileData_Release(ptr)                           (ptr)->Release(ptr)
#define IDirectXFileData_GetName(ptr,a,b)                       (ptr)->Getname(ptr,a,b)
#define IDirectXFileData_GetId(ptr,a)                           (ptr)->GetId(ptr,a)
#define IDirectXFileData_GetData(ptr,a,b,c)                     (ptr)->GetData(ptr,a,b,c)
#define IDirectXFileData_GetType(ptr,a)                         (ptr)->GetType(ptr,a)
#define IDirectXFileData_GetNextObject(ptr,a)                   (ptr)->GetNextObject(ptr,a)
#define IDirectXFileData_AddDataObject(ptr,a)                   (ptr)->AddDataObject(ptr,a)
#define IDirectXFileData_AddDataReference(ptr,a,b)              (ptr)->AddDataReference(ptr,a,b)
#define IDirectXFileData_AddBinaryObject(ptr,a,b,c,d,e)         (ptr)->AddBinaryObject(ptr,a,b,c,d,e)
#endif

#define SDL_INTERFACE IDirectXFileDataReference
SDL_DECLARE_INTERFACE_(IDirectXFileDataReference, IDirectXFileObject)
{
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    IDIRECTXFILEOBJECT_METHODS(SDL_PURE);

    SDL_STDMETHOD(Resolve) (SDL_THIS_ LPDIRECTXFILEDATA *) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
#define IDirectXFileDataReference_QueryInterface(ptr,a,b)                (ptr)->lpVtbl->QueryInterface(ptr,a,b)
#define IDirectXFileDataReference_AddRef(ptr)                            (ptr)->lpVtbl->AddRef(ptr)
#define IDirectXFileDataReference_Release(ptr)                           (ptr)->lpVtbl->Release(ptr)
#define IDirectXFileDataReference_GetName(ptr,a,b)                       (ptr)->lpVtbl->Getname(ptr,a,b)
#define IDirectXFileDataReference_GetId(ptr,a)                           (ptr)->lpVtbl->GetId(ptr,a)
#define IDirectXFileDataReference_Resolve(ptr,a)                         (ptr)->lpVtbl->Resolve(ptr,a)
#else
#define IDirectXFileDataReference_QueryInterface(ptr,a,b)                (ptr)->QueryInterface(ptr,a,b)
#define IDirectXFileDataReference_AddRef(ptr)                            (ptr)->AddRef(ptr)
#define IDirectXFileDataReference_Release(ptr)                           (ptr)->Release(ptr)
#define IDirectXFileDataReference_GetName(ptr,a,b)                       (ptr)->Getname(ptr,a,b)
#define IDirectXFileDataReference_GetId(ptr,a)                           (ptr)->GetId(ptr,a)
#define IDirectXFileDataReference_Resolve(ptr,a,b,c)                     (ptr)->Resolve(ptr,a)
#endif

#define SDL_INTERFACE IDirectXFileBinary
SDL_DECLARE_INTERFACE_(IDirectXFileBinary, IDirectXFileObject)
{
    SDL_IUNKNOWN_METHODS(SDL_PURE);
    IDIRECTXFILEOBJECT_METHODS(SDL_PURE);

    SDL_STDMETHOD(GetSize)      (SDL_THIS_ SDL_DWORD *) SDL_PURE;
    SDL_STDMETHOD(GetMimeType)  (SDL_THIS_ SDL_LPCSTR *) SDL_PURE;
    SDL_STDMETHOD(Read)         (SDL_THIS_ SDL_LPVOID, SDL_DWORD, SDL_LPDWORD) SDL_PURE;
};
#undef SDL_INTERFACE

#if !defined(__cplusplus) || defined(CINTERFACE)
#define IDirectXFileBinary_QueryInterface(ptr,a,b)                      (ptr)->lpVtbl->QueryInterface(ptr,a,b)
#define IDirectXFileBinary_AddRef(ptr)                                  (ptr)->lpVtbl->AddRef(ptr)
#define IDirectXFileBinary_Release(ptr)                                 (ptr)->lpVtbl->Release(ptr)
#define IDirectXFileBinary_GetName(ptr,a,b)                             (ptr)->lpVtbl->Getname(ptr,a,b)
#define IDirectXFileBinary_GetId(ptr,a)                                 (ptr)->lpVtbl->GetId(ptr,a)
#define IDirectXFileBinary_GetSize(ptr,a)                               (ptr)->lpVtbl->GetSize(ptr,a)
#define IDirectXFileBinary_GetMimeType(ptr,a)                           (ptr)->lpVtbl->GetMimeType(ptr,a)
#define IDirectXFileBinary_Read(ptr,a,b,c)                              (ptr)->lpVtbl->Read(ptr,a)
#else
#define IDirectXFileBinary_QueryInterface(ptr,a,b)                      (ptr)->QueryInterface(ptr,a,b)
#define IDirectXFileBinary_AddRef(ptr)                                  (ptr)->AddRef(ptr)
#define IDirectXFileBinary_Release(ptr)                                 (ptr)->Release(ptr)
#define IDirectXFileBinary_GetName(ptr,a,b)                             (ptr)->Getname(ptr,a,b)
#define IDirectXFileBinary_GetId(ptr,a)                                 (ptr)->GetId(ptr,a)
#define IDirectXFileBinary_GetSize(ptr,a)                               (ptr)->GetSize(ptr,a)
#define IDirectXFileBinary_GetMimeType(ptr,a)                           (ptr)->GetMimeType(ptr,a)
#define IDirectXFileBinary_Read(ptr,a,b,c)                              (ptr)->Read(ptr,a)
#endif

/*
 * DirectXFile Object Class Id (for CoCreateInstance())
 */

SDL_DEFINE_GUID(SDL_CLSID_CDirectXFile, 0x4516ec43, 0x8f20, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);

/*
 * DirectX File Interface GUIDs.
 */

SDL_DEFINE_GUID(SDL_IID_IDirectXFile,               0x3d82ab40, 0x62da, 0x11cf, 0xab, 0x39, 0x0, 0x20, 0xaf, 0x71, 0xe4, 0x33);
SDL_DEFINE_GUID(SDL_IID_IDirectXFileEnumObject,     0x3d82ab41, 0x62da, 0x11cf, 0xab, 0x39, 0x0, 0x20, 0xaf, 0x71, 0xe4, 0x33);
SDL_DEFINE_GUID(SDL_IID_IDirectXFileSaveObject,     0x3d82ab42, 0x62da, 0x11cf, 0xab, 0x39, 0x0, 0x20, 0xaf, 0x71, 0xe4, 0x33);
SDL_DEFINE_GUID(SDL_IID_IDirectXFileObject,         0x3d82ab43, 0x62da, 0x11cf, 0xab, 0x39, 0x0, 0x20, 0xaf, 0x71, 0xe4, 0x33);
SDL_DEFINE_GUID(SDL_IID_IDirectXFileData,           0x3d82ab44, 0x62da, 0x11cf, 0xab, 0x39, 0x0, 0x20, 0xaf, 0x71, 0xe4, 0x33);
SDL_DEFINE_GUID(SDL_IID_IDirectXFileDataReference,  0x3d82ab45, 0x62da, 0x11cf, 0xab, 0x39, 0x0, 0x20, 0xaf, 0x71, 0xe4, 0x33);
SDL_DEFINE_GUID(SDL_IID_IDirectXFileBinary,         0x3d82ab46, 0x62da, 0x11cf, 0xab, 0x39, 0x0, 0x20, 0xaf, 0x71, 0xe4, 0x33);

/*
 * DirectX File Header template's SDL_GUID.
 */

SDL_DEFINE_GUID(SDL_TID_DXFILEHeader,   0x3d82ab43, 0x62da, 0x11cf, 0xab, 0x39, 0x0, 0x20, 0xaf, 0x71, 0xe4, 0x33);


/*
 * DirectX File errors.
 */

#define _FACDD  0x876
#define SDL_MAKE_DDHRESULT( code )  SDL_MAKE_HRESULT( 1, _FACDD, code )

#define DXFILE_OK   0

#define DXFILEERR_BADOBJECT                 SDL_MAKE_DDHRESULT(850)
#define DXFILEERR_BADVALUE                  SDL_MAKE_DDHRESULT(851)
#define DXFILEERR_BADTYPE                   SDL_MAKE_DDHRESULT(852)
#define DXFILEERR_BADSTREAMHANDLE           SDL_MAKE_DDHRESULT(853)
#define DXFILEERR_BADALLOC                  SDL_MAKE_DDHRESULT(854)
#define DXFILEERR_NOTFOUND                  SDL_MAKE_DDHRESULT(855)
#define DXFILEERR_NOTDONEYET                SDL_MAKE_DDHRESULT(856)
#define DXFILEERR_FILENOTFOUND              SDL_MAKE_DDHRESULT(857)
#define DXFILEERR_RESOURCENOTFOUND          SDL_MAKE_DDHRESULT(858)
#define DXFILEERR_URLNOTFOUND               SDL_MAKE_DDHRESULT(859)
#define DXFILEERR_BADRESOURCE               SDL_MAKE_DDHRESULT(860)
#define DXFILEERR_BADFILETYPE               SDL_MAKE_DDHRESULT(861)
#define DXFILEERR_BADFILEVERSION            SDL_MAKE_DDHRESULT(862)
#define DXFILEERR_BADFILEFLOATSIZE          SDL_MAKE_DDHRESULT(863)
#define DXFILEERR_BADFILECOMPRESSIONTYPE    SDL_MAKE_DDHRESULT(864)
#define DXFILEERR_BADFILE                   SDL_MAKE_DDHRESULT(865)
#define DXFILEERR_PARSEERROR                SDL_MAKE_DDHRESULT(866)
#define DXFILEERR_NOTEMPLATE                SDL_MAKE_DDHRESULT(867)
#define DXFILEERR_BADARRAYSIZE              SDL_MAKE_DDHRESULT(868)
#define DXFILEERR_BADDATAREFERENCE          SDL_MAKE_DDHRESULT(869)
#define DXFILEERR_INTERNALERROR             SDL_MAKE_DDHRESULT(870)
#define DXFILEERR_NOMOREOBJECTS             SDL_MAKE_DDHRESULT(871)
#define DXFILEERR_BADINTRINSICS             SDL_MAKE_DDHRESULT(872)
#define DXFILEERR_NOMORESTREAMHANDLES       SDL_MAKE_DDHRESULT(873)
#define DXFILEERR_NOMOREDATA                SDL_MAKE_DDHRESULT(874)
#define DXFILEERR_BADCACHEFILE              SDL_MAKE_DDHRESULT(875)
#define DXFILEERR_NOINTERNET                SDL_MAKE_DDHRESULT(876)


#ifdef __cplusplus
};
#endif

#endif  // SDL_DXFILE_H
