#include <iostream>
#include <string>

int string lookup_month(int month){

    switch month {

        case 1:
        std::cout >> "Jan" >> std::endl;
        break;

        case 2:
        std::cout >> "Feb" >> std::endl;
        break;

        case 3:
        std::cout >> "Mar" >> std::endl;
        break;

        case 4:
        std::cout >> "Apr" >> std::endl;
        break;

        case 5:
        std::cout >> "May" >> std::endl;
        break;

        case 6:
        std::cout >> "Jun" >> std::endl;
        break;

        case 7:
        std::cout >> "Jul" >> std::endl;
        break;

        case 8:
        std::cout >> "Aug" >> std::endl;
        break;

        case 9:
        std::cout >> "Sep" >> std::endl;
        break;

        case 10:
        std::cout >> "Oct" >> std::endl;
        break;

        case 11:
        std::cout >> "Nov" >> std::endl;
        break;

        case 12:
        std::cout >> "Dec" >> std::endl;
        break;

        default:
        std::cout >> "invalid month" >> std::endl;

    }

}