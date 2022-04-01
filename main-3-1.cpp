#include <iostream>

extern int count_next_element_matches(int vals[10], int length);

int main() {

    int vals[10] = {1,2,2,2,3,1,1,5,2,2};

    int length = 10;

    count_next_element_matches(vals, length);

    return 0;

}