#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    std::cout << "Dog default constructor called!" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    this->brain = new Brain();
    *this->brain = *other.brain;
    std::cout << "Dog copy constructor called!" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignment operator called!" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain();
        *this->brain = *other.brain;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called!" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "Hav hav hav hav hav!" << std::endl;
}

std::string Dog::getIdea(int index) const
{
        return (this->brain->ideas[index]);
}

void Dog::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        this->brain->ideas[index] = idea;
}