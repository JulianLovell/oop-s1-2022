#include <iostream>
#include <string>

#include "Animal.h"

using namespace std;

class zoo{
    private:
    
    string name;
    int number_of_animals;
    Animal **Animals;
    
    public:
    zoo(string n,int cows,int lions);
    
    string get_name();
    int get_number_of_animals;
    Animal** get_animals;
    
};