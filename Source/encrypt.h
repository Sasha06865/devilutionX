/**
 * @file encrypt.h
 *
 * Interface of functions for compression and decompressing MPQ data.
 */
#pragma once

#include <SDL.h>

#include "miniwin/miniwin.h"

namespace devilution {

struct TDataInfo {
	Uint8 *srcData;
	Uint32 srcOffset;
	Uint8 *destData;
	Uint32 destOffset;
	Uint32 size;
};

void Decrypt(DWORD *castBlock, DWORD size, DWORD key);
void Encrypt(DWORD *castBlock, DWORD size, DWORD key);
uint32_t Hash(const char *s, int type);
void InitHash();
DWORD PkwareCompress(BYTE *srcData, DWORD size);
void PkwareDecompress(BYTE *pbInBuff, int recv_size, int dwMaxBytes);

} // namespace devilution
