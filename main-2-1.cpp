#include <iostream>
#include <iostream>

extern void print_as_binary(std::string decimal_number);

int main() {

    std::string decimal_number = "100.86";

    print_as_binary(decimal_number);

    return 0;

}
