#include <iostream>

int count_next_element_matches(int vals[10], int length){

    int count = 0;

    for (int i; i < 10; i++){

        if (vals[i] == vals[i + 1]){

            count = count + 1;

        }

    }

    std::cout << count;

    return 0;

}