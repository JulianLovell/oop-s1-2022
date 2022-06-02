#include <iostream>
#include <string>

using namespace std;

class Musician {
    public:
    
    string instrument;
    int experience;
    
    Musician(string instrument, int experience);
    Musician();
    
    string get_instrument();
    int get_experience(); 
    
};