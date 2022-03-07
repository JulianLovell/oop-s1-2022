#include <iostream>

int sumtwo(int array[], int secondarray[], int n) {
    int sum_of_two;
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

    int result_2 = 0;
    if (n < 1) {
    }
    if (n >= 1) {
        int total_2 = 0;
        for (int i = 0; i < n; i++) {
            total_2 = total_2 + secondarray[i];
        }
        result_2 = total_2;
    }

    sum_of_two = result + result_2;
    return sum_of_two;
}