// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#include "Ocean.h"
#include "OceanCell.h"
#include "OceanObject.h"
#include "OceanObjectType.h"

OceanObject::OceanObject(OceanObjectType type, Ocean *ocean, OceanCell *cell)
{
    m_type = type;
    m_ocean = ocean;
    m_cell = cell;
    m_destroyed = false;
}

OceanObjectType OceanObject::GetType() const { return m_type; }
Ocean *OceanObject::GetOcean() const { return m_ocean; }
OceanCell *OceanObject::GetCell() const { return m_cell; }
void OceanObject::SetCell(OceanCell *cell) { m_cell = cell; }

bool OceanObject::IsDestroyed() const
{
    return m_destroyed;
}
void OceanObject::Destroy()
{
    m_destroyed = true;
}
