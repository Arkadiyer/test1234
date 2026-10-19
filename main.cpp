#include "funk.h"

#include <cassert>
#include <iostream>

int main() {
    assert(is_prime(3) == false);
    assert(gcd(36, 24) == 12);
    assert(factorial(3) == 2);

    std::cout << "OK\n";
}
