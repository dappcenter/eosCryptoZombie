//
// Created by Ludvig Kratz on 2018-01-14.
//

#ifndef EOSCRYPTOZOMBIE_ZOMBIEFACTORY_H
#define EOSCRYPTOZOMBIE_ZOMBIEFACTORY_H

#include <stdio.h>
#include <math.h>
#include <vector>
#include <eoslib/string.hpp>
#include <string>

#endif /* zombieFactory_hpp */

namespace zombieFactory {
    const uint8_t dnaDigits = 16;
    const uint8_t dnaModulus = pow(10, dnaDigits);

    struct Zombie {
        std::string name;
        uint32_t dna;
    };

    std::vector<Zombie> zombies;
}



#endif //EOSCRYPTOZOMBIE_ZOMBIEFACTORY_H
