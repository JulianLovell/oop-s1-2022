#include <iostream>
#include <string>

#include "Animal.h"

using namespace std;

class vegie : public Animal{
    
    private:
    
    string favourite_food;
    static int nextID;
    
    public:
    
    vegie(string n,int v);
    
    string get_name();
    
    void set_favourite_food( string _favourite_food);
    string get_favourite_food();
    
    
};