#include <iostream>

extern int count(int array[], int n, int number);

int main(){
   int array[4] = {4,5,6,8};
   int n = 8;
   std::cout <<"Frequency of number in array: "<< count(array, 4, 1) << std::endl;
   return 0;
}