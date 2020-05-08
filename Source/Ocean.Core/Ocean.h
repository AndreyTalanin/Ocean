// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#ifndef _OCEAN_H_
#define _OCEAN_H_

#include <cstdint>
#include <vector>

#include "OceanCell.h"
#include "OceanObject.h"
#include "OceanObjectFactory.h"

class Ocean
{
private:
    static constexpr int32_t c_oceanDensity = 125;
    static constexpr int32_t c_maxOceanDensity = 1000;

    int32_t m_width;
    int32_t m_height;
    OceanObjectFactory *m_factory;
    std::vector<OceanCell *> m_cells;
    std::vector<OceanObject *> m_objects;
    std::vector<int32_t> m_updateIndices;

private:
    void Initialize();

public:
    Ocean(int32_t width, int32_t height);
    ~Ocean();

    int32_t GetWidth() const;
    int32_t GetHeight() const;
    const std::vector<OceanCell *> *GetCells() const;

    OceanCell *GetCell(int32_t x, int32_t y) const;

    void Spawn(OceanCell *cell, OceanObject *object);
    void Move(OceanCell *cell, OceanObject *object);
    void Despawn(OceanObject *object);

    void Update();
};

#endif // _OCEAN_H_
