#include <iostream>

int Cage

Cage(); // a default constructor ID number is zero and occupant name is an empty string ""
Cage(int newNumber, std::string newName);// a constructor that takes the ID number and occupant name
std::string get_name(); // returns the name of the cage occupant
int get_ID_number();  // returns the cage's ID number
~Cage(); //destructor      