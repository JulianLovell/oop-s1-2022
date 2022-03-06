#include <iostream>

bool descending(int array[], int n) {
    int current = array[0];
    bool descending = false;

    for (int i = 1; i < n; i++) {
        if (current > array[i]) {
            current = array[i];
            descending = true;
        } else {
            descending = false;
            break;
        }
    }
    return descending;
}