#include <iostream>
#include <string>

#include "Animal.h"

using namespace std;



Animal::Animal(string n, int v) {

    this->name = n;
    this->volume = v;

    this->animalID = index;
    index++;


};

void Animal::set_name(string _name){

    this->name = _name;

};


void Animal::set_volume(int _volume){

    this->volume = _volume;

};

int Animal::get_volume(){

    return volume;

};

int Animal::get_animalID(){

    return animalID;

};