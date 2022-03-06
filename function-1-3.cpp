#include <iostream>
using namespace std;

int count(int array[], int n, int number){
   int freq = 0;
   for(int i=0; i<number; i++){
      if(n==array[i]){
         freq++;
      }
   }
   return freq;
}