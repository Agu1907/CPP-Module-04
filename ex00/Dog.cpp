#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    std::cout << "Dog default constructor called!" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
    std::cout << "Cat copy constructor called!" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignment operator called!" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Hav hav hav hav hav!" << std::endl;
}