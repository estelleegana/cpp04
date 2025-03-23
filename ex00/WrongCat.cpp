#include "WrongCat.hpp"

WrongCat::WrongCat()//heritier ne possede pas les fields de la classe mere
{
    _type = "❌🐱 WrongCat";
    std::cout << BOLD GREEN << "Constructeur par defaut " << RESET << _type << std::endl;
}

WrongCat::WrongCat(const WrongCat &autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie " << RESET << autre.getType() << " copy is born" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &autre)
{
    _type = autre.getType();
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << BOLD RED << "Destructeur " << RESET << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "❌🐱 wrong mmmmeowww" << std::endl;
}