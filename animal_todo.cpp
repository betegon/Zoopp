#include <iostream>

// TODO: Once classes are finished, refactor to .h and .cpp files

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
    ~Animal(){}
};

// Derived class from Animal
// Mammal publicly inheriting Animal
class Mammal:public Animal{
  private:
    bool domestic;
    bool horns;
    std::string skill; 
  public:

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


// Derived class from Animal
// Reptile publicly inheriting Animal
class Reptile:public Animal{
  private:
 
    bool legs;
    bool longTongue;
    
  public:

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


// Derived class from Animal
// Bird publicly inheriting Animal
class Bird:public Animal{
  private:
    bool fly;
    bool migratory;
    
  public:

    Bird(std::string name, std::string animalClass, bool dangerous,bool migrator) : Animal(name, animalClass, dangerous){
        fly = false;
        migratory = migrator;
    }
    
    void printAnimalInfo(){
        Animal::printAnimalInfo();
        // first show general information
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


int main (){	

    // Good practice to initialize pointer variable to NULL
    Bird *birdy = NULL; 
    Mammal *doggy = NULL; 
    Reptile *snaky = NULL;
    
    // Create new Animal
	snaky = new Reptile("Python","Reptile",true);
	birdy = new Bird("Hedwig","Bird",true, false);
    doggy = new Mammal("Doggy","Mammal",false,"jumper");

    // Doggy 
    doggy->printAnimalInfo();
    doggy->isDangerous();
    doggy->setDomestic();
    doggy->printAnimalInfo();
    // Delete object
    // Do not forget to delete it
    // This is why unique_ptr or shared_ptr should be used 
    delete doggy;
    

    // Snaky
    snaky->printAnimalInfo();
    snaky->isDangerous();
    snaky->setLongeTongue();
    snaky->printAnimalInfo();
    delete snaky;

    // Birdy
    birdy->printAnimalInfo();
    birdy->isDangerous();
    birdy->setMigratory();
    birdy->printAnimalInfo();
    birdy->sing();
    delete birdy;

	return 0;

}