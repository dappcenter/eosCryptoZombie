//
// Created by Ludvig Kratz on 2018-01-14.
//

#include "zombieFactory.hpp"

namespace ZOMBIES {
    using namespace zombieFactory;
    /*
     * Uses keccak256 in Solidity
     */
    uint32_t generate_random_dna(eosio::string str) {
        //TODO: Add hash function of str
        uint32_t rand = 8356281049284737;
        return rand;
    }

    void createRandomZombie(const create& c) {
        uint32_t randDna = generate_random_dna(c.name);
        Zombie zombie_to_create(c.owner, c.name, randDna);
        Zombies::store(zombie_to_create, c.owner);
    }
} //namespace ZOMBIES

using namespace ZOMBIES;

/**
 *  The init() and apply() methods must have C calling convention so that the blockchain can lookup and
 *  call these methods.
 */
extern "C" {

    /**
     *  This method is called once when the contract is published or updated.
     */
    void init()  {
    }

    /// The apply method implements the dispatch of events to this contract
    void apply( uint64_t code, uint64_t action_name ) {
        if (code == N(zombieFactory)) {
            if (action_name == N(createRandomZombie)) {
                ZOMBIES::apply_create_random_zombie(current_message<ZOMBIES::create>());
            }
        }
    }

} // extern "C"

