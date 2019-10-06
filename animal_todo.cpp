#include <iostream>

// TODO: Mammals, reptiles and birds to  change printAnimalInfo() method from Animal to show all
//       particular info of each class(mammals, reptiles and birds)
// TODO: finish mammal, bird and reptile class
// TODO: Once classes are finished, refactor to .h and .cpp files
// TODO: Careful with private attributes, as you cannot access them out of the class
//       so doing perro->name will throw an error.

class Animal { // Base class
  private:  // Access specifier
        

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
        std::cout <<"\n This animal is dangerous\n"<< std::endl;
        }        
        std::cout <<"\n This animal is not dangerous\n"<< std::endl;
    }
            //flies, poisonous, swims, adorable

    ~Animal(){

    };
};

// Derived class from Animal
// Mammal publicly inheriting Animal
class Mammal:public Animal{
  private:
    // TODO: check for private attributes / methods.
  public:
    bool domestic;
    bool horns;
    std::string skill; 
    
 
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
    } 
    void setDomestic(){
        domestic = true;
    }
};



// Derived class from Animal
// Mammal publicly inheriting Animal
class Reptile:public Animal{
  private:
    // TODO: check for private attributes / methods.
  public:
    bool legs;
    bool longTongue;
    
 
   Reptile(std::string name, std::string animalClass, bool dangerous) : Animal(name, animalClass, dangerous){
        legs = false;
        longTongue = false;
    }
    
    void printAnimalInfo(){
        Animal::printAnimalInfo();
        // first show general information
        std::cout<<"\nSPECIFIC INFORMATION: \n"\
                 <<"Legs: "<< legs <<"\n"\
                 <<"LongTongue: "<< longTongue <<"\n"\
                 << std::endl;
    }
    void setLegs(){
        legs = true;
    } 
    void setLongeTongue(){
        longTongue = true;
    }
};






int main (){
	
    // Good practice to initialize pointer variable to NULL
    Animal *dog = NULL; 
    // Create new Animal
    dog = new Animal("dog","mammal",false);
	
    dog->printAnimalInfo();
    dog->isDangerous();

    // Delete object
    // Do not forget to delete it
    // This is why unique_ptr or shared_ptr should be used 
    delete dog;
    
    Mammal *doggy = NULL; 
    Reptile *snaky = NULL;
    
    // Create new Animal
    doggy = new Mammal("Doggy","Mammal",false,"jumper");
	snaky = new Reptile("Python","Reptile",true);
    
    doggy->printAnimalInfo();
    doggy->isDangerous();
    doggy->setDomestic();
    doggy->printAnimalInfo();
    delete doggy;

    snaky->printAnimalInfo();
    snaky->isDangerous();
    snaky->setLongeTongue();
    snaky->printAnimalInfo();
    delete snaky;
	return 0;

}