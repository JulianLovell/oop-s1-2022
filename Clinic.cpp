#include <iostream>

Clinic();                            // default constructor
Clinic(int max_size, std::string name);  // constructor with given Clinic size and 
                                              // Clinic name

// returns the number of cages currently in the the clinic
int get_current_number_of_cages(); 

std::string get_name();                // returns the clinics's name
Cage * get_cages();        // returns the array of cages currently in the clinic

// returns true and adds new cage to the clinic if the clinic is not full
// otherwise returns false
bool add_cage(Cage new_cage);

~Clinic(); // destructor