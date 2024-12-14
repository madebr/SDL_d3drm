#ifndef IDIRECTXFILE_H
#define IDIRECTXFILE_H

#include <SDL_dxfile.h>

typedef struct {
    IDirectXFile interface_idirectxfile;
    SDL_ULONG ref_count;
} SDL_DirectXFile;

#endif // IDIRECTXFILE_H
