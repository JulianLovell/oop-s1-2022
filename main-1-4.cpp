#include <iostream>

extern void cpyda(double *old_array,double *new_array,int length);

int main(){

    int length = 3;

    double old_array[3] = {1, 2, 3};

    double new_array[3];

    cpyda(old_array, new_array, length);

    return 0;

}