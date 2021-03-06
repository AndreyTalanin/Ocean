﻿// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#include "BufferedOceanRenderer.h"
#include "Ocean.h"
#include "OceanRenderer.h"

OceanRenderer::OceanRenderer(Ocean *ocean)
{
    m_ocean = ocean;
}

Ocean *OceanRenderer::GetOcean() const { return m_ocean; }

void *__cdecl AllocateOceanRenderer(void *oceanPtr, void *bufferPtr)
{
    return new BufferedOceanRenderer((Ocean *)oceanPtr, (char *)bufferPtr);
}

void __cdecl DrawOcean(void *oceanRendererPtr, void *bufferPtr)
{
    BufferedOceanRenderer *bufferedOceanRenderer = (BufferedOceanRenderer *)oceanRendererPtr;

    if (bufferedOceanRenderer->GetBuffer() != bufferPtr)
        bufferedOceanRenderer->SetBuffer((char *)bufferPtr);

    bufferedOceanRenderer->Draw();
}

void __cdecl FreeOceanRenderer(void *oceanRendererPtr)
{
    delete (BufferedOceanRenderer *)oceanRendererPtr;
}
