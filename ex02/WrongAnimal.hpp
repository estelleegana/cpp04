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
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal( const WrongAnimal &autre );
        WrongAnimal &operator=( const WrongAnimal &autre );
        virtual ~WrongAnimal();

        std::string getType() const;
        
        virtual void makeSound() const;
};



#endif