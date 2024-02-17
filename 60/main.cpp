#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "primes.h"

bool is_large_prime(Primes& P, int n){
    int p = 2;
    int i = 0;

    while(p*p <= n){
        if((n % p) == 0){
            return false;
        }
        ++i;
        p = P.get_prime(i);
    }
    return true;
}

int get_val(Primes& P, int n){
    return P.get_prime(n);
}

static const int po10[10] = {
    1, 10, 100, 1000, 10000, 100000, 1000000,
    10000000, 100000000, 1000000000
};

int count_digits(int n){
    int i;
    for(i=1; po10[i]<=n; ++i);
    return i;
}

bool is_edge(Primes& P, int n, int m){
    int q = get_val(P, n);
    int p = get_val(P, m);

    int cat = p*po10[count_digits(q)] + q;
    if(!is_large_prime(P, cat)){
        return false;
    }

    cat = q*po10[count_digits(p)] + p;
    return is_large_prime(P, cat);
}

int main (int argc, char *argv[]) {
    Primes P;
    static const int N = 21474;
    for(int i=4; get_val(P, i) < N; ++i){
        for(int j=3; j<i; ++j){
            if(!is_edge(P,i,j)) continue;
            for(int k=2; k<j; ++k){
                if(!is_edge(P,i,k) ||
                   !is_edge(P,j,k)) continue;
                for(int m=0; m<k; ++m){
                    if(!is_edge(P,i,m) ||
                       !is_edge(P,j,m) || !is_edge(P,k,m)) continue;
                    for(int n=0; n<m; ++n){
                        if(!is_edge(P,i,n) || !is_edge(P,j,n) ||
                           !is_edge(P,k,n) || !is_edge(P,m,n)) continue;
                        int solution = get_val(P, i) + get_val(P, j) + get_val(P, k)
                                     + get_val(P, m) + get_val(P, n);
                        printf("The solution for the problem 60 is -> %d\n", solution);
                        return 0;
                    }
                }
            }
        }
    }
    printf("No solution\n");
    return 0;
}   
