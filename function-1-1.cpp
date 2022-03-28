#include <iostream>

int *readNumbers(){

    int userinput = 0;
    int *array = new int[10];

    for (int i = 0; i < 10; i++){

    std::cout << "please enter a number: " << std::endl;

    std::cin >> userinput;

    *(array + i) = userinput;

    }

    return array;

}

void printNumbers(int *numbers,int length) {

    for (int j = 0; j < 10; j++){

        std::cout << j << " " << numbers[j] << std::endl;

    }

}