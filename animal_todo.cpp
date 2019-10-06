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
        std::cout<< name <<"\n" << animalClass <<"\n"<< dangerous <<"\n"<< std::endl;
        
    }
    void isDangerous(){
        if (dangerous){
        std::cout <<"\n This animal is dangerous\n"<< std::endl;
        }        
        std::cout <<"\n This animal is not dangerous\n"<< std::endl;
    }
            //flies, poisonous, swims, adorable

    ~Animal();
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
    
    /*VOY POR AQUÍ, ME QUEDA ENTENDER COMO CREO UN CONSTRUCTOR EN LA CLASE DERIVADA,
    QUE COJA LOS MISMOS ARGUMENTOS QUE LA CLASE BASE Y 1 MÁS
    */
   Mammal(std::string name, std::string animalClas, bool dangerous, std::string skll) : Animal(name, animalClass, dangerous){
        skill = skll;
    }

    void setHorns(bool h){
        horns = h;
    } 
    void setDomestic(bool d){
        domestic = d;
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
    /*VOY POR AQUÍ, ME QUEDA ENTENDER COMO CREO UN CONSTRUCTOR EN LA CLASE DERIVADA,
    QUE COJA LOS MISMOS ARGUMENTOS QUE LA CLASE BASE Y 1 MÁS
    */
   Reptile(std::string name, std::string animalClas, bool dangerous) : Animal(name, animalClass, dangerous){
    }

    void setLegs(bool l){
        legs = l;
    } 
    void setLongeTongue(bool l){
        longTongue = l;
    }
};





int main (){
	std::cout<<"Before the constructor"<<std::endl;
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
    
    Mammal *perrete1 = NULL; 
    // Create new Animal
    perrete1 = new Mammal("dog","mammal",false,"volador");
	
    perrete1->printAnimalInfo();
    perrete1->isDangerous();
    
    std::cout<<"Atributos del perrete1\n"<< perrete1->skill <<  std::endl;


	return 0;

}