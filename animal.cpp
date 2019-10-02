#include <iostream>
#include "persona.h"

class Animal { // Base class
  private:  // Access specifier
        std::string name; // atribute (Pointer to a chart)
        std::string specie; // atribute (Pointer to a chart)

  public: // Access specifier

    Animal(std::string nam, std::string speci){
        // TODO: no entiendo muy bien lo de los nombres, se tienen que
        //       llamar diferente para poder diferenciarlos pero son lo mismo.
        name = nam;
        name = speci;
    }

    void printAnimalInfo();
    void printSuperPowers();
            //flies, poisonous, swims, adorable

    ~Animal();
}




## REPTILE, mammal, bird:
bool flies
bool poisonous
bool