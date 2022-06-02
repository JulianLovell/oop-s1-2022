#include <iostream>
#include <string>

#include "Orchestra.h"

using namespace std;

int main() {

    Musician Julian;
    Musician Jack("MatthewsCock", 10);

    cout << Julian.get_instrument() << endl;
    cout << Jack.get_experience() << endl;
    
    Orchestra Cockmen(7);
    Cockmen.add_musician(Julian);
    Cockmen.add_musician(Jack);
    
    cout << Cockmen.has_instrument("MatthewsCock") << endl;
    Cockmen.get_members();
    
    return 0;

};
