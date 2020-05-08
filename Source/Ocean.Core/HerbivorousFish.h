// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#ifndef _HERBIVOROUSFISH_H_
#define _HERBIVOROUSFISH_H_

#include <cstdint>

#include "OceanObject.h"
#include "Seaweed.h"

class Ocean;
class OceanCell;

class HerbivorousFish : public OceanObject
{
private:
    static constexpr char c_marker = 'H';
    static constexpr int32_t c_baseFullness = 100;
    static constexpr int32_t c_reproductionFullnessRequired = 200;
    static constexpr int32_t c_reproductionFullnessCost = 100;
    static constexpr int32_t c_minDeathAge = 600;
    static constexpr int32_t c_maxDeathAge = 1200;

    int32_t m_age;
    int32_t m_deathAge;
    int32_t m_fullness;

private:
    void EatSeaweed(Seaweed *seaweed);

public:
    HerbivorousFish(Ocean *ocean, OceanCell *cell);

    virtual void Update() override;
    virtual char Draw() override;
};

#endif // _HERBIVOROUSFISH_H_
