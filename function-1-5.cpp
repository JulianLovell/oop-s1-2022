#include <iostream>

int size_of_array_arr(){

    int *arr = new int[3];

    int size_of_array_arr = sizeof(arr[0])*3;

    return size_of_array_arr;

}

