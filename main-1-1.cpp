#include <iostream>

extern void copy_2d_strings(std::string first[3][2], std::string second[3][2], int n);

int main(){

    int n = 3;

    std::string first[3][2] = {
        {"chicken", "chicken"},
        {"chicken", "chicken"},
        {"chicken", "chicken"}
    };

    std::string second[3][2];

    copy_2d_strings(first, second, n);

}