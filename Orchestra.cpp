#include <iostream>
#include <string>

#include "Orchestra.h"

using namespace std;


Orchestra::Orchestra(){

    this->size = 0;
    this->index = 0;

    members = new Musician[size];

};

Orchestra::Orchestra(int size) {
    this->size = size;
    this->index = 0;

    members = new Musician[size];

};

int Orchestra::get_current_number_of_members() {

  return index;

};

bool Orchestra::has_instrument(string instrument) {

    for (int i = 0; i < index; i++) {

        if(members[i].get_instrument() == instrument){

            return true;
        }

    }
    
    return false;
};


bool Orchestra::add_musician(Musician new_musician) {

    if(index<size) {

    members[index] = new_musician;

    index++;

    return true;

    } else {
        return false;
    };


};

Musician *Orchestra::get_members() { return members; };

Orchestra::~Orchestra() { };