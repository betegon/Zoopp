#include <iostream>

// TODO: finish mammal, bird and reptile class
// TODO: Once classes are finished, refactor to .h and .cpp files
// TODO: Careful with private attributes, as you cannot access them out of the class
//       so doing perro->name will throw an error.

class Animal { // Base class
  private:  // Access specifier
        std::string name; // atribute (Pointer to a chart)
        std::string specie; // atribute (Pointer to a chart)

  public: // Access specifier

    Animal(std::string nam, std::string speci){
        // TODO: no entiendo muy bien lo de los nombres, se tienen que
        //       llamar diferente para poder diferenciarlos pero son lo mismo.
        name = nam;
        specie = speci;
        std::cout<<"Constructor\n"<<std::endl;

    }

    void printAnimalInfo(){
        std::cout<< name <<"\n" << specie <<"\n"<< std::endl;
        
    }
    void printSuperPowers(){
        std::cout<<"SuperPowers\n" << std::endl;
    }
            //flies, poisonous, swims, adorable

    ~Animal(){
        std::cout<<"Destructor:\n" << std::endl;
    }
};

//REPTILE, mammal, bird:
//bool flies
//bool poisonous
//bool

// Derived class from Animal
// Mammal publicly inheriting Animal
class Mammal:public Animal{
  private:
    bool domestic;
    bool horns;
  public:
    std::string skill; 
    
    /*VOY POR AQUÍ, ME QUEDA ENTENDER COMO CREO UN CONSTRUCTOR EN LA CLASE DERIVADA,
    QUE COJA LOS MISMOS ARGUMENTOS QUE LA CLASE BASE Y 1 MÁS
    */
   Mammal(std::string name,std::string specie, std::string skll) : Animal(name, specie){
        skill = skll;
    }

    void setHorns(bool h){
        horns = h;
    } 
    void setDomestic(bool d){
        domestic = d;
    }

};



int main (){
	std::cout<<"Before the constructor"<<std::endl;
	// Good practice to initialize pointer variable to NULL
    Animal *dog = NULL; 
    // Create new Animal
    dog = new Animal("dog","mammal");
	
    dog->printAnimalInfo();
    dog->printSuperPowers();

    std::cout<<"Before destructor"<<std::endl;
    
    // Delete object
    // Do not forget to delete it
    // This is why unique_ptr or shared_ptr should be used 
    delete dog;
    
    std::cout<<"After destructor"<<std::endl;


    Mammal *perrete1 = NULL; 
    // Create new Animal
    perrete1 = new Mammal("dog","mammal","volador");
	
    perrete1->printAnimalInfo();
    perrete1->printSuperPowers();
    
    std::cout<<"Atributos del perrete1\n"<< perrete1->skill <<  std::endl;


	return 0;

}