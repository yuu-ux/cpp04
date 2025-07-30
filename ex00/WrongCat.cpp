#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrong_cat) : WrongAnimal(wrong_cat.getType()) {
  std::cout << "Cat Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& wrong_cat) {
  std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &wrong_cat) {
        this->setType(wrong_cat.getType());
    }
    return *this;
}

WrongCat::~WrongCat() {
  std::cout << "Animal Destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
