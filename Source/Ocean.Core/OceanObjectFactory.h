// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#ifndef _OCEANOBJECTFACTORY_H_
#define _OCEANOBJECTFACTORY_H_

#include "OceanObject.h"
#include "OceanObjectType.h"

class Ocean;

class OceanObjectFactory
{
private:
    Ocean *m_ocean;

public:
    OceanObjectFactory(Ocean *ocean);

    OceanObject *CreateObject(OceanObjectType type);
};

#endif // _OCEANOBJECTFACTORY_H_
