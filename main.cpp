#include "animal.h"
#include "mammal.h"
#include "reptile.h"
#include "bird.h"

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