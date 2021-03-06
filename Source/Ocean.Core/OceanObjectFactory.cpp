﻿// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#include "CarnivorousFish.h"
#include "HerbivorousFish.h"
#include "Ocean.h"
#include "OceanObject.h"
#include "OceanObjectFactory.h"
#include "OceanObjectType.h"
#include "Rock.h"
#include "Seaweed.h"

OceanObjectFactory::OceanObjectFactory(Ocean *ocean)
{
    m_ocean = ocean;
}

OceanObject *OceanObjectFactory::CreateObject(OceanObjectType type)
{
	switch (type)
	{
        case OceanObjectType::Rock:
            return new Rock(m_ocean, nullptr);
        case OceanObjectType::Seaweed:
            return new Seaweed(m_ocean, nullptr);
        case OceanObjectType::HerbivorousFish:
            return new HerbivorousFish(m_ocean, nullptr);
        case OceanObjectType::CarnivorousFish:
            return new CarnivorousFish(m_ocean, nullptr);
        default:
            return nullptr;
	}
}
