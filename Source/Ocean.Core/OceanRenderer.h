// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#ifndef _OCEANRENDERER_H_
#define _OCEANRENDERER_H_

#include "Ocean.h"

class OceanRenderer
{
private:
    Ocean *m_ocean;

protected:
    OceanRenderer(Ocean *ocean);

public:
    Ocean *GetOcean() const;

    virtual void Draw() = 0;
};

extern "C" __declspec(dllexport) void *__cdecl AllocateOceanRenderer(void *oceanPtr, void *bufferPtr);

extern "C" __declspec(dllexport) void __cdecl DrawOcean(void *oceanRendererPtr, void *bufferPtr);

extern "C" __declspec(dllexport) void __cdecl FreeOceanRenderer(void *oceanRendererPtr);

#endif // _OCEANRENDERER_H_
