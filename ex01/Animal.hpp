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
        Animal( const Animal &autre );
        Animal &operator=( const Animal &autre );
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const;
};

#endif