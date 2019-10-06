#ifndef ANIMAL_H
#define ANIMAL_H



class Animal { // Base class
   public: // Access specifier
        bool dangerous; // atribute 
        std::string name; // atribute 
        std::string animalClass; // atribute

    Animal(std::string nam, std::string animalClas, bool dangerou){
        // TODO: no entiendo muy bien lo de los nombres, se tienen que
        //       llamar diferente para poder diferenciarlos pero son lo mismo.
        name = nam;
        dangerous = dangerou;
        animalClass = animalClas;
    }

    void printAnimalInfo(){
        std::cout<<"\nGENERAL INFORMATION: \n"<<"name: "<< name <<"\n"\
                 <<"Animal Class: "<< animalClass <<"\n"\
                 <<"Dangerous: "<< dangerous <<"\n";
    }
    void isDangerous(){
        if (dangerous){
        std::cout <<"\nThis animal is dangerous\n"<< std::endl;
        } else{ 
            std::cout <<"\nThis animal is not dangerous\n"<< std::endl;
        }
    }
            //flies, poisonous, swims, adorable

    ~Animal(){

    }
};


#endif