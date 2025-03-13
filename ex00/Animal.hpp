#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>

#define BOLD "\033[1m"
#define RED "\033[38;2;255;0;0m"
#define GREEN "\033[38;2;0;255;0m"
#define RESET "\033[0m"

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string type);
        Animal( const Animal &autre );//constructeur de recopie
        Animal &operator=( const Animal &autre );//surcharge de l'operateur d'affectation
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const;
};

class Dog : public Animal
{
    // private:
    //     std::string _type;
    public:
        Dog();
        Dog( const Dog &autre );//constructeur de recopie
        Dog &operator=( const Dog &autre );//surcharge de l'operateur d'affectation
        ~Dog();

        void makeSound() const;
};

class Cat : public Animal
{
    // private:
    //     std::string _type;
    public:
        Cat();
        Cat( const Cat &autre );//constructeur de recopie
        Cat &operator=( const Cat &autre );//surcharge de l'operateur d'affectation
        ~Cat();

        void makeSound() const;
};

#endif