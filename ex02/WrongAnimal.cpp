#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("❌ Wrong random animal")
{
    std::cout << BOLD GREEN << "Constructeur par defaut " << RESET << _type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie " << RESET << autre.getType() << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &autre)
{
    _type = autre.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << BOLD RED << "Destructeur " << RESET << _type << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "❌ pas bon animal" << std::endl;
}