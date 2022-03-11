#include <iostream>

int diagonal(int array[4][4]) {

    int diagonal = 0;

for (int i = 0; i < 4; i++) {

    for (int j = 0; j < 4; j++) {

        if (i == j) {
            diagonal = diagonal + array[i][j];

        }
    }
}

    return diagonal;

}