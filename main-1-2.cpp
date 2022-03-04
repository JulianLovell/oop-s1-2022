#include <iostream>

extern double average(int array[], int n);

int main() {
    int array[5] = {4,5,6,8,8};
    std::cout << "The number is: " << average(array, 5) << std::endl;
    return 0;
}