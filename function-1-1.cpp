#include <iostream>

void copy_2d_strings(std::string first[][2], std::string second[][2], int n){


    for (int i = 0; i < n; i++){

        for (int j = 0; j < n; j++){

            second[i][j] = first[i][j];

        }

    }

}