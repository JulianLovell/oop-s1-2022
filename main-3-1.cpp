#include <iostream>

extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;

int main(){

    int length = 10;

    int *numbers = readNumbers();
    equalsArray(numbers1, numbers2, length) ;

}