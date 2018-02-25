#include "stdafx.h"
#include <cstdlib>

// return a random number from <0;1)
float getRandom() {
    float rnd = std::rand(); // the seed from main() still has an effect
    return rnd / (RAND_MAX + 1); // +1 creates <0;1), otherwise it is <0;1>
}
