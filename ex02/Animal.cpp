#include "Animal.hpp"

Animal::Animal() : _type("Random animal")
{
    std::cout << BOLD GREEN << "Constructeur par defaut " << RESET << _type << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << BOLD GREEN << "Constructeur de recopie " << RESET << copy.getType() << std::endl;
}

Animal &Animal::operator=(const Animal &autre)
{
    _type = autre.getType();
    return (*this);
}

Animal::~Animal()
{
    std::cout << BOLD RED << "Destructeur " << RESET << _type << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const
{
    std::cout << "un animal qui fait du bruit" << std::endl;
}
