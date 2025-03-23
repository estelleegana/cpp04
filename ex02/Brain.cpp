#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = "j'ai un cerveau qui a une idee";
    std::cout << BOLD GREEN << "Constructeur par defaut 🧠" << RESET << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
    std::cout << BOLD GREEN << "Constructeur de recopie 🧠" << RESET << std::endl;
}

Brain &Brain::operator=(const Brain &autre)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = autre._ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << BOLD RED << "Destructeur 🧠" << RESET << std::endl;
}

std::string Brain::getIdea(int i) const
{
    return (_ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
    _ideas[i] = idea;
}