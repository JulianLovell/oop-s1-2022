#include <iostream>
#include <string>
#include <bitset>

void print_as_binary(std::string decimal_number) {

    int number = stoi(decimal_number);
    int array[32];

    int i = 0;

    while (number > 0) {

        array[i] = number%2;
        number = number/2;
        i++;

    }

    for(int j = i - 1; j>= 0; j--) {

        std::cout << array[j];

    }

    std::cout << std::endl;

}