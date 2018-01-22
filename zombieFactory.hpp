//
// Created by Ludvig Kratz on 2018-01-14.
//

#include <stdio.h>
#include <math.h>
#include <eoslib/eos.hpp>
#include <eoslib/db.hpp>


using namespace eosio;
namespace zombieFactory {
    const uint8_t dnaDigits = 16;
    const uint8_t dnaModulus = pow(10, dnaDigits);

    struct Zombie {
        Zombie() {};
        Zombie(account_name owner, eosio::string name, uint32_t dna):owner(owner), name(name), dna(dna) {};
        account_name owner; // Owner of the zombie, this will also be the key in the db (How to make sure each dna is u
                            // unique?
        eosio::string name;
        uint32_t dna;
    };

    struct create {
        account_name owner;
        eosio::string name;
    };

    using Zombies = eosio::table<N(zombieFactory), N(zombieFactory), N(zombies), Zombie, uint64_t>;

    /* @abi action store_zombie
    * @abi table

    struct zombie_to_owner {
        account_name account;
        uint32_t id;
    };
     */

}



#endif //EOSCRYPTOZOMBIE_ZOMBIEFACTORY_H
