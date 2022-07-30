#pragma once
#include <random>
static unsigned short getRandomNumber(unsigned short min, unsigned short max)
{
    static double foration = 1 / (1.0 + RAND_MAX);
    return static_cast<unsigned short>(rand() * foration * (max - min + 1) + min);
}