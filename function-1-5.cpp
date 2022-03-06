#include <iostream>

int count_even(int number) {
    int count_even = 0;
    for (int i = 1; i <= number; i++) {
        if (i%2 == 0) {
            count_even++;
        }
    }
    return count_even;
}