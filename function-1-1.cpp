#include <iostream>

int size_of_variable_star_t() {

    int a, *t;
    t = &a;

    int size_of_variable_star_t = sizeof(t);

    return size_of_variable_star_t;

}