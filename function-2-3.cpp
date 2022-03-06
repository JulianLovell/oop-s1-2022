#include <iostream>

double average(int array[], int n) {
    double result = 0;
    if (n < 1) {
    }
    if (n >= 1) {
        double total = 0;
        for (int i = 0; i < n; i++) {
            total = total + array[i];
        }
        result = total/n;
    }
    return result;
}
