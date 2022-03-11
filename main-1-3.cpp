#include <iostream>

extern void count_numbers(int array[4][4]);

int main() {

    int matrix[4][4] {
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1},
        };

        count_numbers(matrix);

        return 0;

}