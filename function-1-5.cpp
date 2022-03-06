#include <iostream>

int count_even(int number) {
    number = 0;
    int user_number;
    int start_number;
    int i;
    std::cout << "Enter a number: ";
    std::cin >> user_number;
    start_number = 1;
    i = start_number;
    for (i = start_number; i <= user_number; i++) {
        if (i%2 == 0){
            ++number;
        }
    }
    std::cout << "The amount of even numbers between 1 and your number: " ;
    return number;
}