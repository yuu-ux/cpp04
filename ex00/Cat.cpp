#include "Cat.h"

Cat::Cat() : Animal("Cat") {
  std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat.getType()) {
  std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& cat) {
  std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &cat) {
        this->setType(cat.getType());
    }
    return *this;
}

Cat::~Cat() {
  std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
