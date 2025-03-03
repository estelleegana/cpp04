#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "i->_type : " << i->getType() << std::endl;
    std::cout << "j->_type : " << j->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    delete j;//should not create a leak
    delete i;
}