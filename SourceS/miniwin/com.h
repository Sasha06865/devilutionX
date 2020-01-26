#pragma once

namespace dvl {

typedef struct IDirectSoundBuffer {
	virtual void Release() = 0;
	virtual bool IsPlaying() = 0;
	virtual void Play(int lVolume, int lPan) = 0;
	virtual void Stop() = 0;
	virtual int SetChunk(BYTE *fileData, DWORD dwBytes) = 0;
} IDirectSoundBuffer, *LPDIRECTSOUNDBUFFER;

void UiErrorOkDialog(const char *text, const char *caption, bool error = true);

} // namespace dvl
