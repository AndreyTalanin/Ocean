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

#endif // _OCEANRENDERER_H_
