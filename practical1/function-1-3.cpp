#include <iostream>
#include <vector>

int count(int array[], int n, int number) {
   int count = 0;
   for(int i = 0; i < n; i++){
      if (array[i] == number) {
         count = count + 1;
      }
   }
   if (n < sizeof(array)) {
      count = 0;
   }
   return count;
}