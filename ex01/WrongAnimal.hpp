#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <cstring>

#define BOLD "\033[1m"
#define RED "\033[38;2;255;0;0m"
#define GREEN "\033[38;2;0;255;0m"
#define RESET "\033[0m"


class WrongAnimal
{
    private:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal( const WrongAnimal &autre );//constructeur de recopie
        WrongAnimal &operator=( const WrongAnimal &autre );//surcharge de l'operateur d'affectation
        ~WrongAnimal();

        std::string getType() const;
        
        void makeSound() const;
};

class WrongCat : public WrongAnimal
{
    private:
        std::string _type;
    public:
        WrongCat();
        WrongCat( const WrongCat &autre );//constructeur de recopie
        WrongCat &operator=( const WrongCat &autre );//surcharge de l'operateur d'affectation
        ~WrongCat();
};

#endif