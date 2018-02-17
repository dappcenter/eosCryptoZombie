# eosCryptoZombie
[EOS](https://github.com/EOSIO/eos) implementation of Loom Networks' tutorial game [CryptoZombies](https://cryptozombies.io)

## Deploying to local testnet
##### Have eosd running
```
$ ./eosd
```


##### Create account for contract 
```
$ ./eosc create key
Private key:###
Public key: ###
$ ./eosc create key
Private key:###
Public key: ###
$ ./eosc wallet import ${private_key_1}
imported private key for: ${public_key_1}
$ ./eosc wallet import ${private_key_2}
imported private key for: ${public_key_2}
§ ./eosc create account inita zombiefac ${public_key_1} ${public_key_2}
```

##### Compile C++ to WASM
```
./eoscpp -o ~/path/to/project/zombieFactort.wast ~/path/to/project/zombieFactory.cpp
```

##### Deploy contract
```
./eosc set contract zombiefac ~/path/to/project/zombieFactory.wast ~/path/to/project/zombieFactory.abi
```








