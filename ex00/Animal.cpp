#include "Animal.hpp"

//---------------------ANIMAL
Animal::Animal()
{
    std::cout << BOLD GREEN << "Constructeur par defaut (Animal): " << RESET << _type << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << BOLD GREEN << "Constructeur ac _type (Animal): " << RESET << _type << std::endl;
}

Animal::Animal(const Animal &autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie (Animal): " << RESET << autre.getType() << std::endl;
}

Animal &Animal::operator=(const Animal &autre)
{
    _type = autre.getType();
    return (*this);
}

Animal::~Animal()
{
    std::cout << BOLD RED << "Destructeur (Animal): " << RESET << _type << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const
{
    if (strcmp(getType().c_str(), "Dog") == 0)
        std::cout << "wouaf wouaf" << std::endl;
    else if (strcmp(getType().c_str(), "Cat") == 0)
        std::cout << "meow meow" << std::endl;
}




//--------------------_DOG
Dog::Dog() : _type("Dog"), Animal("Dog")
{
    std::cout << BOLD GREEN << "Constructeur par defaut (Dog): " << RESET << _type << std::endl;
}

Dog::Dog(const Dog &autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie (Dog): " << RESET << autre.getType() << " copy is born" << std::endl;
}

Dog &Dog::operator=(const Dog &autre)
{
    _type = autre.getType();
    return (*this);
}

Dog::~Dog()
{
    std::cout << BOLD RED << "Destructeur (Dog): " << RESET << std::endl;
}




//-----------------------CAT
Cat::Cat() : _type("Cat"), Animal("Cat")
{
    std::cout << BOLD GREEN << "Constructeur par defaut (Cat): " << RESET << _type << std::endl;
}

Cat::Cat(const Cat &autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie (Cat): " << RESET << _type << std::endl;
}

Cat &Cat::operator=(const Cat &autre)
{
    _type = autre.getType();
    return (*this);
}

Cat::~Cat()
{
    std::cout << BOLD RED << "Destructeur (Cat): " << RESET << std::endl;
}
