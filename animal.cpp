#include <iostream>
#include "animal.h"

Animal::Animal(std::string nam, std::string animalClas, bool dangerou){
    name = nam;
    dangerous = dangerou;
    animalClass = animalClas;
}

void Animal::printAnimalInfo(){
    std::cout<<"\nGENERAL INFORMATION: \n"<<"name: "<< name <<"\n"\
              <<"Animal Class: "<< animalClass <<"\n"\
              <<"Dangerous: "<< dangerous <<"\n";
}

void Animal::isDangerous(){
    if (dangerous){
    std::cout <<"\nThis animal is dangerous.\n"<< std::endl;
    } else{ 
        std::cout <<"\nThis animal is not dangerous.\n"<< std::endl;
    }
}