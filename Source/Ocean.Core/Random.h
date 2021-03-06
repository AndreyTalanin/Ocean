﻿// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

#ifndef _RANDOM_H_
#define _RANDOM_H_

#include <cstdint>

class Random
{
public:
    static void SetRandomSeed(int32_t seed);

    static int32_t GetRandomInt32();
    static int32_t GetRandomInt32(int32_t lowerBound, int32_t upperBound);
};

extern "C" __declspec(dllexport) void __cdecl SetRandomSeed(int32_t seed);

#endif // _RANDOM_H_
