#include <iostream>

void printer(int array[10][10]) {

    int i;
    int j;

    for (i = 0; i < 10; i++) {

        for (j = 0; j < 10; j++) {

        std::cout << array[i][j] << std::endl;

        if (i == 10) {

            std::cout << std::endl;

        }

        }

    }

}