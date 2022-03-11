#include <iostream>

extern void print_summed_matrices(int array1[3][3],int array2[3][3]);

int main() {

    int array1[3][3] {
        {0,1,2},
        {3,4,5},
        {6,7,8},
        };

    int array2[3][3] {
        {0,1,2},
        {3,4,5},
        {6,7,8},
        };

    print_summed_matrices(array1, array2);

}