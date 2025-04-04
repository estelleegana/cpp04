#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl << "----------- types:" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << "----------- bruits:" << std::endl;
    j->makeSound();
    i->makeSound(); //will output the cat sound!

    meta->makeSound();
    std::cout << std::endl;
    
    delete meta;
    delete j;
    delete i;
    

    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* i2 = new WrongCat();

    std::cout << std::endl << "----------- Wrong types:" << std::endl;
    std::cout << i2->getType() << " " << std::endl;
    std::cout << meta2->getType() << " " << std::endl;
    std::cout << std::endl << "----------- Wrong bruits:" << std::endl;
    i2->makeSound(); //will output the cat sound!
    meta2->makeSound();
    std::cout << std::endl;

    delete meta2;
    delete i2;
}
    