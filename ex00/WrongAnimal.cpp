#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {
  std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrong_animal) : type_(wrong_animal.getType()) {
  std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& wrong_animal) {
  std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    if (this != &wrong_animal) {
        this->setType(wrong_animal.getType());
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type_(type) {
  std::cout << "WrongAnimal constructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
  std::cout << type_ << " What kind of animal am I?" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type_;
}

void WrongAnimal::setType(std::string type) {
    type_ = type;
}
