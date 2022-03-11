#include <iostream>
#include <iostream>

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main() {

    int array[7] = {1,0,1,0,0,1,1};
    int number_of_digits = 7;

    std::cout << binary_to_number(array, number_of_digits) << std::endl;

    return 0;

}