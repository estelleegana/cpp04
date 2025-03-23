#include "Dog.hpp"

Dog::Dog()
{
    _type = "🐶 Dog";
    std::cout << BOLD GREEN << "Constructeur par defaut " << RESET << _type << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
    std::cout << BOLD GREEN << "Constructeur de recopie " << RESET << _type << std::endl;
}

Dog &Dog::operator=(const Dog &autre)
{
    _type = autre.getType();
    return (*this);
}

Dog::~Dog()
{
    std::cout << BOLD RED << "Destructeur " << RESET << _type << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "🐶 wouaf wouaf" << std::endl;
}