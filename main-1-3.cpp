#include <iostream>

extern int count(int array[], int n, int number);

int main(){
   int array[] = {4,5,6,8,8};
   int n = 8;
   int number = sizeof(array)/sizeof(array[0]);
   std::cout <<"Frequency of number in array: "<< count(array, n, number);
   return 0;
}