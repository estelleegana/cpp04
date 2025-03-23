#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << BOLD << "------ SUJET ------"<< RESET<<std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // Animal p;

    delete j;//should not create a leak
    delete i;
    std::cout << std::endl;

    //array[] = 1/2 dogs, 1/2 cats
    std::cout << BOLD << "------ ARRAY d'animaux ------"<< RESET<<std::endl;
    int total = 4;
    const Animal *array[total];
    for (int i = 0; i < total; i++)
    {
        array[i] = new Dog();
        array[i+1] = new Cat();
        i++;
    }
    //get their ideas
    // for (int k = 0; k < total; k++)
    //     array[k]->getIdea(k);
    //make em make some noise
    for (int j = 0; j < total; j++)
        array[j]->makeSound();
    //destroy
    for (int i = 0; i < total; i++)
        delete array[i];
    std::cout << std::endl;
    
    //ideas
    std::cout << BOLD << "------ idees ------" << RESET<<std::endl;
    std::cout << BOLD << "chat" << RESET<<std::endl;
    const Cat *a = new Cat();
    a->getBrain()->setIdea(95, "idee 95 modifiee");
    for (int z = 0; z < 100; z++)
        std::cout << a->getIdea(z) << std::endl;
    std::cout << std::endl;

    std::cout << BOLD << "chien" << RESET <<std::endl;
    const Dog *b = new Dog();
    b->getBrain()->setIdea(3, "idee 3 modifiee");
    for (int o = 0; o < 100; o++)
        std::cout << b->getIdea(o) << std::endl;
    delete a;
    delete b;
    return 0;
}
    