#include "Dog.h"

Dog::Dog() : Animal("Dog") {
  std::cout << "Dog Default constructor called" << std::endl;
  brain = new Brain();
}

Dog::Dog(const Dog& dog) : Animal(dog.getType()) {
  std::cout << "Dog Copy constructor called" << std::endl;
  brain = new Brain(*dog.brain);
}

Dog& Dog::operator=(const Dog& dog) {
  std::cout << "Dog Copy assignment operator called" << std::endl;
  if (this != &dog) {
    this->setType(dog.getType());
  }
  return *this;
}

Dog::~Dog() {
  std::cout << "Dog Destructor called" << std::endl;
  delete brain;
}

void Dog::makeSound() const {
  std::cout << "Woof!" << std::endl;
}
