#include <iostream>
#include <string>

#include "Musician.h"

using namespace std;


Musician::Musician() {
    
    this->instrument = "null";
    this->experience = 0;
    
    
};

Musician::Musician(string instrument, int experience){
    
    this->instrument = instrument;
    this->experience = experience;
    
};


string Musician::get_instrument(){
    
    return instrument;
    
};

int Musician::get_experience(){
    
    return experience;
    
};