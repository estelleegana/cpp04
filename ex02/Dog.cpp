#include "Dog.hpp"

Dog::Dog()
{
    _type = "🐶 Dog";
    _b = new Brain();
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
    delete _b;
    std::cout << BOLD RED << "Destructeur " << RESET << _type << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "🐶 wouaf wouaf" << std::endl;
}

std::string Dog::getIdea(int i) const
{
    return (_b->getIdea(i));
}

Brain *Dog::getBrain() const
{
    return (_b);
}