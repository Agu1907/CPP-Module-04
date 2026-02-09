#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    std::cout << "Cat default constructor called!" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    this->brain = new Brain();
    *this->brain = *other.brain;
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment operator called!" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain();
        *this->brain = *other.brain;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called!" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Meeeeeeoooooowwww!" << std::endl;
}

std::string Cat::getIdea(int index) const
{
        return (this->brain->ideas[index]);
}

void Cat::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        this->brain->ideas[index] = idea;
}