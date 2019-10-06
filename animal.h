#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal { // Base class
  public: // Access specifier
    bool dangerous; // atribute 
    std::string name; // atribute 
    std::string animalClass; // atribute
    
    Animal(std::string nam, std::string animalClas, bool dangerou);
    void printAnimalInfo();
    void isDangerous();
    ~Animal(){};
};
#endif