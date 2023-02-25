// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (value == 0) { return false; }
    int k = 0;
    for (int i = 2; i < value; i++) {
        if (value % i != 0) {
            continue;
        } else {
            k = 1;
        }
    }
    if (k == 1) { return false; }
    else { return true; }
}

uint64_t nPrime(uint64_t n) {
    int k = 0;
    int chislo = 0;
    while (true) {
        k++;
        if (checkPrime(k)) {
            chislo += 1;
        }
        if (n == chislo) {
            return k;
        }
    }
}

uint64_t nextPrime(uint64_t value) {
    while (true) {
        value += 1;
        if (checkPrime(value)) {
            return value;
        } else {
            continue;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    int k = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            k += i;
        } else {
            continue;
        }
    }
    return k;
}
