#include <iostream>

extern int sumtwo(int array[], int secondarray[], int n);

int main() {
    int array[5] = {4,5,6,7,8};
    int secondarray[5] = {1,2,3,4,5};
    std::cout << "The number is: " << sumtwo(array, secondarray, 5) << std::endl;
    return 0;
}