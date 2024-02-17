#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "primes.h"


uint32_t Primes::get_prime(uint32_t n){
    while(primes.size() <= n){
        expand_sieve();
    }
    return primes[n];
}

bool Primes::is_prime(uint32_t n){
    while(composite.size() <= n){
        expand_sieve();
    }
    return !composite[n];
}

uint32_t Primes::multiple_gte(uint32_t n, uint32_t divisor){
    uint32_t upper = n + divisor - 1;
    return upper - (upper % divisor);
}

void Primes::calc_primes(uint32_t start){
    uint32_t i, j;

    composite[0] = true;
    composite[1] = true;

    for(uint32_t p : primes){
        for(j=multiple_gte(start, p); j<composite.size(); j+=p){
            composite[j] = true;
        }
    }
    
    for(i=start; i < composite.size(); ++i){
        if(!composite[i]){
            primes.push_back(i);

            for(j=i+i; j<composite.size(); j+=i){
                composite[j] = true;
            }
        }
    }
}

void Primes::expand_sieve(){
    uint32_t old_size = composite.size();
    composite.resize(old_size + expand_size);
    calc_primes(old_size);
}
