#include <iostream>

int *readNumbers(){

    int userinput = 0;
    int *array = new int[10];

    for (int i = 0; i < 10; i++){

    std::cout << "please enter a number: " << std::endl;

    std::cin >> userinput;

    *(array + i) = userinput;

    }

    return array;

}


bool equalsArray(int *numbers1,int *numbers2,int length)