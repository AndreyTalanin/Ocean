// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#ifndef _ROCK_H_
#define _ROCK_H_

#include "OceanObject.h"

class Ocean;
class OceanCell;

class Rock : public OceanObject
{
private:
    static constexpr char c_marker = 'R';

public:
    Rock(Ocean *ocean, OceanCell *cell);

    virtual void Update() override;
    virtual char Draw() override;
};

#endif // _ROCK_H_
