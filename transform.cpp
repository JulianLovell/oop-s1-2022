#include <iostream>

void transform(int number, int base) {

    if (number < base) {
        std::cout << number;
        return;
    }

    int rem = number%base;
    transform(number/base, base);
    std::cout << rem;
}