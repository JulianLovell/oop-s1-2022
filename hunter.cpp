#include <iostream>
#include <string>

#include "hunter.h"

using namespace std;

int hunter :: nextID = 1000;

hunter :: hunter(string n, int v) : Animal(n,v) {
    int nextID = hunter :: nextID++;
    int kills = 0;
}

string hunter::get_name(){

    return "Hunter" + name;

};

void hunter::set_kills(int _kills){

  kills = _kills;

};

int hunter::get_kills(){

  return kills;

};
