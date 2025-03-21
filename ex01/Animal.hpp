#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>
#include "Brain.hpp"

#define BOLD "\033[1m"
#define RED "\033[38;2;255;0;0m"
#define GREEN "\033[38;2;0;255;0m"
#define RESET "\033[0m"

class Animal
{
    private:
        std::string _type;
    public:
        Animal();
        Animal(std::string type);
        Animal( const Animal &autre );//constructeur de recopie
        Animal &operator=( const Animal &autre );//surcharge de l'operateur d'affectation
        ~Animal();

        std::string getType() const;
        
        void makeSound() const;
};

class Dog : public Animal
{
    private:
        std::string _type;
        Brain* _br;
    public:
        Dog();
        Dog( const Dog &autre );//constructeur de recopie
        Dog &operator=( const Dog &autre );//surcharge de l'operateur d'affectation
        ~Dog();
};

class Cat : public Animal
{
    private:
        std::string _type;
        Brain *_br;
    public:
        Cat();
        Cat( const Cat &autre );//constructeur de recopie
        Cat &operator=( const Cat &autre );//surcharge de l'operateur d'affectation
        ~Cat();
};


#endif