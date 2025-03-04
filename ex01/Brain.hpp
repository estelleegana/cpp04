#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cstring>

#define BOLD "\033[1m"
#define RED "\033[38;2;255;0;0m"
#define GREEN "\033[38;2;0;255;0m"
#define RESET "\033[0m"

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain( const Brain &autre );//constructeur de recopie
        Brain &operator=( const Brain &autre );//surcharge de l'operateur d'affectation
        ~Brain();
};

#endif