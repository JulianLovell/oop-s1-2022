#include <iostream>
#include <string>

using namespace std;

class Animal{
    protected:

    string name;
    int volume;
    int animalID;
    int index = 0;

    public:

    Animal(string n, int v);

    void set_name(string _name);
    virtual string get_name() = 0;

    void set_volume(int _volume);
    int get_volume();

    int get_animalID();



};