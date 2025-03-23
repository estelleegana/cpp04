#include "Cat.hpp"

Cat::Cat()
{
    _type = "🐱 Cat";
    std::cout << BOLD GREEN << "Constructeur par defaut " << RESET << _type << std::endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
    std::cout << BOLD GREEN << "Constructeur de recopie " << RESET << _type << " copy is born" << std::endl;
}

Cat &Cat::operator=(const Cat &autre)
{
    _type = autre.getType();
    return (*this);
}

Cat::~Cat()
{
    std::cout << BOLD RED << "Destructeur " << RESET << _type << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "🐱 meow meow" << std::endl;
}