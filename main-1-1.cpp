#include <iostream>

extern int add(int lhs, int rhs);

int main() {
    int result = add(1, 2);
    std::cout << result << std::endl;
}