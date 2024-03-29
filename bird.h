#ifndef BIRD_H
#define BIRD_H

#include <iostream>
#include "animal.h"

// Derived class from Animal
// Bird publicly inheriting Animal
class Bird:public Animal{
  private:  // Access specifier
    bool fly;
    bool migratory;
    
  public: // Access specifier
    Bird(std::string name, std::string animalClass, bool dangerous,bool migrator) : Animal(name, animalClass, dangerous){
        fly = false;
        migratory = migrator;
    }
    
    void printAnimalInfo(){
        // first show general Animal information
        Animal::printAnimalInfo();
        std::cout<<"\nSPECIFIC INFORMATION: \n"\
                 <<"Fly: "<< fly <<"\n"\
                 <<"Migratory: "<< migratory <<"\n"\
                 << std::endl;
    }
    
    void setMigratory(){
        migratory = true;
        std::cout <<"Migratory set.\n"<< std::endl;
    } 

    void sing(){
     std::cout << "\nPeep, Peep, Peep."<< std::endl;   
    }
};
#endif