#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
{
    std::cout << "-----Subject test started!-----" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    std::cout << "-----Subject test finished!-----" << std::endl;

    std::cout << "-----Array test started!-----" << std::endl;
    const Animal* animals[10];
    int k = 0;
    while (k < 10)
    {
        if (k < 5)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
        k++;
    }
    k = 0;
    while (k < 10)
    {
        delete animals[k];
        k++;
    }

    std::cout << "-----Array test finished!-----" << std::endl;
}
{
    std::cout << "-----Brain test started!-----" << std::endl;
    Dog dog;
    dog.setIdea(0 , "I'll eat bone!");
    dog.setIdea(1 , "I hate cats!");
    std::cout << dog.getIdea(0) << std::endl;

    Cat cat;
    cat.setIdea(0 , "Give me food!");
    std::cout << cat.getIdea(0) << std::endl;
    std::cout << "-----Brain test finished!-----" << std::endl;
}
{
    std::cout << "-----Deep copy test-----" << std::endl;
    Dog *dog = new Dog();
    Dog *dog2 = new Dog();

    // dog = dog2; Here, you perform the operation using the address and copy the address, then you lose the address.If you add this here and try to delete dog and after dog2 you will get segfault!
    dog2->setIdea(0 , "I'm hungry!");
    *dog = *dog2;
    std::cout << "Dog's idea ->" << dog->getIdea(0) << std::endl;

    delete dog;
    delete dog2;
}
{
    std::cout << "-----Abstruct class test started!-----" << std::endl;
    // -----Abstruct class test-----
    // Animal* newAnimal = new Animal(); ---> You can't make object from Animal class!
    // Animal newAnimal;

    Animal *dog = new Dog(); // Allowed!
    delete dog;
    std::cout << "-----Abstruct class test finished!-----" << std::endl;
}
}