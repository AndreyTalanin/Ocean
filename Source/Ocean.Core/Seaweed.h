﻿// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#ifndef _SEAWEED_H_
#define _SEAWEED_H_

#include <cstdint>

#include "OceanObject.h"

class Ocean;
class OceanCell;

class Seaweed : public OceanObject
{
private:
    static constexpr char c_marker = 'W';
    static constexpr int32_t c_reproductionPeriod = 20;
    static constexpr int32_t c_minDeathAge = 120;
    static constexpr int32_t c_maxDeathAge = 240;

    int32_t m_age;
    int32_t m_delay;
    int32_t m_deathAge;

public:
    Seaweed(Ocean *ocean, OceanCell *cell);

    virtual void Update() override;
    virtual char Draw() override;
};

#endif // _SEAWEED_H_
