# C++ Zoo

A first approach to C++ object oriented principle, using a Zoo as an example.

## Objectives
* Learn c++
    * Object oriented architecture
    * Inheritance

## Problem description

*  Classes that permit show the information of each animal in a zoo
* To achieve this, use Classes and inheritance
* Zoo: Mammals, birds and reptiles.
* For each animal:
    * Store general information 
    * Store specific information
    e.g. (name, specie, flies, swims, poisonous, dangerous, etc.)

## Idea

* Generate a class "animal" and classes for each kind of animal.
* When generating "animal" class use .h and .cpp files.
* Rest of the classes using only .h files.
* It will be necessary to include personal (== private) information in each class (e.g. only reptiles can be poisonous)
* Each class will have two functions.
* Constructor: it will be given all the information about the animal. NOTE: remember, constructors of direved class should call base class constructor.
* Function that prints all animal information
* Classes Mammal, bird and reptile, should call the corresponding function of the class animal.
* Create a main function that creates some animals and prints their information.

## Project structure
animal.h
animal.cpp
bird.h
mammal.h
reptile.h



## .h files

The .h or .hpp files are header files that usually are used for DECLARATION of the classes, functions and variables that are used in a program.

## .cpp files

The .cpp or .cxx files are the implementation (DEFINITION) of the functions and classes that were declarated in the .h files.

## .h and .cpp example

For example, in the .h file you have a class definition of "Animal". This class has two functions "printInfo()" and "printSuperPowers()". This is a promise that the objects of the type "Animal" will have the two functions mentioned above.

The .cpp files are the actual implementation of the promises made in the .h files and is where the actual execution happens.


