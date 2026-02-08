#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
    std::cout << "Animal default constructor called!" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called!" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Animal copy assignment operator called!" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal default destructor called!" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes sound!" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}