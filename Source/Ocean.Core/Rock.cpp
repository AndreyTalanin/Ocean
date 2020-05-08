// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#include "Ocean.h"
#include "OceanCell.h"
#include "OceanObject.h"
#include "OceanObjectType.h"
#include "Rock.h"

Rock::Rock(Ocean *ocean, OceanCell *cell)
    : OceanObject(OceanObjectType::Rock, ocean, cell)
{
}

void Rock::Update()
{
}
char Rock::Draw()
{
    return c_marker;
}
