#ifndef REPTILE_H
#define REPTILE_H

#include <iostream>
#include "animal.h"

// Derived class from Animal
// Reptile publicly inheriting Animal
class Reptile:public Animal{
  private: // Access specifier
    bool legs;
    bool longTongue;
    
  public: // Access specifier
    Reptile(std::string name, std::string animalClass, bool dangerous) : Animal(name, animalClass, dangerous){
        legs = false;
        longTongue = false;
    }
    
    void printAnimalInfo(){
        // first show general Animal information
        Animal::printAnimalInfo();
        std::cout<<"\nSPECIFIC INFORMATION: \n"\
                 <<"Legs: "<< legs <<"\n"\
                 <<"LongTongue: "<< longTongue <<"\n"\
                 << std::endl;
    }
    
    void setLegs(){
        legs = true;
        std::cout <<"legs set.\n"<< std::endl;

    } 
    
    void setLongeTongue(){
        std::cout <<"Tongue set.\n"<< std::endl;
        longTongue = true;
    }
};
#endif