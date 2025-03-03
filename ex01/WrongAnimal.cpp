#include "WrongAnimal.hpp"

//---------------------WrongAnimal
WrongAnimal::WrongAnimal()
{
    std::cout << BOLD GREEN << "Constructeur par defaut (WrongAnimal): " << RESET << _type << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << BOLD GREEN << "Constructeur ac _type (WrongAnimal): " << RESET << _type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie (WrongAnimal): " << RESET << autre.getType() << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &autre)
{
    _type = autre.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << BOLD RED << "Destructeur (WrongAnimal): " << RESET << _type << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::makeSound() const
{
    if (strcmp(getType().c_str(), "WrongCat") == 0)
        std::cout << "pas bon chat" << std::endl;
}




//---------------------WrongCat
WrongCat::WrongCat() : _type("WrongCat"), WrongAnimal("WrongCat")
{
    std::cout << BOLD GREEN << "Constructeur par defaut (WrongCat): " << RESET << _type << std::endl;
}

WrongCat::WrongCat(const WrongCat &autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie (WrongCat): " << RESET << autre.getType() << " copy is born" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &autre)
{
    _type = autre.getType();
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << BOLD RED << "Destructeur (WrongCat): " << RESET << std::endl;
}