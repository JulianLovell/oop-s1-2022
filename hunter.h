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