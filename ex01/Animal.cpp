#include "Animal.h"

Animal::Animal() : type_("Animal") {
  std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& animal) : type_(animal.getType()) {
  std::cout << "Animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal) {
  std::cout << "Animal Copy assignment operator called" << std::endl;
  if (this != &animal) {
    this->type_ = animal.getType();
  }
  return *this;
}

Animal::~Animal() {
  std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const std::string& type) : type_(type) {
  std::cout << "Animal constructor called" << std::endl;
}

void Animal::makeSound() const {
  std::cout << type_ << " What kind of animal am I?" << std::endl;
}

const std::string& Animal::getType() const {
  return type_;
}

void Animal::setType(std::string type) {
  type_ = type;
}
