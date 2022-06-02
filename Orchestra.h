#include <iostream>
#include <string>

#include "Musician.h"

using namespace std;

class Orchestra{
    public:
    
    int size;
    Musician *members;
    int index;
    
    Orchestra();
    Orchestra(int size);
    
    int get_current_number_of_members();
    bool has_instrument(string instrument); 
    bool add_musician(Musician new_musician);
    Musician *get_members();
    
    ~Orchestra();
    
};