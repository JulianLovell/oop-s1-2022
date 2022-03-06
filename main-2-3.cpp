#include <iostream>

int sum_array(int array[], int n) {
    int result = 0;
    if (n < 1) {
    }
    if (n >= 1) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            total = total + array[i];
        }
        result = total;
    }
    return result;
}