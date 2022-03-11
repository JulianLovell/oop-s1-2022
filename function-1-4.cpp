#include <iostream>

void print_scaled_matrix(int array[3][3],int scale) {

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            array[i][j] = array[i][j]*scale;

        }

    }

    std::cout << array[0][0] << " " << array[0][1] << " " << array[0][2] << std::endl << array[1][0] << " " << array[1][1] << " " << array[1][2] << std::endl << array[2][0] << " " << array[2][1] << " " << array[2][2] << std::endl;

}