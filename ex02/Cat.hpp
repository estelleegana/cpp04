#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_b;
    public:
        Cat();
        Cat( const Cat &autre );
        Cat &operator=( const Cat &autre );
        ~Cat();

        void makeSound() const;

        //getter
        std::string getIdea(int i) const;
        Brain *getBrain() const;
};

#endif