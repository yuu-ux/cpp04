#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();


    const WrongAnimal* wrong_animal = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();
    std::cout << wrong_cat->getType() << " " << std::endl;
    wrong_animal->makeSound();
    wrong_cat->makeSound();
    return 0;
}
