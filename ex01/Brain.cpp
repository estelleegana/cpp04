#include "Brain.hpp"

Brain::Brain()
{
    std::cout << BOLD GREEN << "Constructeur par defaut (Brain): " << RESET << std::endl;
}

Brain::Brain(const Brain &autre)
{
    *this = autre;
    std::cout << BOLD GREEN << "Constructeur de recopie (Brain): " << RESET << std::endl;
}

Brain &Brain::operator=(const Brain &autre)
{
    return (*this);
}

Brain::~Brain()
{
    std::cout << BOLD RED << "Destructeur (Brain): " << RESET << std::endl;
}
