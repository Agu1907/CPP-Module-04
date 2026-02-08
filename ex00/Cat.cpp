#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    std::cout << "Cat default constructor called!" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat copy constructor called!" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment operator called!" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meeeeeeoooooowwww!" << std::endl;
}