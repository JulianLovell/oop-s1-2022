#include <iostream>
#include <string>

#include "zoo.h"
#include "vegie.h"
#include "hunter.h"
#include "Animal.h"

using namespace std;

zoo :: zoo(string n,int cows,int lions){
    
  name = n;
  
  Animals = new animal*[number_of_animals];
  
  for (i = 0; i < cows; i++){
      
    Animals[i] = new vegie(Daisy, 100);  
      
  };
  
  for (i=0; i < lions; i++){
      
    Animals[i] = new hunter(Clarence, 50);  
      
  };
    
    string zoo::get_name(){
        
        return name;
        
    };
    
    int zoo::get_number_of_animals(){
        
        return number_of_animals;
        
    };
    
    Animal** zoo::get_animals(){
        
      return Animals;  
        
    };
    
};