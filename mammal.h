#ifndef MAMMAL_H
#define MAMMAL_H

#include <iostream>
#include "animal.h"

// Derived class from Animal
// Mammal publicly inheriting Animal
class Mammal:public Animal{
  private: // Access specifier
    bool domestic;
    bool horns;
    std::string skill; 
  
  public: // Access specifier
   Mammal(std::string name, std::string animalClass, bool dangerous, std::string skll) : Animal(name, animalClass, dangerous){
        skill = skll;
        horns = false;
        domestic = false;
    }
    
    void printAnimalInfo(){
        Animal::printAnimalInfo();
        // first show general information
        std::cout<<"\nSPECIFIC INFORMATION: \n"\
                 <<"Skill: "<< skill <<"\n"\
                 <<"Horns: "<< horns <<"\n"\
                 <<"Domestic: "<< domestic <<"\n"<< std::endl;
    }
    
    void setHorns(){
        horns = true;
        std::cout <<"Horns set.\n"<< std::endl;

    } 
    
    void setDomestic(){
        domestic = true;
        std::cout <<"Domestic set.\n"<< std::endl;

    }
};
#endif