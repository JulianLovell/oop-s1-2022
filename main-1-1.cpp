#include <iostream>

extern int identity(int array[10][10]);

int main() {

    int matrix[4][4] {{1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}};

    std::cout << "The sum of the diagonal numbers is: " << diagonal(matrix) << std::endl;

    return 0;

}