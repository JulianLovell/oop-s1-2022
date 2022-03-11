#include <iostream>

extern int diagonal(int array[4][4]);

int main() {

    int matrix[4][4] {{1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}};

    std::cout << "The sum of the diagonal numbers is: " << diagonal(matrix) << std::endl;

    return 0;

}