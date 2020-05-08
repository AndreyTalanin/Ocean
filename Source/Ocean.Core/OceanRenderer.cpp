// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#include "Ocean.h"
#include "OceanRenderer.h"

OceanRenderer::OceanRenderer(Ocean *ocean)
{
    m_ocean = ocean;
}

Ocean *OceanRenderer::GetOcean() const { return m_ocean; }
