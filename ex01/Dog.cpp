#include "Dog.h"

Dog::Dog() : Animal("Dog"), brain_(new Brain()) {
  std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& dog) : Animal(dog.getType()), brain_(new Brain(*dog.brain_)) {
  std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& dog) {
  std::cout << "Dog Copy assignment operator called" << std::endl;
  if (this != &dog) {
    Animal::operator=(dog);
    delete brain_;
    brain_ = new Brain(*dog.brain_);
  }
  return *this;
}

Dog::~Dog() {
  std::cout << "Dog Destructor called" << std::endl;
  delete brain_;
}

void Dog::makeSound() const {
  std::cout << "Woof!" << std::endl;
}

const std::string& Dog::getIdeas(int index) const {
	if (index >= Brain::kMaxIdeas) {
		std::cerr << "index out of range" << std::endl;
	}
	return brain_->getIdeas(index);
}

void Dog::setIdeas(int index, const std::string& ideas) {
	if (index >= Brain::kMaxIdeas) {
		std::cerr << "index out of range" << std::endl;
	}
	brain_->setIdeas(index, ideas);
}

