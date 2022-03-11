#include <iostream>
#include <math.h>

int binary_to_number(int binary_digits[], int number_of_digits) {

    int x = 0;
    int binary_to_number = 0

    for (int i = number_of_digits -1; i >= 0; i--) {

        binary_to_number = binary_to_number + (binary_digits[i]*(pow(2, x)));
        x++;

    }

    return binary_to_number;

}

