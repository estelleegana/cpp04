#include "Cat.hpp"

Cat::Cat()
{
    _type = "🐱 Cat";
    _b = new Brain();
    std::cout << BOLD GREEN << "Constructeur par defaut " << RESET << _type << std::endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
    std::cout << BOLD GREEN << "Constructeur de recopie " << RESET << _type << std::endl;
}

Cat &Cat::operator=(const Cat &autre)
{
    _b = new Brain(*autre._b);
    _type = autre._type;
    return (*this);
}

Cat::~Cat()
{
    delete _b;
    std::cout << BOLD RED << "Destructeur " << RESET << _type << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "🐱 meow meow" << std::endl;
}

std::string Cat::getIdea(int i) const
{
    return (_b->getIdea(i));
}

Brain *Cat::getBrain() const
{
    return (_b);
}