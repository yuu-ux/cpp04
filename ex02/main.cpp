#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
  Animal* animals[100];
  for (int i = 0; i < 50; ++i) {
    animals[i] = new Dog();
  }
  for (int i = 50; i < 100; ++i) {
    animals[i] = new Cat();
  }

  for (int i = 0; i < 100; ++i) {
    delete animals[i];
  }
}
