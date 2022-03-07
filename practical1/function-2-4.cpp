#include <iostream>

bool ascending(int array[], int n) {
    int current = array[0];
    bool ascending = false;

    for (int i = 1; i < n; i++) {
        if (current < array[i]) {
            current = array[i];
            ascending = true;
        } else {
            ascending = false;
            break;
        }
    }
    return ascending;
}