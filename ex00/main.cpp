#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " -> ";
    j->makeSound();
    std::cout << i->getType() << " -> ";
    i->makeSound();
    std::cout << meta->getType() << " -> ";
    meta->makeSound();
    delete meta;
    delete i;
    delete j;

    std::cout << "-----------------" << std::endl;

    const WrongAnimal* Animal = new WrongAnimal(); 
    const WrongAnimal* Cat = new WrongCat();

    std::cout << Animal->getType() << " -> ";
    Animal->makeSound();
    std::cout << Cat->getType() << " -> " ;
    Cat->makeSound();

    delete Animal;
    delete Cat;
}