#include <iostream>

extern int count_even(int number);

int main() {
    int number;
    std::cout << count_even(number) << std::endl;
    return 0;
}