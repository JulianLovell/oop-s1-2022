#include <iostream>

extern int count_even(int number);

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number < 1) {
        std::cout << "0";

    } else {
    std::cout << "The amount of even numbers between 1 and your number is: " << count_even(number) << std::endl;
    }
    return 0;
}