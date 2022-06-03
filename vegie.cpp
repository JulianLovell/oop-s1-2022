#include <iostream>
#include <string>

#include "vegie.h"
#include "Animal.h"

using namespace std;

int vegie :: nextID = 100;

vegie :: vegie(string n,int v) : Animal(n, v) {
    
    int nextID = vegie :: nextID++;
    string favourite_food = "grass";
    
};

string vegie::get_name(){
    
  return "Safe: " + name;  
    
};

void vegie::set_favourite_food( string _favourite_food){
    
    favourite_food = _favourite_food;
    
};

string vegie::get_favourite_food(){
    
  return favourite_food;  
    
};