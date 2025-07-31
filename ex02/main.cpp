#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	{
		std::cout << "----------------------delete array----------------------" << std::endl;
		Animal* animals[100];
		for (int i = 0; i < 50; ++i) {
			animals[i] = new Dog();
		}
		for (int i = 50; i < 100; ++i) {
			animals[i] = new Cat();
		}

		for (int i = 0; i < 50; ++i) {
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

