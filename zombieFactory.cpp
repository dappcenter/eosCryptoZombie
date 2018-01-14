//
// Created by Ludvig Kratz on 2018-01-14.
//

#include "zombieFactory.h"

using namespace zombieFactory;


void create_zombie(eosio::string name, uint32_t dna) {
    zombies.push_back(Zombie(name, dna));
}

/*
 * Uses keccak256 in Solidity
 */
uint32_t generate_random_dna(eosio::string str) {
    //TODO: Add hash function of str
    uint32_t rand = 8356281049284737;
    return rand;
}

void createRandomZombie(eosio::string name) {
    uint32_t randDna = generate_random_dna(name);
    create_zombie(name, randDna);
}