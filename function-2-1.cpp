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


void hexDigits(int *numbers,int length){

    for (int i = 0; i < 10; i++){

        int number = numbers[i];

    switch(number){

        case 0:
        std::cout << i << " " << number << " 0" << std::endl;
        break;

        case 1:
        std::cout << i << " " << number << " 1" << std::endl;
        break;

        case 2:
        std::cout << i << " " << number << " 2" << std::endl;
        break;

        case 3:
        std::cout << i << " " << number << " 3" << std::endl;
        break;

        case 4:
        std::cout << i << " " << number << " 4" << std::endl;
        break;

        case 5:
        std::cout << i << " " << number << " 5" << std::endl;
        break;

        case 6:
        std::cout << i << " " << number << " 6" << std::endl;
        break;

        case 7:
        std::cout << i << " " << number << " 7" << std::endl;
        break;

        case 8:
        std::cout << i << " " << number << " 8" << std::endl;
        break;

        case 9:
        std::cout << i << " " << number << " 9" << std::endl;
        break;

        case 10:
        std::cout << i << " " << number << " A" << std::endl;
        break;

        case 11:
        std::cout << i << " " << number << " B" << std::endl;
        break;

        case 12:
        std::cout << i << " " << number << " C" << std::endl;
        break;

        case 13:
        std::cout << i << " " << number << " D" << std::endl;
        break;

        case 14:
        std::cout << i << " " << number << " E" << std::endl;
        break;

        case 15:
        std::cout << i << " " << number << " F" << std::endl;
        break;

        default:
        std::cout << i << " " << number << " your number is invalid" << std::endl;
    }

    }

}

