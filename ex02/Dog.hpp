#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_b;
    public:
        Dog();
        Dog( const Dog &autre );
        Dog &operator=( const Dog &autre );
        ~Dog();

        void makeSound() const;

        //getter
        std::string getIdea(int i) const;
        Brain *getBrain() const;
};

#endif