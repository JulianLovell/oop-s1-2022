#include <iostream>
#include <string>

#include "Animal.h"
#include "hunter.h"
#include "vegie.h"
#include "zoo.h"

using namespace std;

int main(){

    return 0;

}


#include <iostream>
#include <string>

#include "Animal.h"

using namespace std;

class hunter : public Animal{
    private:

    int kills;
    static int nextID;

    public:

    hunter(string n, int v);

    string get_name();

    void set_kills(int _kills);
    int get_kills();

};


#include <iostream>
#include <string>

#include "hunter.h"
#include "Animal.h"

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



#ifndef ZOO_
#define ZOO_

#endif