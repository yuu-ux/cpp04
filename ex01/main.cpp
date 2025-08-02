#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	{
		std::cout << "----------------------delete array----------------------" << std::endl;
		Animal* animals[4];
		std::cout << "----------------------dog array----------------------" << std::endl;
		for (int i = 0; i < 2; ++i) {
			animals[i] = new Dog();
		}
		std::cout << "----------------------cat array----------------------" << std::endl;
		for (int i = 2; i < 4; ++i) {
			animals[i] = new Cat();
		}
		std::cout << "----------------------destructor called----------------------" << std::endl;
		for (int i = 0; i < 4; ++i) {
			delete animals[i];
		}
	}
	{
		std::cout << "----------------------copy test----------------------" << std::endl;
		Cat cat1;
		cat1.setIdeas(0, "idea1");
		std::cout << "cat1 " << cat1.getIdeas(0) << std::endl;
		Cat cat2 = cat1;
		cat2.setIdeas(0, "idea2");
		std::cout << "cat1 " << cat1.getIdeas(0) << std::endl;
	}
}
